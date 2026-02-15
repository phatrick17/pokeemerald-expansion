        .include "MPlayDef.s"

        .equ    mus_littleroot_grp, voicegroup_colosseum_trainer_voicegroup
        .equ    mus_littleroot_pri, 0
        .equ    mus_littleroot_rev, 0
        .equ    mus_littleroot_key, 0

        .section .rodata
        .global mus_littleroot
        .align  2

@****************** Track 0 (Midi-Chn.1) ******************@

mus_littleroot_0:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 146/2
mus_littleroot_0_LOOP:
        .byte           VOICE , 33
        .byte           PAN   , c_v+34
        .byte           VOL   , 56
        .byte           N05   , Cn1 , v106
        .byte   W92
        .byte   W03
        .byte           N06
        .byte   W01
@ 001   ----------------------------------------
        .byte   W48
        .byte                   Cn1
        .byte   W48
@ 002   ----------------------------------------
        .byte           N05
        .byte   W11
        .byte           N06
        .byte   W36
        .byte                   Cn1
        .byte   W12
        .byte                   Cn1
        .byte   W12
        .byte           N07
        .byte   W24
        .byte           N06
        .byte   W01
@ 003   ----------------------------------------
mus_littleroot_0_3:
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
@ 004   ----------------------------------------
mus_littleroot_0_4:
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
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_4
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_4
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 012   ----------------------------------------
mus_littleroot_0_12:
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
mus_littleroot_0_13:
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
         .word  mus_littleroot_0_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_12
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
         .word  mus_littleroot_0_4
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_4
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_4
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_3
@ 026   ----------------------------------------
mus_littleroot_0_26:
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
        .byte   W12
        .byte           N09
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
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_26
@ 029   ----------------------------------------
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
        .byte   W11
        .byte   GOTO
         .word  mus_littleroot_0_LOOP
        .byte   FINE

@****************** Track 1 (Midi-Chn.2) ******************@

mus_littleroot_1:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_1_LOOP:
        .byte           VOICE , 2
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
        .byte           N90   , Gn3 , v108
        .byte   W96
@ 013   ----------------------------------------
        .byte                   Fn3
        .byte   W96
@ 014   ----------------------------------------
        .byte                   Gn3
        .byte   W96
@ 015   ----------------------------------------
        .byte                   Fn3
        .byte   W96
@ 016   ----------------------------------------
        .byte                   Gn3
        .byte   W96
@ 017   ----------------------------------------
        .byte                   Fn3
        .byte   W96
@ 018   ----------------------------------------
        .byte           N92   , Gn3
        .byte   W96
@ 019   ----------------------------------------
        .byte           N42   , Fn3
        .byte   W48
        .byte           N40   , Gn3 , v108 , gtp1
        .byte   W48
@ 020   ----------------------------------------
        .byte           N88   , Fn3 , v108 , gtp1
        .byte   W96
@ 021   ----------------------------------------
        .byte           N80   , En3 , v108 , gtp1
        .byte   W96
@ 022   ----------------------------------------
mus_littleroot_1_22:
        .byte           N56   , Bn4 , v070 , gtp3
        .byte   W68
        .byte   W03
        .byte           N07   , Gn4 , v075
        .byte   W12
        .byte                   Bn4
        .byte   W13
        .byte   PEND
@ 023   ----------------------------------------
        .byte   W12
        .byte           N05   , Gn4
        .byte   W24
        .byte                   Gn4
        .byte   W60
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_22
@ 025   ----------------------------------------
        .byte   W12
        .byte           N05   , Gn4 , v075
        .byte   W24
        .byte                   Gn4
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
        .byte           N92   , Dn2 , v089 , gtp3
        .byte   W13
@ 029   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte   GOTO
         .word  mus_littleroot_1_LOOP
        .byte   FINE

@****************** Track 2 (Midi-Chn.3) ******************@

mus_littleroot_2:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_2_LOOP:
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
mus_littleroot_2_4:
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
mus_littleroot_2_5:
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
         .word  mus_littleroot_2_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_5
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
mus_littleroot_2_12:
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
mus_littleroot_2_13:
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
         .word  mus_littleroot_2_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_12
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_13
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
        .byte   W92
        .byte   W03
        .byte           VOL   , 100
        .byte   GOTO
         .word  mus_littleroot_2_LOOP
        .byte   FINE

