	.include "MPlayDef.s"

	.equ	mus_vs_rival_grp, voicegroupvoicegroup191
	.equ	mus_vs_rival_pri, 0
	.equ	mus_vs_rival_rev, reverb_set+50
	.equ	mus_vs_rival_mvl, 80
	.equ	mus_vs_rival_key, 0
	.equ	mus_vs_rival_tbs, 1
	.equ	mus_vs_rival_exg, 1
	.equ	mus_vs_rival_cmp, 1

	.section .rodata
	.global	mus_vs_rival
	.align	2

@**************** Track 1 (Midi-Chn.10) ****************@

mus_vs_rival_1:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
@ 001   ----------------------------------------
	.byte	TEMPO , 142*mus_vs_rival_tbs/2
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W48
@ 002   ----------------------------------------
mus_vs_rival_1_002:
	.byte		N05   , Dn1 , v120
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W48
	.byte	PEND
@ 003   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 004   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 005   ----------------------------------------
	.byte		N05   , Dn1 , v120
	.byte	W12
	.byte		N03   
	.byte	W06
	.byte		        Dn1 , v080
	.byte	W06
	.byte		N05   , Dn1 , v120
	.byte	W72
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W48
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 022   ----------------------------------------
	.byte		N05   , Dn1 , v120
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W24
	.byte		        Dn1 , v092
	.byte	W06
	.byte		N04   
	.byte	W06
	.byte		N04   
	.byte	W12
@ 023   ----------------------------------------
	.byte		N05   , Dn1 , v120
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W44
	.byte	W03
	.byte		N03   , Dn1 , v112
	.byte	W36
	.byte	W01
@ 024   ----------------------------------------
mus_vs_rival_1_024:
	.byte	W56
	.byte	W03
	.byte		N04   , Dn1 , v116
	.byte	W36
	.byte	W01
	.byte	PEND
@ 025   ----------------------------------------
mus_vs_rival_1_025:
	.byte	W56
	.byte	W03
	.byte		N03   , Dn1 , v112
	.byte	W36
	.byte	W01
	.byte	PEND
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_024
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_025
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_024
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_025
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_024
@ 031   ----------------------------------------
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W48
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_1_002
@ 034   ----------------------------------------
	.byte		N05   , Dn1 , v120
	.byte	W48
	.byte		N04   , Dn1 , v116
	.byte	W36
	.byte		        Dn1 , v104
	.byte	W12
@ 035   ----------------------------------------
	.byte		N05   
	.byte	W12
	.byte		N04   , Dn1 , v108
	.byte	W84
@ 036   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_vs_rival_2:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 33
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W92
	.byte	W03
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W24
	.byte		TIE   , Gn0 , v112
	.byte	W72
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W06
	.byte		EOT   
	.byte	W90
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W24
	.byte		N60   , Fs0 , v112, gtp2
	.byte	W60
	.byte		N13   , Fs1 , v108
	.byte	W12
@ 023   ----------------------------------------
	.byte		        Cs1 
	.byte	W12
	.byte		N48   , Fs0 , v116
	.byte	W48
	.byte		N28   , Fs1 
	.byte	W24
	.byte		N32   , Fs0 , v112
	.byte	W12
@ 024   ----------------------------------------
	.byte	W24
	.byte		N60   , Fs0 , v120, gtp2
	.byte	W60
	.byte		N13   , Fs1 , v116
	.byte	W12
@ 025   ----------------------------------------
	.byte		        Cs1 , v108
	.byte	W12
	.byte		N48   , Fs0 , v116
	.byte	W48
	.byte		N21   , Fs1 , v112
	.byte	W24
	.byte		N32   , Fs0 , v116, gtp3
	.byte	W12
@ 026   ----------------------------------------
	.byte	W24
	.byte		N60   , An0 , v112, gtp2
	.byte	W60
	.byte		N13   , An1 , v108
	.byte	W12
@ 027   ----------------------------------------
	.byte		        En1 
	.byte	W12
	.byte		N48   , An0 , v116
	.byte	W48
	.byte		N28   , An1 
	.byte	W24
	.byte		N32   , An0 , v112
	.byte	W12
