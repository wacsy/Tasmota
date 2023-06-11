/* Solidification of Matter_Plugin_Sensor_Illuminance.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Sensor_Illuminance;

/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Illuminance_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(shadow_value),
    /* K7   */  be_nested_str_weak(create_TLV),
    /* K8   */  be_nested_str_weak(U2),
    /* K9   */  be_nested_str_weak(NULL),
    /* K10  */  be_const_int(1),
    /* K11  */  be_const_int(2),
    /* K12  */  be_nested_str_weak(U4),
    /* K13  */  be_const_int(3),
    /* K14  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[71]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x541E03FF,  //  0005  LDINT	R7	1024
      0x1C1C0A07,  //  0006  EQ	R7	R5	R7
      0x781E0035,  //  0007  JMPF	R7	#003E
      0x1C1C0D05,  //  0008  EQ	R7	R6	K5
      0x781E0011,  //  0009  JMPF	R7	#001C
      0x881C0106,  //  000A  GETMBR	R7	R0	K6
      0x4C200000,  //  000B  LDNIL	R8
      0x201C0E08,  //  000C  NE	R7	R7	R8
      0x781E0007,  //  000D  JMPF	R7	#0016
      0x8C1C0907,  //  000E  GETMET	R7	R4	K7
      0x88240908,  //  000F  GETMBR	R9	R4	K8
      0x60280009,  //  0010  GETGBL	R10	G9
      0x882C0106,  //  0011  GETMBR	R11	R0	K6
      0x7C280200,  //  0012  CALL	R10	1
      0x7C1C0600,  //  0013  CALL	R7	3
      0x80040E00,  //  0014  RET	1	R7
      0x70020004,  //  0015  JMP		#001B
      0x8C1C0907,  //  0016  GETMET	R7	R4	K7
      0x88240909,  //  0017  GETMBR	R9	R4	K9
      0x4C280000,  //  0018  LDNIL	R10
      0x7C1C0600,  //  0019  CALL	R7	3
      0x80040E00,  //  001A  RET	1	R7
      0x70020020,  //  001B  JMP		#003D
      0x1C1C0D0A,  //  001C  EQ	R7	R6	K10
      0x781E0005,  //  001D  JMPF	R7	#0024
      0x8C1C0907,  //  001E  GETMET	R7	R4	K7
      0x88240908,  //  001F  GETMBR	R9	R4	K8
      0x5828000A,  //  0020  LDCONST	R10	K10
      0x7C1C0600,  //  0021  CALL	R7	3
      0x80040E00,  //  0022  RET	1	R7
      0x70020018,  //  0023  JMP		#003D
      0x1C1C0D0B,  //  0024  EQ	R7	R6	K11
      0x781E0005,  //  0025  JMPF	R7	#002C
      0x8C1C0907,  //  0026  GETMET	R7	R4	K7
      0x88240908,  //  0027  GETMBR	R9	R4	K8
      0x542AFFFD,  //  0028  LDINT	R10	65534
      0x7C1C0600,  //  0029  CALL	R7	3
      0x80040E00,  //  002A  RET	1	R7
      0x70020010,  //  002B  JMP		#003D
      0x541EFFFB,  //  002C  LDINT	R7	65532
      0x1C1C0C07,  //  002D  EQ	R7	R6	R7
      0x781E0005,  //  002E  JMPF	R7	#0035
      0x8C1C0907,  //  002F  GETMET	R7	R4	K7
      0x8824090C,  //  0030  GETMBR	R9	R4	K12
      0x58280005,  //  0031  LDCONST	R10	K5
      0x7C1C0600,  //  0032  CALL	R7	3
      0x80040E00,  //  0033  RET	1	R7
      0x70020007,  //  0034  JMP		#003D
      0x541EFFFC,  //  0035  LDINT	R7	65533
      0x1C1C0C07,  //  0036  EQ	R7	R6	R7
      0x781E0004,  //  0037  JMPF	R7	#003D
      0x8C1C0907,  //  0038  GETMET	R7	R4	K7
      0x8824090C,  //  0039  GETMBR	R9	R4	K12
      0x5828000D,  //  003A  LDCONST	R10	K13
      0x7C1C0600,  //  003B  CALL	R7	3
      0x80040E00,  //  003C  RET	1	R7
      0x70020007,  //  003D  JMP		#0046
      0x601C0003,  //  003E  GETGBL	R7	G3
      0x5C200000,  //  003F  MOVE	R8	R0
      0x7C1C0200,  //  0040  CALL	R7	1
      0x8C1C0F0E,  //  0041  GETMET	R7	R7	K14
      0x5C240200,  //  0042  MOVE	R9	R1
      0x5C280400,  //  0043  MOVE	R10	R2
      0x7C1C0600,  //  0044  CALL	R7	3
      0x80040E00,  //  0045  RET	1	R7
      0x80000000,  //  0046  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: pre_value
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Illuminance_pre_value,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(math),
    /* K1   */  be_const_int(0),
    /* K2   */  be_nested_str_weak(log10),
    /* K3   */  be_const_int(1),
    }),
    be_str_weak(pre_value),
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0001,  //  0002  JMPF	R2	#0005
      0x4C080000,  //  0003  LDNIL	R2
      0x80040400,  //  0004  RET	1	R2
      0xA40A0000,  //  0005  IMPORT	R2	K0
      0x140C0301,  //  0006  LT	R3	R1	K1
      0x780E0001,  //  0007  JMPF	R3	#000A
      0x80060200,  //  0008  RET	1	K1
      0x70020005,  //  0009  JMP		#0010
      0x8C0C0502,  //  000A  GETMET	R3	R2	K2
      0x00140303,  //  000B  ADD	R5	R1	K3
      0x7C0C0400,  //  000C  CALL	R3	2
      0x5412270F,  //  000D  LDINT	R4	10000
      0x080C0604,  //  000E  MUL	R3	R3	R4
      0x80040600,  //  000F  RET	1	R3
      0x80000000,  //  0010  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: value_changed
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Illuminance_value_changed,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(attribute_updated),
    /* K1   */  be_const_int(0),
    }),
    be_str_weak(value_changed),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C080100,  //  0000  GETMET	R2	R0	K0
      0x541203FF,  //  0001  LDINT	R4	1024
      0x58140001,  //  0002  LDCONST	R5	K1
      0x7C080600,  //  0003  CALL	R2	3
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Sensor_Illuminance
********************************************************************/
extern const bclass be_class_Matter_Plugin_Sensor;
be_local_class(Matter_Plugin_Sensor_Illuminance,
    0,
    &be_class_Matter_Plugin_Sensor,
    be_nested_map(7,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(read_attribute, 2), be_const_closure(Matter_Plugin_Sensor_Illuminance_read_attribute_closure) },
        { be_const_key_weak(pre_value, 4), be_const_closure(Matter_Plugin_Sensor_Illuminance_pre_value_closure) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(1024, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(5,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(TYPE, 6), be_nested_str_weak(illuminance) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Illuminance) },
        { be_const_key_weak(value_changed, -1), be_const_closure(Matter_Plugin_Sensor_Illuminance_value_changed_closure) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(262, -1), be_const_int(2) },
    }))    ) } )) },
    })),
    be_str_weak(Matter_Plugin_Sensor_Illuminance)
);
/*******************************************************************/

void be_load_Matter_Plugin_Sensor_Illuminance_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Sensor_Illuminance);
    be_setglobal(vm, "Matter_Plugin_Sensor_Illuminance");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
