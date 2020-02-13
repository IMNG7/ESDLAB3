                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _WtdRef
                                     13 	.globl _strtola
                                     14 	.globl _uartinit
                                     15 	.globl _printf_tiny
                                     16 	.globl _P5_7
                                     17 	.globl _P5_6
                                     18 	.globl _P5_5
                                     19 	.globl _P5_4
                                     20 	.globl _P5_3
                                     21 	.globl _P5_2
                                     22 	.globl _P5_1
                                     23 	.globl _P5_0
                                     24 	.globl _P4_7
                                     25 	.globl _P4_6
                                     26 	.globl _P4_5
                                     27 	.globl _P4_4
                                     28 	.globl _P4_3
                                     29 	.globl _P4_2
                                     30 	.globl _P4_1
                                     31 	.globl _P4_0
                                     32 	.globl _PX0L
                                     33 	.globl _PT0L
                                     34 	.globl _PX1L
                                     35 	.globl _PT1L
                                     36 	.globl _PSL
                                     37 	.globl _PT2L
                                     38 	.globl _PPCL
                                     39 	.globl _EC
                                     40 	.globl _CCF0
                                     41 	.globl _CCF1
                                     42 	.globl _CCF2
                                     43 	.globl _CCF3
                                     44 	.globl _CCF4
                                     45 	.globl _CR
                                     46 	.globl _CF
                                     47 	.globl _TF2
                                     48 	.globl _EXF2
                                     49 	.globl _RCLK
                                     50 	.globl _TCLK
                                     51 	.globl _EXEN2
                                     52 	.globl _TR2
                                     53 	.globl _C_T2
                                     54 	.globl _CP_RL2
                                     55 	.globl _T2CON_7
                                     56 	.globl _T2CON_6
                                     57 	.globl _T2CON_5
                                     58 	.globl _T2CON_4
                                     59 	.globl _T2CON_3
                                     60 	.globl _T2CON_2
                                     61 	.globl _T2CON_1
                                     62 	.globl _T2CON_0
                                     63 	.globl _PT2
                                     64 	.globl _ET2
                                     65 	.globl _CY
                                     66 	.globl _AC
                                     67 	.globl _F0
                                     68 	.globl _RS1
                                     69 	.globl _RS0
                                     70 	.globl _OV
                                     71 	.globl _F1
                                     72 	.globl _P
                                     73 	.globl _PS
                                     74 	.globl _PT1
                                     75 	.globl _PX1
                                     76 	.globl _PT0
                                     77 	.globl _PX0
                                     78 	.globl _RD
                                     79 	.globl _WR
                                     80 	.globl _T1
                                     81 	.globl _T0
                                     82 	.globl _INT1
                                     83 	.globl _INT0
                                     84 	.globl _TXD
                                     85 	.globl _RXD
                                     86 	.globl _P3_7
                                     87 	.globl _P3_6
                                     88 	.globl _P3_5
                                     89 	.globl _P3_4
                                     90 	.globl _P3_3
                                     91 	.globl _P3_2
                                     92 	.globl _P3_1
                                     93 	.globl _P3_0
                                     94 	.globl _EA
                                     95 	.globl _ES
                                     96 	.globl _ET1
                                     97 	.globl _EX1
                                     98 	.globl _ET0
                                     99 	.globl _EX0
                                    100 	.globl _P2_7
                                    101 	.globl _P2_6
                                    102 	.globl _P2_5
                                    103 	.globl _P2_4
                                    104 	.globl _P2_3
                                    105 	.globl _P2_2
                                    106 	.globl _P2_1
                                    107 	.globl _P2_0
                                    108 	.globl _SM0
                                    109 	.globl _SM1
                                    110 	.globl _SM2
                                    111 	.globl _REN
                                    112 	.globl _TB8
                                    113 	.globl _RB8
                                    114 	.globl _TI
                                    115 	.globl _RI
                                    116 	.globl _P1_7
                                    117 	.globl _P1_6
                                    118 	.globl _P1_5
                                    119 	.globl _P1_4
                                    120 	.globl _P1_3
                                    121 	.globl _P1_2
                                    122 	.globl _P1_1
                                    123 	.globl _P1_0
                                    124 	.globl _TF1
                                    125 	.globl _TR1
                                    126 	.globl _TF0
                                    127 	.globl _TR0
                                    128 	.globl _IE1
                                    129 	.globl _IT1
                                    130 	.globl _IE0
                                    131 	.globl _IT0
                                    132 	.globl _P0_7
                                    133 	.globl _P0_6
                                    134 	.globl _P0_5
                                    135 	.globl _P0_4
                                    136 	.globl _P0_3
                                    137 	.globl _P0_2
                                    138 	.globl _P0_1
                                    139 	.globl _P0_0
                                    140 	.globl _EECON
                                    141 	.globl _KBF
                                    142 	.globl _KBE
                                    143 	.globl _KBLS
                                    144 	.globl _BRL
                                    145 	.globl _BDRCON
                                    146 	.globl _T2MOD
                                    147 	.globl _SPDAT
                                    148 	.globl _SPSTA
                                    149 	.globl _SPCON
                                    150 	.globl _SADEN
                                    151 	.globl _SADDR
                                    152 	.globl _WDTPRG
                                    153 	.globl _WDTRST
                                    154 	.globl _P5
                                    155 	.globl _P4
                                    156 	.globl _IPH1
                                    157 	.globl _IPL1
                                    158 	.globl _IPH0
                                    159 	.globl _IPL0
                                    160 	.globl _IEN1
                                    161 	.globl _IEN0
                                    162 	.globl _CMOD
                                    163 	.globl _CL
                                    164 	.globl _CH
                                    165 	.globl _CCON
                                    166 	.globl _CCAPM4
                                    167 	.globl _CCAPM3
                                    168 	.globl _CCAPM2
                                    169 	.globl _CCAPM1
                                    170 	.globl _CCAPM0
                                    171 	.globl _CCAP4L
                                    172 	.globl _CCAP3L
                                    173 	.globl _CCAP2L
                                    174 	.globl _CCAP1L
                                    175 	.globl _CCAP0L
                                    176 	.globl _CCAP4H
                                    177 	.globl _CCAP3H
                                    178 	.globl _CCAP2H
                                    179 	.globl _CCAP1H
                                    180 	.globl _CCAP0H
                                    181 	.globl _CKCON1
                                    182 	.globl _CKCON0
                                    183 	.globl _CKRL
                                    184 	.globl _AUXR1
                                    185 	.globl _AUXR
                                    186 	.globl _TH2
                                    187 	.globl _TL2
                                    188 	.globl _RCAP2H
                                    189 	.globl _RCAP2L
                                    190 	.globl _T2CON
                                    191 	.globl _B
                                    192 	.globl _ACC
                                    193 	.globl _PSW
                                    194 	.globl _IP
                                    195 	.globl _P3
                                    196 	.globl _IE
                                    197 	.globl _P2
                                    198 	.globl _SBUF
                                    199 	.globl _SCON
                                    200 	.globl _P1
                                    201 	.globl _TH1
                                    202 	.globl _TH0
                                    203 	.globl _TL1
                                    204 	.globl _TL0
                                    205 	.globl _TMOD
                                    206 	.globl _TCON
                                    207 	.globl _PCON
                                    208 	.globl _DPH
                                    209 	.globl _DPL
                                    210 	.globl _SP
                                    211 	.globl _P0
                                    212 	.globl _putchar
                                    213 	.globl _getchar
                                    214 ;--------------------------------------------------------
                                    215 ; special function registers
                                    216 ;--------------------------------------------------------
                                    217 	.area RSEG    (ABS,DATA)
      000000                        218 	.org 0x0000
                           000080   219 _P0	=	0x0080
                           000081   220 _SP	=	0x0081
                           000082   221 _DPL	=	0x0082
                           000083   222 _DPH	=	0x0083
                           000087   223 _PCON	=	0x0087
                           000088   224 _TCON	=	0x0088
                           000089   225 _TMOD	=	0x0089
                           00008A   226 _TL0	=	0x008a
                           00008B   227 _TL1	=	0x008b
                           00008C   228 _TH0	=	0x008c
                           00008D   229 _TH1	=	0x008d
                           000090   230 _P1	=	0x0090
                           000098   231 _SCON	=	0x0098
                           000099   232 _SBUF	=	0x0099
                           0000A0   233 _P2	=	0x00a0
                           0000A8   234 _IE	=	0x00a8
                           0000B0   235 _P3	=	0x00b0
                           0000B8   236 _IP	=	0x00b8
                           0000D0   237 _PSW	=	0x00d0
                           0000E0   238 _ACC	=	0x00e0
                           0000F0   239 _B	=	0x00f0
                           0000C8   240 _T2CON	=	0x00c8
                           0000CA   241 _RCAP2L	=	0x00ca
                           0000CB   242 _RCAP2H	=	0x00cb
                           0000CC   243 _TL2	=	0x00cc
                           0000CD   244 _TH2	=	0x00cd
                           00008E   245 _AUXR	=	0x008e
                           0000A2   246 _AUXR1	=	0x00a2
                           000097   247 _CKRL	=	0x0097
                           00008F   248 _CKCON0	=	0x008f
                           0000AF   249 _CKCON1	=	0x00af
                           0000FA   250 _CCAP0H	=	0x00fa
                           0000FB   251 _CCAP1H	=	0x00fb
                           0000FC   252 _CCAP2H	=	0x00fc
                           0000FD   253 _CCAP3H	=	0x00fd
                           0000FE   254 _CCAP4H	=	0x00fe
                           0000EA   255 _CCAP0L	=	0x00ea
                           0000EB   256 _CCAP1L	=	0x00eb
                           0000EC   257 _CCAP2L	=	0x00ec
                           0000ED   258 _CCAP3L	=	0x00ed
                           0000EE   259 _CCAP4L	=	0x00ee
                           0000DA   260 _CCAPM0	=	0x00da
                           0000DB   261 _CCAPM1	=	0x00db
                           0000DC   262 _CCAPM2	=	0x00dc
                           0000DD   263 _CCAPM3	=	0x00dd
                           0000DE   264 _CCAPM4	=	0x00de
                           0000D8   265 _CCON	=	0x00d8
                           0000F9   266 _CH	=	0x00f9
                           0000E9   267 _CL	=	0x00e9
                           0000D9   268 _CMOD	=	0x00d9
                           0000A8   269 _IEN0	=	0x00a8
                           0000B1   270 _IEN1	=	0x00b1
                           0000B8   271 _IPL0	=	0x00b8
                           0000B7   272 _IPH0	=	0x00b7
                           0000B2   273 _IPL1	=	0x00b2
                           0000B3   274 _IPH1	=	0x00b3
                           0000C0   275 _P4	=	0x00c0
                           0000E8   276 _P5	=	0x00e8
                           0000A6   277 _WDTRST	=	0x00a6
                           0000A7   278 _WDTPRG	=	0x00a7
                           0000A9   279 _SADDR	=	0x00a9
                           0000B9   280 _SADEN	=	0x00b9
                           0000C3   281 _SPCON	=	0x00c3
                           0000C4   282 _SPSTA	=	0x00c4
                           0000C5   283 _SPDAT	=	0x00c5
                           0000C9   284 _T2MOD	=	0x00c9
                           00009B   285 _BDRCON	=	0x009b
                           00009A   286 _BRL	=	0x009a
                           00009C   287 _KBLS	=	0x009c
                           00009D   288 _KBE	=	0x009d
                           00009E   289 _KBF	=	0x009e
                           0000D2   290 _EECON	=	0x00d2
                                    291 ;--------------------------------------------------------
                                    292 ; special function bits
                                    293 ;--------------------------------------------------------
                                    294 	.area RSEG    (ABS,DATA)
      000000                        295 	.org 0x0000
                           000080   296 _P0_0	=	0x0080
                           000081   297 _P0_1	=	0x0081
                           000082   298 _P0_2	=	0x0082
                           000083   299 _P0_3	=	0x0083
                           000084   300 _P0_4	=	0x0084
                           000085   301 _P0_5	=	0x0085
                           000086   302 _P0_6	=	0x0086
                           000087   303 _P0_7	=	0x0087
                           000088   304 _IT0	=	0x0088
                           000089   305 _IE0	=	0x0089
                           00008A   306 _IT1	=	0x008a
                           00008B   307 _IE1	=	0x008b
                           00008C   308 _TR0	=	0x008c
                           00008D   309 _TF0	=	0x008d
                           00008E   310 _TR1	=	0x008e
                           00008F   311 _TF1	=	0x008f
                           000090   312 _P1_0	=	0x0090
                           000091   313 _P1_1	=	0x0091
                           000092   314 _P1_2	=	0x0092
                           000093   315 _P1_3	=	0x0093
                           000094   316 _P1_4	=	0x0094
                           000095   317 _P1_5	=	0x0095
                           000096   318 _P1_6	=	0x0096
                           000097   319 _P1_7	=	0x0097
                           000098   320 _RI	=	0x0098
                           000099   321 _TI	=	0x0099
                           00009A   322 _RB8	=	0x009a
                           00009B   323 _TB8	=	0x009b
                           00009C   324 _REN	=	0x009c
                           00009D   325 _SM2	=	0x009d
                           00009E   326 _SM1	=	0x009e
                           00009F   327 _SM0	=	0x009f
                           0000A0   328 _P2_0	=	0x00a0
                           0000A1   329 _P2_1	=	0x00a1
                           0000A2   330 _P2_2	=	0x00a2
                           0000A3   331 _P2_3	=	0x00a3
                           0000A4   332 _P2_4	=	0x00a4
                           0000A5   333 _P2_5	=	0x00a5
                           0000A6   334 _P2_6	=	0x00a6
                           0000A7   335 _P2_7	=	0x00a7
                           0000A8   336 _EX0	=	0x00a8
                           0000A9   337 _ET0	=	0x00a9
                           0000AA   338 _EX1	=	0x00aa
                           0000AB   339 _ET1	=	0x00ab
                           0000AC   340 _ES	=	0x00ac
                           0000AF   341 _EA	=	0x00af
                           0000B0   342 _P3_0	=	0x00b0
                           0000B1   343 _P3_1	=	0x00b1
                           0000B2   344 _P3_2	=	0x00b2
                           0000B3   345 _P3_3	=	0x00b3
                           0000B4   346 _P3_4	=	0x00b4
                           0000B5   347 _P3_5	=	0x00b5
                           0000B6   348 _P3_6	=	0x00b6
                           0000B7   349 _P3_7	=	0x00b7
                           0000B0   350 _RXD	=	0x00b0
                           0000B1   351 _TXD	=	0x00b1
                           0000B2   352 _INT0	=	0x00b2
                           0000B3   353 _INT1	=	0x00b3
                           0000B4   354 _T0	=	0x00b4
                           0000B5   355 _T1	=	0x00b5
                           0000B6   356 _WR	=	0x00b6
                           0000B7   357 _RD	=	0x00b7
                           0000B8   358 _PX0	=	0x00b8
                           0000B9   359 _PT0	=	0x00b9
                           0000BA   360 _PX1	=	0x00ba
                           0000BB   361 _PT1	=	0x00bb
                           0000BC   362 _PS	=	0x00bc
                           0000D0   363 _P	=	0x00d0
                           0000D1   364 _F1	=	0x00d1
                           0000D2   365 _OV	=	0x00d2
                           0000D3   366 _RS0	=	0x00d3
                           0000D4   367 _RS1	=	0x00d4
                           0000D5   368 _F0	=	0x00d5
                           0000D6   369 _AC	=	0x00d6
                           0000D7   370 _CY	=	0x00d7
                           0000AD   371 _ET2	=	0x00ad
                           0000BD   372 _PT2	=	0x00bd
                           0000C8   373 _T2CON_0	=	0x00c8
                           0000C9   374 _T2CON_1	=	0x00c9
                           0000CA   375 _T2CON_2	=	0x00ca
                           0000CB   376 _T2CON_3	=	0x00cb
                           0000CC   377 _T2CON_4	=	0x00cc
                           0000CD   378 _T2CON_5	=	0x00cd
                           0000CE   379 _T2CON_6	=	0x00ce
                           0000CF   380 _T2CON_7	=	0x00cf
                           0000C8   381 _CP_RL2	=	0x00c8
                           0000C9   382 _C_T2	=	0x00c9
                           0000CA   383 _TR2	=	0x00ca
                           0000CB   384 _EXEN2	=	0x00cb
                           0000CC   385 _TCLK	=	0x00cc
                           0000CD   386 _RCLK	=	0x00cd
                           0000CE   387 _EXF2	=	0x00ce
                           0000CF   388 _TF2	=	0x00cf
                           0000DF   389 _CF	=	0x00df
                           0000DE   390 _CR	=	0x00de
                           0000DC   391 _CCF4	=	0x00dc
                           0000DB   392 _CCF3	=	0x00db
                           0000DA   393 _CCF2	=	0x00da
                           0000D9   394 _CCF1	=	0x00d9
                           0000D8   395 _CCF0	=	0x00d8
                           0000AE   396 _EC	=	0x00ae
                           0000BE   397 _PPCL	=	0x00be
                           0000BD   398 _PT2L	=	0x00bd
                           0000BC   399 _PSL	=	0x00bc
                           0000BB   400 _PT1L	=	0x00bb
                           0000BA   401 _PX1L	=	0x00ba
                           0000B9   402 _PT0L	=	0x00b9
                           0000B8   403 _PX0L	=	0x00b8
                           0000C0   404 _P4_0	=	0x00c0
                           0000C1   405 _P4_1	=	0x00c1
                           0000C2   406 _P4_2	=	0x00c2
                           0000C3   407 _P4_3	=	0x00c3
                           0000C4   408 _P4_4	=	0x00c4
                           0000C5   409 _P4_5	=	0x00c5
                           0000C6   410 _P4_6	=	0x00c6
                           0000C7   411 _P4_7	=	0x00c7
                           0000E8   412 _P5_0	=	0x00e8
                           0000E9   413 _P5_1	=	0x00e9
                           0000EA   414 _P5_2	=	0x00ea
                           0000EB   415 _P5_3	=	0x00eb
                           0000EC   416 _P5_4	=	0x00ec
                           0000ED   417 _P5_5	=	0x00ed
                           0000EE   418 _P5_6	=	0x00ee
                           0000EF   419 _P5_7	=	0x00ef
                                    420 ;--------------------------------------------------------
                                    421 ; overlayable register banks
                                    422 ;--------------------------------------------------------
                                    423 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        424 	.ds 8
                                    425 ;--------------------------------------------------------
                                    426 ; internal ram data
                                    427 ;--------------------------------------------------------
                                    428 	.area DSEG    (DATA)
      000008                        429 _strtola_sloc0_1_0:
      000008                        430 	.ds 2
                                    431 ;--------------------------------------------------------
                                    432 ; overlayable items in internal ram 
                                    433 ;--------------------------------------------------------
                                    434 ;--------------------------------------------------------
                                    435 ; Stack segment in internal ram 
                                    436 ;--------------------------------------------------------
                                    437 	.area	SSEG
      00000B                        438 __start__stack:
      00000B                        439 	.ds	1
                                    440 
                                    441 ;--------------------------------------------------------
                                    442 ; indirectly addressable internal ram data
                                    443 ;--------------------------------------------------------
                                    444 	.area ISEG    (DATA)
                                    445 ;--------------------------------------------------------
                                    446 ; absolute internal ram data
                                    447 ;--------------------------------------------------------
                                    448 	.area IABS    (ABS,DATA)
                                    449 	.area IABS    (ABS,DATA)
                                    450 ;--------------------------------------------------------
                                    451 ; bit data
                                    452 ;--------------------------------------------------------
                                    453 	.area BSEG    (BIT)
                                    454 ;--------------------------------------------------------
                                    455 ; paged external ram data
                                    456 ;--------------------------------------------------------
                                    457 	.area PSEG    (PAG,XDATA)
                                    458 ;--------------------------------------------------------
                                    459 ; external ram data
                                    460 ;--------------------------------------------------------
                                    461 	.area XSEG    (XDATA)
      000400                        462 _putchar_c_65536_42:
      000400                        463 	.ds 2
      000402                        464 _strtola_q_65536_45:
      000402                        465 	.ds 3
                                    466 ;--------------------------------------------------------
                                    467 ; absolute external ram data
                                    468 ;--------------------------------------------------------
                                    469 	.area XABS    (ABS,XDATA)
                                    470 ;--------------------------------------------------------
                                    471 ; external initialized ram data
                                    472 ;--------------------------------------------------------
                                    473 	.area XISEG   (XDATA)
                                    474 	.area HOME    (CODE)
                                    475 	.area GSINIT0 (CODE)
                                    476 	.area GSINIT1 (CODE)
                                    477 	.area GSINIT2 (CODE)
                                    478 	.area GSINIT3 (CODE)
                                    479 	.area GSINIT4 (CODE)
                                    480 	.area GSINIT5 (CODE)
                                    481 	.area GSINIT  (CODE)
                                    482 	.area GSFINAL (CODE)
                                    483 	.area CSEG    (CODE)
                                    484 ;--------------------------------------------------------
                                    485 ; interrupt vector 
                                    486 ;--------------------------------------------------------
                                    487 	.area HOME    (CODE)
      002200                        488 __interrupt_vect:
      002200 02 22 06         [24]  489 	ljmp	__sdcc_gsinit_startup
                                    490 ;--------------------------------------------------------
                                    491 ; global & static initialisations
                                    492 ;--------------------------------------------------------
                                    493 	.area HOME    (CODE)
                                    494 	.area GSINIT  (CODE)
                                    495 	.area GSFINAL (CODE)
                                    496 	.area GSINIT  (CODE)
                                    497 	.globl __sdcc_gsinit_startup
                                    498 	.globl __sdcc_program_startup
                                    499 	.globl __start__stack
                                    500 	.globl __mcs51_genXINIT
                                    501 	.globl __mcs51_genXRAMCLEAR
                                    502 	.globl __mcs51_genRAMCLEAR
                                    503 	.area GSFINAL (CODE)
      00225F 02 22 03         [24]  504 	ljmp	__sdcc_program_startup
                                    505 ;--------------------------------------------------------
                                    506 ; Home
                                    507 ;--------------------------------------------------------
                                    508 	.area HOME    (CODE)
                                    509 	.area HOME    (CODE)
      002203                        510 __sdcc_program_startup:
      002203 02 23 38         [24]  511 	ljmp	_main
                                    512 ;	return from main will return to caller
                                    513 ;--------------------------------------------------------
                                    514 ; code
                                    515 ;--------------------------------------------------------
                                    516 	.area CSEG    (CODE)
                                    517 ;------------------------------------------------------------
                                    518 ;Allocation info for local variables in function 'uartinit'
                                    519 ;------------------------------------------------------------
                                    520 ;	main.c:9: void uartinit()
                                    521 ;	-----------------------------------------
                                    522 ;	 function uartinit
                                    523 ;	-----------------------------------------
      002262                        524 _uartinit:
                           000007   525 	ar7 = 0x07
                           000006   526 	ar6 = 0x06
                           000005   527 	ar5 = 0x05
                           000004   528 	ar4 = 0x04
                           000003   529 	ar3 = 0x03
                           000002   530 	ar2 = 0x02
                           000001   531 	ar1 = 0x01
                           000000   532 	ar0 = 0x00
                                    533 ;	main.c:11: TMOD = 0x20;
      002262 75 89 20         [24]  534 	mov	_TMOD,#0x20
                                    535 ;	main.c:12: SCON = 0x50;
      002265 75 98 50         [24]  536 	mov	_SCON,#0x50
                                    537 ;	main.c:13: TH1 = 0xFD;
      002268 75 8D FD         [24]  538 	mov	_TH1,#0xfd
                                    539 ;	main.c:14: TR1 =1;
                                    540 ;	assignBit
      00226B D2 8E            [12]  541 	setb	_TR1
                                    542 ;	main.c:15: }
      00226D 22               [24]  543 	ret
                                    544 ;------------------------------------------------------------
                                    545 ;Allocation info for local variables in function 'putchar'
                                    546 ;------------------------------------------------------------
                                    547 ;c                         Allocated with name '_putchar_c_65536_42'
                                    548 ;------------------------------------------------------------
                                    549 ;	main.c:16: int putchar(int c)
                                    550 ;	-----------------------------------------
                                    551 ;	 function putchar
                                    552 ;	-----------------------------------------
      00226E                        553 _putchar:
      00226E AF 83            [24]  554 	mov	r7,dph
      002270 E5 82            [12]  555 	mov	a,dpl
      002272 90 04 00         [24]  556 	mov	dptr,#_putchar_c_65536_42
      002275 F0               [24]  557 	movx	@dptr,a
      002276 EF               [12]  558 	mov	a,r7
      002277 A3               [24]  559 	inc	dptr
      002278 F0               [24]  560 	movx	@dptr,a
                                    561 ;	main.c:18: while(!TI);                         // checking the TI interrupt bit, when it sets, the data is sent
      002279                        562 00101$:
                                    563 ;	main.c:19: TI=0;
                                    564 ;	assignBit
      002279 10 99 02         [24]  565 	jbc	_TI,00114$
      00227C 80 FB            [24]  566 	sjmp	00101$
      00227E                        567 00114$:
                                    568 ;	main.c:20: SBUF = c;
      00227E 90 04 00         [24]  569 	mov	dptr,#_putchar_c_65536_42
      002281 E0               [24]  570 	movx	a,@dptr
      002282 FE               [12]  571 	mov	r6,a
      002283 A3               [24]  572 	inc	dptr
      002284 E0               [24]  573 	movx	a,@dptr
      002285 8E 99            [24]  574 	mov	_SBUF,r6
                                    575 ;	main.c:21: return 1;
      002287 90 00 01         [24]  576 	mov	dptr,#0x0001
                                    577 ;	main.c:22: }
      00228A 22               [24]  578 	ret
                                    579 ;------------------------------------------------------------
                                    580 ;Allocation info for local variables in function 'getchar'
                                    581 ;------------------------------------------------------------
                                    582 ;	main.c:23: int getchar()
                                    583 ;	-----------------------------------------
                                    584 ;	 function getchar
                                    585 ;	-----------------------------------------
      00228B                        586 _getchar:
                                    587 ;	main.c:25: while(!RI);                             // checking the RI interrupt bit, when it sets, the data is received
      00228B                        588 00101$:
                                    589 ;	main.c:26: RI=0;
                                    590 ;	assignBit
      00228B 10 98 02         [24]  591 	jbc	_RI,00114$
      00228E 80 FB            [24]  592 	sjmp	00101$
      002290                        593 00114$:
                                    594 ;	main.c:27: return SBUF;
      002290 AE 99            [24]  595 	mov	r6,_SBUF
      002292 7F 00            [12]  596 	mov	r7,#0x00
      002294 8E 82            [24]  597 	mov	dpl,r6
      002296 8F 83            [24]  598 	mov	dph,r7
                                    599 ;	main.c:28: }
      002298 22               [24]  600 	ret
                                    601 ;------------------------------------------------------------
                                    602 ;Allocation info for local variables in function 'strtola'
                                    603 ;------------------------------------------------------------
                                    604 ;res                       Allocated to registers r6 r7 
                                    605 ;sloc0                     Allocated with name '_strtola_sloc0_1_0'
                                    606 ;q                         Allocated with name '_strtola_q_65536_45'
                                    607 ;i                         Allocated with name '_strtola_i_65536_46'
                                    608 ;a                         Allocated with name '_strtola_a_65536_46'
                                    609 ;------------------------------------------------------------
                                    610 ;	main.c:29: uint16_t strtola(int *q)
                                    611 ;	-----------------------------------------
                                    612 ;	 function strtola
                                    613 ;	-----------------------------------------
      002299                        614 _strtola:
      002299 AF F0            [24]  615 	mov	r7,b
      00229B AE 83            [24]  616 	mov	r6,dph
      00229D E5 82            [12]  617 	mov	a,dpl
      00229F 90 04 02         [24]  618 	mov	dptr,#_strtola_q_65536_45
      0022A2 F0               [24]  619 	movx	@dptr,a
      0022A3 EE               [12]  620 	mov	a,r6
      0022A4 A3               [24]  621 	inc	dptr
      0022A5 F0               [24]  622 	movx	@dptr,a
      0022A6 EF               [12]  623 	mov	a,r7
      0022A7 A3               [24]  624 	inc	dptr
      0022A8 F0               [24]  625 	movx	@dptr,a
                                    626 ;	main.c:31: __data uint16_t res=0;
      0022A9 7E 00            [12]  627 	mov	r6,#0x00
      0022AB 7F 00            [12]  628 	mov	r7,#0x00
                                    629 ;	main.c:32: do
      0022AD 90 04 02         [24]  630 	mov	dptr,#_strtola_q_65536_45
      0022B0 E0               [24]  631 	movx	a,@dptr
      0022B1 FB               [12]  632 	mov	r3,a
      0022B2 A3               [24]  633 	inc	dptr
      0022B3 E0               [24]  634 	movx	a,@dptr
      0022B4 FC               [12]  635 	mov	r4,a
      0022B5 A3               [24]  636 	inc	dptr
      0022B6 E0               [24]  637 	movx	a,@dptr
      0022B7 FD               [12]  638 	mov	r5,a
      0022B8                        639 00101$:
                                    640 ;	main.c:33: {   a=*q-'0';
      0022B8 8B 82            [24]  641 	mov	dpl,r3
      0022BA 8C 83            [24]  642 	mov	dph,r4
      0022BC 8D F0            [24]  643 	mov	b,r5
      0022BE 12 26 22         [24]  644 	lcall	__gptrget
      0022C1 24 D0            [12]  645 	add	a,#0xd0
      0022C3 FA               [12]  646 	mov	r2,a
                                    647 ;	main.c:34: res=(res*10)+a;         // Logic from C99 basic itoa function
      0022C4 90 04 05         [24]  648 	mov	dptr,#__mulint_PARM_2
      0022C7 EE               [12]  649 	mov	a,r6
      0022C8 F0               [24]  650 	movx	@dptr,a
      0022C9 EF               [12]  651 	mov	a,r7
      0022CA A3               [24]  652 	inc	dptr
      0022CB F0               [24]  653 	movx	@dptr,a
      0022CC 90 00 0A         [24]  654 	mov	dptr,#0x000a
      0022CF C0 05            [24]  655 	push	ar5
      0022D1 C0 04            [24]  656 	push	ar4
      0022D3 C0 03            [24]  657 	push	ar3
      0022D5 C0 02            [24]  658 	push	ar2
      0022D7 12 26 02         [24]  659 	lcall	__mulint
      0022DA 85 82 08         [24]  660 	mov	_strtola_sloc0_1_0,dpl
      0022DD 85 83 09         [24]  661 	mov	(_strtola_sloc0_1_0 + 1),dph
      0022E0 D0 02            [24]  662 	pop	ar2
      0022E2 D0 03            [24]  663 	pop	ar3
      0022E4 D0 04            [24]  664 	pop	ar4
      0022E6 D0 05            [24]  665 	pop	ar5
      0022E8 8A 01            [24]  666 	mov	ar1,r2
      0022EA 7A 00            [12]  667 	mov	r2,#0x00
      0022EC E9               [12]  668 	mov	a,r1
      0022ED 25 08            [12]  669 	add	a,_strtola_sloc0_1_0
      0022EF FE               [12]  670 	mov	r6,a
      0022F0 EA               [12]  671 	mov	a,r2
      0022F1 35 09            [12]  672 	addc	a,(_strtola_sloc0_1_0 + 1)
      0022F3 FF               [12]  673 	mov	r7,a
                                    674 ;	main.c:35: *q++;
      0022F4 74 02            [12]  675 	mov	a,#0x02
      0022F6 2B               [12]  676 	add	a,r3
      0022F7 FB               [12]  677 	mov	r3,a
      0022F8 E4               [12]  678 	clr	a
      0022F9 3C               [12]  679 	addc	a,r4
      0022FA FC               [12]  680 	mov	r4,a
      0022FB 90 04 02         [24]  681 	mov	dptr,#_strtola_q_65536_45
      0022FE EB               [12]  682 	mov	a,r3
      0022FF F0               [24]  683 	movx	@dptr,a
      002300 EC               [12]  684 	mov	a,r4
      002301 A3               [24]  685 	inc	dptr
      002302 F0               [24]  686 	movx	@dptr,a
      002303 ED               [12]  687 	mov	a,r5
      002304 A3               [24]  688 	inc	dptr
      002305 F0               [24]  689 	movx	@dptr,a
                                    690 ;	main.c:36: }while(*q!=13);
      002306 8B 82            [24]  691 	mov	dpl,r3
      002308 8C 83            [24]  692 	mov	dph,r4
      00230A 8D F0            [24]  693 	mov	b,r5
      00230C 12 26 22         [24]  694 	lcall	__gptrget
      00230F F9               [12]  695 	mov	r1,a
      002310 A3               [24]  696 	inc	dptr
      002311 12 26 22         [24]  697 	lcall	__gptrget
      002314 FA               [12]  698 	mov	r2,a
      002315 B9 0D A0         [24]  699 	cjne	r1,#0x0d,00101$
      002318 BA 00 9D         [24]  700 	cjne	r2,#0x00,00101$
                                    701 ;	main.c:37: return res;
      00231B 90 04 02         [24]  702 	mov	dptr,#_strtola_q_65536_45
      00231E EB               [12]  703 	mov	a,r3
      00231F F0               [24]  704 	movx	@dptr,a
      002320 EC               [12]  705 	mov	a,r4
      002321 A3               [24]  706 	inc	dptr
      002322 F0               [24]  707 	movx	@dptr,a
      002323 ED               [12]  708 	mov	a,r5
      002324 A3               [24]  709 	inc	dptr
      002325 F0               [24]  710 	movx	@dptr,a
      002326 8E 82            [24]  711 	mov	dpl,r6
      002328 8F 83            [24]  712 	mov	dph,r7
                                    713 ;	main.c:38: }
      00232A 22               [24]  714 	ret
                                    715 ;------------------------------------------------------------
                                    716 ;Allocation info for local variables in function 'WtdRef'
                                    717 ;------------------------------------------------------------
                                    718 ;	main.c:39: void WtdRef()
                                    719 ;	-----------------------------------------
                                    720 ;	 function WtdRef
                                    721 ;	-----------------------------------------
      00232B                        722 _WtdRef:
                                    723 ;	main.c:41: IE = IE & 0xBF;
      00232B 53 A8 BF         [24]  724 	anl	_IE,#0xbf
                                    725 ;	main.c:42: CCAP4L = 0x00;
      00232E 75 EE 00         [24]  726 	mov	_CCAP4L,#0x00
                                    727 ;	main.c:43: CCAP4H = CH;
      002331 85 F9 FE         [24]  728 	mov	_CCAP4H,_CH
                                    729 ;	main.c:44: IE = IE | 0x40;
      002334 43 A8 40         [24]  730 	orl	_IE,#0x40
                                    731 ;	main.c:46: }
      002337 22               [24]  732 	ret
                                    733 ;------------------------------------------------------------
                                    734 ;Allocation info for local variables in function 'main'
                                    735 ;------------------------------------------------------------
                                    736 ;a                         Allocated with name '_main_a_65536_50'
                                    737 ;------------------------------------------------------------
                                    738 ;	main.c:47: void main(void)
                                    739 ;	-----------------------------------------
                                    740 ;	 function main
                                    741 ;	-----------------------------------------
      002338                        742 _main:
                                    743 ;	main.c:51: CH=0;
      002338 75 F9 00         [24]  744 	mov	_CH,#0x00
                                    745 ;	main.c:52: CL=0;
      00233B 75 E9 00         [24]  746 	mov	_CL,#0x00
                                    747 ;	main.c:53: CMOD = 0x43;
      00233E 75 D9 43         [24]  748 	mov	_CMOD,#0x43
                                    749 ;	main.c:54: IE=0xC0;
      002341 75 A8 C0         [24]  750 	mov	_IE,#0xc0
                                    751 ;	main.c:55: CR=1;
                                    752 ;	assignBit
      002344 D2 DE            [12]  753 	setb	_CR
                                    754 ;	main.c:57: do
      002346                        755 00110$:
                                    756 ;	main.c:58: {   CKCON0=0;
      002346 75 8F 00         [24]  757 	mov	_CKCON0,#0x00
                                    758 ;	main.c:59: printf_tiny("\n\r Welcome to Supplemental Part DEMO");
      002349 74 42            [12]  759 	mov	a,#___str_0
      00234B C0 E0            [24]  760 	push	acc
      00234D 74 26            [12]  761 	mov	a,#(___str_0 >> 8)
      00234F C0 E0            [24]  762 	push	acc
      002351 12 24 F9         [24]  763 	lcall	_printf_tiny
      002354 15 81            [12]  764 	dec	sp
      002356 15 81            [12]  765 	dec	sp
                                    766 ;	main.c:60: printf_tiny("\n\r Your Choices Are:");
      002358 74 67            [12]  767 	mov	a,#___str_1
      00235A C0 E0            [24]  768 	push	acc
      00235C 74 26            [12]  769 	mov	a,#(___str_1 >> 8)
      00235E C0 E0            [24]  770 	push	acc
      002360 12 24 F9         [24]  771 	lcall	_printf_tiny
      002363 15 81            [12]  772 	dec	sp
      002365 15 81            [12]  773 	dec	sp
                                    774 ;	main.c:61: printf_tiny("\n\r 1. START PWM");
      002367 74 7C            [12]  775 	mov	a,#___str_2
      002369 C0 E0            [24]  776 	push	acc
      00236B 74 26            [12]  777 	mov	a,#(___str_2 >> 8)
      00236D C0 E0            [24]  778 	push	acc
      00236F 12 24 F9         [24]  779 	lcall	_printf_tiny
      002372 15 81            [12]  780 	dec	sp
      002374 15 81            [12]  781 	dec	sp
                                    782 ;	main.c:62: printf_tiny("\n\r 2. STOP PWM");
      002376 74 8C            [12]  783 	mov	a,#___str_3
      002378 C0 E0            [24]  784 	push	acc
      00237A 74 26            [12]  785 	mov	a,#(___str_3 >> 8)
      00237C C0 E0            [24]  786 	push	acc
      00237E 12 24 F9         [24]  787 	lcall	_printf_tiny
      002381 15 81            [12]  788 	dec	sp
      002383 15 81            [12]  789 	dec	sp
                                    790 ;	main.c:63: printf_tiny("\n\r 3. MAXIMUM FREQUENCY");
      002385 74 9B            [12]  791 	mov	a,#___str_4
      002387 C0 E0            [24]  792 	push	acc
      002389 74 26            [12]  793 	mov	a,#(___str_4 >> 8)
      00238B C0 E0            [24]  794 	push	acc
      00238D 12 24 F9         [24]  795 	lcall	_printf_tiny
      002390 15 81            [12]  796 	dec	sp
      002392 15 81            [12]  797 	dec	sp
                                    798 ;	main.c:64: printf_tiny("\n\r 4. MINIMUM FREQUENCY");
      002394 74 B3            [12]  799 	mov	a,#___str_5
      002396 C0 E0            [24]  800 	push	acc
      002398 74 26            [12]  801 	mov	a,#(___str_5 >> 8)
      00239A C0 E0            [24]  802 	push	acc
      00239C 12 24 F9         [24]  803 	lcall	_printf_tiny
      00239F 15 81            [12]  804 	dec	sp
      0023A1 15 81            [12]  805 	dec	sp
                                    806 ;	main.c:65: printf_tiny("\n\r 5. IDLE MODE");
      0023A3 74 CB            [12]  807 	mov	a,#___str_6
      0023A5 C0 E0            [24]  808 	push	acc
      0023A7 74 26            [12]  809 	mov	a,#(___str_6 >> 8)
      0023A9 C0 E0            [24]  810 	push	acc
      0023AB 12 24 F9         [24]  811 	lcall	_printf_tiny
      0023AE 15 81            [12]  812 	dec	sp
      0023B0 15 81            [12]  813 	dec	sp
                                    814 ;	main.c:66: printf_tiny("\n\r 6. POWER DOWN MODE");
      0023B2 74 DB            [12]  815 	mov	a,#___str_7
      0023B4 C0 E0            [24]  816 	push	acc
      0023B6 74 26            [12]  817 	mov	a,#(___str_7 >> 8)
      0023B8 C0 E0            [24]  818 	push	acc
      0023BA 12 24 F9         [24]  819 	lcall	_printf_tiny
      0023BD 15 81            [12]  820 	dec	sp
      0023BF 15 81            [12]  821 	dec	sp
                                    822 ;	main.c:67: printf_tiny("\n\r 7. EXIT");
      0023C1 74 F1            [12]  823 	mov	a,#___str_8
      0023C3 C0 E0            [24]  824 	push	acc
      0023C5 74 26            [12]  825 	mov	a,#(___str_8 >> 8)
      0023C7 C0 E0            [24]  826 	push	acc
      0023C9 12 24 F9         [24]  827 	lcall	_printf_tiny
      0023CC 15 81            [12]  828 	dec	sp
      0023CE 15 81            [12]  829 	dec	sp
                                    830 ;	main.c:68: printf_tiny("\n\r Enter Options:");
      0023D0 74 FC            [12]  831 	mov	a,#___str_9
      0023D2 C0 E0            [24]  832 	push	acc
      0023D4 74 26            [12]  833 	mov	a,#(___str_9 >> 8)
      0023D6 C0 E0            [24]  834 	push	acc
      0023D8 12 24 F9         [24]  835 	lcall	_printf_tiny
      0023DB 15 81            [12]  836 	dec	sp
      0023DD 15 81            [12]  837 	dec	sp
                                    838 ;	main.c:69: a=getchar();
      0023DF 12 22 8B         [24]  839 	lcall	_getchar
      0023E2 AE 82            [24]  840 	mov	r6,dpl
                                    841 ;	main.c:70: putchar(a);
      0023E4 8E 05            [24]  842 	mov	ar5,r6
      0023E6 7F 00            [12]  843 	mov	r7,#0x00
      0023E8 8D 82            [24]  844 	mov	dpl,r5
      0023EA 8F 83            [24]  845 	mov	dph,r7
      0023EC C0 06            [24]  846 	push	ar6
      0023EE 12 22 6E         [24]  847 	lcall	_putchar
      0023F1 D0 06            [24]  848 	pop	ar6
                                    849 ;	main.c:71: switch(a)
      0023F3 BE 31 00         [24]  850 	cjne	r6,#0x31,00127$
      0023F6                        851 00127$:
      0023F6 50 03            [24]  852 	jnc	00128$
      0023F8 02 24 DE         [24]  853 	ljmp	00108$
      0023FB                        854 00128$:
      0023FB EE               [12]  855 	mov	a,r6
      0023FC 24 C8            [12]  856 	add	a,#0xff - 0x37
      0023FE 50 03            [24]  857 	jnc	00129$
      002400 02 24 DE         [24]  858 	ljmp	00108$
      002403                        859 00129$:
      002403 EE               [12]  860 	mov	a,r6
      002404 24 CF            [12]  861 	add	a,#0xcf
      002406 FF               [12]  862 	mov	r7,a
      002407 2F               [12]  863 	add	a,r7
      002408 2F               [12]  864 	add	a,r7
      002409 90 24 0D         [24]  865 	mov	dptr,#00130$
      00240C 73               [24]  866 	jmp	@a+dptr
      00240D                        867 00130$:
      00240D 02 24 22         [24]  868 	ljmp	00101$
      002410 02 24 4A         [24]  869 	ljmp	00102$
      002413 02 24 6C         [24]  870 	ljmp	00103$
      002416 02 24 8D         [24]  871 	ljmp	00104$
      002419 02 24 A8         [24]  872 	ljmp	00105$
      00241C 02 24 C3         [24]  873 	ljmp	00106$
      00241F 02 24 F1         [24]  874 	ljmp	00111$
                                    875 ;	main.c:73: case '1':printf_tiny("\n\n\r STARTING PWM \n\r");
      002422                        876 00101$:
      002422 C0 06            [24]  877 	push	ar6
      002424 74 0E            [12]  878 	mov	a,#___str_10
      002426 C0 E0            [24]  879 	push	acc
      002428 74 27            [12]  880 	mov	a,#(___str_10 >> 8)
      00242A C0 E0            [24]  881 	push	acc
      00242C 12 24 F9         [24]  882 	lcall	_printf_tiny
      00242F 15 81            [12]  883 	dec	sp
      002431 15 81            [12]  884 	dec	sp
      002433 D0 06            [24]  885 	pop	ar6
                                    886 ;	main.c:74: CKCON0=1;
      002435 75 8F 01         [24]  887 	mov	_CKCON0,#0x01
                                    888 ;	main.c:75: CH=0;
      002438 75 F9 00         [24]  889 	mov	_CH,#0x00
                                    890 ;	main.c:76: CL=0;
      00243B 75 E9 00         [24]  891 	mov	_CL,#0x00
                                    892 ;	main.c:77: CCAP2L = 0x40;
      00243E 75 EC 40         [24]  893 	mov	_CCAP2L,#0x40
                                    894 ;	main.c:78: CCAP2H = 0x8D;
      002441 75 FC 8D         [24]  895 	mov	_CCAP2H,#0x8d
                                    896 ;	main.c:79: CCAPM2= 0x42;
      002444 75 DC 42         [24]  897 	mov	_CCAPM2,#0x42
                                    898 ;	main.c:80: break;
      002447 02 24 F1         [24]  899 	ljmp	00111$
                                    900 ;	main.c:81: case '2':
      00244A                        901 00102$:
                                    902 ;	main.c:82: printf_tiny("\n\n\r STOPING PWM\n\r");
      00244A C0 06            [24]  903 	push	ar6
      00244C 74 22            [12]  904 	mov	a,#___str_11
      00244E C0 E0            [24]  905 	push	acc
      002450 74 27            [12]  906 	mov	a,#(___str_11 >> 8)
      002452 C0 E0            [24]  907 	push	acc
      002454 12 24 F9         [24]  908 	lcall	_printf_tiny
      002457 15 81            [12]  909 	dec	sp
      002459 15 81            [12]  910 	dec	sp
      00245B D0 06            [24]  911 	pop	ar6
                                    912 ;	main.c:83: CKCON0=1;
      00245D 75 8F 01         [24]  913 	mov	_CKCON0,#0x01
                                    914 ;	main.c:84: CH=0;
      002460 75 F9 00         [24]  915 	mov	_CH,#0x00
                                    916 ;	main.c:85: CL=0;
      002463 75 E9 00         [24]  917 	mov	_CL,#0x00
                                    918 ;	main.c:86: CCAPM2= 0x00;
      002466 75 DC 00         [24]  919 	mov	_CCAPM2,#0x00
                                    920 ;	main.c:87: break;
      002469 02 24 F1         [24]  921 	ljmp	00111$
                                    922 ;	main.c:88: case '3':
      00246C                        923 00103$:
                                    924 ;	main.c:89: printf_tiny("\n\n\r Maximum Frequency\n\r");
      00246C C0 06            [24]  925 	push	ar6
      00246E 74 34            [12]  926 	mov	a,#___str_12
      002470 C0 E0            [24]  927 	push	acc
      002472 74 27            [12]  928 	mov	a,#(___str_12 >> 8)
      002474 C0 E0            [24]  929 	push	acc
      002476 12 24 F9         [24]  930 	lcall	_printf_tiny
      002479 15 81            [12]  931 	dec	sp
      00247B 15 81            [12]  932 	dec	sp
      00247D D0 06            [24]  933 	pop	ar6
                                    934 ;	main.c:90: CKCON0=1;
      00247F 75 8F 01         [24]  935 	mov	_CKCON0,#0x01
                                    936 ;	main.c:91: CH=0;
      002482 75 F9 00         [24]  937 	mov	_CH,#0x00
                                    938 ;	main.c:92: CL=0;
      002485 75 E9 00         [24]  939 	mov	_CL,#0x00
                                    940 ;	main.c:93: CKRL = 0xFF;
      002488 75 97 FF         [24]  941 	mov	_CKRL,#0xff
                                    942 ;	main.c:94: break;
                                    943 ;	main.c:95: case '4':
      00248B 80 64            [24]  944 	sjmp	00111$
      00248D                        945 00104$:
                                    946 ;	main.c:96: printf_tiny("\n\n\r Minimum Frequency\n\r");
      00248D C0 06            [24]  947 	push	ar6
      00248F 74 4C            [12]  948 	mov	a,#___str_13
      002491 C0 E0            [24]  949 	push	acc
      002493 74 27            [12]  950 	mov	a,#(___str_13 >> 8)
      002495 C0 E0            [24]  951 	push	acc
      002497 12 24 F9         [24]  952 	lcall	_printf_tiny
      00249A 15 81            [12]  953 	dec	sp
      00249C 15 81            [12]  954 	dec	sp
      00249E D0 06            [24]  955 	pop	ar6
                                    956 ;	main.c:97: CKCON0=1;
      0024A0 75 8F 01         [24]  957 	mov	_CKCON0,#0x01
                                    958 ;	main.c:98: CKRL = 0x00;
      0024A3 75 97 00         [24]  959 	mov	_CKRL,#0x00
                                    960 ;	main.c:99: break;
                                    961 ;	main.c:100: case '5':
      0024A6 80 49            [24]  962 	sjmp	00111$
      0024A8                        963 00105$:
                                    964 ;	main.c:101: printf_tiny("\n\n\r IDLE MODE\n\r");
      0024A8 C0 06            [24]  965 	push	ar6
      0024AA 74 64            [12]  966 	mov	a,#___str_14
      0024AC C0 E0            [24]  967 	push	acc
      0024AE 74 27            [12]  968 	mov	a,#(___str_14 >> 8)
      0024B0 C0 E0            [24]  969 	push	acc
      0024B2 12 24 F9         [24]  970 	lcall	_printf_tiny
      0024B5 15 81            [12]  971 	dec	sp
      0024B7 15 81            [12]  972 	dec	sp
      0024B9 D0 06            [24]  973 	pop	ar6
                                    974 ;	main.c:102: CKCON0=1;
      0024BB 75 8F 01         [24]  975 	mov	_CKCON0,#0x01
                                    976 ;	main.c:103: PCON=1;
      0024BE 75 87 01         [24]  977 	mov	_PCON,#0x01
                                    978 ;	main.c:104: break;
                                    979 ;	main.c:105: case '6':
      0024C1 80 2E            [24]  980 	sjmp	00111$
      0024C3                        981 00106$:
                                    982 ;	main.c:106: printf_tiny("\n\n\r POWER DOWN MODE\n\r");
      0024C3 C0 06            [24]  983 	push	ar6
      0024C5 74 74            [12]  984 	mov	a,#___str_15
      0024C7 C0 E0            [24]  985 	push	acc
      0024C9 74 27            [12]  986 	mov	a,#(___str_15 >> 8)
      0024CB C0 E0            [24]  987 	push	acc
      0024CD 12 24 F9         [24]  988 	lcall	_printf_tiny
      0024D0 15 81            [12]  989 	dec	sp
      0024D2 15 81            [12]  990 	dec	sp
      0024D4 D0 06            [24]  991 	pop	ar6
                                    992 ;	main.c:107: PCON=2;
      0024D6 75 87 02         [24]  993 	mov	_PCON,#0x02
                                    994 ;	main.c:108: CKCON0=1;
      0024D9 75 8F 01         [24]  995 	mov	_CKCON0,#0x01
                                    996 ;	main.c:109: break;
                                    997 ;	main.c:111: default: printf_tiny("\n\n\r Sorry Wrong Option, Enter Again\n\r");
      0024DC 80 13            [24]  998 	sjmp	00111$
      0024DE                        999 00108$:
      0024DE C0 06            [24] 1000 	push	ar6
      0024E0 74 8A            [12] 1001 	mov	a,#___str_16
      0024E2 C0 E0            [24] 1002 	push	acc
      0024E4 74 27            [12] 1003 	mov	a,#(___str_16 >> 8)
      0024E6 C0 E0            [24] 1004 	push	acc
      0024E8 12 24 F9         [24] 1005 	lcall	_printf_tiny
      0024EB 15 81            [12] 1006 	dec	sp
      0024ED 15 81            [12] 1007 	dec	sp
      0024EF D0 06            [24] 1008 	pop	ar6
                                   1009 ;	main.c:113: }
      0024F1                       1010 00111$:
                                   1011 ;	main.c:114: }while(a!='7');
      0024F1 BE 37 01         [24] 1012 	cjne	r6,#0x37,00131$
      0024F4 22               [24] 1013 	ret
      0024F5                       1014 00131$:
      0024F5 02 23 46         [24] 1015 	ljmp	00110$
                                   1016 ;	main.c:115: }
      0024F8 22               [24] 1017 	ret
                                   1018 	.area CSEG    (CODE)
                                   1019 	.area CONST   (CODE)
                                   1020 	.area CONST   (CODE)
      002642                       1021 ___str_0:
      002642 0A                    1022 	.db 0x0a
      002643 0D                    1023 	.db 0x0d
      002644 20 57 65 6C 63 6F 6D  1024 	.ascii " Welcome to Supplemental Part DEMO"
             65 20 74 6F 20 53 75
             70 70 6C 65 6D 65 6E
             74 61 6C 20 50 61 72
             74 20 44 45 4D 4F
      002666 00                    1025 	.db 0x00
                                   1026 	.area CSEG    (CODE)
                                   1027 	.area CONST   (CODE)
      002667                       1028 ___str_1:
      002667 0A                    1029 	.db 0x0a
      002668 0D                    1030 	.db 0x0d
      002669 20 59 6F 75 72 20 43  1031 	.ascii " Your Choices Are:"
             68 6F 69 63 65 73 20
             41 72 65 3A
      00267B 00                    1032 	.db 0x00
                                   1033 	.area CSEG    (CODE)
                                   1034 	.area CONST   (CODE)
      00267C                       1035 ___str_2:
      00267C 0A                    1036 	.db 0x0a
      00267D 0D                    1037 	.db 0x0d
      00267E 20 31 2E 20 53 54 41  1038 	.ascii " 1. START PWM"
             52 54 20 50 57 4D
      00268B 00                    1039 	.db 0x00
                                   1040 	.area CSEG    (CODE)
                                   1041 	.area CONST   (CODE)
      00268C                       1042 ___str_3:
      00268C 0A                    1043 	.db 0x0a
      00268D 0D                    1044 	.db 0x0d
      00268E 20 32 2E 20 53 54 4F  1045 	.ascii " 2. STOP PWM"
             50 20 50 57 4D
      00269A 00                    1046 	.db 0x00
                                   1047 	.area CSEG    (CODE)
                                   1048 	.area CONST   (CODE)
      00269B                       1049 ___str_4:
      00269B 0A                    1050 	.db 0x0a
      00269C 0D                    1051 	.db 0x0d
      00269D 20 33 2E 20 4D 41 58  1052 	.ascii " 3. MAXIMUM FREQUENCY"
             49 4D 55 4D 20 46 52
             45 51 55 45 4E 43 59
      0026B2 00                    1053 	.db 0x00
                                   1054 	.area CSEG    (CODE)
                                   1055 	.area CONST   (CODE)
      0026B3                       1056 ___str_5:
      0026B3 0A                    1057 	.db 0x0a
      0026B4 0D                    1058 	.db 0x0d
      0026B5 20 34 2E 20 4D 49 4E  1059 	.ascii " 4. MINIMUM FREQUENCY"
             49 4D 55 4D 20 46 52
             45 51 55 45 4E 43 59
      0026CA 00                    1060 	.db 0x00
                                   1061 	.area CSEG    (CODE)
                                   1062 	.area CONST   (CODE)
      0026CB                       1063 ___str_6:
      0026CB 0A                    1064 	.db 0x0a
      0026CC 0D                    1065 	.db 0x0d
      0026CD 20 35 2E 20 49 44 4C  1066 	.ascii " 5. IDLE MODE"
             45 20 4D 4F 44 45
      0026DA 00                    1067 	.db 0x00
                                   1068 	.area CSEG    (CODE)
                                   1069 	.area CONST   (CODE)
      0026DB                       1070 ___str_7:
      0026DB 0A                    1071 	.db 0x0a
      0026DC 0D                    1072 	.db 0x0d
      0026DD 20 36 2E 20 50 4F 57  1073 	.ascii " 6. POWER DOWN MODE"
             45 52 20 44 4F 57 4E
             20 4D 4F 44 45
      0026F0 00                    1074 	.db 0x00
                                   1075 	.area CSEG    (CODE)
                                   1076 	.area CONST   (CODE)
      0026F1                       1077 ___str_8:
      0026F1 0A                    1078 	.db 0x0a
      0026F2 0D                    1079 	.db 0x0d
      0026F3 20 37 2E 20 45 58 49  1080 	.ascii " 7. EXIT"
             54
      0026FB 00                    1081 	.db 0x00
                                   1082 	.area CSEG    (CODE)
                                   1083 	.area CONST   (CODE)
      0026FC                       1084 ___str_9:
      0026FC 0A                    1085 	.db 0x0a
      0026FD 0D                    1086 	.db 0x0d
      0026FE 20 45 6E 74 65 72 20  1087 	.ascii " Enter Options:"
             4F 70 74 69 6F 6E 73
             3A
      00270D 00                    1088 	.db 0x00
                                   1089 	.area CSEG    (CODE)
                                   1090 	.area CONST   (CODE)
      00270E                       1091 ___str_10:
      00270E 0A                    1092 	.db 0x0a
      00270F 0A                    1093 	.db 0x0a
      002710 0D                    1094 	.db 0x0d
      002711 20 53 54 41 52 54 49  1095 	.ascii " STARTING PWM "
             4E 47 20 50 57 4D 20
      00271F 0A                    1096 	.db 0x0a
      002720 0D                    1097 	.db 0x0d
      002721 00                    1098 	.db 0x00
                                   1099 	.area CSEG    (CODE)
                                   1100 	.area CONST   (CODE)
      002722                       1101 ___str_11:
      002722 0A                    1102 	.db 0x0a
      002723 0A                    1103 	.db 0x0a
      002724 0D                    1104 	.db 0x0d
      002725 20 53 54 4F 50 49 4E  1105 	.ascii " STOPING PWM"
             47 20 50 57 4D
      002731 0A                    1106 	.db 0x0a
      002732 0D                    1107 	.db 0x0d
      002733 00                    1108 	.db 0x00
                                   1109 	.area CSEG    (CODE)
                                   1110 	.area CONST   (CODE)
      002734                       1111 ___str_12:
      002734 0A                    1112 	.db 0x0a
      002735 0A                    1113 	.db 0x0a
      002736 0D                    1114 	.db 0x0d
      002737 20 4D 61 78 69 6D 75  1115 	.ascii " Maximum Frequency"
             6D 20 46 72 65 71 75
             65 6E 63 79
      002749 0A                    1116 	.db 0x0a
      00274A 0D                    1117 	.db 0x0d
      00274B 00                    1118 	.db 0x00
                                   1119 	.area CSEG    (CODE)
                                   1120 	.area CONST   (CODE)
      00274C                       1121 ___str_13:
      00274C 0A                    1122 	.db 0x0a
      00274D 0A                    1123 	.db 0x0a
      00274E 0D                    1124 	.db 0x0d
      00274F 20 4D 69 6E 69 6D 75  1125 	.ascii " Minimum Frequency"
             6D 20 46 72 65 71 75
             65 6E 63 79
      002761 0A                    1126 	.db 0x0a
      002762 0D                    1127 	.db 0x0d
      002763 00                    1128 	.db 0x00
                                   1129 	.area CSEG    (CODE)
                                   1130 	.area CONST   (CODE)
      002764                       1131 ___str_14:
      002764 0A                    1132 	.db 0x0a
      002765 0A                    1133 	.db 0x0a
      002766 0D                    1134 	.db 0x0d
      002767 20 49 44 4C 45 20 4D  1135 	.ascii " IDLE MODE"
             4F 44 45
      002771 0A                    1136 	.db 0x0a
      002772 0D                    1137 	.db 0x0d
      002773 00                    1138 	.db 0x00
                                   1139 	.area CSEG    (CODE)
                                   1140 	.area CONST   (CODE)
      002774                       1141 ___str_15:
      002774 0A                    1142 	.db 0x0a
      002775 0A                    1143 	.db 0x0a
      002776 0D                    1144 	.db 0x0d
      002777 20 50 4F 57 45 52 20  1145 	.ascii " POWER DOWN MODE"
             44 4F 57 4E 20 4D 4F
             44 45
      002787 0A                    1146 	.db 0x0a
      002788 0D                    1147 	.db 0x0d
      002789 00                    1148 	.db 0x00
                                   1149 	.area CSEG    (CODE)
                                   1150 	.area CONST   (CODE)
      00278A                       1151 ___str_16:
      00278A 0A                    1152 	.db 0x0a
      00278B 0A                    1153 	.db 0x0a
      00278C 0D                    1154 	.db 0x0d
      00278D 20 53 6F 72 72 79 20  1155 	.ascii " Sorry Wrong Option, Enter Again"
             57 72 6F 6E 67 20 4F
             70 74 69 6F 6E 2C 20
             45 6E 74 65 72 20 41
             67 61 69 6E
      0027AD 0A                    1156 	.db 0x0a
      0027AE 0D                    1157 	.db 0x0d
      0027AF 00                    1158 	.db 0x00
                                   1159 	.area CSEG    (CODE)
                                   1160 	.area XINIT   (CODE)
                                   1161 	.area CABS    (ABS,CODE)
