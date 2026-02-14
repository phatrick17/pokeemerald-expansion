        .include "MPlayDef.s"

        .equ    mus_dmca_battle_grp, voicegroup000
        .equ    mus_dmca_battle_pri, 0
        .equ    mus_dmca_battle_rev, 0
        .equ    mus_dmca_battle_key, 0

        .section .rodata
        .global mus_dmca_battle
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_dmca_battle_0:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 146/2
mus_dmca_battle_0_LOOP:
        .byte           VOICE , 85
        .byte           PAN   , c_v-14
        .byte           VOL   , 70
        .byte           N05   , Cn2 , v074
        .byte   W11
        .byte           N06
        .byte   W13
        .byte           N05
        .byte   W12
        .byte                   Cn2
        .byte   W11
        .byte           N06
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N07
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn2
        .byte   W01
@ 001   ----------------------------------------
mus_dmca_battle_0_1:
        .byte   W12
        .byte           N05   , Cn2 , v074
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_dmca_battle_0_2:
        .byte           N05   , Cn2 , v074
        .byte   W11
        .byte           N06
        .byte   W13
        .byte           N05
        .byte   W12
        .byte                   Cn2
        .byte   W11
        .byte           N06
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte           N07
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn2
        .byte   W01
        .byte   PEND
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 012   ----------------------------------------
mus_dmca_battle_0_12:
        .byte           N06   , Gs1 , v073
        .byte   W12
        .byte           N05   , Gs1 , v071
        .byte   W12
        .byte           N06   , Gs1 , v069
        .byte   W12
        .byte                   Gs1 , v071
        .byte   W12
        .byte                   Gs1 , v073
        .byte   W12
        .byte                   Gs1 , v071
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gs1 , v073
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
mus_dmca_battle_0_13:
        .byte           N06   , Cs2 , v071
        .byte   W12
        .byte                   Cs2 , v069
        .byte   W12
        .byte                   Cs2 , v073
        .byte   W12
        .byte                   Cs2 , v071
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2 , v069
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_12
@ 019   ----------------------------------------
        .byte           N06   , Cs2 , v071
        .byte   W12
        .byte                   Cs2 , v069
        .byte   W12
        .byte                   Cs2 , v073
        .byte   W12
        .byte                   Cs2 , v071
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte                   Ds2 , v069
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte                   Ds2
        .byte   W12
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_2
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_1
@ 026   ----------------------------------------
mus_dmca_battle_0_26:
        .byte           N05   , Gn1 , v074
        .byte   W11
        .byte           N06
        .byte   W13
        .byte           N05
        .byte   W12
        .byte                   Gn1
        .byte   W11
        .byte           N06
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte           N07
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Gn1
        .byte   W01
        .byte   PEND
@ 027   ----------------------------------------
mus_dmca_battle_0_27:
        .byte   W12
        .byte           N05   , Gn1 , v074
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte   PEND
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_26
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_0_27
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_dmca_battle_1:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_1_LOOP:
        .byte           VOICE , 33
        .byte           PAN   , c_v+34
        .byte           VOL   , 79
        .byte           N05   , Cn1 , v106
        .byte   W11
        .byte           N06
        .byte   W13
        .byte           N05
        .byte   W12
        .byte                   Cn1
        .byte   W11
        .byte           N06
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N07
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn1
        .byte   W01
@ 001   ----------------------------------------
mus_dmca_battle_1_1:
        .byte   W12
        .byte           N05   , Cn1 , v106
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_dmca_battle_1_2:
        .byte           N05   , Cn1 , v106
        .byte   W11
        .byte           N06
        .byte   W13
        .byte           N05
        .byte   W12
        .byte                   Cn1
        .byte   W11
        .byte           N06
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N07
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Cn1
        .byte   W01
        .byte   PEND
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 012   ----------------------------------------
mus_dmca_battle_1_12:
        .byte           N06   , Gs1 , v106
        .byte   W12
        .byte           N05
        .byte   W12
        .byte           N06
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte                   Gs1
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
mus_dmca_battle_1_13:
        .byte           N06   , Cs1 , v106
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_12
@ 019   ----------------------------------------
        .byte           N06   , Cs1 , v106
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Cs1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Ds1
        .byte   W12
        .byte                   Ds1
        .byte   W12
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_2
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_1
@ 026   ----------------------------------------
mus_dmca_battle_1_26:
        .byte           N08   , Gn0 , v106
        .byte   W11
        .byte           N09
        .byte   W13
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W11
        .byte           N10
        .byte   W12
        .byte           N09
        .byte   W12
        .byte           N10
        .byte   W12
        .byte           N09
        .byte   W12
        .byte           N10
        .byte   W01
        .byte   PEND
@ 027   ----------------------------------------
mus_dmca_battle_1_27:
        .byte   W12
        .byte           N09   , Gn0 , v106
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte                   Gn0
        .byte   W12
        .byte   PEND
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_26
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_1_27
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_dmca_battle_2:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_2_LOOP:
        .byte           VOICE , 17
        .byte           PAN   , c_v-7
        .byte           VOL   , 93
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W96
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W96
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W96
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
mus_dmca_battle_2_12:
        .byte           N90   , Ds3 , v108 , gtp1
        .byte           N90   , Gn3
        .byte   W96
        .byte   PEND
