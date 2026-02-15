	.include "MPlayDef.s"

	.equ	mus_littleroot_grp, voicegroup_littleroot_compact
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

@**************** Track 1 (Midi-Chn.2) ****************@

mus_littleroot_1:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_1_B1:
@ 000   ----------------------------------------
	.byte	TEMPO , 146*mus_littleroot_tbs/2
	.byte		VOICE , 1
	.byte		VOL   , 56*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+34
	.byte		N05   , Cn1 , v108
	.byte	W92
	.byte	W03
	.byte		N06   
	.byte	W01
@ 001   ----------------------------------------
	.byte	W48
	.byte		N06   
	.byte	W48
@ 002   ----------------------------------------
	.byte		N05   
	.byte	W11
	.byte		N05   
	.byte	W36
	.byte		N06   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W01
@ 003   ----------------------------------------
mus_littleroot_1_003:
	.byte	W12
	.byte		N05   , Cn1 , v108
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
mus_littleroot_1_004:
	.byte		N05   , Cn1 , v108
	.byte	W11
	.byte		N05   
	.byte	W13
	.byte		N05   
	.byte	W12
	.byte		N05   
	.byte	W11
	.byte		N06   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N06   
	.byte	W01
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 012   ----------------------------------------
mus_littleroot_1_012:
	.byte		N06   , Gs1 , v108
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 013   ----------------------------------------
mus_littleroot_1_013:
	.byte		N06   , Cs1 , v108
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_012
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_012
@ 019   ----------------------------------------
	.byte		N06   , Cs1 , v108
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		        Ds1 
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_003
@ 026   ----------------------------------------
mus_littleroot_1_026:
	.byte		N08   , Gn0 , v108
	.byte	W11
	.byte		N08   
	.byte	W13
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W11
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W01
	.byte	PEND
@ 027   ----------------------------------------
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_1_026
@ 029   ----------------------------------------
	.byte	W12
	.byte		N09   , Gn0 , v108
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W11
	.byte	GOTO
	 .word	mus_littleroot_1_B1
mus_littleroot_1_B2:
	.byte	FINE

@**************** Track 2 (Midi-Chn.3) ****************@

mus_littleroot_2:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_2_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 2
	.byte		PAN   , c_v-7
	.byte		VOL   , 93*mus_littleroot_mvl/mxv
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
	.byte		N90   , Gn3 , v108
	.byte	W96
@ 013   ----------------------------------------
	.byte		N88   , Fn3 , v108, gtp1
	.byte	W96
@ 014   ----------------------------------------
	.byte		N90   , Gn3 
	.byte	W96
@ 015   ----------------------------------------
	.byte		N88   , Fn3 , v108, gtp1
	.byte	W96
@ 016   ----------------------------------------
	.byte		N90   , Gn3 
	.byte	W96
@ 017   ----------------------------------------
	.byte		N88   , Fn3 , v108, gtp1
	.byte	W96
@ 018   ----------------------------------------
	.byte		N92   , Gn3 
	.byte	W96
@ 019   ----------------------------------------
	.byte		N40   , Fn3 , v108, gtp1
	.byte	W48
	.byte		        Gn3 
	.byte	W48
@ 020   ----------------------------------------
	.byte		N88   , Fn3 , v108, gtp1
	.byte	W96
@ 021   ----------------------------------------
	.byte		N80   , En3 , v108, gtp1
	.byte	W96
@ 022   ----------------------------------------
mus_littleroot_2_022:
	.byte		N56   , Bn4 , v072, gtp3
	.byte	W68
	.byte	W03
	.byte		N06   , Gn4 , v076
	.byte	W12
	.byte		        Bn4 
	.byte	W13
	.byte	PEND
@ 023   ----------------------------------------
	.byte	W12
	.byte		N05   , Gn4 
	.byte	W24
	.byte		N04   
	.byte	W60
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_2_022
@ 025   ----------------------------------------
	.byte	W12
	.byte		N05   , Gn4 , v076
	.byte	W24
	.byte		N04   
	.byte	W56
	.byte	W03
	.byte		TIE   , Gn1 , v100
	.byte	W01
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W80
	.byte		EOT   
	.byte	W03
	.byte		N92   , Dn2 , v092, gtp3
	.byte	W13
@ 029   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte	GOTO
	 .word	mus_littleroot_2_B1
