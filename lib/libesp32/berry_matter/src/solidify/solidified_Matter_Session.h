/* Solidification of Matter_Session.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Session;

/********************************************************************
** Solidified function: before_remove
********************************************************************/
be_local_closure(Matter_Session_before_remove,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(log),
    /* K3   */  be_nested_str_weak(format),
    /* K4   */  be_nested_str_weak(MTR_X3A_X20_X2DSession_X20_X20_X20_X28_X256i_X29_X20_X28removed_X29),
    /* K5   */  be_nested_str_weak(local_session_id),
    /* K6   */  be_const_int(3),
    }),
    be_str_weak(before_remove),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xB80A0200,  //  0001  GETNGBL	R2	K1
      0x8C080502,  //  0002  GETMET	R2	R2	K2
      0x8C100303,  //  0003  GETMET	R4	R1	K3
      0x58180004,  //  0004  LDCONST	R6	K4
      0x881C0105,  //  0005  GETMBR	R7	R0	K5
      0x7C100600,  //  0006  CALL	R4	3
      0x58140006,  //  0007  LDCONST	R5	K6
      0x7C080600,  //  0008  CALL	R2	3
      0x80000000,  //  0009  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_pk
********************************************************************/
be_local_closure(Matter_Session_get_pk,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(get_pk),
    /* K2   */  be_nested_str_weak(_temp_pk),
    /* K3   */  be_nested_str_weak(crypto),
    /* K4   */  be_nested_str_weak(random),
    }),
    be_str_weak(get_pk),
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x78060004,  //  0001  JMPF	R1	#0007
      0x88040100,  //  0002  GETMBR	R1	R0	K0
      0x8C040301,  //  0003  GETMET	R1	R1	K1
      0x7C040200,  //  0004  CALL	R1	1
      0x80040200,  //  0005  RET	1	R1
      0x70020008,  //  0006  JMP		#0010
      0x88040102,  //  0007  GETMBR	R1	R0	K2
      0x74060004,  //  0008  JMPT	R1	#000E
      0xA4060600,  //  0009  IMPORT	R1	K3
      0x8C080304,  //  000A  GETMET	R2	R1	K4
      0x5412001F,  //  000B  LDINT	R4	32
      0x7C080400,  //  000C  CALL	R2	2
      0x90020402,  //  000D  SETMBR	R0	K2	R2
      0x88040102,  //  000E  GETMBR	R1	R0	K2
      0x80040200,  //  000F  RET	1	R1
      0x80000000,  //  0010  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_mode_CASE
********************************************************************/
be_local_closure(Matter_Session_set_mode_CASE,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(set_mode),
    /* K1   */  be_nested_str_weak(_CASE),
    }),
    be_str_weak(set_mode_CASE),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x880C0101,  //  0001  GETMBR	R3	R0	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_noc
********************************************************************/
be_local_closure(Matter_Session_get_noc,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(noc),
    }),
    be_str_weak(get_noc),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_temp_ca_pub
********************************************************************/
be_local_closure(Matter_Session_get_temp_ca_pub,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(_temp_root_ca_certificate),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(parse),
    /* K4   */  be_nested_str_weak(findsubval),
    }),
    be_str_weak(get_temp_ca_pub),
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x78060008,  //  0001  JMPF	R1	#000B
      0xB80A0200,  //  0002  GETNGBL	R2	K1
      0x88080502,  //  0003  GETMBR	R2	R2	K2
      0x8C080503,  //  0004  GETMET	R2	R2	K3
      0x5C100200,  //  0005  MOVE	R4	R1
      0x7C080400,  //  0006  CALL	R2	2
      0x8C0C0504,  //  0007  GETMET	R3	R2	K4
      0x54160008,  //  0008  LDINT	R5	9
      0x7C0C0400,  //  0009  CALL	R3	2
      0x80040600,  //  000A  RET	1	R3
      0x80000000,  //  000B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_fabric_compressed
********************************************************************/
be_local_closure(Matter_Session_get_fabric_compressed,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(fabric_compressed),
    }),
    be_str_weak(get_fabric_compressed),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_fabric_label
********************************************************************/
be_local_closure(Matter_Session_get_fabric_label,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(fabric_label),
    }),
    be_str_weak(get_fabric_label),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_keys
********************************************************************/
be_local_closure(Matter_Session_set_keys,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(i2rkey),
    /* K1   */  be_nested_str_weak(_i2r_privacy),
    /* K2   */  be_nested_str_weak(r2ikey),
    /* K3   */  be_nested_str_weak(attestation_challenge),
    /* K4   */  be_nested_str_weak(created),
    }),
    be_str_weak(set_keys),
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x4C140000,  //  0001  LDNIL	R5
      0x90020205,  //  0002  SETMBR	R0	K1	R5
      0x90020402,  //  0003  SETMBR	R0	K2	R2
      0x90020603,  //  0004  SETMBR	R0	K3	R3
      0x90020804,  //  0005  SETMBR	R0	K4	R4
      0x80000000,  //  0006  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_mode_PASE
********************************************************************/
be_local_closure(Matter_Session_set_mode_PASE,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(set_mode),
    /* K1   */  be_nested_str_weak(_PASE),
    }),
    be_str_weak(set_mode_PASE),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x880C0101,  //  0001  GETMBR	R3	R0	K1
      0x7C040400,  //  0002  CALL	R1	2
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_CASE
********************************************************************/
be_local_closure(Matter_Session_is_CASE,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(mode),
    /* K1   */  be_nested_str_weak(_CASE),
    }),
    be_str_weak(is_CASE),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_mode
********************************************************************/
be_local_closure(Matter_Session_get_mode,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(mode),
    }),
    be_str_weak(get_mode),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_r2i
********************************************************************/
be_local_closure(Matter_Session_get_r2i,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(r2ikey),
    }),
    be_str_weak(get_r2i),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: tojson
