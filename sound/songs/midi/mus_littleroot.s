	.include "MPlayDef.s"

	.equ	mus_littleroot_grp, voicegroup_colosseum_battle_trainer
	.equ	mus_littleroot_pri, 0
	.equ	mus_littleroot_rev, reverb_set+50
	.equ	mus_littleroot_mvl, 95
	.equ	mus_littleroot_key, 0
	.equ	mus_littleroot_tbs, 1
	.equ	mus_littleroot_exg, 1
	.equ	mus_littleroot_cmp, 1

	.section .rodata
	.global	mus_littleroot
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_littleroot_1:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
@ 001   ----------------------------------------
	.byte	TEMPO , 146*mus_littleroot_tbs/2
	.byte		VOICE , 35
	.byte		VOL   , 63*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W23
	.byte		N04   , Cn2 , v120
	.byte	W11
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W01
@ 002   ----------------------------------------
mus_littleroot_1_002:
	.byte	W11
	.byte		N04   , Cn2 , v120
	.byte	W12
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte	PEND
@ 003   ----------------------------------------
mus_littleroot_1_003:
	.byte		N04   , Cn2 , v120
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W01
	.byte	PEND
@ 004   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 013   ----------------------------------------
	.byte		N04   , Cn2 , v120
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N04   , Gs1 
	.byte	W12
	.byte		        Gs1 , v116
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   , Gs1 , v120
	.byte	W12
	.byte		        Gs1 , v116
	.byte	W12
@ 014   ----------------------------------------
mus_littleroot_1_014:
	.byte		N04   , Gs1 , v116
	.byte	W12
	.byte		N05   , Gs1 , v120
	.byte	W12
	.byte		        Cs2 , v116
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		        Cs2 , v120
	.byte	W12
	.byte		        Cs2 , v116
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte	PEND
@ 015   ----------------------------------------
mus_littleroot_1_015:
	.byte		N04   , Cs2 , v116
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		        Gs1 , v120
	.byte	W12
	.byte		        Gs1 , v116
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   , Gs1 , v120
	.byte	W12
	.byte		        Gs1 , v116
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_014
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_015
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_014
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_015
@ 020   ----------------------------------------
	.byte		N04   , Gs1 , v116
	.byte	W12
	.byte		N05   , Gs1 , v120
	.byte	W12
	.byte		        Cs2 , v116
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		        Cs2 , v120
	.byte	W12
	.byte		        Cs2 , v116
	.byte	W12
	.byte		N04   , Ds2 
	.byte	W12
	.byte		N05   
	.byte	W12
@ 021   ----------------------------------------
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		        Cn2 , v120
	.byte	W11
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W01
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_002
@ 027   ----------------------------------------
	.byte		N04   , Cn2 , v120
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N04   , Gn1 
	.byte	W11
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W01
@ 028   ----------------------------------------
mus_littleroot_1_028:
	.byte	W11
	.byte		N04   , Gn1 , v120
	.byte	W12
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte	PEND
@ 029   ----------------------------------------
	.byte		N04   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W13
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W11
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N04   
	.byte	W01
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_028
@ 031   ----------------------------------------
	.byte		N04   , Gn1 , v120
	.byte	W12
	.byte		N05   
	.byte	W84
@ 032   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_littleroot_2:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 12
	.byte		VOL   , 78*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W23
	.byte		N03   , Cn6 , v072
	.byte	W11
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W13
@ 001   ----------------------------------------
	.byte		        Cn6 
	.byte	W11
	.byte		        Gs5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        An5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W01
@ 002   ----------------------------------------
	.byte	W11
	.byte		        As5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		        Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W13
@ 003   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		        Gs5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        An5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
@ 004   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W01
@ 005   ----------------------------------------
mus_littleroot_2_005:
	.byte	W12
	.byte		N04   , Gs5 , v072
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		N04   , Ds5 
	.byte	W13
	.byte		N05   , Cn6 
	.byte	W12
	.byte		N04   , An5 
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		N04   , Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W01
	.byte	PEND
