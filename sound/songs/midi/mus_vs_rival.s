        .include "MPlayDef.s"

        .equ    mus_vs_rival_grp, voicegroup_vs_frontier_brain
        .equ    mus_vs_rival_pri, 0
        .equ    mus_vs_rival_rev, 0
        .equ    mus_vs_rival_key, 0

        .section .rodata
        .global mus_vs_rival
        .align  2

@****************** Track 0 (Midi-Chn.9) ******************@

mus_vs_rival_0:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte   TEMPO , 142/2
        .byte           VOICE , 0
        .byte           BENDR , 12
        .byte           VOL   , 105
        .byte   W48
        .byte           N04   , Dn1 , v115
        .byte   W48
@ 001   ----------------------------------------
mus_vs_rival_0_1:
        .byte           N05   , Dn1 , v118
        .byte   W48
        .byte           N04   , Dn1 , v115
        .byte   W48
        .byte   PEND
@ 002   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 003   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 004   ----------------------------------------
        .byte           N05   , Dn1 , v118
        .byte   W12
        .byte           N03
        .byte   W06
        .byte                   Dn1 , v080
        .byte   W06
        .byte           N05   , Dn1 , v118
        .byte   W72
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W24
mus_vs_rival_0_LOOP:
        .byte   W24
        .byte           N04   , Dn1 , v115
        .byte   W48
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 010   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 014   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 015   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 019   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 020   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 021   ----------------------------------------
        .byte           N05   , Dn1 , v118
        .byte   W48
        .byte           N04   , Dn1 , v115
        .byte   W24
        .byte                   Dn1 , v089
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Dn1
        .byte   W12
@ 022   ----------------------------------------
        .byte           N05   , Dn1 , v118
        .byte   W06
        .byte                   Dn1
        .byte   W06
        .byte                   Dn1
        .byte   W44
        .byte   W03
        .byte           N04   , Dn1 , v112
        .byte   W36
        .byte   W01
@ 023   ----------------------------------------
mus_vs_rival_0_23:
        .byte   W56
        .byte   W03
        .byte           N04   , Dn1 , v116
        .byte   W36
        .byte   W01
        .byte   PEND
@ 024   ----------------------------------------
mus_vs_rival_0_24:
        .byte   W56
        .byte   W03
        .byte           N04   , Dn1 , v112
        .byte   W36
        .byte   W01
        .byte   PEND
@ 025   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_23
@ 026   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_24
@ 027   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_23
@ 028   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_24
@ 029   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_23
@ 030   ----------------------------------------
        .byte   W48
        .byte           N04   , Dn1 , v115
        .byte   W48
@ 031   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 032   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_0_1
@ 033   ----------------------------------------
        .byte           N05   , Dn1 , v118
        .byte   W48
        .byte           N04   , Dn1 , v115
        .byte   W36
        .byte                   Dn1 , v102
        .byte   W12
@ 034   ----------------------------------------
        .byte           N05   , Dn1 , v103
        .byte   W12
        .byte           N04   , Dn1 , v105
        .byte   W06
        .byte   GOTO
         .word  mus_vs_rival_0_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte   FINE

@****************** Track 1 (Midi-Chn.1) ******************@

mus_vs_rival_1:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 33
        .byte           BENDR , 12
        .byte           VOL   , 105
        .byte   W96
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W24
        .byte           TIE   , Gn0 , v112
        .byte   W72
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W06
        .byte           EOT
        .byte   W18
mus_vs_rival_1_LOOP:
        .byte   W72
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
        .byte   W24
        .byte           N60   , Fs0 , v112 , gtp2
        .byte   W60
        .byte           N13   , Fs1 , v106
        .byte   W12
@ 023   ----------------------------------------
        .byte                   Cs1
        .byte   W12
        .byte           N48   , Fs0 , v114
        .byte   W48
        .byte           N28   , Fs1
        .byte   W24
        .byte           N32   , Fs0 , v112
        .byte   W12
@ 024   ----------------------------------------
        .byte   W24
        .byte           N60   , Fs0 , v118 , gtp2
        .byte   W60
        .byte           N13   , Fs1 , v116
        .byte   W12
@ 025   ----------------------------------------
        .byte                   Cs1 , v106
        .byte   W12
        .byte           N48   , Fs0 , v114
        .byte   W48
        .byte           N21   , Fs1 , v112
        .byte   W24
        .byte           N32   , Fs0 , v116 , gtp3
        .byte   W12
@ 026   ----------------------------------------
        .byte   W24
        .byte           N60   , An0 , v112 , gtp2
        .byte   W60
        .byte           N13   , An1 , v106
        .byte   W12