********************************************************************/
be_local_closure(Matter_Session_tojson,   /* name */
  be_nested_proto(
    18,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[24]) {     /* constants */
    /* K0   */  be_nested_str_weak(json),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(introspect),
    /* K3   */  be_nested_str_weak(persist_pre),
    /* K4   */  be_nested_str_weak(members),
    /* K5   */  be_nested_str_weak(get),
    /* K6   */  be_nested_str_weak(function),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(_),
    /* K9   */  be_nested_str_weak(push),
    /* K10  */  be_nested_str_weak(stop_iteration),
    /* K11  */  be_nested_str_weak(matter),
    /* K12  */  be_nested_str_weak(sort),
    /* K13  */  be_nested_str_weak(_X24_X24),
    /* K14  */  be_nested_str_weak(tob64),
    /* K15  */  be_nested_str_weak(instance),
    /* K16  */  be_nested_str_weak(format),
    /* K17  */  be_nested_str_weak(_X25s_X3A_X25s),
    /* K18  */  be_nested_str_weak(dump),
    /* K19  */  be_nested_str_weak(persist_post),
    /* K20  */  be_nested_str_weak(_X7B),
    /* K21  */  be_nested_str_weak(concat),
    /* K22  */  be_nested_str_weak(_X2C),
    /* K23  */  be_nested_str_weak(_X7D),
    }),
    be_str_weak(tojson),
    &be_const_str_solidified,
    ( &(const binstruction[96]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xA40E0400,  //  0002  IMPORT	R3	K2
      0x8C100103,  //  0003  GETMET	R4	R0	K3
      0x7C100200,  //  0004  CALL	R4	1
      0x60100012,  //  0005  GETGBL	R4	G18
      0x7C100000,  //  0006  CALL	R4	0
      0x60140010,  //  0007  GETGBL	R5	G16
      0x8C180704,  //  0008  GETMET	R6	R3	K4
      0x5C200000,  //  0009  MOVE	R8	R0
      0x7C180400,  //  000A  CALL	R6	2
      0x7C140200,  //  000B  CALL	R5	1
      0xA8020011,  //  000C  EXBLK	0	#001F
      0x5C180A00,  //  000D  MOVE	R6	R5
      0x7C180000,  //  000E  CALL	R6	0
      0x8C1C0705,  //  000F  GETMET	R7	R3	K5
      0x5C240000,  //  0010  MOVE	R9	R0
      0x5C280C00,  //  0011  MOVE	R10	R6
      0x7C1C0600,  //  0012  CALL	R7	3
      0x60200004,  //  0013  GETGBL	R8	G4
      0x5C240E00,  //  0014  MOVE	R9	R7
      0x7C200200,  //  0015  CALL	R8	1
      0x20201106,  //  0016  NE	R8	R8	K6
      0x78220005,  //  0017  JMPF	R8	#001E
      0x94200D07,  //  0018  GETIDX	R8	R6	K7
      0x20201108,  //  0019  NE	R8	R8	K8
      0x78220002,  //  001A  JMPF	R8	#001E
      0x8C200909,  //  001B  GETMET	R8	R4	K9
      0x5C280C00,  //  001C  MOVE	R10	R6
      0x7C200400,  //  001D  CALL	R8	2
      0x7001FFED,  //  001E  JMP		#000D
      0x5814000A,  //  001F  LDCONST	R5	K10
      0xAC140200,  //  0020  CATCH	R5	1	0
      0xB0080000,  //  0021  RAISE	2	R0	R0
      0xB8161600,  //  0022  GETNGBL	R5	K11
      0x8C140B0C,  //  0023  GETMET	R5	R5	K12
      0x5C1C0800,  //  0024  MOVE	R7	R4
      0x7C140400,  //  0025  CALL	R5	2
      0x5C100A00,  //  0026  MOVE	R4	R5
      0x60140012,  //  0027  GETGBL	R5	G18
      0x7C140000,  //  0028  CALL	R5	0
      0x60180010,  //  0029  GETGBL	R6	G16
      0x5C1C0800,  //  002A  MOVE	R7	R4
      0x7C180200,  //  002B  CALL	R6	1
      0xA8020027,  //  002C  EXBLK	0	#0055
      0x5C1C0C00,  //  002D  MOVE	R7	R6
      0x7C1C0000,  //  002E  CALL	R7	0
      0x8C200705,  //  002F  GETMET	R8	R3	K5
      0x5C280000,  //  0030  MOVE	R10	R0
      0x5C2C0E00,  //  0031  MOVE	R11	R7
      0x7C200600,  //  0032  CALL	R8	3
      0x4C240000,  //  0033  LDNIL	R9
      0x1C241009,  //  0034  EQ	R9	R8	R9
      0x78260000,  //  0035  JMPF	R9	#0037
      0x7001FFF5,  //  0036  JMP		#002D
      0x6024000F,  //  0037  GETGBL	R9	G15
      0x5C281000,  //  0038  MOVE	R10	R8
      0x602C0015,  //  0039  GETGBL	R11	G21
      0x7C240400,  //  003A  CALL	R9	2
      0x78260004,  //  003B  JMPF	R9	#0041
      0x8C24110E,  //  003C  GETMET	R9	R8	K14
      0x7C240200,  //  003D  CALL	R9	1
      0x00261A09,  //  003E  ADD	R9	K13	R9
      0x5C201200,  //  003F  MOVE	R8	R9
      0x70020005,  //  0040  JMP		#0047
      0x60240004,  //  0041  GETGBL	R9	G4
      0x5C281000,  //  0042  MOVE	R10	R8
      0x7C240200,  //  0043  CALL	R9	1
      0x1C24130F,  //  0044  EQ	R9	R9	K15
      0x78260000,  //  0045  JMPF	R9	#0047
      0x7001FFE5,  //  0046  JMP		#002D
      0x8C240B09,  //  0047  GETMET	R9	R5	K9
      0x8C2C0510,  //  0048  GETMET	R11	R2	K16
      0x58340011,  //  0049  LDCONST	R13	K17
      0x8C380312,  //  004A  GETMET	R14	R1	K18
      0x60400008,  //  004B  GETGBL	R16	G8
      0x5C440E00,  //  004C  MOVE	R17	R7
      0x7C400200,  //  004D  CALL	R16	1
      0x7C380400,  //  004E  CALL	R14	2
      0x8C3C0312,  //  004F  GETMET	R15	R1	K18
      0x5C441000,  //  0050  MOVE	R17	R8
      0x7C3C0400,  //  0051  CALL	R15	2
      0x7C2C0800,  //  0052  CALL	R11	4
      0x7C240400,  //  0053  CALL	R9	2
      0x7001FFD7,  //  0054  JMP		#002D
      0x5818000A,  //  0055  LDCONST	R6	K10
      0xAC180200,  //  0056  CATCH	R6	1	0
      0xB0080000,  //  0057  RAISE	2	R0	R0
      0x8C180113,  //  0058  GETMET	R6	R0	K19
      0x7C180200,  //  0059  CALL	R6	1
      0x8C180B15,  //  005A  GETMET	R6	R5	K21
      0x58200016,  //  005B  LDCONST	R8	K22
      0x7C180400,  //  005C  CALL	R6	2
      0x001A2806,  //  005D  ADD	R6	K20	R6
      0x00180D17,  //  005E  ADD	R6	R6	K23
      0x80040C00,  //  005F  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_i2r
********************************************************************/
be_local_closure(Matter_Session_get_i2r,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(i2rkey),
    }),
    be_str_weak(get_i2r),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: is_PASE
********************************************************************/
be_local_closure(Matter_Session_is_PASE,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(mode),
    /* K1   */  be_nested_str_weak(_PASE),
    }),
    be_str_weak(is_PASE),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: gen_CSR