@ 013   ----------------------------------------
mus_dmca_battle_2_13:
        .byte           N88   , Gs2 , v108
        .byte           N90   , Fn3
        .byte   W96
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_2_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_2_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_2_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_2_13
@ 018   ----------------------------------------
        .byte           N92   , Gn3 , v108
        .byte           N92   , Ds3
        .byte   W92
        .byte   W03
        .byte           N42   , Cs3 , v108 , gtp1
        .byte   W01
@ 019   ----------------------------------------
        .byte           N42   , Fn3
        .byte   W48
        .byte           N40   , Gn3 , v108 , gtp1
        .byte           N40   , Ds3
        .byte   W48
@ 020   ----------------------------------------
        .byte           N88   , Cn3
        .byte           N88   , Fn3 , v108 , gtp1
        .byte   W96
@ 021   ----------------------------------------
        .byte           N80   , En3 , v108 , gtp1
        .byte                   Cn3
        .byte   W96
@ 022   ----------------------------------------
mus_dmca_battle_2_22:
        .byte           N56   , Cn4 , v075 , gtp1
        .byte                   Ds4
        .byte           N56   , Bn4 , v070 , gtp3
        .byte   W68
        .byte   W03
        .byte           N06   , Ds4 , v075
        .byte           N06   , Cn4
        .byte           N07   , Gn4
        .byte   W12
        .byte                   Bn4
        .byte   W01
        .byte           N05   , Cn4
        .byte           N04   , Ds4
        .byte   W12
        .byte   PEND
@ 023   ----------------------------------------
        .byte   W12
        .byte                   Cn4
        .byte           N04   , Ds4
        .byte           N05   , Gn4
        .byte   W24
        .byte                   Ds4
        .byte           N05   , Gn4
        .byte           N03   , Cn4
        .byte   W60
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_2_22
@ 025   ----------------------------------------
        .byte   W12
        .byte           N04   , Cn4 , v075
        .byte           N04   , Ds4
        .byte           N05   , Gn4
        .byte   W24
        .byte                   Ds4
        .byte           N05   , Gn4
        .byte           N03   , Cn4
        .byte   W56
        .byte   W03
        .byte           TIE   , Gn1 , v097
        .byte   W01
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W80
        .byte           EOT
        .byte   W03
        .byte           N92   , Gn1 , v089 , gtp3
        .byte                   Dn2
        .byte   W13
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_dmca_battle_3:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_3_LOOP:
        .byte           VOICE , 81
        .byte           N03   , Cn6 , v047
        .byte   W06
        .byte           VOL   , 93
        .byte           N03   , Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W07
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Gs5 , v047
        .byte   W06
        .byte                   Gs5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W01
@ 001   ----------------------------------------
        .byte   W05
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W07
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   As5 , v047
        .byte   W06
        .byte                   As5 , v020
        .byte   W07
@ 002   ----------------------------------------
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W07
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Gs5 , v047
        .byte   W06
        .byte                   Gs5 , v020
        .byte   W06
@ 003   ----------------------------------------
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   As5 , v047
        .byte   W06
        .byte                   As5 , v020
        .byte   W06
@ 004   ----------------------------------------
mus_dmca_battle_3_4:
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N06   , Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W07
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N03   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N06   , Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W07
        .byte           N04   , Gs5 , v047
        .byte   W06
        .byte                   Gs5 , v020
        .byte   W06
        .byte   PEND
@ 005   ----------------------------------------
mus_dmca_battle_3_5:
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W07
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N04   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W07
        .byte           N02   , As5 , v047
        .byte   W06
        .byte                   As5 , v020
        .byte   W06
        .byte   PEND
@ 006   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W07
        .byte                   An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N04   , Fn5 , v047
        .byte   W06
        .byte                   Fn5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N02   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
@ 007   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Fn5 , v047
        .byte   W06
        .byte                   Fn5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Fn5 , v047
        .byte   W06
        .byte                   Fn5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N03   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_5
@ 010   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte           N05   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W07
        .byte                   An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N04   , Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N02   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
@ 011   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Ds5 , v047
        .byte   W06
        .byte                   Ds5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N03   , An5 , v047
        .byte   W06
        .byte                   An5 , v020
        .byte   W06
@ 012   ----------------------------------------
mus_dmca_battle_3_12:
        .byte           N05   , As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte           N04   , Ds5 , v049
        .byte   W06
        .byte                   Ds5 , v022
        .byte   W06
        .byte                   As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte                   Gn5 , v049
        .byte   W06
        .byte                   Gn5 , v022
        .byte   W06
        .byte                   As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte                   Ds5 , v049
        .byte   W06
        .byte                   Ds5 , v022
        .byte   W06
        .byte                   As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte                   Gn5 , v049
        .byte   W06
        .byte                   Gn5 , v022
        .byte   W06
        .byte   PEND