@ 006   ----------------------------------------
	.byte	W12
	.byte		N02   , As5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		N03   , Ds5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W13
	.byte		N05   , An5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W12
	.byte		        Fn5 
	.byte	W12
@ 007   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N02   , An5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		        Fn5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        An5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        Fn5 
	.byte	W12
@ 008   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , An5 
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W12
	.byte		N05   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W01
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_005
@ 010   ----------------------------------------
	.byte	W12
	.byte		N02   , As5 , v072
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		N03   , Ds5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W13
	.byte		N05   , An5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
@ 011   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N02   , An5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        Gn5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
@ 012   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , An5 
	.byte	W12
	.byte		N05   , As5 
	.byte	W12
	.byte		N04   , Ds5 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
@ 013   ----------------------------------------
mus_littleroot_2_013:
	.byte		N04   , As5 , v072
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		N05   , Fn5 
	.byte	W12
	.byte		N04   , As5 
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		N03   , As5 
	.byte	W12
	.byte		N04   , Ds5 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
mus_littleroot_2_014:
	.byte		N04   , As5 , v072
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W12
	.byte		N05   , As5 
	.byte	W12
	.byte		N04   , Ds5 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		        Gn5 
	.byte	W12
	.byte		        As5 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte	PEND
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_014
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_014
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_013
@ 020   ----------------------------------------
	.byte		N04   , As5 , v072
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		        Fn5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        Gn5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        Fn5 
	.byte	W12
@ 021   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W11
	.byte		        En5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        Gn5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        En5 
	.byte	W12
@ 022   ----------------------------------------
	.byte		        Cn6 
	.byte	W12
	.byte		N03   , Gn5 
	.byte	W84
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
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_littleroot_3:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 1
	.byte		VOL   , 75*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+35
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W01
	.byte		PAN   , c_v+35
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
	.byte		N04   , Ds3 , v088
	.byte		N04   , Gn3 
	.byte	W36
	.byte		N32   , Ds3 , v088, gtp1
	.byte		N32   , Gn3 , v088, gtp1
	.byte	W36
@ 005   ----------------------------------------
mus_littleroot_3_005:
	.byte	W12
	.byte		N11   , Ds3 , v088
	.byte		N11   , Gs3 
	.byte	W24
	.byte		N04   , Ds3 
	.byte		N05   , Gs3 
	.byte	W24
	.byte		N32   , Ds3 
	.byte		N32   , An3 , v088, gtp3
	.byte	W36
	.byte	PEND
@ 006   ----------------------------------------
	.byte	W24
	.byte		N10   , Ds3 
	.byte		N10   , As3 
	.byte	W36
	.byte		N64   , Fn3 , v088, gtp1
	.byte		N64   , An3 , v088, gtp1
	.byte	W36
@ 007   ----------------------------------------
	.byte	W36
	.byte		N04   , Fn3 , v092
	.byte		N04   , An3 
	.byte	W24
	.byte		N52   , Cn3 
	.byte		N52   , Fn3 
	.byte	W36
@ 008   ----------------------------------------
	.byte	W24
	.byte		N04   , Cn3 , v088
	.byte		N04   , Ds3 
	.byte		N04   , Gn3 
	.byte	W36
	.byte		N32   , Ds3 , v088, gtp1
	.byte		N32   , Gn3 , v088, gtp1
	.byte	W36
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_005
@ 010   ----------------------------------------
	.byte	W24
	.byte		N10   , Ds3 , v088
	.byte		N10   , As3 
	.byte	W36
	.byte		N54   , Fn3 , v088, gtp1
	.byte		N56   , An3 
	.byte	W36
@ 011   ----------------------------------------
	.byte	W24
	.byte		N28   , Fn3 , v096
	.byte		N24   , An3 , v096, gtp3
	.byte	W32
	.byte	W03
	.byte		N32   
	.byte		N32   , Cn4 
	.byte	W36
	.byte	W01