********************************************************************/
be_local_closure(Matter_Session_gen_CSR,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str_weak(get_pk),
    /* K1   */  be_nested_str_weak(crypto),
    /* K2   */  be_nested_str_weak(EC_P256),
    /* K3   */  be_nested_str_weak(public_key),
    /* K4   */  be_nested_str_weak(3070020100300E310C300A060355040A0C034353523059301306072A8648CE3D020106082A8648CE3D030107034200),
    /* K5   */  be_nested_str_weak(A000),
    /* K6   */  be_nested_str_weak(300C06082A8648CE3D0403020500),
    /* K7   */  be_nested_str_weak(ecdsa_sign_sha256_asn1),
    /* K8   */  be_nested_str_weak(add),
    /* K9   */  be_const_int(3),
    /* K10  */  be_const_int(1),
    /* K11  */  be_const_int(0),
    }),
    be_str_weak(gen_CSR),
    &be_const_str_solidified,
    ( &(const binstruction[73]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x7C040200,  //  0001  CALL	R1	1
      0xA40A0200,  //  0002  IMPORT	R2	K1
      0x8C0C0502,  //  0003  GETMET	R3	R2	K2
      0x7C0C0200,  //  0004  CALL	R3	1
      0x8C100703,  //  0005  GETMET	R4	R3	K3
      0x5C180200,  //  0006  MOVE	R6	R1
      0x7C100400,  //  0007  CALL	R4	2
      0x60140015,  //  0008  GETGBL	R5	G21
      0x58180004,  //  0009  LDCONST	R6	K4
      0x7C140200,  //  000A  CALL	R5	1
      0x40180A04,  //  000B  CONNECT	R6	R5	R4
      0x60180015,  //  000C  GETGBL	R6	G21
      0x581C0005,  //  000D  LDCONST	R7	K5
      0x7C180200,  //  000E  CALL	R6	1
      0x40180A06,  //  000F  CONNECT	R6	R5	R6
      0x60180015,  //  0010  GETGBL	R6	G21
      0x581C0006,  //  0011  LDCONST	R7	K6
      0x7C180200,  //  0012  CALL	R6	1
      0x8C1C0707,  //  0013  GETMET	R7	R3	K7
      0x5C240200,  //  0014  MOVE	R9	R1
      0x5C280A00,  //  0015  MOVE	R10	R5
      0x7C1C0600,  //  0016  CALL	R7	3
      0x60200015,  //  0017  GETGBL	R8	G21
      0x5426007F,  //  0018  LDINT	R9	128
      0x7C200200,  //  0019  CALL	R8	1
      0x8C241108,  //  001A  GETMET	R9	R8	K8
      0x582C0009,  //  001B  LDCONST	R11	K9
      0x5830000A,  //  001C  LDCONST	R12	K10
      0x7C240600,  //  001D  CALL	R9	3
      0x8C241108,  //  001E  GETMET	R9	R8	K8
      0x602C000C,  //  001F  GETGBL	R11	G12
      0x5C300E00,  //  0020  MOVE	R12	R7
      0x7C2C0200,  //  0021  CALL	R11	1
      0x002C170A,  //  0022  ADD	R11	R11	K10
      0x5830000A,  //  0023  LDCONST	R12	K10
      0x7C240600,  //  0024  CALL	R9	3
      0x8C241108,  //  0025  GETMET	R9	R8	K8
      0x582C000B,  //  0026  LDCONST	R11	K11
      0x5830000A,  //  0027  LDCONST	R12	K10
      0x7C240600,  //  0028  CALL	R9	3
      0x40241007,  //  0029  CONNECT	R9	R8	R7
      0x6024000C,  //  002A  GETGBL	R9	G12
      0x5C280A00,  //  002B  MOVE	R10	R5
      0x7C240200,  //  002C  CALL	R9	1
      0x6028000C,  //  002D  GETGBL	R10	G12
      0x5C2C0C00,  //  002E  MOVE	R11	R6
      0x7C280200,  //  002F  CALL	R10	1
      0x0024120A,  //  0030  ADD	R9	R9	R10
      0x6028000C,  //  0031  GETGBL	R10	G12
      0x5C2C1000,  //  0032  MOVE	R11	R8
      0x7C280200,  //  0033  CALL	R10	1
      0x0024120A,  //  0034  ADD	R9	R9	R10
      0x60280015,  //  0035  GETGBL	R10	G21
      0x542E00CF,  //  0036  LDINT	R11	208
      0x7C280200,  //  0037  CALL	R10	1
      0x8C2C1508,  //  0038  GETMET	R11	R10	K8
      0x5436002F,  //  0039  LDINT	R13	48
      0x5838000A,  //  003A  LDCONST	R14	K10
      0x7C2C0600,  //  003B  CALL	R11	3
      0x8C2C1508,  //  003C  GETMET	R11	R10	K8
      0x54360080,  //  003D  LDINT	R13	129
      0x5838000A,  //  003E  LDCONST	R14	K10
      0x7C2C0600,  //  003F  CALL	R11	3
      0x8C2C1508,  //  0040  GETMET	R11	R10	K8
      0x543600FE,  //  0041  LDINT	R13	255
      0x2C34120D,  //  0042  AND	R13	R9	R13
      0x5838000A,  //  0043  LDCONST	R14	K10
      0x7C2C0600,  //  0044  CALL	R11	3
      0x402C1405,  //  0045  CONNECT	R11	R10	R5
      0x402C1406,  //  0046  CONNECT	R11	R10	R6
      0x402C1408,  //  0047  CONNECT	R11	R10	R8
      0x80041400,  //  0048  RET	1	R10
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_temp_ca
********************************************************************/
be_local_closure(Matter_Session_get_temp_ca,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(_temp_root_ca_certificate),
    }),
    be_str_weak(get_temp_ca),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: close
********************************************************************/
be_local_closure(Matter_Session_close,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[23]) {     /* constants */
    /* K0   */  be_nested_str_weak(local_session_id),
    /* K1   */  be_nested_str_weak(__future_local_session_id),
    /* K2   */  be_nested_str_weak(initiator_session_id),
    /* K3   */  be_nested_str_weak(__future_initiator_session_id),
    /* K4   */  be_nested_str_weak(_counter_rcv_impl),
    /* K5   */  be_nested_str_weak(reset),
    /* K6   */  be_nested_str_weak(_counter_snd_impl),
    /* K7   */  be_nested_str_weak(counter_rcv),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(counter_snd),
    /* K10  */  be_nested_str_weak(next),
    /* K11  */  be_nested_str_weak(i2rkey),
    /* K12  */  be_nested_str_weak(_i2r_privacy),
    /* K13  */  be_nested_str_weak(r2ikey),
    /* K14  */  be_nested_str_weak(attestation_challenge),
    /* K15  */  be_nested_str_weak(introspect),
    /* K16  */  be_nested_str_weak(members),
    /* K17  */  be_nested_str_weak(get),
    /* K18  */  be_nested_str_weak(function),
    /* K19  */  be_nested_str_weak(instance),
    /* K20  */  be_nested_str_weak(_),
    /* K21  */  be_const_int(1),
    /* K22  */  be_nested_str_weak(stop_iteration),
    }),
    be_str_weak(close),
    &be_const_str_solidified,
    ( &(const binstruction[59]) {  /* code */
      0x88040101,  //  0000  GETMBR	R1	R0	K1
      0x90020001,  //  0001  SETMBR	R0	K0	R1
      0x88040103,  //  0002  GETMBR	R1	R0	K3
      0x90020401,  //  0003  SETMBR	R0	K2	R1
      0x88040104,  //  0004  GETMBR	R1	R0	K4
      0x8C040305,  //  0005  GETMET	R1	R1	K5
      0x7C040200,  //  0006  CALL	R1	1
      0x88040106,  //  0007  GETMBR	R1	R0	K6
      0x8C040305,  //  0008  GETMET	R1	R1	K5
      0x7C040200,  //  0009  CALL	R1	1
      0x90020F08,  //  000A  SETMBR	R0	K7	K8
      0x88040106,  //  000B  GETMBR	R1	R0	K6
      0x8C04030A,  //  000C  GETMET	R1	R1	K10
      0x7C040200,  //  000D  CALL	R1	1
      0x90021201,  //  000E  SETMBR	R0	K9	R1
      0x4C040000,  //  000F  LDNIL	R1
      0x90021601,  //  0010  SETMBR	R0	K11	R1
      0x4C040000,  //  0011  LDNIL	R1
      0x90021801,  //  0012  SETMBR	R0	K12	R1
      0x4C040000,  //  0013  LDNIL	R1
      0x90021A01,  //  0014  SETMBR	R0	K13	R1
      0x4C040000,  //  0015  LDNIL	R1
      0x90021C01,  //  0016  SETMBR	R0	K14	R1
      0xA4061E00,  //  0017  IMPORT	R1	K15
      0x60080010,  //  0018  GETGBL	R2	G16
      0x8C0C0310,  //  0019  GETMET	R3	R1	K16
      0x5C140000,  //  001A  MOVE	R5	R0
      0x7C0C0400,  //  001B  CALL	R3	2
      0x7C080200,  //  001C  CALL	R2	1
      0xA8020018,  //  001D  EXBLK	0	#0037
      0x5C0C0400,  //  001E  MOVE	R3	R2
      0x7C0C0000,  //  001F  CALL	R3	0
      0x8C100311,  //  0020  GETMET	R4	R1	K17
      0x5C180000,  //  0021  MOVE	R6	R0
      0x5C1C0600,  //  0022  MOVE	R7	R3
      0x7C100600,  //  0023  CALL	R4	3
      0x60140004,  //  0024  GETGBL	R5	G4
      0x5C180800,  //  0025  MOVE	R6	R4
      0x7C140200,  //  0026  CALL	R5	1
      0x20140B12,  //  0027  NE	R5	R5	K18
      0x7816000C,  //  0028  JMPF	R5	#0036
      0x60140004,  //  0029  GETGBL	R5	G4
      0x5C180800,  //  002A  MOVE	R6	R4
      0x7C140200,  //  002B  CALL	R5	1
      0x20140B13,  //  002C  NE	R5	R5	K19
      0x78160007,  //  002D  JMPF	R5	#0036
      0x94140708,  //  002E  GETIDX	R5	R3	K8
      0x1C140B14,  //  002F  EQ	R5	R5	K20
      0x78160004,  //  0030  JMPF	R5	#0036
      0x94140715,  //  0031  GETIDX	R5	R3	K21
      0x1C140B14,  //  0032  EQ	R5	R5	K20
      0x78160001,  //  0033  JMPF	R5	#0036
      0x4C140000,  //  0034  LDNIL	R5
      0x90000605,  //  0035  SETMBR	R0	R3	R5
      0x7001FFE6,  //  0036  JMP		#001E
      0x58080016,  //  0037  LDCONST	R2	K22
      0xAC080200,  //  0038  CATCH	R2	1	0
      0xB0080000,  //  0039  RAISE	2	R0	R0
      0x80000000,  //  003A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update
********************************************************************/
be_local_closure(Matter_Session_update,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(last_used),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(rtc),
    /* K3   */  be_nested_str_weak(utc),
    }),
    be_str_weak(update),
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0xB8060200,  //  0000  GETNGBL	R1	K1
      0x8C040302,  //  0001  GETMET	R1	R1	K2
      0x7C040200,  //  0002  CALL	R1	1
      0x94040303,  //  0003  GETIDX	R1	R1	K3
      0x90020001,  //  0004  SETMBR	R0	K0	R1
      0x80000000,  //  0005  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_admin_vendor
********************************************************************/
be_local_closure(Matter_Session_get_admin_vendor,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(admin_vendor),
    }),
    be_str_weak(get_admin_vendor),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_fabric
