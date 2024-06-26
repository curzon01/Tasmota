/* Solidification of Matter_Plugin_4_Light2.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Light2;

/********************************************************************
** Solidified function: set_ct
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_set_ct,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(ct_min),
    /* K1   */  be_nested_str_weak(ct_max),
    /* K2   */  be_nested_str_weak(BRIDGE),
    /* K3   */  be_nested_str_weak(call_remote_sync),
    /* K4   */  be_nested_str_weak(CT),
    /* K5   */  be_nested_str_weak(parse_status),
    /* K6   */  be_nested_str_weak(VIRTUAL),
    /* K7   */  be_nested_str_weak(shadow_ct),
    /* K8   */  be_nested_str_weak(attribute_updated),
    /* K9   */  be_nested_str_weak(light),
    /* K10  */  be_nested_str_weak(set),
    /* K11  */  be_nested_str_weak(ct),
    /* K12  */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(set_ct),
    &be_const_str_solidified,
    ( &(const binstruction[44]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x14080202,  //  0001  LT	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x88040100,  //  0003  GETMBR	R1	R0	K0
      0x88080101,  //  0004  GETMBR	R2	R0	K1
      0x24080202,  //  0005  GT	R2	R1	R2
      0x780A0000,  //  0006  JMPF	R2	#0008
      0x88040101,  //  0007  GETMBR	R1	R0	K1
      0x88080102,  //  0008  GETMBR	R2	R0	K2
      0x780A000D,  //  0009  JMPF	R2	#0018
      0x8C080103,  //  000A  GETMET	R2	R0	K3
      0x58100004,  //  000B  LDCONST	R4	K4
      0x60140008,  //  000C  GETGBL	R5	G8
      0x5C180200,  //  000D  MOVE	R6	R1
      0x7C140200,  //  000E  CALL	R5	1
      0x7C080600,  //  000F  CALL	R2	3
      0x4C0C0000,  //  0010  LDNIL	R3
      0x200C0403,  //  0011  NE	R3	R2	R3
      0x780E0003,  //  0012  JMPF	R3	#0017
      0x8C0C0105,  //  0013  GETMET	R3	R0	K5
      0x5C140400,  //  0014  MOVE	R5	R2
      0x541A000A,  //  0015  LDINT	R6	11
      0x7C0C0600,  //  0016  CALL	R3	3
      0x70020012,  //  0017  JMP		#002B
      0x88080106,  //  0018  GETMBR	R2	R0	K6
      0x780A0008,  //  0019  JMPF	R2	#0023
      0x88080107,  //  001A  GETMBR	R2	R0	K7
      0x20080202,  //  001B  NE	R2	R1	R2
      0x780A0004,  //  001C  JMPF	R2	#0022
      0x8C080108,  //  001D  GETMET	R2	R0	K8
      0x541202FF,  //  001E  LDINT	R4	768
      0x54160006,  //  001F  LDINT	R5	7
      0x7C080600,  //  0020  CALL	R2	3
      0x90020E01,  //  0021  SETMBR	R0	K7	R1
      0x70020007,  //  0022  JMP		#002B
      0xA40A1200,  //  0023  IMPORT	R2	K9
      0x8C0C050A,  //  0024  GETMET	R3	R2	K10
      0x60140013,  //  0025  GETGBL	R5	G19
      0x7C140000,  //  0026  CALL	R5	0
      0x98161601,  //  0027  SETIDX	R5	K11	R1
      0x7C0C0400,  //  0028  CALL	R3	2
      0x8C0C010C,  //  0029  GETMET	R3	R0	K12
      0x7C0C0200,  //  002A  CALL	R3	1
      0x80000000,  //  002B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invoke_request
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_invoke_request,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_nested_str_weak(update_shadow_lazy),
    /* K5   */  be_nested_str_weak(findsubval),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str_weak(ct_min),
    /* K8   */  be_nested_str_weak(ct_max),
    /* K9   */  be_nested_str_weak(set_ct),
    /* K10  */  be_nested_str_weak(log),
    /* K11  */  be_nested_str_weak(ct_X3A),
    /* K12  */  be_nested_str_weak(publish_command),
    /* K13  */  be_nested_str_weak(CT),
    /* K14  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[66]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x541E02FF,  //  0004  LDINT	R7	768
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0030,  //  0006  JMPF	R7	#0038
      0x8C1C0104,  //  0007  GETMET	R7	R0	K4
      0x7C1C0200,  //  0008  CALL	R7	1
      0x541E0009,  //  0009  LDINT	R7	10
      0x1C1C0C07,  //  000A  EQ	R7	R6	R7
      0x781E0019,  //  000B  JMPF	R7	#0026
      0x8C1C0505,  //  000C  GETMET	R7	R2	K5
      0x58240006,  //  000D  LDCONST	R9	K6
      0x7C1C0400,  //  000E  CALL	R7	2
      0x88200107,  //  000F  GETMBR	R8	R0	K7
      0x14200E08,  //  0010  LT	R8	R7	R8
      0x78220000,  //  0011  JMPF	R8	#0013
      0x881C0107,  //  0012  GETMBR	R7	R0	K7
      0x88200108,  //  0013  GETMBR	R8	R0	K8
      0x24200E08,  //  0014  GT	R8	R7	R8
      0x78220000,  //  0015  JMPF	R8	#0017
      0x881C0108,  //  0016  GETMBR	R7	R0	K8
      0x8C200109,  //  0017  GETMET	R8	R0	K9
      0x5C280E00,  //  0018  MOVE	R10	R7
      0x7C200400,  //  0019  CALL	R8	2
      0x60200008,  //  001A  GETGBL	R8	G8
      0x5C240E00,  //  001B  MOVE	R9	R7
      0x7C200200,  //  001C  CALL	R8	1
      0x00221608,  //  001D  ADD	R8	K11	R8
      0x900E1408,  //  001E  SETMBR	R3	K10	R8
      0x8C20010C,  //  001F  GETMET	R8	R0	K12
      0x5828000D,  //  0020  LDCONST	R10	K13
      0x5C2C0E00,  //  0021  MOVE	R11	R7
      0x7C200600,  //  0022  CALL	R8	3
      0x50200200,  //  0023  LDBOOL	R8	1	0
      0x80041000,  //  0024  RET	1	R8
      0x70020010,  //  0025  JMP		#0037
      0x541E0046,  //  0026  LDINT	R7	71
      0x1C1C0C07,  //  0027  EQ	R7	R6	R7
      0x781E0002,  //  0028  JMPF	R7	#002C
      0x501C0200,  //  0029  LDBOOL	R7	1	0
      0x80040E00,  //  002A  RET	1	R7
      0x7002000A,  //  002B  JMP		#0037
      0x541E004A,  //  002C  LDINT	R7	75
      0x1C1C0C07,  //  002D  EQ	R7	R6	R7
      0x781E0002,  //  002E  JMPF	R7	#0032
      0x501C0200,  //  002F  LDBOOL	R7	1	0
      0x80040E00,  //  0030  RET	1	R7
      0x70020004,  //  0031  JMP		#0037
      0x541E004B,  //  0032  LDINT	R7	76
      0x1C1C0C07,  //  0033  EQ	R7	R6	R7
      0x781E0001,  //  0034  JMPF	R7	#0037
      0x501C0200,  //  0035  LDBOOL	R7	1	0
      0x80040E00,  //  0036  RET	1	R7
      0x70020008,  //  0037  JMP		#0041
      0x601C0003,  //  0038  GETGBL	R7	G3
      0x5C200000,  //  0039  MOVE	R8	R0
      0x7C1C0200,  //  003A  CALL	R7	1
      0x8C1C0F0E,  //  003B  GETMET	R7	R7	K14
      0x5C240200,  //  003C  MOVE	R9	R1
      0x5C280400,  //  003D  MOVE	R10	R2
      0x5C2C0600,  //  003E  MOVE	R11	R3
      0x7C1C0800,  //  003F  CALL	R7	4
      0x80040E00,  //  0040  RET	1	R7
      0x80000000,  //  0041  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(attribute),
    /* K4   */  be_nested_str_weak(update_shadow_lazy),
    /* K5   */  be_nested_str_weak(set_or_nil),
    /* K6   */  be_nested_str_weak(U1),
    /* K7   */  be_nested_str_weak(shadow_ct),
    /* K8   */  be_nested_str_weak(set),
    /* K9   */  be_const_int(2),
    /* K10  */  be_const_int(0),
    /* K11  */  be_nested_str_weak(ct_min),
    /* K12  */  be_nested_str_weak(ct_max),
    /* K13  */  be_nested_str_weak(U4),
    /* K14  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[71]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E02FF,  //  0004  LDINT	R7	768
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0036,  //  0006  JMPF	R7	#003E
      0x8C1C0104,  //  0007  GETMET	R7	R0	K4
      0x7C1C0200,  //  0008  CALL	R7	1
      0x541E0006,  //  0009  LDINT	R7	7
      0x1C1C0C07,  //  000A  EQ	R7	R6	R7
      0x781E0005,  //  000B  JMPF	R7	#0012
      0x8C1C0705,  //  000C  GETMET	R7	R3	K5
      0x88240906,  //  000D  GETMBR	R9	R4	K6
      0x88280107,  //  000E  GETMBR	R10	R0	K7
      0x7C1C0600,  //  000F  CALL	R7	3
      0x80040E00,  //  0010  RET	1	R7
      0x7002002B,  //  0011  JMP		#003E
      0x541E0007,  //  0012  LDINT	R7	8
      0x1C1C0C07,  //  0013  EQ	R7	R6	R7
      0x781E0005,  //  0014  JMPF	R7	#001B
      0x8C1C0708,  //  0015  GETMET	R7	R3	K8
      0x88240906,  //  0016  GETMBR	R9	R4	K6
      0x58280009,  //  0017  LDCONST	R10	K9
      0x7C1C0600,  //  0018  CALL	R7	3
      0x80040E00,  //  0019  RET	1	R7
      0x70020022,  //  001A  JMP		#003E
      0x541E000E,  //  001B  LDINT	R7	15
      0x1C1C0C07,  //  001C  EQ	R7	R6	R7
      0x781E0005,  //  001D  JMPF	R7	#0024
      0x8C1C0708,  //  001E  GETMET	R7	R3	K8
      0x88240906,  //  001F  GETMBR	R9	R4	K6
      0x5828000A,  //  0020  LDCONST	R10	K10
      0x7C1C0600,  //  0021  CALL	R7	3
      0x80040E00,  //  0022  RET	1	R7
      0x70020019,  //  0023  JMP		#003E
      0x541E400A,  //  0024  LDINT	R7	16395
      0x1C1C0C07,  //  0025  EQ	R7	R6	R7
      0x781E0005,  //  0026  JMPF	R7	#002D
      0x8C1C0708,  //  0027  GETMET	R7	R3	K8
      0x88240906,  //  0028  GETMBR	R9	R4	K6
      0x8828010B,  //  0029  GETMBR	R10	R0	K11
      0x7C1C0600,  //  002A  CALL	R7	3
      0x80040E00,  //  002B  RET	1	R7
      0x70020010,  //  002C  JMP		#003E
      0x541E400B,  //  002D  LDINT	R7	16396
      0x1C1C0C07,  //  002E  EQ	R7	R6	R7
      0x781E0005,  //  002F  JMPF	R7	#0036
      0x8C1C0708,  //  0030  GETMET	R7	R3	K8
      0x88240906,  //  0031  GETMBR	R9	R4	K6
      0x8828010C,  //  0032  GETMBR	R10	R0	K12
      0x7C1C0600,  //  0033  CALL	R7	3
      0x80040E00,  //  0034  RET	1	R7
      0x70020007,  //  0035  JMP		#003E
      0x541EFFFB,  //  0036  LDINT	R7	65532
      0x1C1C0C07,  //  0037  EQ	R7	R6	R7
      0x781E0004,  //  0038  JMPF	R7	#003E
      0x8C1C0708,  //  0039  GETMET	R7	R3	K8
      0x8824090D,  //  003A  GETMBR	R9	R4	K13
      0x542A000F,  //  003B  LDINT	R10	16
      0x7C1C0600,  //  003C  CALL	R7	3
      0x80040E00,  //  003D  RET	1	R7
      0x601C0003,  //  003E  GETGBL	R7	G3
      0x5C200000,  //  003F  MOVE	R8	R0
      0x7C1C0200,  //  0040  CALL	R7	1
      0x8C1C0F0E,  //  0041  GETMET	R7	R7	K14
      0x5C240200,  //  0042  MOVE	R9	R1
      0x5C280400,  //  0043  MOVE	R10	R2
      0x5C2C0600,  //  0044  MOVE	R11	R3
      0x7C1C0800,  //  0045  CALL	R7	4
      0x80040E00,  //  0046  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_virtual
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_update_virtual,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(find),
    /* K1   */  be_nested_str_weak(CT),
    /* K2   */  be_nested_str_weak(set_ct),
    /* K3   */  be_nested_str_weak(update_virtual),
    }),
    be_str_weak(update_virtual),
    &be_const_str_solidified,
    ( &(const binstruction[18]) {  /* code */
      0x60080009,  //  0000  GETGBL	R2	G9
      0x8C0C0300,  //  0001  GETMET	R3	R1	K0
      0x58140001,  //  0002  LDCONST	R5	K1
      0x7C0C0400,  //  0003  CALL	R3	2
      0x7C080200,  //  0004  CALL	R2	1
      0x4C0C0000,  //  0005  LDNIL	R3
      0x200C0403,  //  0006  NE	R3	R2	R3
      0x780E0002,  //  0007  JMPF	R3	#000B
      0x8C0C0102,  //  0008  GETMET	R3	R0	K2
      0x5C140400,  //  0009  MOVE	R5	R2
      0x7C0C0400,  //  000A  CALL	R3	2
      0x600C0003,  //  000B  GETGBL	R3	G3
      0x5C100000,  //  000C  MOVE	R4	R0
      0x7C0C0200,  //  000D  CALL	R3	1
      0x8C0C0703,  //  000E  GETMET	R3	R3	K3
      0x5C140200,  //  000F  MOVE	R5	R1
      0x7C0C0400,  //  0010  CALL	R3	2
      0x80000000,  //  0011  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_ct_minmax
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_update_ct_minmax,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(get_option),
    /* K2   */  be_nested_str_weak(ct_min),
    /* K3   */  be_nested_str_weak(ct_max),
    }),
    be_str_weak(update_ct_minmax),
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x540E0051,  //  0002  LDINT	R3	82
      0x7C040400,  //  0003  CALL	R1	2
      0x78060001,  //  0004  JMPF	R1	#0007
      0x540A00C7,  //  0005  LDINT	R2	200
      0x70020000,  //  0006  JMP		#0008
      0x540A0098,  //  0007  LDINT	R2	153
      0x90020402,  //  0008  SETMBR	R0	K2	R2
      0x78060001,  //  0009  JMPF	R1	#000C
      0x540A017B,  //  000A  LDINT	R2	380
      0x70020000,  //  000B  JMP		#000D
      0x540A01F3,  //  000C  LDINT	R2	500
      0x90020602,  //  000D  SETMBR	R0	K3	R2
      0x80000000,  //  000E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(BRIDGE),
    /* K2   */  be_nested_str_weak(shadow_ct),
    /* K3   */  be_nested_str_weak(update_ct_minmax),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x88100101,  //  0008  GETMBR	R4	R0	K1
      0x74120001,  //  0009  JMPT	R4	#000C
      0x54120144,  //  000A  LDINT	R4	325
      0x90020404,  //  000B  SETMBR	R0	K2	R4
      0x8C100103,  //  000C  GETMET	R4	R0	K3
      0x7C100200,  //  000D  CALL	R4	1
      0x80000000,  //  000E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_web_values,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(webserver),
    /* K1   */  be_nested_str_weak(web_values_prefix),
    /* K2   */  be_nested_str_weak(content_send),
    /* K3   */  be_nested_str_weak(_X25s_X20_X25s_X20_X25s),
    /* K4   */  be_nested_str_weak(web_value_onoff),
    /* K5   */  be_nested_str_weak(shadow_onoff),
    /* K6   */  be_nested_str_weak(web_value_dimmer),
    /* K7   */  be_nested_str_weak(web_value_ct),
    }),
    be_str_weak(web_values),
    &be_const_str_solidified,
    ( &(const binstruction[16]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x8C080101,  //  0001  GETMET	R2	R0	K1
      0x7C080200,  //  0002  CALL	R2	1
      0x8C080302,  //  0003  GETMET	R2	R1	K2
      0x60100018,  //  0004  GETGBL	R4	G24
      0x58140003,  //  0005  LDCONST	R5	K3
      0x8C180104,  //  0006  GETMET	R6	R0	K4
      0x88200105,  //  0007  GETMBR	R8	R0	K5
      0x7C180400,  //  0008  CALL	R6	2
      0x8C1C0106,  //  0009  GETMET	R7	R0	K6
      0x7C1C0200,  //  000A  CALL	R7	1
      0x8C200107,  //  000B  GETMET	R8	R0	K7
      0x7C200200,  //  000C  CALL	R8	1
      0x7C100800,  //  000D  CALL	R4	4
      0x7C080400,  //  000E  CALL	R2	2
      0x80000000,  //  000F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_status
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_parse_status,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(parse_status),
    /* K1   */  be_nested_str_weak(find),
    /* K2   */  be_nested_str_weak(CT),
    /* K3   */  be_nested_str_weak(shadow_ct),
    /* K4   */  be_nested_str_weak(ct_min),
    /* K5   */  be_nested_str_weak(ct_max),
    /* K6   */  be_nested_str_weak(attribute_updated),
    }),
    be_str_weak(parse_status),
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0x600C0003,  //  0000  GETGBL	R3	G3
      0x5C100000,  //  0001  MOVE	R4	R0
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0700,  //  0003  GETMET	R3	R3	K0
      0x5C140200,  //  0004  MOVE	R5	R1
      0x5C180400,  //  0005  MOVE	R6	R2
      0x7C0C0600,  //  0006  CALL	R3	3
      0x540E000A,  //  0007  LDINT	R3	11
      0x1C0C0403,  //  0008  EQ	R3	R2	R3
      0x780E0017,  //  0009  JMPF	R3	#0022
      0x600C0009,  //  000A  GETGBL	R3	G9
      0x8C100301,  //  000B  GETMET	R4	R1	K1
      0x58180002,  //  000C  LDCONST	R6	K2
      0x7C100400,  //  000D  CALL	R4	2
      0x7C0C0200,  //  000E  CALL	R3	1
      0x4C100000,  //  000F  LDNIL	R4
      0x20100604,  //  0010  NE	R4	R3	R4
      0x7812000F,  //  0011  JMPF	R4	#0022
      0x88100103,  //  0012  GETMBR	R4	R0	K3
      0x20100604,  //  0013  NE	R4	R3	R4
      0x7812000C,  //  0014  JMPF	R4	#0022
      0x88100104,  //  0015  GETMBR	R4	R0	K4
      0x14100604,  //  0016  LT	R4	R3	R4
      0x78120000,  //  0017  JMPF	R4	#0019
      0x880C0104,  //  0018  GETMBR	R3	R0	K4
      0x88100105,  //  0019  GETMBR	R4	R0	K5
      0x24100604,  //  001A  GT	R4	R3	R4
      0x78120000,  //  001B  JMPF	R4	#001D
      0x880C0105,  //  001C  GETMBR	R3	R0	K5
      0x8C100106,  //  001D  GETMET	R4	R0	K6
      0x541A02FF,  //  001E  LDINT	R6	768
      0x541E0006,  //  001F  LDINT	R7	7
      0x7C100600,  //  0020  CALL	R4	3
      0x90020603,  //  0021  SETMBR	R0	K3	R3
      0x80000000,  //  0022  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_value_ct
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_web_value_ct,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(),
    /* K1   */  be_nested_str_weak(shadow_ct),
    /* K2   */  be_const_int(1000000),
    /* K3   */  be_nested_str_weak(_X25iK),
    /* K4   */  be_nested_str_weak(_X26_X239898_X3B_X20),
    }),
    be_str_weak(web_value_ct),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x4C0C0000,  //  0002  LDNIL	R3
      0x20080403,  //  0003  NE	R2	R2	R3
      0x780A000C,  //  0004  JMPF	R2	#0012
      0x88080101,  //  0005  GETMBR	R2	R0	K1
      0x0C0A0402,  //  0006  DIV	R2	K2	R2
      0x540E0018,  //  0007  LDINT	R3	25
      0x00080403,  //  0008  ADD	R2	R2	R3
      0x540E0031,  //  0009  LDINT	R3	50
      0x0C080403,  //  000A  DIV	R2	R2	R3
      0x540E0031,  //  000B  LDINT	R3	50
      0x08080403,  //  000C  MUL	R2	R2	R3
      0x600C0018,  //  000D  GETGBL	R3	G24
      0x58100003,  //  000E  LDCONST	R4	K3
      0x5C140400,  //  000F  MOVE	R5	R2
      0x7C0C0400,  //  0010  CALL	R3	2
      0x5C040600,  //  0011  MOVE	R1	R3
      0x000A0801,  //  0012  ADD	R2	K4	R1
      0x80040400,  //  0013  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light2;