@ 028   ----------------------------------------
	.byte	W24
	.byte		N60   , An0 , v120, gtp2
	.byte	W60
	.byte		N13   , An1 , v116
	.byte	W12
@ 029   ----------------------------------------
	.byte		        En1 , v108
	.byte	W12
	.byte		N48   , An0 , v116
	.byte	W48
	.byte		N21   , An1 , v112
	.byte	W24
	.byte		N32   , An0 , v116, gtp3
	.byte	W12
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_vs_rival_3:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 1
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W24
	.byte		N28   , Gn2 , v096
	.byte		N28   , Cn3 
	.byte	W32
	.byte	W03
	.byte		N05   , Gn2 
	.byte		N04   , Cn3 
	.byte	W24
	.byte		N30   , Gn2 
	.byte		N30   , Cn3 
	.byte	W13
@ 001   ----------------------------------------
mus_vs_rival_3_001:
	.byte	W24
	.byte		N30   , Fn2 , v096
	.byte		N30   , As2 
	.byte	W36
	.byte		N04   , Fn2 
	.byte		N04   , As2 
	.byte	W24
	.byte		N24   , Fn2 , v096, gtp2
	.byte		N28   , As2 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
mus_vs_rival_3_002:
	.byte	W23
	.byte		N32   , Gn2 , v096
	.byte	W01
	.byte		N30   , Cn3 , v096, gtp1
	.byte	W32
	.byte	W03
	.byte		N05   , Gn2 
	.byte		N05   , Cn3 
	.byte	W24
	.byte		N28   , Gn2 
	.byte		N28   , Cn3 
	.byte	W13
	.byte	PEND
@ 003   ----------------------------------------
mus_vs_rival_3_003:
	.byte	W23
	.byte		N30   , Fn2 , v096, gtp1
	.byte		N30   , As2 
	.byte	W36
	.byte		N06   , Fn2 
	.byte		N05   , As2 
	.byte	W24
	.byte		N24   , Fn2 , v096, gtp2
	.byte		N24   , As2 , v096, gtp3
	.byte	W13
	.byte	PEND
@ 004   ----------------------------------------
	.byte	W24
	.byte		TIE   , Gn2 
	.byte		TIE   , Cn3 
	.byte	W72
@ 005   ----------------------------------------
	.byte	W78
	.byte		EOT   , Gn2 
	.byte		        Cn3 
	.byte	W18
@ 006   ----------------------------------------
mus_vs_rival_3_006:
	.byte	W24
	.byte		N28   , Gn2 , v096
	.byte		N28   , Cn3 
	.byte	W32
	.byte	W03
	.byte		N05   , Gn2 
	.byte		N04   , Cn3 
	.byte	W24
	.byte		N30   , Gn2 
	.byte		N30   , Cn3 
	.byte	W13
	.byte	PEND
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_001
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_002
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_003
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_006
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_001
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_002
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_003
@ 014   ----------------------------------------
mus_vs_rival_3_014:
	.byte	W24
	.byte		N20   , Ds4 , v088
	.byte		N20   , Gn4 
	.byte	W36
	.byte		N03   , Ds4 
	.byte		N03   , Gn4 
	.byte	W36
	.byte	PEND
@ 015   ----------------------------------------
mus_vs_rival_3_015:
	.byte		N11   , Cn5 , v088
	.byte	W24
	.byte		N17   , Fn4 
	.byte		N17   , As4 
	.byte	W36
	.byte		N03   , Fn4 
	.byte	W24
	.byte		N12   , Gn4 
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_014
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_3_015
@ 018   ----------------------------------------
	.byte	W24
	.byte		N20   , Gn4 , v088
	.byte	W36
	.byte		N03   
	.byte	W36
@ 019   ----------------------------------------
	.byte		N11   , Cn5 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N17   , Gn4 
	.byte		N17   , Cn5 
	.byte	W36
	.byte		N04   , Gn4 
	.byte		N03   , Cn5 
	.byte	W24
	.byte		N12   , Gn4 
	.byte		N12   , Cn5 
	.byte	W12