@ 013   ----------------------------------------
mus_dmca_battle_3_13:
        .byte           N04   , As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte           N05   , Fn5 , v049
        .byte   W06
        .byte                   Fn5 , v022
        .byte   W06
        .byte           N04   , As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte                   Gn5 , v049
        .byte   W06
        .byte                   Gn5 , v022
        .byte   W06
        .byte           N03   , As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte           N04   , Ds5 , v049
        .byte   W06
        .byte                   Ds5 , v022
        .byte   W06
        .byte                   As5 , v049
        .byte   W06
        .byte                   As5 , v022
        .byte   W06
        .byte           N03   , Gn5 , v049
        .byte   W06
        .byte                   Gn5 , v022
        .byte   W06
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_12
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_3_13
@ 020   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Fn5 , v047
        .byte   W06
        .byte                   Fn5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   Fn5 , v047
        .byte   W06
        .byte                   Fn5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N03   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
@ 021   ----------------------------------------
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , En5 , v047
        .byte   W06
        .byte                   En5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W05
        .byte           N05   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W07
        .byte           N04   , Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte                   En5 , v047
        .byte   W06
        .byte                   En5 , v020
        .byte   W06
        .byte                   Cn6 , v047
        .byte   W06
        .byte                   Cn6 , v020
        .byte   W06
        .byte           N03   , Gn5 , v047
        .byte   W06
        .byte                   Gn5 , v020
        .byte   W06
@ 022   ----------------------------------------
        .byte           N05   , Cn3 , v037
        .byte   W12
        .byte           N10   , Cn3 , v034
        .byte   W11
        .byte           N11   , Ds3 , v043
        .byte   W13
        .byte           N05   , Cn3 , v039
        .byte   W24
        .byte                   As2 , v041
        .byte   W24
        .byte                   Gn2 , v039
        .byte   W11
        .byte                   Cn3 , v037
        .byte   W01
@ 023   ----------------------------------------
        .byte   W11
        .byte           N09   , Cn3 , v039
        .byte   W12
        .byte           N07   , Ds3 , v043
        .byte   W13
        .byte           N08   , Cn3 , v037
        .byte   W23
        .byte           N06   , Ds3 , v039
        .byte   W13
        .byte           N13   , Fn3
        .byte   W11
        .byte           N09   , Gn3 , v031
        .byte   W12
        .byte           N08   , Cn3 , v039
        .byte   W01
@ 024   ----------------------------------------
        .byte   W12
        .byte                   Cn3 , v037
        .byte   W12
        .byte           N07   , Ds3 , v034
        .byte   W12
        .byte           N08   , Cn3 , v037
        .byte   W24
        .byte           N05   , As2 , v043
        .byte   W24
        .byte           N04   , Gn2 , v037
        .byte   W12
@ 025   ----------------------------------------
        .byte           N06   , Cn3
        .byte   W12
        .byte           N08   , Cn3 , v039
        .byte   W12
        .byte           N06   , Ds3 , v041
        .byte   W12
        .byte           N07   , Cn3 , v039
        .byte   W24
        .byte           N06   , Ds3 , v037
        .byte   W12
        .byte           N08   , Fn3 , v034
        .byte   W12
        .byte           N06   , Gn3
        .byte   W12
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte           VOL   , 100
        .byte   GOTO
         .word  mus_dmca_battle_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_dmca_battle_4:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_4_LOOP:
        .byte           VOICE , 1
        .byte           PAN   , c_v-8
        .byte           VOL   , 110
        .byte           N05   , Cn6 , v085
        .byte   W11
        .byte           N06   , Ds5
        .byte   W13
        .byte           N05   , Cn6
        .byte   W12
        .byte           N03   , Gn5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W11
        .byte           N06   , Ds5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W13
        .byte           N04   , Gs5
        .byte   W12
@ 001   ----------------------------------------
        .byte           N05   , Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W13
        .byte                   Cn6
        .byte   W12
        .byte           N04   , An5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W13
        .byte           N02   , As5
        .byte   W12
@ 002   ----------------------------------------
        .byte           N04   , Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W13
        .byte                   Gn5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte           N04   , Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte           N02   , Gs5
        .byte   W12
@ 003   ----------------------------------------
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Ds5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , An5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte           N03   , As5
        .byte   W12
@ 004   ----------------------------------------
mus_dmca_battle_4_4:
        .byte           N04   , Cn3 , v085
        .byte           N04   , Ds3
        .byte           N04   , Gn3
        .byte   W36
        .byte           N30   , Cn3 , v085 , gtp1
        .byte           N32   , Ds3 , v085 , gtp1
        .byte                   Gn3
        .byte   W48
        .byte           N10   , Cn3
        .byte           N11   , Ds3
        .byte           N11   , Gs3
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_dmca_battle_4_5:
        .byte   W12
        .byte           N04   , Cn3 , v085
        .byte           N04   , Ds3
        .byte           N05   , Gs3
        .byte   W24
        .byte           N32   , Cn3 , v085 , gtp1
        .byte           N32   , Ds3
        .byte           N32   , An3 , v085 , gtp3
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
        .byte           N11   , Cn3
        .byte           N10   , Ds3
        .byte           N10   , As3
        .byte   W36
        .byte           N64   , Cn3 , v085 , gtp1
        .byte                   Fn3
        .byte           N64   , An3 , v085 , gtp1
        .byte   W60
