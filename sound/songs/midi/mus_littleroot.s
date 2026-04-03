        .include "MPlayDef.s"

        .equ    mus_littleroot_grp, voicegroup191
        .equ    mus_littleroot_pri, 0
        .equ    mus_littleroot_rev, 0
        .equ    mus_littleroot_key, 0

        .section .rodata
        .global mus_littleroot
        .align  2

@****************** Track 0 (Midi-Chn.0) ******************@

mus_littleroot_0:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 149/2
mus_littleroot_0_LOOP:
        .byte           VOICE , 35
        .byte           N05   , Cn1 , v106
        .byte           BENDR , 12
        .byte           VOL   , 45
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
mus_littleroot_0_1:
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
mus_littleroot_0_2:
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
         .word  mus_littleroot_0_1
@ 004   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 005   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
@ 006   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
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
         .word  mus_littleroot_0_2
@ 021   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
@ 022   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_2
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_1
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
mus_littleroot_0_27:
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
         .word  mus_littleroot_0_26
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_27
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_littleroot_0_LOOP
        .byte   W48
        .byte           N12   , Gn0 , v127
        .byte   W12
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_littleroot_1:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_1_LOOP:
        .byte           VOL   , 60
        .byte           VOICE , 2
        .byte           BENDR , 12
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_littleroot_1_4:
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
mus_littleroot_1_5:
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
         .word  mus_littleroot_1_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_5
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
mus_littleroot_1_12:
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
mus_littleroot_1_13:
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
         .word  mus_littleroot_1_12
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_12
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_12
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
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
        .byte   GOTO
         .word  mus_littleroot_1_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_littleroot_2:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_2_LOOP:
        .byte           VOICE , 5
        .byte           VOL   , 45
        .byte           N05   , Cn6 , v085
        .byte           BENDR , 12
        .byte           PAN   , c_v-8
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
mus_littleroot_2_4:
        .byte           N04   , Ds3 , v100
        .byte           N04   , Gn3 , v085
        .byte   W36
        .byte           N32   , Ds3 , v100 , gtp2
        .byte           N32   , Gn3 , v085 , gtp1
        .byte   W48
        .byte           N11   , Ds3 , v100
        .byte           N11   , Gs3 , v085
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_littleroot_2_5:
        .byte   W12
        .byte           N05   , Ds3 , v100
        .byte           N05   , Gs3 , v085
        .byte   W24
        .byte           N32   , Ds3 , v100 , gtp3
        .byte                   An3 , v085
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
        .byte           N11   , Ds3 , v100
        .byte           N10   , As3 , v085
        .byte   W36
        .byte           N64   , An3 , v085 , gtp1
        .byte                   Fn3
        .byte   W60
@ 007   ----------------------------------------
        .byte   W12
        .byte           N04   , An3 , v091
        .byte           N04   , Fn3
        .byte   W24
        .byte           N52
        .byte   W60
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_5
@ 010   ----------------------------------------
        .byte           N11   , Ds3 , v100
        .byte           N10   , As3 , v085
        .byte   W36
        .byte           N56   , Fn3
        .byte           N56   , An3
        .byte   W60
@ 011   ----------------------------------------
        .byte           N24   , Fn3 , v094 , gtp3
        .byte                   An3
        .byte   W32
        .byte   W03
        .byte           N32   , Cn4
        .byte           N32   , An3
        .byte   W36
        .byte   W01
        .byte           N17   , Fn4 , v093
        .byte           N16   , Cn4
        .byte   W24
@ 012   ----------------------------------------
        .byte           VOL   , 27
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
@ 013   ----------------------------------------
        .byte   W01
        .byte           N15   , As5 , v103
        .byte           N13   , Cs5
        .byte   W18
        .byte           N15   , As5 , v082
        .byte           N13   , Cs5
        .byte   W18
        .byte                   Cs5 , v071
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v060
        .byte           N15   , As5
        .byte   W40
        .byte   W01
@ 014   ----------------------------------------
        .byte   W01
        .byte           N13   , Fn5 , v103
        .byte           N14   , As5
        .byte   W18
        .byte           N13   , Fn5 , v080
        .byte           N14   , As5
        .byte   W18
        .byte                   As5 , v072
        .byte           N13   , Fn5
        .byte   W18
        .byte                   Fn5 , v063
        .byte           N14   , As5
        .byte   W40
        .byte   W01
@ 015   ----------------------------------------
        .byte   W01
        .byte           N13   , Cs5 , v103
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v082
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v071
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v060
        .byte           N15   , As5
        .byte   W40
        .byte   W01
