# Claude Persistent Memory — pokeemerald-expansion

## Poryscript Notes

Reference: https://github.com/huderlem/poryscript

---

### Script basics

```
script MyScript {
    lock
    faceplayer
    msgbox("Hello!")
    release
    end
}
```

Scripts compile to `MyScript::` (global label). Data defined inside (text, movement, mart) gets local labels automatically.

---

### Inline text / msgbox

Poryscript handles string data automatically — no need to write `.string` directives or manage text labels by hand.

**Auto strings** — just write multiline text directly, poryscript inserts `\n`, `\l`, `\p` automatically:
- Each new line → `\n` (first continuation) then `\l` (subsequent)
- Blank line → `\p` (paragraph break)

```
msgbox("Hi, I'm the first line,
        and I'm the second line,
        and this is the third.

        New paragraph here.")
```

Compiles to:
```
.string "Hi, I'm the first line,\n"
.string "and I'm the second line,\l"
.string "and this is the third.\p"
.string "New paragraph here.$"
```

**Manual strings** — adjacent quoted strings are concatenated, you control breaks explicitly with `\n` `\l` `\p`:

```
msgbox("Line one.\n"
       "Line two.\l"
       "Line three.\p"
       "New paragraph.")
```

**`format()`** — auto-wraps text to fit the textbox width (cannot be combined with auto strings):

```
msgbox(format("Long text that poryscript will automatically wrap to fit the display."))
```

With optional font ID and custom line length:
```
format("Some text here.", "1_latin_rse", 100)
```

`\N` inside `format()` inserts the right break type (`\n` or `\l`) automatically.

**Named `text` block** — for text shared across multiple scripts or referenced from C:

```
text MySharedText {
    "Hello, I can be used by many scripts."
}

script MyScript {
    msgbox(MySharedText)
}
```

---

### Inline movement with `moves()`

Movement can be defined inline inside commands — no separate `movement` block needed.

```
script MyScript {
    lock
    applymovement(2, moves(
        walk_left
        walk_up * 5
        face_down
    ))
    waitmovement(0)
    release
}
```

Single-line (whitespace and commas are both fine):
```
applymovement(2, moves(walk_left walk_up * 5 face_down))
applymovement(2, moves(walk_left, walk_up * 5, face_down))
```

Key points:
- `*` repeats a command N times: `walk_up * 5`
- `step_end` is appended automatically
- Named `movement MyName {}` blocks have **local** scope (not global)

---

### Mart statement

Defines pokemart item lists — no raw `.2byte` assembly needed. `ITEM_NONE` terminator is added automatically.

```
script MyShop {
    lock
    pokemart(MyMartItems)
    release
}

mart MyMartItems {
    ITEM_LAVA_COOKIE
    ITEM_MOOMOO_MILK
    ITEM_RARE_CANDY
    ITEM_LEMONADE
}
```

Note: there is no inline `items()` operator (unlike `moves()`). The `mart` block is the compact form.

---

### Control flow

**if / elif / else:**
```
if (flag(FLAG_GOT_ITEM)) {
    msgbox("You have it!")
} elif (var(VAR_COUNT) > 2) {
    msgbox("Too many.")
} else {
    msgbox("Nothing yet.")
}
```

**Compound conditions** with `&&` and `||`:
```
if (!defeated(TRAINER_RIVAL) && var(VAR_TIME) != DAY) {
    msgbox("Come back during the day.")
}
```

Condition operators by type:
- `flag()` — `==` only (or bare truthiness: `if (flag(FLAG_X))`)
- `var()` — `==` `!=` `>` `>=` `<` `<=`
- `defeated()` — `==` only

**while / do-while / break / continue:**
```
while (var(VAR_RESULT) != 1) {
    msgbox("Try again?", MSGBOX_YESNO)
}

do {
    msgbox("Help?", MSGBOX_YESNO)
} while (var(VAR_RESULT) == 0)

while {          // infinite loop
    if (var(VAR_RESULT) == 1) { break }
}
```

**switch:**
Cases break implicitly (no fall-through). Empty cases group together:
```
switch (var(VAR_NUM_THINGS)) {
    case 0:
        msgbox("Zero.")
    case 1:
    case 2:
        msgbox("One or two.")
    default:
        msgbox("Three or more.")
}
```

---

### raw statement

Paste raw GBA assembly directly into the output — useful for things poryscript can't express:

```
raw `
MyScript_Movement:
    walk_left
    walk_down
    step_end

MyScript_LongText:
    .string "Text too long to inline.\p"
    .string "Stored down here instead.$"
`
```

---

### mapscripts

```
mapscripts MyMap_MapScripts {
    MAP_SCRIPT_ON_LOAD: MyScript
    MAP_SCRIPT_ON_TRANSITION {
        // inline script body
        setflag(FLAG_SOMETHING)
    }
}
```

---

### Misc

- Comments: `//` and `/* */` both work
- Local labels inside scripts: `MyScript_Label:` — can `goto(MyScript_Label)` within the script
- Global labels: append `(global)` — `MyLabel(global):`
