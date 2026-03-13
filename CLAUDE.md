# Claude Persistent Memory — pokeemerald-expansion

## Poryscript Notes

### Inline Movement with `moves()`

Movement data can be defined **inline** inside commands using the `moves()` operator instead of a separate `movement` block.

**Standalone movement block (local scope, not global):**
```
movement MyMovement {
    walk_left
    walk_up * 5
    face_down
}
script MyScript {
    lock
    applymovement(2, MyMovement)
    waitmovement(0)
    release
}
```

**Equivalent inline form using `moves()`:**
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

**Single-line form is also valid:**
```
applymovement(2, moves(walk_left walk_up * 5 face_down))
```

**Comma-separated form (also valid, for readability):**
```
applymovement(2, moves(walk_left, walk_up * 5, face_down))
```

Key points:
- `*` repeats a single movement command N times (e.g. `walk_up * 5`)
- `moves()` can be used anywhere a movement reference is accepted
- Whitespace and commas between movement commands are interchangeable
- `step_end` is appended automatically by poryscript
- Movement defined with `movement MyName {}` has **local** scope (not global)
