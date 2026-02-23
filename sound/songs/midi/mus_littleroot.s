        .include "MPlayDef.s"

        .equ    mus_littleroot_grp, voicegroup_colosseum_battle_trainer
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
        .byte   TEMPO , 146/2
        .byte           VOL   , 44
        .byte           VOICE , 33
        .byte           BENDR , 12
        .byte   W24
mus_littleroot_0_LOOP:
        .byte           N04   , Cn2 , v119
        .byte   W11
        .byte           N05
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Cn2
        .byte   W11
        .byte           N05
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W01
@ 001   ----------------------------------------
mus_littleroot_0_1:
        .byte   W11
        .byte           N05   , Cn2 , v119
        .byte   W12
        .byte                   Cn2
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_littleroot_0_2:
        .byte           N04   , Cn2 , v119
        .byte   W12
        .byte           N05
        .byte   W12
        .byte           N04
        .byte   W11
        .byte           N05
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Cn2
        .byte   W11
        .byte           N05
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
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
        .byte           N04   , Cn2 , v119
        .byte   W12
        .byte           N05
        .byte   W12
        .byte           N04   , Gs1 , v118
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
        .byte                   Gs1 , v114
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
        .byte           N05   , Gs1 , v118
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
@ 013   ----------------------------------------
mus_littleroot_0_13:
        .byte           N04   , Gs1 , v116
        .byte   W12
        .byte           N05   , Gs1 , v118
        .byte   W12
        .byte                   Cs2 , v116
        .byte   W12
        .byte                   Cs2 , v114
        .byte   W12
        .byte                   Cs2 , v118
        .byte   W12
        .byte                   Cs2 , v116
        .byte   W12
        .byte           N04
        .byte   W12
        .byte           N05   , Cs2 , v114
        .byte   W12
        .byte   PEND
@ 014   ----------------------------------------
mus_littleroot_0_14:
        .byte           N04   , Cs2 , v114
        .byte   W12
        .byte                   Cs2
        .byte   W12
        .byte                   Gs1 , v118
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
        .byte                   Gs1 , v114
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
        .byte           N05   , Gs1 , v118
        .byte   W12
        .byte                   Gs1 , v116
        .byte   W12
        .byte   PEND
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_14
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_14
@ 019   ----------------------------------------
        .byte           N04   , Gs1 , v116
        .byte   W12
        .byte           N05   , Gs1 , v118
        .byte   W12
        .byte                   Cs2 , v116
        .byte   W12
        .byte                   Cs2 , v114
        .byte   W12
        .byte                   Cs2 , v118
        .byte   W12
        .byte                   Cs2 , v116
        .byte   W12
        .byte           N04   , Ds2
        .byte   W12
        .byte           N05   , Ds2 , v114
        .byte   W12
@ 020   ----------------------------------------
        .byte           N04
        .byte   W12
        .byte                   Ds2
        .byte   W12
        .byte                   Cn2 , v119
        .byte   W11
        .byte           N05
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Cn2
        .byte   W11
        .byte           N05
        .byte   W12
        .byte                   Cn2
        .byte   W12
        .byte                   Cn2
        .byte   W01
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
        .byte           N04   , Cn2 , v119
        .byte   W12
        .byte           N05
        .byte   W12
        .byte           N04   , Gn1
        .byte   W11
        .byte           N05
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Gn1
        .byte   W11
        .byte           N05
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W01
@ 027   ----------------------------------------
mus_littleroot_0_27:
        .byte   W11
        .byte           N05   , Gn1 , v119
        .byte   W12
        .byte                   Gn1
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte   PEND
@ 028   ----------------------------------------
        .byte                   Gn1
        .byte   W12
        .byte           N05
        .byte   W12
        .byte           N04
        .byte   W11
        .byte           N05
        .byte   W13
        .byte           N04
        .byte   W12
        .byte                   Gn1
        .byte   W11
        .byte           N05
        .byte   W12
        .byte                   Gn1
        .byte   W12
        .byte                   Gn1
        .byte   W01
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_0_27
@ 030   ----------------------------------------
        .byte           N04   , Gn1 , v119
        .byte   W12
        .byte           N05
        .byte   W12
        .byte   GOTO
         .word  mus_littleroot_0_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 1 (Midi-Chn.2) ******************@