********************************************************************/
be_local_closure(Matter_Session_get_fabric,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    }),
    be_str_weak(get_fabric),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_admin_subject
********************************************************************/
be_local_closure(Matter_Session_get_admin_subject,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(admin_subject),
    }),
    be_str_weak(get_admin_subject),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ipk_group_key
********************************************************************/
be_local_closure(Matter_Session_get_ipk_group_key,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(get_ipk_group_key),
    }),
    be_str_weak(get_ipk_group_key),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Session_init,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[23]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(_store),
    /* K2   */  be_nested_str_weak(mode),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str_weak(local_session_id),
    /* K5   */  be_nested_str_weak(initiator_session_id),
    /* K6   */  be_nested_str_weak(_counter_snd_impl),
    /* K7   */  be_nested_str_weak(matter),
    /* K8   */  be_nested_str_weak(Counter),
    /* K9   */  be_nested_str_weak(_counter_rcv_impl),
    /* K10  */  be_nested_str_weak(counter_rcv),
    /* K11  */  be_nested_str_weak(counter_snd),
    /* K12  */  be_nested_str_weak(next),
    /* K13  */  be_nested_str_weak(_COUNTER_SND_INCR),
    /* K14  */  be_nested_str_weak(_counter_insecure_rcv),
    /* K15  */  be_nested_str_weak(_counter_insecure_snd),
    /* K16  */  be_nested_str_weak(_breadcrumb),
    /* K17  */  be_nested_str_weak(_exchange_id),
    /* K18  */  be_nested_str_weak(random),
    /* K19  */  be_const_int(2),
    /* K20  */  be_nested_str_weak(get),
    /* K21  */  be_nested_str_weak(_fabric),
    /* K22  */  be_nested_str_weak(update),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[41]) {  /* code */
      0xA4160000,  //  0000  IMPORT	R5	K0
      0x90020201,  //  0001  SETMBR	R0	K1	R1
      0x90020503,  //  0002  SETMBR	R0	K2	K3
      0x90020802,  //  0003  SETMBR	R0	K4	R2
      0x90020A03,  //  0004  SETMBR	R0	K5	R3
      0xB81A0E00,  //  0005  GETNGBL	R6	K7
      0x8C180D08,  //  0006  GETMET	R6	R6	K8
      0x7C180200,  //  0007  CALL	R6	1
      0x90020C06,  //  0008  SETMBR	R0	K6	R6
      0xB81A0E00,  //  0009  GETNGBL	R6	K7
      0x8C180D08,  //  000A  GETMET	R6	R6	K8
      0x7C180200,  //  000B  CALL	R6	1
      0x90021206,  //  000C  SETMBR	R0	K9	R6
      0x90021503,  //  000D  SETMBR	R0	K10	K3
      0x88180106,  //  000E  GETMBR	R6	R0	K6
      0x8C180D0C,  //  000F  GETMET	R6	R6	K12
      0x7C180200,  //  0010  CALL	R6	1
      0x881C010D,  //  0011  GETMBR	R7	R0	K13
      0x00180C07,  //  0012  ADD	R6	R6	R7
      0x90021606,  //  0013  SETMBR	R0	K11	R6
      0xB81A0E00,  //  0014  GETNGBL	R6	K7
      0x8C180D08,  //  0015  GETMET	R6	R6	K8
      0x7C180200,  //  0016  CALL	R6	1
      0x90021C06,  //  0017  SETMBR	R0	K14	R6
      0xB81A0E00,  //  0018  GETNGBL	R6	K7
      0x8C180D08,  //  0019  GETMET	R6	R6	K8
      0x7C180200,  //  001A  CALL	R6	1
      0x90021E06,  //  001B  SETMBR	R0	K15	R6
      0x90022103,  //  001C  SETMBR	R0	K16	K3
      0x8C180B12,  //  001D  GETMET	R6	R5	K18
      0x58200013,  //  001E  LDCONST	R8	K19
      0x7C180400,  //  001F  CALL	R6	2
      0x8C180D14,  //  0020  GETMET	R6	R6	K20
      0x58200003,  //  0021  LDCONST	R8	K3
      0x58240013,  //  0022  LDCONST	R9	K19
      0x7C180600,  //  0023  CALL	R6	3
      0x90022206,  //  0024  SETMBR	R0	K17	R6
      0x90022A04,  //  0025  SETMBR	R0	K21	R4
      0x8C180116,  //  0026  GETMET	R6	R0	K22
      0x7C180200,  //  0027  CALL	R6	1
      0x80000000,  //  0028  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_device_id
********************************************************************/
be_local_closure(Matter_Session_get_device_id,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(device_id),
    }),
    be_str_weak(get_device_id),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_fabric_label