@ 012   ----------------------------------------
	.byte		N16   
	.byte		N17   , Fn4 
	.byte	W24
	.byte		N76   , Ds3 , v088, gtp1
	.byte		N76   , Gn3 
	.byte	W72
@ 013   ----------------------------------------
mus_littleroot_3_013:
	.byte	W24
	.byte		N84   , Cs3 , v088
	.byte		N84   , Fn3 
	.byte	W72
	.byte	PEND
@ 014   ----------------------------------------
mus_littleroot_3_014:
	.byte	W24
	.byte		N76   , Ds3 , v088, gtp1
	.byte		N76   , Gn3 
	.byte	W72
	.byte	PEND
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_014
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_014
@ 019   ----------------------------------------
	.byte	W24
	.byte		N36   , Cs3 , v088
	.byte		N36   , Fn3 
	.byte	W48
	.byte		N32   , Ds3 , v088, gtp1
	.byte		N32   , Gn3 , v088, gtp2
	.byte	W24
@ 020   ----------------------------------------
	.byte	W24
	.byte		N88   , Cn3 , v096
	.byte		N88   , Fn3 
	.byte	W72
@ 021   ----------------------------------------
	.byte	W23
	.byte		N78   , Cn3 
	.byte		N78   , En3 
	.byte	W72
	.byte	W01
@ 022   ----------------------------------------
	.byte	W24
	.byte		N06   , Gn4 , v100
	.byte		N05   , Bn4 
	.byte	W12
	.byte		N06   , Gn4 
	.byte		N06   , Bn4 
	.byte	W60
@ 023   ----------------------------------------
	.byte	W32
	.byte	W03
	.byte		N03   , Ds4 
	.byte		N04   , Gn4 
	.byte	W24
	.byte	W01
	.byte		        Ds4 
	.byte		N04   , Gn4 
	.byte	W36
@ 024   ----------------------------------------
	.byte	W23
	.byte		N05   
	.byte		N05   , Bn4 
	.byte	W12
	.byte		        Gn4 
	.byte		N05   , Bn4 
	.byte	W60
	.byte	W01
@ 025   ----------------------------------------
	.byte	W36
	.byte		N03   , Ds4 
	.byte		N04   , Gn4 
	.byte	W23
	.byte		N04   
	.byte	W01
	.byte		N03   , Ds4 
	.byte	W36
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
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+35
	.byte		        c_v+35
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_littleroot_4:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 57
	.byte		VOL   , 116*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+46
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
	.byte	W23
	.byte		        c_v+46
	.byte	W16
	.byte		        c_v-46
	.byte	W20
	.byte		        c_v+44
	.byte	W17
	.byte		        c_v-46
	.byte	W20
@ 013   ----------------------------------------
	.byte	W40
	.byte		        c_v+46
	.byte	W18
	.byte		        c_v-46
	.byte	W19
	.byte		        c_v+46
	.byte	W19
@ 014   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		        c_v-46
	.byte	W18
	.byte		        c_v+46
	.byte	W16
	.byte		        c_v-48
	.byte	W21
@ 015   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		        c_v+46
	.byte	W18
	.byte		        c_v-46
	.byte	W18
	.byte		        c_v+46
	.byte	W19
@ 016   ----------------------------------------
	.byte	W40
	.byte		        c_v-46
	.byte	W19
	.byte		        c_v+46
	.byte	W17
	.byte		        c_v-46
	.byte	W20
@ 017   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		        c_v+46
	.byte	W18
	.byte		        c_v-44
	.byte	W18
	.byte		        c_v+46
	.byte	W19
@ 018   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		        c_v-46
	.byte	W17
	.byte		        c_v+46
	.byte	W19
	.byte		        c_v-46
	.byte	W19
@ 019   ----------------------------------------
	.byte	W36
	.byte	W02
	.byte		        c_v+48
	.byte	W18
	.byte		        c_v-48
	.byte	W15
	.byte		        c_v+48
	.byte	W16
	.byte		        c_v-44
	.byte	W09