mus_littleroot_1:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 67
        .byte           VOICE , 46
        .byte           BENDR , 12
        .byte   W24
mus_littleroot_1_LOOP:
        .byte           N03   , Cn6 , v070
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W13
@ 001   ----------------------------------------
        .byte                   Cn6
        .byte   W11
        .byte                   Gs5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   An5
        .byte   W13
        .byte                   Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W01
@ 002   ----------------------------------------
        .byte   W11
        .byte                   As5
        .byte   W13
        .byte                   Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte                   Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W13
@ 003   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte                   Gs5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   An5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
@ 004   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte           N05   , Cn6
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
        .byte   W01
@ 005   ----------------------------------------
mus_littleroot_1_5:
        .byte   W12
        .byte           N04   , Gs5 , v070
        .byte   W12
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
        .byte   W01
        .byte   PEND
@ 006   ----------------------------------------
        .byte   W12
        .byte           N02   , As5
        .byte   W12
        .byte           N04   , Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W13
        .byte                   An5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte           N04   , Fn5
        .byte   W12
@ 007   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N02   , An5
        .byte   W12
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Fn5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , An5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W12
        .byte                   Fn5
        .byte   W12
@ 008   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N03   , An5
        .byte   W12
        .byte           N05   , Cn6
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
        .byte   W01
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_5
@ 010   ----------------------------------------
        .byte   W12
        .byte           N02   , As5 , v070
        .byte   W12
        .byte           N04   , Cn6
        .byte   W11
        .byte                   Ds5
        .byte   W12
        .byte           N05   , Cn6
        .byte   W13
        .byte                   An5
        .byte   W12
        .byte                   Cn6
        .byte   W12
        .byte           N04   , Ds5
        .byte   W12
@ 011   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N02   , An5
        .byte   W12
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Ds5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Gn5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W12
        .byte                   Ds5
        .byte   W12
@ 012   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N03   , An5
        .byte   W12
        .byte           N05   , As5 , v072
        .byte   W12
        .byte           N04   , Ds5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte                   Ds5
        .byte   W12
@ 013   ----------------------------------------
mus_littleroot_1_13:
        .byte           N04   , As5 , v072
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte           N05   , Fn5
        .byte   W12
        .byte           N04   , As5
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte           N03   , As5
        .byte   W12
        .byte           N04   , Ds5
        .byte   W12
        .byte   PEND
@ 014   ----------------------------------------
mus_littleroot_1_14:
        .byte           N04   , As5 , v072
        .byte   W12
        .byte           N03   , Gn5
        .byte   W12
        .byte           N05   , As5
        .byte   W12
        .byte           N04   , Ds5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte                   Gn5
        .byte   W12
        .byte                   As5
        .byte   W12
        .byte                   Ds5
        .byte   W12
        .byte   PEND
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_14
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_14
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_1_13
@ 020   ----------------------------------------
        .byte           N04   , As5 , v072
        .byte   W12
        .byte           N03   , Gn5
        .byte   W12
        .byte           N04   , Cn6 , v070
        .byte   W11
        .byte           N05   , Fn5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Gn5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W12
        .byte                   Fn5
        .byte   W12
@ 021   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N03   , Gn5
        .byte   W12
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , En5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W11
        .byte           N05   , Gn5
        .byte   W13
        .byte           N04   , Cn6
        .byte   W12
        .byte                   En5
        .byte   W12
@ 022   ----------------------------------------
        .byte                   Cn6
        .byte   W12
        .byte           N03   , Gn5
        .byte   W84
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
        .byte   W24
        .byte   GOTO
         .word  mus_littleroot_1_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 2 (Midi-Chn.3) ******************@

mus_littleroot_2:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 113
        .byte           VOICE , 1
        .byte           BENDR , 12
        .byte           PAN   , c_v+35
        .byte   W24