********************************************************************/
be_local_closure(Matter_Session_set_fabric_label,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(_fabric),
    /* K2   */  be_nested_str_weak(fabric_label),
    }),
    be_str_weak(set_fabric_label),
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x60080004,  //  0000  GETGBL	R2	G4
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x1C080500,  //  0003  EQ	R2	R2	K0
      0x780A0001,  //  0004  JMPF	R2	#0007
      0x88080101,  //  0005  GETMBR	R2	R0	K1
      0x900A0401,  //  0006  SETMBR	R2	K2	R1
      0x80000000,  //  0007  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: hydrate_post
********************************************************************/
be_local_closure(Matter_Session_hydrate_post,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(_counter_snd_impl),
    /* K1   */  be_nested_str_weak(reset),
    /* K2   */  be_nested_str_weak(counter_snd),
    /* K3   */  be_nested_str_weak(_counter_rcv_impl),
    /* K4   */  be_nested_str_weak(counter_rcv),
    /* K5   */  be_nested_str_weak(val),
    }),
    be_str_weak(hydrate_post),
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x7C040400,  //  0003  CALL	R1	2
      0x88040103,  //  0004  GETMBR	R1	R0	K3
      0x8C040301,  //  0005  GETMET	R1	R1	K1
      0x880C0104,  //  0006  GETMBR	R3	R0	K4
      0x7C040400,  //  0007  CALL	R1	2
      0x88040100,  //  0008  GETMBR	R1	R0	K0
      0x8C040305,  //  0009  GETMET	R1	R1	K5
      0x7C040200,  //  000A  CALL	R1	1
      0x90020401,  //  000B  SETMBR	R0	K2	R1
      0x88040103,  //  000C  GETMBR	R1	R0	K3
      0x8C040305,  //  000D  GETMET	R1	R1	K5
      0x7C040200,  //  000E  CALL	R1	1
      0x90020801,  //  000F  SETMBR	R0	K4	R1
      0x80000000,  //  0010  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: fromjson
