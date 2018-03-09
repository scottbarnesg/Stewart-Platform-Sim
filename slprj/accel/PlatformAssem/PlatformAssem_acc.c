#include "__cf_PlatformAssem.h"
#include <math.h>
#include "PlatformAssem_acc.h"
#include "PlatformAssem_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr ,
int_T * tailPtr , int_T * headPtr , int_T * lastPtr , real_T tMinusDelay ,
real_T * * tBufPtr , real_T * * uBufPtr , real_T * * xBufPtr , boolean_T
isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr ) { int_T
testIdx ; int_T tail = * tailPtr ; int_T bufSz = * bufSzPtr ; real_T * tBuf =
* tBufPtr ; real_T * xBuf = ( NULL ) ; int_T numBuffer = 2 ; if (
istransportdelay ) { numBuffer = 3 ; xBuf = * xBufPtr ; } testIdx = ( tail <
( bufSz - 1 ) ) ? ( tail + 1 ) : 0 ; if ( ( tMinusDelay <= tBuf [ testIdx ] )
&& ! isfixedbuf ) { int_T j ; real_T * tempT ; real_T * tempU ; real_T *
tempX = ( NULL ) ; real_T * uBuf = * uBufPtr ; int_T newBufSz = bufSz + 1024
; if ( newBufSz > * maxNewBufSzPtr ) { * maxNewBufSzPtr = newBufSz ; } tempU
= ( real_T * ) utMalloc ( numBuffer * newBufSz * sizeof ( real_T ) ) ; if (
tempU == ( NULL ) ) { return ( false ) ; } tempT = tempU + newBufSz ; if (
istransportdelay ) tempX = tempT + newBufSz ; for ( j = tail ; j < bufSz ; j
++ ) { tempT [ j - tail ] = tBuf [ j ] ; tempU [ j - tail ] = uBuf [ j ] ; if
( istransportdelay ) tempX [ j - tail ] = xBuf [ j ] ; } for ( j = 0 ; j <
tail ; j ++ ) { tempT [ j + bufSz - tail ] = tBuf [ j ] ; tempU [ j + bufSz -
tail ] = uBuf [ j ] ; if ( istransportdelay ) tempX [ j + bufSz - tail ] =
xBuf [ j ] ; } if ( * lastPtr > tail ) { * lastPtr -= tail ; } else { *
lastPtr += ( bufSz - tail ) ; } * tailPtr = 0 ; * headPtr = bufSz ; utFree (
uBuf ) ; * bufSzPtr = newBufSz ; * tBufPtr = tempT ; * uBufPtr = tempU ; if (
istransportdelay ) * xBufPtr = tempX ; } else { * tailPtr = testIdx ; }
return ( true ) ; } real_T PlatformAssem_acc_rt_TDelayInterpolate ( real_T
tMinusDelay , real_T tStart , real_T * tBuf , real_T * uBuf , int_T bufSz ,
int_T * lastIdx , int_T oldestIdx , int_T newIdx , real_T initOutput ,
boolean_T discrete , boolean_T minorStepAndTAtLastMajorOutput ) { int_T i ;
real_T yout , t1 , t2 , u1 , u2 ; if ( ( newIdx == 0 ) && ( oldestIdx == 0 )
&& ( tMinusDelay > tStart ) ) return initOutput ; if ( tMinusDelay <= tStart
) return initOutput ; if ( ( tMinusDelay <= tBuf [ oldestIdx ] ) ) { if (
discrete ) { return ( uBuf [ oldestIdx ] ) ; } else { int_T tempIdx =
oldestIdx + 1 ; if ( oldestIdx == bufSz - 1 ) tempIdx = 0 ; t1 = tBuf [
oldestIdx ] ; t2 = tBuf [ tempIdx ] ; u1 = uBuf [ oldestIdx ] ; u2 = uBuf [
tempIdx ] ; if ( t2 == t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; } else {
yout = u1 ; } } else { real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; yout = f1 * u1 + f2 * u2 ; } return yout ; } } if (
minorStepAndTAtLastMajorOutput ) { if ( newIdx != 0 ) { if ( * lastIdx ==
newIdx ) { ( * lastIdx ) -- ; } newIdx -- ; } else { if ( * lastIdx == newIdx
) { * lastIdx = bufSz - 1 ; } newIdx = bufSz - 1 ; } } i = * lastIdx ; if (
tBuf [ i ] < tMinusDelay ) { while ( tBuf [ i ] < tMinusDelay ) { if ( i ==
newIdx ) break ; i = ( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0 ; } } else { while
( tBuf [ i ] >= tMinusDelay ) { i = ( i > 0 ) ? i - 1 : ( bufSz - 1 ) ; } i =
( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0 ; } * lastIdx = i ; if ( discrete ) {
double tempEps = ( DBL_EPSILON ) * 128.0 ; double localEps = tempEps *
muDoubleScalarAbs ( tBuf [ i ] ) ; if ( tempEps > localEps ) { localEps =
tempEps ; } localEps = localEps / 2.0 ; if ( tMinusDelay >= ( tBuf [ i ] -
localEps ) ) { yout = uBuf [ i ] ; } else { if ( i == 0 ) { yout = uBuf [
bufSz - 1 ] ; } else { yout = uBuf [ i - 1 ] ; } } } else { if ( i == 0 ) {
t1 = tBuf [ bufSz - 1 ] ; u1 = uBuf [ bufSz - 1 ] ; } else { t1 = tBuf [ i -
1 ] ; u1 = uBuf [ i - 1 ] ; } t2 = tBuf [ i ] ; u2 = uBuf [ i ] ; if ( t2 ==
t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; } else { yout = u1 ; } } else {
real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; yout
= f1 * u1 + f2 * u2 ; } } return ( yout ) ; } void rt_ssGetBlockPath (
SimStruct * S , int_T sysIdx , int_T blkIdx , char_T * * path ) {
_ssGetBlockPath ( S , sysIdx , blkIdx , path ) ; } void rt_ssSet_slErrMsg (
SimStruct * S , void * diag ) { _ssSet_slErrMsg ( S , diag ) ; } void
rt_ssReportDiagnosticAsWarning ( SimStruct * S , void * diag ) {
_ssReportDiagnosticAsWarning ( S , diag ) ; } static void mdlOutputs (
SimStruct * S , int_T tid ) { boolean_T first_output ; int32_T isHit ;
B_PlatformAssem_T * _rtB ; P_PlatformAssem_T * _rtP ; X_PlatformAssem_T *
_rtX ; DW_PlatformAssem_T * _rtDW ; _rtDW = ( ( DW_PlatformAssem_T * )
ssGetRootDWork ( S ) ) ; _rtX = ( ( X_PlatformAssem_T * ) ssGetContStates ( S
) ) ; _rtP = ( ( P_PlatformAssem_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_PlatformAssem_T * ) _ssGetModelBlockIO ( S ) ) ; if ( ssIsMajorTimeStep ( S
) != 0 ) { _rtDW -> INPUT_12_1_1_discrete [ 1 ] = _rtB -> B_0_0_0 ; }
first_output = false ; if ( _rtDW -> INPUT_12_1_1_discrete [ 0 ] == 0.0 ) {
_rtDW -> INPUT_12_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if (
first_output ) { _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 0 ] = _rtDW
-> INPUT_12_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] = 0.0 ; }
_rtB -> B_0_1_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 0 ] ; _rtB ->
B_0_1_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] ; _rtB ->
B_0_1_0 [ 2 ] = ( ( _rtDW -> INPUT_12_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_1_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_4_1_1_discrete [ 1 ] = _rtB -> B_0_2_0 ; } first_output =
false ; if ( _rtDW -> INPUT_4_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_4_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [
0 ] = _rtDW -> INPUT_4_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_3_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 0 ] ; _rtB
-> B_0_3_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 1 ] ; _rtB
-> B_0_3_0 [ 2 ] = ( ( _rtDW -> INPUT_4_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_3_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_3_1_1_discrete [ 1 ] = _rtB -> B_0_4_0 ; } first_output =
false ; if ( _rtDW -> INPUT_3_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_3_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [
0 ] = _rtDW -> INPUT_3_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_5_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 0 ] ; _rtB
-> B_0_5_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 1 ] ; _rtB
-> B_0_5_0 [ 2 ] = ( ( _rtDW -> INPUT_3_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_5_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_9_1_1_discrete [ 1 ] = _rtB -> B_0_6_0 ; } first_output =
false ; if ( _rtDW -> INPUT_9_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_9_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [
0 ] = _rtDW -> INPUT_9_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_7_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 0 ] ; _rtB
-> B_0_7_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1 ] ; _rtB
-> B_0_7_0 [ 2 ] = ( ( _rtDW -> INPUT_9_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_7_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_11_1_1_discrete [ 1 ] = _rtB -> B_0_8_0 ; } first_output =
false ; if ( _rtDW -> INPUT_11_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_11_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [
0 ] = _rtDW -> INPUT_11_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_9_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 0 ] ; _rtB
-> B_0_9_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1 ] ; _rtB
-> B_0_9_0 [ 2 ] = ( ( _rtDW -> INPUT_11_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_9_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_10_1_1_discrete [ 1 ] = _rtB -> B_0_10_0 ; } first_output =
false ; if ( _rtDW -> INPUT_10_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_10_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [
0 ] = _rtDW -> INPUT_10_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_11_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 0 ] ; _rtB
-> B_0_11_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1 ] ; _rtB
-> B_0_11_0 [ 2 ] = ( ( _rtDW -> INPUT_10_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_11_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_8_1_1_discrete [ 1 ] = _rtB -> B_0_12_0 ; } first_output =
false ; if ( _rtDW -> INPUT_8_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_8_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [
0 ] = _rtDW -> INPUT_8_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_13_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 0 ] ; _rtB
-> B_0_13_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1 ] ; _rtB
-> B_0_13_0 [ 2 ] = ( ( _rtDW -> INPUT_8_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_13_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_2_1_1_discrete [ 1 ] = _rtB -> B_0_14_0 ; } first_output =
false ; if ( _rtDW -> INPUT_2_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_2_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [
0 ] = _rtDW -> INPUT_2_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_15_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 0 ] ; _rtB
-> B_0_15_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1 ] ; _rtB
-> B_0_15_0 [ 2 ] = ( ( _rtDW -> INPUT_2_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_15_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_5_1_1_discrete [ 1 ] = _rtB -> B_0_16_0 ; } first_output =
false ; if ( _rtDW -> INPUT_5_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_5_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [
0 ] = _rtDW -> INPUT_5_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1 ] = 0.0 ;
} _rtB -> B_0_17_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 0 ] ; _rtB
-> B_0_17_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1 ] ; _rtB
-> B_0_17_0 [ 2 ] = ( ( _rtDW -> INPUT_5_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_17_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_6_1_1_discrete [ 1 ] = _rtB -> B_0_18_0 ; } first_output =
false ; if ( _rtDW -> INPUT_6_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_6_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 0
] = _rtDW -> INPUT_6_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] = 0.0 ; }
_rtB -> B_0_19_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 0 ] ; _rtB ->
B_0_19_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] ; _rtB ->
B_0_19_0 [ 2 ] = ( ( _rtDW -> INPUT_6_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_19_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_7_1_1_discrete [ 1 ] = _rtB -> B_0_20_0 ; } first_output =
false ; if ( _rtDW -> INPUT_7_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_7_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 0
] = _rtDW -> INPUT_7_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] = 0.0 ; }
_rtB -> B_0_21_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 0 ] ; _rtB ->
B_0_21_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] ; _rtB ->
B_0_21_0 [ 2 ] = ( ( _rtDW -> INPUT_7_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_21_0 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) {
_rtDW -> INPUT_1_1_1_discrete [ 1 ] = _rtB -> B_0_22_0 ; } first_output =
false ; if ( _rtDW -> INPUT_1_1_1_discrete [ 0 ] == 0.0 ) { _rtDW ->
INPUT_1_1_1_discrete [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 0
] = _rtDW -> INPUT_1_1_1_discrete [ 1 ] ; _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] = 0.0 ; }
_rtB -> B_0_23_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 0 ] ; _rtB ->
B_0_23_0 [ 1 ] = _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] ; _rtB ->
B_0_23_0 [ 2 ] = ( ( _rtDW -> INPUT_1_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] ) *
1000.0 ; _rtB -> B_0_23_0 [ 3 ] = 0.0 ; ssCallAccelRunBlock ( S , 0 , 24 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 0 , 25 ,
SS_CALL_MDL_OUTPUTS ) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0
) { _rtB -> B_0_26_0 [ 0 ] = _rtB -> B_0_25_0 [ 0 ] ; _rtB -> B_0_26_0 [ 1 ]
= _rtB -> B_0_25_0 [ 5 ] ; _rtB -> B_0_26_0 [ 2 ] = _rtB -> B_0_25_0 [ 1 ] ;
_rtB -> B_0_26_0 [ 3 ] = _rtB -> B_0_25_0 [ 2 ] ; _rtB -> B_0_26_0 [ 4 ] =
_rtB -> B_0_25_0 [ 3 ] ; _rtB -> B_0_26_0 [ 5 ] = _rtB -> B_0_25_0 [ 4 ] ;
ssCallAccelRunBlock ( S , 0 , 27 , SS_CALL_MDL_OUTPUTS ) ; } { real_T * *
uBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK . TUbufferPtrs [ 0 ]
; real_T * * tBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK .
TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT ( S ) ; real_T tMinusDelay ; {
int_T i1 ; real_T * y0 = & _rtB -> B_0_46_0 [ 0 ] ; const real_T * u0 = &
_rtB -> B_0_25_0 [ 13 ] ; int_T * iw_Tail = & _rtDW -> TransportDelay_IWORK .
Tail [ 0 ] ; int_T * iw_Head = & _rtDW -> TransportDelay_IWORK . Head [ 0 ] ;
int_T * iw_Last = & _rtDW -> TransportDelay_IWORK . Last [ 0 ] ; int_T *
iw_CircularBufSize = & _rtDW -> TransportDelay_IWORK . CircularBufSize [ 0 ]
; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { tMinusDelay = ( ( _rtP -> P_12 > 0.0 ) ?
_rtP -> P_12 : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if ( _rtP ->
P_12 == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
PlatformAssem_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , *
uBuffer , iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] ,
iw_Head [ i1 ] , _rtP -> P_13 , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( S )
&& ( ssGetTimeOfLastOutput ( S ) == ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer
++ ; } } } isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) {
ssCallAccelRunBlock ( S , 0 , 47 , SS_CALL_MDL_OUTPUTS ) ; } { real_T * *
uBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_l . TUbufferPtrs [ 0
] ; real_T * * tBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_l .
TUbufferPtrs [ 8 ] ; real_T simTime = ssGetT ( S ) ; real_T tMinusDelay ; {
int_T i1 ; real_T * y0 = & _rtB -> B_0_54_0 [ 0 ] ; const real_T * u0 = &
_rtB -> B_0_25_0 [ 6 ] ; int_T * iw_Tail = & _rtDW -> TransportDelay_IWORK_o
. Tail [ 0 ] ; int_T * iw_Head = & _rtDW -> TransportDelay_IWORK_o . Head [ 0
] ; int_T * iw_Last = & _rtDW -> TransportDelay_IWORK_o . Last [ 0 ] ; int_T
* iw_CircularBufSize = & _rtDW -> TransportDelay_IWORK_o . CircularBufSize [
0 ] ; for ( i1 = 0 ; i1 < 4 ; i1 ++ ) { tMinusDelay = ( ( _rtP -> P_14 > 0.0
) ? _rtP -> P_14 : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if ( _rtP ->
P_14 == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
PlatformAssem_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , *
uBuffer , iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] ,
iw_Head [ i1 ] , _rtP -> P_15 , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( S )
&& ( ssGetTimeOfLastOutput ( S ) == ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer
++ ; } y0 = & _rtB -> B_0_54_0 [ 4 ] ; u0 = & _rtB -> B_0_25_0 [ 16 ] ;
iw_Tail = & _rtDW -> TransportDelay_IWORK_o . Tail [ 4 ] ; iw_Head = & _rtDW
-> TransportDelay_IWORK_o . Head [ 4 ] ; iw_Last = & _rtDW ->
TransportDelay_IWORK_o . Last [ 4 ] ; iw_CircularBufSize = & _rtDW ->
TransportDelay_IWORK_o . CircularBufSize [ 4 ] ; for ( i1 = 0 ; i1 < 4 ; i1
++ ) { tMinusDelay = ( ( _rtP -> P_14 > 0.0 ) ? _rtP -> P_14 : 0.0 ) ;
tMinusDelay = simTime - tMinusDelay ; if ( _rtP -> P_14 == 0.0 ) y0 [ i1 ] =
u0 [ i1 ] ; else y0 [ i1 ] = PlatformAssem_acc_rt_TDelayInterpolate (
tMinusDelay , 0.0 , * tBuffer , * uBuffer , iw_CircularBufSize [ i1 ] , &
iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1 ] , _rtP -> P_15 , 0 , (
boolean_T ) ( ssIsMinorTimeStep ( S ) && ( ssGetTimeOfLastOutput ( S ) ==
ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer ++ ; } } } isHit = ssIsSampleHit (
S , 1 , 0 ) ; if ( isHit != 0 ) { ssCallAccelRunBlock ( S , 0 , 55 ,
SS_CALL_MDL_OUTPUTS ) ; { if ( ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter7_at_outport_0_PWORK .
AQHandles || _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter7_at_outport_0_PWORK .
SlioLTF ) && ssGetLogOutput ( S ) ) { sdiSlioSdiWriteSignal ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter7_at_outport_0_PWORK .
AQHandles , _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter7_at_outport_0_PWORK .
SlioLTF , 0 , ssGetTaskTime ( S , 1 ) , ( void * ) & _rtB -> B_0_25_0 [ 10 ]
) ; } } { if ( ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter8_at_outport_0_PWORK .
AQHandles || _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter8_at_outport_0_PWORK .
SlioLTF ) && ssGetLogOutput ( S ) ) { sdiSlioSdiWriteSignal ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter8_at_outport_0_PWORK .
AQHandles , _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter8_at_outport_0_PWORK .
SlioLTF , 0 , ssGetTaskTime ( S , 1 ) , ( void * ) & _rtB -> B_0_25_0 [ 11 ]
) ; } } { if ( ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter9_at_outport_0_PWORK .
AQHandles || _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter9_at_outport_0_PWORK .
SlioLTF ) && ssGetLogOutput ( S ) ) { sdiSlioSdiWriteSignal ( _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter9_at_outport_0_PWORK .
AQHandles , _rtDW ->
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter9_at_outport_0_PWORK .
SlioLTF , 0 , ssGetTaskTime ( S , 1 ) , ( void * ) & _rtB -> B_0_25_0 [ 12 ]
) ; } } } { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay_PWORK_h . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T *
* ) & _rtDW -> TransportDelay_PWORK_h . TUbufferPtrs [ 3 ] ; real_T simTime =
ssGetT ( S ) ; real_T tMinusDelay ; { int_T i1 ; real_T * y0 = & _rtB ->
B_0_63_0 [ 0 ] ; const real_T * u0 = & _rtB -> B_0_25_0 [ 10 ] ; int_T *
iw_Tail = & _rtDW -> TransportDelay_IWORK_a . Tail [ 0 ] ; int_T * iw_Head =
& _rtDW -> TransportDelay_IWORK_a . Head [ 0 ] ; int_T * iw_Last = & _rtDW ->
TransportDelay_IWORK_a . Last [ 0 ] ; int_T * iw_CircularBufSize = & _rtDW ->
TransportDelay_IWORK_a . CircularBufSize [ 0 ] ; for ( i1 = 0 ; i1 < 3 ; i1
++ ) { tMinusDelay = ( ( _rtP -> P_16 > 0.0 ) ? _rtP -> P_16 : 0.0 ) ;
tMinusDelay = simTime - tMinusDelay ; if ( _rtP -> P_16 == 0.0 ) y0 [ i1 ] =
u0 [ i1 ] ; else y0 [ i1 ] = PlatformAssem_acc_rt_TDelayInterpolate (
tMinusDelay , 0.0 , * tBuffer , * uBuffer , iw_CircularBufSize [ i1 ] , &
iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1 ] , _rtP -> P_17 , 0 , (
boolean_T ) ( ssIsMinorTimeStep ( S ) && ( ssGetTimeOfLastOutput ( S ) ==
ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer ++ ; } } } isHit = ssIsSampleHit (
S , 1 , 0 ) ; if ( isHit != 0 ) { ssCallAccelRunBlock ( S , 0 , 64 ,
SS_CALL_MDL_OUTPUTS ) ; } { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay_PWORK_p . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T *
* ) & _rtDW -> TransportDelay_PWORK_p . TUbufferPtrs [ 3 ] ; real_T simTime =
ssGetT ( S ) ; real_T tMinusDelay ; tMinusDelay = ( ( _rtP -> P_18 > 0.0 ) ?
_rtP -> P_18 : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if ( _rtP ->
P_18 == 0.0 ) _rtB -> B_0_71_0 [ 0 ] = _rtB -> B_0_25_0 [ 20 ] ; else _rtB ->
B_0_71_0 [ 0 ] = PlatformAssem_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 ,
* tBuffer , * uBuffer , _rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 0
] , & _rtDW -> TransportDelay_IWORK_i . Last [ 0 ] , _rtDW ->
TransportDelay_IWORK_i . Tail [ 0 ] , _rtDW -> TransportDelay_IWORK_i . Head
[ 0 ] , _rtP -> P_19 , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( S ) && (
ssGetTimeOfLastOutput ( S ) == ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer ++ ;
tMinusDelay = ( ( _rtP -> P_18 > 0.0 ) ? _rtP -> P_18 : 0.0 ) ; tMinusDelay =
simTime - tMinusDelay ; if ( _rtP -> P_18 == 0.0 ) _rtB -> B_0_71_0 [ 1 ] =
_rtB -> B_0_25_0 [ 22 ] ; else _rtB -> B_0_71_0 [ 1 ] =
PlatformAssem_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , *
uBuffer , _rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 1 ] , & _rtDW
-> TransportDelay_IWORK_i . Last [ 1 ] , _rtDW -> TransportDelay_IWORK_i .
Tail [ 1 ] , _rtDW -> TransportDelay_IWORK_i . Head [ 1 ] , _rtP -> P_19 , 0
, ( boolean_T ) ( ssIsMinorTimeStep ( S ) && ( ssGetTimeOfLastOutput ( S ) ==
ssGetT ( S ) ) ) ) ; tBuffer ++ ; uBuffer ++ ; tMinusDelay = ( ( _rtP -> P_18
> 0.0 ) ? _rtP -> P_18 : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if (
_rtP -> P_18 == 0.0 ) _rtB -> B_0_71_0 [ 2 ] = _rtB -> B_0_25_0 [ 21 ] ; else
_rtB -> B_0_71_0 [ 2 ] = PlatformAssem_acc_rt_TDelayInterpolate ( tMinusDelay
, 0.0 , * tBuffer , * uBuffer , _rtDW -> TransportDelay_IWORK_i .
CircularBufSize [ 2 ] , & _rtDW -> TransportDelay_IWORK_i . Last [ 2 ] ,
_rtDW -> TransportDelay_IWORK_i . Tail [ 2 ] , _rtDW ->
TransportDelay_IWORK_i . Head [ 2 ] , _rtP -> P_19 , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( S ) && ( ssGetTimeOfLastOutput ( S ) == ssGetT ( S ) ) )
) ; } isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) {
ssCallAccelRunBlock ( S , 0 , 72 , SS_CALL_MDL_OUTPUTS ) ; }
ssCallAccelRunBlock ( S , 0 , 307 , SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER
( tid ) ; } static void mdlOutputsTID2 ( SimStruct * S , int_T tid ) {
B_PlatformAssem_T * _rtB ; P_PlatformAssem_T * _rtP ; _rtP = ( (
P_PlatformAssem_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( B_PlatformAssem_T *
) _ssGetModelBlockIO ( S ) ) ; _rtB -> B_0_0_0 = _rtP -> P_0 ; _rtB ->
B_0_2_0 = _rtP -> P_1 ; _rtB -> B_0_4_0 = _rtP -> P_2 ; _rtB -> B_0_6_0 =
_rtP -> P_3 ; _rtB -> B_0_8_0 = _rtP -> P_4 ; _rtB -> B_0_10_0 = _rtP -> P_5
; _rtB -> B_0_12_0 = _rtP -> P_6 ; _rtB -> B_0_14_0 = _rtP -> P_7 ; _rtB ->
B_0_16_0 = _rtP -> P_8 ; _rtB -> B_0_18_0 = _rtP -> P_9 ; _rtB -> B_0_20_0 =
_rtP -> P_10 ; _rtB -> B_0_22_0 = _rtP -> P_11 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { B_PlatformAssem_T *
_rtB ; P_PlatformAssem_T * _rtP ; DW_PlatformAssem_T * _rtDW ; _rtDW = ( (
DW_PlatformAssem_T * ) ssGetRootDWork ( S ) ) ; _rtP = ( ( P_PlatformAssem_T
* ) ssGetModelRtp ( S ) ) ; _rtB = ( ( B_PlatformAssem_T * )
_ssGetModelBlockIO ( S ) ) ; { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay_PWORK . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T * *
) & _rtDW -> TransportDelay_PWORK . TUbufferPtrs [ 3 ] ; real_T simTime =
ssGetT ( S ) ; _rtDW -> TransportDelay_IWORK . Head [ 0 ] = ( ( _rtDW ->
TransportDelay_IWORK . Head [ 0 ] < ( _rtDW -> TransportDelay_IWORK .
CircularBufSize [ 0 ] - 1 ) ) ? ( _rtDW -> TransportDelay_IWORK . Head [ 0 ]
+ 1 ) : 0 ) ; if ( _rtDW -> TransportDelay_IWORK . Head [ 0 ] == _rtDW ->
TransportDelay_IWORK . Tail [ 0 ] ) { if ( !
PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW ->
TransportDelay_IWORK . CircularBufSize [ 0 ] , & _rtDW ->
TransportDelay_IWORK . Tail [ 0 ] , & _rtDW -> TransportDelay_IWORK . Head [
0 ] , & _rtDW -> TransportDelay_IWORK . Last [ 0 ] , simTime - _rtP -> P_12 ,
tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK . Head [ 0 ] ] = _rtB -> B_0_25_0 [ 13 ] ; _rtDW ->
TransportDelay_IWORK . Head [ 1 ] = ( ( _rtDW -> TransportDelay_IWORK . Head
[ 1 ] < ( _rtDW -> TransportDelay_IWORK . CircularBufSize [ 1 ] - 1 ) ) ? (
_rtDW -> TransportDelay_IWORK . Head [ 1 ] + 1 ) : 0 ) ; if ( _rtDW ->
TransportDelay_IWORK . Head [ 1 ] == _rtDW -> TransportDelay_IWORK . Tail [ 1
] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW ->
TransportDelay_IWORK . CircularBufSize [ 1 ] , & _rtDW ->
TransportDelay_IWORK . Tail [ 1 ] , & _rtDW -> TransportDelay_IWORK . Head [
1 ] , & _rtDW -> TransportDelay_IWORK . Last [ 1 ] , simTime - _rtP -> P_12 ,
tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK . Head [ 1 ] ] = _rtB -> B_0_25_0 [ 14 ] ; _rtDW ->
TransportDelay_IWORK . Head [ 2 ] = ( ( _rtDW -> TransportDelay_IWORK . Head
[ 2 ] < ( _rtDW -> TransportDelay_IWORK . CircularBufSize [ 2 ] - 1 ) ) ? (
_rtDW -> TransportDelay_IWORK . Head [ 2 ] + 1 ) : 0 ) ; if ( _rtDW ->
TransportDelay_IWORK . Head [ 2 ] == _rtDW -> TransportDelay_IWORK . Tail [ 2
] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW ->
TransportDelay_IWORK . CircularBufSize [ 2 ] , & _rtDW ->
TransportDelay_IWORK . Tail [ 2 ] , & _rtDW -> TransportDelay_IWORK . Head [
2 ] , & _rtDW -> TransportDelay_IWORK . Last [ 2 ] , simTime - _rtP -> P_12 ,
tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ _rtDW ->
TransportDelay_IWORK . Head [ 2 ] ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay_IWORK . Head [ 2 ] ] = _rtB -> B_0_25_0 [ 15 ] ; } { real_T *
* uBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_l . TUbufferPtrs [
0 ] ; real_T * * tBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_l .
TUbufferPtrs [ 8 ] ; real_T simTime = ssGetT ( S ) ; _rtDW ->
TransportDelay_IWORK_o . Head [ 0 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 0 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 0 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 0 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 0 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 0 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 0 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 0 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 0 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 0 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 0 ] ] = _rtB -> B_0_25_0 [ 6 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 1 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 1 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 1 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 1 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 1 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 1 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 1 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 1 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 1 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 1 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 1 ] ] = _rtB -> B_0_25_0 [ 7 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 2 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 2 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 2 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 2 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 2 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 2 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 2 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 2 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 2 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 2 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 2 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 2 ] ] = _rtB -> B_0_25_0 [ 8 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 3 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 3 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 3 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 3 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 3 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 3 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 3 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 3 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 3 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 3 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 3 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 3 ] ] = _rtB -> B_0_25_0 [ 9 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 4 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 4 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 4 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 4 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 4 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 4 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 4 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 4 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 4 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 4 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 4 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 4 ] ] = _rtB -> B_0_25_0 [ 16 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 5 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 5 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 5 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 5 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 5 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 5 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 5 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 5 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 5 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 5 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 5 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 5 ] ] = _rtB -> B_0_25_0 [ 17 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 6 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 6 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 6 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 6 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 6 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 6 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 6 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 6 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 6 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 6 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 6 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 6 ] ] = _rtB -> B_0_25_0 [ 18 ] ; _rtDW ->
TransportDelay_IWORK_o . Head [ 7 ] = ( ( _rtDW -> TransportDelay_IWORK_o .
Head [ 7 ] < ( _rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 7 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_o . Head [ 7 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_o . Head [ 7 ] == _rtDW -> TransportDelay_IWORK_o .
Tail [ 7 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_o . CircularBufSize [ 7 ] , & _rtDW ->
TransportDelay_IWORK_o . Tail [ 7 ] , & _rtDW -> TransportDelay_IWORK_o .
Head [ 7 ] , & _rtDW -> TransportDelay_IWORK_o . Last [ 7 ] , simTime - _rtP
-> P_14 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_o . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 7 ] ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay_IWORK_o . Head [ 7 ] ] = _rtB -> B_0_25_0 [ 19 ] ; } { real_T
* * uBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_h . TUbufferPtrs
[ 0 ] ; real_T * * tBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_h
. TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT ( S ) ; _rtDW ->
TransportDelay_IWORK_a . Head [ 0 ] = ( ( _rtDW -> TransportDelay_IWORK_a .
Head [ 0 ] < ( _rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 0 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_a . Head [ 0 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_a . Head [ 0 ] == _rtDW -> TransportDelay_IWORK_a .
Tail [ 0 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 0 ] , & _rtDW ->
TransportDelay_IWORK_a . Tail [ 0 ] , & _rtDW -> TransportDelay_IWORK_a .
Head [ 0 ] , & _rtDW -> TransportDelay_IWORK_a . Last [ 0 ] , simTime - _rtP
-> P_16 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_a . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 0 ] ] = _rtB -> B_0_25_0 [ 10 ] ; _rtDW ->
TransportDelay_IWORK_a . Head [ 1 ] = ( ( _rtDW -> TransportDelay_IWORK_a .
Head [ 1 ] < ( _rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 1 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_a . Head [ 1 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_a . Head [ 1 ] == _rtDW -> TransportDelay_IWORK_a .
Tail [ 1 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 1 ] , & _rtDW ->
TransportDelay_IWORK_a . Tail [ 1 ] , & _rtDW -> TransportDelay_IWORK_a .
Head [ 1 ] , & _rtDW -> TransportDelay_IWORK_a . Last [ 1 ] , simTime - _rtP
-> P_16 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_a . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 1 ] ] = _rtB -> B_0_25_0 [ 11 ] ; _rtDW ->
TransportDelay_IWORK_a . Head [ 2 ] = ( ( _rtDW -> TransportDelay_IWORK_a .
Head [ 2 ] < ( _rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 2 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_a . Head [ 2 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_a . Head [ 2 ] == _rtDW -> TransportDelay_IWORK_a .
Tail [ 2 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_a . CircularBufSize [ 2 ] , & _rtDW ->
TransportDelay_IWORK_a . Tail [ 2 ] , & _rtDW -> TransportDelay_IWORK_a .
Head [ 2 ] , & _rtDW -> TransportDelay_IWORK_a . Last [ 2 ] , simTime - _rtP
-> P_16 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_a . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 2 ] ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay_IWORK_a . Head [ 2 ] ] = _rtB -> B_0_25_0 [ 12 ] ; } { real_T
* * uBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_p . TUbufferPtrs
[ 0 ] ; real_T * * tBuffer = ( real_T * * ) & _rtDW -> TransportDelay_PWORK_p
. TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT ( S ) ; _rtDW ->
TransportDelay_IWORK_i . Head [ 0 ] = ( ( _rtDW -> TransportDelay_IWORK_i .
Head [ 0 ] < ( _rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 0 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_i . Head [ 0 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_i . Head [ 0 ] == _rtDW -> TransportDelay_IWORK_i .
Tail [ 0 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 0 ] , & _rtDW ->
TransportDelay_IWORK_i . Tail [ 0 ] , & _rtDW -> TransportDelay_IWORK_i .
Head [ 0 ] , & _rtDW -> TransportDelay_IWORK_i . Last [ 0 ] , simTime - _rtP
-> P_18 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_i . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 0 ] ] = _rtB -> B_0_25_0 [ 20 ] ; _rtDW ->
TransportDelay_IWORK_i . Head [ 1 ] = ( ( _rtDW -> TransportDelay_IWORK_i .
Head [ 1 ] < ( _rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 1 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_i . Head [ 1 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_i . Head [ 1 ] == _rtDW -> TransportDelay_IWORK_i .
Tail [ 1 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 1 ] , & _rtDW ->
TransportDelay_IWORK_i . Tail [ 1 ] , & _rtDW -> TransportDelay_IWORK_i .
Head [ 1 ] , & _rtDW -> TransportDelay_IWORK_i . Last [ 1 ] , simTime - _rtP
-> P_18 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_i . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 1 ] ] = _rtB -> B_0_25_0 [ 22 ] ; _rtDW ->
TransportDelay_IWORK_i . Head [ 2 ] = ( ( _rtDW -> TransportDelay_IWORK_i .
Head [ 2 ] < ( _rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 2 ] - 1 )
) ? ( _rtDW -> TransportDelay_IWORK_i . Head [ 2 ] + 1 ) : 0 ) ; if ( _rtDW
-> TransportDelay_IWORK_i . Head [ 2 ] == _rtDW -> TransportDelay_IWORK_i .
Tail [ 2 ] ) { if ( ! PlatformAssem_acc_rt_TDelayUpdateTailOrGrowBuf ( &
_rtDW -> TransportDelay_IWORK_i . CircularBufSize [ 2 ] , & _rtDW ->
TransportDelay_IWORK_i . Tail [ 2 ] , & _rtDW -> TransportDelay_IWORK_i .
Head [ 2 ] , & _rtDW -> TransportDelay_IWORK_i . Last [ 2 ] , simTime - _rtP
-> P_18 , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay_IWORK_i . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 2 ] ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay_IWORK_i . Head [ 2 ] ] = _rtB -> B_0_25_0 [ 21 ] ; }
UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID2 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { X_PlatformAssem_T * _rtX ;
XDot_PlatformAssem_T * _rtXdot ; DW_PlatformAssem_T * _rtDW ; _rtDW = ( (
DW_PlatformAssem_T * ) ssGetRootDWork ( S ) ) ; _rtXdot = ( (
XDot_PlatformAssem_T * ) ssGetdX ( S ) ) ; _rtX = ( ( X_PlatformAssem_T * )
ssGetContStates ( S ) ) ; _rtXdot ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] ; _rtXdot
-> PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] = ( (
_rtDW -> INPUT_12_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [
1 ] = ( ( _rtDW -> INPUT_4_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [
1 ] = ( ( _rtDW -> INPUT_3_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1
] = ( ( _rtDW -> INPUT_9_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1
] = ( ( _rtDW -> INPUT_11_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1
] = ( ( _rtDW -> INPUT_10_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1
] = ( ( _rtDW -> INPUT_8_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1
] = ( ( _rtDW -> INPUT_2_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 0 ] = _rtX
-> PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1 ] ;
_rtXdot -> PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1
] = ( ( _rtDW -> INPUT_5_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] ; _rtXdot
-> PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] = ( (
_rtDW -> INPUT_6_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] ; _rtXdot
-> PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] = ( (
_rtDW -> INPUT_7_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 1 ] ) *
1000.0 ; _rtXdot ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 0 ] = _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] ; _rtXdot
-> PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] = ( (
_rtDW -> INPUT_1_1_1_discrete [ 1 ] - _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 0 ] ) *
1000.0 - 2.0 * _rtX ->
PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 1 ] ) *
1000.0 ; ssCallAccelRunBlock ( S , 0 , 24 , SS_CALL_MDL_DERIVATIVES ) ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { ssCallAccelRunBlock ( S , 0 ,
24 , SS_CALL_MDL_PROJECTION ) ; } static void mdlInitializeSizes ( SimStruct
* S ) { ssSetChecksumVal ( S , 0 , 326214127U ) ; ssSetChecksumVal ( S , 1 ,
3240946321U ) ; ssSetChecksumVal ( S , 2 , 935040310U ) ; ssSetChecksumVal (
S , 3 , 765193808U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat
= mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "9.0" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
DW_PlatformAssem_T ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( B_PlatformAssem_T ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
P_PlatformAssem_T ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & PlatformAssem_rtDefaultP ) ; } static void mdlInitializeSampleTimes (
SimStruct * S ) { slAccRegPrmChangeFcn ( S , mdlOutputsTID2 ) ; } static void
mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
