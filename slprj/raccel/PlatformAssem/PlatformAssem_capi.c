#include "__cf_PlatformAssem.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PlatformAssem_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "PlatformAssem.h"
#include "PlatformAssem_capi.h"
#include "PlatformAssem_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"PlatformAssem/Platform Acceleration (Abs)/Transport Delay" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"PlatformAssem/Platform Orientation/Transport Delay" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"PlatformAssem/Platform Translation (Abs)/Transport Delay" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"PlatformAssem/Platform Translation (Rel) /Transport Delay" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_10_1_1" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_11_1_1" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_12_1_1" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_8_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/INPUT_9_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"PlatformAssem/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 }
} ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 18 ,
TARGET_STRING ( "PlatformAssem/angle1" ) , TARGET_STRING ( "Value" ) , 0 , 5
, 0 } , { 19 , TARGET_STRING ( "PlatformAssem/angle2" ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 20 , TARGET_STRING ( "PlatformAssem/angle3" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 21 , TARGET_STRING (
"PlatformAssem/angle4" ) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 22 ,
TARGET_STRING ( "PlatformAssem/angle5" ) , TARGET_STRING ( "Value" ) , 0 , 5
, 0 } , { 23 , TARGET_STRING ( "PlatformAssem/angle6" ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 24 , TARGET_STRING ( "PlatformAssem/base_px" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 25 , TARGET_STRING (
"PlatformAssem/base_py" ) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 26 ,
TARGET_STRING ( "PlatformAssem/base_pz" ) , TARGET_STRING ( "Value" ) , 0 , 5
, 0 } , { 27 , TARGET_STRING ( "PlatformAssem/base_qx" ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 28 , TARGET_STRING ( "PlatformAssem/base_qy" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 29 , TARGET_STRING (
"PlatformAssem/base_qz" ) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 30 ,
TARGET_STRING ( "PlatformAssem/Platform Acceleration (Abs)/Transport Delay" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 5 , 0 } , { 31 , TARGET_STRING (
"PlatformAssem/Platform Orientation/Transport Delay" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 5 , 0 } , { 32 , TARGET_STRING (
"PlatformAssem/Platform Translation (Abs)/Transport Delay" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 5 , 0 } , { 33 , TARGET_STRING (
"PlatformAssem/Platform Translation (Rel) /Transport Delay" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } }
; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 34 ,
TARGET_STRING ( "sensor_delay" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 }
} ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . l0djbeo5im [ 0 ] , & rtB .
ekm3ljqd3x [ 0 ] , & rtB . hetoyp0u0k [ 0 ] , & rtB . kmqjjdc1mq [ 0 ] , &
rtB . hxle1u30ge [ 0 ] , & rtB . jhjlkclg1v [ 0 ] , & rtB . iweamutdyj [ 0 ]
, & rtB . okjhanhfib [ 0 ] , & rtB . ddzm00x0zp [ 0 ] , & rtB . jpor24elfh [
0 ] , & rtB . ngjujydyri [ 0 ] , & rtB . ikcqrmspqb [ 0 ] , & rtB .
mveuuxcphg [ 0 ] , & rtB . ivdodijtwh [ 0 ] , & rtB . dje4vrvcgl [ 0 ] , &
rtB . pok1002xiz [ 0 ] , & rtB . cj0lrxmll1 [ 0 ] , & rtB . k1wv31z5no [ 0 ]
, & rtP . angle1_Value , & rtP . angle2_Value , & rtP . angle3_Value , & rtP
. angle4_Value , & rtP . angle5_Value , & rtP . angle6_Value , & rtP .
base_px_Value , & rtP . base_py_Value , & rtP . base_pz_Value , & rtP .
base_qx_Value , & rtP . base_qy_Value , & rtP . base_qz_Value , & rtP .
TransportDelay_InitOutput , & rtP . TransportDelay_InitOutput_bizwdr4jed , &
rtP . TransportDelay_InitOutput_a2xex0xddn , & rtP .
TransportDelay_InitOutput_nhc31y12nz , & rtP . sensor_delay , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_SCALAR , 10 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 3 , 1 , 8 , 1 , 4 , 1 , 23 , 1 , 73 , 1
, 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 18 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 16 , rtModelParameters , 1 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 374049582U , 1337284282U
, 4012821603U , 659983721U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * PlatformAssem_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void PlatformAssem_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PlatformAssem_host_InitializeDataMapInfo (
PlatformAssem_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