********************************************************************/
be_local_closure(Matter_Session_fromjson,   /* name */
  be_nested_proto(
    17,                          /* nstack */
    3,                          /* argc */
    4,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_const_class(be_class_Matter_Session),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(introspect),
    /* K3   */  be_nested_str_weak(matter),
    /* K4   */  be_nested_str_weak(Session),
    /* K5   */  be_nested_str_weak(keys),
    /* K6   */  be_nested_str_weak(find),
    /* K7   */  be_nested_str_weak(0x),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(set),
    /* K10  */  be_nested_str_weak(fromhex),
    /* K11  */  be_const_int(2),
    /* K12  */  be_const_int(2147483647),
    /* K13  */  be_nested_str_weak(_X24_X24),
    /* K14  */  be_nested_str_weak(fromb64),
    /* K15  */  be_nested_str_weak(stop_iteration),
    /* K16  */  be_nested_str_weak(hydrate_post),
    }),
    be_str_weak(fromjson),
    &be_const_str_solidified,
    ( &(const binstruction[75]) {  /* code */
      0x580C0000,  //  0000  LDCONST	R3	K0
      0xA4120200,  //  0001  IMPORT	R4	K1
      0xA4160400,  //  0002  IMPORT	R5	K2
      0xB81A0600,  //  0003  GETNGBL	R6	K3
      0x8C180D04,  //  0004  GETMET	R6	R6	K4
      0x5C200000,  //  0005  MOVE	R8	R0
      0x4C240000,  //  0006  LDNIL	R9
      0x4C280000,  //  0007  LDNIL	R10
      0x5C2C0400,  //  0008  MOVE	R11	R2
      0x7C180A00,  //  0009  CALL	R6	5
      0x601C0010,  //  000A  GETGBL	R7	G16
      0x8C200305,  //  000B  GETMET	R8	R1	K5
      0x7C200200,  //  000C  CALL	R8	1
      0x7C1C0200,  //  000D  CALL	R7	1
      0xA8020035,  //  000E  EXBLK	0	#0045
      0x5C200E00,  //  000F  MOVE	R8	R7
      0x7C200000,  //  0010  CALL	R8	0
      0x94240208,  //  0011  GETIDX	R9	R1	R8
      0x60280004,  //  0012  GETGBL	R10	G4
      0x5C2C1200,  //  0013  MOVE	R11	R9
      0x7C280200,  //  0014  CALL	R10	1
      0x1C281501,  //  0015  EQ	R10	R10	K1
      0x782A0027,  //  0016  JMPF	R10	#003F
      0x8C280906,  //  0017  GETMET	R10	R4	K6
      0x5C301200,  //  0018  MOVE	R12	R9
      0x58340007,  //  0019  LDCONST	R13	K7
      0x7C280600,  //  001A  CALL	R10	3
      0x1C281508,  //  001B  EQ	R10	R10	K8
      0x782A000A,  //  001C  JMPF	R10	#0028
      0x8C280B09,  //  001D  GETMET	R10	R5	K9
      0x5C300C00,  //  001E  MOVE	R12	R6
      0x5C341000,  //  001F  MOVE	R13	R8
      0x60380015,  //  0020  GETGBL	R14	G21
      0x7C380000,  //  0021  CALL	R14	0
      0x8C381D0A,  //  0022  GETMET	R14	R14	K10
      0x4042170C,  //  0023  CONNECT	R16	K11	K12
      0x94401210,  //  0024  GETIDX	R16	R9	R16
      0x7C380400,  //  0025  CALL	R14	2
      0x7C280800,  //  0026  CALL	R10	4
      0x70020015,  //  0027  JMP		#003E
      0x8C280906,  //  0028  GETMET	R10	R4	K6
      0x5C301200,  //  0029  MOVE	R12	R9
      0x5834000D,  //  002A  LDCONST	R13	K13
      0x7C280600,  //  002B  CALL	R10	3
      0x1C281508,  //  002C  EQ	R10	R10	K8
      0x782A000A,  //  002D  JMPF	R10	#0039
      0x8C280B09,  //  002E  GETMET	R10	R5	K9
      0x5C300C00,  //  002F  MOVE	R12	R6
      0x5C341000,  //  0030  MOVE	R13	R8
      0x60380015,  //  0031  GETGBL	R14	G21
      0x7C380000,  //  0032  CALL	R14	0
      0x8C381D0E,  //  0033  GETMET	R14	R14	K14
      0x4042170C,  //  0034  CONNECT	R16	K11	K12
      0x94401210,  //  0035  GETIDX	R16	R9	R16
      0x7C380400,  //  0036  CALL	R14	2
      0x7C280800,  //  0037  CALL	R10	4
      0x70020004,  //  0038  JMP		#003E
      0x8C280B09,  //  0039  GETMET	R10	R5	K9
      0x5C300C00,  //  003A  MOVE	R12	R6
      0x5C341000,  //  003B  MOVE	R13	R8
      0x5C381200,  //  003C  MOVE	R14	R9
      0x7C280800,  //  003D  CALL	R10	4
      0x70020004,  //  003E  JMP		#0044
      0x8C280B09,  //  003F  GETMET	R10	R5	K9
      0x5C300C00,  //  0040  MOVE	R12	R6
      0x5C341000,  //  0041  MOVE	R13	R8
      0x5C381200,  //  0042  MOVE	R14	R9
      0x7C280800,  //  0043  CALL	R10	4
      0x7001FFC9,  //  0044  JMP		#000F
      0x581C000F,  //  0045  LDCONST	R7	K15
      0xAC1C0200,  //  0046  CATCH	R7	1	0
      0xB0080000,  //  0047  RAISE	2	R0	R0
      0x8C1C0D10,  //  0048  GETMET	R7	R6	K16
      0x7C1C0200,  //  0049  CALL	R7	1
      0x80040C00,  //  004A  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: save
********************************************************************/
be_local_closure(Matter_Session_save,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_store),
    /* K1   */  be_nested_str_weak(save_fabrics),
    }),
    be_str_weak(save),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_fabric_id
********************************************************************/
be_local_closure(Matter_Session_get_fabric_id,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(fabric_id),
    }),
    be_str_weak(get_fabric_id),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_mode
********************************************************************/
be_local_closure(Matter_Session_set_mode,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(mode),
    }),
    be_str_weak(set_mode),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x80000000,  //  0001  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_temp_ca
********************************************************************/
be_local_closure(Matter_Session_set_temp_ca,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(_temp_root_ca_certificate),
    }),
    be_str_weak(set_temp_ca),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x80000000,  //  0001  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_i2r_privacy
********************************************************************/
be_local_closure(Matter_Session_get_i2r_privacy,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(_i2r_privacy),
    /* K1   */  be_nested_str_weak(crypto),
    /* K2   */  be_nested_str_weak(HKDF_SHA256),
    /* K3   */  be_nested_str_weak(derive),
    /* K4   */  be_nested_str_weak(get_i2r),
    /* K5   */  be_nested_str_weak(fromstring),
    /* K6   */  be_nested_str_weak(PrivacyKey),
    }),
    be_str_weak(get_i2r_privacy),
    &be_const_str_solidified,
    ( &(const binstruction[22]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x4C080000,  //  0001  LDNIL	R2
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x7806000F,  //  0003  JMPF	R1	#0014
      0xA4060200,  //  0004  IMPORT	R1	K1
      0x8C080302,  //  0005  GETMET	R2	R1	K2
      0x7C080200,  //  0006  CALL	R2	1
      0x8C080503,  //  0007  GETMET	R2	R2	K3
      0x8C100104,  //  0008  GETMET	R4	R0	K4
      0x7C100200,  //  0009  CALL	R4	1
      0x60140015,  //  000A  GETGBL	R5	G21
      0x7C140000,  //  000B  CALL	R5	0
      0x60180015,  //  000C  GETGBL	R6	G21
      0x7C180000,  //  000D  CALL	R6	0
      0x8C180D05,  //  000E  GETMET	R6	R6	K5
      0x58200006,  //  000F  LDCONST	R8	K6
      0x7C180400,  //  0010  CALL	R6	2
      0x541E000F,  //  0011  LDINT	R7	16
      0x7C080A00,  //  0012  CALL	R2	5
      0x90020002,  //  0013  SETMBR	R0	K0	R2
      0x88040100,  //  0014  GETMBR	R1	R0	K0
      0x80040200,  //  0015  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ca
********************************************************************/
be_local_closure(Matter_Session_get_ca,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(root_ca_certificate),
    }),
    be_str_weak(get_ca),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ac
********************************************************************/
be_local_closure(Matter_Session_get_ac,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(attestation_challenge),
    }),
    be_str_weak(get_ac),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: counter_snd_next
