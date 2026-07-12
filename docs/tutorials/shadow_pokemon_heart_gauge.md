# Shadow Pokémon Heart Gauge & Purification

This feature adds a Colosseum/XD-style heart gauge to Shadow Pokémon.
A Shadow Pokémon's heart gauge starts **full** and lowers over time. Once it
reaches **0**, the Pokémon can be purified through a ceremony that reuses the
evolution scene (with its own music and text).

A Pokémon counts as a Shadow Pokémon if either:

* its species has `.isShadow = TRUE` in `gSpeciesInfo` (e.g. `SPECIES_BAYLEEF_SHADOW`), or
* the Pokémon itself has `MON_DATA_IS_SHADOW` set to `TRUE`.

## Behavior

While a Pokémon is a Shadow Pokémon:

* **It earns no Exp. in battle directly.** Its Exp. share is calculated exactly
  as normal (Exp. Share, multipliers and level caps included), but is silently
  **stored** instead of applied, XD-style. The stored Exp. is granted when the
  Pokémon is purified, potentially leveling it up several times at once.
  Stored Exp. is kept in units of 64 (rounded to the nearest unit, so e.g. 500
  earned Exp. is stored as 512) and caps at 131,008. Shadow Pokémon gain no EVs.
  Day-Care Exp. is stored the same way, and Rare/Exp. Candies have no effect on
  Shadow Pokémon.
* Its **heart gauge lowers** by:
    * `P_SHADOW_GAUGE_BATTLE_AMOUNT` every battle it participates in.
    * `P_SHADOW_GAUGE_STEP_AMOUNT` every `P_SHADOW_GAUGE_STEP_INTERVAL` steps while in the party.
    * Any amount you like by calling `LowerMonHeartGauge(mon, amount)` — this is
      the hook for future "Scent" items.

When purified (`PurifyMon`):

* If the species defines `.purifiedSpecies` (e.g. `SPECIES_BAYLEEF_SHADOW` →
  `SPECIES_BAYLEEF`), the Pokémon changes into that species.
* **All stored Exp. is granted** and the Pokémon's level is recalculated.
* `MON_DATA_IS_SHADOW` is cleared and the heart gauge zeroed.
* It receives the **National Ribbon**, like purified Shadow Pokémon in Colosseum/XD.
* Its friendship is set to the species' base friendship.
* Shadow moves (Shadow Blitz, Shadow Wave, …) are replaced with the strongest
  level-up moves of the purified species — at its new, post-Exp.-grant level —
  that it doesn't already know.

## Heart gauge size

By default the heart gauge scales with the species' **base stat total**:
`gauge max = BST / P_SHADOW_GAUGE_BST_DIVISOR`, capped at 255. With the default
divisor of 3 and default drain rates:

| Species (BST) | Gauge max | Battles to purify | Steps only |
|---|---|---|---|
| Makuhita (237) | 79 | 27 | ~20,200 |
| Pidgey (251) | 83 | 28 | ~21,200 |
| Bayleef (405) | 135 | 45 | ~34,600 |
| Entei (580) | 193 | 65 | ~49,400 |
| Lugia (680) | 226 | 76 | ~57,900 |

(In practice both drains combine, plus future Scents, so real numbers land in
between.) Raise the divisor to make purification faster overall; set it to `0`
to give every Shadow Pokémon the same static `P_SHADOW_HEART_GAUGE_MAX` instead.

## Configuration (`include/config/pokemon.h`)

| Define | Default | Description |
|---|---|---|
| `P_SHADOW_GAUGE_BST_DIVISOR` | `3` | Gauge max = base stat total / this (capped 255). `0` = use the static value below. |
| `P_SHADOW_HEART_GAUGE_MAX` | `100` | Static starting gauge (1-255), used only when the divisor is `0`. |
| `P_SHADOW_GAUGE_STEP_INTERVAL` | `256` | Steps per gauge decrease (lower to `128` for faster purification). |
| `P_SHADOW_GAUGE_STEP_AMOUNT` | `1` | Gauge lost per step interval. |
| `P_SHADOW_GAUGE_BATTLE_AMOUNT` | `3` | Gauge lost per battle participated in. |
| `P_SHADOW_PURIFY_MUSIC` | `MUS_RG_MYSTERY_GIFT` | Ceremony music (the normal evolution scene uses `MUS_EVOLUTION`). |
| `P_SHADOW_PURIFY_FANFARE` | `MUS_EVOLVED` | Fanfare when the purification completes. |

## Creating Shadow Pokémon

* Species flagged with `.isShadow = TRUE` are always Shadow Pokémon; their
  heart gauge is automatically filled on creation (`givemon`, `createmon`,
  trainer parties, etc.).
* Alternatively flag an individual Pokémon from C with
  `SetMonData(mon, MON_DATA_IS_SHADOW, &gTrue)` — this also fills its heart
  gauge.

## Script specials

All of these operate on the party slot in `VAR_0x8004` (as set by
`special ChoosePartyMon`):

| Special | Result |
|---|---|
| `IsSelectedMonShadow` | `VAR_RESULT` = mon is a Shadow Pokémon |
| `GetSelectedMonHeartGauge` | `VAR_RESULT` = current heart gauge, `VAR_0x8005` = its species' gauge max |
| `CanSelectedMonBePurified` | `VAR_RESULT` = shadow **and** gauge is 0 |
| `DoPurificationCeremony` | Plays the ceremony and purifies the mon. Use `waitstate` after. |

## Example: purification stone script

```
PurificationStone_EventScript_Purify::
	lock
	faceplayer
	msgbox PurificationStone_Text_ChooseAMon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PurificationStone_EventScript_Done
	special IsSelectedMonShadow
	goto_if_eq VAR_RESULT, FALSE, PurificationStone_EventScript_NotShadow
	special CanSelectedMonBePurified
	goto_if_eq VAR_RESULT, FALSE, PurificationStone_EventScript_HeartNotReady
	special DoPurificationCeremony
	waitstate
	msgbox PurificationStone_Text_Purified, MSGBOX_DEFAULT
	release
	end

PurificationStone_EventScript_NotShadow::
	msgbox PurificationStone_Text_NotShadow, MSGBOX_DEFAULT
	release
	end

PurificationStone_EventScript_HeartNotReady::
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox PurificationStone_Text_HeartStillClosed, MSGBOX_DEFAULT
	release
	end

PurificationStone_EventScript_Done::
	release
	end
```

You can show progress with `GetSelectedMonHeartGauge`, e.g. comparing
`VAR_RESULT` against thresholds to display Colosseum-style messages
("The door to its heart is opening…").

## C API

```c
bool32 IsMonShadow(struct Pokemon *mon);
bool32 IsBoxMonShadow(struct BoxPokemon *boxMon);
u32 GetSpeciesShadowHeartGaugeMax(u16 species);           // BST-scaled or static
void LowerMonHeartGauge(struct Pokemon *mon, u32 amount); // clamps at 0
void AddMonStoredExperience(struct Pokemon *mon, u32 amount); // banks Exp.
bool32 CanMonBePurified(struct Pokemon *mon);
u16 GetPurifiedSpecies(u16 species);
void PurifyMon(struct Pokemon *mon);                      // instant, no scene
void BeginPurificationScene(struct Pokemon *mon, u8 partyId); // ceremony
```

`MON_DATA_HEART_GAUGE` and `MON_DATA_STORED_EXP` can be read/written with
`GetMonData`/`SetMonData` (both live in previously unused bits of the Pokémon
substructs, so no save struct growth).