@ 020   ----------------------------------------
	.byte	W24
	.byte		N20   , Fn4 
	.byte		N20   , As4 
	.byte	W36
	.byte		N03   , Fn4 
	.byte		N03   , As4 
	.byte	W24
	.byte		        Fn4 , v092
	.byte		N04   , As4 
	.byte	W12
@ 021   ----------------------------------------
	.byte	W24
	.byte		N66   , Dn3 , v092, gtp1
	.byte		N68   , Fn3 
	.byte	W72
@ 022   ----------------------------------------
	.byte	W24
	.byte		N05   , As2 , v096
	.byte		N06   , Cs3 , v100
	.byte	W36
	.byte		N44   , Cn3 , v096, gtp2
	.byte		N44   , Ds3 , v096, gtp3
	.byte	W36
@ 023   ----------------------------------------
	.byte	W24
	.byte		N03   , As2 , v100
	.byte		N04   , Cs3 , v104
	.byte		N04   , Fn3 , v100
	.byte	W36
	.byte		N48   , Cn3 , v096, gtp1
	.byte		N48   , Ds3 , v096, gtp3
	.byte	W36
@ 024   ----------------------------------------
	.byte	W24
	.byte		N05   , As2 
	.byte		N06   , Cs3 , v100
	.byte	W36
	.byte		N48   , Cn3 , v096, gtp3
	.byte		N48   , Ds3 , v100, gtp3
	.byte	W36
@ 025   ----------------------------------------
	.byte	W36
	.byte		N03   , As2 , v104
	.byte		N05   , Cs3 , v100
	.byte		N04   , Fn3 
	.byte	W24
	.byte		N42   , Cn3 , v096, gtp1
	.byte		N44   , Ds3 , v092
	.byte	W36
@ 026   ----------------------------------------
	.byte	W24
	.byte		N04   , Cs3 , v100
	.byte		N05   , En3 , v096
	.byte	W36
	.byte		N54   , Ds3 , v100
	.byte		N52   , Fs3 , v100, gtp1
	.byte	W36
@ 027   ----------------------------------------
	.byte	W36
	.byte		N03   , Cs3 
	.byte		N04   , En3 
	.byte		N04   , Gs3 , v096
	.byte	W24
	.byte		N48   , Ds3 , v100, gtp3
	.byte		N52   , Fs3 , v100, gtp1
	.byte	W36
@ 028   ----------------------------------------
	.byte	W24
	.byte		N05   , Cs3 
	.byte		N06   , En3 , v092
	.byte	W36
	.byte		N56   , Ds3 , v100, gtp2
	.byte		N56   , Fs3 , v096, gtp1
	.byte	W36
@ 029   ----------------------------------------
	.byte	W36
	.byte		N03   , Cs3 , v104
	.byte		N04   , En3 , v100
	.byte		N04   , Gs3 
	.byte	W24
	.byte		N52   , Ds3 , v092
	.byte		N52   , Fs3 , v100
	.byte	W36
@ 030   ----------------------------------------
	.byte	W24
	.byte		N03   , An3 , v080
	.byte		N04   , Cn4 
	.byte	W11
	.byte		        An3 
	.byte		N05   , Cn4 
	.byte	W24
	.byte		N03   , An3 
	.byte		N05   , Cn4 
	.byte	W24
	.byte		N04   , An3 
	.byte		N05   , Cn4 
	.byte	W13
@ 031   ----------------------------------------
	.byte	W12
	.byte		N02   , An3 
	.byte		N04   , Cn4 
	.byte	W12
	.byte		N03   , An3 
	.byte		N03   , Cn4 
	.byte		N03   , Fn4 
	.byte	W12
	.byte		        An3 
	.byte		N03   , Cn4 
	.byte		N04   , Fn4 
	.byte	W24
	.byte		        An3 
	.byte		N03   , Cn4 
	.byte		N04   , Fn4 
	.byte	W23
	.byte		        An3 
	.byte		N04   , Cn4 
	.byte		N05   , Fn4 
	.byte	W13