mus_littleroot_2_B2:
	.byte	FINE

@**************** Track 3 (Midi-Chn.4) ****************@

mus_littleroot_3:
	.byte		VOL   , 127*mus_littleroot_mvl/mxv
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_3_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 3
	.byte		N03   , Cn6 , v048
	.byte	W06
	.byte		VOL   , 93*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N03   , Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Gs5 , v048
	.byte	W06
	.byte		        Gs5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W01
@ 001   ----------------------------------------
	.byte	W05
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        As5 , v048
	.byte	W06
	.byte		        As5 , v020
	.byte	W07
@ 002   ----------------------------------------
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Gs5 , v048
	.byte	W06
	.byte		        Gs5 , v020
	.byte	W06
@ 003   ----------------------------------------
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        As5 , v048
	.byte	W06
	.byte		        As5 , v020
	.byte	W06
@ 004   ----------------------------------------
mus_littleroot_3_004:
	.byte		N05   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N03   , Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W06
	.byte		N05   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W07
	.byte		N04   , Gs5 , v048
	.byte	W06
	.byte		        Gs5 , v020
	.byte	W06
	.byte	PEND
@ 005   ----------------------------------------
mus_littleroot_3_005:
	.byte		N05   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		N04   , Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W07
	.byte		N05   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N04   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
	.byte		N05   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		N04   , Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W07
	.byte		N02   , As5 , v048
	.byte	W06
	.byte		        As5 , v020
	.byte	W06
	.byte	PEND
@ 006   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		N03   , Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W07
	.byte		N05   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Fn5 , v048
	.byte	W06
	.byte		        Fn5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N02   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
@ 007   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Fn5 , v048
	.byte	W06
	.byte		        Fn5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Fn5 , v048
	.byte	W06
	.byte		        Fn5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N03   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_005
@ 010   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		N03   , Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W07
	.byte		N05   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N02   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
@ 011   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Ds5 , v048
	.byte	W06
	.byte		        Ds5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N03   , An5 , v048
	.byte	W06
	.byte		        An5 , v020
	.byte	W06
@ 012   ----------------------------------------
mus_littleroot_3_012:
	.byte		N05   , As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		N04   , Ds5 , v052
	.byte	W06
	.byte		        Ds5 , v024
	.byte	W06
	.byte		        As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		        Gn5 , v052
	.byte	W06
	.byte		        Gn5 , v024
	.byte	W06
	.byte		        As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		        Ds5 , v052
	.byte	W06
	.byte		        Ds5 , v024
	.byte	W06
	.byte		        As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		        Gn5 , v052
	.byte	W06
	.byte		        Gn5 , v024
	.byte	W06
	.byte	PEND
@ 013   ----------------------------------------
mus_littleroot_3_013:
	.byte		N04   , As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		N05   , Fn5 , v052
	.byte	W06
	.byte		        Fn5 , v024
	.byte	W06
	.byte		N04   , As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		        Gn5 , v052
	.byte	W06
	.byte		        Gn5 , v024
	.byte	W06
	.byte		N03   , As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		N04   , Ds5 , v052
	.byte	W06
	.byte		        Ds5 , v024
	.byte	W06
	.byte		        As5 , v052
	.byte	W06
	.byte		        As5 , v024
	.byte	W06
	.byte		N03   , Gn5 , v052
	.byte	W06
	.byte		        Gn5 , v024
	.byte	W06
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_012
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_012
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_3_013
@ 020   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Fn5 , v048
	.byte	W06
	.byte		        Fn5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        Fn5 , v048
	.byte	W06
	.byte		        Fn5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N03   , Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W06
@ 021   ----------------------------------------
	.byte		N04   , Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        En5 , v048
	.byte	W06
	.byte		        En5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W05
	.byte		        Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W07
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		        En5 , v048
	.byte	W06
	.byte		        En5 , v020
	.byte	W06
	.byte		        Cn6 , v048
	.byte	W06
	.byte		        Cn6 , v020
	.byte	W06
	.byte		N03   , Gn5 , v048
	.byte	W06
	.byte		        Gn5 , v020
	.byte	W06
@ 022   ----------------------------------------
	.byte		N05   , Cn3 , v040
	.byte	W12
	.byte		N10   , Cn3 , v036
	.byte	W11
	.byte		        Ds3 , v044
	.byte	W13
	.byte		N05   , Cn3 , v040
	.byte	W24
	.byte		        As2 , v044
	.byte	W24
	.byte		        Gn2 , v040
	.byte	W11
	.byte		N04   , Cn3 
	.byte	W01
