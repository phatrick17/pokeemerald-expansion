#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(P_SHADOW_LOCK_MOVES);
    ASSUME(gSpeciesInfo[SPECIES_BAYLEEF_SHADOW].isShadow);
}

SINGLE_BATTLE_TEST("Shadow Pokémon enter battle with only their first move at a full heart gauge")
{
    GIVEN {
        PLAYER(SPECIES_BAYLEEF_SHADOW) { Moves(MOVE_SHADOW_BLITZ, MOVE_RAZOR_LEAF, MOVE_TAUNT, MOVE_PROTECT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SHADOW_BLITZ); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        EXPECT_EQ(gBattleMons[battler].moves[0], MOVE_SHADOW_BLITZ);
        EXPECT_EQ(gBattleMons[battler].moves[1], MOVE_NONE);
        EXPECT_EQ(gBattleMons[battler].moves[2], MOVE_NONE);
        EXPECT_EQ(gBattleMons[battler].moves[3], MOVE_NONE);
        // The locked moves stay stored on the party Pokémon.
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_MOVE2), MOVE_RAZOR_LEAF);
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_MOVE3), MOVE_TAUNT);
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_MOVE4), MOVE_PROTECT);
    }
}

SINGLE_BATTLE_TEST("Shadow Pokémon unlock a move slot for each quarter of the heart gauge emptied")
{
    u32 quartersEmptied = 0, gauge = 0, unlockedSlots = 0, slot;
    PARAMETRIZE { quartersEmptied = 0; }
    PARAMETRIZE { quartersEmptied = 1; }
    PARAMETRIZE { quartersEmptied = 2; }
    PARAMETRIZE { quartersEmptied = 3; }
    GIVEN {
        gauge = GetSpeciesShadowHeartGaugeMax(SPECIES_BAYLEEF_SHADOW) * (MAX_MON_MOVES - quartersEmptied) / MAX_MON_MOVES;
        PLAYER(SPECIES_BAYLEEF_SHADOW) { Moves(MOVE_SHADOW_BLITZ, MOVE_RAZOR_LEAF, MOVE_TAUNT, MOVE_PROTECT); HeartGauge(gauge); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SHADOW_BLITZ); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        unlockedSlots = quartersEmptied + 1;
        for (slot = 0; slot < MAX_MON_MOVES; slot++)
        {
            if (slot < unlockedSlots)
                EXPECT_NE(gBattleMons[battler].moves[slot], MOVE_NONE);
            else
                EXPECT_EQ(gBattleMons[battler].moves[slot], MOVE_NONE);
        }
    }
}

SINGLE_BATTLE_TEST("Shadow Pokémon with an empty heart gauge have all of their moves")
{
    GIVEN {
        PLAYER(SPECIES_BAYLEEF_SHADOW) { Moves(MOVE_SHADOW_BLITZ, MOVE_RAZOR_LEAF, MOVE_TAUNT, MOVE_PROTECT); HeartGauge(0); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAZOR_LEAF); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        EXPECT_EQ(gBattleMons[battler].moves[1], MOVE_RAZOR_LEAF);
        EXPECT_EQ(gBattleMons[battler].moves[2], MOVE_TAUNT);
        EXPECT_EQ(gBattleMons[battler].moves[3], MOVE_PROTECT);
    }
}

SINGLE_BATTLE_TEST("Shadow Pokémon on the opposing side fight with their full movesets")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BAYLEEF_SHADOW) { Moves(MOVE_SHADOW_BLITZ, MOVE_RAZOR_LEAF, MOVE_TAUNT, MOVE_PROTECT); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAZOR_LEAF); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        EXPECT_EQ(gBattleMons[battler].moves[1], MOVE_RAZOR_LEAF);
        EXPECT_EQ(gBattleMons[battler].moves[2], MOVE_TAUNT);
        EXPECT_EQ(gBattleMons[battler].moves[3], MOVE_PROTECT);
    }
}