@ 032   ----------------------------------------
	.byte	W11
	.byte		N03   , An3 
	.byte		N03   , Cn4 
	.byte		N04   , Fn4 
	.byte	W12
	.byte		N05   , Cn4 
	.byte		N05   , Fn4 
	.byte		N01   , Gn4 
	.byte		N05   , An4 
	.byte	W12
	.byte		N03   , Cn4 
	.byte		N03   , Fn4 
	.byte		N04   , An4 
	.byte	W12
	.byte		        An3 
	.byte	W12
	.byte		N03   , Cn4 
	.byte		N04   , An4 
	.byte	W01
	.byte		N03   , Fn4 
	.byte	W23
	.byte		N04   , Cn4 
	.byte		N04   , Fn4 
	.byte		N05   , An4 
	.byte	W13
@ 033   ----------------------------------------
	.byte	W11
	.byte		N04   , Cn4 
	.byte		N04   , Fn4 
	.byte		N04   , An4 
	.byte	W13
	.byte		N03   , Dn4 
	.byte		N03   , Gn4 
	.byte		N04   , Bn4 
	.byte	W11
	.byte		        Dn4 
	.byte		N03   , Gn4 
	.byte	W01
	.byte		        Bn4 
	.byte	W11
	.byte		N04   , Bn3 
	.byte	W12
	.byte		        Dn4 
	.byte		N04   , Gn4 
	.byte		N04   , Bn4 
	.byte	W24
	.byte		        Dn4 
	.byte		N04   , Gn4 
	.byte		N04   , Bn4 
	.byte	W12
	.byte		        Bn3 
	.byte	W01
@ 034   ----------------------------------------
	.byte	W10
	.byte		        Bn4 
	.byte	W01
	.byte		        Dn4 
	.byte		N04   , Gn4 
	.byte	W84
	.byte	W01
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_vs_rival_4:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 81
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W24
	.byte		TIE   , Cn1 , v076
	.byte	W72
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W19
	.byte		EOT   
	.byte	W05
	.byte		TIE   , Gn1 , v068
	.byte		TIE   , Dn2 
	.byte	W72
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W22
	.byte		EOT   , Gn1 
	.byte		        Dn2 
	.byte	W02
	.byte		TIE   , Cn1 , v076
	.byte	W72
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W19
	.byte		EOT   
	.byte	W05
	.byte		TIE   
	.byte	W72
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
mus_vs_rival_4_014:
	.byte	W24
	.byte		TIE   , Gs1 , v072
	.byte		TIE   , Ds2 
	.byte	W01
	.byte	PEND
	.byte		EOT   , Cn1 
	.byte	W68
	.byte	W03
@ 015   ----------------------------------------
mus_vs_rival_4_015:
	.byte	W24
	.byte		TIE   , Gn1 , v072
	.byte		TIE   , Dn2 
	.byte	W01
	.byte	PEND
	.byte		EOT   , Gs1 
	.byte		        Ds2 
	.byte	W68
	.byte	W03
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_4_014
	.byte		EOT   , Gn1 
	.byte		        Dn2 
	.byte	W68
	.byte	W03
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_4_015
	.byte		EOT   , Gs1 
	.byte		        Ds2 
	.byte	W68
	.byte	W03
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_4_014
	.byte		EOT   , Gn1 
	.byte		        Dn2 
	.byte	W68
	.byte	W03
@ 019   ----------------------------------------
	.byte	W24
	.byte		TIE   , An1 , v072
	.byte		TIE   , Dn2 
	.byte	W01
	.byte		EOT   , Gs1 
	.byte		        Ds2 
	.byte	W68
	.byte	W03
@ 020   ----------------------------------------
	.byte	W24
	.byte		TIE   , As1 
	.byte		TIE   , Fn2 
	.byte	W01
	.byte		EOT   , An1 
	.byte		        Dn2 
	.byte	W68
	.byte	W03
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W24
	.byte	W01
	.byte		        As1 
	.byte		        Fn2 
	.byte	W68
	.byte	W03
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_vs_rival_5:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W24
	.byte		N36   , Cn5 , v080, gtp2
	.byte	W36
	.byte		N32   , Gn4 , v080, gtp3
	.byte	W36