@ 023   ----------------------------------------
	.byte	W11
	.byte		N08   
	.byte	W12
	.byte		N06   , Ds3 , v044
	.byte	W13
	.byte		N07   , Cn3 , v040
	.byte	W23
	.byte		N06   , Ds3 
	.byte	W13
	.byte		N12   , Fn3 
	.byte	W11
	.byte		N08   , Gn3 , v032
	.byte	W12
	.byte		        Cn3 , v040
	.byte	W01
@ 024   ----------------------------------------
	.byte	W12
	.byte		N07   
	.byte	W12
	.byte		        Ds3 , v036
	.byte	W12
	.byte		        Cn3 , v040
	.byte	W24
	.byte		N04   , As2 , v044
	.byte	W24
	.byte		        Gn2 , v040
	.byte	W12
@ 025   ----------------------------------------
	.byte		N05   , Cn3 
	.byte	W12
	.byte		N08   
	.byte	W12
	.byte		N06   , Ds3 , v044
	.byte	W12
	.byte		        Cn3 , v040
	.byte	W24
	.byte		        Ds3 
	.byte	W12
	.byte		N08   , Fn3 , v036
	.byte	W12
	.byte		N06   , Gn3 
	.byte	W12
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte	GOTO
	 .word	mus_littleroot_3_B1
mus_littleroot_3_B2:
	.byte	FINE

@**************** Track 4 (Midi-Chn.5) ****************@

mus_littleroot_4:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_4_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 2
	.byte		PAN   , c_v-8
	.byte		VOL   , 110*mus_littleroot_mvl/mxv
	.byte		N05   , Cn6 , v088
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
	.byte	W13
	.byte		N04   , Gs5 
	.byte	W12
@ 001   ----------------------------------------
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
	.byte	W24
	.byte	W01
@ 002   ----------------------------------------
	.byte		N04   
	.byte	W11
	.byte		N03   , Ds5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W13
	.byte		N05   , Gn5 
	.byte	W12
	.byte		N04   , Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W12
	.byte		N02   , Gs5 
	.byte	W12
@ 003   ----------------------------------------
	.byte		N04   , Cn6 
	.byte	W11
	.byte		        Ds5 
	.byte	W13
	.byte		        Cn6 
	.byte	W11
	.byte		        An5 
	.byte	W13
	.byte		        Cn6 
	.byte	W12
	.byte		        Ds5 
	.byte	W12
	.byte		        Cn6 
	.byte	W24
@ 004   ----------------------------------------
mus_littleroot_4_004:
	.byte		N04   , Ds3 , v088
	.byte		N04   , Gn3 
	.byte	W36
	.byte		N32   , Ds3 , v088, gtp1
	.byte		N32   , Gn3 , v088, gtp1
	.byte	W48
	.byte		N11   , Ds3 
	.byte		N11   , Gs3 
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
mus_littleroot_4_005:
	.byte	W12
	.byte		N04   , Ds3 , v088
	.byte		N05   , Gs3 
	.byte	W24
	.byte		N32   , Ds3 
	.byte		N32   , An3 , v088, gtp3
	.byte	W60
	.byte	PEND
@ 006   ----------------------------------------
	.byte		N10   , Ds3 
	.byte		N10   , As3 
	.byte	W36
	.byte		N64   , Fn3 , v088, gtp1
	.byte		N64   , An3 , v088, gtp1
	.byte	W60
@ 007   ----------------------------------------
	.byte	W12
	.byte		N04   , Fn3 , v092
	.byte		N04   , An3 
	.byte	W24
	.byte		N52   , Cn3 
	.byte		N52   , Fn3 
	.byte	W60
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_4_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_4_005
@ 010   ----------------------------------------
	.byte		N10   , Ds3 , v088
	.byte		N10   , As3 
	.byte	W36
	.byte		N54   , Fn3 , v088, gtp1
	.byte		N56   , An3 
	.byte	W60
