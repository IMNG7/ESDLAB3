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
                                     13 	.globl _delay
                                     14 	.globl _PCA_ISR
                                     15 	.globl _P5_7
                                     16 	.globl _P5_6
                                     17 	.globl _P5_5
                                     18 	.globl _P5_4
                                     19 	.globl _P5_3
                                     20 	.globl _P5_2
                                     21 	.globl _P5_1
                                     22 	.globl _P5_0
                                     23 	.globl _P4_7
                                     24 	.globl _P4_6
                                     25 	.globl _P4_5
                                     26 	.globl _P4_4
                                     27 	.globl _P4_3
                                     28 	.globl _P4_2
                                     29 	.globl _P4_1
                                     30 	.globl _P4_0
                                     31 	.globl _PX0L
                                     32 	.globl _PT0L
                                     33 	.globl _PX1L
                                     34 	.globl _PT1L
                                     35 	.globl _PSL
                                     36 	.globl _PT2L
                                     37 	.globl _PPCL
                                     38 	.globl _EC
                                     39 	.globl _CCF0
                                     40 	.globl _CCF1
                                     41 	.globl _CCF2
                                     42 	.globl _CCF3
                                     43 	.globl _CCF4
                                     44 	.globl _CR
                                     45 	.globl _CF
                                     46 	.globl _TF2
                                     47 	.globl _EXF2
                                     48 	.globl _RCLK
                                     49 	.globl _TCLK
                                     50 	.globl _EXEN2
                                     51 	.globl _TR2
                                     52 	.globl _C_T2
                                     53 	.globl _CP_RL2
                                     54 	.globl _T2CON_7
                                     55 	.globl _T2CON_6
                                     56 	.globl _T2CON_5
                                     57 	.globl _T2CON_4
                                     58 	.globl _T2CON_3
                                     59 	.globl _T2CON_2
                                     60 	.globl _T2CON_1
                                     61 	.globl _T2CON_0
                                     62 	.globl _PT2
                                     63 	.globl _ET2
                                     64 	.globl _CY
                                     65 	.globl _AC
                                     66 	.globl _F0
                                     67 	.globl _RS1
                                     68 	.globl _RS0
                                     69 	.globl _OV
                                     70 	.globl _F1
                                     71 	.globl _P
                                     72 	.globl _PS
                                     73 	.globl _PT1
                                     74 	.globl _PX1
                                     75 	.globl _PT0
                                     76 	.globl _PX0
                                     77 	.globl _RD
                                     78 	.globl _WR
                                     79 	.globl _T1
                                     80 	.globl _T0
                                     81 	.globl _INT1
                                     82 	.globl _INT0
                                     83 	.globl _TXD
                                     84 	.globl _RXD
                                     85 	.globl _P3_7
                                     86 	.globl _P3_6
                                     87 	.globl _P3_5
                                     88 	.globl _P3_4
                                     89 	.globl _P3_3
                                     90 	.globl _P3_2
                                     91 	.globl _P3_1
                                     92 	.globl _P3_0
                                     93 	.globl _EA
                                     94 	.globl _ES
                                     95 	.globl _ET1
                                     96 	.globl _EX1
                                     97 	.globl _ET0
                                     98 	.globl _EX0
                                     99 	.globl _P2_7
                                    100 	.globl _P2_6
                                    101 	.globl _P2_5
                                    102 	.globl _P2_4
                                    103 	.globl _P2_3
                                    104 	.globl _P2_2
                                    105 	.globl _P2_1
                                    106 	.globl _P2_0
                                    107 	.globl _SM0
                                    108 	.globl _SM1
                                    109 	.globl _SM2
                                    110 	.globl _REN
                                    111 	.globl _TB8
                                    112 	.globl _RB8
                                    113 	.globl _TI
                                    114 	.globl _RI
                                    115 	.globl _P1_7
                                    116 	.globl _P1_6
                                    117 	.globl _P1_5
                                    118 	.globl _P1_4
                                    119 	.globl _P1_3
                                    120 	.globl _P1_2
                                    121 	.globl _P1_1
                                    122 	.globl _P1_0
                                    123 	.globl _TF1
                                    124 	.globl _TR1
                                    125 	.globl _TF0
                                    126 	.globl _TR0
                                    127 	.globl _IE1
                                    128 	.globl _IT1
                                    129 	.globl _IE0
                                    130 	.globl _IT0
                                    131 	.globl _P0_7
                                    132 	.globl _P0_6
                                    133 	.globl _P0_5
                                    134 	.globl _P0_4
                                    135 	.globl _P0_3
                                    136 	.globl _P0_2
                                    137 	.globl _P0_1
                                    138 	.globl _P0_0
                                    139 	.globl _EECON
                                    140 	.globl _KBF
                                    141 	.globl _KBE
                                    142 	.globl _KBLS
                                    143 	.globl _BRL
                                    144 	.globl _BDRCON
                                    145 	.globl _T2MOD
                                    146 	.globl _SPDAT
                                    147 	.globl _SPSTA
                                    148 	.globl _SPCON
                                    149 	.globl _SADEN
                                    150 	.globl _SADDR
                                    151 	.globl _WDTPRG
                                    152 	.globl _WDTRST
                                    153 	.globl _P5
                                    154 	.globl _P4
                                    155 	.globl _IPH1
                                    156 	.globl _IPL1
                                    157 	.globl _IPH0
                                    158 	.globl _IPL0
                                    159 	.globl _IEN1
                                    160 	.globl _IEN0
                                    161 	.globl _CMOD
                                    162 	.globl _CL
                                    163 	.globl _CH
                                    164 	.globl _CCON
                                    165 	.globl _CCAPM4
                                    166 	.globl _CCAPM3
                                    167 	.globl _CCAPM2
                                    168 	.globl _CCAPM1
                                    169 	.globl _CCAPM0
                                    170 	.globl _CCAP4L
                                    171 	.globl _CCAP3L
                                    172 	.globl _CCAP2L
                                    173 	.globl _CCAP1L
                                    174 	.globl _CCAP0L
                                    175 	.globl _CCAP4H
                                    176 	.globl _CCAP3H
                                    177 	.globl _CCAP2H
                                    178 	.globl _CCAP1H
                                    179 	.globl _CCAP0H
                                    180 	.globl _CKCON1
                                    181 	.globl _CKCON0
                                    182 	.globl _CKRL
                                    183 	.globl _AUXR1
                                    184 	.globl _AUXR
                                    185 	.globl _TH2
                                    186 	.globl _TL2
                                    187 	.globl _RCAP2H
                                    188 	.globl _RCAP2L
                                    189 	.globl _T2CON
                                    190 	.globl _B
                                    191 	.globl _ACC
                                    192 	.globl _PSW
                                    193 	.globl _IP
                                    194 	.globl _P3
                                    195 	.globl _IE
                                    196 	.globl _P2
                                    197 	.globl _SBUF
                                    198 	.globl _SCON
                                    199 	.globl _P1
                                    200 	.globl _TH1
                                    201 	.globl _TH0
                                    202 	.globl _TL1
                                    203 	.globl _TL0
                                    204 	.globl _TMOD
                                    205 	.globl _TCON
                                    206 	.globl _PCON
                                    207 	.globl _DPH
                                    208 	.globl _DPL
                                    209 	.globl _SP
                                    210 	.globl _P0
                                    211 	.globl _capture2
                                    212 	.globl _capture1
                                    213 	.globl _putchar
                                    214 	.globl _getchar
                                    215 ;--------------------------------------------------------
                                    216 ; special function registers
                                    217 ;--------------------------------------------------------
                                    218 	.area RSEG    (ABS,DATA)
      000000                        219 	.org 0x0000
                           000080   220 _P0	=	0x0080
                           000081   221 _SP	=	0x0081
                           000082   222 _DPL	=	0x0082
                           000083   223 _DPH	=	0x0083
                           000087   224 _PCON	=	0x0087
                           000088   225 _TCON	=	0x0088
                           000089   226 _TMOD	=	0x0089
                           00008A   227 _TL0	=	0x008a
                           00008B   228 _TL1	=	0x008b
                           00008C   229 _TH0	=	0x008c
                           00008D   230 _TH1	=	0x008d
                           000090   231 _P1	=	0x0090
                           000098   232 _SCON	=	0x0098
                           000099   233 _SBUF	=	0x0099
                           0000A0   234 _P2	=	0x00a0
                           0000A8   235 _IE	=	0x00a8
                           0000B0   236 _P3	=	0x00b0
                           0000B8   237 _IP	=	0x00b8
                           0000D0   238 _PSW	=	0x00d0
                           0000E0   239 _ACC	=	0x00e0
                           0000F0   240 _B	=	0x00f0
                           0000C8   241 _T2CON	=	0x00c8
                           0000CA   242 _RCAP2L	=	0x00ca
                           0000CB   243 _RCAP2H	=	0x00cb
                           0000CC   244 _TL2	=	0x00cc
                           0000CD   245 _TH2	=	0x00cd
                           00008E   246 _AUXR	=	0x008e
                           0000A2   247 _AUXR1	=	0x00a2
                           000097   248 _CKRL	=	0x0097
                           00008F   249 _CKCON0	=	0x008f
                           0000AF   250 _CKCON1	=	0x00af
                           0000FA   251 _CCAP0H	=	0x00fa
                           0000FB   252 _CCAP1H	=	0x00fb
                           0000FC   253 _CCAP2H	=	0x00fc
                           0000FD   254 _CCAP3H	=	0x00fd
                           0000FE   255 _CCAP4H	=	0x00fe
                           0000EA   256 _CCAP0L	=	0x00ea
                           0000EB   257 _CCAP1L	=	0x00eb
                           0000EC   258 _CCAP2L	=	0x00ec
                           0000ED   259 _CCAP3L	=	0x00ed
                           0000EE   260 _CCAP4L	=	0x00ee
                           0000DA   261 _CCAPM0	=	0x00da
                           0000DB   262 _CCAPM1	=	0x00db
                           0000DC   263 _CCAPM2	=	0x00dc
                           0000DD   264 _CCAPM3	=	0x00dd
                           0000DE   265 _CCAPM4	=	0x00de
                           0000D8   266 _CCON	=	0x00d8
                           0000F9   267 _CH	=	0x00f9
                           0000E9   268 _CL	=	0x00e9
                           0000D9   269 _CMOD	=	0x00d9
                           0000A8   270 _IEN0	=	0x00a8
                           0000B1   271 _IEN1	=	0x00b1
                           0000B8   272 _IPL0	=	0x00b8
                           0000B7   273 _IPH0	=	0x00b7
                           0000B2   274 _IPL1	=	0x00b2
                           0000B3   275 _IPH1	=	0x00b3
                           0000C0   276 _P4	=	0x00c0
                           0000E8   277 _P5	=	0x00e8
                           0000A6   278 _WDTRST	=	0x00a6
                           0000A7   279 _WDTPRG	=	0x00a7
                           0000A9   280 _SADDR	=	0x00a9
                           0000B9   281 _SADEN	=	0x00b9
                           0000C3   282 _SPCON	=	0x00c3
                           0000C4   283 _SPSTA	=	0x00c4
                           0000C5   284 _SPDAT	=	0x00c5
                           0000C9   285 _T2MOD	=	0x00c9
                           00009B   286 _BDRCON	=	0x009b
                           00009A   287 _BRL	=	0x009a
                           00009C   288 _KBLS	=	0x009c
                           00009D   289 _KBE	=	0x009d
                           00009E   290 _KBF	=	0x009e
                           0000D2   291 _EECON	=	0x00d2
                                    292 ;--------------------------------------------------------
                                    293 ; special function bits
                                    294 ;--------------------------------------------------------
                                    295 	.area RSEG    (ABS,DATA)
      000000                        296 	.org 0x0000
                           000080   297 _P0_0	=	0x0080
                           000081   298 _P0_1	=	0x0081
                           000082   299 _P0_2	=	0x0082
                           000083   300 _P0_3	=	0x0083
                           000084   301 _P0_4	=	0x0084
                           000085   302 _P0_5	=	0x0085
                           000086   303 _P0_6	=	0x0086
                           000087   304 _P0_7	=	0x0087
                           000088   305 _IT0	=	0x0088
                           000089   306 _IE0	=	0x0089
                           00008A   307 _IT1	=	0x008a
                           00008B   308 _IE1	=	0x008b
                           00008C   309 _TR0	=	0x008c
                           00008D   310 _TF0	=	0x008d
                           00008E   311 _TR1	=	0x008e
                           00008F   312 _TF1	=	0x008f
                           000090   313 _P1_0	=	0x0090
                           000091   314 _P1_1	=	0x0091
                           000092   315 _P1_2	=	0x0092
                           000093   316 _P1_3	=	0x0093
                           000094   317 _P1_4	=	0x0094
                           000095   318 _P1_5	=	0x0095
                           000096   319 _P1_6	=	0x0096
                           000097   320 _P1_7	=	0x0097
                           000098   321 _RI	=	0x0098
                           000099   322 _TI	=	0x0099
                           00009A   323 _RB8	=	0x009a
                           00009B   324 _TB8	=	0x009b
                           00009C   325 _REN	=	0x009c
                           00009D   326 _SM2	=	0x009d
                           00009E   327 _SM1	=	0x009e
                           00009F   328 _SM0	=	0x009f
                           0000A0   329 _P2_0	=	0x00a0
                           0000A1   330 _P2_1	=	0x00a1
                           0000A2   331 _P2_2	=	0x00a2
                           0000A3   332 _P2_3	=	0x00a3
                           0000A4   333 _P2_4	=	0x00a4
                           0000A5   334 _P2_5	=	0x00a5
                           0000A6   335 _P2_6	=	0x00a6
                           0000A7   336 _P2_7	=	0x00a7
                           0000A8   337 _EX0	=	0x00a8
                           0000A9   338 _ET0	=	0x00a9
                           0000AA   339 _EX1	=	0x00aa
                           0000AB   340 _ET1	=	0x00ab
                           0000AC   341 _ES	=	0x00ac
                           0000AF   342 _EA	=	0x00af
                           0000B0   343 _P3_0	=	0x00b0
                           0000B1   344 _P3_1	=	0x00b1
                           0000B2   345 _P3_2	=	0x00b2
                           0000B3   346 _P3_3	=	0x00b3
                           0000B4   347 _P3_4	=	0x00b4
                           0000B5   348 _P3_5	=	0x00b5
                           0000B6   349 _P3_6	=	0x00b6
                           0000B7   350 _P3_7	=	0x00b7
                           0000B0   351 _RXD	=	0x00b0
                           0000B1   352 _TXD	=	0x00b1
                           0000B2   353 _INT0	=	0x00b2
                           0000B3   354 _INT1	=	0x00b3
                           0000B4   355 _T0	=	0x00b4
                           0000B5   356 _T1	=	0x00b5
                           0000B6   357 _WR	=	0x00b6
                           0000B7   358 _RD	=	0x00b7
                           0000B8   359 _PX0	=	0x00b8
                           0000B9   360 _PT0	=	0x00b9
                           0000BA   361 _PX1	=	0x00ba
                           0000BB   362 _PT1	=	0x00bb
                           0000BC   363 _PS	=	0x00bc
                           0000D0   364 _P	=	0x00d0
                           0000D1   365 _F1	=	0x00d1
                           0000D2   366 _OV	=	0x00d2
                           0000D3   367 _RS0	=	0x00d3
                           0000D4   368 _RS1	=	0x00d4
                           0000D5   369 _F0	=	0x00d5
                           0000D6   370 _AC	=	0x00d6
                           0000D7   371 _CY	=	0x00d7
                           0000AD   372 _ET2	=	0x00ad
                           0000BD   373 _PT2	=	0x00bd
                           0000C8   374 _T2CON_0	=	0x00c8
                           0000C9   375 _T2CON_1	=	0x00c9
                           0000CA   376 _T2CON_2	=	0x00ca
                           0000CB   377 _T2CON_3	=	0x00cb
                           0000CC   378 _T2CON_4	=	0x00cc
                           0000CD   379 _T2CON_5	=	0x00cd
                           0000CE   380 _T2CON_6	=	0x00ce
                           0000CF   381 _T2CON_7	=	0x00cf
                           0000C8   382 _CP_RL2	=	0x00c8
                           0000C9   383 _C_T2	=	0x00c9
                           0000CA   384 _TR2	=	0x00ca
                           0000CB   385 _EXEN2	=	0x00cb
                           0000CC   386 _TCLK	=	0x00cc
                           0000CD   387 _RCLK	=	0x00cd
                           0000CE   388 _EXF2	=	0x00ce
                           0000CF   389 _TF2	=	0x00cf
                           0000DF   390 _CF	=	0x00df
                           0000DE   391 _CR	=	0x00de
                           0000DC   392 _CCF4	=	0x00dc
                           0000DB   393 _CCF3	=	0x00db
                           0000DA   394 _CCF2	=	0x00da
                           0000D9   395 _CCF1	=	0x00d9
                           0000D8   396 _CCF0	=	0x00d8
                           0000AE   397 _EC	=	0x00ae
                           0000BE   398 _PPCL	=	0x00be
                           0000BD   399 _PT2L	=	0x00bd
                           0000BC   400 _PSL	=	0x00bc
                           0000BB   401 _PT1L	=	0x00bb
                           0000BA   402 _PX1L	=	0x00ba
                           0000B9   403 _PT0L	=	0x00b9
                           0000B8   404 _PX0L	=	0x00b8
                           0000C0   405 _P4_0	=	0x00c0
                           0000C1   406 _P4_1	=	0x00c1
                           0000C2   407 _P4_2	=	0x00c2
                           0000C3   408 _P4_3	=	0x00c3
                           0000C4   409 _P4_4	=	0x00c4
                           0000C5   410 _P4_5	=	0x00c5
                           0000C6   411 _P4_6	=	0x00c6
                           0000C7   412 _P4_7	=	0x00c7
                           0000E8   413 _P5_0	=	0x00e8
                           0000E9   414 _P5_1	=	0x00e9
                           0000EA   415 _P5_2	=	0x00ea
                           0000EB   416 _P5_3	=	0x00eb
                           0000EC   417 _P5_4	=	0x00ec
                           0000ED   418 _P5_5	=	0x00ed
                           0000EE   419 _P5_6	=	0x00ee
                           0000EF   420 _P5_7	=	0x00ef
                                    421 ;--------------------------------------------------------
                                    422 ; overlayable register banks
                                    423 ;--------------------------------------------------------
                                    424 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        425 	.ds 8
                                    426 ;--------------------------------------------------------
                                    427 ; internal ram data
                                    428 ;--------------------------------------------------------
                                    429 	.area DSEG    (DATA)
                                    430 ;--------------------------------------------------------
                                    431 ; overlayable items in internal ram 
                                    432 ;--------------------------------------------------------
                                    433 ;--------------------------------------------------------
                                    434 ; Stack segment in internal ram 
                                    435 ;--------------------------------------------------------
                                    436 	.area	SSEG
      000008                        437 __start__stack:
      000008                        438 	.ds	1
                                    439 
                                    440 ;--------------------------------------------------------
                                    441 ; indirectly addressable internal ram data
                                    442 ;--------------------------------------------------------
                                    443 	.area ISEG    (DATA)
                                    444 ;--------------------------------------------------------
                                    445 ; absolute internal ram data
                                    446 ;--------------------------------------------------------
                                    447 	.area IABS    (ABS,DATA)
                                    448 	.area IABS    (ABS,DATA)
                                    449 ;--------------------------------------------------------
                                    450 ; bit data
                                    451 ;--------------------------------------------------------
                                    452 	.area BSEG    (BIT)
                                    453 ;--------------------------------------------------------
                                    454 ; paged external ram data
                                    455 ;--------------------------------------------------------
                                    456 	.area PSEG    (PAG,XDATA)
                                    457 ;--------------------------------------------------------
                                    458 ; external ram data
                                    459 ;--------------------------------------------------------
                                    460 	.area XSEG    (XDATA)
      000400                        461 _capture1::
      000400                        462 	.ds 2
      000402                        463 _capture2::
      000402                        464 	.ds 2
      000404                        465 _putchar_c_65536_15:
      000404                        466 	.ds 2
                                    467 ;--------------------------------------------------------
                                    468 ; absolute external ram data
                                    469 ;--------------------------------------------------------
                                    470 	.area XABS    (ABS,XDATA)
                                    471 ;--------------------------------------------------------
                                    472 ; external initialized ram data
                                    473 ;--------------------------------------------------------
                                    474 	.area XISEG   (XDATA)
                                    475 	.area HOME    (CODE)
                                    476 	.area GSINIT0 (CODE)
                                    477 	.area GSINIT1 (CODE)
                                    478 	.area GSINIT2 (CODE)
                                    479 	.area GSINIT3 (CODE)
                                    480 	.area GSINIT4 (CODE)
                                    481 	.area GSINIT5 (CODE)
                                    482 	.area GSINIT  (CODE)
                                    483 	.area GSFINAL (CODE)
                                    484 	.area CSEG    (CODE)
                                    485 ;--------------------------------------------------------
                                    486 ; interrupt vector 
                                    487 ;--------------------------------------------------------
                                    488 	.area HOME    (CODE)
      002200                        489 __interrupt_vect:
      002200 02 22 39         [24]  490 	ljmp	__sdcc_gsinit_startup
      002203 32               [24]  491 	reti
      002204                        492 	.ds	7
      00220B 32               [24]  493 	reti
      00220C                        494 	.ds	7
      002213 32               [24]  495 	reti
      002214                        496 	.ds	7
      00221B 32               [24]  497 	reti
      00221C                        498 	.ds	7
      002223 32               [24]  499 	reti
      002224                        500 	.ds	7
      00222B 32               [24]  501 	reti
      00222C                        502 	.ds	7
      002233 02 22 C0         [24]  503 	ljmp	_PCA_ISR
                                    504 ;--------------------------------------------------------
                                    505 ; global & static initialisations
                                    506 ;--------------------------------------------------------
                                    507 	.area HOME    (CODE)
                                    508 	.area GSINIT  (CODE)
                                    509 	.area GSFINAL (CODE)
                                    510 	.area GSINIT  (CODE)
                                    511 	.globl __sdcc_gsinit_startup
                                    512 	.globl __sdcc_program_startup
                                    513 	.globl __start__stack
                                    514 	.globl __mcs51_genXINIT
                                    515 	.globl __mcs51_genXRAMCLEAR
                                    516 	.globl __mcs51_genRAMCLEAR
                                    517 	.area GSFINAL (CODE)
      002292 02 22 36         [24]  518 	ljmp	__sdcc_program_startup
                                    519 ;--------------------------------------------------------
                                    520 ; Home
                                    521 ;--------------------------------------------------------
                                    522 	.area HOME    (CODE)
                                    523 	.area HOME    (CODE)
      002236                        524 __sdcc_program_startup:
      002236 02 23 1D         [24]  525 	ljmp	_main
                                    526 ;	return from main will return to caller
                                    527 ;--------------------------------------------------------
                                    528 ; code
                                    529 ;--------------------------------------------------------
                                    530 	.area CSEG    (CODE)
                                    531 ;------------------------------------------------------------
                                    532 ;Allocation info for local variables in function 'putchar'
                                    533 ;------------------------------------------------------------
                                    534 ;c                         Allocated with name '_putchar_c_65536_15'
                                    535 ;------------------------------------------------------------
                                    536 ;	main.c:10: int putchar(int c)
                                    537 ;	-----------------------------------------
                                    538 ;	 function putchar
                                    539 ;	-----------------------------------------
      002295                        540 _putchar:
                           000007   541 	ar7 = 0x07
                           000006   542 	ar6 = 0x06
                           000005   543 	ar5 = 0x05
                           000004   544 	ar4 = 0x04
                           000003   545 	ar3 = 0x03
                           000002   546 	ar2 = 0x02
                           000001   547 	ar1 = 0x01
                           000000   548 	ar0 = 0x00
      002295 AF 83            [24]  549 	mov	r7,dph
      002297 E5 82            [12]  550 	mov	a,dpl
      002299 90 04 04         [24]  551 	mov	dptr,#_putchar_c_65536_15
      00229C F0               [24]  552 	movx	@dptr,a
      00229D EF               [12]  553 	mov	a,r7
      00229E A3               [24]  554 	inc	dptr
      00229F F0               [24]  555 	movx	@dptr,a
                                    556 ;	main.c:12: while(!TI);                         // checking the TI interrupt bit, when it sets, the data is sent
      0022A0                        557 00101$:
                                    558 ;	main.c:13: TI=0;
                                    559 ;	assignBit
      0022A0 10 99 02         [24]  560 	jbc	_TI,00114$
      0022A3 80 FB            [24]  561 	sjmp	00101$
      0022A5                        562 00114$:
                                    563 ;	main.c:14: SBUF = c;
      0022A5 90 04 04         [24]  564 	mov	dptr,#_putchar_c_65536_15
      0022A8 E0               [24]  565 	movx	a,@dptr
      0022A9 FE               [12]  566 	mov	r6,a
      0022AA A3               [24]  567 	inc	dptr
      0022AB E0               [24]  568 	movx	a,@dptr
      0022AC 8E 99            [24]  569 	mov	_SBUF,r6
                                    570 ;	main.c:15: return 1;
      0022AE 90 00 01         [24]  571 	mov	dptr,#0x0001
                                    572 ;	main.c:16: }
      0022B1 22               [24]  573 	ret
                                    574 ;------------------------------------------------------------
                                    575 ;Allocation info for local variables in function 'getchar'
                                    576 ;------------------------------------------------------------
                                    577 ;	main.c:17: int getchar()
                                    578 ;	-----------------------------------------
                                    579 ;	 function getchar
                                    580 ;	-----------------------------------------
      0022B2                        581 _getchar:
                                    582 ;	main.c:19: while(!RI);                             // checking the RI interrupt bit, when it sets, the data is received
      0022B2                        583 00101$:
                                    584 ;	main.c:20: RI=0;
                                    585 ;	assignBit
      0022B2 10 98 02         [24]  586 	jbc	_RI,00114$
      0022B5 80 FB            [24]  587 	sjmp	00101$
      0022B7                        588 00114$:
                                    589 ;	main.c:21: return SBUF;
      0022B7 AE 99            [24]  590 	mov	r6,_SBUF
      0022B9 7F 00            [12]  591 	mov	r7,#0x00
      0022BB 8E 82            [24]  592 	mov	dpl,r6
      0022BD 8F 83            [24]  593 	mov	dph,r7
                                    594 ;	main.c:22: }
      0022BF 22               [24]  595 	ret
                                    596 ;------------------------------------------------------------
                                    597 ;Allocation info for local variables in function 'PCA_ISR'
                                    598 ;------------------------------------------------------------
                                    599 ;temp                      Allocated with name '_PCA_ISR_temp_65536_18'
                                    600 ;------------------------------------------------------------
                                    601 ;	main.c:23: void PCA_ISR() __interrupt 6
                                    602 ;	-----------------------------------------
                                    603 ;	 function PCA_ISR
                                    604 ;	-----------------------------------------
      0022C0                        605 _PCA_ISR:
      0022C0 C0 E0            [24]  606 	push	acc
      0022C2 C0 07            [24]  607 	push	ar7
      0022C4 C0 06            [24]  608 	push	ar6
      0022C6 C0 05            [24]  609 	push	ar5
      0022C8 C0 04            [24]  610 	push	ar4
      0022CA C0 D0            [24]  611 	push	psw
      0022CC 75 D0 00         [24]  612 	mov	psw,#0x00
                                    613 ;	main.c:26: IE = IE & 0xBF; // Stop Interrupts
      0022CF 53 A8 BF         [24]  614 	anl	_IE,#0xbf
                                    615 ;	main.c:27: CCF0 = 0; // Clear Int flag
                                    616 ;	assignBit
      0022D2 C2 D8            [12]  617 	clr	_CCF0
                                    618 ;	main.c:28: temp = CCAP0L | (CCAP0H << 8); // The following four lines
      0022D4 AF FA            [24]  619 	mov	r7,_CCAP0H
      0022D6 7E 00            [12]  620 	mov	r6,#0x00
      0022D8 AC EA            [24]  621 	mov	r4,_CCAP0L
      0022DA 7D 00            [12]  622 	mov	r5,#0x00
      0022DC EC               [12]  623 	mov	a,r4
      0022DD 42 06            [12]  624 	orl	ar6,a
      0022DF ED               [12]  625 	mov	a,r5
      0022E0 42 07            [12]  626 	orl	ar7,a
                                    627 ;	main.c:29: temp += 0x4E20; // of code increase the
      0022E2 74 20            [12]  628 	mov	a,#0x20
      0022E4 2E               [12]  629 	add	a,r6
      0022E5 FE               [12]  630 	mov	r6,a
      0022E6 74 4E            [12]  631 	mov	a,#0x4e
      0022E8 3F               [12]  632 	addc	a,r7
      0022E9 FF               [12]  633 	mov	r7,a
                                    634 ;	main.c:30: CCAP0L = temp; // compare value in CCAP0
      0022EA 8E EA            [24]  635 	mov	_CCAP0L,r6
                                    636 ;	main.c:31: CCAP0H = temp >> 8; // by 20000, effectively
      0022EC 8F FA            [24]  637 	mov	_CCAP0H,r7
                                    638 ;	main.c:33: IE = IE | 0x40; // Start interrupts
      0022EE 43 A8 40         [24]  639 	orl	_IE,#0x40
                                    640 ;	main.c:34: }
      0022F1 D0 D0            [24]  641 	pop	psw
      0022F3 D0 04            [24]  642 	pop	ar4
      0022F5 D0 05            [24]  643 	pop	ar5
      0022F7 D0 06            [24]  644 	pop	ar6
      0022F9 D0 07            [24]  645 	pop	ar7
      0022FB D0 E0            [24]  646 	pop	acc
      0022FD 32               [24]  647 	reti
                                    648 ;	eliminated unneeded push/pop dpl
                                    649 ;	eliminated unneeded push/pop dph
                                    650 ;	eliminated unneeded push/pop b
                                    651 ;------------------------------------------------------------
                                    652 ;Allocation info for local variables in function 'delay'
                                    653 ;------------------------------------------------------------
                                    654 ;i                         Allocated with name '_delay_i_65536_19'
                                    655 ;------------------------------------------------------------
                                    656 ;	main.c:35: void delay()
                                    657 ;	-----------------------------------------
                                    658 ;	 function delay
                                    659 ;	-----------------------------------------
      0022FE                        660 _delay:
                                    661 ;	main.c:37: while(i!=1000)
      0022FE 7E 00            [12]  662 	mov	r6,#0x00
      002300 7F 00            [12]  663 	mov	r7,#0x00
      002302                        664 00101$:
      002302 BE E8 04         [24]  665 	cjne	r6,#0xe8,00115$
      002305 BF 03 01         [24]  666 	cjne	r7,#0x03,00115$
      002308 22               [24]  667 	ret
      002309                        668 00115$:
                                    669 ;	main.c:39: i++;
      002309 0E               [12]  670 	inc	r6
      00230A BE 00 F5         [24]  671 	cjne	r6,#0x00,00101$
      00230D 0F               [12]  672 	inc	r7
                                    673 ;	main.c:41: }
      00230E 80 F2            [24]  674 	sjmp	00101$
                                    675 ;------------------------------------------------------------
                                    676 ;Allocation info for local variables in function 'WtdRef'
                                    677 ;------------------------------------------------------------
                                    678 ;	main.c:42: void WtdRef()
                                    679 ;	-----------------------------------------
                                    680 ;	 function WtdRef
                                    681 ;	-----------------------------------------
      002310                        682 _WtdRef:
                                    683 ;	main.c:44: IE = IE & 0xBF;
      002310 53 A8 BF         [24]  684 	anl	_IE,#0xbf
                                    685 ;	main.c:45: CCAP4L = 0x00;
      002313 75 EE 00         [24]  686 	mov	_CCAP4L,#0x00
                                    687 ;	main.c:46: CCAP4H = CH;
      002316 85 F9 FE         [24]  688 	mov	_CCAP4H,_CH
                                    689 ;	main.c:47: IE = IE | 0x40;
      002319 43 A8 40         [24]  690 	orl	_IE,#0x40
                                    691 ;	main.c:49: }
      00231C 22               [24]  692 	ret
                                    693 ;------------------------------------------------------------
                                    694 ;Allocation info for local variables in function 'main'
                                    695 ;------------------------------------------------------------
                                    696 ;	main.c:50: void main(void)
                                    697 ;	-----------------------------------------
                                    698 ;	 function main
                                    699 ;	-----------------------------------------
      00231D                        700 _main:
                                    701 ;	main.c:55: CH=0;
      00231D 75 F9 00         [24]  702 	mov	_CH,#0x00
                                    703 ;	main.c:56: CL=0;
      002320 75 E9 00         [24]  704 	mov	_CL,#0x00
                                    705 ;	main.c:57: P1_4=0;
                                    706 ;	assignBit
      002323 C2 94            [12]  707 	clr	_P1_4
                                    708 ;	main.c:58: CMOD = 0x43;
      002325 75 D9 43         [24]  709 	mov	_CMOD,#0x43
                                    710 ;	main.c:59: CCAP0L = 0x20; // Set compare limit
      002328 75 EA 20         [24]  711 	mov	_CCAP0L,#0x20
                                    712 ;	main.c:60: CCAP0H = 0x4E;
      00232B 75 FA 4E         [24]  713 	mov	_CCAP0H,#0x4e
                                    714 ;	main.c:61: CCAPM0 = 0x4D; // Set Modules zero for 16bit Timer mode.
      00232E 75 DA 4D         [24]  715 	mov	_CCAPM0,#0x4d
                                    716 ;	main.c:62: CCAP2L = 0x40;
      002331 75 EC 40         [24]  717 	mov	_CCAP2L,#0x40
                                    718 ;	main.c:63: CCAP2H = 0x8D;
      002334 75 FC 8D         [24]  719 	mov	_CCAP2H,#0x8d
                                    720 ;	main.c:64: CCAPM2= 0x42;
      002337 75 DC 42         [24]  721 	mov	_CCAPM2,#0x42
                                    722 ;	main.c:65: CCAP4L = 0xFF;
      00233A 75 EE FF         [24]  723 	mov	_CCAP4L,#0xff
                                    724 ;	main.c:66: CCAP4H = 0xFF;
      00233D 75 FE FF         [24]  725 	mov	_CCAP4H,#0xff
                                    726 ;	main.c:67: CCAPM4 = 0x4C;
      002340 75 DE 4C         [24]  727 	mov	_CCAPM4,#0x4c
                                    728 ;	main.c:68: IE=0xC0;
      002343 75 A8 C0         [24]  729 	mov	_IE,#0xc0
                                    730 ;	main.c:69: CR=1;
                                    731 ;	assignBit
      002346 D2 DE            [12]  732 	setb	_CR
                                    733 ;	main.c:70: while(1)
      002348                        734 00102$:
                                    735 ;	main.c:72: WtdRef();
      002348 12 23 10         [24]  736 	lcall	_WtdRef
                                    737 ;	main.c:73: delay();
      00234B 12 22 FE         [24]  738 	lcall	_delay
                                    739 ;	main.c:75: }
      00234E 80 F8            [24]  740 	sjmp	00102$
                                    741 	.area CSEG    (CODE)
                                    742 	.area CONST   (CODE)
                                    743 	.area XINIT   (CODE)
                                    744 	.area CABS    (ABS,CODE)