@ 001   ----------------------------------------
	.byte		N23   , Cn5 
	.byte	W24
	.byte		N32   , As4 , v080, gtp3
	.byte	W36
	.byte		N24   , An4 , v080, gtp3
	.byte	W24
	.byte		        Gn4 
	.byte	W12
@ 002   ----------------------------------------
	.byte	W12
	.byte		N13   , Fn4 
	.byte	W12
	.byte		N36   , Gn4 , v080, gtp1
	.byte	W36
	.byte		N60   , Cn4 , v088
	.byte	W36
@ 003   ----------------------------------------
	.byte	W24
	.byte		N40   , As3 
	.byte	W36
	.byte		N24   , An3 , v088, gtp1
	.byte	W24
	.byte		        Gn3 , v088, gtp3
	.byte	W12
@ 004   ----------------------------------------
	.byte	W12
	.byte		N10   , Fn3 
	.byte	W36
	.byte		N05   , Gn2 , v080
	.byte	W04
	.byte		        An2 
	.byte	W05
	.byte		        Bn2 
	.byte	W05
	.byte		        Cn3 
	.byte	W05
	.byte		        Dn3 
	.byte	W05
	.byte		        An2 
	.byte	W04
	.byte		        Bn2 
	.byte	W05
	.byte		        Cn3 
	.byte	W05
	.byte		        Dn3 
	.byte	W05
	.byte		        En3 
	.byte	W05
@ 005   ----------------------------------------
	.byte		        Bn2 
	.byte	W04
	.byte		        Cn3 
	.byte	W05
	.byte		        Dn3 
	.byte	W05
	.byte		        En3 
	.byte	W05
	.byte		        Fn3 
	.byte	W05
	.byte		        Dn3 
	.byte	W04
	.byte		        En3 
	.byte	W05
	.byte		        Fn3 
	.byte	W05
	.byte		        Gn3 
	.byte	W05
	.byte		        An3 
	.byte	W05
	.byte		        Fn3 
	.byte	W04
	.byte		        Gn3 
	.byte	W05
	.byte		        An3 
	.byte	W05
	.byte		        Bn3 
	.byte	W05
	.byte		        Cn4 
	.byte	W05
	.byte		        An3 
	.byte	W04
	.byte		        Bn3 
	.byte	W05
	.byte		        Cn4 
	.byte	W05
	.byte		        Dn4 
	.byte	W05
	.byte		        En4 
	.byte	W05
@ 006   ----------------------------------------
	.byte		N04   , Bn3 
	.byte	W04
	.byte		        Cn4 
	.byte	W04
	.byte		        Dn4 
	.byte	W04
	.byte		        En4 
	.byte	W04
	.byte		        Fn4 
	.byte	W04
	.byte		N03   , Gn4 
	.byte	W04
	.byte		N92   , Cn5 , v064, gtp3
	.byte	W72
@ 007   ----------------------------------------
	.byte	W24
	.byte		N36   , As4 , v064, gtp3
	.byte	W36
	.byte		N24   , An4 , v064, gtp3
	.byte	W24
	.byte		        Gn4 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W12
	.byte		N15   , Fn4 
	.byte	W12
	.byte		N92   , Gn4 , v064, gtp2
	.byte	W72
@ 009   ----------------------------------------
	.byte	W24
	.byte		        Cn5 , v064, gtp3
	.byte	W72
@ 010   ----------------------------------------
mus_vs_rival_5_010:
	.byte	W24
	.byte		N92   , Cn5 , v064, gtp1
	.byte	W72
	.byte	PEND
@ 011   ----------------------------------------
	.byte	W24
	.byte		N36   , As4 , v064, gtp3
	.byte	W36
	.byte		N24   , An4 
	.byte	W24
	.byte		N22   , Gn4 
	.byte	W12