mus_littleroot_2_LOOP:
        .byte   W72
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W24
        .byte           N04   , Gn3 , v085
        .byte           N04   , Ds3
        .byte   W36
        .byte           N32   , Gn3 , v085 , gtp1
        .byte                   Ds3
        .byte   W36
@ 005   ----------------------------------------
mus_littleroot_2_5:
        .byte   W12
        .byte           N11   , Gs3 , v085
        .byte           N11   , Ds3
        .byte   W24
        .byte           N05   , Gs3
        .byte           N04   , Ds3
        .byte   W24
        .byte           N32   , An3 , v085 , gtp3
        .byte           N32   , Ds3
        .byte   W36
        .byte   PEND
@ 006   ----------------------------------------
        .byte   W24
        .byte           N10   , As3
        .byte           N10   , Ds3
        .byte   W36
        .byte           N64   , An3 , v085 , gtp1
        .byte                   Fn3
        .byte   W36
@ 007   ----------------------------------------
        .byte   W36
        .byte           N04   , An3 , v091
        .byte           N04   , Fn3
        .byte   W24
        .byte           N52
        .byte           N52   , Cn3
        .byte   W36
@ 008   ----------------------------------------
        .byte   W24
        .byte           N04   , Gn3 , v085
        .byte           N04   , Ds3
        .byte           N04   , Cn3
        .byte   W36
        .byte           N32   , Gn3 , v085 , gtp1
        .byte                   Ds3
        .byte   W36
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_5
@ 010   ----------------------------------------
        .byte   W24
        .byte           N10   , As3 , v085
        .byte           N10   , Ds3
        .byte   W36
        .byte           N56   , An3
        .byte           N54   , Fn3 , v085 , gtp1
        .byte   W36
@ 011   ----------------------------------------
        .byte   W24
        .byte           N24   , An3 , v094 , gtp3
        .byte           N28   , Fn3
        .byte   W32
        .byte   W03
        .byte           N32   , An3
        .byte           N32   , Cn4
        .byte   W36
        .byte   W01
@ 012   ----------------------------------------
        .byte           N16   , Cn4 , v093
        .byte           N17   , Fn4
        .byte   W24
        .byte           N76   , Gn3 , v086
        .byte           N76   , Ds3 , v086 , gtp1
        .byte   W72
@ 013   ----------------------------------------
mus_littleroot_2_13:
        .byte   W24
        .byte           N84   , Cs3 , v086
        .byte           N84   , Fn3 , v086 , gtp1
        .byte   W72
        .byte   PEND
@ 014   ----------------------------------------
mus_littleroot_2_14:
        .byte   W24
        .byte           N76   , Gn3 , v086
        .byte           N76   , Ds3 , v086 , gtp1
        .byte   W72
        .byte   PEND
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_13
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_14
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_13
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_2_14
@ 019   ----------------------------------------
        .byte   W24
        .byte           N36   , Cs3 , v086
        .byte           N36   , Fn3 , v086 , gtp1
        .byte   W48
        .byte           N32   , Gn3 , v086 , gtp3
        .byte           N32   , Ds3 , v086 , gtp1
        .byte   W24
@ 020   ----------------------------------------
        .byte   W24
        .byte           N88   , Fn3 , v094
        .byte           N88   , Cn3
        .byte   W72
@ 021   ----------------------------------------
        .byte   W23
        .byte           N78   , En3
        .byte           N78   , Cn3
        .byte   W72
        .byte   W01
@ 022   ----------------------------------------
        .byte   W24
        .byte           N05   , Bn4 , v100
        .byte           N06   , Gn4
        .byte   W12
        .byte                   Bn4
        .byte           N06   , Gn4
        .byte   W60
@ 023   ----------------------------------------
        .byte   W32
        .byte   W03
        .byte           N04   , Ds4
        .byte           N05   , Gn4
        .byte   W24
        .byte   W01
        .byte           N04   , Ds4
        .byte           N04   , Gn4
        .byte   W36
@ 024   ----------------------------------------
        .byte   W23
        .byte           N05   , Bn4
        .byte           N05   , Gn4
        .byte   W12
        .byte                   Bn4
        .byte           N05   , Gn4
        .byte   W60
        .byte   W01