@ 027   ----------------------------------------
        .byte                   En1
        .byte   W12
        .byte           N48   , An0 , v114
        .byte   W48
        .byte           N28   , An1
        .byte   W24
        .byte           N32   , An0 , v112
        .byte   W12
@ 028   ----------------------------------------
        .byte   W24
        .byte           N60   , An0 , v118 , gtp2
        .byte   W60
        .byte           N13   , An1 , v116
        .byte   W12
@ 029   ----------------------------------------
        .byte                   En1 , v106
        .byte   W12
        .byte           N48   , An0 , v114
        .byte   W48
        .byte           N21   , An1 , v112
        .byte   W24
        .byte           N32   , An0 , v116 , gtp3
        .byte   W12
@ 030   ----------------------------------------
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W18
        .byte   GOTO
         .word  mus_vs_rival_1_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 2 (Midi-Chn.2) ******************@

mus_vs_rival_2:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 1
        .byte           BENDR , 12
        .byte           VOL   , 105
        .byte   W24
        .byte           N28   , Cn3 , v096
        .byte           N28   , Gn2
        .byte   W32
        .byte   W03
        .byte           N04   , Cn3
        .byte           N06   , Gn2
        .byte   W24
        .byte           N30   , Cn3 , v096 , gtp1
        .byte           N30   , Gn2
        .byte   W13
@ 001   ----------------------------------------
mus_vs_rival_2_1:
        .byte   W24
        .byte           N30   , Fn2 , v096
        .byte           N30   , As2
        .byte   W36
        .byte           N05   , Fn2
        .byte           N04   , As2
        .byte   W24
        .byte           N24   , Fn2 , v096 , gtp3
        .byte           N28   , As2 , v096 , gtp1
        .byte   W12
        .byte   PEND
@ 002   ----------------------------------------
mus_vs_rival_2_2:
        .byte   W23
        .byte           N32   , Gn2 , v096 , gtp1
        .byte   W01
        .byte           N30   , Cn3 , v096 , gtp1
        .byte   W32
        .byte   W03
        .byte           N06   , Gn2
        .byte           N06   , Cn3
        .byte   W24
        .byte           N28   , Gn2 , v096 , gtp1
        .byte                   Cn3
        .byte   W13
        .byte   PEND
@ 003   ----------------------------------------
mus_vs_rival_2_3:
        .byte   W23
        .byte           N30   , Fn2 , v096 , gtp1
        .byte                   As2
        .byte   W36
        .byte           N06   , Fn2
        .byte           N06   , As2
        .byte   W24
        .byte           N24   , As2 , v096 , gtp3
        .byte           N24   , Fn2 , v096 , gtp2
        .byte   W13
        .byte   PEND
@ 004   ----------------------------------------
        .byte   W24
        .byte           TIE   , Cn3
        .byte           TIE   , Gn2
        .byte   W72
@ 005   ----------------------------------------
        .byte   W78
        .byte           EOT   , Cn3
        .byte                   Gn2
        .byte   W18
@ 006   ----------------------------------------
        .byte   W24
mus_vs_rival_2_LOOP:
        .byte           N28   , Cn3 , v096
        .byte           N28   , Gn2
        .byte   W32
        .byte   W03
        .byte           N04   , Cn3
        .byte           N06   , Gn2
        .byte   W24
        .byte           N30   , Cn3 , v096 , gtp1
        .byte           N30   , Gn2
        .byte   W13
@ 007   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_1
@ 008   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_2
@ 009   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_3
@ 010   ----------------------------------------
        .byte   W24
        .byte           N28   , Cn3 , v096
        .byte           N28   , Gn2
        .byte   W32
        .byte   W03
        .byte           N04   , Cn3
        .byte           N06   , Gn2
        .byte   W24
        .byte           N30   , Cn3 , v096 , gtp1
        .byte           N30   , Gn2
        .byte   W13
@ 011   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_1
@ 012   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_2
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_3
@ 014   ----------------------------------------
mus_vs_rival_2_14:
        .byte   W24
        .byte           N20   , Gn4 , v085
        .byte           N20   , Ds4
        .byte   W36
        .byte           N03   , Gn4
        .byte           N03   , Ds4
        .byte   W36
        .byte   PEND
@ 015   ----------------------------------------
mus_vs_rival_2_15:
        .byte           N11   , Cn5 , v085
        .byte   W24
        .byte           N17   , As4 , v086
        .byte           N17   , Fn4
        .byte   W36
        .byte           N03
        .byte   W24
        .byte           N12   , Gn4
        .byte   W12
        .byte   PEND
@ 016   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_14
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_2_15
@ 018   ----------------------------------------
        .byte   W24
        .byte           N20   , Gn4 , v085
        .byte   W36
        .byte           N03
        .byte   W36