@ 020   ----------------------------------------
	.byte	W09
	.byte		        c_v+46
	.byte	W84
	.byte	W03
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W23
	.byte		N05   , Cn3 , v120
	.byte	W13
	.byte		N10   
	.byte	W11
	.byte		        Ds3 , v127
	.byte	W12
	.byte		N05   , Cn3 , v124
	.byte	W24
	.byte	W01
	.byte		        As2 
	.byte	W12
@ 023   ----------------------------------------
	.byte	W12
	.byte		        Gn2 
	.byte	W11
	.byte		N04   , Cn3 , v120
	.byte	W12
	.byte		N08   , Cn3 , v124
	.byte	W12
	.byte		N06   , Ds3 , v127
	.byte	W13
	.byte		N07   , Cn3 , v120
	.byte	W23
	.byte		N06   , Ds3 , v124
	.byte	W13
@ 024   ----------------------------------------
	.byte		N12   , Fn3 
	.byte	W11
	.byte		N08   , Gn3 , v116
	.byte	W12
	.byte		        Cn3 , v124
	.byte	W13
	.byte		N07   , Cn3 , v120
	.byte	W11
	.byte		        Ds3 
	.byte	W13
	.byte		        Cn3 
	.byte	W24
	.byte		N04   , As2 , v127
	.byte	W12
@ 025   ----------------------------------------
	.byte	W12
	.byte		        Gn2 , v120
	.byte	W12
	.byte		N05   , Cn3 
	.byte	W12
	.byte		N08   , Cn3 , v124
	.byte	W12
	.byte		N06   , Ds3 
	.byte	W12
	.byte		        Cn3 
	.byte	W24
	.byte		        Ds3 , v120
	.byte	W12
@ 026   ----------------------------------------
	.byte		N08   , Fn3 
	.byte	W12
	.byte		N06   , Gn3 
	.byte	W84
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+46
	.byte		        c_v+46
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_littleroot_5:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 29
	.byte		VOL   , 101*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
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
	.byte		N12   , Cn4 , v104
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Ds4 , v096
	.byte		N12   , Gn4 , v100
	.byte	W12
	.byte		N05   , Cn4 , v088
	.byte		N06   , Fn4 , v096
	.byte	W06
	.byte		        Cn4 , v088
	.byte		N06   , Ds4 , v096
	.byte	W06
	.byte		N28   , Dn4 
	.byte	W36
	.byte		N16   , Cn4 , v100
	.byte	W12
@ 013   ----------------------------------------
	.byte	W06
	.byte		N05   , Cn4 , v088
	.byte		N06   , Ds4 , v100
	.byte	W06
	.byte		N05   , Cn4 , v088
	.byte		N06   , Fn4 , v100
	.byte	W06
	.byte		N05   , Cn4 , v088
	.byte		N06   , Gn4 , v100
	.byte	W06
	.byte		N32   , Fn4 , v088, gtp3
	.byte		N32   , As4 , v096, gtp3
	.byte	W36
	.byte		N28   , Gs4 , v088, gtp1
	.byte		N28   , Cn5 , v096, gtp1
	.byte	W36
@ 014   ----------------------------------------
	.byte		N12   , Fn4 , v088
	.byte		N12   , As4 , v096
	.byte	W12
	.byte		N06   , Gn4 , v100
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		N32   , Cn4 , v088, gtp1
	.byte		N36   , Ds4 , v096
	.byte	W36
	.byte		N32   , Cn4 , v104, gtp3
	.byte	W36
@ 015   ----------------------------------------
	.byte		N11   , Cn4 , v088
	.byte		N11   , Ds4 , v096
	.byte	W12
	.byte		        Cn4 , v088
	.byte		N11   , Fn4 , v096
	.byte	W12
	.byte		N36   , As3 
	.byte	W36
	.byte		N23   , Cs4 , v100
	.byte	W24
	.byte		        Cs4 , v088
	.byte		N23   , Fn4 , v096
	.byte	W12