@ 011   ----------------------------------------
	.byte		N28   , Fn3 , v096
	.byte		N24   , An3 , v096, gtp3
	.byte	W32
	.byte	W03
	.byte		N32   
	.byte		N32   , Cn4 
	.byte	W36
	.byte	W01
	.byte		N16   
	.byte	W24
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
	.byte		N05   , Cn3 , v120
	.byte		N05   , Bn4 , v100
	.byte	W12
	.byte		N05   
	.byte	W01
	.byte		N10   , Cn3 , v120
	.byte	W11
	.byte		        Ds3 , v127
	.byte	W12
	.byte		N05   , Cn3 , v124
	.byte	W24
	.byte	W01
	.byte		        As2 
	.byte	W24
	.byte		        Gn2 
	.byte	W11
@ 023   ----------------------------------------
	.byte		N04   , Cn3 , v120
	.byte	W11
	.byte		        Gn4 , v100
	.byte	W01
	.byte		N08   , Cn3 , v124
	.byte	W12
	.byte		N06   , Ds3 , v127
	.byte	W12
	.byte		N04   , Gn4 , v100
	.byte	W01
	.byte		N07   , Cn3 , v120
	.byte	W23
	.byte		N06   , Ds3 , v124
	.byte	W13
	.byte		N12   , Fn3 
	.byte	W11
	.byte		N08   , Gn3 , v116
	.byte	W11
	.byte		N05   , Bn4 , v100
	.byte	W01
@ 024   ----------------------------------------
	.byte		N08   , Cn3 , v124
	.byte	W11
	.byte		N05   , Bn4 , v100
	.byte	W02
	.byte		N07   , Cn3 , v120
	.byte	W11
	.byte		        Ds3 
	.byte	W13
	.byte		        Cn3 
	.byte	W24
	.byte		N04   , As2 , v127
	.byte	W24
	.byte		        Gn2 , v120
	.byte	W11
@ 025   ----------------------------------------
	.byte	W01
	.byte		N05   , Cn3 
	.byte	W11
	.byte		N04   , Gn4 , v100
	.byte	W01
	.byte		N08   , Cn3 , v124
	.byte	W12
	.byte		N06   , Ds3 
	.byte	W10
	.byte		N03   , Gn4 , v100
	.byte	W02
	.byte		N06   , Cn3 , v124
	.byte	W24
	.byte		        Ds3 , v120
	.byte	W12
	.byte		N08   , Fn3 
	.byte	W12
	.byte		N06   , Gn3 
	.byte	W11
@ 026   ----------------------------------------
	.byte		N04   , Gn4 , v127
	.byte		N05   , Cn5 
	.byte	W11
	.byte		N04   , Gn4 
	.byte	W01
	.byte		N05   , Cn5 
	.byte	W12
	.byte		N04   , Gn4 
	.byte		N06   , Cn5 
	.byte	W12
	.byte		N04   , Gn4 
	.byte		N05   , Bn4 , v100
	.byte	W24
	.byte		N04   , Fs4 , v127
	.byte		N05   , As4 
	.byte	W24
	.byte		N13   , Fn4 
	.byte		N15   , An4 
	.byte	W12
@ 027   ----------------------------------------
	.byte	W12
	.byte		N07   , As4 
	.byte	W12
	.byte		N05   , Fn4 
	.byte		N08   , An4 
	.byte	W12
	.byte		N06   , As4 
	.byte	W24
	.byte		N12   , Fn4 
	.byte		N12   , An4 
	.byte	W24
	.byte		N06   , Fn4 
	.byte	W12
@ 028   ----------------------------------------
	.byte		        Dn4 
	.byte		N06   , Gn4 
	.byte		N06   , Bn4 
	.byte	W11
	.byte		        As4 
	.byte	W01
	.byte		        Cs4 
	.byte	W12
	.byte		        Dn4 
	.byte		N06   , Bn4 
	.byte	W11
	.byte		        As4 
	.byte	W01
	.byte		        Cs4 
	.byte	W24
	.byte		        Cn5 
	.byte	W11
	.byte		N05   , As4 
	.byte	W13
	.byte		N66   , Dn4 , v052
	.byte		N66   , Bn4 , v127
	.byte	W12
@ 029   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte	GOTO
	 .word	mus_littleroot_4_B1
mus_littleroot_4_B2:
	.byte	FINE

@**************** Track 5 (Midi-Chn.9) ****************@