@****************** Track 3 (Midi-Chn.4) ******************@

mus_littleroot_3:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_3_LOOP:
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
        .byte   W24
        .byte   W01
@ 002   ----------------------------------------
        .byte           N04
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
        .byte   W24
@ 004   ----------------------------------------
mus_littleroot_3_4:
        .byte           N04   , Ds3 , v085
        .byte           N04   , Gn3
        .byte   W36
        .byte           N32   , Ds3 , v085 , gtp1
        .byte                   Gn3
        .byte   W48
        .byte           N11   , Ds3
        .byte           N11   , Gs3
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_littleroot_3_5:
        .byte   W12
        .byte           N04   , Ds3 , v085
        .byte           N05   , Gs3
        .byte   W24
        .byte           N32   , Ds3
        .byte           N32   , An3 , v085 , gtp3
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
        .byte           N10   , Ds3
        .byte           N10   , As3
        .byte   W36
        .byte           N64   , Fn3 , v085 , gtp1
        .byte                   An3
        .byte   W60
@ 007   ----------------------------------------
        .byte   W12
        .byte           N04   , Fn3 , v091
        .byte           N04   , An3
        .byte   W24
        .byte           N52   , Cn3
        .byte           N52   , Fn3
        .byte   W60
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_3_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_3_5
@ 010   ----------------------------------------
        .byte           N10   , Ds3 , v085
        .byte           N10   , As3
        .byte   W36
        .byte           N54   , Fn3 , v085 , gtp1
        .byte           N56   , An3
        .byte   W60
@ 011   ----------------------------------------
        .byte           N28   , Fn3 , v094
        .byte           N24   , An3 , v094 , gtp3
        .byte   W32
        .byte   W03
        .byte           N32   , Cn4
        .byte           N32   , An3
        .byte   W36
        .byte   W01
        .byte           N16   , Cn4 , v093
        .byte   W24
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
        .byte           N05   , Bn4 , v098
        .byte           N06   , Cn3 , v120
        .byte   W12
        .byte                   Bn4 , v098
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
        .byte   W01
        .byte           N09   , Cn3 , v122
        .byte   W12
        .byte           N07   , Ds3 , v126
        .byte   W12
        .byte           N04   , Gn4 , v100
        .byte   W01
        .byte           N07   , Cn3 , v120
        .byte   W23
        .byte           N06   , Ds3 , v122
        .byte   W13
        .byte           N12   , Fn3
        .byte   W11
        .byte           N09   , Gn3 , v114
        .byte   W11
        .byte           N05   , Bn4 , v098
        .byte   W01
@ 024   ----------------------------------------
        .byte           N08   , Cn3 , v122
        .byte   W11
        .byte           N05   , Bn4 , v098
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
        .byte   W01
        .byte           N08   , Cn3 , v122
        .byte   W12
        .byte           N06   , Ds3 , v124
        .byte   W10
        .byte           N04   , Gn4 , v100
        .byte   W02
        .byte           N07   , Cn3 , v122
        .byte   W24
        .byte           N06   , Ds3 , v120
        .byte   W12
        .byte           N08   , Fn3 , v117
        .byte   W12
        .byte           N06   , Gn3
        .byte   W11
@ 026   ----------------------------------------
        .byte           N04   , Gn4 , v126
        .byte           N05   , Cn5
        .byte   W11
        .byte                   Gn4
        .byte   W01
        .byte                   Cn5
        .byte   W12
        .byte           N06
        .byte           N04   , Gn4
        .byte   W12
        .byte           N05
        .byte           N06   , Bn4 , v098
        .byte   W24
        .byte           N05   , Fs4 , v126
        .byte           N06   , As4
        .byte   W24
        .byte           N15   , An4
        .byte           N13   , Fn4
        .byte   W12
@ 027   ----------------------------------------
        .byte   W12
        .byte           N07   , As4
        .byte   W12
        .byte           N08   , An4
        .byte           N05   , Fn4
        .byte   W12
        .byte           N06   , As4
        .byte   W24
        .byte           N12   , An4
        .byte           N12   , Fn4
        .byte   W24
        .byte           N06
        .byte   W12