@ 025   ----------------------------------------
        .byte   W36
        .byte           N03   , Ds4
        .byte           N04   , Gn4
        .byte   W23
        .byte                   Gn4
        .byte   W01
        .byte           N03   , Ds4
        .byte   W36
@ 026   ----------------------------------------
        .byte   W24
        .byte           N05   , Cn5 , v110
        .byte           N04   , Gn4
        .byte   W11
        .byte           N06   , Cn5
        .byte           N05   , Gn4
        .byte   W12
        .byte           N04
        .byte           N06   , Cn5
        .byte   W12
        .byte           N05   , Gn4
        .byte           N06   , Bn4
        .byte   W24
        .byte                   As4
        .byte           N05   , Fs4
        .byte   W13
@ 027   ----------------------------------------
        .byte   W10
        .byte           N12   , An4
        .byte   W01
        .byte           N09   , Fn4
        .byte   W23
        .byte           N08   , As4
        .byte   W12
        .byte           N06   , Fn4
        .byte           N08   , An4
        .byte   W13
        .byte           N07   , As4
        .byte   W24
        .byte           N13   , An4
        .byte           N12   , Fn4
        .byte   W13
@ 028   ----------------------------------------
        .byte   W12
        .byte           N06
        .byte   W12
        .byte           N07   , Gn4
        .byte           N07   , Dn4
        .byte   W11
        .byte           N05   , Cs4
        .byte           N06   , Fs4
        .byte           N07   , As4
        .byte   W12
        .byte           N05   , Gn4
        .byte           N06   , Dn4
        .byte   W12
        .byte           N05   , Fs4
        .byte           N05   , Cs4
        .byte           N07   , As4
        .byte   W24
        .byte           N06   , Cn5
        .byte           N06   , Gn4
        .byte           N04   , En4
        .byte   W12
        .byte           N05   , As4
        .byte   W01
@ 029   ----------------------------------------
        .byte           N04   , Fs4
        .byte   W11
        .byte           N66   , Gn4 , v110 , gtp1
        .byte                   Dn4
        .byte   W84
        .byte   W01
@ 030   ----------------------------------------
        .byte   W24
        .byte   GOTO
         .word  mus_littleroot_2_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 3 (Midi-Chn.4) ******************@

mus_littleroot_3:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 56
        .byte           BENDR , 12
        .byte           PAN   , c_v+46
        .byte           VOL   , 93
        .byte   W01
        .byte           PAN   , c_v+0
        .byte   W23
mus_littleroot_3_LOOP:
        .byte   W72
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
        .byte   W23
        .byte           PAN   , c_v+46
        .byte   W16
        .byte                   c_v-46
        .byte   W20
        .byte                   c_v+44
        .byte   W17
        .byte                   c_v-46
        .byte   W20
@ 013   ----------------------------------------
        .byte   W40
        .byte                   c_v+46
        .byte   W18
        .byte                   c_v-46
        .byte   W19
        .byte                   c_v+46
        .byte   W19
@ 014   ----------------------------------------
        .byte   W40
        .byte   W01
        .byte                   c_v-46
        .byte   W18
        .byte                   c_v+46
        .byte   W16
        .byte                   c_v-48
        .byte   W21
@ 015   ----------------------------------------
        .byte   W40
        .byte   W01
        .byte                   c_v+46
        .byte   W18
        .byte                   c_v-46
        .byte   W18
        .byte                   c_v+46
        .byte   W19
@ 016   ----------------------------------------
        .byte   W40
        .byte                   c_v-46
        .byte   W19
        .byte                   c_v+46
        .byte   W17
        .byte                   c_v-46
        .byte   W20
@ 017   ----------------------------------------
        .byte   W40
        .byte   W01
        .byte                   c_v+46
        .byte   W18
        .byte                   c_v-44
        .byte   W18
        .byte                   c_v+46
        .byte   W19
@ 018   ----------------------------------------
        .byte   W40
        .byte   W01
        .byte                   c_v-46
        .byte   W17
        .byte                   c_v+46
        .byte   W19
        .byte                   c_v-46
        .byte   W19