@ 019   ----------------------------------------
        .byte           N11   , Cn5
        .byte   W12
        .byte                   Dn5
        .byte   W12
        .byte           N17   , Cn5 , v086
        .byte           N17   , Gn4
        .byte   W36
        .byte           N03   , Cn5
        .byte           N04   , Gn4
        .byte   W24
        .byte           N12   , Cn5
        .byte           N12   , Gn4
        .byte   W12
@ 020   ----------------------------------------
        .byte   W24
        .byte           N20   , As4 , v085
        .byte           N20   , Fn4
        .byte   W36
        .byte           N03   , As4
        .byte           N03   , Fn4
        .byte   W24
        .byte           N04   , As4 , v089
        .byte           N03   , Fn4
        .byte   W12
@ 021   ----------------------------------------
        .byte   W24
        .byte           N68   , Fn3
        .byte           N68   , Dn3
        .byte   W72
@ 022   ----------------------------------------
        .byte   W24
        .byte           N06   , Cs3 , v099
        .byte           N05   , As2 , v095
        .byte   W36
        .byte           N44   , Ds3 , v095 , gtp3
        .byte           N44   , Cn3 , v095 , gtp2
        .byte   W36
@ 023   ----------------------------------------
        .byte   W24
        .byte           N04   , Fn3 , v097
        .byte           N04   , Cs3 , v102
        .byte           N03   , As2 , v099
        .byte   W36
        .byte           N48   , Ds3 , v095 , gtp3
        .byte           N48   , Cn3 , v093 , gtp1
        .byte   W36
@ 024   ----------------------------------------
        .byte   W24
        .byte           N06   , Cs3 , v099
        .byte           N05   , As2 , v095
        .byte   W36
        .byte           N48   , Ds3 , v099 , gtp3
        .byte                   Cn3 , v093
        .byte   W36
@ 025   ----------------------------------------
        .byte   W36
        .byte           N04   , Fn3 , v099
        .byte           N05   , Cs3 , v097
        .byte           N03   , As2 , v102
        .byte   W24
        .byte           N44   , Ds3 , v091
        .byte           N42   , Cn3 , v095 , gtp1
        .byte   W36
@ 026   ----------------------------------------
        .byte   W24
        .byte           N05   , En3 , v093
        .byte           N04   , Cs3 , v097
        .byte   W36
        .byte           N52   , Fs3 , v097 , gtp1
        .byte           N54   , Ds3 , v099
        .byte   W36
@ 027   ----------------------------------------
        .byte   W36
        .byte           N04   , Gs3 , v095
        .byte           N04   , En3 , v097
        .byte           N03   , Cs3 , v099
        .byte   W24
        .byte           N52   , Fs3 , v099 , gtp1
        .byte           N48   , Ds3 , v099 , gtp3
        .byte   W36
@ 028   ----------------------------------------
        .byte   W24
        .byte           N06   , En3 , v091
        .byte           N05   , Cs3 , v099
        .byte   W36
        .byte           N56   , Fs3 , v093 , gtp1
        .byte           N56   , Ds3 , v097 , gtp2
        .byte   W36
@ 029   ----------------------------------------
        .byte   W36
        .byte           N04   , Gs3
        .byte           N04   , En3 , v099
        .byte           N03   , Cs3 , v102
        .byte   W24
        .byte           N52   , Fs3 , v097
        .byte           N52   , Ds3 , v091
        .byte   W36
@ 030   ----------------------------------------
        .byte   W24
        .byte           N04   , Cn4 , v079
        .byte           N03   , An3
        .byte   W11
        .byte           N04
        .byte           N05   , Cn4
        .byte   W24
        .byte           N04   , An3
        .byte           N05   , Cn4
        .byte   W24
        .byte           N06
        .byte           N04   , An3
        .byte   W13
@ 031   ----------------------------------------
        .byte   W12
        .byte                   Cn4
        .byte           N03   , An3
        .byte   W12
        .byte                   Fn4
        .byte           N03   , Cn4
        .byte           N03   , An3
        .byte   W12
        .byte                   Cn4
        .byte           N03   , An3
        .byte           N04   , Fn4
        .byte   W24
        .byte                   Fn4
        .byte           N04   , An3
        .byte           N03   , Cn4
        .byte   W23
        .byte           N05   , An3
        .byte           N05   , Cn4
        .byte           N06   , Fn4
        .byte   W13