@ 007   ----------------------------------------
        .byte   W12
        .byte           N05   , Cn3 , v091
        .byte           N04   , Fn3
        .byte           N04   , An3
        .byte   W24
        .byte           N52   , An2 , v091 , gtp1
        .byte           N52   , Cn3
        .byte           N52   , Fn3
        .byte   W60
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_5
@ 010   ----------------------------------------
        .byte           N11   , Cn3 , v085
        .byte           N10   , Ds3
        .byte           N10   , As3
        .byte   W36
        .byte           N56   , Cn3
        .byte           N54   , Fn3 , v085 , gtp1
        .byte           N56   , An3
        .byte   W60
@ 011   ----------------------------------------
        .byte           N28   , Cn3 , v094 , gtp1
        .byte           N28   , Fn3
        .byte           N24   , An3 , v094 , gtp3
        .byte   W32
        .byte   W03
        .byte           N32   , Cn4
        .byte           N32   , Fn3 , v094 , gtp1
        .byte           N32   , An3
        .byte   W36
        .byte   W01
        .byte           N17   , An3 , v093
        .byte           N17   , Fn4
        .byte           N16   , Cn4
        .byte   W24
@ 012   ----------------------------------------
mus_dmca_battle_4_12:
        .byte   W01
        .byte           N14   , As5 , v103
        .byte           N13   , Fn5
        .byte   W18
        .byte           N14   , As5 , v080
        .byte           N13   , Fn5
        .byte   W18
        .byte           N14   , As5 , v072
        .byte           N13   , Fn5
        .byte   W18
        .byte           N14   , As5 , v063
        .byte           N13   , Fn5
        .byte   W40
        .byte   W01
        .byte   PEND
@ 013   ----------------------------------------
mus_dmca_battle_4_13:
        .byte   W01
        .byte           N15   , As5 , v103
        .byte           N13   , Cs5
        .byte   W18
        .byte           N15   , As5 , v082
        .byte           N13   , Cs5
        .byte   W18
        .byte           N15   , As5 , v071
        .byte           N13   , Cs5
        .byte   W18
        .byte           N15   , As5 , v060
        .byte           N13   , Cs5
        .byte   W40
        .byte   W01
        .byte   PEND
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_4_12
@ 019   ----------------------------------------
        .byte           N11   , Cs5 , v103
        .byte           N10   , Fn5
        .byte   W18
        .byte           N11   , Cs5 , v075
        .byte           N10   , Fn5
        .byte   W18
        .byte           N11   , Cs5 , v053
        .byte           N10   , Fn5
        .byte   W12
        .byte                   Ds5 , v103
        .byte           N10   , Fn5
        .byte   W18
        .byte                   Ds5 , v073
        .byte           N10   , Fn5
        .byte   W18
        .byte                   Ds5 , v055
        .byte           N10   , Fn5
        .byte   W12
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte           N06   , Gn4 , v100
        .byte           N05   , Bn4
        .byte           N06   , Cn3 , v120
        .byte   W12
        .byte                   Gn4 , v100
        .byte           N06   , Bn4
        .byte   W01
        .byte           N10   , Cn3 , v117
        .byte   W11
        .byte           N11   , Ds3 , v126
        .byte   W12
        .byte           N06   , Cn3 , v122
        .byte   W24
        .byte   W01
        .byte           N05   , As2 , v124
        .byte   W24
        .byte                   Gn2 , v122
        .byte   W11
@ 023   ----------------------------------------
        .byte                   Cn3 , v120
        .byte   W11
        .byte                   Gn4 , v100
        .byte           N04   , Ds4
        .byte   W01
        .byte           N09   , Cn3 , v122
        .byte   W12
        .byte           N07   , Ds3 , v126
        .byte   W12
        .byte           N04   , Gn4 , v100
        .byte           N04   , Ds4
        .byte   W01
        .byte           N07   , Cn3 , v120
        .byte   W23
        .byte           N06   , Ds3 , v122
        .byte   W13
        .byte           N12   , Fn3
        .byte   W11
        .byte           N09   , Gn3 , v114
        .byte   W11
        .byte           N05   , Gn4 , v100
        .byte           N05   , Bn4
        .byte   W01
@ 024   ----------------------------------------
        .byte           N08   , Cn3 , v122
        .byte   W11
        .byte           N05   , Gn4 , v100
        .byte           N05   , Bn4
        .byte   W02
        .byte           N07   , Cn3 , v120
        .byte   W11
        .byte           N08   , Ds3 , v117
        .byte   W13
        .byte                   Cn3 , v120
        .byte   W24
        .byte           N04   , As2 , v126
        .byte   W24
        .byte                   Gn2 , v120
        .byte   W11
@ 025   ----------------------------------------
        .byte   W01
        .byte           N05   , Cn3
        .byte   W11
        .byte           N04   , Gn4 , v100
        .byte           N03   , Ds4
        .byte   W01
        .byte           N08   , Cn3 , v122
        .byte   W12
        .byte           N06   , Ds3 , v124
        .byte   W10
        .byte           N04   , Gn4 , v100
        .byte   W01
        .byte           N03   , Ds4
        .byte   W01
        .byte           N07   , Cn3 , v122
        .byte   W24
        .byte           N06   , Ds3 , v120
        .byte   W12
        .byte           N08   , Fn3 , v117
        .byte   W12
        .byte           N06   , Gn3
        .byte   W11