@ 012   ----------------------------------------
	.byte	W12
	.byte		N16   , Fn4 
	.byte	W12
	.byte		N92   , Gn4 , v064, gtp2
	.byte	W72
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_vs_rival_5_010
@ 014   ----------------------------------------
	.byte	W24
	.byte		TIE   , Ds3 , v076
	.byte		N68   , Gn4 , v096, gtp2
	.byte	W72
@ 015   ----------------------------------------
	.byte		N23   , Cn5 
	.byte	W24
	.byte		N92   , Fn3 , v076, gtp3
	.byte		N24   , As4 , v096, gtp2
	.byte	W01
	.byte		EOT   , Ds3 
	.byte	W23
	.byte		N09   , Fn4 
	.byte	W24
	.byte		N11   
	.byte	W12
	.byte		N24   , Gn4 , v096, gtp3
	.byte	W12
@ 016   ----------------------------------------
	.byte	W24
	.byte		TIE   , Gn3 , v076
	.byte		N36   , Cn5 , v096, gtp1
	.byte	W36
	.byte		        Dn5 , v096, gtp1
	.byte	W36
@ 017   ----------------------------------------
	.byte		N23   , Ds5 
	.byte	W24
	.byte		N72   , Fn3 , v076, gtp1
	.byte		N88   , As4 , v096
	.byte	W05
	.byte		EOT   , Gn3 
	.byte	W66
	.byte	W01
@ 018   ----------------------------------------
	.byte		N24   , As2 , v076, gtp3
	.byte	W24
	.byte		N92   , Ds3 
	.byte		N68   , Gn4 , v096, gtp3
	.byte	W72
@ 019   ----------------------------------------
	.byte		N14   , Cn5 
	.byte	W12
	.byte		N16   , Dn5 
	.byte	W12
	.byte		N72   , Ds3 , v076
	.byte		N32   , Ds5 , v096, gtp3
	.byte	W36
	.byte		N36   , Fn5 
	.byte	W36
@ 020   ----------------------------------------
	.byte		N24   , Cn3 , v076, gtp1
	.byte		N23   , Ds5 , v096
	.byte	W24
	.byte		N36   , As2 , v076, gtp1
	.byte		N36   , As4 , v096, gtp2
	.byte	W36
	.byte		N32   , Ds3 , v076, gtp3
	.byte		N32   , Fn4 , v096, gtp3
	.byte	W36
@ 021   ----------------------------------------
	.byte		N21   , Fn3 , v076
	.byte		N24   , Ds4 , v096, gtp1
	.byte	W24
	.byte		N88   , Fn3 , v076
	.byte		N90   , As3 , v096, gtp1
	.byte	W72
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W24
	.byte		TIE   , Gn0 , v068
	.byte		TIE   , Gn1 
	.byte		N84   , An2 , v068, gtp2
	.byte		N84   , Cn3 , v068, gtp2
	.byte		N96   , Fn3 , v064
	.byte		TIE   , Cn4 
	.byte	W72
@ 031   ----------------------------------------
	.byte	W24
	.byte		N84   , Cn3 , v068, gtp1
	.byte		N01   , Fn3 
	.byte		N96   , An3 , v064
	.byte		TIE   , Fn4 
	.byte	W01
	.byte		EOT   , Cn4 
	.byte	W68
	.byte	W03
@ 032   ----------------------------------------
	.byte	W24
	.byte		N88   , Fn3 , v068
	.byte		N02   , An3 
	.byte		TIE   , Cn4 , v064
	.byte		N96   , An4 
	.byte	W02
	.byte		EOT   , Fn4 
	.byte	W68
	.byte	W02
@ 033   ----------------------------------------
	.byte	W24
	.byte		N80   , Gn3 , v068, gtp2
	.byte		N80   , Bn3 , v068, gtp2
	.byte		N90   , Dn4 , v064
	.byte		N90   , Bn4 , v064, gtp1
	.byte	W01
	.byte		EOT   , Cn4 
	.byte	W68
	.byte	W03