@ 016   ----------------------------------------
        .byte   W01
        .byte           N14   , As5 , v103
        .byte           N13   , Fn5
        .byte   W18
        .byte           N14   , As5 , v080
        .byte           N13   , Fn5
        .byte   W18
        .byte                   Fn5 , v072
        .byte           N14   , As5
        .byte   W18
        .byte                   As5 , v063
        .byte           N13   , Fn5
        .byte   W40
        .byte   W01
@ 017   ----------------------------------------
        .byte   W01
        .byte                   Cs5 , v103
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v082
        .byte           N15   , As5
        .byte   W18
        .byte           N13   , Cs5 , v071
        .byte           N15   , As5
        .byte   W18
        .byte                   As5 , v060
        .byte           N13   , Cs5
        .byte   W40
        .byte   W01
@ 018   ----------------------------------------
        .byte   W01
        .byte                   Fn5 , v103
        .byte           N14   , As5
        .byte   W18
        .byte                   As5 , v080
        .byte           N13   , Fn5
        .byte   W18
        .byte                   Fn5 , v072
        .byte           N14   , As5
        .byte   W18
        .byte                   As5 , v063
        .byte           N13   , Fn5
        .byte   W40
        .byte   W01
@ 019   ----------------------------------------
        .byte           N10   , Fn5 , v103
        .byte           N11   , Cs5
        .byte   W18
        .byte           N10   , Fn5 , v075
        .byte           N11   , Cs5
        .byte   W18
        .byte                   Cs5 , v053
        .byte           N10   , Fn5
        .byte   W12
        .byte                   Ds5 , v103
        .byte           N10   , Fn5
        .byte   W18
        .byte                   Fn5 , v073
        .byte           N10   , Ds5
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
        .byte   W12
        .byte           N06   , Gn4
        .byte           N06   , Bn4
        .byte   W84
@ 023   ----------------------------------------
        .byte   W11
        .byte           N04   , Ds4
        .byte           N05   , Gn4
        .byte   W24
        .byte   W01
        .byte           N04   , Ds4
        .byte           N04   , Gn4
        .byte   W56
        .byte   W03
        .byte           N05   , Bn4
        .byte           N05   , Gn4
        .byte   W01
@ 024   ----------------------------------------
        .byte   W11
        .byte                   Bn4
        .byte           N05   , Gn4
        .byte   W84
        .byte   W01
@ 025   ----------------------------------------
        .byte   W12
        .byte           N04
        .byte           N03   , Ds4
        .byte   W23
        .byte           N04   , Gn4
        .byte   W01
        .byte           N03   , Ds4
        .byte   W60
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
         .word  mus_littleroot_2_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_littleroot_3:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_3_LOOP:
        .byte           VOICE , 40
        .byte           BENDR , 12
        .byte           VOL   , 80
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
        .byte   W72
        .byte           N12   , Cn4 , v102
        .byte   W12
        .byte                   Dn4
        .byte   W12
@ 012   ----------------------------------------
        .byte                   Ds4 , v096
        .byte           N12   , Gn4 , v100
        .byte   W12
        .byte           N05   , Cn4 , v088
        .byte           N06   , Fn4 , v094
        .byte   W06
        .byte                   Ds4
        .byte           N06   , Cn4 , v088
        .byte   W06
        .byte           N28   , Dn4 , v094
        .byte           N28   , Gs3 , v088
        .byte   W36
        .byte           N16
        .byte           N16   , Cn4 , v098
        .byte   W18
        .byte           N05   , Cn4 , v088
        .byte           N06   , Ds4 , v098
        .byte   W06
        .byte                   Fn4
        .byte           N05   , Cn4 , v088
        .byte   W06
        .byte           N06   , Gn4 , v098
        .byte           N05   , Cn4 , v088
        .byte   W06
@ 013   ----------------------------------------
        .byte           N32   , As4 , v094 , gtp3
        .byte                   Fn4 , v088
        .byte   W36
        .byte           N28   , Cn5 , v094 , gtp1
        .byte                   Gs4 , v088
        .byte   W36
        .byte           N12   , Fn4
        .byte           N12   , As4 , v094
        .byte   W12
        .byte           N05   , Gs3 , v088
        .byte           N06   , Gn4 , v098
        .byte   W06
        .byte                   Fn4
        .byte           N05   , Gs3 , v088
        .byte   W06