@ 016   ----------------------------------------
	.byte	W12
	.byte		N12   , Fn4 , v088
	.byte		N10   , Gs4 , v096
	.byte	W12
	.byte		N16   , Gs4 , v104
	.byte		N16   , Ds5 
	.byte	W24
	.byte		N76   , Gs4 , v088
	.byte		N76   , Cn5 , v096
	.byte	W48
@ 017   ----------------------------------------
	.byte	W40
	.byte		N14   , Gs4 , v088
	.byte		N16   , Cn5 , v096
	.byte	W16
	.byte		        Gs4 , v088
	.byte		N16   , Cs5 , v096
	.byte	W16
	.byte		        Cn5 
	.byte		N16   , Ds5 
	.byte	W16
	.byte		N15   , Gs4 , v088
	.byte		N15   , Cs5 , v096
	.byte	W08
@ 018   ----------------------------------------
	.byte	W08
	.byte		        Gs4 , v088
	.byte		N15   , Cn5 , v096
	.byte	W16
	.byte		N06   , Fn4 , v104
	.byte		N06   , As4 , v116
	.byte	W06
	.byte		N05   , Gs4 , v104
	.byte		N05   , Cn5 , v108
	.byte	W06
	.byte		        Fn4 , v100
	.byte		N06   , As4 , v104
	.byte	W06
	.byte		N80   , Ds4 , v088, gtp2
	.byte		N80   , Gs4 , v096, gtp2
	.byte	W54
@ 019   ----------------------------------------
	.byte	W48
	.byte		N23   , Cs4 , v088
	.byte		N23   , Fn4 , v096
	.byte	W24
	.byte		N06   , Ds4 , v112
	.byte	W06
	.byte		N05   , As3 , v100
	.byte		N06   , Fn4 
	.byte	W06
	.byte		N32   , As3 , v088, gtp3
	.byte		N32   , Gn4 , v096, gtp3
	.byte	W12
@ 020   ----------------------------------------
	.byte	W24
	.byte		N72   , Cn4 , v088, gtp3
	.byte		N72   , Fn4 , v096, gtp3
	.byte	W72
@ 021   ----------------------------------------
	.byte	W12
	.byte		N05   , Cn4 , v108
	.byte		N05   , Gn4 , v112
	.byte	W06
	.byte		        Cn4 , v100
	.byte		N06   , Fn4 
	.byte	W06
	.byte		N84   , Cn4 , v088, gtp3
	.byte		N84   , En4 , v096, gtp3
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
	.byte	W96
@ 031   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_littleroot_6:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 16
	.byte		VOL   , 103*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
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
	.byte	W36
	.byte		N05   , Cn4 , v100
	.byte	W11
	.byte		        Ds4 
	.byte	W12
	.byte		N19   , Gn4 
	.byte	W24
	.byte	W01
	.byte		N05   , Cn4 
	.byte	W12
@ 005   ----------------------------------------
mus_littleroot_6_005:
	.byte		N03   , Ds4 , v100
	.byte	W12
	.byte		N19   , Gs4 
	.byte	W23
	.byte		N05   , Cn4 
	.byte	W12
	.byte		N04   , Ds4 
	.byte	W12
	.byte		N21   , An4 
	.byte	W24
	.byte		N05   , Cn4 
	.byte	W12
	.byte		N04   , Ds4 
	.byte	W01
	.byte	PEND