@ 034   ----------------------------------------
	.byte	W15
	.byte		        Gn0 
	.byte	W01
	.byte		        Gn1 
	.byte	W78
	.byte	W01
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_vs_rival_6:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 107*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W24
	.byte		N21   , Fs2 , v104
	.byte	W11
	.byte		N15   , Cs3 
	.byte	W12
	.byte		N14   , As2 , v068
	.byte	W13
	.byte		N42   , Cn3 , v092
	.byte		N42   , Ds3 , v104, gtp1
	.byte		N42   , Gs3 , v100, gtp1
	.byte	W36
@ 023   ----------------------------------------
	.byte	W24
	.byte		N20   , Fs2 , v108
	.byte	W11
	.byte		N13   , Cs3 , v104
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		N28   , Cn3 , v092
	.byte		N21   , Ds3 , v112
	.byte		N28   , Gs3 , v104, gtp1
	.byte	W24
	.byte	W01
	.byte		N13   , Ds3 , v120
	.byte	W12
@ 024   ----------------------------------------
	.byte		N14   , Cn3 , v088
	.byte	W11
	.byte		        Gs2 , v100
	.byte	W13
	.byte		        Fs2 , v104
	.byte	W11
	.byte		        Cs3 , v108
	.byte	W13
	.byte		N13   , As2 , v080
	.byte	W12
	.byte		N42   , Cn3 , v076, gtp1
	.byte		N42   , Ds3 , v108, gtp1
	.byte		N42   , Gs3 , v108, gtp1
	.byte	W36
@ 025   ----------------------------------------
	.byte	W24
	.byte		N23   , Fs2 , v104
	.byte	W12
	.byte		N13   , Cs3 
	.byte	W12
	.byte		N12   , As2 , v108
	.byte	W12
	.byte		N28   , Cn3 , v100
	.byte		N18   , Ds3 , v112
	.byte		N24   , Gs3 , v100, gtp2
	.byte	W24
	.byte		N15   , Ds3 , v116
	.byte	W12
@ 026   ----------------------------------------
	.byte		N13   , Cn3 , v080
	.byte	W12
	.byte		N07   , Gs2 , v088
	.byte	W12
	.byte		N21   , An2 , v104
	.byte	W11
	.byte		N15   , En3 
	.byte	W12
	.byte		N14   , Cs3 , v068
	.byte	W13
	.byte		N42   , Ds3 , v092
	.byte		N42   , Fs3 , v104, gtp1
	.byte		N42   , Bn3 , v100, gtp1
	.byte	W36
@ 027   ----------------------------------------
	.byte	W24
	.byte		N20   , An2 , v108
	.byte	W11
	.byte		N13   , En3 , v104
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N28   , Ds3 , v092
	.byte		N21   , Fs3 , v112
	.byte		N28   , Bn3 , v104, gtp1
	.byte	W24
	.byte	W01
	.byte		N13   , Fs3 , v120
	.byte	W12
@ 028   ----------------------------------------
	.byte		N14   , Ds3 , v088
	.byte	W11
	.byte		        Bn2 , v100
	.byte	W13
	.byte		        An2 , v104
	.byte	W11
	.byte		        En3 , v108
	.byte	W13
	.byte		N13   , Cs3 , v080
	.byte	W12
	.byte		N42   , Ds3 , v076, gtp1
	.byte		N42   , Fs3 , v108, gtp1
	.byte		N42   , Bn3 , v108, gtp1
	.byte	W36
@ 029   ----------------------------------------
	.byte	W24
	.byte		N23   , An2 , v104
	.byte	W12
	.byte		N13   , En3 
	.byte	W12
	.byte		N12   , Cs3 , v108
	.byte	W12
	.byte		N28   , Ds3 , v100
	.byte		N18   , Fs3 , v112
	.byte		N24   , Bn3 , v100, gtp2
	.byte	W24
	.byte		N15   , Fs3 , v116
	.byte	W12
@ 030   ----------------------------------------
	.byte		N13   , Ds3 , v080
	.byte	W12
	.byte		N07   , Bn2 , v088
	.byte	W84
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