@ 014   ----------------------------------------
        .byte           N36   , Ds4 , v094
        .byte           N32   , Cn4 , v088 , gtp1
        .byte   W36
        .byte           N32   , Gs3 , v088 , gtp3
        .byte                   Cn4 , v102
        .byte   W36
        .byte           N11   , Ds4 , v094
        .byte           N11   , Cn4 , v088
        .byte   W12
        .byte                   Cn4
        .byte           N11   , Fn4 , v094
        .byte   W12
@ 015   ----------------------------------------
        .byte           N36   , As3
        .byte           N36   , Fn3 , v088
        .byte   W36
        .byte           N23   , Cs4 , v098
        .byte           N23   , Gs3 , v088
        .byte   W24
        .byte                   Cs4
        .byte           N23   , Fn4 , v094
        .byte   W24
        .byte           N10   , Gs4
        .byte           N12   , Fn4 , v088
        .byte   W12
@ 016   ----------------------------------------
        .byte           N16   , Gs4 , v104
        .byte           N16   , Ds5
        .byte   W24
        .byte           N76   , Cn5 , v094
        .byte           N76   , Gs4 , v088
        .byte   W72
@ 017   ----------------------------------------
        .byte   W16
        .byte           N14
        .byte           N16   , Cn5 , v094
        .byte   W16
        .byte                   Gs4 , v088
        .byte           N16   , Cs5 , v094
        .byte   W16
        .byte                   Ds5
        .byte           N16   , Cn5
        .byte   W16
        .byte           N15   , Gs4 , v088
        .byte           N15   , Cs5 , v094
        .byte   W16
        .byte                   Cn5
        .byte           N15   , Gs4 , v088
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
        .byte                   Fn4 , v100
        .byte           N05   , As3
        .byte   W06
        .byte           N32   , As3 , v088 , gtp3
        .byte                   Gn4 , v094
        .byte   W36
@ 020   ----------------------------------------
        .byte           N72   , Cn4 , v088 , gtp3
        .byte                   Fn4 , v094
        .byte           N78   , Fn2 , v099 , gtp1
        .byte   W84
        .byte           N05   , Gn4 , v110
        .byte           N05   , Cn4 , v106
        .byte   W06
        .byte                   Cn4 , v100
        .byte           N06   , Fn4
        .byte   W06
@ 021   ----------------------------------------
        .byte           N84   , Cn4 , v088 , gtp3
        .byte                   En4 , v094
        .byte           N88   , En2 , v099 , gtp1
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
         .word  mus_littleroot_3_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_littleroot_4:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_4_LOOP:
        .byte           VOICE , 48
        .byte           VOL   , 60
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_littleroot_4_4:
        .byte           N84   , Gn2 , v076
        .byte   W84
        .byte           N48   , Gs2
        .byte   W12
        .byte   PEND
@ 005   ----------------------------------------
mus_littleroot_4_5:
        .byte   W36
        .byte           N56   , An2 , v076 , gtp1
        .byte   W60
        .byte   PEND
@ 006   ----------------------------------------
        .byte           N36   , As2 , v076 , gtp1
        .byte   W36
        .byte           TIE   , An2
        .byte   W60
@ 007   ----------------------------------------
        .byte   W90
        .byte   W01
        .byte           EOT
        .byte   W05
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_4_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_4_5
@ 010   ----------------------------------------
        .byte           N36   , As2 , v076 , gtp1
        .byte   W96
@ 011   ----------------------------------------
        .byte   W72
        .byte           N12   , Cn4 , v102
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
         .word  mus_littleroot_4_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_littleroot_5:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_5_LOOP:
        .byte           VOICE , 20
        .byte           BENDR , 12
        .byte           VOL   , 80
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_littleroot_5_4:
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
         .word  mus_littleroot_5_4
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
         .word  mus_littleroot_5_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_littleroot_6:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_6_LOOP:
        .byte           VOICE , 57
        .byte           BENDR , 12
        .byte           VOL   , 90
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
        .byte           N06   , Cn3 , v120
        .byte   W13
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
        .byte   W12
        .byte           N09   , Cn3 , v122
        .byte   W12
        .byte           N07   , Ds3 , v126
        .byte   W13
        .byte                   Cn3 , v120
        .byte   W23
        .byte           N06   , Ds3 , v122
        .byte   W13
        .byte           N12   , Fn3
        .byte   W11
        .byte           N09   , Gn3 , v114
        .byte   W12
