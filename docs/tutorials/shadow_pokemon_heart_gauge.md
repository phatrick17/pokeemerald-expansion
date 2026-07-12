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

* **It earns no Exp. in battle** (it is skipped by `getexp`, including Exp. Share).
* Its **heart gauge lowers** by:
    * `P_SHADOW_GAUGE_BATTLE_AMOUNT` every battle it participates in.
    * `P_SHADOW_GAUGE_STEP_AMOUNT` every `P_SHADOW_GAUGE_STEP_INTERVAL` steps while in the party.
    * Any amount you like by calling `LowerMonHeartGauge(mon, amount)` — this is
      the hook for future "Scent" items.

When purified (`PurifyMon`):

* If the species defines `.purifiedSpecies` (e.g. `SPECIES_BAYLEEF_SHADOW` →
  `SPECIES_BAYLEEF`), the Pokémon changes into that species.
* `MON_DATA_IS_SHADOW` is cleared and the heart gauge zeroed.
* It receives the **National Ribbon**, like purified Shadow Pokémon in Colosseum/XD.
* Its friendship is set to the species' base friendship.
* Shadow moves (Shadow Blitz, Shadow Wave, …) are replaced with the strongest
  level-up moves of the purified species it doesn't already know.

## Configuration (`include/config/pokemon.h`)

| Define | Default | Description |
|---|---|---|
| `P_SHADOW_HEART_GAUGE_MAX` | `100` | Starting heart gauge value (1-255). |
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
| `GetSelectedMonHeartGauge` | `VAR_RESULT` = current heart gauge value |
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
void LowerMonHeartGauge(struct Pokemon *mon, u32 amount); // clamps at 0
bool32 CanMonBePurified(struct Pokemon *mon);
u16 GetPurifiedSpecies(u16 species);
void PurifyMon(struct Pokemon *mon);                      // instant, no scene
void BeginPurificationScene(struct Pokemon *mon, u8 partyId); // ceremony
```

`MON_DATA_HEART_GAUGE` can be read/written with `GetMonData`/`SetMonData`
(stored in 8 previously unused bits of the Pokémon substructs, so no save
struct growth).