@ 028   ----------------------------------------
        .byte                   Bn4 , v127
        .byte           N06   , Gn4
        .byte           N06   , Dn4
        .byte   W11
        .byte           N07   , As4 , v126
        .byte   W01
        .byte           N06   , Cs4 , v127
        .byte   W12
        .byte                   Bn4
        .byte           N06   , Dn4
        .byte   W11
        .byte           N07   , As4 , v126
        .byte   W01
        .byte           N06   , Cs4 , v127
        .byte   W24
        .byte                   Cn5
        .byte   W11
        .byte           N05   , As4 , v126
        .byte   W13
        .byte           N66   , Bn4 , v127
        .byte           N66   , Dn4 , v051
        .byte   W12
@ 029   ----------------------------------------
        .byte   W92
        .byte   W03
        .byte   GOTO
         .word  mus_littleroot_3_LOOP
        .byte   FINE

@****************** Track 4 (Midi-Chn.8) ******************@

mus_littleroot_4:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_4_LOOP:
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
mus_littleroot_4_4:
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
         .word  mus_littleroot_4_4
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
        .byte   W92
        .byte   W03
        .byte   GOTO
         .word  mus_littleroot_4_LOOP
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_littleroot_5:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_5_LOOP:
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
mus_littleroot_5_4:
        .byte           N84   , Gn2 , v076
        .byte   W84
        .byte           N48   , Gs2
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_littleroot_5_5:
        .byte   W36
        .byte           N56   , An2 , v076 , gtp1
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
mus_littleroot_5_6:
        .byte           N36   , As2 , v076 , gtp1
        .byte   W36
        .byte           TIE   , An2
        .byte   W60
        .byte   PEND
@ 007   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           EOT
        .byte   W05
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_5_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_5_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_5_6
@ 011   ----------------------------------------
        .byte   W72
        .byte           N12   , Cn4 , v102
        .byte   W12
        .byte                   Dn4
        .byte   W07
        .byte           EOT   , An2
        .byte   W05
@ 012   ----------------------------------------
        .byte           N12   , Ds4 , v096
        .byte   W12
        .byte           N06   , Fn4 , v094
        .byte   W06
        .byte                   Ds4
        .byte   W06
        .byte           N28   , Dn4
        .byte   W36
        .byte           N16   , Cn4 , v098
        .byte   W18
        .byte           N06   , Ds4
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte                   Gn4
        .byte   W06
@ 013   ----------------------------------------
        .byte           N32   , As4 , v094 , gtp3
        .byte   W36
        .byte           N28   , Cn5 , v094 , gtp1
        .byte   W36
        .byte           N12   , As4
        .byte   W12
        .byte           N06   , Gn4 , v098
        .byte   W06
        .byte                   Fn4
        .byte   W06
@ 014   ----------------------------------------
        .byte           N36   , Ds4 , v094
        .byte   W36
        .byte           N32   , Cn4 , v102 , gtp3
        .byte   W36
        .byte           N11   , Ds4 , v094
        .byte   W12
        .byte                   Fn4
        .byte   W12
@ 015   ----------------------------------------
        .byte           N36   , As3
        .byte   W36
        .byte           N23   , Cs4 , v098
        .byte   W24
        .byte                   Fn4 , v094
        .byte   W24
        .byte           N10   , Gs4
        .byte   W12
@ 016   ----------------------------------------
        .byte           N16   , Ds5 , v104
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
        .byte           N15   , Cs5
        .byte   W16
        .byte                   Cn5
        .byte   W16
@ 018   ----------------------------------------
        .byte           N06   , As4 , v114
        .byte   W06
        .byte           N05   , Cn5 , v108
        .byte   W06
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
        .byte           N06   , Ds4 , v112
        .byte   W06
        .byte                   Fn4 , v100
        .byte   W06
        .byte           N32   , Gn4 , v094 , gtp3
        .byte   W36
@ 020   ----------------------------------------
        .byte           N72   , Fn4 , v094 , gtp3
        .byte   W84
        .byte           N05   , Gn4 , v110
        .byte   W06
        .byte           N06   , Fn4 , v100
        .byte   W06
@ 021   ----------------------------------------
        .byte           N84   , Cn4 , v088 , gtp3
        .byte                   En4 , v094
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
        .byte   W92
        .byte   W03
        .byte   GOTO
         .word  mus_littleroot_5_LOOP
        .byte   FINE