be_local_closure(class_Matter_Plugin_Light2_update_shadow,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_Plugin_Light2, 
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str_weak(VIRTUAL),
    /* K1   */  be_nested_str_weak(BRIDGE),
    /* K2   */  be_nested_str_weak(light),
    /* K3   */  be_nested_str_weak(update_ct_minmax),
    /* K4   */  be_nested_str_weak(update_shadow),
    /* K5   */  be_nested_str_weak(get),
    /* K6   */  be_nested_str_weak(find),
    /* K7   */  be_nested_str_weak(ct),
    /* K8   */  be_nested_str_weak(shadow_ct),
    /* K9   */  be_nested_str_weak(attribute_updated),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[40]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x7406001F,  //  0001  JMPT	R1	#0022
      0x88040101,  //  0002  GETMBR	R1	R0	K1
      0x7406001D,  //  0003  JMPT	R1	#0022
      0xA4060400,  //  0004  IMPORT	R1	K2
      0x8C080103,  //  0005  GETMET	R2	R0	K3
      0x7C080200,  //  0006  CALL	R2	1
      0x60080003,  //  0007  GETGBL	R2	G3
      0x5C0C0000,  //  0008  MOVE	R3	R0
      0x7C080200,  //  0009  CALL	R2	1
      0x8C080504,  //  000A  GETMET	R2	R2	K4
      0x7C080200,  //  000B  CALL	R2	1
      0x8C080305,  //  000C  GETMET	R2	R1	K5
      0x7C080200,  //  000D  CALL	R2	1
      0x4C0C0000,  //  000E  LDNIL	R3
      0x200C0403,  //  000F  NE	R3	R2	R3
      0x780E000F,  //  0010  JMPF	R3	#0021
      0x8C0C0506,  //  0011  GETMET	R3	R2	K6
      0x58140007,  //  0012  LDCONST	R5	K7
      0x4C180000,  //  0013  LDNIL	R6
      0x7C0C0600,  //  0014  CALL	R3	3
      0x4C100000,  //  0015  LDNIL	R4
      0x1C100604,  //  0016  EQ	R4	R3	R4
      0x78120000,  //  0017  JMPF	R4	#0019
      0x880C0108,  //  0018  GETMBR	R3	R0	K8
      0x88100108,  //  0019  GETMBR	R4	R0	K8
      0x20100604,  //  001A  NE	R4	R3	R4
      0x78120004,  //  001B  JMPF	R4	#0021
      0x8C100109,  //  001C  GETMET	R4	R0	K9
      0x541A02FF,  //  001D  LDINT	R6	768
      0x541E0006,  //  001E  LDINT	R7	7
      0x7C100600,  //  001F  CALL	R4	3
      0x90021003,  //  0020  SETMBR	R0	K8	R3
      0x70020004,  //  0021  JMP		#0027
      0x60040003,  //  0022  GETGBL	R1	G3
      0x5C080000,  //  0023  MOVE	R2	R0
      0x7C040200,  //  0024  CALL	R1	1
      0x8C040304,  //  0025  GETMET	R1	R1	K4
      0x7C040200,  //  0026  CALL	R1	1
      0x80000000,  //  0027  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Light2
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light1;
be_local_class(Matter_Plugin_Light2,
    3,
    &be_class_Matter_Plugin_Light1,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(update_shadow, -1), be_const_closure(class_Matter_Plugin_Light2_update_shadow_closure) },
        { be_const_key_weak(set_ct, 13), be_const_closure(class_Matter_Plugin_Light2_set_ct_closure) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(268, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(UPDATE_COMMANDS, 17), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_nested_str_weak(Power),
        be_nested_str_weak(Bri),
        be_nested_str_weak(CT),
    }))    ) } )) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(8, 7), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(11,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(2),
        be_const_int(3),
        be_const_int(15),
        be_const_int(17),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(57, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(12,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(3),
        be_const_int(5),
        be_const_int(10),
        be_const_int(15),
        be_const_int(17),
        be_const_int(18),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(29, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(10,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(3, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(4, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(5, 2), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(12,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(6, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(768, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(11,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(7),
        be_const_int(8),
        be_const_int(15),
        be_const_int(16395),
        be_const_int(16396),
        be_const_int(65528),
        be_const_int(65529),
        be_const_int(65530),
        be_const_int(65531),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(class_Matter_Plugin_Light2_invoke_request_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(class_Matter_Plugin_Light2_read_attribute_closure) },
        { be_const_key_weak(shadow_ct, 0), be_const_var(0) },
        { be_const_key_weak(update_virtual, -1), be_const_closure(class_Matter_Plugin_Light2_update_virtual_closure) },
        { be_const_key_weak(DISPLAY_NAME, 16), be_nested_str_weak(Light_X202_X20CT) },
        { be_const_key_weak(web_value_ct, 11), be_const_closure(class_Matter_Plugin_Light2_web_value_ct_closure) },
        { be_const_key_weak(parse_status, -1), be_const_closure(class_Matter_Plugin_Light2_parse_status_closure) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(light2) },
        { be_const_key_weak(ct_min, 12), be_const_var(1) },
        { be_const_key_weak(web_values, -1), be_const_closure(class_Matter_Plugin_Light2_web_values_closure) },
        { be_const_key_weak(init, 10), be_const_closure(class_Matter_Plugin_Light2_init_closure) },
        { be_const_key_weak(update_ct_minmax, -1), be_const_closure(class_Matter_Plugin_Light2_update_ct_minmax_closure) },
        { be_const_key_weak(ct_max, -1), be_const_var(2) },
    })),
    be_str_weak(Matter_Plugin_Light2)
);
/********************************************************************/
/* End of solidification */