@ 026   ----------------------------------------
        .byte           N04   , Dn4 , v126
        .byte           N04   , Gn4
        .byte           N05   , Cn5
        .byte   W11
        .byte                   Gn4
        .byte   W01
        .byte                   Cn5
        .byte           N04   , Dn4
        .byte   W12
        .byte           N06   , Cn5
        .byte           N04   , Gn4
        .byte           N04   , Dn4
        .byte   W12
        .byte           N05   , Gn4
        .byte           N04   , Dn4
        .byte           N06   , Bn4
        .byte   W24
        .byte           N05   , Fs4
        .byte           N06   , As4
        .byte           N05   , Cs4
        .byte   W24
        .byte           N15   , An4
        .byte           N13   , Fn4
        .byte           N13   , Cn4
        .byte   W12
@ 027   ----------------------------------------
        .byte   W12
        .byte           N07   , As4
        .byte   W12
        .byte           N08   , An4
        .byte           N06   , Cn4
        .byte           N05   , Fn4
        .byte   W12
        .byte           N06   , As4
        .byte   W24
        .byte           N12   , An4
        .byte           N12   , Cn4
        .byte           N12   , Fn4
        .byte   W24
        .byte           N06   , An3
        .byte           N06   , Cn4
        .byte           N06   , Fn4
        .byte   W12
@ 028   ----------------------------------------
        .byte                   Bn3
        .byte           N07   , Dn4
        .byte           N07   , Gn4
        .byte   W11
        .byte                   As4
        .byte           N06   , Fs4
        .byte           N05   , Cs4
        .byte   W12
        .byte                   Bn3
        .byte           N06   , Dn4
        .byte           N05   , Gn4
        .byte   W12
        .byte           N07   , As4
        .byte           N05   , Cs4
        .byte           N05   , Fs4
        .byte   W24
        .byte           N06   , Gn4
        .byte           N06   , Cn5
        .byte           N04   , En4
        .byte   W12
        .byte           N05   , As4
        .byte   W01
        .byte           N04   , Fs4
        .byte           N04   , Cs4
        .byte   W11
        .byte           N66   , Gn4 , v126 , gtp1
        .byte                   Bn3
        .byte           N66   , Dn4 , v126 , gtp1
        .byte   W13
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_dmca_battle_5:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_5_LOOP:
        .byte           VOICE , 48
        .byte           VOL   , 110
        .byte           BENDR , 0
        .byte           MODT  , mod_vib
        .byte           TUNE  , c_v-16
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_dmca_battle_5_4:
        .byte           N80   , Cn2 , v076 , gtp2
        .byte           N84   , Gn2
        .byte   W84
        .byte           N44   , Cn2
        .byte           N48   , Gs2
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_dmca_battle_5_5:
        .byte   W36
        .byte           N56   , Cn2 , v076 , gtp1
        .byte                   An2
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
mus_dmca_battle_5_6:
        .byte           N32   , Cn2 , v076 , gtp1
        .byte           N36   , As2 , v076 , gtp1
        .byte   W36
        .byte           TIE   , Cn2
        .byte           TIE   , An2
        .byte   W60
        .byte   PEND
@ 007   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           EOT   , Cn2
        .byte                   An2
        .byte   W05
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_5_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_5_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_5_6
@ 011   ----------------------------------------
        .byte   W72
        .byte           N12   , Cn4 , v102
        .byte   W12
        .byte                   Dn4
        .byte   W07
        .byte           EOT   , Cn2
        .byte                   An2
        .byte   W05
@ 012   ----------------------------------------
        .byte           N12   , Ds4 , v096
        .byte           N12   , Gn4 , v100
        .byte   W12
        .byte           N05   , Cn4 , v088
        .byte           N06   , Fn4 , v094
        .byte   W06
        .byte                   Cn4 , v088
        .byte           N06   , Ds4 , v094
        .byte   W06
        .byte           N28   , Gs3 , v088
        .byte           N28   , Dn4 , v094
        .byte   W36
        .byte           N16   , Gs3 , v088
        .byte           N16   , Cn4 , v098
        .byte   W18
        .byte           N05   , Cn4 , v088
        .byte           N06   , Ds4 , v098
        .byte   W06
        .byte           N05   , Cn4 , v088
        .byte           N06   , Fn4 , v098
        .byte   W06
        .byte           N05   , Cn4 , v088
        .byte           N06   , Gn4 , v098
        .byte   W06
@ 013   ----------------------------------------
        .byte           N32   , Fn4 , v088 , gtp3
        .byte                   As4 , v094
        .byte   W36
        .byte           N28   , Gs4 , v088 , gtp1
        .byte                   Cn5 , v094
        .byte   W36
        .byte           N12   , Fn4 , v088
        .byte           N12   , As4 , v094
        .byte   W12
        .byte           N05   , Gs3 , v088
        .byte           N06   , Gn4 , v098
        .byte   W06
        .byte           N05   , Gs3 , v088
        .byte           N06   , Fn4 , v098
        .byte   W06
@ 014   ----------------------------------------
        .byte           N32   , Cn4 , v088 , gtp1
        .byte           N36   , Ds4 , v094
        .byte   W36
        .byte           N32   , Gs3 , v088 , gtp3
        .byte                   Cn4 , v102
        .byte   W36
        .byte           N11   , Cn4 , v088
        .byte           N11   , Ds4 , v094
        .byte   W12
        .byte                   Cn4 , v088
        .byte           N11   , Fn4 , v094
        .byte   W12