@ 024   ----------------------------------------
        .byte           N08   , Cn3 , v122
        .byte   W13
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
        .byte   W12
        .byte           N08   , Cn3 , v122
        .byte   W12
        .byte           N06   , Ds3 , v124
        .byte   W12
        .byte           N07   , Cn3 , v122
        .byte   W24
        .byte           N06   , Ds3 , v120
        .byte   W12
        .byte           N08   , Fn3 , v117
        .byte   W12
        .byte           N06   , Gn3
        .byte   W11
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
         .word  mus_littleroot_6_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 7 (Midi-Chn.7) ******************@

mus_littleroot_7:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_7_LOOP:
        .byte           VOICE , 56
        .byte           BENDR , 12
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
        .byte           N04   , Dn4 , v126
        .byte           N04   , Gn4
        .byte           N05   , Cn5
        .byte   W11
        .byte                   Gn4
        .byte   W01
        .byte           N04   , Dn4
        .byte           N05   , Cn5
        .byte   W12
        .byte           N06
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
        .byte           N07   , Gn4
        .byte           N07   , Dn4
        .byte           N06   , Bn3
        .byte   W11
        .byte           N05   , Cs4
        .byte           N06   , Fs4
        .byte           N07   , As4
        .byte   W12
        .byte           N05   , Bn3
        .byte           N06   , Dn4
        .byte           N05   , Gn4
        .byte   W12
        .byte           N07   , As4
        .byte           N05   , Cs4
        .byte           N05   , Fs4
        .byte   W24
        .byte           N06   , Cn5
        .byte           N06   , Gn4
        .byte           N04   , En4
        .byte   W12
        .byte           N05   , As4
        .byte   W01
        .byte           N04   , Fs4
        .byte           N04   , Cs4
        .byte   W11
        .byte           N66   , Gn4 , v126 , gtp1
        .byte                   Dn4
        .byte           N66   , Bn3 , v126 , gtp1
        .byte   W13
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_littleroot_7_LOOP
        .byte   W60
        .byte   FINE

@****************** Track 8 (Midi-Chn.9) ******************@

mus_littleroot_8:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
mus_littleroot_8_LOOP:
        .byte           VOICE , 1
        .byte           N24   , Cs2 , v111
        .byte           N48   , Dn1 , v110 , gtp3
        .byte           N06   , Bn0 , v111
        .byte           BENDR , 12
        .byte           VOL   , 60
        .byte   W96
@ 001   ----------------------------------------
        .byte   W36
        .byte           N05   , Cn2
        .byte   W36
        .byte           N06   , Dn1 , v107
        .byte           N11   , Cs2 , v111
        .byte   W12
        .byte           N15   , Dn1
        .byte           N84   , Cs2
        .byte   W12
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W36
        .byte           N56   , Cs2 , v111 , gtp2
        .byte           N09   , Dn1 , v107
        .byte   W24
        .byte                   Dn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
        .byte                   Dn1
        .byte   W12
@ 004   ----------------------------------------
        .byte           N72   , Cs2 , v111
        .byte   W24
        .byte           N28   , Dn1 , v112
        .byte   W48
        .byte                   Dn1
        .byte   W24
@ 005   ----------------------------------------
mus_littleroot_8_5:
        .byte   W24
        .byte           N28   , Dn1 , v112 , gtp1
        .byte   W48
        .byte           N28
        .byte   W24
        .byte   PEND
@ 006   ----------------------------------------
mus_littleroot_8_6:
        .byte   W24
        .byte           N28   , Dn1 , v114
        .byte   W48
        .byte                   Dn1 , v110 , gtp1
        .byte   W24
        .byte   PEND
@ 007   ----------------------------------------
mus_littleroot_8_7:
        .byte   W24
        .byte           N28   , Dn1 , v114
        .byte   W48
        .byte                   Dn1 , v112 , gtp1
        .byte   W24
        .byte   PEND
@ 008   ----------------------------------------
mus_littleroot_8_8:
        .byte   W24
        .byte           N28   , Dn1 , v112
        .byte   W48
        .byte                   Dn1
        .byte   W24
        .byte   PEND
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_6
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
         .word  mus_littleroot_8_8
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_5
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_6
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_7
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_8
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_5
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_6
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
         .word  mus_littleroot_8_8
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_5
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_8
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_8_5
@ 026   ----------------------------------------
        .byte           N36   , Cs2 , v108
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
        .byte           N36   , Cs2 , v110
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
        .byte   W24
@ 030   ----------------------------------------
        .byte   GOTO
         .word  mus_littleroot_8_LOOP
        .byte   W60
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_littleroot:
        .byte   9                       @ Num Tracks
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
        .word   mus_littleroot_7
        .word   mus_littleroot_8

        .end