@ 019   ----------------------------------------
        .byte   W36
        .byte   W02
        .byte                   c_v+48
        .byte   W18
        .byte                   c_v-48
        .byte   W15
        .byte                   c_v+48
        .byte   W16
        .byte                   c_v-44
        .byte   W09
@ 020   ----------------------------------------
        .byte   W09
        .byte                   c_v+46
        .byte   W84
        .byte   W03
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W23
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
        .byte   W12
@ 023   ----------------------------------------
        .byte   W12
        .byte                   Gn2 , v122
        .byte   W11
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
@ 024   ----------------------------------------
        .byte           N12   , Fn3
        .byte   W11
        .byte           N09   , Gn3 , v114
        .byte   W12
        .byte           N08   , Cn3 , v122
        .byte   W13
        .byte           N07   , Cn3 , v120
        .byte   W11
        .byte           N08   , Ds3 , v117
        .byte   W13
        .byte                   Cn3 , v120
        .byte   W24
        .byte           N04   , As2 , v126
        .byte   W12
@ 025   ----------------------------------------
        .byte   W12
        .byte                   Gn2 , v120
        .byte   W12
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
@ 026   ----------------------------------------
        .byte           N08   , Fn3 , v117
        .byte   W12
        .byte           N06   , Gn3
        .byte   W84
@ 027   ----------------------------------------
        .byte   W96
@ 028   ----------------------------------------
        .byte   W96
@ 029   ----------------------------------------
        .byte   W96
@ 030   ----------------------------------------
        .byte   W24
        .byte           PAN   , c_v+0
        .byte   GOTO
         .word  mus_littleroot_3_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte           PAN   , c_v+46
        .byte   FINE

@****************** Track 4 (Midi-Chn.5) ******************@

mus_littleroot_4:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 116
        .byte           VOICE , 73
        .byte           BENDR , 12
        .byte   W24
mus_littleroot_4_LOOP:
        .byte   W72
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
        .byte           N12   , Cn4 , v102
        .byte   W12
        .byte                   Dn4
        .byte   W12
        .byte                   Gn4 , v100
        .byte           N12   , Ds4 , v096
        .byte   W12
        .byte           N06   , Fn4 , v094
        .byte           N05   , Cn4 , v088
        .byte   W06
        .byte           N06   , Ds4 , v094
        .byte           N06   , Cn4 , v088
        .byte   W06
        .byte           N28   , Dn4 , v094
        .byte   W36
        .byte           N16   , Cn4 , v098
        .byte   W12
@ 013   ----------------------------------------
        .byte   W06
        .byte           N06   , Ds4
        .byte           N05   , Cn4 , v088
        .byte   W06
        .byte           N06   , Fn4 , v098
        .byte           N05   , Cn4 , v088
        .byte   W06
        .byte           N06   , Gn4 , v098
        .byte           N05   , Cn4 , v088
        .byte   W06
        .byte           N32   , As4 , v094 , gtp3
        .byte                   Fn4 , v088
        .byte   W36
        .byte           N28   , Cn5 , v094 , gtp1
        .byte                   Gs4 , v088
        .byte   W36
@ 014   ----------------------------------------
        .byte           N12   , As4 , v094
        .byte           N12   , Fn4 , v088
        .byte   W12
        .byte           N06   , Gn4 , v098
        .byte   W06
        .byte                   Fn4
        .byte   W06
        .byte           N36   , Ds4 , v094
        .byte           N32   , Cn4 , v088 , gtp1
        .byte   W36
        .byte           N32   , Cn4 , v102 , gtp3
        .byte   W36
@ 015   ----------------------------------------
        .byte           N11   , Ds4 , v094
        .byte           N11   , Cn4 , v088
        .byte   W12
        .byte                   Fn4 , v094
        .byte           N11   , Cn4 , v088
        .byte   W12
        .byte           N36   , As3 , v094
        .byte   W36
        .byte           N23   , Cs4 , v098
        .byte   W24
        .byte                   Fn4 , v094
        .byte           N23   , Cs4 , v088
        .byte   W12