@ 015   ----------------------------------------
        .byte           N36   , Fn3 , v088
        .byte           N36   , As3 , v094
        .byte   W36
        .byte           N23   , Gs3 , v088
        .byte           N23   , Cs4 , v098
        .byte   W24
        .byte                   Cs4 , v088
        .byte           N23   , Fn4 , v094
        .byte   W24
        .byte           N12   , Fn4 , v088
        .byte           N10   , Gs4 , v094
        .byte   W12
@ 016   ----------------------------------------
        .byte           N16   , Gs4 , v104
        .byte           N16   , Ds5
        .byte   W24
        .byte           N76   , Gs4 , v088
        .byte           N76   , Cn5 , v094
        .byte   W72
@ 017   ----------------------------------------
        .byte   W16
        .byte           N14   , Gs4 , v088
        .byte           N16   , Cn5 , v094
        .byte   W16
        .byte                   Gs4 , v088
        .byte           N16   , Cs5 , v094
        .byte   W16
        .byte                   Cn5
        .byte           N16   , Ds5
        .byte   W16
        .byte           N15   , Gs4 , v088
        .byte           N15   , Cs5 , v094
        .byte   W16
        .byte                   Gs4 , v088
        .byte           N15   , Cn5 , v094
        .byte   W16
@ 018   ----------------------------------------
        .byte           N06   , Fn4 , v104
        .byte           N06   , As4 , v114
        .byte   W06
        .byte           N05   , Gs4 , v104
        .byte           N05   , Cn5 , v108
        .byte   W06
        .byte                   Fn4 , v100
        .byte           N06   , As4 , v104
        .byte   W06
        .byte           N80   , Ds4 , v088 , gtp2
        .byte                   Gs4 , v094
        .byte   W78
@ 019   ----------------------------------------
        .byte   W24
        .byte           N23   , Cs4 , v088
        .byte           N23   , Fn4 , v094
        .byte   W24
        .byte           N05   , Gn3 , v108
        .byte           N06   , Ds4 , v112
        .byte   W06
        .byte           N05   , As3 , v100
        .byte           N06   , Fn4
        .byte   W06
        .byte           N32   , As3 , v088 , gtp3
        .byte                   Gn4 , v094
        .byte   W36
@ 020   ----------------------------------------
        .byte           N72   , Cn4 , v088 , gtp3
        .byte                   Fn4 , v094
        .byte           N78   , Fn2 , v099 , gtp1
        .byte           TIE   , Gn2
        .byte   W84
        .byte           N05   , Cn4 , v106
        .byte           N05   , Gn4 , v110
        .byte   W06
        .byte                   Cn4 , v100
        .byte           N06   , Fn4
        .byte   W06
@ 021   ----------------------------------------
        .byte           N84   , Cn4 , v088 , gtp3
        .byte                   En4 , v094
        .byte           N88   , En2 , v099 , gtp1
        .byte   W88
        .byte   W01
        .byte           EOT   , Gn2
        .byte   W07
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W96
@ 024   ----------------------------------------
        .byte   W96
@ 025   ----------------------------------------
        .byte   W96
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.7) ******************@

mus_dmca_battle_6:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_6_LOOP:
        .byte           VOICE , 126
        .byte           VOL   , 62
        .byte           N03   , Ds6 , v073
        .byte   W06
        .byte                   Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N05   , Bn5 , v073
        .byte   W12
        .byte           N04   , Cs6
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N03
        .byte   W24
        .byte           N05   , Cs6 , v073
        .byte   W12
@ 001   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N05   , Cs6 , v073
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N05   , Cs6 , v073
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N03
        .byte   W24
        .byte           N05   , Cs6 , v073
        .byte   W12
@ 002   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N05   , Cs6 , v073
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N06   , Cs6 , v073
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N06
        .byte   W24
        .byte                   Cs6 , v073
        .byte   W12
@ 003   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N07   , Cs6 , v073
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N06   , Cs6 , v073
        .byte   W06
        .byte           N01   , Cs6 , v051
        .byte   W18
        .byte           N03
        .byte   W24
        .byte           N05   , Ds6 , v073
        .byte   W12
@ 004   ----------------------------------------
        .byte                   Cs6 , v064
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N06   , Cs6
        .byte   W12
        .byte           N05   , Ds6 , v064
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N03   , Cs6 , v064
        .byte   W12
        .byte           N09   , Ds6
        .byte   W12
        .byte           N03   , Cs6
        .byte   W12
        .byte           N05   , Ds6
        .byte   W12