mus_littleroot_5:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_5_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 3
	.byte		VOL   , 93*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BENDR , 0
	.byte		MODT  , 127
	.byte		TUNE  , c_v-16
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
mus_littleroot_5_004:
	.byte	W12
	.byte		N05   , Cn4 , v120
	.byte	W11
	.byte		        Ds4 
	.byte	W12
	.byte		N19   , Gn4 
	.byte	W24
	.byte	W01
	.byte		N05   , Cn4 
	.byte	W12
	.byte		N03   , Ds4 
	.byte	W12
	.byte		N19   , Gs4 
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
	.byte	W11
	.byte		N04   , Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N21   , An4 
	.byte	W24
	.byte		N04   , Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W13
	.byte		        As4 
	.byte	W11
	.byte		N04   
	.byte	W01
@ 006   ----------------------------------------
	.byte	W32
	.byte	W03
	.byte		N20   , An4 
	.byte	W24
	.byte	W01
	.byte		N09   , Fn4 
	.byte	W11
	.byte		TIE   , Cn4 
	.byte	W24
	.byte	W01
@ 007   ----------------------------------------
	.byte	W80
	.byte	W02
	.byte		EOT   
	.byte	W14
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_5_004
@ 009   ----------------------------------------
	.byte	W11
	.byte		N04   , Cn4 , v120
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N21   , An4 
	.byte	W24
	.byte		N04   , Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W13
	.byte		        As4 
	.byte	W11
	.byte		        As4 , v116
	.byte	W01
@ 010   ----------------------------------------
	.byte	W36
	.byte		N22   , An4 
	.byte	W24
	.byte		N12   , As4 
	.byte	W12
	.byte		N21   , Cn5 
	.byte	W21
	.byte		N05   , En5 , v100
	.byte	W03
@ 011   ----------------------------------------
	.byte		N30   , Fn5 , v116
	.byte	W32
	.byte	W03
	.byte		N28   , Cn5 
	.byte	W36
	.byte		N10   
	.byte	W12
	.byte		        Dn5 
	.byte	W13
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
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte	GOTO
	 .word	mus_littleroot_5_B1
mus_littleroot_5_B2:
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_littleroot_6:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_6_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 4
	.byte		VOL   , 116*mus_littleroot_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BENDR , 0
	.byte		MODT  , 127
	.byte		TUNE  , c_v-16
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
mus_littleroot_6_004:
	.byte		N84   , Gn2 , v076
	.byte	W84
	.byte		N48   , Gs2 
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
mus_littleroot_6_005:
	.byte	W36
	.byte		N56   , An2 , v076, gtp1
	.byte	W60
	.byte	PEND
@ 006   ----------------------------------------
mus_littleroot_6_006:
	.byte		N36   , As2 , v076, gtp1
	.byte	W36
	.byte		TIE   , An2 
	.byte	W60
	.byte	PEND
@ 007   ----------------------------------------
	.byte	W90
	.byte	W01
	.byte		EOT   
	.byte	W05
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_6_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_6_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_6_006
@ 011   ----------------------------------------
	.byte	W72
	.byte		N12   , Cn4 , v104
	.byte	W12
	.byte		        Dn4 
	.byte	W07
	.byte		EOT   , An2 
	.byte	W05
@ 012   ----------------------------------------
	.byte		N12   , Ds4 , v096
	.byte	W12
	.byte		N06   , Fn4 
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		N28   , Dn4 
	.byte	W36
	.byte		N16   , Cn4 , v100
	.byte	W18
	.byte		N06   , Ds4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		        Gn4 
	.byte	W06
@ 013   ----------------------------------------
	.byte		N32   , As4 , v096, gtp3
	.byte	W36
	.byte		N28   , Cn5 , v096, gtp1
	.byte	W36
	.byte		N12   , As4 
	.byte	W12
	.byte		N06   , Gn4 , v100
	.byte	W06
	.byte		        Fn4 
	.byte	W06
@ 014   ----------------------------------------
	.byte		N36   , Ds4 , v096
	.byte	W36
	.byte		N32   , Cn4 , v104, gtp3
	.byte	W36
	.byte		N11   , Ds4 , v096
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 015   ----------------------------------------
	.byte		N36   , As3 
	.byte	W36
	.byte		N23   , Cs4 , v100
	.byte	W24
	.byte		        Fn4 , v096
	.byte	W24
	.byte		N10   , Gs4 
	.byte	W12
@ 016   ----------------------------------------
	.byte		N16   , Ds5 , v104
	.byte	W24
	.byte		N76   , Gs4 , v088
	.byte		N76   , Cn5 , v096
	.byte	W72
