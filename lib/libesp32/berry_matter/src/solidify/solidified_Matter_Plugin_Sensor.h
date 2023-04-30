/* Solidification of Matter_Plugin_Sensor.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Sensor;

/********************************************************************
** Solidified function: pre_value
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_pre_value,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(pre_value),
    &be_const_str_solidified,
    ( &(const binstruction[ 1]) {  /* code */
      0x80040200,  //  0000  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(tasmota_sensor_filter),
    /* K2   */  be_nested_str_weak(find),
    /* K3   */  be_nested_str_weak(ARG),
    /* K4   */  be_nested_str_weak(tasmota_sensor_matcher),
    /* K5   */  be_nested_str_weak(tasmota),
    /* K6   */  be_nested_str_weak(Rule_Matcher),
    /* K7   */  be_nested_str_weak(parse),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x8C100702,  //  0008  GETMET	R4	R3	K2
      0x88180103,  //  0009  GETMBR	R6	R0	K3
      0x7C100400,  //  000A  CALL	R4	2
      0x90020204,  //  000B  SETMBR	R0	K1	R4
      0x88100101,  //  000C  GETMBR	R4	R0	K1
      0x78120005,  //  000D  JMPF	R4	#0014
      0xB8120A00,  //  000E  GETNGBL	R4	K5
      0x88100906,  //  000F  GETMBR	R4	R4	K6
      0x8C100907,  //  0010  GETMET	R4	R4	K7
      0x88180101,  //  0011  GETMBR	R6	R0	K1
      0x7C100400,  //  0012  CALL	R4	2
      0x90020804,  //  0013  SETMBR	R0	K4	R4
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_sensors
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_parse_sensors,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota_sensor_matcher),
    /* K1   */  be_nested_str_weak(pre_value),
    /* K2   */  be_nested_str_weak(match),
    /* K3   */  be_nested_str_weak(shadow_value),
    /* K4   */  be_nested_str_weak(value_changed),
    }),
    be_str_weak(parse_sensors),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x780A0011,  //  0001  JMPF	R2	#0014
      0x8C080101,  //  0002  GETMET	R2	R0	K1
      0x6010000A,  //  0003  GETGBL	R4	G10
      0x88140100,  //  0004  GETMBR	R5	R0	K0
      0x8C140B02,  //  0005  GETMET	R5	R5	K2
      0x5C1C0200,  //  0006  MOVE	R7	R1
      0x7C140400,  //  0007  CALL	R5	2
      0x7C100200,  //  0008  CALL	R4	1
      0x7C080400,  //  0009  CALL	R2	2
      0x4C0C0000,  //  000A  LDNIL	R3
      0x200C0403,  //  000B  NE	R3	R2	R3
      0x780E0006,  //  000C  JMPF	R3	#0014
      0x880C0103,  //  000D  GETMBR	R3	R0	K3
      0x200C0403,  //  000E  NE	R3	R2	R3
      0x780E0002,  //  000F  JMPF	R3	#0013
      0x8C0C0104,  //  0010  GETMET	R3	R0	K4
      0x5C140400,  //  0011  MOVE	R5	R2
      0x7C0C0400,  //  0012  CALL	R3	2
      0x90020602,  //  0013  SETMBR	R0	K3	R2
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: value_changed
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_value_changed,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(value_changed),
    &be_const_str_solidified,
    ( &(const binstruction[ 1]) {  /* code */
      0x80000000,  //  0000  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Sensor
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_Sensor,
    3,
    &be_class_Matter_Plugin_Device,
    be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(pre_value, -1), be_const_closure(Matter_Plugin_Sensor_pre_value_closure) },
        { be_const_key_weak(shadow_value, -1), be_const_var(2) },
        { be_const_key_weak(tasmota_sensor_matcher, 6), be_const_var(1) },
        { be_const_key_weak(init, 1), be_const_closure(Matter_Plugin_Sensor_init_closure) },
        { be_const_key_weak(parse_sensors, -1), be_const_closure(Matter_Plugin_Sensor_parse_sensors_closure) },
        { be_const_key_weak(value_changed, -1), be_const_closure(Matter_Plugin_Sensor_value_changed_closure) },
        { be_const_key_weak(tasmota_sensor_filter, -1), be_const_var(0) },
        { be_const_key_weak(ARG, -1), be_nested_str_weak(filter) },
    })),
    be_str_weak(Matter_Plugin_Sensor)
);
/*******************************************************************/

void be_load_Matter_Plugin_Sensor_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Sensor);
    be_setglobal(vm, "Matter_Plugin_Sensor");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