mus_vs_rival_7:
	.byte	KEYSH , mus_vs_rival_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 29
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		        105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W92
	.byte	W03
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W24
	.byte		N36   , Cn4 , v092, gtp1
	.byte	W32
	.byte	W02
	.byte		        Gn3 , v092, gtp1
	.byte	W32
	.byte	W03
	.byte		N24   , Cn4 , v092, gtp2
	.byte	W03
@ 007   ----------------------------------------
	.byte	W14
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-9
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-10
	.byte		        c_v-11
	.byte	W02
	.byte		        c_v-10
	.byte		N40   , As3 , v092, gtp1
	.byte	W01
	.byte		BEND  , c_v-10
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W02
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v+0
	.byte	W24
	.byte	W01
	.byte		N24   , An3 , v092, gtp2
	.byte	W24
	.byte	W01
	.byte		N21   , Gn3 
	.byte	W09
@ 008   ----------------------------------------
	.byte	W12
	.byte		N13   , Fn3 
	.byte	W12
	.byte		N24   , Gn3 
	.byte	W23
	.byte		N13   , An3 
	.byte	W14
	.byte		N52   , Cn3 
	.byte	W32
	.byte	W03
@ 009   ----------------------------------------
	.byte	W23
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-10
	.byte		        c_v-11
	.byte	W08
	.byte		N21   , Gn3 , v088
	.byte		N23   , Cn4 
	.byte	W03
	.byte		BEND  , c_v-10
	.byte	W01
	.byte		        c_v-10
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-6
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v+0
	.byte	W11
	.byte		N24   , Fn3 , v088, gtp1
	.byte		N20   , As3 
	.byte	W22
	.byte		BEND  , c_v-1
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-5
	.byte		N21   
	.byte		N23   , Dn4 
	.byte	W01
	.byte		BEND  , c_v-7
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-11
	.byte	W01
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-10
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
@ 010   ----------------------------------------
	.byte		        c_v+0
	.byte	W12
	.byte		N42   , Gn3 
	.byte		N44   , Cn4 , v088, gtp1
	.byte	W48
	.byte		N23   , As3 , v092
	.byte	W24
	.byte		N12   , An3 
	.byte	W12
@ 011   ----------------------------------------
	.byte		        As3 
	.byte	W12
	.byte		N17   , Gn3 
	.byte	W18
	.byte		N06   , Cn3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		        En3 
	.byte	W06
	.byte		        Gn3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 012   ----------------------------------------
	.byte		        En4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N24   , Gn4 , v092, gtp1
	.byte	W24
	.byte		N14   , Fn4 
	.byte	W12
	.byte		N22   , En4 
	.byte	W24
	.byte		N23   , Cn4 
	.byte	W12
@ 013   ----------------------------------------
	.byte	W12
	.byte		N12   , An4 
	.byte	W12
	.byte		N07   , Gn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		N08   , Dn4 
	.byte	W06
	.byte		N07   , En4 
	.byte	W06
	.byte		N06   , Fn4 
	.byte	W06
	.byte		N07   , En4 
	.byte	W06
	.byte		N06   , Fn4 
	.byte	W06
	.byte		N07   , Gn4 
	.byte	W06
	.byte		N06   , Cn4 
	.byte	W06
	.byte		        An4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 014   ----------------------------------------
	.byte		N07   , As4 
	.byte	W06
	.byte		N06   , An4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		N76   , Cn5 , v092, gtp1
	.byte	W28
	.byte	W01
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-4
	.byte	W22
@ 015   ----------------------------------------
	.byte	W24
	.byte	W03
	.byte		        c_v+0
	.byte	W68
	.byte	W01
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 105*mus_vs_rival_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@******************************************************@
	.align	2

mus_vs_rival:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_vs_rival_pri	@ Priority
	.byte	mus_vs_rival_rev	@ Reverb.

	.word	mus_vs_rival_grp

	.word	mus_vs_rival_1
	.word	mus_vs_rival_2
	.word	mus_vs_rival_3
	.word	mus_vs_rival_4
	.word	mus_vs_rival_5
	.word	mus_vs_rival_6
	.word	mus_vs_rival_7

	.end