@ 016   ----------------------------------------
        .byte   W12
        .byte           N10   , Gs4 , v094
        .byte           N12   , Fn4 , v088
        .byte   W12
        .byte           N16   , Ds5 , v104
        .byte           N16   , Gs4
        .byte   W24
        .byte           N76   , Cn5 , v094
        .byte           N76   , Gs4 , v088
        .byte   W48
@ 017   ----------------------------------------
        .byte   W40
        .byte           N16   , Cn5 , v094
        .byte           N14   , Gs4 , v088
        .byte   W16
        .byte           N16   , Cs5 , v094
        .byte           N16   , Gs4 , v088
        .byte   W16
        .byte                   Ds5 , v094
        .byte           N16   , Cn5
        .byte   W16
        .byte           N15   , Cs5
        .byte           N15   , Gs4 , v088
        .byte   W08
@ 018   ----------------------------------------
        .byte   W08
        .byte                   Cn5 , v094
        .byte           N15   , Gs4 , v088
        .byte   W16
        .byte           N06   , As4 , v114
        .byte           N06   , Fn4 , v104
        .byte   W06
        .byte           N05   , Cn5 , v108
        .byte           N05   , Gs4 , v104
        .byte   W06
        .byte           N06   , As4
        .byte           N05   , Fn4 , v100
        .byte   W06
        .byte           N80   , Gs4 , v094 , gtp2
        .byte                   Ds4 , v088
        .byte   W54
@ 019   ----------------------------------------
        .byte   W48
        .byte           N23   , Fn4 , v094
        .byte           N23   , Cs4 , v088
        .byte   W24
        .byte           N06   , Ds4 , v112
        .byte   W06
        .byte                   Fn4 , v100
        .byte           N05   , As3
        .byte   W06
        .byte           N32   , Gn4 , v094 , gtp3
        .byte                   As3 , v088
        .byte   W12
@ 020   ----------------------------------------
        .byte   W24
        .byte           N72   , Fn4 , v094 , gtp3
        .byte                   Cn4 , v088
        .byte   W72
@ 021   ----------------------------------------
        .byte   W12
        .byte           N05   , Gn4 , v110
        .byte           N05   , Cn4 , v106
        .byte   W06
        .byte           N06   , Fn4 , v100
        .byte           N05   , Cn4
        .byte   W06
        .byte           N84   , En4 , v094 , gtp3
        .byte                   Cn4 , v088
        .byte   W72
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
        .byte   W24
        .byte   GOTO
         .word  mus_littleroot_4_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 5 (Midi-Chn.8) ******************@

mus_littleroot_5:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 118
        .byte           VOICE , 4
        .byte           BENDR , 12
        .byte   W24
mus_littleroot_5_LOOP:
        .byte   W72
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W36
        .byte           N05   , Cn4 , v099
        .byte   W11
        .byte                   Ds4
        .byte   W12
        .byte           N20   , Gn4
        .byte   W24
        .byte   W01
        .byte           N05   , Cn4
        .byte   W12
@ 005   ----------------------------------------
mus_littleroot_5_5:
        .byte           N03   , Ds4 , v099
        .byte   W12
        .byte           N19   , Gs4
        .byte   W23
        .byte           N05   , Cn4
        .byte   W12
        .byte           N04   , Ds4
        .byte   W12
        .byte           N22   , An4
        .byte   W24
        .byte           N05   , Cn4
        .byte   W12
        .byte                   Ds4
        .byte   W01
        .byte   PEND
@ 006   ----------------------------------------
        .byte   W12
        .byte           N04   , As4
        .byte   W11
        .byte           N05
        .byte   W36
        .byte           N21   , An4
        .byte   W24
        .byte   W01
        .byte           N09   , Fn4
        .byte   W11
        .byte           TIE   , Cn4
        .byte   W01
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W11
        .byte           EOT
        .byte   W24
        .byte   W01
        .byte           N05
        .byte   W11
        .byte                   Ds4
        .byte   W12
        .byte           N20   , Gn4
        .byte   W24
        .byte   W01
        .byte           N05   , Cn4
        .byte   W12
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_5_5
@ 010   ----------------------------------------
        .byte   W12
        .byte           N04   , As4 , v099
        .byte   W11
        .byte           N05   , As4 , v097
        .byte   W36
        .byte   W01
        .byte           N22   , An4
        .byte   W24
        .byte           N12   , As4
        .byte   W12