********************************************************************/
be_local_closure(Matter_Session_counter_snd_next,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(_counter_snd_impl),
    /* K2   */  be_nested_str_weak(next),
    /* K3   */  be_nested_str_weak(tasmota),
    /* K4   */  be_nested_str_weak(log),
    /* K5   */  be_nested_str_weak(format),
    /* K6   */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Counter_snd_X3D_X25i),
    /* K7   */  be_const_int(3),
    /* K8   */  be_nested_str_weak(matter),
    /* K9   */  be_nested_str_weak(Counter),
    /* K10  */  be_nested_str_weak(is_greater),
    /* K11  */  be_nested_str_weak(counter_snd),
    /* K12  */  be_nested_str_weak(_COUNTER_SND_INCR),
    /* K13  */  be_nested_str_weak(does_persist),
    /* K14  */  be_nested_str_weak(save),
    }),
    be_str_weak(counter_snd_next),
    &be_const_str_solidified,
    ( &(const binstruction[28]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x8C080502,  //  0002  GETMET	R2	R2	K2
      0x7C080200,  //  0003  CALL	R2	1
      0xB80E0600,  //  0004  GETNGBL	R3	K3
      0x8C0C0704,  //  0005  GETMET	R3	R3	K4
      0x8C140305,  //  0006  GETMET	R5	R1	K5
      0x581C0006,  //  0007  LDCONST	R7	K6
      0x5C200400,  //  0008  MOVE	R8	R2
      0x7C140600,  //  0009  CALL	R5	3
      0x58180007,  //  000A  LDCONST	R6	K7
      0x7C0C0600,  //  000B  CALL	R3	3
      0xB80E1000,  //  000C  GETNGBL	R3	K8
      0x880C0709,  //  000D  GETMBR	R3	R3	K9
      0x8C0C070A,  //  000E  GETMET	R3	R3	K10
      0x5C140400,  //  000F  MOVE	R5	R2
      0x8818010B,  //  0010  GETMBR	R6	R0	K11
      0x7C0C0600,  //  0011  CALL	R3	3
      0x780E0007,  //  0012  JMPF	R3	#001B
      0x880C010C,  //  0013  GETMBR	R3	R0	K12
      0x000C0403,  //  0014  ADD	R3	R2	R3
      0x90021603,  //  0015  SETMBR	R0	K11	R3
      0x8C0C010D,  //  0016  GETMET	R3	R0	K13
      0x7C0C0200,  //  0017  CALL	R3	1
      0x780E0001,  //  0018  JMPF	R3	#001B
      0x8C0C010E,  //  0019  GETMET	R3	R0	K14
      0x7C0C0200,  //  001A  CALL	R3	1
      0x80040400,  //  001B  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: counter_rcv_validate
********************************************************************/
be_local_closure(Matter_Session_counter_rcv_validate,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(_counter_rcv_impl),
    /* K1   */  be_nested_str_weak(validate),
    /* K2   */  be_nested_str_weak(counter_rcv),
    /* K3   */  be_nested_str_weak(val),
    }),
    be_str_weak(counter_rcv_validate),
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x880C0100,  //  0000  GETMBR	R3	R0	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x5C140200,  //  0002  MOVE	R5	R1
      0x5C180400,  //  0003  MOVE	R6	R2
      0x7C0C0600,  //  0004  CALL	R3	3
      0x780E0003,  //  0005  JMPF	R3	#000A
      0x88100100,  //  0006  GETMBR	R4	R0	K0
      0x8C100903,  //  0007  GETMET	R4	R4	K3
      0x7C100200,  //  0008  CALL	R4	1
      0x90020404,  //  0009  SETMBR	R0	K2	R4
      0x80040600,  //  000A  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_icac
********************************************************************/
be_local_closure(Matter_Session_get_icac,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(icac),
    }),
    be_str_weak(get_icac),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ca_pub
********************************************************************/
be_local_closure(Matter_Session_get_ca_pub,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(get_ca_pub),
    }),
    be_str_weak(get_ca_pub),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_ipk_epoch_key
********************************************************************/
be_local_closure(Matter_Session_get_ipk_epoch_key,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(ipk_epoch_key),
    }),
    be_str_weak(get_ipk_epoch_key),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88040301,  //  0001  GETMBR	R1	R1	K1
      0x80040200,  //  0002  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: persist_to_fabric
********************************************************************/
be_local_closure(Matter_Session_persist_to_fabric,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_fabric),
    /* K1   */  be_nested_str_weak(add_session),
    }),
    be_str_weak(persist_to_fabric),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x5C0C0000,  //  0002  MOVE	R3	R0
      0x7C040400,  //  0003  CALL	R1	2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Session
