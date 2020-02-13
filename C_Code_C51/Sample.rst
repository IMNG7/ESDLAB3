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
                                     12 	.globl _free_all
                                     13 	.globl _display_buffers
                                     14 	.globl _delete_buffer
                                     15 	.globl _add_buffer
                                     16 	.globl _getstr
                                     17 	.globl _uartinit
                                     18 	.globl _delay
                                     19 	.globl _strtola
                                     20 	.globl _dataout
                                     21 	.globl _free
                                     22 	.globl _malloc
                                     23 	.globl _printf_tiny
                                     24 	.globl _printf
                                     25 	.globl _printf_small
                                     26 	.globl _TF1
                                     27 	.globl _TR1
                                     28 	.globl _TF0
                                     29 	.globl _TR0
                                     30 	.globl _IE1
                                     31 	.globl _IT1
                                     32 	.globl _IE0
                                     33 	.globl _IT0
                                     34 	.globl _SM0
                                     35 	.globl _SM1
                                     36 	.globl _SM2
                                     37 	.globl _REN
                                     38 	.globl _TB8
                                     39 	.globl _RB8
                                     40 	.globl _TI
                                     41 	.globl _RI
                                     42 	.globl _CY
                                     43 	.globl _AC
                                     44 	.globl _F0
                                     45 	.globl _RS1
                                     46 	.globl _RS0
                                     47 	.globl _OV
                                     48 	.globl _F1
                                     49 	.globl _P
                                     50 	.globl _RD
                                     51 	.globl _WR
                                     52 	.globl _T1
                                     53 	.globl _T0
                                     54 	.globl _INT1
                                     55 	.globl _INT0
                                     56 	.globl _TXD0
                                     57 	.globl _TXD
                                     58 	.globl _RXD0
                                     59 	.globl _RXD
                                     60 	.globl _P3_7
                                     61 	.globl _P3_6
                                     62 	.globl _P3_5
                                     63 	.globl _P3_4
                                     64 	.globl _P3_3
                                     65 	.globl _P3_2
                                     66 	.globl _P3_1
                                     67 	.globl _P3_0
                                     68 	.globl _P2_7
                                     69 	.globl _P2_6
                                     70 	.globl _P2_5
                                     71 	.globl _P2_4
                                     72 	.globl _P2_3
                                     73 	.globl _P2_2
                                     74 	.globl _P2_1
                                     75 	.globl _P2_0
                                     76 	.globl _P1_7
                                     77 	.globl _P1_6
                                     78 	.globl _P1_5
                                     79 	.globl _P1_4
                                     80 	.globl _P1_3
                                     81 	.globl _P1_2
                                     82 	.globl _P1_1
                                     83 	.globl _P1_0
                                     84 	.globl _P0_7
                                     85 	.globl _P0_6
                                     86 	.globl _P0_5
                                     87 	.globl _P0_4
                                     88 	.globl _P0_3
                                     89 	.globl _P0_2
                                     90 	.globl _P0_1
                                     91 	.globl _P0_0
                                     92 	.globl _PS
                                     93 	.globl _PT1
                                     94 	.globl _PX1
                                     95 	.globl _PT0
                                     96 	.globl _PX0
                                     97 	.globl _EA
                                     98 	.globl _ES
                                     99 	.globl _ET1
                                    100 	.globl _EX1
                                    101 	.globl _ET0
                                    102 	.globl _EX0
                                    103 	.globl _BREG_F7
                                    104 	.globl _BREG_F6
                                    105 	.globl _BREG_F5
                                    106 	.globl _BREG_F4
                                    107 	.globl _BREG_F3
                                    108 	.globl _BREG_F2
                                    109 	.globl _BREG_F1
                                    110 	.globl _BREG_F0
                                    111 	.globl _P5_7
                                    112 	.globl _P5_6
                                    113 	.globl _P5_5
                                    114 	.globl _P5_4
                                    115 	.globl _P5_3
                                    116 	.globl _P5_2
                                    117 	.globl _P5_1
                                    118 	.globl _P5_0
                                    119 	.globl _P4_7
                                    120 	.globl _P4_6
                                    121 	.globl _P4_5
                                    122 	.globl _P4_4
                                    123 	.globl _P4_3
                                    124 	.globl _P4_2
                                    125 	.globl _P4_1
                                    126 	.globl _P4_0
                                    127 	.globl _PX0L
                                    128 	.globl _PT0L
                                    129 	.globl _PX1L
                                    130 	.globl _PT1L
                                    131 	.globl _PSL
                                    132 	.globl _PT2L
                                    133 	.globl _PPCL
                                    134 	.globl _EC
                                    135 	.globl _CCF0
                                    136 	.globl _CCF1
                                    137 	.globl _CCF2
                                    138 	.globl _CCF3
                                    139 	.globl _CCF4
                                    140 	.globl _CR
                                    141 	.globl _CF
                                    142 	.globl _TF2
                                    143 	.globl _EXF2
                                    144 	.globl _RCLK
                                    145 	.globl _TCLK
                                    146 	.globl _EXEN2
                                    147 	.globl _TR2
                                    148 	.globl _C_T2
                                    149 	.globl _CP_RL2
                                    150 	.globl _T2CON_7
                                    151 	.globl _T2CON_6
                                    152 	.globl _T2CON_5
                                    153 	.globl _T2CON_4
                                    154 	.globl _T2CON_3
                                    155 	.globl _T2CON_2
                                    156 	.globl _T2CON_1
                                    157 	.globl _T2CON_0
                                    158 	.globl _PT2
                                    159 	.globl _ET2
                                    160 	.globl _TMOD
                                    161 	.globl _TL1
                                    162 	.globl _TL0
                                    163 	.globl _TH1
                                    164 	.globl _TH0
                                    165 	.globl _TCON
                                    166 	.globl _SP
                                    167 	.globl _SCON
                                    168 	.globl _SBUF0
                                    169 	.globl _SBUF
                                    170 	.globl _PSW
                                    171 	.globl _PCON
                                    172 	.globl _P3
                                    173 	.globl _P2
                                    174 	.globl _P1
                                    175 	.globl _P0
                                    176 	.globl _IP
                                    177 	.globl _IE
                                    178 	.globl _DP0L
                                    179 	.globl _DPL
                                    180 	.globl _DP0H
                                    181 	.globl _DPH
                                    182 	.globl _B
                                    183 	.globl _ACC
                                    184 	.globl _EECON
                                    185 	.globl _KBF
                                    186 	.globl _KBE
                                    187 	.globl _KBLS
                                    188 	.globl _BRL
                                    189 	.globl _BDRCON
                                    190 	.globl _T2MOD
                                    191 	.globl _SPDAT
                                    192 	.globl _SPSTA
                                    193 	.globl _SPCON
                                    194 	.globl _SADEN
                                    195 	.globl _SADDR
                                    196 	.globl _WDTPRG
                                    197 	.globl _WDTRST
                                    198 	.globl _P5
                                    199 	.globl _P4
                                    200 	.globl _IPH1
                                    201 	.globl _IPL1
                                    202 	.globl _IPH0
                                    203 	.globl _IPL0
                                    204 	.globl _IEN1
                                    205 	.globl _IEN0
                                    206 	.globl _CMOD
                                    207 	.globl _CL
                                    208 	.globl _CH
                                    209 	.globl _CCON
                                    210 	.globl _CCAPM4
                                    211 	.globl _CCAPM3
                                    212 	.globl _CCAPM2
                                    213 	.globl _CCAPM1
                                    214 	.globl _CCAPM0
                                    215 	.globl _CCAP4L
                                    216 	.globl _CCAP3L
                                    217 	.globl _CCAP2L
                                    218 	.globl _CCAP1L
                                    219 	.globl _CCAP0L
                                    220 	.globl _CCAP4H
                                    221 	.globl _CCAP3H
                                    222 	.globl _CCAP2H
                                    223 	.globl _CCAP1H
                                    224 	.globl _CCAP0H
                                    225 	.globl _CKCON1
                                    226 	.globl _CKCON0
                                    227 	.globl _CKRL
                                    228 	.globl _AUXR1
                                    229 	.globl _AUXR
                                    230 	.globl _TH2
                                    231 	.globl _TL2
                                    232 	.globl _RCAP2H
                                    233 	.globl _RCAP2L
                                    234 	.globl _T2CON
                                    235 	.globl _Buffer_Num
                                    236 	.globl _Storage_Char
                                    237 	.globl _Total_Char
                                    238 	.globl _Buffer_Size
                                    239 	.globl _end_address
                                    240 	.globl _base_address
                                    241 	.globl _buffer
                                    242 	.globl _putchar
                                    243 	.globl _getchar
                                    244 ;--------------------------------------------------------
                                    245 ; special function registers
                                    246 ;--------------------------------------------------------
                                    247 	.area RSEG    (ABS,DATA)
      000000                        248 	.org 0x0000
                           0000C8   249 _T2CON	=	0x00c8
                           0000CA   250 _RCAP2L	=	0x00ca
                           0000CB   251 _RCAP2H	=	0x00cb
                           0000CC   252 _TL2	=	0x00cc
                           0000CD   253 _TH2	=	0x00cd
                           00008E   254 _AUXR	=	0x008e
                           0000A2   255 _AUXR1	=	0x00a2
                           000097   256 _CKRL	=	0x0097
                           00008F   257 _CKCON0	=	0x008f
                           0000AF   258 _CKCON1	=	0x00af
                           0000FA   259 _CCAP0H	=	0x00fa
                           0000FB   260 _CCAP1H	=	0x00fb
                           0000FC   261 _CCAP2H	=	0x00fc
                           0000FD   262 _CCAP3H	=	0x00fd
                           0000FE   263 _CCAP4H	=	0x00fe
                           0000EA   264 _CCAP0L	=	0x00ea
                           0000EB   265 _CCAP1L	=	0x00eb
                           0000EC   266 _CCAP2L	=	0x00ec
                           0000ED   267 _CCAP3L	=	0x00ed
                           0000EE   268 _CCAP4L	=	0x00ee
                           0000DA   269 _CCAPM0	=	0x00da
                           0000DB   270 _CCAPM1	=	0x00db
                           0000DC   271 _CCAPM2	=	0x00dc
                           0000DD   272 _CCAPM3	=	0x00dd
                           0000DE   273 _CCAPM4	=	0x00de
                           0000D8   274 _CCON	=	0x00d8
                           0000F9   275 _CH	=	0x00f9
                           0000E9   276 _CL	=	0x00e9
                           0000D9   277 _CMOD	=	0x00d9
                           0000A8   278 _IEN0	=	0x00a8
                           0000B1   279 _IEN1	=	0x00b1
                           0000B8   280 _IPL0	=	0x00b8
                           0000B7   281 _IPH0	=	0x00b7
                           0000B2   282 _IPL1	=	0x00b2
                           0000B3   283 _IPH1	=	0x00b3
                           0000C0   284 _P4	=	0x00c0
                           0000E8   285 _P5	=	0x00e8
                           0000A6   286 _WDTRST	=	0x00a6
                           0000A7   287 _WDTPRG	=	0x00a7
                           0000A9   288 _SADDR	=	0x00a9
                           0000B9   289 _SADEN	=	0x00b9
                           0000C3   290 _SPCON	=	0x00c3
                           0000C4   291 _SPSTA	=	0x00c4
                           0000C5   292 _SPDAT	=	0x00c5
                           0000C9   293 _T2MOD	=	0x00c9
                           00009B   294 _BDRCON	=	0x009b
                           00009A   295 _BRL	=	0x009a
                           00009C   296 _KBLS	=	0x009c
                           00009D   297 _KBE	=	0x009d
                           00009E   298 _KBF	=	0x009e
                           0000D2   299 _EECON	=	0x00d2
                           0000E0   300 _ACC	=	0x00e0
                           0000F0   301 _B	=	0x00f0
                           000083   302 _DPH	=	0x0083
                           000083   303 _DP0H	=	0x0083
                           000082   304 _DPL	=	0x0082
                           000082   305 _DP0L	=	0x0082
                           0000A8   306 _IE	=	0x00a8
                           0000B8   307 _IP	=	0x00b8
                           000080   308 _P0	=	0x0080
                           000090   309 _P1	=	0x0090
                           0000A0   310 _P2	=	0x00a0
                           0000B0   311 _P3	=	0x00b0
                           000087   312 _PCON	=	0x0087
                           0000D0   313 _PSW	=	0x00d0
                           000099   314 _SBUF	=	0x0099
                           000099   315 _SBUF0	=	0x0099
                           000098   316 _SCON	=	0x0098
                           000081   317 _SP	=	0x0081
                           000088   318 _TCON	=	0x0088
                           00008C   319 _TH0	=	0x008c
                           00008D   320 _TH1	=	0x008d
                           00008A   321 _TL0	=	0x008a
                           00008B   322 _TL1	=	0x008b
                           000089   323 _TMOD	=	0x0089
                                    324 ;--------------------------------------------------------
                                    325 ; special function bits
                                    326 ;--------------------------------------------------------
                                    327 	.area RSEG    (ABS,DATA)
      000000                        328 	.org 0x0000
                           0000AD   329 _ET2	=	0x00ad
                           0000BD   330 _PT2	=	0x00bd
                           0000C8   331 _T2CON_0	=	0x00c8
                           0000C9   332 _T2CON_1	=	0x00c9
                           0000CA   333 _T2CON_2	=	0x00ca
                           0000CB   334 _T2CON_3	=	0x00cb
                           0000CC   335 _T2CON_4	=	0x00cc
                           0000CD   336 _T2CON_5	=	0x00cd
                           0000CE   337 _T2CON_6	=	0x00ce
                           0000CF   338 _T2CON_7	=	0x00cf
                           0000C8   339 _CP_RL2	=	0x00c8
                           0000C9   340 _C_T2	=	0x00c9
                           0000CA   341 _TR2	=	0x00ca
                           0000CB   342 _EXEN2	=	0x00cb
                           0000CC   343 _TCLK	=	0x00cc
                           0000CD   344 _RCLK	=	0x00cd
                           0000CE   345 _EXF2	=	0x00ce
                           0000CF   346 _TF2	=	0x00cf
                           0000DF   347 _CF	=	0x00df
                           0000DE   348 _CR	=	0x00de
                           0000DC   349 _CCF4	=	0x00dc
                           0000DB   350 _CCF3	=	0x00db
                           0000DA   351 _CCF2	=	0x00da
                           0000D9   352 _CCF1	=	0x00d9
                           0000D8   353 _CCF0	=	0x00d8
                           0000AE   354 _EC	=	0x00ae
                           0000BE   355 _PPCL	=	0x00be
                           0000BD   356 _PT2L	=	0x00bd
                           0000BC   357 _PSL	=	0x00bc
                           0000BB   358 _PT1L	=	0x00bb
                           0000BA   359 _PX1L	=	0x00ba
                           0000B9   360 _PT0L	=	0x00b9
                           0000B8   361 _PX0L	=	0x00b8
                           0000C0   362 _P4_0	=	0x00c0
                           0000C1   363 _P4_1	=	0x00c1
                           0000C2   364 _P4_2	=	0x00c2
                           0000C3   365 _P4_3	=	0x00c3
                           0000C4   366 _P4_4	=	0x00c4
                           0000C5   367 _P4_5	=	0x00c5
                           0000C6   368 _P4_6	=	0x00c6
                           0000C7   369 _P4_7	=	0x00c7
                           0000E8   370 _P5_0	=	0x00e8
                           0000E9   371 _P5_1	=	0x00e9
                           0000EA   372 _P5_2	=	0x00ea
                           0000EB   373 _P5_3	=	0x00eb
                           0000EC   374 _P5_4	=	0x00ec
                           0000ED   375 _P5_5	=	0x00ed
                           0000EE   376 _P5_6	=	0x00ee
                           0000EF   377 _P5_7	=	0x00ef
                           0000F0   378 _BREG_F0	=	0x00f0
                           0000F1   379 _BREG_F1	=	0x00f1
                           0000F2   380 _BREG_F2	=	0x00f2
                           0000F3   381 _BREG_F3	=	0x00f3
                           0000F4   382 _BREG_F4	=	0x00f4
                           0000F5   383 _BREG_F5	=	0x00f5
                           0000F6   384 _BREG_F6	=	0x00f6
                           0000F7   385 _BREG_F7	=	0x00f7
                           0000A8   386 _EX0	=	0x00a8
                           0000A9   387 _ET0	=	0x00a9
                           0000AA   388 _EX1	=	0x00aa
                           0000AB   389 _ET1	=	0x00ab
                           0000AC   390 _ES	=	0x00ac
                           0000AF   391 _EA	=	0x00af
                           0000B8   392 _PX0	=	0x00b8
                           0000B9   393 _PT0	=	0x00b9
                           0000BA   394 _PX1	=	0x00ba
                           0000BB   395 _PT1	=	0x00bb
                           0000BC   396 _PS	=	0x00bc
                           000080   397 _P0_0	=	0x0080
                           000081   398 _P0_1	=	0x0081
                           000082   399 _P0_2	=	0x0082
                           000083   400 _P0_3	=	0x0083
                           000084   401 _P0_4	=	0x0084
                           000085   402 _P0_5	=	0x0085
                           000086   403 _P0_6	=	0x0086
                           000087   404 _P0_7	=	0x0087
                           000090   405 _P1_0	=	0x0090
                           000091   406 _P1_1	=	0x0091
                           000092   407 _P1_2	=	0x0092
                           000093   408 _P1_3	=	0x0093
                           000094   409 _P1_4	=	0x0094
                           000095   410 _P1_5	=	0x0095
                           000096   411 _P1_6	=	0x0096
                           000097   412 _P1_7	=	0x0097
                           0000A0   413 _P2_0	=	0x00a0
                           0000A1   414 _P2_1	=	0x00a1
                           0000A2   415 _P2_2	=	0x00a2
                           0000A3   416 _P2_3	=	0x00a3
                           0000A4   417 _P2_4	=	0x00a4
                           0000A5   418 _P2_5	=	0x00a5
                           0000A6   419 _P2_6	=	0x00a6
                           0000A7   420 _P2_7	=	0x00a7
                           0000B0   421 _P3_0	=	0x00b0
                           0000B1   422 _P3_1	=	0x00b1
                           0000B2   423 _P3_2	=	0x00b2
                           0000B3   424 _P3_3	=	0x00b3
                           0000B4   425 _P3_4	=	0x00b4
                           0000B5   426 _P3_5	=	0x00b5
                           0000B6   427 _P3_6	=	0x00b6
                           0000B7   428 _P3_7	=	0x00b7
                           0000B0   429 _RXD	=	0x00b0
                           0000B0   430 _RXD0	=	0x00b0
                           0000B1   431 _TXD	=	0x00b1
                           0000B1   432 _TXD0	=	0x00b1
                           0000B2   433 _INT0	=	0x00b2
                           0000B3   434 _INT1	=	0x00b3
                           0000B4   435 _T0	=	0x00b4
                           0000B5   436 _T1	=	0x00b5
                           0000B6   437 _WR	=	0x00b6
                           0000B7   438 _RD	=	0x00b7
                           0000D0   439 _P	=	0x00d0
                           0000D1   440 _F1	=	0x00d1
                           0000D2   441 _OV	=	0x00d2
                           0000D3   442 _RS0	=	0x00d3
                           0000D4   443 _RS1	=	0x00d4
                           0000D5   444 _F0	=	0x00d5
                           0000D6   445 _AC	=	0x00d6
                           0000D7   446 _CY	=	0x00d7
                           000098   447 _RI	=	0x0098
                           000099   448 _TI	=	0x0099
                           00009A   449 _RB8	=	0x009a
                           00009B   450 _TB8	=	0x009b
                           00009C   451 _REN	=	0x009c
                           00009D   452 _SM2	=	0x009d
                           00009E   453 _SM1	=	0x009e
                           00009F   454 _SM0	=	0x009f
                           000088   455 _IT0	=	0x0088
                           000089   456 _IE0	=	0x0089
                           00008A   457 _IT1	=	0x008a
                           00008B   458 _IE1	=	0x008b
                           00008C   459 _TR0	=	0x008c
                           00008D   460 _TF0	=	0x008d
                           00008E   461 _TR1	=	0x008e
                           00008F   462 _TF1	=	0x008f
                                    463 ;--------------------------------------------------------
                                    464 ; overlayable register banks
                                    465 ;--------------------------------------------------------
                                    466 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        467 	.ds 8
                                    468 ;--------------------------------------------------------
                                    469 ; internal ram data
                                    470 ;--------------------------------------------------------
                                    471 	.area DSEG    (DATA)
      000008                        472 _strtola_sloc0_1_0:
      000008                        473 	.ds 2
      00000A                        474 _display_buffers_sloc0_1_0:
      00000A                        475 	.ds 2
      00000C                        476 _display_buffers_sloc1_1_0:
      00000C                        477 	.ds 2
                                    478 ;--------------------------------------------------------
                                    479 ; overlayable items in internal ram 
                                    480 ;--------------------------------------------------------
                                    481 ;--------------------------------------------------------
                                    482 ; Stack segment in internal ram 
                                    483 ;--------------------------------------------------------
                                    484 	.area	SSEG
      00003B                        485 __start__stack:
      00003B                        486 	.ds	1
                                    487 
                                    488 ;--------------------------------------------------------
                                    489 ; indirectly addressable internal ram data
                                    490 ;--------------------------------------------------------
                                    491 	.area ISEG    (DATA)
                                    492 ;--------------------------------------------------------
                                    493 ; absolute internal ram data
                                    494 ;--------------------------------------------------------
                                    495 	.area IABS    (ABS,DATA)
                                    496 	.area IABS    (ABS,DATA)
                                    497 ;--------------------------------------------------------
                                    498 ; bit data
                                    499 ;--------------------------------------------------------
                                    500 	.area BSEG    (BIT)
                                    501 ;--------------------------------------------------------
                                    502 ; paged external ram data
                                    503 ;--------------------------------------------------------
                                    504 	.area PSEG    (PAG,XDATA)
                                    505 ;--------------------------------------------------------
                                    506 ; external ram data
                                    507 ;--------------------------------------------------------
                                    508 	.area XSEG    (XDATA)
      0013A0                        509 _dataout_a_65536_41:
      0013A0                        510 	.ds 2
      0013A2                        511 _strtola_q_65536_43:
      0013A2                        512 	.ds 3
      0013A5                        513 _putchar_c_65536_49:
      0013A5                        514 	.ds 2
      0013A7                        515 _getstr_buffer_char_65537_53:
      0013A7                        516 	.ds 20
      0013BB                        517 _display_buffers_a_65536_64:
      0013BB                        518 	.ds 1
      0013BC                        519 _main_all_65536_77:
      0013BC                        520 	.ds 1
      0013BD                        521 _main_i_65536_77:
      0013BD                        522 	.ds 2
                                    523 ;--------------------------------------------------------
                                    524 ; absolute external ram data
                                    525 ;--------------------------------------------------------
                                    526 	.area XABS    (ABS,XDATA)
                                    527 ;--------------------------------------------------------
                                    528 ; external initialized ram data
                                    529 ;--------------------------------------------------------
                                    530 	.area XISEG   (XDATA)
      001451                        531 _buffer::
      001451                        532 	.ds 20
      001465                        533 _base_address::
      001465                        534 	.ds 20
      001479                        535 _end_address::
      001479                        536 	.ds 20
      00148D                        537 _Buffer_Size::
      00148D                        538 	.ds 20
      0014A1                        539 _Total_Char::
      0014A1                        540 	.ds 1
      0014A2                        541 _Storage_Char::
      0014A2                        542 	.ds 10
      0014AC                        543 _Buffer_Num::
      0014AC                        544 	.ds 1
                                    545 	.area HOME    (CODE)
                                    546 	.area GSINIT0 (CODE)
                                    547 	.area GSINIT1 (CODE)
                                    548 	.area GSINIT2 (CODE)
                                    549 	.area GSINIT3 (CODE)
                                    550 	.area GSINIT4 (CODE)
                                    551 	.area GSINIT5 (CODE)
                                    552 	.area GSINIT  (CODE)
                                    553 	.area GSFINAL (CODE)
                                    554 	.area CSEG    (CODE)
                                    555 ;--------------------------------------------------------
                                    556 ; interrupt vector 
                                    557 ;--------------------------------------------------------
                                    558 	.area HOME    (CODE)
      002200                        559 __interrupt_vect:
      002200 02 22 06         [24]  560 	ljmp	__sdcc_gsinit_startup
                                    561 ;--------------------------------------------------------
                                    562 ; global & static initialisations
                                    563 ;--------------------------------------------------------
                                    564 	.area HOME    (CODE)
                                    565 	.area GSINIT  (CODE)
                                    566 	.area GSFINAL (CODE)
                                    567 	.area GSINIT  (CODE)
                                    568 	.globl __sdcc_gsinit_startup
                                    569 	.globl __sdcc_program_startup
                                    570 	.globl __start__stack
                                    571 	.globl __mcs51_genXINIT
                                    572 	.globl __mcs51_genXRAMCLEAR
                                    573 	.globl __mcs51_genRAMCLEAR
                                    574 	.area GSFINAL (CODE)
      002265 02 22 03         [24]  575 	ljmp	__sdcc_program_startup
                                    576 ;--------------------------------------------------------
                                    577 ; Home
                                    578 ;--------------------------------------------------------
                                    579 	.area HOME    (CODE)
                                    580 	.area HOME    (CODE)
      002203                        581 __sdcc_program_startup:
      002203 02 28 D5         [24]  582 	ljmp	_main
                                    583 ;	return from main will return to caller
                                    584 ;--------------------------------------------------------
                                    585 ; code
                                    586 ;--------------------------------------------------------
                                    587 	.area CSEG    (CODE)
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'dataout'
                                    590 ;------------------------------------------------------------
                                    591 ;a                         Allocated with name '_dataout_a_65536_41'
                                    592 ;ptr                       Allocated with name '_dataout_ptr_65536_42'
                                    593 ;------------------------------------------------------------
                                    594 ;	main.c:27: void dataout(int a)
                                    595 ;	-----------------------------------------
                                    596 ;	 function dataout
                                    597 ;	-----------------------------------------
      002268                        598 _dataout:
                           000007   599 	ar7 = 0x07
                           000006   600 	ar6 = 0x06
                           000005   601 	ar5 = 0x05
                           000004   602 	ar4 = 0x04
                           000003   603 	ar3 = 0x03
                           000002   604 	ar2 = 0x02
                           000001   605 	ar1 = 0x01
                           000000   606 	ar0 = 0x00
      002268 AF 83            [24]  607 	mov	r7,dph
      00226A E5 82            [12]  608 	mov	a,dpl
      00226C 90 13 A0         [24]  609 	mov	dptr,#_dataout_a_65536_41
      00226F F0               [24]  610 	movx	@dptr,a
      002270 EF               [12]  611 	mov	a,r7
      002271 A3               [24]  612 	inc	dptr
      002272 F0               [24]  613 	movx	@dptr,a
                                    614 ;	main.c:31: *ptr=a;
      002273 90 13 A0         [24]  615 	mov	dptr,#_dataout_a_65536_41
      002276 E0               [24]  616 	movx	a,@dptr
      002277 FE               [12]  617 	mov	r6,a
      002278 A3               [24]  618 	inc	dptr
      002279 E0               [24]  619 	movx	a,@dptr
      00227A FF               [12]  620 	mov	r7,a
      00227B 90 FF FF         [24]  621 	mov	dptr,#0xffff
      00227E 75 F0 00         [24]  622 	mov	b,#0x00
      002281 EE               [12]  623 	mov	a,r6
      002282 12 2C AA         [24]  624 	lcall	__gptrput
      002285 A3               [24]  625 	inc	dptr
      002286 EF               [12]  626 	mov	a,r7
                                    627 ;	main.c:32: }
      002287 02 2C AA         [24]  628 	ljmp	__gptrput
                                    629 ;------------------------------------------------------------
                                    630 ;Allocation info for local variables in function 'strtola'
                                    631 ;------------------------------------------------------------
                                    632 ;res                       Allocated to registers r6 r7 
                                    633 ;sloc0                     Allocated with name '_strtola_sloc0_1_0'
                                    634 ;q                         Allocated with name '_strtola_q_65536_43'
                                    635 ;i                         Allocated with name '_strtola_i_65536_44'
                                    636 ;a                         Allocated with name '_strtola_a_65536_44'
                                    637 ;------------------------------------------------------------
                                    638 ;	main.c:45: uint16_t strtola(int *q)
                                    639 ;	-----------------------------------------
                                    640 ;	 function strtola
                                    641 ;	-----------------------------------------
      00228A                        642 _strtola:
      00228A AF F0            [24]  643 	mov	r7,b
      00228C AE 83            [24]  644 	mov	r6,dph
      00228E E5 82            [12]  645 	mov	a,dpl
      002290 90 13 A2         [24]  646 	mov	dptr,#_strtola_q_65536_43
      002293 F0               [24]  647 	movx	@dptr,a
      002294 EE               [12]  648 	mov	a,r6
      002295 A3               [24]  649 	inc	dptr
      002296 F0               [24]  650 	movx	@dptr,a
      002297 EF               [12]  651 	mov	a,r7
      002298 A3               [24]  652 	inc	dptr
      002299 F0               [24]  653 	movx	@dptr,a
                                    654 ;	main.c:47: __data uint16_t res=0;
      00229A 7E 00            [12]  655 	mov	r6,#0x00
      00229C 7F 00            [12]  656 	mov	r7,#0x00
                                    657 ;	main.c:48: do
      00229E 90 13 A2         [24]  658 	mov	dptr,#_strtola_q_65536_43
      0022A1 E0               [24]  659 	movx	a,@dptr
      0022A2 FB               [12]  660 	mov	r3,a
      0022A3 A3               [24]  661 	inc	dptr
      0022A4 E0               [24]  662 	movx	a,@dptr
      0022A5 FC               [12]  663 	mov	r4,a
      0022A6 A3               [24]  664 	inc	dptr
      0022A7 E0               [24]  665 	movx	a,@dptr
      0022A8 FD               [12]  666 	mov	r5,a
      0022A9                        667 00101$:
                                    668 ;	main.c:49: {   a=*q-'0';
      0022A9 8B 82            [24]  669 	mov	dpl,r3
      0022AB 8C 83            [24]  670 	mov	dph,r4
      0022AD 8D F0            [24]  671 	mov	b,r5
      0022AF 12 3D 8B         [24]  672 	lcall	__gptrget
      0022B2 24 D0            [12]  673 	add	a,#0xd0
      0022B4 FA               [12]  674 	mov	r2,a
                                    675 ;	main.c:50: res=(res*10)+a;         // Logic from C99 basic itoa function
      0022B5 90 13 D1         [24]  676 	mov	dptr,#__mulint_PARM_2
      0022B8 EE               [12]  677 	mov	a,r6
      0022B9 F0               [24]  678 	movx	@dptr,a
      0022BA EF               [12]  679 	mov	a,r7
      0022BB A3               [24]  680 	inc	dptr
      0022BC F0               [24]  681 	movx	@dptr,a
      0022BD 90 00 0A         [24]  682 	mov	dptr,#0x000a
      0022C0 C0 05            [24]  683 	push	ar5
      0022C2 C0 04            [24]  684 	push	ar4
      0022C4 C0 03            [24]  685 	push	ar3
      0022C6 C0 02            [24]  686 	push	ar2
      0022C8 12 2F 73         [24]  687 	lcall	__mulint
      0022CB 85 82 08         [24]  688 	mov	_strtola_sloc0_1_0,dpl
      0022CE 85 83 09         [24]  689 	mov	(_strtola_sloc0_1_0 + 1),dph
      0022D1 D0 02            [24]  690 	pop	ar2
      0022D3 D0 03            [24]  691 	pop	ar3
      0022D5 D0 04            [24]  692 	pop	ar4
      0022D7 D0 05            [24]  693 	pop	ar5
      0022D9 8A 01            [24]  694 	mov	ar1,r2
      0022DB 7A 00            [12]  695 	mov	r2,#0x00
      0022DD E9               [12]  696 	mov	a,r1
      0022DE 25 08            [12]  697 	add	a,_strtola_sloc0_1_0
      0022E0 FE               [12]  698 	mov	r6,a
      0022E1 EA               [12]  699 	mov	a,r2
      0022E2 35 09            [12]  700 	addc	a,(_strtola_sloc0_1_0 + 1)
      0022E4 FF               [12]  701 	mov	r7,a
                                    702 ;	main.c:51: *q++;
      0022E5 74 02            [12]  703 	mov	a,#0x02
      0022E7 2B               [12]  704 	add	a,r3
      0022E8 FB               [12]  705 	mov	r3,a
      0022E9 E4               [12]  706 	clr	a
      0022EA 3C               [12]  707 	addc	a,r4
      0022EB FC               [12]  708 	mov	r4,a
      0022EC 90 13 A2         [24]  709 	mov	dptr,#_strtola_q_65536_43
      0022EF EB               [12]  710 	mov	a,r3
      0022F0 F0               [24]  711 	movx	@dptr,a
      0022F1 EC               [12]  712 	mov	a,r4
      0022F2 A3               [24]  713 	inc	dptr
      0022F3 F0               [24]  714 	movx	@dptr,a
      0022F4 ED               [12]  715 	mov	a,r5
      0022F5 A3               [24]  716 	inc	dptr
      0022F6 F0               [24]  717 	movx	@dptr,a
                                    718 ;	main.c:52: }while(*q!=13);
      0022F7 8B 82            [24]  719 	mov	dpl,r3
      0022F9 8C 83            [24]  720 	mov	dph,r4
      0022FB 8D F0            [24]  721 	mov	b,r5
      0022FD 12 3D 8B         [24]  722 	lcall	__gptrget
      002300 F9               [12]  723 	mov	r1,a
      002301 A3               [24]  724 	inc	dptr
      002302 12 3D 8B         [24]  725 	lcall	__gptrget
      002305 FA               [12]  726 	mov	r2,a
      002306 B9 0D A0         [24]  727 	cjne	r1,#0x0d,00101$
      002309 BA 00 9D         [24]  728 	cjne	r2,#0x00,00101$
                                    729 ;	main.c:53: return res;
      00230C 90 13 A2         [24]  730 	mov	dptr,#_strtola_q_65536_43
      00230F EB               [12]  731 	mov	a,r3
      002310 F0               [24]  732 	movx	@dptr,a
      002311 EC               [12]  733 	mov	a,r4
      002312 A3               [24]  734 	inc	dptr
      002313 F0               [24]  735 	movx	@dptr,a
      002314 ED               [12]  736 	mov	a,r5
      002315 A3               [24]  737 	inc	dptr
      002316 F0               [24]  738 	movx	@dptr,a
      002317 8E 82            [24]  739 	mov	dpl,r6
      002319 8F 83            [24]  740 	mov	dph,r7
                                    741 ;	main.c:54: }
      00231B 22               [24]  742 	ret
                                    743 ;------------------------------------------------------------
                                    744 ;Allocation info for local variables in function 'delay'
                                    745 ;------------------------------------------------------------
                                    746 ;i                         Allocated with name '_delay_i_65536_46'
                                    747 ;------------------------------------------------------------
                                    748 ;	main.c:60: void delay()
                                    749 ;	-----------------------------------------
                                    750 ;	 function delay
                                    751 ;	-----------------------------------------
      00231C                        752 _delay:
                                    753 ;	main.c:62: while(i<50000)
      00231C 7C 00            [12]  754 	mov	r4,#0x00
      00231E 7D 00            [12]  755 	mov	r5,#0x00
      002320 7E 00            [12]  756 	mov	r6,#0x00
      002322 7F 00            [12]  757 	mov	r7,#0x00
      002324                        758 00101$:
      002324 C3               [12]  759 	clr	c
      002325 EC               [12]  760 	mov	a,r4
      002326 94 50            [12]  761 	subb	a,#0x50
      002328 ED               [12]  762 	mov	a,r5
      002329 94 C3            [12]  763 	subb	a,#0xc3
      00232B EE               [12]  764 	mov	a,r6
      00232C 94 00            [12]  765 	subb	a,#0x00
      00232E EF               [12]  766 	mov	a,r7
      00232F 94 00            [12]  767 	subb	a,#0x00
      002331 50 0F            [24]  768 	jnc	00104$
                                    769 ;	main.c:64: i++;
      002333 0C               [12]  770 	inc	r4
      002334 BC 00 09         [24]  771 	cjne	r4,#0x00,00116$
      002337 0D               [12]  772 	inc	r5
      002338 BD 00 05         [24]  773 	cjne	r5,#0x00,00116$
      00233B 0E               [12]  774 	inc	r6
      00233C BE 00 E5         [24]  775 	cjne	r6,#0x00,00101$
      00233F 0F               [12]  776 	inc	r7
      002340                        777 00116$:
      002340 80 E2            [24]  778 	sjmp	00101$
      002342                        779 00104$:
                                    780 ;	main.c:66: }
      002342 22               [24]  781 	ret
                                    782 ;------------------------------------------------------------
                                    783 ;Allocation info for local variables in function 'uartinit'
                                    784 ;------------------------------------------------------------
                                    785 ;	main.c:72: void uartinit()
                                    786 ;	-----------------------------------------
                                    787 ;	 function uartinit
                                    788 ;	-----------------------------------------
      002343                        789 _uartinit:
                                    790 ;	main.c:74: TMOD = 0x20;
      002343 75 89 20         [24]  791 	mov	_TMOD,#0x20
                                    792 ;	main.c:75: SCON = 0x50;
      002346 75 98 50         [24]  793 	mov	_SCON,#0x50
                                    794 ;	main.c:76: TH1 = 0xFD;
      002349 75 8D FD         [24]  795 	mov	_TH1,#0xfd
                                    796 ;	main.c:77: TR1 =1;
                                    797 ;	assignBit
      00234C D2 8E            [12]  798 	setb	_TR1
                                    799 ;	main.c:78: }
      00234E 22               [24]  800 	ret
                                    801 ;------------------------------------------------------------
                                    802 ;Allocation info for local variables in function 'putchar'
                                    803 ;------------------------------------------------------------
                                    804 ;c                         Allocated with name '_putchar_c_65536_49'
                                    805 ;------------------------------------------------------------
                                    806 ;	main.c:84: int putchar(int c)
                                    807 ;	-----------------------------------------
                                    808 ;	 function putchar
                                    809 ;	-----------------------------------------
      00234F                        810 _putchar:
      00234F AF 83            [24]  811 	mov	r7,dph
      002351 E5 82            [12]  812 	mov	a,dpl
      002353 90 13 A5         [24]  813 	mov	dptr,#_putchar_c_65536_49
      002356 F0               [24]  814 	movx	@dptr,a
      002357 EF               [12]  815 	mov	a,r7
      002358 A3               [24]  816 	inc	dptr
      002359 F0               [24]  817 	movx	@dptr,a
                                    818 ;	main.c:86: while(!TI);                         // checking the TI interrupt bit, when it sets, the data is sent
      00235A                        819 00101$:
                                    820 ;	main.c:87: TI=0;
                                    821 ;	assignBit
      00235A 10 99 02         [24]  822 	jbc	_TI,00114$
      00235D 80 FB            [24]  823 	sjmp	00101$
      00235F                        824 00114$:
                                    825 ;	main.c:88: SBUF = c;
      00235F 90 13 A5         [24]  826 	mov	dptr,#_putchar_c_65536_49
      002362 E0               [24]  827 	movx	a,@dptr
      002363 FE               [12]  828 	mov	r6,a
      002364 A3               [24]  829 	inc	dptr
      002365 E0               [24]  830 	movx	a,@dptr
      002366 8E 99            [24]  831 	mov	_SBUF,r6
                                    832 ;	main.c:89: return 1;
      002368 90 00 01         [24]  833 	mov	dptr,#0x0001
                                    834 ;	main.c:90: }
      00236B 22               [24]  835 	ret
                                    836 ;------------------------------------------------------------
                                    837 ;Allocation info for local variables in function 'getchar'
                                    838 ;------------------------------------------------------------
                                    839 ;	main.c:96: int getchar()
                                    840 ;	-----------------------------------------
                                    841 ;	 function getchar
                                    842 ;	-----------------------------------------
      00236C                        843 _getchar:
                                    844 ;	main.c:98: while(!RI);                             // checking the RI interrupt bit, when it sets, the data is received
      00236C                        845 00101$:
                                    846 ;	main.c:99: RI=0;
                                    847 ;	assignBit
      00236C 10 98 02         [24]  848 	jbc	_RI,00114$
      00236F 80 FB            [24]  849 	sjmp	00101$
      002371                        850 00114$:
                                    851 ;	main.c:100: return SBUF;
      002371 AE 99            [24]  852 	mov	r6,_SBUF
      002373 7F 00            [12]  853 	mov	r7,#0x00
      002375 8E 82            [24]  854 	mov	dpl,r6
      002377 8F 83            [24]  855 	mov	dph,r7
                                    856 ;	main.c:101: }
      002379 22               [24]  857 	ret
                                    858 ;------------------------------------------------------------
                                    859 ;Allocation info for local variables in function 'getstr'
                                    860 ;------------------------------------------------------------
                                    861 ;buffer_char               Allocated with name '_getstr_buffer_char_65537_53'
                                    862 ;i                         Allocated with name '_getstr_i_65537_53'
                                    863 ;------------------------------------------------------------
                                    864 ;	main.c:107: int *getstr()
                                    865 ;	-----------------------------------------
                                    866 ;	 function getstr
                                    867 ;	-----------------------------------------
      00237A                        868 _getstr:
                                    869 ;	main.c:108: {   DEBUGPORT(0x01);
      00237A 90 00 01         [24]  870 	mov	dptr,#0x0001
      00237D 12 22 68         [24]  871 	lcall	_dataout
                                    872 ;	main.c:110: buffer_char[0]=getchar();
      002380 12 23 6C         [24]  873 	lcall	_getchar
      002383 AE 82            [24]  874 	mov	r6,dpl
      002385 AF 83            [24]  875 	mov	r7,dph
      002387 90 13 A7         [24]  876 	mov	dptr,#_getstr_buffer_char_65537_53
      00238A EE               [12]  877 	mov	a,r6
      00238B F0               [24]  878 	movx	@dptr,a
      00238C EF               [12]  879 	mov	a,r7
      00238D A3               [24]  880 	inc	dptr
      00238E F0               [24]  881 	movx	@dptr,a
                                    882 ;	main.c:111: do
      00238F 7E 00            [12]  883 	mov	r6,#0x00
      002391 7F 00            [12]  884 	mov	r7,#0x00
      002393                        885 00101$:
                                    886 ;	main.c:112: {   printf_tiny("%c",buffer_char[i]);     //Getting the string value of characters one by one through uart.
      002393 EE               [12]  887 	mov	a,r6
      002394 2E               [12]  888 	add	a,r6
      002395 FC               [12]  889 	mov	r4,a
      002396 EF               [12]  890 	mov	a,r7
      002397 33               [12]  891 	rlc	a
      002398 FD               [12]  892 	mov	r5,a
      002399 EC               [12]  893 	mov	a,r4
      00239A 24 A7            [12]  894 	add	a,#_getstr_buffer_char_65537_53
      00239C F5 82            [12]  895 	mov	dpl,a
      00239E ED               [12]  896 	mov	a,r5
      00239F 34 13            [12]  897 	addc	a,#(_getstr_buffer_char_65537_53 >> 8)
      0023A1 F5 83            [12]  898 	mov	dph,a
      0023A3 E0               [24]  899 	movx	a,@dptr
      0023A4 FC               [12]  900 	mov	r4,a
      0023A5 A3               [24]  901 	inc	dptr
      0023A6 E0               [24]  902 	movx	a,@dptr
      0023A7 FD               [12]  903 	mov	r5,a
      0023A8 C0 07            [24]  904 	push	ar7
      0023AA C0 06            [24]  905 	push	ar6
      0023AC C0 04            [24]  906 	push	ar4
      0023AE C0 05            [24]  907 	push	ar5
      0023B0 74 E1            [12]  908 	mov	a,#___str_0
      0023B2 C0 E0            [24]  909 	push	acc
      0023B4 74 3F            [12]  910 	mov	a,#(___str_0 >> 8)
      0023B6 C0 E0            [24]  911 	push	acc
      0023B8 12 2C C5         [24]  912 	lcall	_printf_tiny
      0023BB E5 81            [12]  913 	mov	a,sp
      0023BD 24 FC            [12]  914 	add	a,#0xfc
      0023BF F5 81            [12]  915 	mov	sp,a
      0023C1 D0 06            [24]  916 	pop	ar6
      0023C3 D0 07            [24]  917 	pop	ar7
                                    918 ;	main.c:113: i++;
      0023C5 0E               [12]  919 	inc	r6
      0023C6 BE 00 01         [24]  920 	cjne	r6,#0x00,00115$
      0023C9 0F               [12]  921 	inc	r7
      0023CA                        922 00115$:
                                    923 ;	main.c:115: buffer_char[i]=getchar();
      0023CA EE               [12]  924 	mov	a,r6
      0023CB 2E               [12]  925 	add	a,r6
      0023CC FC               [12]  926 	mov	r4,a
      0023CD EF               [12]  927 	mov	a,r7
      0023CE 33               [12]  928 	rlc	a
      0023CF FD               [12]  929 	mov	r5,a
      0023D0 EC               [12]  930 	mov	a,r4
      0023D1 24 A7            [12]  931 	add	a,#_getstr_buffer_char_65537_53
      0023D3 FC               [12]  932 	mov	r4,a
      0023D4 ED               [12]  933 	mov	a,r5
      0023D5 34 13            [12]  934 	addc	a,#(_getstr_buffer_char_65537_53 >> 8)
      0023D7 FD               [12]  935 	mov	r5,a
      0023D8 C0 07            [24]  936 	push	ar7
      0023DA C0 06            [24]  937 	push	ar6
      0023DC C0 05            [24]  938 	push	ar5
      0023DE C0 04            [24]  939 	push	ar4
      0023E0 12 23 6C         [24]  940 	lcall	_getchar
      0023E3 AA 82            [24]  941 	mov	r2,dpl
      0023E5 AB 83            [24]  942 	mov	r3,dph
      0023E7 D0 04            [24]  943 	pop	ar4
      0023E9 D0 05            [24]  944 	pop	ar5
      0023EB D0 06            [24]  945 	pop	ar6
      0023ED D0 07            [24]  946 	pop	ar7
      0023EF 8C 82            [24]  947 	mov	dpl,r4
      0023F1 8D 83            [24]  948 	mov	dph,r5
      0023F3 EA               [12]  949 	mov	a,r2
      0023F4 F0               [24]  950 	movx	@dptr,a
      0023F5 EB               [12]  951 	mov	a,r3
      0023F6 A3               [24]  952 	inc	dptr
      0023F7 F0               [24]  953 	movx	@dptr,a
                                    954 ;	main.c:116: }while(buffer_char[i]!=13);
      0023F8 BA 0D 98         [24]  955 	cjne	r2,#0x0d,00101$
      0023FB BB 00 95         [24]  956 	cjne	r3,#0x00,00101$
                                    957 ;	main.c:117: return buffer_char;
      0023FE 90 13 A7         [24]  958 	mov	dptr,#_getstr_buffer_char_65537_53
      002401 75 F0 00         [24]  959 	mov	b,#0x00
                                    960 ;	main.c:118: }
      002404 22               [24]  961 	ret
                                    962 ;------------------------------------------------------------
                                    963 ;Allocation info for local variables in function 'add_buffer'
                                    964 ;------------------------------------------------------------
                                    965 ;buffer_size               Allocated with name '_add_buffer_buffer_size_65537_56'
                                    966 ;buffer_int                Allocated with name '_add_buffer_buffer_int_65537_56'
                                    967 ;------------------------------------------------------------
                                    968 ;	main.c:124: void add_buffer()
                                    969 ;	-----------------------------------------
                                    970 ;	 function add_buffer
                                    971 ;	-----------------------------------------
      002405                        972 _add_buffer:
                                    973 ;	main.c:125: {DEBUGPORT(0x01);
      002405 90 00 01         [24]  974 	mov	dptr,#0x0001
      002408 12 22 68         [24]  975 	lcall	_dataout
                                    976 ;	main.c:128: printf_tiny("\n Enter Buffer_%d Size:",(Buffer_Num));
      00240B 90 14 AC         [24]  977 	mov	dptr,#_Buffer_Num
      00240E E0               [24]  978 	movx	a,@dptr
      00240F FF               [12]  979 	mov	r7,a
      002410 7E 00            [12]  980 	mov	r6,#0x00
      002412 C0 07            [24]  981 	push	ar7
      002414 C0 06            [24]  982 	push	ar6
      002416 74 E4            [12]  983 	mov	a,#___str_1
      002418 C0 E0            [24]  984 	push	acc
      00241A 74 3F            [12]  985 	mov	a,#(___str_1 >> 8)
      00241C C0 E0            [24]  986 	push	acc
      00241E 12 2C C5         [24]  987 	lcall	_printf_tiny
      002421 E5 81            [12]  988 	mov	a,sp
      002423 24 FC            [12]  989 	add	a,#0xfc
      002425 F5 81            [12]  990 	mov	sp,a
                                    991 ;	main.c:129: buffer_size=getstr();
      002427 12 23 7A         [24]  992 	lcall	_getstr
                                    993 ;	main.c:130: buffer_int=strtola(buffer_size);
      00242A 12 22 8A         [24]  994 	lcall	_strtola
      00242D AE 82            [24]  995 	mov	r6,dpl
      00242F AF 83            [24]  996 	mov	r7,dph
                                    997 ;	main.c:131: if(buffer_int>=30 && buffer_int<=300)       // Checking the size between 30 and 300.
      002431 C3               [12]  998 	clr	c
      002432 EE               [12]  999 	mov	a,r6
      002433 94 1E            [12] 1000 	subb	a,#0x1e
      002435 EF               [12] 1001 	mov	a,r7
      002436 94 00            [12] 1002 	subb	a,#0x00
      002438 50 03            [24] 1003 	jnc	00122$
      00243A 02 25 4B         [24] 1004 	ljmp	00105$
      00243D                       1005 00122$:
      00243D C3               [12] 1006 	clr	c
      00243E 74 2C            [12] 1007 	mov	a,#0x2c
      002440 9E               [12] 1008 	subb	a,r6
      002441 74 01            [12] 1009 	mov	a,#0x01
      002443 9F               [12] 1010 	subb	a,r7
      002444 50 03            [24] 1011 	jnc	00123$
      002446 02 25 4B         [24] 1012 	ljmp	00105$
      002449                       1013 00123$:
                                   1014 ;	main.c:133: buffer[Buffer_Num] = ( uint8_t __xdata*)malloc(buffer_int);     //Dynamic Memory Allocation Using Malloc
      002449 90 14 AC         [24] 1015 	mov	dptr,#_Buffer_Num
      00244C E0               [24] 1016 	movx	a,@dptr
      00244D 75 F0 02         [24] 1017 	mov	b,#0x02
      002450 A4               [48] 1018 	mul	ab
      002451 24 51            [12] 1019 	add	a,#_buffer
      002453 FC               [12] 1020 	mov	r4,a
      002454 74 14            [12] 1021 	mov	a,#(_buffer >> 8)
      002456 35 F0            [12] 1022 	addc	a,b
      002458 FD               [12] 1023 	mov	r5,a
      002459 8E 82            [24] 1024 	mov	dpl,r6
      00245B 8F 83            [24] 1025 	mov	dph,r7
      00245D C0 07            [24] 1026 	push	ar7
      00245F C0 06            [24] 1027 	push	ar6
      002461 C0 05            [24] 1028 	push	ar5
      002463 C0 04            [24] 1029 	push	ar4
      002465 12 2E 0A         [24] 1030 	lcall	_malloc
      002468 AA 82            [24] 1031 	mov	r2,dpl
      00246A AB 83            [24] 1032 	mov	r3,dph
      00246C D0 04            [24] 1033 	pop	ar4
      00246E D0 05            [24] 1034 	pop	ar5
      002470 D0 06            [24] 1035 	pop	ar6
      002472 D0 07            [24] 1036 	pop	ar7
      002474 8C 82            [24] 1037 	mov	dpl,r4
      002476 8D 83            [24] 1038 	mov	dph,r5
      002478 EA               [12] 1039 	mov	a,r2
      002479 F0               [24] 1040 	movx	@dptr,a
      00247A EB               [12] 1041 	mov	a,r3
      00247B A3               [24] 1042 	inc	dptr
      00247C F0               [24] 1043 	movx	@dptr,a
                                   1044 ;	main.c:134: if(NULL == buffer[Buffer_Num])
      00247D 90 14 AC         [24] 1045 	mov	dptr,#_Buffer_Num
      002480 E0               [24] 1046 	movx	a,@dptr
      002481 75 F0 02         [24] 1047 	mov	b,#0x02
      002484 A4               [48] 1048 	mul	ab
      002485 24 51            [12] 1049 	add	a,#_buffer
      002487 F5 82            [12] 1050 	mov	dpl,a
      002489 74 14            [12] 1051 	mov	a,#(_buffer >> 8)
      00248B 35 F0            [12] 1052 	addc	a,b
      00248D F5 83            [12] 1053 	mov	dph,a
      00248F E0               [24] 1054 	movx	a,@dptr
      002490 FC               [12] 1055 	mov	r4,a
      002491 A3               [24] 1056 	inc	dptr
      002492 E0               [24] 1057 	movx	a,@dptr
      002493 4C               [12] 1058 	orl	a,r4
      002494 70 10            [24] 1059 	jnz	00102$
                                   1060 ;	main.c:136: printf_tiny("\n\rMemory not allocated");
      002496 74 FC            [12] 1061 	mov	a,#___str_2
      002498 C0 E0            [24] 1062 	push	acc
      00249A 74 3F            [12] 1063 	mov	a,#(___str_2 >> 8)
      00249C C0 E0            [24] 1064 	push	acc
      00249E 12 2C C5         [24] 1065 	lcall	_printf_tiny
      0024A1 15 81            [12] 1066 	dec	sp
      0024A3 15 81            [12] 1067 	dec	sp
      0024A5 22               [24] 1068 	ret
      0024A6                       1069 00102$:
                                   1070 ;	main.c:141: printf_small("\n\rMemory allocated");
      0024A6 C0 07            [24] 1071 	push	ar7
      0024A8 C0 06            [24] 1072 	push	ar6
      0024AA 74 13            [12] 1073 	mov	a,#___str_3
      0024AC C0 E0            [24] 1074 	push	acc
      0024AE 74 40            [12] 1075 	mov	a,#(___str_3 >> 8)
      0024B0 C0 E0            [24] 1076 	push	acc
      0024B2 74 80            [12] 1077 	mov	a,#0x80
      0024B4 C0 E0            [24] 1078 	push	acc
      0024B6 12 2F 93         [24] 1079 	lcall	_printf_small
      0024B9 15 81            [12] 1080 	dec	sp
      0024BB 15 81            [12] 1081 	dec	sp
      0024BD 15 81            [12] 1082 	dec	sp
      0024BF D0 06            [24] 1083 	pop	ar6
      0024C1 D0 07            [24] 1084 	pop	ar7
                                   1085 ;	main.c:142: Buffer_Size[Buffer_Num]=buffer_int;
      0024C3 90 14 AC         [24] 1086 	mov	dptr,#_Buffer_Num
      0024C6 E0               [24] 1087 	movx	a,@dptr
      0024C7 75 F0 02         [24] 1088 	mov	b,#0x02
      0024CA A4               [48] 1089 	mul	ab
      0024CB 24 8D            [12] 1090 	add	a,#_Buffer_Size
      0024CD F5 82            [12] 1091 	mov	dpl,a
      0024CF 74 14            [12] 1092 	mov	a,#(_Buffer_Size >> 8)
      0024D1 35 F0            [12] 1093 	addc	a,b
      0024D3 F5 83            [12] 1094 	mov	dph,a
      0024D5 EE               [12] 1095 	mov	a,r6
      0024D6 F0               [24] 1096 	movx	@dptr,a
      0024D7 EF               [12] 1097 	mov	a,r7
      0024D8 A3               [24] 1098 	inc	dptr
      0024D9 F0               [24] 1099 	movx	@dptr,a
                                   1100 ;	main.c:143: base_address[Buffer_Num]=buffer[Buffer_Num];
      0024DA 90 14 AC         [24] 1101 	mov	dptr,#_Buffer_Num
      0024DD E0               [24] 1102 	movx	a,@dptr
      0024DE 75 F0 02         [24] 1103 	mov	b,#0x02
      0024E1 A4               [48] 1104 	mul	ab
      0024E2 FC               [12] 1105 	mov	r4,a
      0024E3 AD F0            [24] 1106 	mov	r5,b
      0024E5 24 65            [12] 1107 	add	a,#_base_address
      0024E7 FA               [12] 1108 	mov	r2,a
      0024E8 ED               [12] 1109 	mov	a,r5
      0024E9 34 14            [12] 1110 	addc	a,#(_base_address >> 8)
      0024EB FB               [12] 1111 	mov	r3,a
      0024EC EC               [12] 1112 	mov	a,r4
      0024ED 24 51            [12] 1113 	add	a,#_buffer
      0024EF F5 82            [12] 1114 	mov	dpl,a
      0024F1 ED               [12] 1115 	mov	a,r5
      0024F2 34 14            [12] 1116 	addc	a,#(_buffer >> 8)
      0024F4 F5 83            [12] 1117 	mov	dph,a
      0024F6 E0               [24] 1118 	movx	a,@dptr
      0024F7 FC               [12] 1119 	mov	r4,a
      0024F8 A3               [24] 1120 	inc	dptr
      0024F9 E0               [24] 1121 	movx	a,@dptr
      0024FA FD               [12] 1122 	mov	r5,a
      0024FB 8A 82            [24] 1123 	mov	dpl,r2
      0024FD 8B 83            [24] 1124 	mov	dph,r3
      0024FF EC               [12] 1125 	mov	a,r4
      002500 F0               [24] 1126 	movx	@dptr,a
      002501 ED               [12] 1127 	mov	a,r5
      002502 A3               [24] 1128 	inc	dptr
      002503 F0               [24] 1129 	movx	@dptr,a
                                   1130 ;	main.c:144: end_address[Buffer_Num]=buffer[Buffer_Num]+(buffer_int/sizeof(uint8_t));
      002504 90 14 AC         [24] 1131 	mov	dptr,#_Buffer_Num
      002507 E0               [24] 1132 	movx	a,@dptr
      002508 75 F0 02         [24] 1133 	mov	b,#0x02
      00250B A4               [48] 1134 	mul	ab
      00250C FC               [12] 1135 	mov	r4,a
      00250D AD F0            [24] 1136 	mov	r5,b
      00250F 24 79            [12] 1137 	add	a,#_end_address
      002511 FA               [12] 1138 	mov	r2,a
      002512 ED               [12] 1139 	mov	a,r5
      002513 34 14            [12] 1140 	addc	a,#(_end_address >> 8)
      002515 FB               [12] 1141 	mov	r3,a
      002516 EC               [12] 1142 	mov	a,r4
      002517 24 51            [12] 1143 	add	a,#_buffer
      002519 F5 82            [12] 1144 	mov	dpl,a
      00251B ED               [12] 1145 	mov	a,r5
      00251C 34 14            [12] 1146 	addc	a,#(_buffer >> 8)
      00251E F5 83            [12] 1147 	mov	dph,a
      002520 E0               [24] 1148 	movx	a,@dptr
      002521 FC               [12] 1149 	mov	r4,a
      002522 A3               [24] 1150 	inc	dptr
      002523 E0               [24] 1151 	movx	a,@dptr
      002524 FD               [12] 1152 	mov	r5,a
      002525 EE               [12] 1153 	mov	a,r6
      002526 2C               [12] 1154 	add	a,r4
      002527 FE               [12] 1155 	mov	r6,a
      002528 EF               [12] 1156 	mov	a,r7
      002529 3D               [12] 1157 	addc	a,r5
      00252A FF               [12] 1158 	mov	r7,a
      00252B 8A 82            [24] 1159 	mov	dpl,r2
      00252D 8B 83            [24] 1160 	mov	dph,r3
      00252F EE               [12] 1161 	mov	a,r6
      002530 F0               [24] 1162 	movx	@dptr,a
      002531 EF               [12] 1163 	mov	a,r7
      002532 A3               [24] 1164 	inc	dptr
      002533 F0               [24] 1165 	movx	@dptr,a
                                   1166 ;	main.c:145: Storage_Char[Buffer_Num]=0;
      002534 90 14 AC         [24] 1167 	mov	dptr,#_Buffer_Num
      002537 E0               [24] 1168 	movx	a,@dptr
      002538 24 A2            [12] 1169 	add	a,#_Storage_Char
      00253A F5 82            [12] 1170 	mov	dpl,a
      00253C E4               [12] 1171 	clr	a
      00253D 34 14            [12] 1172 	addc	a,#(_Storage_Char >> 8)
      00253F F5 83            [12] 1173 	mov	dph,a
      002541 E4               [12] 1174 	clr	a
      002542 F0               [24] 1175 	movx	@dptr,a
                                   1176 ;	main.c:146: Buffer_Num++;
      002543 90 14 AC         [24] 1177 	mov	dptr,#_Buffer_Num
      002546 E0               [24] 1178 	movx	a,@dptr
      002547 24 01            [12] 1179 	add	a,#0x01
      002549 F0               [24] 1180 	movx	@dptr,a
      00254A 22               [24] 1181 	ret
      00254B                       1182 00105$:
                                   1183 ;	main.c:150: printf_tiny("\n\rNot Defined Space");
      00254B 74 26            [12] 1184 	mov	a,#___str_4
      00254D C0 E0            [24] 1185 	push	acc
      00254F 74 40            [12] 1186 	mov	a,#(___str_4 >> 8)
      002551 C0 E0            [24] 1187 	push	acc
      002553 12 2C C5         [24] 1188 	lcall	_printf_tiny
      002556 15 81            [12] 1189 	dec	sp
      002558 15 81            [12] 1190 	dec	sp
                                   1191 ;	main.c:151: }
      00255A 22               [24] 1192 	ret
                                   1193 ;------------------------------------------------------------
                                   1194 ;Allocation info for local variables in function 'delete_buffer'
                                   1195 ;------------------------------------------------------------
                                   1196 ;Buffer_Num_delete         Allocated with name '_delete_buffer_Buffer_Num_delete_65537_61'
                                   1197 ;------------------------------------------------------------
                                   1198 ;	main.c:157: void delete_buffer()
                                   1199 ;	-----------------------------------------
                                   1200 ;	 function delete_buffer
                                   1201 ;	-----------------------------------------
      00255B                       1202 _delete_buffer:
                                   1203 ;	main.c:158: {   DEBUGPORT(0x01);
      00255B 90 00 01         [24] 1204 	mov	dptr,#0x0001
      00255E 12 22 68         [24] 1205 	lcall	_dataout
                                   1206 ;	main.c:160: printf_tiny("\n Enter Buffer number to be deleted:");
      002561 74 3A            [12] 1207 	mov	a,#___str_5
      002563 C0 E0            [24] 1208 	push	acc
      002565 74 40            [12] 1209 	mov	a,#(___str_5 >> 8)
      002567 C0 E0            [24] 1210 	push	acc
      002569 12 2C C5         [24] 1211 	lcall	_printf_tiny
      00256C 15 81            [12] 1212 	dec	sp
      00256E 15 81            [12] 1213 	dec	sp
                                   1214 ;	main.c:161: Buffer_Num_delete=getchar()-'0';
      002570 12 23 6C         [24] 1215 	lcall	_getchar
      002573 AE 82            [24] 1216 	mov	r6,dpl
      002575 EE               [12] 1217 	mov	a,r6
      002576 24 D0            [12] 1218 	add	a,#0xd0
                                   1219 ;	main.c:162: if(Buffer_Num_delete<Buffer_Num)
      002578 FF               [12] 1220 	mov	r7,a
      002579 FE               [12] 1221 	mov	r6,a
      00257A 90 14 AC         [24] 1222 	mov	dptr,#_Buffer_Num
      00257D E0               [24] 1223 	movx	a,@dptr
      00257E FD               [12] 1224 	mov	r5,a
      00257F C3               [12] 1225 	clr	c
      002580 EE               [12] 1226 	mov	a,r6
      002581 9D               [12] 1227 	subb	a,r5
      002582 50 54            [24] 1228 	jnc	00102$
                                   1229 ;	main.c:164: free(buffer[Buffer_Num_delete]);            //Freeing the dynamic memory allocated in heap
      002584 EF               [12] 1230 	mov	a,r7
      002585 75 F0 02         [24] 1231 	mov	b,#0x02
      002588 A4               [48] 1232 	mul	ab
      002589 24 51            [12] 1233 	add	a,#_buffer
      00258B F5 82            [12] 1234 	mov	dpl,a
      00258D 74 14            [12] 1235 	mov	a,#(_buffer >> 8)
      00258F 35 F0            [12] 1236 	addc	a,b
      002591 F5 83            [12] 1237 	mov	dph,a
      002593 E0               [24] 1238 	movx	a,@dptr
      002594 FD               [12] 1239 	mov	r5,a
      002595 A3               [24] 1240 	inc	dptr
      002596 E0               [24] 1241 	movx	a,@dptr
      002597 FE               [12] 1242 	mov	r6,a
      002598 7C 00            [12] 1243 	mov	r4,#0x00
      00259A 8D 82            [24] 1244 	mov	dpl,r5
      00259C 8E 83            [24] 1245 	mov	dph,r6
      00259E 8C F0            [24] 1246 	mov	b,r4
      0025A0 C0 07            [24] 1247 	push	ar7
      0025A2 12 2B 53         [24] 1248 	lcall	_free
      0025A5 D0 07            [24] 1249 	pop	ar7
                                   1250 ;	main.c:165: printf_tiny("\n\rBuffer_%d Successfully Removed.",Buffer_Num_delete);
      0025A7 8F 06            [24] 1251 	mov	ar6,r7
      0025A9 7D 00            [12] 1252 	mov	r5,#0x00
      0025AB C0 07            [24] 1253 	push	ar7
      0025AD C0 06            [24] 1254 	push	ar6
      0025AF C0 05            [24] 1255 	push	ar5
      0025B1 74 5F            [12] 1256 	mov	a,#___str_6
      0025B3 C0 E0            [24] 1257 	push	acc
      0025B5 74 40            [12] 1258 	mov	a,#(___str_6 >> 8)
      0025B7 C0 E0            [24] 1259 	push	acc
      0025B9 12 2C C5         [24] 1260 	lcall	_printf_tiny
      0025BC E5 81            [12] 1261 	mov	a,sp
      0025BE 24 FC            [12] 1262 	add	a,#0xfc
      0025C0 F5 81            [12] 1263 	mov	sp,a
      0025C2 D0 07            [24] 1264 	pop	ar7
                                   1265 ;	main.c:166: buffer[Buffer_Num_delete]=NULL;
      0025C4 EF               [12] 1266 	mov	a,r7
      0025C5 75 F0 02         [24] 1267 	mov	b,#0x02
      0025C8 A4               [48] 1268 	mul	ab
      0025C9 24 51            [12] 1269 	add	a,#_buffer
      0025CB F5 82            [12] 1270 	mov	dpl,a
      0025CD 74 14            [12] 1271 	mov	a,#(_buffer >> 8)
      0025CF 35 F0            [12] 1272 	addc	a,b
      0025D1 F5 83            [12] 1273 	mov	dph,a
      0025D3 E4               [12] 1274 	clr	a
      0025D4 F0               [24] 1275 	movx	@dptr,a
      0025D5 A3               [24] 1276 	inc	dptr
      0025D6 F0               [24] 1277 	movx	@dptr,a
      0025D7 22               [24] 1278 	ret
      0025D8                       1279 00102$:
                                   1280 ;	main.c:170: printf_tiny("\n\rInvalid Buffer Number.");
      0025D8 74 81            [12] 1281 	mov	a,#___str_7
      0025DA C0 E0            [24] 1282 	push	acc
      0025DC 74 40            [12] 1283 	mov	a,#(___str_7 >> 8)
      0025DE C0 E0            [24] 1284 	push	acc
      0025E0 12 2C C5         [24] 1285 	lcall	_printf_tiny
      0025E3 15 81            [12] 1286 	dec	sp
      0025E5 15 81            [12] 1287 	dec	sp
                                   1288 ;	main.c:172: }
      0025E7 22               [24] 1289 	ret
                                   1290 ;------------------------------------------------------------
                                   1291 ;Allocation info for local variables in function 'display_buffers'
                                   1292 ;------------------------------------------------------------
                                   1293 ;sloc0                     Allocated with name '_display_buffers_sloc0_1_0'
                                   1294 ;sloc1                     Allocated with name '_display_buffers_sloc1_1_0'
                                   1295 ;a                         Allocated with name '_display_buffers_a_65536_64'
                                   1296 ;i                         Allocated with name '_display_buffers_i_65537_66'
                                   1297 ;j                         Allocated with name '_display_buffers_j_65537_66'
                                   1298 ;k                         Allocated with name '_display_buffers_k_65537_66'
                                   1299 ;------------------------------------------------------------
                                   1300 ;	main.c:178: void display_buffers(uint8_t a)
                                   1301 ;	-----------------------------------------
                                   1302 ;	 function display_buffers
                                   1303 ;	-----------------------------------------
      0025E8                       1304 _display_buffers:
      0025E8 E5 82            [12] 1305 	mov	a,dpl
      0025EA 90 13 BB         [24] 1306 	mov	dptr,#_display_buffers_a_65536_64
      0025ED F0               [24] 1307 	movx	@dptr,a
                                   1308 ;	main.c:179: {   DEBUGPORT(0x01);
      0025EE 90 00 01         [24] 1309 	mov	dptr,#0x0001
      0025F1 12 22 68         [24] 1310 	lcall	_dataout
                                   1311 ;	main.c:182: for(k=0;k<a;k++)
      0025F4 90 13 BB         [24] 1312 	mov	dptr,#_display_buffers_a_65536_64
      0025F7 E0               [24] 1313 	movx	a,@dptr
      0025F8 FF               [12] 1314 	mov	r7,a
      0025F9 7D 00            [12] 1315 	mov	r5,#0x00
      0025FB 7E 00            [12] 1316 	mov	r6,#0x00
      0025FD                       1317 00113$:
      0025FD 8F 03            [24] 1318 	mov	ar3,r7
      0025FF 7C 00            [12] 1319 	mov	r4,#0x00
      002601 C3               [12] 1320 	clr	c
      002602 ED               [12] 1321 	mov	a,r5
      002603 9B               [12] 1322 	subb	a,r3
      002604 EE               [12] 1323 	mov	a,r6
      002605 9C               [12] 1324 	subb	a,r4
      002606 40 01            [24] 1325 	jc	00147$
      002608 22               [24] 1326 	ret
      002609                       1327 00147$:
                                   1328 ;	main.c:184: if(buffer[k]!=NULL)
      002609 ED               [12] 1329 	mov	a,r5
      00260A 2D               [12] 1330 	add	a,r5
      00260B FB               [12] 1331 	mov	r3,a
      00260C EE               [12] 1332 	mov	a,r6
      00260D 33               [12] 1333 	rlc	a
      00260E FC               [12] 1334 	mov	r4,a
      00260F EB               [12] 1335 	mov	a,r3
      002610 24 51            [12] 1336 	add	a,#_buffer
      002612 F5 82            [12] 1337 	mov	dpl,a
      002614 EC               [12] 1338 	mov	a,r4
      002615 34 14            [12] 1339 	addc	a,#(_buffer >> 8)
      002617 F5 83            [12] 1340 	mov	dph,a
      002619 E0               [24] 1341 	movx	a,@dptr
      00261A F9               [12] 1342 	mov	r1,a
      00261B A3               [24] 1343 	inc	dptr
      00261C E0               [24] 1344 	movx	a,@dptr
      00261D FA               [12] 1345 	mov	r2,a
      00261E 49               [12] 1346 	orl	a,r1
      00261F 70 03            [24] 1347 	jnz	00148$
      002621 02 28 63         [24] 1348 	ljmp	00114$
      002624                       1349 00148$:
                                   1350 ;	main.c:185: {   printf_tiny("\n\n\n\n\r");
      002624 C0 07            [24] 1351 	push	ar7
      002626 C0 07            [24] 1352 	push	ar7
      002628 C0 06            [24] 1353 	push	ar6
      00262A C0 05            [24] 1354 	push	ar5
      00262C C0 04            [24] 1355 	push	ar4
      00262E C0 03            [24] 1356 	push	ar3
      002630 74 9A            [12] 1357 	mov	a,#___str_8
      002632 C0 E0            [24] 1358 	push	acc
      002634 74 40            [12] 1359 	mov	a,#(___str_8 >> 8)
      002636 C0 E0            [24] 1360 	push	acc
      002638 12 2C C5         [24] 1361 	lcall	_printf_tiny
      00263B 15 81            [12] 1362 	dec	sp
      00263D 15 81            [12] 1363 	dec	sp
      00263F D0 03            [24] 1364 	pop	ar3
      002641 D0 04            [24] 1365 	pop	ar4
      002643 D0 05            [24] 1366 	pop	ar5
      002645 D0 06            [24] 1367 	pop	ar6
                                   1368 ;	main.c:186: printf_tiny("Buffer_%d:",k);
      002647 C0 06            [24] 1369 	push	ar6
      002649 C0 05            [24] 1370 	push	ar5
      00264B C0 04            [24] 1371 	push	ar4
      00264D C0 03            [24] 1372 	push	ar3
      00264F C0 05            [24] 1373 	push	ar5
      002651 C0 06            [24] 1374 	push	ar6
      002653 74 A0            [12] 1375 	mov	a,#___str_9
      002655 C0 E0            [24] 1376 	push	acc
      002657 74 40            [12] 1377 	mov	a,#(___str_9 >> 8)
      002659 C0 E0            [24] 1378 	push	acc
      00265B 12 2C C5         [24] 1379 	lcall	_printf_tiny
      00265E E5 81            [12] 1380 	mov	a,sp
      002660 24 FC            [12] 1381 	add	a,#0xfc
      002662 F5 81            [12] 1382 	mov	sp,a
      002664 D0 03            [24] 1383 	pop	ar3
      002666 D0 04            [24] 1384 	pop	ar4
      002668 D0 05            [24] 1385 	pop	ar5
      00266A D0 06            [24] 1386 	pop	ar6
      00266C D0 07            [24] 1387 	pop	ar7
                                   1388 ;	main.c:187: printf("\n\rBase Address:%p",base_address[k]);
      00266E EB               [12] 1389 	mov	a,r3
      00266F 24 65            [12] 1390 	add	a,#_base_address
      002671 F5 0A            [12] 1391 	mov	_display_buffers_sloc0_1_0,a
      002673 EC               [12] 1392 	mov	a,r4
      002674 34 14            [12] 1393 	addc	a,#(_base_address >> 8)
      002676 F5 0B            [12] 1394 	mov	(_display_buffers_sloc0_1_0 + 1),a
      002678 85 0A 82         [24] 1395 	mov	dpl,_display_buffers_sloc0_1_0
      00267B 85 0B 83         [24] 1396 	mov	dph,(_display_buffers_sloc0_1_0 + 1)
      00267E E0               [24] 1397 	movx	a,@dptr
      00267F F8               [12] 1398 	mov	r0,a
      002680 A3               [24] 1399 	inc	dptr
      002681 E0               [24] 1400 	movx	a,@dptr
      002682 FA               [12] 1401 	mov	r2,a
      002683 7F 00            [12] 1402 	mov	r7,#0x00
      002685 C0 07            [24] 1403 	push	ar7
      002687 C0 06            [24] 1404 	push	ar6
      002689 C0 05            [24] 1405 	push	ar5
      00268B C0 04            [24] 1406 	push	ar4
      00268D C0 03            [24] 1407 	push	ar3
      00268F C0 00            [24] 1408 	push	ar0
      002691 C0 02            [24] 1409 	push	ar2
      002693 C0 07            [24] 1410 	push	ar7
      002695 74 AB            [12] 1411 	mov	a,#___str_10
      002697 C0 E0            [24] 1412 	push	acc
      002699 74 40            [12] 1413 	mov	a,#(___str_10 >> 8)
      00269B C0 E0            [24] 1414 	push	acc
      00269D 74 80            [12] 1415 	mov	a,#0x80
      00269F C0 E0            [24] 1416 	push	acc
      0026A1 12 33 69         [24] 1417 	lcall	_printf
      0026A4 E5 81            [12] 1418 	mov	a,sp
      0026A6 24 FA            [12] 1419 	add	a,#0xfa
      0026A8 F5 81            [12] 1420 	mov	sp,a
      0026AA D0 03            [24] 1421 	pop	ar3
      0026AC D0 04            [24] 1422 	pop	ar4
      0026AE D0 05            [24] 1423 	pop	ar5
      0026B0 D0 06            [24] 1424 	pop	ar6
      0026B2 D0 07            [24] 1425 	pop	ar7
                                   1426 ;	main.c:188: printf("\n\rEnd Address:%p",end_address[k]);
      0026B4 EB               [12] 1427 	mov	a,r3
      0026B5 24 79            [12] 1428 	add	a,#_end_address
      0026B7 F5 82            [12] 1429 	mov	dpl,a
      0026B9 EC               [12] 1430 	mov	a,r4
      0026BA 34 14            [12] 1431 	addc	a,#(_end_address >> 8)
      0026BC F5 83            [12] 1432 	mov	dph,a
      0026BE E0               [24] 1433 	movx	a,@dptr
      0026BF FA               [12] 1434 	mov	r2,a
      0026C0 A3               [24] 1435 	inc	dptr
      0026C1 E0               [24] 1436 	movx	a,@dptr
      0026C2 F9               [12] 1437 	mov	r1,a
      0026C3 7F 00            [12] 1438 	mov	r7,#0x00
      0026C5 C0 07            [24] 1439 	push	ar7
      0026C7 C0 06            [24] 1440 	push	ar6
      0026C9 C0 05            [24] 1441 	push	ar5
      0026CB C0 04            [24] 1442 	push	ar4
      0026CD C0 03            [24] 1443 	push	ar3
      0026CF C0 02            [24] 1444 	push	ar2
      0026D1 C0 01            [24] 1445 	push	ar1
      0026D3 C0 07            [24] 1446 	push	ar7
      0026D5 74 BD            [12] 1447 	mov	a,#___str_11
      0026D7 C0 E0            [24] 1448 	push	acc
      0026D9 74 40            [12] 1449 	mov	a,#(___str_11 >> 8)
      0026DB C0 E0            [24] 1450 	push	acc
      0026DD 74 80            [12] 1451 	mov	a,#0x80
      0026DF C0 E0            [24] 1452 	push	acc
      0026E1 12 33 69         [24] 1453 	lcall	_printf
      0026E4 E5 81            [12] 1454 	mov	a,sp
      0026E6 24 FA            [12] 1455 	add	a,#0xfa
      0026E8 F5 81            [12] 1456 	mov	sp,a
      0026EA D0 03            [24] 1457 	pop	ar3
      0026EC D0 04            [24] 1458 	pop	ar4
      0026EE D0 05            [24] 1459 	pop	ar5
      0026F0 D0 06            [24] 1460 	pop	ar6
      0026F2 D0 07            [24] 1461 	pop	ar7
                                   1462 ;	main.c:189: printf_tiny("\n\rStorage Chars:%d",Storage_Char[k]);
      0026F4 ED               [12] 1463 	mov	a,r5
      0026F5 24 A2            [12] 1464 	add	a,#_Storage_Char
      0026F7 F5 0C            [12] 1465 	mov	_display_buffers_sloc1_1_0,a
      0026F9 EE               [12] 1466 	mov	a,r6
      0026FA 34 14            [12] 1467 	addc	a,#(_Storage_Char >> 8)
      0026FC F5 0D            [12] 1468 	mov	(_display_buffers_sloc1_1_0 + 1),a
      0026FE 85 0C 82         [24] 1469 	mov	dpl,_display_buffers_sloc1_1_0
      002701 85 0D 83         [24] 1470 	mov	dph,(_display_buffers_sloc1_1_0 + 1)
      002704 E0               [24] 1471 	movx	a,@dptr
      002705 FF               [12] 1472 	mov	r7,a
      002706 7A 00            [12] 1473 	mov	r2,#0x00
      002708 C0 07            [24] 1474 	push	ar7
      00270A C0 06            [24] 1475 	push	ar6
      00270C C0 05            [24] 1476 	push	ar5
      00270E C0 04            [24] 1477 	push	ar4
      002710 C0 03            [24] 1478 	push	ar3
      002712 C0 07            [24] 1479 	push	ar7
      002714 C0 02            [24] 1480 	push	ar2
      002716 74 CE            [12] 1481 	mov	a,#___str_12
      002718 C0 E0            [24] 1482 	push	acc
      00271A 74 40            [12] 1483 	mov	a,#(___str_12 >> 8)
      00271C C0 E0            [24] 1484 	push	acc
      00271E 12 2C C5         [24] 1485 	lcall	_printf_tiny
      002721 E5 81            [12] 1486 	mov	a,sp
      002723 24 FC            [12] 1487 	add	a,#0xfc
      002725 F5 81            [12] 1488 	mov	sp,a
      002727 D0 03            [24] 1489 	pop	ar3
      002729 D0 04            [24] 1490 	pop	ar4
      00272B D0 05            [24] 1491 	pop	ar5
      00272D D0 06            [24] 1492 	pop	ar6
      00272F D0 07            [24] 1493 	pop	ar7
                                   1494 ;	main.c:190: printf_tiny("\n\rSize:%d",Buffer_Size[k]);
      002731 EB               [12] 1495 	mov	a,r3
      002732 24 8D            [12] 1496 	add	a,#_Buffer_Size
      002734 FB               [12] 1497 	mov	r3,a
      002735 EC               [12] 1498 	mov	a,r4
      002736 34 14            [12] 1499 	addc	a,#(_Buffer_Size >> 8)
      002738 FC               [12] 1500 	mov	r4,a
      002739 8B 82            [24] 1501 	mov	dpl,r3
      00273B 8C 83            [24] 1502 	mov	dph,r4
      00273D E0               [24] 1503 	movx	a,@dptr
      00273E FA               [12] 1504 	mov	r2,a
      00273F A3               [24] 1505 	inc	dptr
      002740 E0               [24] 1506 	movx	a,@dptr
      002741 FF               [12] 1507 	mov	r7,a
      002742 C0 07            [24] 1508 	push	ar7
      002744 C0 06            [24] 1509 	push	ar6
      002746 C0 05            [24] 1510 	push	ar5
      002748 C0 04            [24] 1511 	push	ar4
      00274A C0 03            [24] 1512 	push	ar3
      00274C C0 02            [24] 1513 	push	ar2
      00274E C0 07            [24] 1514 	push	ar7
      002750 74 E1            [12] 1515 	mov	a,#___str_13
      002752 C0 E0            [24] 1516 	push	acc
      002754 74 40            [12] 1517 	mov	a,#(___str_13 >> 8)
      002756 C0 E0            [24] 1518 	push	acc
      002758 12 2C C5         [24] 1519 	lcall	_printf_tiny
      00275B E5 81            [12] 1520 	mov	a,sp
      00275D 24 FC            [12] 1521 	add	a,#0xfc
      00275F F5 81            [12] 1522 	mov	sp,a
      002761 D0 03            [24] 1523 	pop	ar3
      002763 D0 04            [24] 1524 	pop	ar4
      002765 D0 05            [24] 1525 	pop	ar5
      002767 D0 06            [24] 1526 	pop	ar6
      002769 D0 07            [24] 1527 	pop	ar7
                                   1528 ;	main.c:191: printf_tiny("\n\rFree Space:%d",Buffer_Size[k]-(Storage_Char[k]));
      00276B 8B 82            [24] 1529 	mov	dpl,r3
      00276D 8C 83            [24] 1530 	mov	dph,r4
      00276F E0               [24] 1531 	movx	a,@dptr
      002770 FB               [12] 1532 	mov	r3,a
      002771 A3               [24] 1533 	inc	dptr
      002772 E0               [24] 1534 	movx	a,@dptr
      002773 FC               [12] 1535 	mov	r4,a
      002774 85 0C 82         [24] 1536 	mov	dpl,_display_buffers_sloc1_1_0
      002777 85 0D 83         [24] 1537 	mov	dph,(_display_buffers_sloc1_1_0 + 1)
      00277A E0               [24] 1538 	movx	a,@dptr
      00277B FF               [12] 1539 	mov	r7,a
      00277C 7A 00            [12] 1540 	mov	r2,#0x00
      00277E EB               [12] 1541 	mov	a,r3
      00277F C3               [12] 1542 	clr	c
      002780 9F               [12] 1543 	subb	a,r7
      002781 FB               [12] 1544 	mov	r3,a
      002782 EC               [12] 1545 	mov	a,r4
      002783 9A               [12] 1546 	subb	a,r2
      002784 FC               [12] 1547 	mov	r4,a
      002785 C0 07            [24] 1548 	push	ar7
      002787 C0 06            [24] 1549 	push	ar6
      002789 C0 05            [24] 1550 	push	ar5
      00278B C0 03            [24] 1551 	push	ar3
      00278D C0 04            [24] 1552 	push	ar4
      00278F 74 EB            [12] 1553 	mov	a,#___str_14
      002791 C0 E0            [24] 1554 	push	acc
      002793 74 40            [12] 1555 	mov	a,#(___str_14 >> 8)
      002795 C0 E0            [24] 1556 	push	acc
      002797 12 2C C5         [24] 1557 	lcall	_printf_tiny
      00279A E5 81            [12] 1558 	mov	a,sp
      00279C 24 FC            [12] 1559 	add	a,#0xfc
      00279E F5 81            [12] 1560 	mov	sp,a
      0027A0 D0 05            [24] 1561 	pop	ar5
      0027A2 D0 06            [24] 1562 	pop	ar6
      0027A4 D0 07            [24] 1563 	pop	ar7
                                   1564 ;	main.c:192: if(k==0)
      0027A6 D0 07            [24] 1565 	pop	ar7
      0027A8 ED               [12] 1566 	mov	a,r5
      0027A9 4E               [12] 1567 	orl	a,r6
      0027AA 60 03            [24] 1568 	jz	00149$
      0027AC 02 28 63         [24] 1569 	ljmp	00114$
      0027AF                       1570 00149$:
                                   1571 ;	main.c:194: for(i=base_address[k],j=0;j<Storage_Char[k];i++,j++)
      0027AF 85 0A 82         [24] 1572 	mov	dpl,_display_buffers_sloc0_1_0
      0027B2 85 0B 83         [24] 1573 	mov	dph,(_display_buffers_sloc0_1_0 + 1)
      0027B5 E0               [24] 1574 	movx	a,@dptr
      0027B6 FB               [12] 1575 	mov	r3,a
      0027B7 A3               [24] 1576 	inc	dptr
      0027B8 E0               [24] 1577 	movx	a,@dptr
      0027B9 FC               [12] 1578 	mov	r4,a
      0027BA 85 0C 0A         [24] 1579 	mov	_display_buffers_sloc0_1_0,_display_buffers_sloc1_1_0
      0027BD 85 0D 0B         [24] 1580 	mov	(_display_buffers_sloc0_1_0 + 1),(_display_buffers_sloc1_1_0 + 1)
      0027C0 E4               [12] 1581 	clr	a
      0027C1 F5 0C            [12] 1582 	mov	_display_buffers_sloc1_1_0,a
      0027C3 F5 0D            [12] 1583 	mov	(_display_buffers_sloc1_1_0 + 1),a
      0027C5                       1584 00110$:
      0027C5 C0 07            [24] 1585 	push	ar7
      0027C7 85 0A 82         [24] 1586 	mov	dpl,_display_buffers_sloc0_1_0
      0027CA 85 0B 83         [24] 1587 	mov	dph,(_display_buffers_sloc0_1_0 + 1)
      0027CD E0               [24] 1588 	movx	a,@dptr
      0027CE F8               [12] 1589 	mov	r0,a
      0027CF 7F 00            [12] 1590 	mov	r7,#0x00
      0027D1 C3               [12] 1591 	clr	c
      0027D2 E5 0C            [12] 1592 	mov	a,_display_buffers_sloc1_1_0
      0027D4 98               [12] 1593 	subb	a,r0
      0027D5 E5 0D            [12] 1594 	mov	a,(_display_buffers_sloc1_1_0 + 1)
      0027D7 9F               [12] 1595 	subb	a,r7
      0027D8 D0 07            [24] 1596 	pop	ar7
      0027DA 40 03            [24] 1597 	jc	00150$
      0027DC 02 28 63         [24] 1598 	ljmp	00114$
      0027DF                       1599 00150$:
                                   1600 ;	main.c:196: if(j%16==0)
      0027DF E5 0C            [12] 1601 	mov	a,_display_buffers_sloc1_1_0
      0027E1 54 0F            [12] 1602 	anl	a,#0x0f
      0027E3 70 3B            [24] 1603 	jnz	00102$
                                   1604 ;	main.c:197: printf("\n\r%p",i);
      0027E5 C0 07            [24] 1605 	push	ar7
      0027E7 8B 00            [24] 1606 	mov	ar0,r3
      0027E9 8C 07            [24] 1607 	mov	ar7,r4
      0027EB 8F 02            [24] 1608 	mov	ar2,r7
      0027ED 7F 00            [12] 1609 	mov	r7,#0x00
      0027EF C0 07            [24] 1610 	push	ar7
      0027F1 C0 06            [24] 1611 	push	ar6
      0027F3 C0 05            [24] 1612 	push	ar5
      0027F5 C0 04            [24] 1613 	push	ar4
      0027F7 C0 03            [24] 1614 	push	ar3
      0027F9 C0 00            [24] 1615 	push	ar0
      0027FB C0 02            [24] 1616 	push	ar2
      0027FD C0 07            [24] 1617 	push	ar7
      0027FF 74 FB            [12] 1618 	mov	a,#___str_15
      002801 C0 E0            [24] 1619 	push	acc
      002803 74 40            [12] 1620 	mov	a,#(___str_15 >> 8)
      002805 C0 E0            [24] 1621 	push	acc
      002807 74 80            [12] 1622 	mov	a,#0x80
      002809 C0 E0            [24] 1623 	push	acc
      00280B 12 33 69         [24] 1624 	lcall	_printf
      00280E E5 81            [12] 1625 	mov	a,sp
      002810 24 FA            [12] 1626 	add	a,#0xfa
      002812 F5 81            [12] 1627 	mov	sp,a
      002814 D0 03            [24] 1628 	pop	ar3
      002816 D0 04            [24] 1629 	pop	ar4
      002818 D0 05            [24] 1630 	pop	ar5
      00281A D0 06            [24] 1631 	pop	ar6
      00281C D0 07            [24] 1632 	pop	ar7
                                   1633 ;	main.c:182: for(k=0;k<a;k++)
      00281E D0 07            [24] 1634 	pop	ar7
                                   1635 ;	main.c:197: printf("\n\r%p",i);
      002820                       1636 00102$:
                                   1637 ;	main.c:198: printf_tiny(" %c",*i);
      002820 8B 82            [24] 1638 	mov	dpl,r3
      002822 8C 83            [24] 1639 	mov	dph,r4
      002824 E0               [24] 1640 	movx	a,@dptr
      002825 FA               [12] 1641 	mov	r2,a
      002826 A3               [24] 1642 	inc	dptr
      002827 AB 82            [24] 1643 	mov	r3,dpl
      002829 AC 83            [24] 1644 	mov	r4,dph
      00282B 8A 01            [24] 1645 	mov	ar1,r2
      00282D 7A 00            [12] 1646 	mov	r2,#0x00
      00282F C0 07            [24] 1647 	push	ar7
      002831 C0 06            [24] 1648 	push	ar6
      002833 C0 05            [24] 1649 	push	ar5
      002835 C0 04            [24] 1650 	push	ar4
      002837 C0 03            [24] 1651 	push	ar3
      002839 C0 01            [24] 1652 	push	ar1
      00283B C0 02            [24] 1653 	push	ar2
      00283D 74 00            [12] 1654 	mov	a,#___str_16
      00283F C0 E0            [24] 1655 	push	acc
      002841 74 41            [12] 1656 	mov	a,#(___str_16 >> 8)
      002843 C0 E0            [24] 1657 	push	acc
      002845 12 2C C5         [24] 1658 	lcall	_printf_tiny
      002848 E5 81            [12] 1659 	mov	a,sp
      00284A 24 FC            [12] 1660 	add	a,#0xfc
      00284C F5 81            [12] 1661 	mov	sp,a
      00284E D0 03            [24] 1662 	pop	ar3
      002850 D0 04            [24] 1663 	pop	ar4
      002852 D0 05            [24] 1664 	pop	ar5
      002854 D0 06            [24] 1665 	pop	ar6
      002856 D0 07            [24] 1666 	pop	ar7
                                   1667 ;	main.c:194: for(i=base_address[k],j=0;j<Storage_Char[k];i++,j++)
      002858 05 0C            [12] 1668 	inc	_display_buffers_sloc1_1_0
      00285A E4               [12] 1669 	clr	a
      00285B B5 0C 02         [24] 1670 	cjne	a,_display_buffers_sloc1_1_0,00153$
      00285E 05 0D            [12] 1671 	inc	(_display_buffers_sloc1_1_0 + 1)
      002860                       1672 00153$:
      002860 02 27 C5         [24] 1673 	ljmp	00110$
      002863                       1674 00114$:
                                   1675 ;	main.c:182: for(k=0;k<a;k++)
      002863 0D               [12] 1676 	inc	r5
      002864 BD 00 01         [24] 1677 	cjne	r5,#0x00,00154$
      002867 0E               [12] 1678 	inc	r6
      002868                       1679 00154$:
                                   1680 ;	main.c:203: }
      002868 02 25 FD         [24] 1681 	ljmp	00113$
                                   1682 ;------------------------------------------------------------
                                   1683 ;Allocation info for local variables in function 'free_all'
                                   1684 ;------------------------------------------------------------
                                   1685 ;i                         Allocated with name '_free_all_i_65536_73'
                                   1686 ;------------------------------------------------------------
                                   1687 ;	main.c:209: void free_all()
                                   1688 ;	-----------------------------------------
                                   1689 ;	 function free_all
                                   1690 ;	-----------------------------------------
      00286B                       1691 _free_all:
                                   1692 ;	main.c:211: for(i=0;i<Buffer_Num;i++)
      00286B 7F 00            [12] 1693 	mov	r7,#0x00
      00286D                       1694 00103$:
      00286D 90 14 AC         [24] 1695 	mov	dptr,#_Buffer_Num
      002870 E0               [24] 1696 	movx	a,@dptr
      002871 FE               [12] 1697 	mov	r6,a
      002872 C3               [12] 1698 	clr	c
      002873 EF               [12] 1699 	mov	a,r7
      002874 9E               [12] 1700 	subb	a,r6
      002875 50 5D            [24] 1701 	jnc	00105$
                                   1702 ;	main.c:213: free(buffer[i]);
      002877 EF               [12] 1703 	mov	a,r7
      002878 75 F0 02         [24] 1704 	mov	b,#0x02
      00287B A4               [48] 1705 	mul	ab
      00287C 24 51            [12] 1706 	add	a,#_buffer
      00287E FD               [12] 1707 	mov	r5,a
      00287F 74 14            [12] 1708 	mov	a,#(_buffer >> 8)
      002881 35 F0            [12] 1709 	addc	a,b
      002883 FE               [12] 1710 	mov	r6,a
      002884 8D 82            [24] 1711 	mov	dpl,r5
      002886 8E 83            [24] 1712 	mov	dph,r6
      002888 E0               [24] 1713 	movx	a,@dptr
      002889 FB               [12] 1714 	mov	r3,a
      00288A A3               [24] 1715 	inc	dptr
      00288B E0               [24] 1716 	movx	a,@dptr
      00288C FC               [12] 1717 	mov	r4,a
      00288D 7A 00            [12] 1718 	mov	r2,#0x00
      00288F 8B 82            [24] 1719 	mov	dpl,r3
      002891 8C 83            [24] 1720 	mov	dph,r4
      002893 8A F0            [24] 1721 	mov	b,r2
      002895 C0 07            [24] 1722 	push	ar7
      002897 C0 06            [24] 1723 	push	ar6
      002899 C0 05            [24] 1724 	push	ar5
      00289B 12 2B 53         [24] 1725 	lcall	_free
      00289E D0 05            [24] 1726 	pop	ar5
      0028A0 D0 06            [24] 1727 	pop	ar6
      0028A2 D0 07            [24] 1728 	pop	ar7
                                   1729 ;	main.c:214: printf_tiny("\n\rBuffer_%d Successfully Removed.",i);
      0028A4 8F 03            [24] 1730 	mov	ar3,r7
      0028A6 7C 00            [12] 1731 	mov	r4,#0x00
      0028A8 C0 07            [24] 1732 	push	ar7
      0028AA C0 06            [24] 1733 	push	ar6
      0028AC C0 05            [24] 1734 	push	ar5
      0028AE C0 03            [24] 1735 	push	ar3
      0028B0 C0 04            [24] 1736 	push	ar4
      0028B2 74 5F            [12] 1737 	mov	a,#___str_6
      0028B4 C0 E0            [24] 1738 	push	acc
      0028B6 74 40            [12] 1739 	mov	a,#(___str_6 >> 8)
      0028B8 C0 E0            [24] 1740 	push	acc
      0028BA 12 2C C5         [24] 1741 	lcall	_printf_tiny
      0028BD E5 81            [12] 1742 	mov	a,sp
      0028BF 24 FC            [12] 1743 	add	a,#0xfc
      0028C1 F5 81            [12] 1744 	mov	sp,a
      0028C3 D0 05            [24] 1745 	pop	ar5
      0028C5 D0 06            [24] 1746 	pop	ar6
      0028C7 D0 07            [24] 1747 	pop	ar7
                                   1748 ;	main.c:215: buffer[i]=NULL;
      0028C9 8D 82            [24] 1749 	mov	dpl,r5
      0028CB 8E 83            [24] 1750 	mov	dph,r6
      0028CD E4               [12] 1751 	clr	a
      0028CE F0               [24] 1752 	movx	@dptr,a
      0028CF A3               [24] 1753 	inc	dptr
      0028D0 F0               [24] 1754 	movx	@dptr,a
                                   1755 ;	main.c:211: for(i=0;i<Buffer_Num;i++)
      0028D1 0F               [12] 1756 	inc	r7
      0028D2 80 99            [24] 1757 	sjmp	00103$
      0028D4                       1758 00105$:
                                   1759 ;	main.c:217: }
      0028D4 22               [24] 1760 	ret
                                   1761 ;------------------------------------------------------------
                                   1762 ;Allocation info for local variables in function 'main'
                                   1763 ;------------------------------------------------------------
                                   1764 ;all                       Allocated with name '_main_all_65536_77'
                                   1765 ;sel                       Allocated with name '_main_sel_65536_77'
                                   1766 ;i                         Allocated with name '_main_i_65536_77'
                                   1767 ;b                         Allocated with name '_main_b_65536_77'
                                   1768 ;p                         Allocated with name '_main_p_65536_77'
                                   1769 ;------------------------------------------------------------
                                   1770 ;	main.c:218: void main(void)
                                   1771 ;	-----------------------------------------
                                   1772 ;	 function main
                                   1773 ;	-----------------------------------------
      0028D5                       1774 _main:
                                   1775 ;	main.c:221: unsigned int i=0;           // i-> in main() function, the number of characters stored
      0028D5 90 13 BD         [24] 1776 	mov	dptr,#_main_i_65536_77
      0028D8 E4               [12] 1777 	clr	a
      0028D9 F0               [24] 1778 	movx	@dptr,a
      0028DA A3               [24] 1779 	inc	dptr
      0028DB F0               [24] 1780 	movx	@dptr,a
                                   1781 ;	main.c:224: Buffer_Num=1;
      0028DC 90 14 AC         [24] 1782 	mov	dptr,#_Buffer_Num
      0028DF 04               [12] 1783 	inc	a
      0028E0 F0               [24] 1784 	movx	@dptr,a
                                   1785 ;	main.c:225: while(1)
      0028E1                       1786 00127$:
                                   1787 ;	main.c:227: DEBUGPORT(0x01);
      0028E1 90 00 01         [24] 1788 	mov	dptr,#0x0001
      0028E4 12 22 68         [24] 1789 	lcall	_dataout
                                   1790 ;	main.c:230: all=0;
      0028E7 90 13 BC         [24] 1791 	mov	dptr,#_main_all_65536_77
      0028EA E4               [12] 1792 	clr	a
      0028EB F0               [24] 1793 	movx	@dptr,a
                                   1794 ;	main.c:231: printf_tiny("\n\r Enter Buffer0 Size:");
      0028EC 74 04            [12] 1795 	mov	a,#___str_17
      0028EE C0 E0            [24] 1796 	push	acc
      0028F0 74 41            [12] 1797 	mov	a,#(___str_17 >> 8)
      0028F2 C0 E0            [24] 1798 	push	acc
      0028F4 12 2C C5         [24] 1799 	lcall	_printf_tiny
      0028F7 15 81            [12] 1800 	dec	sp
      0028F9 15 81            [12] 1801 	dec	sp
                                   1802 ;	main.c:232: b=getstr();
      0028FB 12 23 7A         [24] 1803 	lcall	_getstr
                                   1804 ;	main.c:233: p=strtola(b);
      0028FE 12 22 8A         [24] 1805 	lcall	_strtola
      002901 AE 82            [24] 1806 	mov	r6,dpl
      002903 AF 83            [24] 1807 	mov	r7,dph
                                   1808 ;	main.c:234: if(p>=32 && p<=3200)
      002905 C3               [12] 1809 	clr	c
      002906 EE               [12] 1810 	mov	a,r6
      002907 94 20            [12] 1811 	subb	a,#0x20
      002909 EF               [12] 1812 	mov	a,r7
      00290A 94 00            [12] 1813 	subb	a,#0x00
      00290C 50 03            [24] 1814 	jnc	00190$
      00290E 02 29 F1         [24] 1815 	ljmp	00108$
      002911                       1816 00190$:
      002911 C3               [12] 1817 	clr	c
      002912 74 80            [12] 1818 	mov	a,#0x80
      002914 9E               [12] 1819 	subb	a,r6
      002915 74 0C            [12] 1820 	mov	a,#0x0c
      002917 9F               [12] 1821 	subb	a,r7
      002918 50 03            [24] 1822 	jnc	00191$
      00291A 02 29 F1         [24] 1823 	ljmp	00108$
      00291D                       1824 00191$:
                                   1825 ;	main.c:236: if(p%16==0)
      00291D EE               [12] 1826 	mov	a,r6
      00291E 54 0F            [12] 1827 	anl	a,#0x0f
      002920 60 03            [24] 1828 	jz	00193$
      002922 02 29 E0         [24] 1829 	ljmp	00105$
      002925                       1830 00193$:
                                   1831 ;	main.c:238: buffer[0] = (uint8_t __xdata*)malloc(p);
      002925 8E 82            [24] 1832 	mov	dpl,r6
      002927 8F 83            [24] 1833 	mov	dph,r7
      002929 C0 07            [24] 1834 	push	ar7
      00292B C0 06            [24] 1835 	push	ar6
      00292D 12 2E 0A         [24] 1836 	lcall	_malloc
      002930 AC 82            [24] 1837 	mov	r4,dpl
      002932 AD 83            [24] 1838 	mov	r5,dph
      002934 D0 06            [24] 1839 	pop	ar6
      002936 D0 07            [24] 1840 	pop	ar7
      002938 90 14 51         [24] 1841 	mov	dptr,#_buffer
      00293B EC               [12] 1842 	mov	a,r4
      00293C F0               [24] 1843 	movx	@dptr,a
      00293D ED               [12] 1844 	mov	a,r5
      00293E A3               [24] 1845 	inc	dptr
      00293F F0               [24] 1846 	movx	@dptr,a
                                   1847 ;	main.c:239: if(NULL == buffer[0])
      002940 EC               [12] 1848 	mov	a,r4
      002941 4D               [12] 1849 	orl	a,r5
      002942 70 12            [24] 1850 	jnz	00102$
                                   1851 ;	main.c:241: printf_tiny("\n\rMemory not allocated");
      002944 74 FC            [12] 1852 	mov	a,#___str_2
      002946 C0 E0            [24] 1853 	push	acc
      002948 74 3F            [12] 1854 	mov	a,#(___str_2 >> 8)
      00294A C0 E0            [24] 1855 	push	acc
      00294C 12 2C C5         [24] 1856 	lcall	_printf_tiny
      00294F 15 81            [12] 1857 	dec	sp
      002951 15 81            [12] 1858 	dec	sp
      002953 02 2A 00         [24] 1859 	ljmp	00109$
      002956                       1860 00102$:
                                   1861 ;	main.c:245: {   DEBUGPORT(0x01);
      002956 90 00 01         [24] 1862 	mov	dptr,#0x0001
      002959 C0 07            [24] 1863 	push	ar7
      00295B C0 06            [24] 1864 	push	ar6
      00295D 12 22 68         [24] 1865 	lcall	_dataout
      002960 D0 06            [24] 1866 	pop	ar6
      002962 D0 07            [24] 1867 	pop	ar7
                                   1868 ;	main.c:246: Buffer_Size[0]=p;
      002964 90 14 8D         [24] 1869 	mov	dptr,#_Buffer_Size
      002967 EE               [12] 1870 	mov	a,r6
      002968 F0               [24] 1871 	movx	@dptr,a
      002969 EF               [12] 1872 	mov	a,r7
      00296A A3               [24] 1873 	inc	dptr
      00296B F0               [24] 1874 	movx	@dptr,a
                                   1875 ;	main.c:247: printf_small("\n\rMemory allocated");
      00296C 74 13            [12] 1876 	mov	a,#___str_3
      00296E C0 E0            [24] 1877 	push	acc
      002970 74 40            [12] 1878 	mov	a,#(___str_3 >> 8)
      002972 C0 E0            [24] 1879 	push	acc
      002974 74 80            [12] 1880 	mov	a,#0x80
      002976 C0 E0            [24] 1881 	push	acc
      002978 12 2F 93         [24] 1882 	lcall	_printf_small
      00297B 15 81            [12] 1883 	dec	sp
      00297D 15 81            [12] 1884 	dec	sp
      00297F 15 81            [12] 1885 	dec	sp
                                   1886 ;	main.c:248: printf("\n\r Address:%p",buffer[0]);
      002981 90 14 51         [24] 1887 	mov	dptr,#_buffer
      002984 E0               [24] 1888 	movx	a,@dptr
      002985 FE               [12] 1889 	mov	r6,a
      002986 A3               [24] 1890 	inc	dptr
      002987 E0               [24] 1891 	movx	a,@dptr
      002988 FF               [12] 1892 	mov	r7,a
      002989 7D 00            [12] 1893 	mov	r5,#0x00
      00298B C0 06            [24] 1894 	push	ar6
      00298D C0 07            [24] 1895 	push	ar7
      00298F C0 05            [24] 1896 	push	ar5
      002991 74 1B            [12] 1897 	mov	a,#___str_18
      002993 C0 E0            [24] 1898 	push	acc
      002995 74 41            [12] 1899 	mov	a,#(___str_18 >> 8)
      002997 C0 E0            [24] 1900 	push	acc
      002999 74 80            [12] 1901 	mov	a,#0x80
      00299B C0 E0            [24] 1902 	push	acc
      00299D 12 33 69         [24] 1903 	lcall	_printf
      0029A0 E5 81            [12] 1904 	mov	a,sp
      0029A2 24 FA            [12] 1905 	add	a,#0xfa
      0029A4 F5 81            [12] 1906 	mov	sp,a
                                   1907 ;	main.c:249: base_address[0]=buffer[0];
      0029A6 90 14 51         [24] 1908 	mov	dptr,#_buffer
      0029A9 E0               [24] 1909 	movx	a,@dptr
      0029AA FE               [12] 1910 	mov	r6,a
      0029AB A3               [24] 1911 	inc	dptr
      0029AC E0               [24] 1912 	movx	a,@dptr
      0029AD FF               [12] 1913 	mov	r7,a
      0029AE 90 14 65         [24] 1914 	mov	dptr,#_base_address
      0029B1 EE               [12] 1915 	mov	a,r6
      0029B2 F0               [24] 1916 	movx	@dptr,a
      0029B3 EF               [12] 1917 	mov	a,r7
      0029B4 A3               [24] 1918 	inc	dptr
      0029B5 F0               [24] 1919 	movx	@dptr,a
                                   1920 ;	main.c:250: end_address[0]=buffer[0]+(Buffer_Size[0]/sizeof(uint8_t));  // The base address is added with the maximum number of characters that can be stored in the heap
      0029B6 90 14 51         [24] 1921 	mov	dptr,#_buffer
      0029B9 E0               [24] 1922 	movx	a,@dptr
      0029BA FE               [12] 1923 	mov	r6,a
      0029BB A3               [24] 1924 	inc	dptr
      0029BC E0               [24] 1925 	movx	a,@dptr
      0029BD FF               [12] 1926 	mov	r7,a
      0029BE 90 14 8D         [24] 1927 	mov	dptr,#_Buffer_Size
      0029C1 E0               [24] 1928 	movx	a,@dptr
      0029C2 FC               [12] 1929 	mov	r4,a
      0029C3 A3               [24] 1930 	inc	dptr
      0029C4 E0               [24] 1931 	movx	a,@dptr
      0029C5 FD               [12] 1932 	mov	r5,a
      0029C6 EC               [12] 1933 	mov	a,r4
      0029C7 2E               [12] 1934 	add	a,r6
      0029C8 FE               [12] 1935 	mov	r6,a
      0029C9 ED               [12] 1936 	mov	a,r5
      0029CA 3F               [12] 1937 	addc	a,r7
      0029CB FF               [12] 1938 	mov	r7,a
      0029CC 90 14 79         [24] 1939 	mov	dptr,#_end_address
      0029CF EE               [12] 1940 	mov	a,r6
      0029D0 F0               [24] 1941 	movx	@dptr,a
      0029D1 EF               [12] 1942 	mov	a,r7
      0029D2 A3               [24] 1943 	inc	dptr
      0029D3 F0               [24] 1944 	movx	@dptr,a
                                   1945 ;	main.c:251: Storage_Char[0]=0;
      0029D4 90 14 A2         [24] 1946 	mov	dptr,#_Storage_Char
      0029D7 E4               [12] 1947 	clr	a
      0029D8 F0               [24] 1948 	movx	@dptr,a
                                   1949 ;	main.c:252: all=1;
      0029D9 90 13 BC         [24] 1950 	mov	dptr,#_main_all_65536_77
      0029DC 04               [12] 1951 	inc	a
      0029DD F0               [24] 1952 	movx	@dptr,a
      0029DE 80 20            [24] 1953 	sjmp	00109$
      0029E0                       1954 00105$:
                                   1955 ;	main.c:256: printf_tiny("\n\rNot Defined Space");
      0029E0 74 26            [12] 1956 	mov	a,#___str_4
      0029E2 C0 E0            [24] 1957 	push	acc
      0029E4 74 40            [12] 1958 	mov	a,#(___str_4 >> 8)
      0029E6 C0 E0            [24] 1959 	push	acc
      0029E8 12 2C C5         [24] 1960 	lcall	_printf_tiny
      0029EB 15 81            [12] 1961 	dec	sp
      0029ED 15 81            [12] 1962 	dec	sp
      0029EF 80 0F            [24] 1963 	sjmp	00109$
      0029F1                       1964 00108$:
                                   1965 ;	main.c:259: printf_tiny("\n\rNot Defined Space");
      0029F1 74 26            [12] 1966 	mov	a,#___str_4
      0029F3 C0 E0            [24] 1967 	push	acc
      0029F5 74 40            [12] 1968 	mov	a,#(___str_4 >> 8)
      0029F7 C0 E0            [24] 1969 	push	acc
      0029F9 12 2C C5         [24] 1970 	lcall	_printf_tiny
      0029FC 15 81            [12] 1971 	dec	sp
      0029FE 15 81            [12] 1972 	dec	sp
      002A00                       1973 00109$:
                                   1974 ;	main.c:260: if(1==all)
      002A00 90 13 BC         [24] 1975 	mov	dptr,#_main_all_65536_77
      002A03 E0               [24] 1976 	movx	a,@dptr
      002A04 FF               [12] 1977 	mov	r7,a
      002A05 BF 01 02         [24] 1978 	cjne	r7,#0x01,00195$
      002A08 80 03            [24] 1979 	sjmp	00196$
      002A0A                       1980 00195$:
      002A0A 02 28 E1         [24] 1981 	ljmp	00127$
      002A0D                       1982 00196$:
                                   1983 ;	main.c:263: do {
      002A0D                       1984 00121$:
                                   1985 ;	main.c:264: printf_tiny("\n\r Notes:");
      002A0D 74 29            [12] 1986 	mov	a,#___str_19
      002A0F C0 E0            [24] 1987 	push	acc
      002A11 74 41            [12] 1988 	mov	a,#(___str_19 >> 8)
      002A13 C0 E0            [24] 1989 	push	acc
      002A15 12 2C C5         [24] 1990 	lcall	_printf_tiny
      002A18 15 81            [12] 1991 	dec	sp
      002A1A 15 81            [12] 1992 	dec	sp
                                   1993 ;	main.c:265: printf_tiny("\n\r 1. a-z will be stored in buffer.");
      002A1C 74 33            [12] 1994 	mov	a,#___str_20
      002A1E C0 E0            [24] 1995 	push	acc
      002A20 74 41            [12] 1996 	mov	a,#(___str_20 >> 8)
      002A22 C0 E0            [24] 1997 	push	acc
      002A24 12 2C C5         [24] 1998 	lcall	_printf_tiny
      002A27 15 81            [12] 1999 	dec	sp
      002A29 15 81            [12] 2000 	dec	sp
                                   2001 ;	main.c:266: printf_tiny("\n\r 2. + will add more buffer space.");
      002A2B 74 57            [12] 2002 	mov	a,#___str_21
      002A2D C0 E0            [24] 2003 	push	acc
      002A2F 74 41            [12] 2004 	mov	a,#(___str_21 >> 8)
      002A31 C0 E0            [24] 2005 	push	acc
      002A33 12 2C C5         [24] 2006 	lcall	_printf_tiny
      002A36 15 81            [12] 2007 	dec	sp
      002A38 15 81            [12] 2008 	dec	sp
                                   2009 ;	main.c:267: printf_tiny("\n\r 3. - will remove the buffer space.");
      002A3A 74 7B            [12] 2010 	mov	a,#___str_22
      002A3C C0 E0            [24] 2011 	push	acc
      002A3E 74 41            [12] 2012 	mov	a,#(___str_22 >> 8)
      002A40 C0 E0            [24] 2013 	push	acc
      002A42 12 2C C5         [24] 2014 	lcall	_printf_tiny
      002A45 15 81            [12] 2015 	dec	sp
      002A47 15 81            [12] 2016 	dec	sp
                                   2017 ;	main.c:268: printf_tiny("\n\r 4. ? will show the Buffer Report.");
      002A49 74 A1            [12] 2018 	mov	a,#___str_23
      002A4B C0 E0            [24] 2019 	push	acc
      002A4D 74 41            [12] 2020 	mov	a,#(___str_23 >> 8)
      002A4F C0 E0            [24] 2021 	push	acc
      002A51 12 2C C5         [24] 2022 	lcall	_printf_tiny
      002A54 15 81            [12] 2023 	dec	sp
      002A56 15 81            [12] 2024 	dec	sp
                                   2025 ;	main.c:269: printf_tiny("\n\r 5. = show the content in buffer_0.");
      002A58 74 C6            [12] 2026 	mov	a,#___str_24
      002A5A C0 E0            [24] 2027 	push	acc
      002A5C 74 41            [12] 2028 	mov	a,#(___str_24 >> 8)
      002A5E C0 E0            [24] 2029 	push	acc
      002A60 12 2C C5         [24] 2030 	lcall	_printf_tiny
      002A63 15 81            [12] 2031 	dec	sp
      002A65 15 81            [12] 2032 	dec	sp
                                   2033 ;	main.c:270: printf_tiny("\n\r 6. @ Empty all buffers and Reset.");
      002A67 74 EC            [12] 2034 	mov	a,#___str_25
      002A69 C0 E0            [24] 2035 	push	acc
      002A6B 74 41            [12] 2036 	mov	a,#(___str_25 >> 8)
      002A6D C0 E0            [24] 2037 	push	acc
      002A6F 12 2C C5         [24] 2038 	lcall	_printf_tiny
      002A72 15 81            [12] 2039 	dec	sp
      002A74 15 81            [12] 2040 	dec	sp
                                   2041 ;	main.c:271: printf_tiny("\n\r Enter the Character:");
      002A76 74 11            [12] 2042 	mov	a,#___str_26
      002A78 C0 E0            [24] 2043 	push	acc
      002A7A 74 42            [12] 2044 	mov	a,#(___str_26 >> 8)
      002A7C C0 E0            [24] 2045 	push	acc
      002A7E 12 2C C5         [24] 2046 	lcall	_printf_tiny
      002A81 15 81            [12] 2047 	dec	sp
      002A83 15 81            [12] 2048 	dec	sp
                                   2049 ;	main.c:272: sel=getchar();
      002A85 12 23 6C         [24] 2050 	lcall	_getchar
      002A88 AE 82            [24] 2051 	mov	r6,dpl
                                   2052 ;	main.c:273: printf_tiny("%c",sel);
      002A8A 8E 05            [24] 2053 	mov	ar5,r6
      002A8C 7F 00            [12] 2054 	mov	r7,#0x00
      002A8E C0 06            [24] 2055 	push	ar6
      002A90 C0 05            [24] 2056 	push	ar5
      002A92 C0 07            [24] 2057 	push	ar7
      002A94 74 E1            [12] 2058 	mov	a,#___str_0
      002A96 C0 E0            [24] 2059 	push	acc
      002A98 74 3F            [12] 2060 	mov	a,#(___str_0 >> 8)
      002A9A C0 E0            [24] 2061 	push	acc
      002A9C 12 2C C5         [24] 2062 	lcall	_printf_tiny
      002A9F E5 81            [12] 2063 	mov	a,sp
      002AA1 24 FC            [12] 2064 	add	a,#0xfc
      002AA3 F5 81            [12] 2065 	mov	sp,a
                                   2066 ;	main.c:274: Total_Char++;
      002AA5 90 14 A1         [24] 2067 	mov	dptr,#_Total_Char
      002AA8 E0               [24] 2068 	movx	a,@dptr
      002AA9 24 01            [12] 2069 	add	a,#0x01
      002AAB F0               [24] 2070 	movx	@dptr,a
                                   2071 ;	main.c:275: DEBUGPORT(0x02);
      002AAC 90 00 02         [24] 2072 	mov	dptr,#0x0002
      002AAF 12 22 68         [24] 2073 	lcall	_dataout
      002AB2 D0 06            [24] 2074 	pop	ar6
                                   2075 ;	main.c:276: switch(sel)                                 // Switch case to check the required operation for each character
      002AB4 BE 2B 02         [24] 2076 	cjne	r6,#0x2b,00197$
      002AB7 80 14            [24] 2077 	sjmp	00111$
      002AB9                       2078 00197$:
      002AB9 BE 2D 02         [24] 2079 	cjne	r6,#0x2d,00198$
      002ABC 80 18            [24] 2080 	sjmp	00112$
      002ABE                       2081 00198$:
      002ABE BE 3D 02         [24] 2082 	cjne	r6,#0x3d,00199$
      002AC1 80 36            [24] 2083 	sjmp	00114$
      002AC3                       2084 00199$:
      002AC3 BE 3F 02         [24] 2085 	cjne	r6,#0x3f,00200$
      002AC6 80 17            [24] 2086 	sjmp	00113$
      002AC8                       2087 00200$:
                                   2088 ;	main.c:278: case 43 : add_buffer();
      002AC8 BE 40 43         [24] 2089 	cjne	r6,#0x40,00116$
      002ACB 80 38            [24] 2090 	sjmp	00115$
      002ACD                       2091 00111$:
      002ACD C0 06            [24] 2092 	push	ar6
      002ACF 12 24 05         [24] 2093 	lcall	_add_buffer
      002AD2 D0 06            [24] 2094 	pop	ar6
                                   2095 ;	main.c:279: break;
                                   2096 ;	main.c:280: case 45 : delete_buffer();
      002AD4 80 72            [24] 2097 	sjmp	00122$
      002AD6                       2098 00112$:
      002AD6 C0 06            [24] 2099 	push	ar6
      002AD8 12 25 5B         [24] 2100 	lcall	_delete_buffer
      002ADB D0 06            [24] 2101 	pop	ar6
                                   2102 ;	main.c:281: break;
                                   2103 ;	main.c:282: case 63 : display_buffers(Buffer_Num);
      002ADD 80 69            [24] 2104 	sjmp	00122$
      002ADF                       2105 00113$:
      002ADF 90 14 AC         [24] 2106 	mov	dptr,#_Buffer_Num
      002AE2 E0               [24] 2107 	movx	a,@dptr
      002AE3 F5 82            [12] 2108 	mov	dpl,a
      002AE5 C0 06            [24] 2109 	push	ar6
      002AE7 12 25 E8         [24] 2110 	lcall	_display_buffers
      002AEA D0 06            [24] 2111 	pop	ar6
                                   2112 ;	main.c:283: Storage_Char[0]=0;
      002AEC 90 14 A2         [24] 2113 	mov	dptr,#_Storage_Char
      002AEF E4               [12] 2114 	clr	a
      002AF0 F0               [24] 2115 	movx	@dptr,a
                                   2116 ;	main.c:284: i=0;
      002AF1 90 13 BD         [24] 2117 	mov	dptr,#_main_i_65536_77
      002AF4 F0               [24] 2118 	movx	@dptr,a
      002AF5 A3               [24] 2119 	inc	dptr
      002AF6 F0               [24] 2120 	movx	@dptr,a
                                   2121 ;	main.c:285: break;
                                   2122 ;	main.c:286: case 61 : display_buffers(1);
      002AF7 80 4F            [24] 2123 	sjmp	00122$
      002AF9                       2124 00114$:
      002AF9 75 82 01         [24] 2125 	mov	dpl,#0x01
      002AFC C0 06            [24] 2126 	push	ar6
      002AFE 12 25 E8         [24] 2127 	lcall	_display_buffers
      002B01 D0 06            [24] 2128 	pop	ar6
                                   2129 ;	main.c:287: break;
                                   2130 ;	main.c:288: case 64 : free_all();
      002B03 80 43            [24] 2131 	sjmp	00122$
      002B05                       2132 00115$:
      002B05 C0 06            [24] 2133 	push	ar6
      002B07 12 28 6B         [24] 2134 	lcall	_free_all
      002B0A D0 06            [24] 2135 	pop	ar6
                                   2136 ;	main.c:289: break;
                                   2137 ;	main.c:290: default: if(sel>=97 && sel<=122)
      002B0C 80 3A            [24] 2138 	sjmp	00122$
      002B0E                       2139 00116$:
      002B0E BE 61 00         [24] 2140 	cjne	r6,#0x61,00202$
      002B11                       2141 00202$:
      002B11 40 35            [24] 2142 	jc	00122$
      002B13 EE               [12] 2143 	mov	a,r6
      002B14 24 85            [12] 2144 	add	a,#0xff - 0x7a
      002B16 40 30            [24] 2145 	jc	00122$
                                   2146 ;	main.c:292: *(buffer[0]+i)=sel;
      002B18 90 14 51         [24] 2147 	mov	dptr,#_buffer
      002B1B E0               [24] 2148 	movx	a,@dptr
      002B1C FD               [12] 2149 	mov	r5,a
      002B1D A3               [24] 2150 	inc	dptr
      002B1E E0               [24] 2151 	movx	a,@dptr
      002B1F FF               [12] 2152 	mov	r7,a
      002B20 90 13 BD         [24] 2153 	mov	dptr,#_main_i_65536_77
      002B23 E0               [24] 2154 	movx	a,@dptr
      002B24 FB               [12] 2155 	mov	r3,a
      002B25 A3               [24] 2156 	inc	dptr
      002B26 E0               [24] 2157 	movx	a,@dptr
      002B27 FC               [12] 2158 	mov	r4,a
      002B28 EB               [12] 2159 	mov	a,r3
      002B29 2D               [12] 2160 	add	a,r5
      002B2A F5 82            [12] 2161 	mov	dpl,a
      002B2C EC               [12] 2162 	mov	a,r4
      002B2D 3F               [12] 2163 	addc	a,r7
      002B2E F5 83            [12] 2164 	mov	dph,a
      002B30 EE               [12] 2165 	mov	a,r6
      002B31 F0               [24] 2166 	movx	@dptr,a
                                   2167 ;	main.c:293: i++;
      002B32 90 13 BD         [24] 2168 	mov	dptr,#_main_i_65536_77
      002B35 74 01            [12] 2169 	mov	a,#0x01
      002B37 2B               [12] 2170 	add	a,r3
      002B38 F0               [24] 2171 	movx	@dptr,a
      002B39 E4               [12] 2172 	clr	a
      002B3A 3C               [12] 2173 	addc	a,r4
      002B3B A3               [24] 2174 	inc	dptr
      002B3C F0               [24] 2175 	movx	@dptr,a
                                   2176 ;	main.c:294: Storage_Char[0]++;
      002B3D 90 14 A2         [24] 2177 	mov	dptr,#_Storage_Char
      002B40 E0               [24] 2178 	movx	a,@dptr
      002B41 FF               [12] 2179 	mov	r7,a
      002B42 0F               [12] 2180 	inc	r7
      002B43 90 14 A2         [24] 2181 	mov	dptr,#_Storage_Char
      002B46 EF               [12] 2182 	mov	a,r7
      002B47 F0               [24] 2183 	movx	@dptr,a
                                   2184 ;	main.c:297: }
      002B48                       2185 00122$:
                                   2186 ;	main.c:298: }while(sel!=64);
      002B48 BE 40 02         [24] 2187 	cjne	r6,#0x40,00205$
      002B4B 80 03            [24] 2188 	sjmp	00206$
      002B4D                       2189 00205$:
      002B4D 02 2A 0D         [24] 2190 	ljmp	00121$
      002B50                       2191 00206$:
                                   2192 ;	main.c:301: }
      002B50 02 28 E1         [24] 2193 	ljmp	00127$
                                   2194 	.area CSEG    (CODE)
                                   2195 	.area CONST   (CODE)
                                   2196 	.area CONST   (CODE)
      003FE1                       2197 ___str_0:
      003FE1 25 63                 2198 	.ascii "%c"
      003FE3 00                    2199 	.db 0x00
                                   2200 	.area CSEG    (CODE)
                                   2201 	.area CONST   (CODE)
      003FE4                       2202 ___str_1:
      003FE4 0A                    2203 	.db 0x0a
      003FE5 20 45 6E 74 65 72 20  2204 	.ascii " Enter Buffer_%d Size:"
             42 75 66 66 65 72 5F
             25 64 20 53 69 7A 65
             3A
      003FFB 00                    2205 	.db 0x00
                                   2206 	.area CSEG    (CODE)
                                   2207 	.area CONST   (CODE)
      003FFC                       2208 ___str_2:
      003FFC 0A                    2209 	.db 0x0a
      003FFD 0D                    2210 	.db 0x0d
      003FFE 4D 65 6D 6F 72 79 20  2211 	.ascii "Memory not allocated"
             6E 6F 74 20 61 6C 6C
             6F 63 61 74 65 64
      004012 00                    2212 	.db 0x00
                                   2213 	.area CSEG    (CODE)
                                   2214 	.area CONST   (CODE)
      004013                       2215 ___str_3:
      004013 0A                    2216 	.db 0x0a
      004014 0D                    2217 	.db 0x0d
      004015 4D 65 6D 6F 72 79 20  2218 	.ascii "Memory allocated"
             61 6C 6C 6F 63 61 74
             65 64
      004025 00                    2219 	.db 0x00
                                   2220 	.area CSEG    (CODE)
                                   2221 	.area CONST   (CODE)
      004026                       2222 ___str_4:
      004026 0A                    2223 	.db 0x0a
      004027 0D                    2224 	.db 0x0d
      004028 4E 6F 74 20 44 65 66  2225 	.ascii "Not Defined Space"
             69 6E 65 64 20 53 70
             61 63 65
      004039 00                    2226 	.db 0x00
                                   2227 	.area CSEG    (CODE)
                                   2228 	.area CONST   (CODE)
      00403A                       2229 ___str_5:
      00403A 0A                    2230 	.db 0x0a
      00403B 20 45 6E 74 65 72 20  2231 	.ascii " Enter Buffer number to be deleted:"
             42 75 66 66 65 72 20
             6E 75 6D 62 65 72 20
             74 6F 20 62 65 20 64
             65 6C 65 74 65 64 3A
      00405E 00                    2232 	.db 0x00
                                   2233 	.area CSEG    (CODE)
                                   2234 	.area CONST   (CODE)
      00405F                       2235 ___str_6:
      00405F 0A                    2236 	.db 0x0a
      004060 0D                    2237 	.db 0x0d
      004061 42 75 66 66 65 72 5F  2238 	.ascii "Buffer_%d Successfully Removed."
             25 64 20 53 75 63 63
             65 73 73 66 75 6C 6C
             79 20 52 65 6D 6F 76
             65 64 2E
      004080 00                    2239 	.db 0x00
                                   2240 	.area CSEG    (CODE)
                                   2241 	.area CONST   (CODE)
      004081                       2242 ___str_7:
      004081 0A                    2243 	.db 0x0a
      004082 0D                    2244 	.db 0x0d
      004083 49 6E 76 61 6C 69 64  2245 	.ascii "Invalid Buffer Number."
             20 42 75 66 66 65 72
             20 4E 75 6D 62 65 72
             2E
      004099 00                    2246 	.db 0x00
                                   2247 	.area CSEG    (CODE)
                                   2248 	.area CONST   (CODE)
      00409A                       2249 ___str_8:
      00409A 0A                    2250 	.db 0x0a
      00409B 0A                    2251 	.db 0x0a
      00409C 0A                    2252 	.db 0x0a
      00409D 0A                    2253 	.db 0x0a
      00409E 0D                    2254 	.db 0x0d
      00409F 00                    2255 	.db 0x00
                                   2256 	.area CSEG    (CODE)
                                   2257 	.area CONST   (CODE)
      0040A0                       2258 ___str_9:
      0040A0 42 75 66 66 65 72 5F  2259 	.ascii "Buffer_%d:"
             25 64 3A
      0040AA 00                    2260 	.db 0x00
                                   2261 	.area CSEG    (CODE)
                                   2262 	.area CONST   (CODE)
      0040AB                       2263 ___str_10:
      0040AB 0A                    2264 	.db 0x0a
      0040AC 0D                    2265 	.db 0x0d
      0040AD 42 61 73 65 20 41 64  2266 	.ascii "Base Address:%p"
             64 72 65 73 73 3A 25
             70
      0040BC 00                    2267 	.db 0x00
                                   2268 	.area CSEG    (CODE)
                                   2269 	.area CONST   (CODE)
      0040BD                       2270 ___str_11:
      0040BD 0A                    2271 	.db 0x0a
      0040BE 0D                    2272 	.db 0x0d
      0040BF 45 6E 64 20 41 64 64  2273 	.ascii "End Address:%p"
             72 65 73 73 3A 25 70
      0040CD 00                    2274 	.db 0x00
                                   2275 	.area CSEG    (CODE)
                                   2276 	.area CONST   (CODE)
      0040CE                       2277 ___str_12:
      0040CE 0A                    2278 	.db 0x0a
      0040CF 0D                    2279 	.db 0x0d
      0040D0 53 74 6F 72 61 67 65  2280 	.ascii "Storage Chars:%d"
             20 43 68 61 72 73 3A
             25 64
      0040E0 00                    2281 	.db 0x00
                                   2282 	.area CSEG    (CODE)
                                   2283 	.area CONST   (CODE)
      0040E1                       2284 ___str_13:
      0040E1 0A                    2285 	.db 0x0a
      0040E2 0D                    2286 	.db 0x0d
      0040E3 53 69 7A 65 3A 25 64  2287 	.ascii "Size:%d"
      0040EA 00                    2288 	.db 0x00
                                   2289 	.area CSEG    (CODE)
                                   2290 	.area CONST   (CODE)
      0040EB                       2291 ___str_14:
      0040EB 0A                    2292 	.db 0x0a
      0040EC 0D                    2293 	.db 0x0d
      0040ED 46 72 65 65 20 53 70  2294 	.ascii "Free Space:%d"
             61 63 65 3A 25 64
      0040FA 00                    2295 	.db 0x00
                                   2296 	.area CSEG    (CODE)
                                   2297 	.area CONST   (CODE)
      0040FB                       2298 ___str_15:
      0040FB 0A                    2299 	.db 0x0a
      0040FC 0D                    2300 	.db 0x0d
      0040FD 25 70                 2301 	.ascii "%p"
      0040FF 00                    2302 	.db 0x00
                                   2303 	.area CSEG    (CODE)
                                   2304 	.area CONST   (CODE)
      004100                       2305 ___str_16:
      004100 20 25 63              2306 	.ascii " %c"
      004103 00                    2307 	.db 0x00
                                   2308 	.area CSEG    (CODE)
                                   2309 	.area CONST   (CODE)
      004104                       2310 ___str_17:
      004104 0A                    2311 	.db 0x0a
      004105 0D                    2312 	.db 0x0d
      004106 20 45 6E 74 65 72 20  2313 	.ascii " Enter Buffer0 Size:"
             42 75 66 66 65 72 30
             20 53 69 7A 65 3A
      00411A 00                    2314 	.db 0x00
                                   2315 	.area CSEG    (CODE)
                                   2316 	.area CONST   (CODE)
      00411B                       2317 ___str_18:
      00411B 0A                    2318 	.db 0x0a
      00411C 0D                    2319 	.db 0x0d
      00411D 20 41 64 64 72 65 73  2320 	.ascii " Address:%p"
             73 3A 25 70
      004128 00                    2321 	.db 0x00
                                   2322 	.area CSEG    (CODE)
                                   2323 	.area CONST   (CODE)
      004129                       2324 ___str_19:
      004129 0A                    2325 	.db 0x0a
      00412A 0D                    2326 	.db 0x0d
      00412B 20 4E 6F 74 65 73 3A  2327 	.ascii " Notes:"
      004132 00                    2328 	.db 0x00
                                   2329 	.area CSEG    (CODE)
                                   2330 	.area CONST   (CODE)
      004133                       2331 ___str_20:
      004133 0A                    2332 	.db 0x0a
      004134 0D                    2333 	.db 0x0d
      004135 20 31 2E 20 61 2D 7A  2334 	.ascii " 1. a-z will be stored in buffer."
             20 77 69 6C 6C 20 62
             65 20 73 74 6F 72 65
             64 20 69 6E 20 62 75
             66 66 65 72 2E
      004156 00                    2335 	.db 0x00
                                   2336 	.area CSEG    (CODE)
                                   2337 	.area CONST   (CODE)
      004157                       2338 ___str_21:
      004157 0A                    2339 	.db 0x0a
      004158 0D                    2340 	.db 0x0d
      004159 20 32 2E 20 2B 20 77  2341 	.ascii " 2. + will add more buffer space."
             69 6C 6C 20 61 64 64
             20 6D 6F 72 65 20 62
             75 66 66 65 72 20 73
             70 61 63 65 2E
      00417A 00                    2342 	.db 0x00
                                   2343 	.area CSEG    (CODE)
                                   2344 	.area CONST   (CODE)
      00417B                       2345 ___str_22:
      00417B 0A                    2346 	.db 0x0a
      00417C 0D                    2347 	.db 0x0d
      00417D 20 33 2E 20 2D 20 77  2348 	.ascii " 3. - will remove the buffer space."
             69 6C 6C 20 72 65 6D
             6F 76 65 20 74 68 65
             20 62 75 66 66 65 72
             20 73 70 61 63 65 2E
      0041A0 00                    2349 	.db 0x00
                                   2350 	.area CSEG    (CODE)
                                   2351 	.area CONST   (CODE)
      0041A1                       2352 ___str_23:
      0041A1 0A                    2353 	.db 0x0a
      0041A2 0D                    2354 	.db 0x0d
      0041A3 20 34 2E 20 3F 20 77  2355 	.ascii " 4. ? will show the Buffer Report."
             69 6C 6C 20 73 68 6F
             77 20 74 68 65 20 42
             75 66 66 65 72 20 52
             65 70 6F 72 74 2E
      0041C5 00                    2356 	.db 0x00
                                   2357 	.area CSEG    (CODE)
                                   2358 	.area CONST   (CODE)
      0041C6                       2359 ___str_24:
      0041C6 0A                    2360 	.db 0x0a
      0041C7 0D                    2361 	.db 0x0d
      0041C8 20 35 2E 20 3D 20 73  2362 	.ascii " 5. = show the content in buffer_0."
             68 6F 77 20 74 68 65
             20 63 6F 6E 74 65 6E
             74 20 69 6E 20 62 75
             66 66 65 72 5F 30 2E
      0041EB 00                    2363 	.db 0x00
                                   2364 	.area CSEG    (CODE)
                                   2365 	.area CONST   (CODE)
      0041EC                       2366 ___str_25:
      0041EC 0A                    2367 	.db 0x0a
      0041ED 0D                    2368 	.db 0x0d
      0041EE 20 36 2E 20 40 20 45  2369 	.ascii " 6. @ Empty all buffers and Reset."
             6D 70 74 79 20 61 6C
             6C 20 62 75 66 66 65
             72 73 20 61 6E 64 20
             52 65 73 65 74 2E
      004210 00                    2370 	.db 0x00
                                   2371 	.area CSEG    (CODE)
                                   2372 	.area CONST   (CODE)
      004211                       2373 ___str_26:
      004211 0A                    2374 	.db 0x0a
      004212 0D                    2375 	.db 0x0d
      004213 20 45 6E 74 65 72 20  2376 	.ascii " Enter the Character:"
             74 68 65 20 43 68 61
             72 61 63 74 65 72 3A
      004228 00                    2377 	.db 0x00
                                   2378 	.area CSEG    (CODE)
                                   2379 	.area XINIT   (CODE)
      004234                       2380 __xinit__buffer:
      004234 00 00                 2381 	.byte #0x00,#0x00
      004236 00                    2382 	.db 0x00
      004237 00                    2383 	.db 0x00
      004238 00                    2384 	.db 0x00
      004239 00                    2385 	.db 0x00
      00423A 00                    2386 	.db 0x00
      00423B 00                    2387 	.db 0x00
      00423C 00                    2388 	.db 0x00
      00423D 00                    2389 	.db 0x00
      00423E 00                    2390 	.db 0x00
      00423F 00                    2391 	.db 0x00
      004240 00                    2392 	.db 0x00
      004241 00                    2393 	.db 0x00
      004242 00                    2394 	.db 0x00
      004243 00                    2395 	.db 0x00
      004244 00                    2396 	.db 0x00
      004245 00                    2397 	.db 0x00
      004246 00                    2398 	.db 0x00
      004247 00                    2399 	.db 0x00
      004248                       2400 __xinit__base_address:
      004248 00 00                 2401 	.byte #0x00,#0x00
      00424A 00                    2402 	.db 0x00
      00424B 00                    2403 	.db 0x00
      00424C 00                    2404 	.db 0x00
      00424D 00                    2405 	.db 0x00
      00424E 00                    2406 	.db 0x00
      00424F 00                    2407 	.db 0x00
      004250 00                    2408 	.db 0x00
      004251 00                    2409 	.db 0x00
      004252 00                    2410 	.db 0x00
      004253 00                    2411 	.db 0x00
      004254 00                    2412 	.db 0x00
      004255 00                    2413 	.db 0x00
      004256 00                    2414 	.db 0x00
      004257 00                    2415 	.db 0x00
      004258 00                    2416 	.db 0x00
      004259 00                    2417 	.db 0x00
      00425A 00                    2418 	.db 0x00
      00425B 00                    2419 	.db 0x00
      00425C                       2420 __xinit__end_address:
      00425C 00 00                 2421 	.byte #0x00,#0x00
      00425E 00                    2422 	.db 0x00
      00425F 00                    2423 	.db 0x00
      004260 00                    2424 	.db 0x00
      004261 00                    2425 	.db 0x00
      004262 00                    2426 	.db 0x00
      004263 00                    2427 	.db 0x00
      004264 00                    2428 	.db 0x00
      004265 00                    2429 	.db 0x00
      004266 00                    2430 	.db 0x00
      004267 00                    2431 	.db 0x00
      004268 00                    2432 	.db 0x00
      004269 00                    2433 	.db 0x00
      00426A 00                    2434 	.db 0x00
      00426B 00                    2435 	.db 0x00
      00426C 00                    2436 	.db 0x00
      00426D 00                    2437 	.db 0x00
      00426E 00                    2438 	.db 0x00
      00426F 00                    2439 	.db 0x00
      004270                       2440 __xinit__Buffer_Size:
      004270 00 00                 2441 	.byte #0x00, #0x00	; 0
      004272 00                    2442 	.db 0x00
      004273 00                    2443 	.db 0x00
      004274 00                    2444 	.db 0x00
      004275 00                    2445 	.db 0x00
      004276 00                    2446 	.db 0x00
      004277 00                    2447 	.db 0x00
      004278 00                    2448 	.db 0x00
      004279 00                    2449 	.db 0x00
      00427A 00                    2450 	.db 0x00
      00427B 00                    2451 	.db 0x00
      00427C 00                    2452 	.db 0x00
      00427D 00                    2453 	.db 0x00
      00427E 00                    2454 	.db 0x00
      00427F 00                    2455 	.db 0x00
      004280 00                    2456 	.db 0x00
      004281 00                    2457 	.db 0x00
      004282 00                    2458 	.db 0x00
      004283 00                    2459 	.db 0x00
      004284                       2460 __xinit__Total_Char:
      004284 00                    2461 	.db #0x00	; 0
      004285                       2462 __xinit__Storage_Char:
      004285 00                    2463 	.db #0x00	; 0
      004286 00                    2464 	.db 0x00
      004287 00                    2465 	.db 0x00
      004288 00                    2466 	.db 0x00
      004289 00                    2467 	.db 0x00
      00428A 00                    2468 	.db 0x00
      00428B 00                    2469 	.db 0x00
      00428C 00                    2470 	.db 0x00
      00428D 00                    2471 	.db 0x00
      00428E 00                    2472 	.db 0x00
      00428F                       2473 __xinit__Buffer_Num:
      00428F 01                    2474 	.db #0x01	; 1
                                   2475 	.area CABS    (ABS,CODE)