@ 017   ----------------------------------------
	.byte	W16
	.byte		N14   , Gs4 , v088
	.byte		N16   , Cn5 , v096
	.byte	W16
	.byte		        Gs4 , v088
	.byte		N16   , Cs5 , v096
	.byte	W16
	.byte		        Cn5 
	.byte		N16   , Ds5 
	.byte	W16
	.byte		N15   , Cs5 
	.byte	W16
	.byte		        Cn5 
	.byte	W16
@ 018   ----------------------------------------
	.byte		N06   , As4 , v116
	.byte	W06
	.byte		N05   , Cn5 , v108
	.byte	W06
	.byte		N06   , As4 , v104
	.byte	W06
	.byte		N80   , Ds4 , v088, gtp2
	.byte		N80   , Gs4 , v096, gtp2
	.byte	W78
@ 019   ----------------------------------------
	.byte	W24
	.byte		N23   , Cs4 , v088
	.byte		N23   , Fn4 , v096
	.byte	W24
	.byte		N06   , Ds4 , v112
	.byte	W06
	.byte		        Fn4 , v100
	.byte	W06
	.byte		N32   , Gn4 , v096, gtp3
	.byte	W36
@ 020   ----------------------------------------
	.byte		N72   , Fn4 , v096, gtp3
	.byte	W84
	.byte		N05   , Gn4 , v112
	.byte	W06
	.byte		N06   , Fn4 , v100
	.byte	W06
@ 021   ----------------------------------------
	.byte		N84   , Cn4 , v088, gtp3
	.byte		N84   , En4 , v096, gtp3
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
	.byte	W92
	.byte	W03
	.byte	GOTO
	 .word	mus_littleroot_6_B1
mus_littleroot_6_B2:
	.byte	FINE

@**************** Track 7 (Midi-Chn.10) ****************@

mus_littleroot_7:
	.byte	KEYSH , mus_littleroot_key+0
mus_littleroot_7_B1:
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		VOL   , 84*mus_littleroot_mvl/mxv
	.byte	W01
	.byte	W22
	.byte	W72
	.byte	W01
@ 001   ----------------------------------------
	.byte	W72
	.byte		N11   , Cn1 , v112
	.byte	W24
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W36
	.byte		N09   , Dn1 , v108
	.byte	W24
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
	.byte		N09   
	.byte	W12
@ 004   ----------------------------------------
mus_littleroot_7_004:
	.byte	W24
	.byte		N28   , Dn1 , v112
	.byte	W48
	.byte		N28   
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 006   ----------------------------------------
mus_littleroot_7_006:
	.byte	W24
	.byte		N28   , Dn1 , v116
	.byte	W48
	.byte		        Dn1 , v112
	.byte	W24
	.byte	PEND
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_006
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_006
@ 011   ----------------------------------------
	.byte	W12
	.byte		N24   , Dn1 , v120
	.byte	W24
	.byte		N04   , Dn1 , v116
	.byte	W24
	.byte		        Dn1 , v112
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N04   , Dn1 , v120
	.byte	W12
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_006
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_006
@ 019   ----------------------------------------
	.byte	W06
	.byte		N18   , Dn1 , v120
	.byte	W18
	.byte		N10   , Dn1 , v116
	.byte	W24
	.byte		N04   
	.byte	W24
	.byte		        Dn1 , v112
	.byte	W18
	.byte		N10   
	.byte	W06
@ 020   ----------------------------------------
	.byte	W24
	.byte		N28   
	.byte	W30
	.byte		N18   
	.byte	W18
	.byte		N10   
	.byte	W24
@ 021   ----------------------------------------
	.byte	W24
	.byte		N24   
	.byte	W24
	.byte		N04   
	.byte	W24
	.byte		N04   
	.byte	W12
	.byte		N16   , Dn1 , v120
	.byte	W12
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_littleroot_7_004
@ 029   ----------------------------------------
	.byte	W24
	.byte		N28   , Dn1 , v112
	.byte	W44
	.byte	W03
	.byte	W01
	.byte		N23   
	.byte	W23
	.byte	GOTO
	 .word	mus_littleroot_7_B1
mus_littleroot_7_B2:
	.byte	FINE

@******************************************************@
	.align	2

mus_littleroot:
	.byte	7	@ NumTrks
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

	.end