@ 032   ----------------------------------------
        .byte   W11
        .byte           N03   , Cn4
        .byte           N04   , An3
        .byte           N04   , Fn4
        .byte   W12
        .byte           N06   , Cn4
        .byte           N05   , An4
        .byte           N02   , Gn4
        .byte           N06   , Fn4
        .byte   W12
        .byte           N04
        .byte           N04   , Cn4
        .byte           N05   , An4
        .byte   W12
        .byte                   An3
        .byte   W12
        .byte           N04   , An4
        .byte           N04   , Cn4
        .byte   W01
        .byte           N03   , Fn4
        .byte   W23
        .byte           N06   , An4
        .byte           N04   , Fn4
        .byte           N05   , Cn4
        .byte   W13
@ 033   ----------------------------------------
        .byte   W11
        .byte           N04
        .byte           N05   , An4
        .byte           N05   , Fn4
        .byte   W13
        .byte           N04   , Bn4
        .byte           N03   , Gn4
        .byte           N04   , Dn4
        .byte   W11
        .byte                   Gn4
        .byte           N04   , Dn4
        .byte   W01
        .byte           N03   , Bn4
        .byte   W11
        .byte           N05   , Bn3
        .byte   W12
        .byte                   Bn4
        .byte           N04   , Gn4
        .byte           N04   , Dn4
        .byte   W24
        .byte                   Dn4
        .byte           N04   , Gn4
        .byte           N04   , Bn4
        .byte   W12
        .byte                   Bn3
        .byte   W01
@ 034   ----------------------------------------
        .byte   W10
        .byte           N05   , Bn4
        .byte   W01
        .byte           N04   , Gn4
        .byte           N04   , Dn4
        .byte   W07
        .byte   GOTO
         .word  mus_vs_rival_2_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 3 (Midi-Chn.3) ******************@

mus_vs_rival_3:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 33
        .byte           BENDR , 12
        .byte           VOL   , 105
        .byte   W24
        .byte           TIE   , Cn1 , v076
        .byte   W72
@ 001   ----------------------------------------
        .byte   W96
@ 002   ----------------------------------------
        .byte   W96
@ 003   ----------------------------------------
        .byte   W96
@ 004   ----------------------------------------
        .byte   W19
        .byte           EOT
        .byte   W05
        .byte           TIE   , Dn2 , v066
        .byte           TIE   , Gn1
        .byte   W72
@ 005   ----------------------------------------
        .byte   W96
@ 006   ----------------------------------------
        .byte   W22
        .byte           EOT   , Dn2
        .byte                   Gn1
        .byte   W02
mus_vs_rival_3_LOOP:
        .byte           TIE   , Cn1 , v076
        .byte   W72
@ 007   ----------------------------------------
        .byte   W96
@ 008   ----------------------------------------
        .byte   W96
@ 009   ----------------------------------------
        .byte   W96
@ 010   ----------------------------------------
        .byte   W19
        .byte           EOT
        .byte   W05
        .byte           TIE
        .byte   W72
@ 011   ----------------------------------------
        .byte   W96
@ 012   ----------------------------------------
        .byte   W96
@ 013   ----------------------------------------
        .byte   W96
@ 014   ----------------------------------------
        .byte   W24
        .byte                   Ds2 , v072
        .byte           TIE   , Gs1
        .byte   W01
        .byte           EOT   , Cn1
        .byte   W68
        .byte   W03
@ 015   ----------------------------------------
mus_vs_rival_3_15:
        .byte   W24
        .byte           TIE   , Dn2 , v072
        .byte           TIE   , Gn1
        .byte   W01
        .byte           EOT   , Gs1
        .byte                   Ds2
        .byte   W68
        .byte   W03
        .byte   PEND
@ 016   ----------------------------------------
mus_vs_rival_3_16:
        .byte   W24
        .byte           TIE   , Ds2 , v072
        .byte           TIE   , Gs1
        .byte   W01
        .byte           EOT   , Dn2
        .byte                   Gn1
        .byte   W68
        .byte   W03
        .byte   PEND
@ 017   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_3_15
@ 018   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_3_16
@ 019   ----------------------------------------
        .byte   W24
        .byte           TIE   , Dn2 , v072
        .byte           TIE   , An1
        .byte   W01
        .byte           EOT   , Ds2
        .byte                   Gs1
        .byte   W68
        .byte   W03
@ 020   ----------------------------------------
        .byte   W24
        .byte           TIE   , Fn2
        .byte           TIE   , As1
        .byte   W01
        .byte           EOT   , An1
        .byte                   Dn2
        .byte   W68
        .byte   W03
@ 021   ----------------------------------------
        .byte   W96
@ 022   ----------------------------------------
        .byte   W24
        .byte   W01
        .byte                   Fn2
        .byte                   As1
        .byte   W68
        .byte   W03
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
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W18
        .byte   GOTO
         .word  mus_vs_rival_3_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 4 (Midi-Chn.4) ******************@