@ 005   ----------------------------------------
mus_dmca_battle_6_5:
        .byte           N05   , Cs6 , v064
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W05
        .byte                   Ds6
        .byte   W07
        .byte                   Ds6
        .byte   W05
        .byte           N06   , Cs6
        .byte   W13
        .byte           N05   , Ds6 , v064
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N03   , Cs6 , v064
        .byte   W12
        .byte           N09   , Ds6
        .byte   W12
        .byte           N03   , Cs6
        .byte   W11
        .byte           N06   , Ds6
        .byte   W13
        .byte   PEND
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_5
@ 012   ----------------------------------------
mus_dmca_battle_6_12:
        .byte           N05   , Cs6 , v075
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N05   , Gs6 , v075
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N05   , Gs6 , v075
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N05   , Cs6 , v075
        .byte   W12
        .byte           N04   , Gs6
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N06   , Cs6 , v075
        .byte   W12
        .byte           N05   , Gs6
        .byte   W12
        .byte   PEND
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_12
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_12
@ 015   ----------------------------------------
mus_dmca_battle_6_15:
        .byte           N05   , Cs6 , v075
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N05   , Gs6 , v075
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N05   , Gs6 , v075
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N05   , Cs6 , v075
        .byte   W12
        .byte           N04   , Gs6
        .byte   W12
        .byte           N06   , Cs6
        .byte   W12
        .byte           N05   , Gs6
        .byte   W12
        .byte   PEND
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_15
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_12
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_15
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_15
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_15
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_12
@ 022   ----------------------------------------
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N05   , Gs6 , v069
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N04   , Gs6 , v069
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N06   , Cs6 , v069
        .byte   W12
        .byte           N04   , Gs6
        .byte   W12
@ 023   ----------------------------------------
mus_dmca_battle_6_23:
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N04   , Gs6 , v069
        .byte   W12
        .byte           N06   , Cs6
        .byte   W12
        .byte           N03   , Gs6
        .byte   W12
        .byte   PEND
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_6_23
@ 025   ----------------------------------------
        .byte           N03   , Gs6 , v069
        .byte   W06
        .byte                   Ds6 , v051
        .byte   W06
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte           N02   , Cs6
        .byte   W12
        .byte           N04   , Gs6 , v069
        .byte   W06
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte           N04   , Gs6 , v069
        .byte   W12
        .byte           N06   , Cs6
        .byte   W12
        .byte           N04   , Gs6
        .byte   W12
@ 026   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N04   , Ds6 , v060
        .byte   W18
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N04   , Ds6 , v060
        .byte   W12
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N04   , Ds6 , v060
        .byte   W24
@ 027   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N04   , Ds6 , v060
        .byte   W18
        .byte           N02   , Cs6 , v051
        .byte   W06
        .byte           N05   , Ds6 , v060
        .byte   W12
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N05   , Ds6 , v060
        .byte   W24
@ 028   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N05   , Ds6 , v060
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte                   Cs6
        .byte   W06
        .byte           N05   , Ds6 , v060
        .byte   W12
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N05   , Ds6 , v060
        .byte   W24
@ 029   ----------------------------------------
        .byte           N03   , Ds6 , v051
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte                   Ds6
        .byte   W06
        .byte           N05   , Ds6 , v060
        .byte           N02   , Cs6 , v051
        .byte   W18
        .byte                   Cs6
        .byte   W06
        .byte           N04   , Ds6 , v060
        .byte   W12
        .byte           N02   , Cs6 , v051
        .byte   W12
        .byte           N04   , Ds6 , v060
        .byte   W24
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_6_LOOP
        .byte   FINE

@****************** Track 7 (Midi-Chn.8) ******************@

mus_dmca_battle_7:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_7_LOOP:
        .byte           VOICE , 60
        .byte           VOL   , 93
        .byte           BENDR , 0
        .byte           MODT  , mod_vib
        .byte           TUNE  , c_v-16
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_dmca_battle_7_4:
        .byte   W12
        .byte           N05   , Cn4 , v117
        .byte   W11
        .byte                   Ds4
        .byte   W12
        .byte           N20   , Gn4
        .byte   W24
        .byte   W01
        .byte           N05   , Cn4
        .byte   W12
        .byte           N03   , Ds4
        .byte   W12
        .byte           N19   , Gs4
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
        .byte   W11
        .byte           N05   , Cn4
        .byte   W12
        .byte           N04   , Ds4
        .byte   W12
        .byte           N22   , An4
        .byte   W24
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Ds4
        .byte   W13
        .byte           N04   , As4
        .byte   W11
        .byte           N05
        .byte   W01
@ 006   ----------------------------------------
        .byte   W32
        .byte   W03
        .byte           N21   , An4
        .byte   W24
        .byte   W01
        .byte           N09   , Fn4
        .byte   W11
        .byte           TIE   , Cn4
        .byte   W24
        .byte   W01
@ 007   ----------------------------------------
        .byte   W80
        .byte   W03
        .byte           EOT
        .byte   W13
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_7_4
@ 009   ----------------------------------------
        .byte   W11
        .byte           N05   , Cn4 , v117
        .byte   W12
        .byte           N04   , Ds4
        .byte   W12
        .byte           N22   , An4
        .byte   W24
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Ds4
        .byte   W13
        .byte           N04   , As4
        .byte   W11
        .byte           N05   , As4 , v115
        .byte   W01
@ 010   ----------------------------------------
        .byte   W36
        .byte           N22   , An4
        .byte   W24
        .byte           N12   , As4
        .byte   W12
        .byte           N21   , Cn5
        .byte   W21
        .byte           N05   , En5 , v097
        .byte   W03
@ 011   ----------------------------------------
        .byte           N30   , Fn5 , v115
        .byte   W32
        .byte   W03
        .byte           N28   , Cn5
        .byte   W36
        .byte           N11
        .byte   W12
        .byte                   Dn5
        .byte   W13
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W96
@ 015   ----------------------------------------
        .byte   W96