@ 011   ----------------------------------------
        .byte           N21   , Cn5
        .byte   W21
        .byte           N05   , En5 , v079
        .byte   W03
        .byte           N30   , Fn5 , v097
        .byte   W32
        .byte   W03
        .byte           N28   , Cn5
        .byte   W36
        .byte           N11
        .byte   W01
@ 012   ----------------------------------------
        .byte   W11
        .byte                   Dn5
        .byte   W84
        .byte   W01
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
        .byte   W24
        .byte   GOTO
         .word  mus_littleroot_5_LOOP
        .byte   W72
@ 031   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 6 (Midi-Chn.9) ******************@

mus_littleroot_6:
        .byte   KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 85
        .byte           VOICE , 0
        .byte           BENDR , 12
        .byte   W24
mus_littleroot_6_LOOP:
        .byte   W72
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
mus_littleroot_6_4:
        .byte   W44
        .byte   W03
        .byte           N05   , Dn1 , v104
        .byte   W48
        .byte                   Dn1
        .byte   W01
        .byte   PEND
@ 005   ----------------------------------------
mus_littleroot_6_5:
        .byte   W44
        .byte   W03
        .byte           N06   , Dn1 , v104
        .byte   W48
        .byte           N05
        .byte   W01
        .byte   PEND
@ 006   ----------------------------------------
mus_littleroot_6_6:
        .byte   W44
        .byte   W03
        .byte           N05   , Dn1 , v106
        .byte   W48
        .byte           N06   , Dn1 , v102
        .byte   W01
        .byte   PEND
@ 007   ----------------------------------------
mus_littleroot_6_7:
        .byte   W44
        .byte   W03
        .byte           N05   , Dn1 , v106
        .byte   W48
        .byte           N06   , Dn1 , v104
        .byte   W01
        .byte   PEND
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_4
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_6
@ 011   ----------------------------------------
        .byte   W32
        .byte   W03
        .byte           N05   , Dn1 , v112
        .byte   W24
        .byte                   Dn1 , v106
        .byte   W24
        .byte           N06   , Dn1 , v104
        .byte   W12
        .byte                   Dn1
        .byte   W01
@ 012   ----------------------------------------
        .byte   W11
        .byte                   Dn1 , v112
        .byte   W36
        .byte           N05   , Dn1 , v104
        .byte   W48
        .byte                   Dn1
        .byte   W01
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
         .word  mus_littleroot_6_4
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_6
@ 019   ----------------------------------------
        .byte   W28
        .byte   W01
        .byte           N06   , Dn1 , v112
        .byte   W18
        .byte           N05   , Dn1 , v106
        .byte   W24
        .byte                   Dn1
        .byte   W24
        .byte           N06   , Dn1 , v104
        .byte   W01
@ 020   ----------------------------------------
        .byte   W17
        .byte                   Dn1 , v102
        .byte   W30
        .byte           N05   , Dn1 , v104
        .byte   W30
        .byte                   Dn1
        .byte   W18
        .byte                   Dn1
        .byte   W01
@ 021   ----------------------------------------
        .byte   W44
        .byte   W03
        .byte           N06
        .byte   W24
        .byte                   Dn1
        .byte   W24
        .byte           N05
        .byte   W01
@ 022   ----------------------------------------
        .byte   W11
        .byte                   Dn1 , v112
        .byte   W36
        .byte                   Dn1 , v104
        .byte   W48
        .byte                   Dn1
        .byte   W01
@ 023   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 024   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_4
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_4
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_4
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_littleroot_6_5
@ 030   ----------------------------------------
        .byte   W24
        .byte   GOTO
         .word  mus_littleroot_6_LOOP
        .byte   W72
@ 031   ----------------------------------------
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