@ 006   ----------------------------------------
	.byte	W12
	.byte		        As4 
	.byte	W11
	.byte		N04   
	.byte	W36
	.byte		N20   , An4 
	.byte	W24
	.byte	W01
	.byte		N09   , Fn4 
	.byte	W11
	.byte		TIE   , Cn4 
	.byte	W01
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W11
	.byte		EOT   
	.byte	W24
	.byte	W01
	.byte		N05   
	.byte	W11
	.byte		        Ds4 
	.byte	W12
	.byte		N19   , Gn4 
	.byte	W24
	.byte	W01
	.byte		N05   , Cn4 
	.byte	W12
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_6_005
@ 010   ----------------------------------------
	.byte	W12
	.byte		N04   , As4 , v100
	.byte	W11
	.byte		N04   
	.byte	W36
	.byte	W01
	.byte		N22   , An4 
	.byte	W24
	.byte		N12   , As4 
	.byte	W12
@ 011   ----------------------------------------
	.byte		N21   , Cn5 
	.byte	W21
	.byte		N05   , En5 , v080
	.byte	W03
	.byte		N30   , Fn5 , v100
	.byte	W32
	.byte	W03
	.byte		N28   , Cn5 
	.byte	W36
	.byte		N10   
	.byte	W01
@ 012   ----------------------------------------
	.byte	W11
	.byte		        Dn5 
	.byte	W84
	.byte	W01
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
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

mus_littleroot_7:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 56
	.byte		VOL   , 113*mus_littleroot_mvl/mxv
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
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W24
	.byte		N04   , Gn4 , v112
	.byte		N05   , Cn5 
	.byte	W11
	.byte		N04   , Gn4 
	.byte		N05   , Cn5 
	.byte	W12
	.byte		N04   , Gn4 
	.byte		N06   , Cn5 
	.byte	W12
	.byte		N05   , Gn4 
	.byte		N05   , Bn4 
	.byte	W24
	.byte		        Fs4 
	.byte		N06   , As4 
	.byte	W13
@ 027   ----------------------------------------
	.byte	W10
	.byte		N11   , An4 
	.byte	W01
	.byte		N09   , Fn4 
	.byte	W23
	.byte		N07   , As4 
	.byte	W12
	.byte		N05   , Fn4 
	.byte		N08   , An4 
	.byte	W13
	.byte		N06   , As4 
	.byte	W24
	.byte		N12   , Fn4 
	.byte		N12   , An4 
	.byte	W13
@ 028   ----------------------------------------
	.byte	W12
	.byte		N06   , Fn4 
	.byte	W12
	.byte		N07   , Dn4 
	.byte		N07   , Gn4 
	.byte	W11
	.byte		N04   , Cs4 
	.byte		N05   , Fs4 
	.byte		N06   , As4 
	.byte	W12
	.byte		N05   , Dn4 
	.byte		N05   , Gn4 
	.byte	W12
	.byte		N04   , Cs4 
	.byte		N05   , Fs4 
	.byte		N06   , As4 
	.byte	W24
	.byte		N03   , En4 
	.byte		N06   , Gn4 
	.byte		N05   , Cn5 
	.byte	W12
	.byte		        As4 
	.byte	W01
@ 029   ----------------------------------------
	.byte		N04   , Fs4 
	.byte	W11
	.byte		N66   , Dn4 
	.byte		N66   , Gn4 , v112, gtp1
	.byte	W66
	.byte	W01
	.byte	FINE

@**************** Track 8 (Midi-Chn.10) ****************@

mus_littleroot_8:
	.byte	KEYSH , mus_littleroot_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		VOL   , 100*mus_littleroot_mvl/mxv
	.byte	W01
	.byte	W22
	.byte	W01
	.byte		N12   , Cs2 , v127
	.byte	W72
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N06   , Dn1 , v112
	.byte	W12
	.byte		N15   , Dn1 , v116
	.byte	W84
@ 003   ----------------------------------------
	.byte	W60
	.byte		N09   , Dn1 , v112
	.byte	W24
	.byte		N09   
	.byte	W12
@ 004   ----------------------------------------
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W11
	.byte		N04   , Bn0 , v120
	.byte	W24
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
@ 005   ----------------------------------------
mus_littleroot_8_005:
	.byte	W11
	.byte		N04   , Bn0 , v116
	.byte	W12
	.byte		        Bn0 , v104
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N05   
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W01
	.byte	PEND