mus_vs_rival_4:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 48
        .byte           BENDR , 12
        .byte           VOL   , 105
        .byte   W24
        .byte           N36   , Cn5 , v080 , gtp2
        .byte   W36
        .byte           N32   , Gn4 , v080 , gtp3
        .byte   W36
@ 001   ----------------------------------------
        .byte           N23   , Cn5
        .byte   W24
        .byte           N32   , As4 , v080 , gtp3
        .byte   W36
        .byte           N24   , An4 , v080 , gtp3
        .byte   W24
        .byte           N24   , Gn4
        .byte   W12
@ 002   ----------------------------------------
        .byte   W12
        .byte           N13   , Fn4
        .byte   W12
        .byte           N36   , Gn4 , v080 , gtp1
        .byte   W36
        .byte           N60   , Cn4 , v086
        .byte   W36
@ 003   ----------------------------------------
        .byte   W24
        .byte           N40   , As3
        .byte   W36
        .byte           N24   , An3 , v086 , gtp1
        .byte   W24
        .byte           N24   , Gn3 , v086 , gtp3
        .byte   W12
@ 004   ----------------------------------------
        .byte   W12
        .byte           N10   , Fn3
        .byte   W36
        .byte           N05   , Gn2 , v080
        .byte   W04
        .byte           N06   , An2
        .byte   W05
        .byte           N05   , Bn2
        .byte   W05
        .byte                   Cn3
        .byte   W05
        .byte                   Dn3
        .byte   W05
        .byte                   An2
        .byte   W04
        .byte           N06   , Bn2
        .byte   W05
        .byte           N05   , Cn3
        .byte   W05
        .byte                   Dn3
        .byte   W05
        .byte                   En3
        .byte   W05
@ 005   ----------------------------------------
        .byte                   Bn2
        .byte   W04
        .byte           N06   , Cn3
        .byte   W05
        .byte           N05   , Dn3
        .byte   W05
        .byte                   En3
        .byte   W05
        .byte                   Fn3
        .byte   W05
        .byte                   Dn3
        .byte   W04
        .byte           N06   , En3
        .byte   W05
        .byte           N05   , Fn3
        .byte   W05
        .byte                   Gn3
        .byte   W05
        .byte                   An3
        .byte   W05
        .byte                   Fn3
        .byte   W04
        .byte           N06   , Gn3
        .byte   W05
        .byte           N05   , An3
        .byte   W05
        .byte                   Bn3
        .byte   W05
        .byte                   Cn4
        .byte   W05
        .byte                   An3
        .byte   W04
        .byte           N06   , Bn3
        .byte   W05
        .byte           N05   , Cn4
        .byte   W05
        .byte                   Dn4
        .byte   W05
        .byte                   En4
        .byte   W05
@ 006   ----------------------------------------
        .byte           N04   , Bn3
        .byte   W04
        .byte                   Cn4
        .byte   W04
        .byte                   Dn4
        .byte   W04
        .byte                   En4
        .byte   W04
        .byte                   Fn4
        .byte   W04
        .byte           N03   , Gn4
        .byte   W04
mus_vs_rival_4_LOOP:
        .byte           N92   , Cn5 , v061 , gtp3
        .byte   W72
@ 007   ----------------------------------------
        .byte   W24
        .byte           N36   , As4 , v061 , gtp3
        .byte   W36
        .byte           N24   , An4 , v061 , gtp3
        .byte   W24
        .byte           N24   , Gn4
        .byte   W12
@ 008   ----------------------------------------
        .byte   W12
        .byte           N15   , Fn4
        .byte   W12
        .byte           N92   , Gn4 , v061 , gtp2
        .byte   W72
@ 009   ----------------------------------------
        .byte   W24
        .byte           N92   , Cn5 , v061 , gtp3
        .byte   W72
@ 010   ----------------------------------------
mus_vs_rival_4_10:
        .byte   W24
        .byte           N92   , Cn5 , v061 , gtp1
        .byte   W72
        .byte   PEND
@ 011   ----------------------------------------
        .byte   W24
        .byte           N36   , As4 , v061 , gtp3
        .byte   W36
        .byte           N24   , An4
        .byte   W24
        .byte           N22   , Gn4
        .byte   W12
@ 012   ----------------------------------------
        .byte   W12
        .byte           N16   , Fn4
        .byte   W12
        .byte           N92   , Gn4 , v061 , gtp2
        .byte   W72
@ 013   ----------------------------------------
        .byte   PATT
         .word  mus_vs_rival_4_10
@ 014   ----------------------------------------
        .byte   W24
        .byte           N68   , Gn4 , v094 , gtp2
        .byte           TIE   , Ds3 , v073
        .byte   W72
