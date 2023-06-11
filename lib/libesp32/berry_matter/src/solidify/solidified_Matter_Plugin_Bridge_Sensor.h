/* Solidification of Matter_Plugin_Bridge_Sensor.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Bridge_Sensor;

/********************************************************************
** Solidified function: filter_name_html
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_filter_name_html,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota_sensor_filter),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(webserver),
    /* K3   */  be_nested_str_weak(html_escape),
    /* K4   */  be_nested_str_weak(split),
    /* K5   */  be_nested_str_weak(_X23),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str_weak(),
    }),
    be_str_weak(filter_name_html),
    &be_const_str_solidified,
    ( &(const binstruction[13]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x78060009,  //  0001  JMPF	R1	#000C
      0xA4060200,  //  0002  IMPORT	R1	K1
      0xA40A0400,  //  0003  IMPORT	R2	K2
      0x8C0C0503,  //  0004  GETMET	R3	R2	K3
      0x8C140304,  //  0005  GETMET	R5	R1	K4
      0x881C0100,  //  0006  GETMBR	R7	R0	K0
      0x58200005,  //  0007  LDCONST	R8	K5
      0x7C140600,  //  0008  CALL	R5	3
      0x94140B06,  //  0009  GETIDX	R5	R5	K6
      0x7C0C0400,  //  000A  CALL	R3	2
      0x80040600,  //  000B  RET	1	R3
      0x80060E00,  //  000C  RET	1	K7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_init,   /* name */
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
** Solidified function: pre_value
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_pre_value,   /* name */
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
** Solidified function: parse_update
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_parse_update,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
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
    be_str_weak(parse_update),
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x540E0007,  //  0000  LDINT	R3	8
      0x1C0C0403,  //  0001  EQ	R3	R2	R3
      0x780E0013,  //  0002  JMPF	R3	#0017
      0x880C0100,  //  0003  GETMBR	R3	R0	K0
      0x780E0011,  //  0004  JMPF	R3	#0017
      0x8C0C0101,  //  0005  GETMET	R3	R0	K1
      0x6014000A,  //  0006  GETGBL	R5	G10
      0x88180100,  //  0007  GETMBR	R6	R0	K0
      0x8C180D02,  //  0008  GETMET	R6	R6	K2
      0x5C200200,  //  0009  MOVE	R8	R1
      0x7C180400,  //  000A  CALL	R6	2
      0x7C140200,  //  000B  CALL	R5	1
      0x7C0C0400,  //  000C  CALL	R3	2
      0x4C100000,  //  000D  LDNIL	R4
      0x20100604,  //  000E  NE	R4	R3	R4
      0x78120006,  //  000F  JMPF	R4	#0017
      0x88100103,  //  0010  GETMBR	R4	R0	K3
      0x20100604,  //  0011  NE	R4	R3	R4
      0x78120002,  //  0012  JMPF	R4	#0016
      0x8C100104,  //  0013  GETMET	R4	R0	K4
      0x5C180600,  //  0014  MOVE	R6	R3
      0x7C100400,  //  0015  CALL	R4	2
      0x90020603,  //  0016  SETMBR	R0	K3	R3
      0x80000000,  //  0017  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: value_changed
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_value_changed,   /* name */
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
** Solidified class: Matter_Plugin_Bridge_Sensor
********************************************************************/
extern const bclass be_class_Matter_Plugin_Bridge_HTTP;
be_local_class(Matter_Plugin_Bridge_Sensor,
    3,
    &be_class_Matter_Plugin_Bridge_HTTP,
    be_nested_map(13,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG, 1), be_nested_str_weak(filter) },
        { be_const_key_weak(value_changed, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_value_changed_closure) },
        { be_const_key_weak(UPDATE_TIME, -1), be_const_int(5000) },
        { be_const_key_weak(tasmota_sensor_filter, 8), be_const_var(0) },
        { be_const_key_weak(tasmota_sensor_matcher, -1), be_const_var(1) },
        { be_const_key_weak(PROBE_TIMEOUT, -1), be_const_int(1700) },
        { be_const_key_weak(filter_name_html, 12), be_const_closure(Matter_Plugin_Bridge_Sensor_filter_name_html_closure) },
        { be_const_key_weak(UPDATE_CMD, -1), be_nested_str_weak(Status_X208) },
        { be_const_key_weak(pre_value, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_pre_value_closure) },
        { be_const_key_weak(parse_update, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_parse_update_closure) },
        { be_const_key_weak(shadow_value, 7), be_const_var(2) },
        { be_const_key_weak(ARG_HTTP, 2), be_nested_str_weak(url) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_init_closure) },
    })),
    be_str_weak(Matter_Plugin_Bridge_Sensor)
);
/*******************************************************************/

void be_load_Matter_Plugin_Bridge_Sensor_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Bridge_Sensor);
    be_setglobal(vm, "Matter_Plugin_Bridge_Sensor");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