********************************************************************/
extern const bclass be_class_Matter_Expirable;
be_local_class(Matter_Session,
    38,
    &be_class_Matter_Expirable,
    be_nested_map(83,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(resumption_id, -1), be_const_var(28) },
        { be_const_key_weak(mode, 4), be_const_var(1) },
        { be_const_key_weak(get_pk, -1), be_const_closure(Matter_Session_get_pk_closure) },
        { be_const_key_weak(set_mode_CASE, 65), be_const_closure(Matter_Session_set_mode_CASE_closure) },
        { be_const_key_weak(__spake_cA, 22), be_const_var(33) },
        { be_const_key_weak(__initiator_pub, -1), be_const_var(32) },
        { be_const_key_weak(get_temp_ca_pub, 55), be_const_closure(Matter_Session_get_temp_ca_pub_closure) },
        { be_const_key_weak(get_i2r, -1), be_const_closure(Matter_Session_get_i2r_closure) },
        { be_const_key_weak(_ip, 82), be_const_var(17) },
        { be_const_key_weak(__Msg2, -1), be_const_var(36) },
        { be_const_key_weak(get_fabric_label, 59), be_const_closure(Matter_Session_get_fabric_label_closure) },
        { be_const_key_weak(__future_initiator_session_id, -1), be_const_var(10) },
        { be_const_key_weak(set_keys, 0), be_const_closure(Matter_Session_set_keys_closure) },
        { be_const_key_weak(set_mode_PASE, -1), be_const_closure(Matter_Session_set_mode_PASE_closure) },
        { be_const_key_weak(_fabric, 7), be_const_var(2) },
        { be_const_key_weak(get_temp_ca, -1), be_const_closure(Matter_Session_get_temp_ca_closure) },
        { be_const_key_weak(attestation_challenge, -1), be_const_var(25) },
        { be_const_key_weak(_temp_pk, -1), be_const_var(9) },
        { be_const_key_weak(last_used, -1), be_const_var(6) },
        { be_const_key_weak(peer_node_id, -1), be_const_var(26) },
        { be_const_key_weak(is_CASE, -1), be_const_closure(Matter_Session_is_CASE_closure) },
        { be_const_key_weak(get_ipk_epoch_key, 80), be_const_closure(Matter_Session_get_ipk_epoch_key_closure) },
        { be_const_key_weak(_exchange_id, -1), be_const_var(16) },
        { be_const_key_weak(__chunked_attr_reports, -1), be_const_var(37) },
        { be_const_key_weak(counter_snd, -1), be_const_var(13) },
        { be_const_key_weak(_i2r_privacy, -1), be_const_var(24) },
        { be_const_key_weak(_PASE, -1), be_const_int(1) },
        { be_const_key_weak(get_mode, 1), be_const_closure(Matter_Session_get_mode_closure) },
        { be_const_key_weak(get_icac, 53), be_const_closure(Matter_Session_get_icac_closure) },
        { be_const_key_weak(is_PASE, -1), be_const_closure(Matter_Session_is_PASE_closure) },
        { be_const_key_weak(gen_CSR, -1), be_const_closure(Matter_Session_gen_CSR_closure) },
        { be_const_key_weak(_message_handler, 51), be_const_var(19) },
        { be_const_key_weak(__spake_Ke, -1), be_const_var(34) },
        { be_const_key_weak(get_admin_subject, -1), be_const_closure(Matter_Session_get_admin_subject_closure) },
        { be_const_key_weak(before_remove, 73), be_const_closure(Matter_Session_before_remove_closure) },
        { be_const_key_weak(__responder_pub, -1), be_const_var(31) },
        { be_const_key_weak(i2rkey, -1), be_const_var(22) },
        { be_const_key_weak(created, -1), be_const_var(5) },
        { be_const_key_weak(_CASE, -1), be_const_int(2) },
        { be_const_key_weak(_port, -1), be_const_var(18) },
        { be_const_key_weak(_store, -1), be_const_var(0) },
        { be_const_key_weak(get_device_id, -1), be_const_closure(Matter_Session_get_device_id_closure) },
        { be_const_key_weak(get_admin_vendor, -1), be_const_closure(Matter_Session_get_admin_vendor_closure) },
        { be_const_key_weak(get_fabric, -1), be_const_closure(Matter_Session_get_fabric_closure) },
        { be_const_key_weak(_counter_insecure_rcv, 28), be_const_var(20) },
        { be_const_key_weak(get_ipk_group_key, -1), be_const_closure(Matter_Session_get_ipk_group_key_closure) },
        { be_const_key_weak(__responder_priv, -1), be_const_var(30) },
        { be_const_key_weak(_GROUP_KEY, 56), be_nested_str_weak(GroupKey_X20v1_X2E0) },
        { be_const_key_weak(_temp_root_ca_certificate, -1), be_const_var(8) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Session_init_closure) },
        { be_const_key_weak(get_noc, 41), be_const_closure(Matter_Session_get_noc_closure) },
        { be_const_key_weak(set_fabric_label, 15), be_const_closure(Matter_Session_set_fabric_label_closure) },
        { be_const_key_weak(shared_secret, -1), be_const_var(29) },
        { be_const_key_weak(hydrate_post, 33), be_const_closure(Matter_Session_hydrate_post_closure) },
        { be_const_key_weak(fromjson, -1), be_const_static_closure(Matter_Session_fromjson_closure) },
        { be_const_key_weak(save, -1), be_const_closure(Matter_Session_save_closure) },
        { be_const_key_weak(_source_node_id, -1), be_const_var(7) },
        { be_const_key_weak(set_mode, 25), be_const_closure(Matter_Session_set_mode_closure) },
        { be_const_key_weak(_counter_snd_impl, -1), be_const_var(15) },
        { be_const_key_weak(__Msg1, 81), be_const_var(35) },
        { be_const_key_weak(set_temp_ca, -1), be_const_closure(Matter_Session_set_temp_ca_closure) },
        { be_const_key_weak(get_i2r_privacy, -1), be_const_closure(Matter_Session_get_i2r_privacy_closure) },
        { be_const_key_weak(initiator_session_id, -1), be_const_var(4) },
        { be_const_key_weak(__future_local_session_id, -1), be_const_var(11) },
        { be_const_key_weak(r2ikey, -1), be_const_var(23) },
        { be_const_key_weak(get_fabric_id, 72), be_const_closure(Matter_Session_get_fabric_id_closure) },
        { be_const_key_weak(get_ac, -1), be_const_closure(Matter_Session_get_ac_closure) },
        { be_const_key_weak(local_session_id, -1), be_const_var(3) },
        { be_const_key_weak(counter_snd_next, -1), be_const_closure(Matter_Session_counter_snd_next_closure) },
        { be_const_key_weak(counter_rcv_validate, -1), be_const_closure(Matter_Session_counter_rcv_validate_closure) },
        { be_const_key_weak(get_ca, 35), be_const_closure(Matter_Session_get_ca_closure) },
        { be_const_key_weak(_counter_rcv_impl, -1), be_const_var(14) },
        { be_const_key_weak(update, -1), be_const_closure(Matter_Session_update_closure) },
        { be_const_key_weak(close, 23), be_const_closure(Matter_Session_close_closure) },
        { be_const_key_weak(get_ca_pub, -1), be_const_closure(Matter_Session_get_ca_pub_closure) },
        { be_const_key_weak(_breadcrumb, -1), be_const_var(27) },
        { be_const_key_weak(_COUNTER_SND_INCR, 21), be_const_int(1024) },
        { be_const_key_weak(_counter_insecure_snd, -1), be_const_var(21) },
        { be_const_key_weak(persist_to_fabric, -1), be_const_closure(Matter_Session_persist_to_fabric_closure) },
        { be_const_key_weak(counter_rcv, 5), be_const_var(12) },
        { be_const_key_weak(tojson, -1), be_const_closure(Matter_Session_tojson_closure) },
        { be_const_key_weak(get_r2i, -1), be_const_closure(Matter_Session_get_r2i_closure) },
        { be_const_key_weak(get_fabric_compressed, -1), be_const_closure(Matter_Session_get_fabric_compressed_closure) },
    })),
    be_str_weak(Matter_Session)
);
/*******************************************************************/

void be_load_Matter_Session_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Session);
    be_setglobal(vm, "Matter_Session");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