@ 015   ----------------------------------------
        .byte           N23   , Cn5 , v094
        .byte   W24
        .byte           N24   , As4 , v094 , gtp2
        .byte           N92   , Fn3 , v073 , gtp3
        .byte   W01
        .byte           EOT   , Ds3
        .byte   W23
        .byte           N09   , Fn4 , v094
        .byte   W24
        .byte           N11
        .byte   W12
        .byte           N24   , Gn4 , v094 , gtp3
        .byte   W12
@ 016   ----------------------------------------
        .byte   W24
        .byte           N36   , Cn5 , v094 , gtp1
        .byte           TIE   , Gn3 , v073
        .byte   W36
        .byte           N36   , Dn5 , v094 , gtp1
        .byte   W36
@ 017   ----------------------------------------
        .byte           N23   , Ds5
        .byte   W24
        .byte           N88   , As4
        .byte           N72   , Fn3 , v073 , gtp1
        .byte   W05
        .byte           EOT   , Gn3
        .byte   W66
        .byte   W01
@ 018   ----------------------------------------
        .byte           N24   , As2 , v073 , gtp3
        .byte   W24
        .byte           N68   , Gn4 , v094 , gtp3
        .byte           N92   , Ds3 , v073
        .byte   W72
@ 019   ----------------------------------------
        .byte           N14   , Cn5 , v094
        .byte   W12
        .byte           N16   , Dn5
        .byte   W12
        .byte           N32   , Ds5 , v094 , gtp3
        .byte           N72   , Ds3 , v075
        .byte   W36
        .byte           N36   , Fn5 , v094
        .byte   W36
@ 020   ----------------------------------------
        .byte           N23   , Ds5
        .byte           N24   , Cn3 , v075 , gtp1
        .byte   W24
        .byte           N36   , As4 , v094 , gtp2
        .byte           N36   , As2 , v075 , gtp1
        .byte   W36
        .byte           N32   , Fn4 , v094 , gtp3
        .byte                   Ds3 , v075
        .byte   W36
@ 021   ----------------------------------------
        .byte           N24   , Ds4 , v094 , gtp1
        .byte           N21   , Fn3 , v075
        .byte   W24
        .byte           N90   , As3 , v094 , gtp1
        .byte           N88   , Fn3 , v075
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
        .byte           TIE   , Cn4 , v063
        .byte           N96   , Fn3
        .byte           N84   , Cn3 , v065 , gtp2
        .byte                   An2
        .byte           TIE   , Gn1
        .byte           TIE   , Gn0
        .byte   W72
@ 031   ----------------------------------------
        .byte   W24
        .byte                   Fn4 , v063
        .byte           N96   , An3
        .byte           N01   , Fn3 , v065
        .byte           N84   , Cn3 , v065 , gtp1
        .byte   W01
        .byte           EOT   , Cn4
        .byte   W68
        .byte   W03
@ 032   ----------------------------------------
        .byte   W24
        .byte           N96   , An4 , v063
        .byte           TIE   , Cn4
        .byte           N02   , An3 , v065
        .byte           N88   , Fn3
        .byte   W02
        .byte           EOT   , Fn4
        .byte   W68
        .byte   W02
@ 033   ----------------------------------------
        .byte   W24
        .byte           N90   , Bn4 , v063 , gtp1
        .byte           N90   , Dn4
        .byte           N80   , Bn3 , v065 , gtp2
        .byte                   Gn3
        .byte   W01
        .byte           EOT   , Cn4
        .byte   W68
        .byte   W03
@ 034   ----------------------------------------
        .byte   W15
        .byte                   Gn0
        .byte   W01
        .byte                   Gn1
        .byte   W02
        .byte   GOTO
         .word  mus_vs_rival_4_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 5 (Midi-Chn.5) ******************@

mus_vs_rival_5:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOL   , 107
        .byte           VOICE , 24
        .byte           BENDR , 12
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
        .byte   W24
mus_vs_rival_5_LOOP:
        .byte   W72
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
        .byte   W24
        .byte           N21   , Fs2 , v101
        .byte   W11
        .byte           N15   , Cs3 , v103
        .byte   W12
        .byte           N14   , As2 , v068
        .byte   W13
        .byte           N42   , Gs3 , v099 , gtp1
        .byte                   Ds3 , v103
        .byte           N42   , Cn3 , v089 , gtp1
        .byte   W36
@ 023   ----------------------------------------
        .byte   W24
        .byte           N20   , Fs2 , v105
        .byte   W11
        .byte           N13   , Cs3 , v101
        .byte   W12
        .byte           N14   , As2 , v103
        .byte   W12
        .byte           N21   , Ds3 , v110
        .byte           N28   , Cn3 , v091
        .byte           N30   , Gs3 , v103
        .byte   W24
        .byte   W01
        .byte           N13   , Ds3 , v118
        .byte   W12