@****************** Track 6 (Midi-Chn.9) ******************@

mus_littleroot_6:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_6_LOOP:
        .byte           VOICE , 0
        .byte           VOL   , 84
        .byte   W96
@ 001   ----------------------------------------
        .byte   W72
        .byte           N11   , Cn1 , v111
        .byte   W12
        .byte           N84
        .byte   W12
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W36
        .byte           N09   , Dn1 , v107
        .byte           N56   , Cn1 , v111 , gtp2
        .byte   W24
        .byte           N09   , Dn1 , v107
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
@ 004   ----------------------------------------
        .byte           N72   , Cn1 , v111
        .byte   W24
        .byte           N28   , Dn1 , v112
        .byte   W48
        .byte                   Dn1
        .byte   W24
@ 005   ----------------------------------------
mus_littleroot_6_5:
        .byte   W24
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W48
        .byte           N28
        .byte   W24
        .byte   PEND
@ 006   ----------------------------------------
mus_littleroot_6_6:
        .byte   W24
        .byte           N28   , Dn1 , v114
        .byte   W48
        .byte                   Dn1 , v110 , gtp1
        .byte   W24
        .byte   PEND
@ 007   ----------------------------------------
mus_littleroot_6_7:
        .byte   W24
        .byte           N28   , Dn1 , v114
        .byte   W48
        .byte                   Dn1 , v112 , gtp1
        .byte   W24
        .byte   PEND
@ 008   ----------------------------------------
mus_littleroot_6_8:
        .byte   W24
        .byte           N28   , Dn1 , v112
        .byte   W48
        .byte                   Dn1
        .byte   W24
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_6
@ 011   ----------------------------------------
        .byte   W12
        .byte           N24   , Dn1 , v120
        .byte   W24
        .byte           N04   , Dn1 , v114
        .byte   W24
        .byte                   Dn1 , v112
        .byte   W12
        .byte           N12
        .byte   W12
        .byte           N05   , Dn1 , v120
        .byte   W12
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_8
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_6
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_7
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_8
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_6
@ 019   ----------------------------------------
        .byte   W06
        .byte           N18   , Dn1 , v120
        .byte   W18
        .byte           N11   , Dn1 , v114
        .byte   W24
        .byte           N04
        .byte   W24
        .byte                   Dn1 , v112
        .byte   W18
        .byte           N11   , Dn1 , v110
        .byte   W06
@ 020   ----------------------------------------
        .byte   W24
        .byte           N28   , Dn1 , v112
        .byte   W30
        .byte           N18
        .byte   W18
        .byte           N10
        .byte   W24
@ 021   ----------------------------------------
        .byte   W24
        .byte           N24
        .byte   W24
        .byte           N05
        .byte   W24
        .byte                   Dn1
        .byte   W12
        .byte           N16   , Dn1 , v120
        .byte   W12
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_8
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_8
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 026   ----------------------------------------
        .byte           N36   , Cn1 , v108
        .byte   W24
        .byte           N04   , Fn2 , v124
        .byte           N28   , Dn1 , v112
        .byte   W24
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N28   , Dn1 , v112
        .byte   W24
@ 027   ----------------------------------------
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W24
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N28   , Dn1 , v112
        .byte   W24
@ 028   ----------------------------------------
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N28   , Dn1 , v112
        .byte   W24
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N28   , Dn1 , v112
        .byte   W12
        .byte           N36   , Cn1 , v110
        .byte   W12
@ 029   ----------------------------------------
        .byte           N05   , Fn2 , v124
        .byte   W24
        .byte           N04
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W24
        .byte           N04   , Fn2 , v124
        .byte   W24
        .byte                   Fn2
        .byte           N23   , Dn1 , v112
        .byte   W23
        .byte   GOTO
         .word  mus_littleroot_6_LOOP
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_littleroot:
        .byte   7                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_littleroot_pri      @ Priority
        .byte   mus_littleroot_rev      @ Reverb

        .word   mus_littleroot_grp     

        .word   mus_littleroot_0
        .word   mus_littleroot_1
        .word   mus_littleroot_2
        .word   mus_littleroot_3
        .word   mus_littleroot_4
        .word   mus_littleroot_5
        .word   mus_littleroot_6

        .end