@ 016   ----------------------------------------
        .byte   W96
@ 017   ----------------------------------------
        .byte   W96
@ 018   ----------------------------------------
        .byte   W96
@ 019   ----------------------------------------
        .byte   W96
@ 020   ----------------------------------------
        .byte   W96
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W96
@ 023   ----------------------------------------
        .byte   W96
@ 024   ----------------------------------------
        .byte   W96
@ 025   ----------------------------------------
        .byte   W96
@ 026   ----------------------------------------
        .byte   W96
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_7_LOOP
        .byte   FINE

@****************** Track 8 (Midi-Chn.9) ******************@

mus_dmca_battle_8:
        .byte   KEYSH , mus_dmca_battle_key+0
@ 000   ----------------------------------------
mus_dmca_battle_8_LOOP:
        .byte           VOICE , 0
        .byte           VOL   , 84
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v111
        .byte           N48   , Dn1 , v110 , gtp3
        .byte           N24   , Cs2 , v111
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 001   ----------------------------------------
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N05   , Cn2 , v111
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Gn1 , v111
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Gn1 , v031
        .byte           N06   , Bn0 , v111
        .byte           N06   , Dn1 , v107
        .byte           N11   , Cs2 , v111
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Gn1 , v031
        .byte           N06   , Bn0 , v111
        .byte           N15   , Dn1
        .byte           N84   , Cs2
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 002   ----------------------------------------
        .byte           N03   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N09   , Bn0 , v111
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N09   , Bn0 , v107
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 003   ----------------------------------------
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Gn1 , v031
        .byte           N06   , Bn0 , v111
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N09   , Bn0 , v107
        .byte           N09   , Dn1
        .byte           N56   , Cs2 , v111 , gtp2
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N09   , Dn1 , v107
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Gn1 , v031
        .byte           N06   , Bn0 , v107
        .byte           N09   , Dn1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N09   , Dn1 , v107
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 004   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N72   , Cs2 , v111
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 005   ----------------------------------------
mus_dmca_battle_8_5:
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v112
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v110
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
        .byte   PEND
@ 006   ----------------------------------------
mus_dmca_battle_8_6:
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v125
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N04   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v114
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v125
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v110 , gtp1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
        .byte   PEND
@ 007   ----------------------------------------
mus_dmca_battle_8_7:
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v120
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v114
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v125
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
        .byte   PEND
@ 008   ----------------------------------------
mus_dmca_battle_8_8:
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N05   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_6
@ 011   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v120
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte           N24   , Dn1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v125
        .byte           N04   , Dn1 , v114
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte           N04   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N12   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte           N05   , Dn1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_8
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_5
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_6
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_7
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_8
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_5
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_6
@ 019   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v120
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte           N18   , Dn1 , v120
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N11   , Dn1 , v114
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v125
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N04   , Dn1 , v114
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte           N11   , Dn1 , v110
        .byte   W06
@ 020   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Bn0 , v127
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N18   , Dn1 , v112
        .byte   W06
        .byte           N06   , An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N10   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 021   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v112
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v110
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N24   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N05   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v120
        .byte           N16   , Dn1
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 022   ----------------------------------------
mus_dmca_battle_8_22:
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N04   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
        .byte   PEND
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_5
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_22
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_dmca_battle_8_5
@ 026   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N36   , Cs2 , v108
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N04   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N04   , Fn2 , v124
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 027   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N06   , Bn0 , v112
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v110
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N04   , Fn2 , v124
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 028   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N06   , Bn0 , v127
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N04   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N24   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N04   , Fn2 , v124
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N36   , Cs2 , v110
        .byte           N04   , Bn0 , v123
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , An1 , v062
        .byte   W06
@ 029   ----------------------------------------
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N05   , Fn2 , v124
        .byte           N06   , Bn0 , v112
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N01   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Bn0 , v110
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   An1 , v077
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte           N04   , Bn0 , v120
        .byte   W06
        .byte           N06   , An1 , v077
        .byte   W06
        .byte                   Fn1 , v027
        .byte           N04   , Fn2 , v124
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Gn1 , v047
        .byte   W06
        .byte                   An1 , v077
        .byte           N05   , Bn0 , v117
        .byte   W06
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte                   Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte           N04   , Fn2 , v124
        .byte           N23   , Dn1 , v112
        .byte   W06
        .byte           N06   , Cn1 , v077
        .byte           N06   , Fn1 , v027
        .byte   W06
        .byte           N04   , Bn0 , v077
        .byte           N06   , Gn1 , v031
        .byte   W06
        .byte           N05   , Cn1 , v077
        .byte           N05   , An1 , v062
        .byte   W06
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_dmca_battle_8_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_dmca_battle:
        .byte   9                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_dmca_battle_pri     @ Priority
        .byte   mus_dmca_battle_rev     @ Reverb

        .word   mus_dmca_battle_grp    

        .word   mus_dmca_battle_0
        .word   mus_dmca_battle_1
        .word   mus_dmca_battle_2
        .word   mus_dmca_battle_3
        .word   mus_dmca_battle_4
        .word   mus_dmca_battle_5
        .word   mus_dmca_battle_6
        .word   mus_dmca_battle_7
        .word   mus_dmca_battle_8

        .end