@ 024   ----------------------------------------
        .byte           N14   , Cn3 , v087
        .byte   W11
        .byte           N15   , Gs2 , v097
        .byte   W13
        .byte           N14   , Fs2 , v101
        .byte   W11
        .byte           N15   , Cs3 , v107
        .byte   W13
        .byte           N14   , As2 , v077
        .byte   W12
        .byte           N42   , Ds3 , v107 , gtp1
        .byte                   Gs3 , v105
        .byte           N42   , Cn3 , v076 , gtp1
        .byte   W36
@ 025   ----------------------------------------
        .byte   W24
        .byte           N23   , Fs2 , v103
        .byte   W12
        .byte           N13   , Cs3 , v101
        .byte   W12
        .byte           N12   , As2 , v105
        .byte   W12
        .byte           N24   , Gs3 , v099 , gtp2
        .byte           N19   , Ds3 , v110
        .byte           N28   , Cn3 , v097
        .byte   W24
        .byte           N16   , Ds3 , v116
        .byte   W12
@ 026   ----------------------------------------
        .byte           N14   , Cn3 , v077
        .byte   W12
        .byte           N08   , Gs2 , v087
        .byte   W12
        .byte           N21   , An2 , v101
        .byte   W11
        .byte           N15   , En3 , v103
        .byte   W12
        .byte           N14   , Cs3 , v068
        .byte   W13
        .byte           N42   , Bn3 , v099 , gtp1
        .byte                   Fs3 , v103
        .byte           N42   , Ds3 , v089 , gtp1
        .byte   W36
@ 027   ----------------------------------------
        .byte   W24
        .byte           N20   , An2 , v105
        .byte   W11
        .byte           N13   , En3 , v101
        .byte   W12
        .byte           N14   , Cs3 , v103
        .byte   W12
        .byte           N21   , Fs3 , v110
        .byte           N28   , Ds3 , v091
        .byte           N30   , Bn3 , v103
        .byte   W24
        .byte   W01
        .byte           N13   , Fs3 , v118
        .byte   W12
@ 028   ----------------------------------------
        .byte           N14   , Ds3 , v087
        .byte   W11
        .byte           N15   , Bn2 , v097
        .byte   W13
        .byte           N14   , An2 , v101
        .byte   W11
        .byte           N15   , En3 , v107
        .byte   W13
        .byte           N14   , Cs3 , v077
        .byte   W12
        .byte           N42   , Fs3 , v107 , gtp1
        .byte                   Bn3 , v105
        .byte           N42   , Ds3 , v076 , gtp1
        .byte   W36
@ 029   ----------------------------------------
        .byte   W24
        .byte           N23   , An2 , v103
        .byte   W12
        .byte           N13   , En3 , v101
        .byte   W12
        .byte           N12   , Cs3 , v105
        .byte   W12
        .byte           N24   , Bn3 , v099 , gtp2
        .byte           N19   , Fs3 , v110
        .byte           N28   , Ds3 , v097
        .byte   W24
        .byte           N16   , Fs3 , v116
        .byte   W12
@ 030   ----------------------------------------
        .byte           N14   , Ds3 , v077
        .byte   W12
        .byte           N08   , Bn2 , v087
        .byte   W84
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W18
        .byte   GOTO
         .word  mus_vs_rival_5_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE

@****************** Track 6 (Midi-Chn.6) ******************@

mus_vs_rival_6:
        .byte   KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
        .byte           VOICE , 29
        .byte           BENDR , 12
        .byte           VOL   , 105
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
        .byte   W24
mus_vs_rival_6_LOOP:
        .byte           N36   , Cn4 , v092 , gtp1
        .byte   W32
        .byte   W02
        .byte                   Gn3
        .byte   W32
        .byte   W03
        .byte           N24   , Cn4 , v092 , gtp2
        .byte   W03
@ 007   ----------------------------------------
        .byte   W14
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W01
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-9
        .byte   W01
        .byte                   c_v-11
        .byte   W02
        .byte           N40   , As3 , v092 , gtp1
        .byte           BEND  , c_v-10
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-5
        .byte   W01
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-2
        .byte   W05
        .byte                   c_v-1
        .byte   W04
        .byte                   c_v+0
        .byte   W24
        .byte   W02
        .byte           N24   , An3 , v092 , gtp2
        .byte   W24
        .byte   W01
        .byte           N21   , Gn3
        .byte   W09
@ 008   ----------------------------------------
        .byte   W12
        .byte           N13   , Fn3
        .byte   W12
        .byte           N24   , Gn3
        .byte   W23
        .byte           N13   , An3
        .byte   W14
        .byte           N52   , Cn3
        .byte   W32
        .byte   W03