@ 006   ----------------------------------------
mus_littleroot_8_006:
	.byte	W11
	.byte		N04   , Bn0 , v112
	.byte	W12
	.byte		N05   , Bn0 , v120
	.byte	W24
	.byte		        Dn1 , v108
	.byte	W12
	.byte		        Bn0 , v120
	.byte	W24
	.byte		        Bn0 , v112
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W01
	.byte	PEND
@ 007   ----------------------------------------
mus_littleroot_8_007:
	.byte	W11
	.byte		N05   , Bn0 , v112
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N04   , Dn1 , v108
	.byte	W12
	.byte		N05   , Bn0 , v120
	.byte	W24
	.byte		        Bn0 , v112
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W01
	.byte	PEND
@ 008   ----------------------------------------
mus_littleroot_8_008:
	.byte	W11
	.byte		N05   , Bn0 , v112
	.byte	W12
	.byte		N04   , Bn0 , v120
	.byte	W24
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_006
@ 011   ----------------------------------------
	.byte	W11
	.byte		N05   , Bn0 , v112
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N05   
	.byte		N05   , Dn1 
	.byte	W24
	.byte		        Bn0 , v120
	.byte		N04   , Dn1 , v108
	.byte	W24
	.byte		N05   , Bn0 , v112
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		N05   
	.byte	W01
@ 012   ----------------------------------------
	.byte	W11
	.byte		        Bn0 , v112
	.byte		N05   , Dn1 
	.byte	W12
	.byte		N04   , Bn0 , v120
	.byte	W24
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_006
@ 019   ----------------------------------------
	.byte	W11
	.byte		N05   , Bn0 , v112
	.byte	W12
	.byte		N05   
	.byte	W06
	.byte		        Dn1 
	.byte	W06
	.byte		        Bn0 
	.byte	W12
	.byte		N04   , Dn1 , v108
	.byte	W12
	.byte		N05   , Bn0 , v120
	.byte	W12
	.byte		N04   , Dn1 , v108
	.byte	W12
	.byte		N05   , Bn0 , v112
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W01
@ 020   ----------------------------------------
	.byte	W11
	.byte		        Bn0 , v112
	.byte	W06
	.byte		        Dn1 , v104
	.byte	W06
	.byte		N04   , Bn0 , v120
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W18
	.byte		        Dn1 , v104
	.byte	W06
	.byte		N04   , Bn0 , v112
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
@ 021   ----------------------------------------
	.byte	W11
	.byte		N04   , Bn0 , v116
	.byte	W12
	.byte		        Bn0 , v104
	.byte	W12
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W12
	.byte		        Dn1 , v104
	.byte	W01
@ 022   ----------------------------------------
	.byte	W11
	.byte		N04   , Bn0 , v112
	.byte		N04   , Dn1 
	.byte	W12
	.byte		        Bn0 , v120
	.byte	W24
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 024   ----------------------------------------
mus_littleroot_8_024:
	.byte	W11
	.byte		N04   , Bn0 , v112
	.byte	W12
	.byte		        Bn0 , v120
	.byte	W24
	.byte		N05   , Dn1 , v104
	.byte	W12
	.byte		        Bn0 , v112
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N05   , Dn1 , v104
	.byte	W01
	.byte	PEND
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_024
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_024
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_8_005
@ 030   ----------------------------------------
	.byte	W11
	.byte		N04   , Bn0 , v112
	.byte	W12
	.byte	FINE

@******************************************************@
	.align	2

mus_littleroot:
	.byte	8	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_littleroot_pri	@ Priority
	.byte	mus_littleroot_rev	@ Reverb.

	.word	mus_littleroot_grp

	.word	mus_littleroot_1
	.word	mus_littleroot_2
	.word	mus_littleroot_3
	.word	mus_littleroot_4
	.word	mus_littleroot_5
	.word	mus_littleroot_6
	.word	mus_littleroot_7
	.word	mus_littleroot_8

	.end