@ 009   ----------------------------------------
        .byte   W23
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-2
        .byte   W01
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-11
        .byte   W08
        .byte           N23   , Cn4 , v086
        .byte           N21   , Gn3
        .byte   W03
        .byte           BEND  , c_v-10
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-1
        .byte   W02
        .byte                   c_v+0
        .byte   W12
        .byte           N20   , As3
        .byte           N24   , Fn3 , v086 , gtp1
        .byte   W22
        .byte           BEND  , c_v-1
        .byte   W01
        .byte                   c_v-3
        .byte   W01
        .byte           N23   , Dn4
        .byte           N21   , As3
        .byte           BEND  , c_v-4
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-11
        .byte   W01
        .byte                   c_v-10
        .byte   W01
        .byte                   c_v-8
        .byte   W01
        .byte                   c_v-6
        .byte   W01
        .byte                   c_v-4
        .byte   W01
        .byte                   c_v-3
        .byte   W01
        .byte                   c_v-2
        .byte   W02
        .byte                   c_v-1
        .byte   W01
        .byte                   c_v+0
        .byte   W01
@ 010   ----------------------------------------
        .byte   W12
        .byte           N44   , Cn4 , v086 , gtp1
        .byte           N42   , Gn3
        .byte   W48
        .byte           N23   , As3 , v092
        .byte   W24
        .byte           N12   , An3
        .byte   W12
@ 011   ----------------------------------------
        .byte                   As3
        .byte   W12
        .byte           N17   , Gn3
        .byte   W18
        .byte           N06   , Cn3
        .byte   W06
        .byte                   Dn3
        .byte   W06
        .byte                   En3
        .byte   W06
        .byte                   Gn3
        .byte   W06
        .byte                   An3
        .byte   W06
        .byte                   As3
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte           N12   , Dn4
        .byte   W12
        .byte                   Fn4
        .byte   W12
@ 012   ----------------------------------------
        .byte                   En4
        .byte   W12
        .byte                   Cn4
        .byte   W12
        .byte           N24   , Gn4 , v092 , gtp1
        .byte   W24
        .byte           N14   , Fn4
        .byte   W12
        .byte           N22   , En4
        .byte   W24
        .byte           N23   , Cn4
        .byte   W12
@ 013   ----------------------------------------
        .byte   W12
        .byte           N12   , An4
        .byte   W12
        .byte           N07   , Gn4
        .byte   W06
        .byte                   Cn4
        .byte   W06
        .byte           N08   , Dn4
        .byte   W06
        .byte           N07   , En4
        .byte   W06
        .byte           N06   , Fn4
        .byte   W06
        .byte           N07   , En4
        .byte   W06
        .byte           N06   , Fn4
        .byte   W06
        .byte           N07   , Gn4
        .byte   W06
        .byte           N06   , Cn4
        .byte   W06
        .byte                   An4
        .byte   W06
        .byte                   Gn4
        .byte   W06
        .byte                   An4
        .byte   W06
@ 014   ----------------------------------------
        .byte           N07   , As4
        .byte   W06
        .byte           N06   , An4
        .byte   W06
        .byte                   As4
        .byte   W06
        .byte           N76   , Cn5 , v092 , gtp1
        .byte   W32
        .byte   W02
        .byte           BEND  , c_v-1
        .byte   W08
        .byte                   c_v-2
        .byte   W08
        .byte                   c_v-3
        .byte   W28
@ 015   ----------------------------------------
        .byte   W24
        .byte   W03
        .byte                   c_v+0
        .byte   W68
        .byte   W01
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
        .byte   W96
@ 031   ----------------------------------------
        .byte   W96
@ 032   ----------------------------------------
        .byte   W96
@ 033   ----------------------------------------
        .byte   W96
@ 034   ----------------------------------------
        .byte   W18
        .byte   GOTO
         .word  mus_vs_rival_6_LOOP
        .byte   W78
@ 035   ----------------------------------------
        .byte           VOICE , 0
        .byte   FINE


@********************** End of Song ***********************@

        .align  2
mus_vs_rival:
        .byte   7                       @ Num Tracks
        .byte   0                       @ Unknown
        .byte   mus_vs_rival_pri        @ Priority
        .byte   mus_vs_rival_rev        @ Reverb

        .word   mus_vs_rival_grp       

        .word   mus_vs_rival_0
        .word   mus_vs_rival_1
        .word   mus_vs_rival_2
        .word   mus_vs_rival_3
        .word   mus_vs_rival_4
        .word   mus_vs_rival_5
        .word   mus_vs_rival_6

        .end
