#include "__cf_PlatformAssem.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_CTarget.h"
void PlatformAssem_f0ca4364_1_checkTargets ( const double * rtdv , const
double * state ) { ( void ) rtdv ; ( void ) state ; } void
PlatformAssem_f0ca4364_1_setTargets ( const double * rtdv , CTarget * targets
) { ( void ) rtdv ; ( void ) targets ; } void
PlatformAssem_f0ca4364_1_resetStateVector ( const void * mech , double *
state ) { double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ;
state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ;
state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ;
state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ;
state [ 9 ] = xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ;
state [ 12 ] = xx [ 0 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ;
state [ 15 ] = xx [ 0 ] ; state [ 16 ] = xx [ 1 ] ; state [ 17 ] = xx [ 0 ] ;
state [ 18 ] = xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ;
state [ 21 ] = xx [ 0 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 1 ] ;
state [ 24 ] = xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ;
state [ 27 ] = xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ;
state [ 30 ] = xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ;
state [ 33 ] = xx [ 0 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ;
state [ 36 ] = xx [ 0 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ;
state [ 39 ] = xx [ 0 ] ; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ;
state [ 42 ] = xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ;
state [ 45 ] = xx [ 0 ] ; state [ 46 ] = xx [ 1 ] ; state [ 47 ] = xx [ 0 ] ;
state [ 48 ] = xx [ 0 ] ; state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [ 0 ] ;
state [ 51 ] = xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ;
state [ 54 ] = xx [ 0 ] ; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ;
state [ 57 ] = xx [ 1 ] ; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ;
state [ 60 ] = xx [ 0 ] ; state [ 61 ] = xx [ 0 ] ; state [ 62 ] = xx [ 0 ] ;
state [ 63 ] = xx [ 0 ] ; state [ 64 ] = xx [ 0 ] ; state [ 65 ] = xx [ 0 ] ;
state [ 66 ] = xx [ 0 ] ; state [ 67 ] = xx [ 0 ] ; state [ 68 ] = xx [ 1 ] ;
state [ 69 ] = xx [ 0 ] ; state [ 70 ] = xx [ 0 ] ; state [ 71 ] = xx [ 0 ] ;
state [ 72 ] = xx [ 0 ] ; state [ 73 ] = xx [ 0 ] ; state [ 74 ] = xx [ 0 ] ;
state [ 75 ] = xx [ 0 ] ; state [ 76 ] = xx [ 0 ] ; state [ 77 ] = xx [ 0 ] ;
state [ 78 ] = xx [ 0 ] ; state [ 79 ] = xx [ 1 ] ; state [ 80 ] = xx [ 0 ] ;
state [ 81 ] = xx [ 0 ] ; state [ 82 ] = xx [ 0 ] ; state [ 83 ] = xx [ 0 ] ;
state [ 84 ] = xx [ 0 ] ; state [ 85 ] = xx [ 0 ] ; state [ 86 ] = xx [ 0 ] ;
state [ 87 ] = xx [ 0 ] ; state [ 88 ] = xx [ 0 ] ; state [ 89 ] = xx [ 0 ] ;
state [ 90 ] = xx [ 1 ] ; state [ 91 ] = xx [ 0 ] ; state [ 92 ] = xx [ 0 ] ;
state [ 93 ] = xx [ 0 ] ; state [ 94 ] = xx [ 0 ] ; state [ 95 ] = xx [ 0 ] ;
state [ 96 ] = xx [ 0 ] ; } void
PlatformAssem_f0ca4364_1_initializeTrackedAngleState ( const void * mech ,
const double * rtdv , const double * motionData , double * state , void *
neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * )
neDiagMgr0 ; ( void ) mech ; ( void ) rtdv ; ( void ) motionData ; ( void )
state ; ( void ) neDiagMgr ; } void
PlatformAssem_f0ca4364_1_computeDiscreteState ( const void * mech , const
double * rtdv , double * state ) { ( void ) mech ; ( void ) rtdv ; ( void )
state ; } void PlatformAssem_f0ca4364_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { double xx [ 42 ] ; ( void )
mech ; xx [ 0 ] = state [ 16 ] ; xx [ 1 ] = state [ 17 ] ; xx [ 2 ] = state [
18 ] ; xx [ 3 ] = state [ 19 ] ; xx [ 4 ] = dofDeltas [ 8 ] ; xx [ 5 ] =
dofDeltas [ 9 ] ; xx [ 6 ] = dofDeltas [ 10 ] ; pm_math_quatDeriv ( xx + 0 ,
xx + 4 , xx + 7 ) ; xx [ 0 ] = state [ 16 ] + xx [ 7 ] ; xx [ 1 ] = state [
17 ] + xx [ 8 ] ; xx [ 2 ] = state [ 18 ] + xx [ 9 ] ; xx [ 3 ] = state [ 19
] + xx [ 10 ] ; xx [ 4 ] = 1.0e-64 ; xx [ 5 ] = sqrt ( xx [ 0 ] * xx [ 0 ] +
xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) ; if ( xx [
4 ] > xx [ 5 ] ) xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = state [ 23 ] ; xx [ 7 ] =
state [ 24 ] ; xx [ 8 ] = state [ 25 ] ; xx [ 9 ] = state [ 26 ] ; xx [ 10 ]
= dofDeltas [ 11 ] ; xx [ 11 ] = dofDeltas [ 12 ] ; xx [ 12 ] = dofDeltas [
13 ] ; pm_math_quatDeriv ( xx + 6 , xx + 10 , xx + 13 ) ; xx [ 6 ] = state [
23 ] + xx [ 13 ] ; xx [ 7 ] = state [ 24 ] + xx [ 14 ] ; xx [ 8 ] = state [
25 ] + xx [ 15 ] ; xx [ 9 ] = state [ 26 ] + xx [ 16 ] ; xx [ 10 ] = sqrt (
xx [ 6 ] * xx [ 6 ] + xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [ 9 ] *
xx [ 9 ] ) ; if ( xx [ 4 ] > xx [ 10 ] ) xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] =
state [ 46 ] ; xx [ 12 ] = state [ 47 ] ; xx [ 13 ] = state [ 48 ] ; xx [ 14
] = state [ 49 ] ; xx [ 15 ] = dofDeltas [ 22 ] ; xx [ 16 ] = dofDeltas [ 23
] ; xx [ 17 ] = dofDeltas [ 24 ] ; pm_math_quatDeriv ( xx + 11 , xx + 15 , xx
+ 18 ) ; xx [ 11 ] = state [ 46 ] + xx [ 18 ] ; xx [ 12 ] = state [ 47 ] + xx
[ 19 ] ; xx [ 13 ] = state [ 48 ] + xx [ 20 ] ; xx [ 14 ] = state [ 49 ] + xx
[ 21 ] ; xx [ 15 ] = sqrt ( xx [ 11 ] * xx [ 11 ] + xx [ 12 ] * xx [ 12 ] +
xx [ 13 ] * xx [ 13 ] + xx [ 14 ] * xx [ 14 ] ) ; if ( xx [ 4 ] > xx [ 15 ] )
xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = state [ 57 ] ; xx [ 17 ] = state [ 58 ] ;
xx [ 18 ] = state [ 59 ] ; xx [ 19 ] = state [ 60 ] ; xx [ 20 ] = dofDeltas [
27 ] ; xx [ 21 ] = dofDeltas [ 28 ] ; xx [ 22 ] = dofDeltas [ 29 ] ;
pm_math_quatDeriv ( xx + 16 , xx + 20 , xx + 23 ) ; xx [ 16 ] = state [ 57 ]
+ xx [ 23 ] ; xx [ 17 ] = state [ 58 ] + xx [ 24 ] ; xx [ 18 ] = state [ 59 ]
+ xx [ 25 ] ; xx [ 19 ] = state [ 60 ] + xx [ 26 ] ; xx [ 20 ] = sqrt ( xx [
16 ] * xx [ 16 ] + xx [ 17 ] * xx [ 17 ] + xx [ 18 ] * xx [ 18 ] + xx [ 19 ]
* xx [ 19 ] ) ; if ( xx [ 4 ] > xx [ 20 ] ) xx [ 20 ] = xx [ 4 ] ; xx [ 21 ]
= state [ 68 ] ; xx [ 22 ] = state [ 69 ] ; xx [ 23 ] = state [ 70 ] ; xx [
24 ] = state [ 71 ] ; xx [ 25 ] = dofDeltas [ 32 ] ; xx [ 26 ] = dofDeltas [
33 ] ; xx [ 27 ] = dofDeltas [ 34 ] ; pm_math_quatDeriv ( xx + 21 , xx + 25 ,
xx + 28 ) ; xx [ 21 ] = state [ 68 ] + xx [ 28 ] ; xx [ 22 ] = state [ 69 ] +
xx [ 29 ] ; xx [ 23 ] = state [ 70 ] + xx [ 30 ] ; xx [ 24 ] = state [ 71 ] +
xx [ 31 ] ; xx [ 25 ] = sqrt ( xx [ 21 ] * xx [ 21 ] + xx [ 22 ] * xx [ 22 ]
+ xx [ 23 ] * xx [ 23 ] + xx [ 24 ] * xx [ 24 ] ) ; if ( xx [ 4 ] > xx [ 25 ]
) xx [ 25 ] = xx [ 4 ] ; xx [ 26 ] = state [ 79 ] ; xx [ 27 ] = state [ 80 ]
; xx [ 28 ] = state [ 81 ] ; xx [ 29 ] = state [ 82 ] ; xx [ 30 ] = dofDeltas
[ 37 ] ; xx [ 31 ] = dofDeltas [ 38 ] ; xx [ 32 ] = dofDeltas [ 39 ] ;
pm_math_quatDeriv ( xx + 26 , xx + 30 , xx + 33 ) ; xx [ 26 ] = state [ 79 ]
+ xx [ 33 ] ; xx [ 27 ] = state [ 80 ] + xx [ 34 ] ; xx [ 28 ] = state [ 81 ]
+ xx [ 35 ] ; xx [ 29 ] = state [ 82 ] + xx [ 36 ] ; xx [ 30 ] = sqrt ( xx [
26 ] * xx [ 26 ] + xx [ 27 ] * xx [ 27 ] + xx [ 28 ] * xx [ 28 ] + xx [ 29 ]
* xx [ 29 ] ) ; if ( xx [ 4 ] > xx [ 30 ] ) xx [ 30 ] = xx [ 4 ] ; xx [ 31 ]
= state [ 90 ] ; xx [ 32 ] = state [ 91 ] ; xx [ 33 ] = state [ 92 ] ; xx [
34 ] = state [ 93 ] ; xx [ 35 ] = dofDeltas [ 42 ] ; xx [ 36 ] = dofDeltas [
43 ] ; xx [ 37 ] = dofDeltas [ 44 ] ; pm_math_quatDeriv ( xx + 31 , xx + 35 ,
xx + 38 ) ; xx [ 31 ] = state [ 90 ] + xx [ 38 ] ; xx [ 32 ] = state [ 91 ] +
xx [ 39 ] ; xx [ 33 ] = state [ 92 ] + xx [ 40 ] ; xx [ 34 ] = state [ 93 ] +
xx [ 41 ] ; xx [ 35 ] = sqrt ( xx [ 31 ] * xx [ 31 ] + xx [ 32 ] * xx [ 32 ]
+ xx [ 33 ] * xx [ 33 ] + xx [ 34 ] * xx [ 34 ] ) ; if ( xx [ 4 ] > xx [ 35 ]
) xx [ 35 ] = xx [ 4 ] ; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state
[ 1 ] = state [ 1 ] + dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas
[ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [ 3 ] ; state [ 7 ] = state [ 7
] + dofDeltas [ 4 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 5 ] ; state [
12 ] = state [ 12 ] + dofDeltas [ 6 ] ; state [ 14 ] = state [ 14 ] +
dofDeltas [ 7 ] ; state [ 16 ] = xx [ 0 ] / xx [ 5 ] ; state [ 17 ] = xx [ 1
] / xx [ 5 ] ; state [ 18 ] = xx [ 2 ] / xx [ 5 ] ; state [ 19 ] = xx [ 3 ] /
xx [ 5 ] ; state [ 23 ] = xx [ 6 ] / xx [ 10 ] ; state [ 24 ] = xx [ 7 ] / xx
[ 10 ] ; state [ 25 ] = xx [ 8 ] / xx [ 10 ] ; state [ 26 ] = xx [ 9 ] / xx [
10 ] ; state [ 30 ] = state [ 30 ] + dofDeltas [ 14 ] ; state [ 32 ] = state
[ 32 ] + dofDeltas [ 15 ] ; state [ 34 ] = state [ 34 ] + dofDeltas [ 16 ] ;
state [ 36 ] = state [ 36 ] + dofDeltas [ 17 ] ; state [ 38 ] = state [ 38 ]
+ dofDeltas [ 18 ] ; state [ 40 ] = state [ 40 ] + dofDeltas [ 19 ] ; state [
42 ] = state [ 42 ] + dofDeltas [ 20 ] ; state [ 44 ] = state [ 44 ] +
dofDeltas [ 21 ] ; state [ 46 ] = xx [ 11 ] / xx [ 15 ] ; state [ 47 ] = xx [
12 ] / xx [ 15 ] ; state [ 48 ] = xx [ 13 ] / xx [ 15 ] ; state [ 49 ] = xx [
14 ] / xx [ 15 ] ; state [ 53 ] = state [ 53 ] + dofDeltas [ 25 ] ; state [
55 ] = state [ 55 ] + dofDeltas [ 26 ] ; state [ 57 ] = xx [ 16 ] / xx [ 20 ]
; state [ 58 ] = xx [ 17 ] / xx [ 20 ] ; state [ 59 ] = xx [ 18 ] / xx [ 20 ]
; state [ 60 ] = xx [ 19 ] / xx [ 20 ] ; state [ 64 ] = state [ 64 ] +
dofDeltas [ 30 ] ; state [ 66 ] = state [ 66 ] + dofDeltas [ 31 ] ; state [
68 ] = xx [ 21 ] / xx [ 25 ] ; state [ 69 ] = xx [ 22 ] / xx [ 25 ] ; state [
70 ] = xx [ 23 ] / xx [ 25 ] ; state [ 71 ] = xx [ 24 ] / xx [ 25 ] ; state [
75 ] = state [ 75 ] + dofDeltas [ 35 ] ; state [ 77 ] = state [ 77 ] +
dofDeltas [ 36 ] ; state [ 79 ] = xx [ 26 ] / xx [ 30 ] ; state [ 80 ] = xx [
27 ] / xx [ 30 ] ; state [ 81 ] = xx [ 28 ] / xx [ 30 ] ; state [ 82 ] = xx [
29 ] / xx [ 30 ] ; state [ 86 ] = state [ 86 ] + dofDeltas [ 40 ] ; state [
88 ] = state [ 88 ] + dofDeltas [ 41 ] ; state [ 90 ] = xx [ 31 ] / xx [ 35 ]
; state [ 91 ] = xx [ 32 ] / xx [ 35 ] ; state [ 92 ] = xx [ 33 ] / xx [ 35 ]
; state [ 93 ] = xx [ 34 ] / xx [ 35 ] ; } static void perturbState_0_0 (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static
void perturbState_0_0v ( double mag , double * state ) { state [ 0 ] = state
[ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static void
perturbState_0_1 ( double mag , double * state ) { state [ 1 ] = state [ 1 ]
+ mag ; } static void perturbState_0_1v ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; }
static void perturbState_0_2 ( double mag , double * state ) { state [ 2 ] =
state [ 2 ] + mag ; } static void perturbState_0_2v ( double mag , double *
state ) { state [ 2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875
* mag ; } static void perturbState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void perturbState_1_0v ( double
mag , double * state ) { state [ 6 ] = state [ 6 ] + mag ; state [ 9 ] =
state [ 9 ] - 0.875 * mag ; } static void perturbState_1_1 ( double mag ,
double * state ) { state [ 7 ] = state [ 7 ] + mag ; } static void
perturbState_1_1v ( double mag , double * state ) { state [ 7 ] = state [ 7 ]
+ mag ; state [ 10 ] = state [ 10 ] - 0.875 * mag ; } static void
perturbState_1_2 ( double mag , double * state ) { state [ 8 ] = state [ 8 ]
+ mag ; } static void perturbState_1_2v ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ;
} static void perturbState_2_0 ( double mag , double * state ) { state [ 12 ]
= state [ 12 ] + mag ; } static void perturbState_2_0v ( double mag , double
* state ) { state [ 12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] -
0.875 * mag ; } static void perturbState_3_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void perturbState_3_0v (
double mag , double * state ) { state [ 14 ] = state [ 14 ] + mag ; state [
15 ] = state [ 15 ] - 0.875 * mag ; } static void perturbState_4_0 ( double
mag , double * state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] =
fabs ( mag ) ; xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ;
xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin (
2.0 * xx [ 2 ] ) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3
] + xx [ 4 ] * xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx
[ 0 ] ) ; xx [ 7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] /
xx [ 2 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] =
state [ 16 ] ; xx [ 1 ] = state [ 17 ] ; xx [ 2 ] = state [ 18 ] ; xx [ 3 ] =
state [ 19 ] ; pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 16
] = xx [ 10 ] ; state [ 17 ] = xx [ 11 ] ; state [ 18 ] = xx [ 12 ] ; state [
19 ] = xx [ 13 ] ; } static void perturbState_4_0v ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 16 ] ;
xx [ 2 ] = state [ 17 ] ; xx [ 3 ] = state [ 18 ] ; xx [ 4 ] = state [ 19 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 16 ] = xx [ 10 ]
; state [ 17 ] = xx [ 11 ] ; state [ 18 ] = xx [ 12 ] ; state [ 19 ] = xx [
13 ] ; state [ 20 ] = state [ 20 ] + 1.2 * mag ; state [ 21 ] = state [ 21 ]
- xx [ 0 ] ; state [ 22 ] = state [ 22 ] + 0.9 * mag ; } static void
perturbState_5_0 ( double mag , double * state ) { double xx [ 14 ] ; xx [ 0
] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor
( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [
2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [
1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ]
) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ;
xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] *
xx [ 5 ] ; xx [ 0 ] = state [ 23 ] ; xx [ 1 ] = state [ 24 ] ; xx [ 2 ] =
state [ 25 ] ; xx [ 3 ] = state [ 26 ] ; pm_math_quatCompose ( xx + 6 , xx +
0 , xx + 10 ) ; state [ 23 ] = xx [ 10 ] ; state [ 24 ] = xx [ 11 ] ; state [
25 ] = xx [ 12 ] ; state [ 26 ] = xx [ 13 ] ; } static void perturbState_5_0v
( double mag , double * state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ;
xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4
] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ]
* xx [ 3 ] + xx [ 4 ] * xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] =
cos ( xx [ 0 ] ) ; xx [ 7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx
[ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 1 ] = state [ 23 ] ; xx [ 2 ] = state [ 24 ] ; xx [ 3 ] = state [ 25 ] ; xx
[ 4 ] = state [ 26 ] ; pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ;
state [ 23 ] = xx [ 10 ] ; state [ 24 ] = xx [ 11 ] ; state [ 25 ] = xx [ 12
] ; state [ 26 ] = xx [ 13 ] ; state [ 27 ] = state [ 27 ] + 1.2 * mag ;
state [ 28 ] = state [ 28 ] - xx [ 0 ] ; state [ 29 ] = state [ 29 ] + 0.9 *
mag ; } static void perturbState_6_0 ( double mag , double * state ) { state
[ 30 ] = state [ 30 ] + mag ; } static void perturbState_6_0v ( double mag ,
double * state ) { state [ 30 ] = state [ 30 ] + mag ; state [ 31 ] = state [
31 ] - 0.875 * mag ; } static void perturbState_7_0 ( double mag , double *
state ) { state [ 32 ] = state [ 32 ] + mag ; } static void perturbState_7_0v
( double mag , double * state ) { state [ 32 ] = state [ 32 ] + mag ; state [
33 ] = state [ 33 ] - 0.875 * mag ; } static void perturbState_8_0 ( double
mag , double * state ) { state [ 34 ] = state [ 34 ] + mag ; } static void
perturbState_8_0v ( double mag , double * state ) { state [ 34 ] = state [ 34
] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; } static void
perturbState_9_0 ( double mag , double * state ) { state [ 36 ] = state [ 36
] + mag ; } static void perturbState_9_0v ( double mag , double * state ) {
state [ 36 ] = state [ 36 ] + mag ; state [ 37 ] = state [ 37 ] - 0.875 * mag
; } static void perturbState_10_0 ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; } static void perturbState_10_0v ( double mag ,
double * state ) { state [ 38 ] = state [ 38 ] + mag ; state [ 39 ] = state [
39 ] - 0.875 * mag ; } static void perturbState_11_0 ( double mag , double *
state ) { state [ 40 ] = state [ 40 ] + mag ; } static void
perturbState_11_0v ( double mag , double * state ) { state [ 40 ] = state [
40 ] + mag ; state [ 41 ] = state [ 41 ] - 0.875 * mag ; } static void
perturbState_12_0 ( double mag , double * state ) { state [ 42 ] = state [ 42
] + mag ; } static void perturbState_12_0v ( double mag , double * state ) {
state [ 42 ] = state [ 42 ] + mag ; state [ 43 ] = state [ 43 ] - 0.875 * mag
; } static void perturbState_13_0 ( double mag , double * state ) { state [
44 ] = state [ 44 ] + mag ; } static void perturbState_13_0v ( double mag ,
double * state ) { state [ 44 ] = state [ 44 ] + mag ; state [ 45 ] = state [
45 ] - 0.875 * mag ; } static void perturbState_14_0 ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] = state [ 46 ] ;
xx [ 1 ] = state [ 47 ] ; xx [ 2 ] = state [ 48 ] ; xx [ 3 ] = state [ 49 ] ;
pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 46 ] = xx [ 10 ]
; state [ 47 ] = xx [ 11 ] ; state [ 48 ] = xx [ 12 ] ; state [ 49 ] = xx [
13 ] ; } static void perturbState_14_0v ( double mag , double * state ) {
double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ]
= 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [
2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ]
) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx
[ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 46 ] ; xx [ 2 ] =
state [ 47 ] ; xx [ 3 ] = state [ 48 ] ; xx [ 4 ] = state [ 49 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 46 ] = xx [ 10 ]
; state [ 47 ] = xx [ 11 ] ; state [ 48 ] = xx [ 12 ] ; state [ 49 ] = xx [
13 ] ; state [ 50 ] = state [ 50 ] + 1.2 * mag ; state [ 51 ] = state [ 51 ]
- xx [ 0 ] ; state [ 52 ] = state [ 52 ] + 0.9 * mag ; } static void
perturbState_15_0 ( double mag , double * state ) { state [ 53 ] = state [ 53
] + mag ; } static void perturbState_15_0v ( double mag , double * state ) {
state [ 53 ] = state [ 53 ] + mag ; state [ 54 ] = state [ 54 ] - 0.875 * mag
; } static void perturbState_16_0 ( double mag , double * state ) { state [
55 ] = state [ 55 ] + mag ; } static void perturbState_16_0v ( double mag ,
double * state ) { state [ 55 ] = state [ 55 ] + mag ; state [ 56 ] = state [
56 ] - 0.875 * mag ; } static void perturbState_17_0 ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] = state [ 57 ] ;
xx [ 1 ] = state [ 58 ] ; xx [ 2 ] = state [ 59 ] ; xx [ 3 ] = state [ 60 ] ;
pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 57 ] = xx [ 10 ]
; state [ 58 ] = xx [ 11 ] ; state [ 59 ] = xx [ 12 ] ; state [ 60 ] = xx [
13 ] ; } static void perturbState_17_0v ( double mag , double * state ) {
double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ]
= 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [
2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ]
) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx
[ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 57 ] ; xx [ 2 ] =
state [ 58 ] ; xx [ 3 ] = state [ 59 ] ; xx [ 4 ] = state [ 60 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 57 ] = xx [ 10 ]
; state [ 58 ] = xx [ 11 ] ; state [ 59 ] = xx [ 12 ] ; state [ 60 ] = xx [
13 ] ; state [ 61 ] = state [ 61 ] + 1.2 * mag ; state [ 62 ] = state [ 62 ]
- xx [ 0 ] ; state [ 63 ] = state [ 63 ] + 0.9 * mag ; } static void
perturbState_18_0 ( double mag , double * state ) { state [ 64 ] = state [ 64
] + mag ; } static void perturbState_18_0v ( double mag , double * state ) {
state [ 64 ] = state [ 64 ] + mag ; state [ 65 ] = state [ 65 ] - 0.875 * mag
; } static void perturbState_19_0 ( double mag , double * state ) { state [
66 ] = state [ 66 ] + mag ; } static void perturbState_19_0v ( double mag ,
double * state ) { state [ 66 ] = state [ 66 ] + mag ; state [ 67 ] = state [
67 ] - 0.875 * mag ; } static void perturbState_20_0 ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] = state [ 68 ] ;
xx [ 1 ] = state [ 69 ] ; xx [ 2 ] = state [ 70 ] ; xx [ 3 ] = state [ 71 ] ;
pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 68 ] = xx [ 10 ]
; state [ 69 ] = xx [ 11 ] ; state [ 70 ] = xx [ 12 ] ; state [ 71 ] = xx [
13 ] ; } static void perturbState_20_0v ( double mag , double * state ) {
double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ]
= 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [
2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ]
) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx
[ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 68 ] ; xx [ 2 ] =
state [ 69 ] ; xx [ 3 ] = state [ 70 ] ; xx [ 4 ] = state [ 71 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 68 ] = xx [ 10 ]
; state [ 69 ] = xx [ 11 ] ; state [ 70 ] = xx [ 12 ] ; state [ 71 ] = xx [
13 ] ; state [ 72 ] = state [ 72 ] + 1.2 * mag ; state [ 73 ] = state [ 73 ]
- xx [ 0 ] ; state [ 74 ] = state [ 74 ] + 0.9 * mag ; } static void
perturbState_21_0 ( double mag , double * state ) { state [ 75 ] = state [ 75
] + mag ; } static void perturbState_21_0v ( double mag , double * state ) {
state [ 75 ] = state [ 75 ] + mag ; state [ 76 ] = state [ 76 ] - 0.875 * mag
; } static void perturbState_22_0 ( double mag , double * state ) { state [
77 ] = state [ 77 ] + mag ; } static void perturbState_22_0v ( double mag ,
double * state ) { state [ 77 ] = state [ 77 ] + mag ; state [ 78 ] = state [
78 ] - 0.875 * mag ; } static void perturbState_23_0 ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] = state [ 79 ] ;
xx [ 1 ] = state [ 80 ] ; xx [ 2 ] = state [ 81 ] ; xx [ 3 ] = state [ 82 ] ;
pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 79 ] = xx [ 10 ]
; state [ 80 ] = xx [ 11 ] ; state [ 81 ] = xx [ 12 ] ; state [ 82 ] = xx [
13 ] ; } static void perturbState_23_0v ( double mag , double * state ) {
double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ]
= 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [
2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ]
) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx
[ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 79 ] ; xx [ 2 ] =
state [ 80 ] ; xx [ 3 ] = state [ 81 ] ; xx [ 4 ] = state [ 82 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 79 ] = xx [ 10 ]
; state [ 80 ] = xx [ 11 ] ; state [ 81 ] = xx [ 12 ] ; state [ 82 ] = xx [
13 ] ; state [ 83 ] = state [ 83 ] + 1.2 * mag ; state [ 84 ] = state [ 84 ]
- xx [ 0 ] ; state [ 85 ] = state [ 85 ] + 0.9 * mag ; } static void
perturbState_24_0 ( double mag , double * state ) { state [ 86 ] = state [ 86
] + mag ; } static void perturbState_24_0v ( double mag , double * state ) {
state [ 86 ] = state [ 86 ] + mag ; state [ 87 ] = state [ 87 ] - 0.875 * mag
; } static void perturbState_25_0 ( double mag , double * state ) { state [
88 ] = state [ 88 ] + mag ; } static void perturbState_25_0v ( double mag ,
double * state ) { state [ 88 ] = state [ 88 ] + mag ; state [ 89 ] = state [
89 ] - 0.875 * mag ; } static void perturbState_26_0 ( double mag , double *
state ) { double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ;
xx [ 2 ] = 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin
( xx [ 2 ] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ]
) ; xx [ 2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] *
xx [ 4 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [
7 ] = xx [ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [
5 ] ; xx [ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 0 ] = state [ 90 ] ;
xx [ 1 ] = state [ 91 ] ; xx [ 2 ] = state [ 92 ] ; xx [ 3 ] = state [ 93 ] ;
pm_math_quatCompose ( xx + 6 , xx + 0 , xx + 10 ) ; state [ 90 ] = xx [ 10 ]
; state [ 91 ] = xx [ 11 ] ; state [ 92 ] = xx [ 12 ] ; state [ 93 ] = xx [
13 ] ; } static void perturbState_26_0v ( double mag , double * state ) {
double xx [ 14 ] ; xx [ 0 ] = 0.5 * mag ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ]
= 1.0 / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [
2 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 3 ] * xx [ 3 ] + xx [ 4 ] * xx [ 4 ]
) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 6 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx
[ 1 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 3 ] / xx [ 2 ] * xx [ 5 ] ; xx
[ 9 ] = xx [ 4 ] / xx [ 2 ] * xx [ 5 ] ; xx [ 1 ] = state [ 90 ] ; xx [ 2 ] =
state [ 91 ] ; xx [ 3 ] = state [ 92 ] ; xx [ 4 ] = state [ 93 ] ;
pm_math_quatCompose ( xx + 6 , xx + 1 , xx + 10 ) ; state [ 90 ] = xx [ 10 ]
; state [ 91 ] = xx [ 11 ] ; state [ 92 ] = xx [ 12 ] ; state [ 93 ] = xx [
13 ] ; state [ 94 ] = state [ 94 ] + 1.2 * mag ; state [ 95 ] = state [ 95 ]
- xx [ 0 ] ; state [ 96 ] = state [ 96 ] + 0.9 * mag ; } void
PlatformAssem_f0ca4364_1_perturbState ( const void * mech , size_t stageIdx ,
size_t primIdx , double mag , boolean_T doPerturbVelocity , double * state )
{ ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void ) mag ; (
void ) doPerturbVelocity ; ( void ) state ; switch ( ( stageIdx * 6 + primIdx
) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 : perturbState_0_0 ( mag ,
state ) ; break ; case 1 : perturbState_0_0v ( mag , state ) ; break ; case 2
: perturbState_0_1 ( mag , state ) ; break ; case 3 : perturbState_0_1v ( mag
, state ) ; break ; case 4 : perturbState_0_2 ( mag , state ) ; break ; case
5 : perturbState_0_2v ( mag , state ) ; break ; case 12 : perturbState_1_0 (
mag , state ) ; break ; case 13 : perturbState_1_0v ( mag , state ) ; break ;
case 14 : perturbState_1_1 ( mag , state ) ; break ; case 15 :
perturbState_1_1v ( mag , state ) ; break ; case 16 : perturbState_1_2 ( mag
, state ) ; break ; case 17 : perturbState_1_2v ( mag , state ) ; break ;
case 24 : perturbState_2_0 ( mag , state ) ; break ; case 25 :
perturbState_2_0v ( mag , state ) ; break ; case 36 : perturbState_3_0 ( mag
, state ) ; break ; case 37 : perturbState_3_0v ( mag , state ) ; break ;
case 48 : perturbState_4_0 ( mag , state ) ; break ; case 49 :
perturbState_4_0v ( mag , state ) ; break ; case 60 : perturbState_5_0 ( mag
, state ) ; break ; case 61 : perturbState_5_0v ( mag , state ) ; break ;
case 72 : perturbState_6_0 ( mag , state ) ; break ; case 73 :
perturbState_6_0v ( mag , state ) ; break ; case 84 : perturbState_7_0 ( mag
, state ) ; break ; case 85 : perturbState_7_0v ( mag , state ) ; break ;
case 96 : perturbState_8_0 ( mag , state ) ; break ; case 97 :
perturbState_8_0v ( mag , state ) ; break ; case 108 : perturbState_9_0 ( mag
, state ) ; break ; case 109 : perturbState_9_0v ( mag , state ) ; break ;
case 120 : perturbState_10_0 ( mag , state ) ; break ; case 121 :
perturbState_10_0v ( mag , state ) ; break ; case 132 : perturbState_11_0 (
mag , state ) ; break ; case 133 : perturbState_11_0v ( mag , state ) ; break
; case 144 : perturbState_12_0 ( mag , state ) ; break ; case 145 :
perturbState_12_0v ( mag , state ) ; break ; case 156 : perturbState_13_0 (
mag , state ) ; break ; case 157 : perturbState_13_0v ( mag , state ) ; break
; case 168 : perturbState_14_0 ( mag , state ) ; break ; case 169 :
perturbState_14_0v ( mag , state ) ; break ; case 180 : perturbState_15_0 (
mag , state ) ; break ; case 181 : perturbState_15_0v ( mag , state ) ; break
; case 192 : perturbState_16_0 ( mag , state ) ; break ; case 193 :
perturbState_16_0v ( mag , state ) ; break ; case 204 : perturbState_17_0 (
mag , state ) ; break ; case 205 : perturbState_17_0v ( mag , state ) ; break
; case 216 : perturbState_18_0 ( mag , state ) ; break ; case 217 :
perturbState_18_0v ( mag , state ) ; break ; case 228 : perturbState_19_0 (
mag , state ) ; break ; case 229 : perturbState_19_0v ( mag , state ) ; break
; case 240 : perturbState_20_0 ( mag , state ) ; break ; case 241 :
perturbState_20_0v ( mag , state ) ; break ; case 252 : perturbState_21_0 (
mag , state ) ; break ; case 253 : perturbState_21_0v ( mag , state ) ; break
; case 264 : perturbState_22_0 ( mag , state ) ; break ; case 265 :
perturbState_22_0v ( mag , state ) ; break ; case 276 : perturbState_23_0 (
mag , state ) ; break ; case 277 : perturbState_23_0v ( mag , state ) ; break
; case 288 : perturbState_24_0 ( mag , state ) ; break ; case 289 :
perturbState_24_0v ( mag , state ) ; break ; case 300 : perturbState_25_0 (
mag , state ) ; break ; case 301 : perturbState_25_0v ( mag , state ) ; break
; case 312 : perturbState_26_0 ( mag , state ) ; break ; case 313 :
perturbState_26_0v ( mag , state ) ; break ; } } void
PlatformAssem_f0ca4364_1_computeDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void PlatformAssem_f0ca4364_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primIdx , const double *
origState , int partialType , double * state ) { ( void ) mech ; ( void )
stageIdx ; ( void ) primIdx ; ( void ) origState ; ( void ) partialType ; (
void ) state ; switch ( ( stageIdx * 6 + primIdx ) ) { } } void
PlatformAssem_f0ca4364_1_propagateMotion ( const void * mech , const double *
rtdv , const double * state , double * motionData ) { double xx [ 691 ] ; (
void ) mech ; ( void ) rtdv ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.7071067811865476
; xx [ 2 ] = - xx [ 1 ] ; xx [ 3 ] = 0.9982060081755033 ; xx [ 4 ] = 0.5 ; xx
[ 5 ] = xx [ 4 ] * state [ 6 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ] =
7.822272946646824e-7 ; xx [ 8 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] =
0.05987290897428056 ; xx [ 9 ] = 3.559887592452546e-6 ; xx [ 10 ] = - ( xx [
3 ] * xx [ 6 ] + xx [ 7 ] * xx [ 8 ] ) ; xx [ 11 ] = xx [ 7 ] * xx [ 6 ] - xx
[ 3 ] * xx [ 8 ] ; xx [ 12 ] = - ( xx [ 5 ] * xx [ 6 ] + xx [ 9 ] * xx [ 8 ]
) ; xx [ 13 ] = xx [ 9 ] * xx [ 6 ] - xx [ 5 ] * xx [ 8 ] ; xx [ 3 ] = xx [ 4
] * state [ 7 ] ; xx [ 5 ] = 7.200670813652432e-6 ; xx [ 6 ] = sin ( xx [ 3 ]
) ; xx [ 7 ] = 0.9999999999734306 ; xx [ 8 ] = 1.135366319023148e-6 ; xx [ 14
] = cos ( xx [ 3 ] ) ; xx [ 15 ] = - ( xx [ 5 ] * xx [ 6 ] ) ; xx [ 16 ] = xx
[ 7 ] * xx [ 6 ] ; xx [ 17 ] = xx [ 8 ] * xx [ 6 ] ; pm_math_quatCompose ( xx
+ 10 , xx + 14 , xx + 18 ) ; xx [ 3 ] = xx [ 4 ] * state [ 8 ] ; xx [ 6 ] =
0.1195309949245745 ; xx [ 9 ] = sin ( xx [ 3 ] ) ; xx [ 10 ] =
1.987929622149476e-6 ; xx [ 11 ] = 0.9928304695406913 ; xx [ 12 ] = cos ( xx
[ 3 ] ) ; xx [ 13 ] = - ( xx [ 6 ] * xx [ 9 ] ) ; xx [ 14 ] = - ( xx [ 10 ] *
xx [ 9 ] ) ; xx [ 15 ] = xx [ 11 ] * xx [ 9 ] ; pm_math_quatCompose ( xx + 18
, xx + 12 , xx + 22 ) ; xx [ 16 ] = 2.651074505488933e-6 ; xx [ 17 ] = -
0.01576192360860613 ; xx [ 18 ] = 1.370770141144085e-6 ; pm_math_quatXform (
xx + 22 , xx + 16 , xx + 19 ) ; xx [ 3 ] = 0.3895853754265615 ; xx [ 9 ] = xx
[ 4 ] * state [ 12 ] ; xx [ 26 ] = cos ( xx [ 9 ] ) ; xx [ 27 ] =
0.389581900177037 ; xx [ 28 ] = sin ( xx [ 9 ] ) ; xx [ 9 ] = xx [ 3 ] * xx [
26 ] - xx [ 27 ] * xx [ 28 ] ; xx [ 29 ] = 0.5901074779979933 ; xx [ 30 ] =
0.5901036711621462 ; xx [ 31 ] = xx [ 29 ] * xx [ 26 ] + xx [ 30 ] * xx [ 28
] ; xx [ 32 ] = - xx [ 31 ] ; xx [ 33 ] = xx [ 30 ] * xx [ 26 ] - xx [ 29 ] *
xx [ 28 ] ; xx [ 29 ] = xx [ 27 ] * xx [ 26 ] + xx [ 3 ] * xx [ 28 ] ; xx [ 3
] = - xx [ 29 ] ; xx [ 26 ] = 1.587500000000011e-3 ; xx [ 27 ] = xx [ 33 ] *
xx [ 26 ] ; xx [ 34 ] = xx [ 32 ] ; xx [ 35 ] = xx [ 33 ] ; xx [ 36 ] = xx [
3 ] ; xx [ 28 ] = 0.02520954632904373 ; xx [ 30 ] = xx [ 28 ] * xx [ 29 ] +
xx [ 26 ] * xx [ 31 ] ; xx [ 37 ] = xx [ 33 ] * xx [ 28 ] ; xx [ 38 ] = xx [
27 ] ; xx [ 39 ] = xx [ 30 ] ; xx [ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx +
34 , xx + 38 , xx + 41 ) ; xx [ 34 ] = 2.0 ; xx [ 35 ] = 0.1564468326892218 -
( ( xx [ 9 ] * xx [ 27 ] + xx [ 41 ] ) * xx [ 34 ] - xx [ 28 ] ) ; xx [ 27 ]
= 0.02992367610368172 - ( xx [ 9 ] * xx [ 30 ] + xx [ 42 ] ) * xx [ 34 ] ; xx
[ 30 ] = 0.01163189793971064 + xx [ 26 ] + xx [ 34 ] * ( xx [ 43 ] + xx [ 9 ]
* xx [ 37 ] ) ; xx [ 36 ] = - xx [ 30 ] ; xx [ 37 ] = xx [ 4 ] * state [ 14 ]
; xx [ 38 ] = cos ( xx [ 37 ] ) ; xx [ 39 ] = sin ( xx [ 37 ] ) ; xx [ 37 ] =
5.376764528053357e-12 ; xx [ 40 ] = 7.748428954013064e-12 ; xx [ 41 ] = xx [
37 ] * xx [ 38 ] + xx [ 40 ] * xx [ 39 ] ; xx [ 42 ] = 0.03194045367095624 -
( xx [ 34 ] * xx [ 41 ] * xx [ 39 ] - xx [ 40 ] ) ; xx [ 43 ] = xx [ 34 ] *
xx [ 41 ] * xx [ 38 ] - xx [ 37 ] ; xx [ 41 ] = - xx [ 43 ] ; xx [ 44 ] =
4.0000000045273e-3 ; xx [ 45 ] = xx [ 26 ] - ( xx [ 44 ] - ( xx [ 38 ] * xx [
44 ] * xx [ 38 ] + xx [ 44 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] ) ; xx [
44 ] = 3.980251324392935e-7 ; xx [ 46 ] = 0.999999999999921 ; xx [ 47 ] = xx
[ 44 ] * state [ 19 ] - xx [ 46 ] * state [ 16 ] ; xx [ 48 ] = - ( xx [ 44 ]
* state [ 18 ] + xx [ 46 ] * state [ 17 ] ) ; xx [ 49 ] = - ( xx [ 46 ] *
state [ 18 ] - xx [ 44 ] * state [ 17 ] ) ; xx [ 50 ] = - ( xx [ 44 ] * state
[ 16 ] + xx [ 46 ] * state [ 19 ] ) ; xx [ 51 ] = 3.641162862673871e-8 ; xx [
52 ] = 0.04575000000717538 ; xx [ 53 ] = - 2.926046524752066e-7 ;
pm_math_quatXform ( xx + 47 , xx + 51 , xx + 54 ) ; xx [ 57 ] =
3.980251340548381e-7 ; xx [ 58 ] = xx [ 46 ] * state [ 26 ] - xx [ 57 ] *
state [ 23 ] ; xx [ 59 ] = xx [ 46 ] * state [ 25 ] - xx [ 57 ] * state [ 24
] ; xx [ 60 ] = xx [ 57 ] * state [ 25 ] + xx [ 46 ] * state [ 24 ] ; xx [ 61
] = - xx [ 60 ] ; xx [ 62 ] = xx [ 57 ] * state [ 26 ] + xx [ 46 ] * state [
23 ] ; xx [ 57 ] = - xx [ 62 ] ; xx [ 63 ] = xx [ 58 ] ; xx [ 64 ] = xx [ 59
] ; xx [ 65 ] = xx [ 61 ] ; xx [ 66 ] = xx [ 57 ] ; xx [ 67 ] =
7.599121945184391e-12 ; xx [ 68 ] = - 5.036130209737022e-12 ; xx [ 69 ] =
5.192027881355888e-12 ; pm_math_quatXform ( xx + 63 , xx + 67 , xx + 70 ) ;
xx [ 73 ] = 3.641924106626229e-8 + xx [ 70 ] ; xx [ 74 ] =
0.04574999999998041 + xx [ 71 ] ; xx [ 70 ] = 2.92603149291605e-7 + xx [ 72 ]
; xx [ 71 ] = xx [ 4 ] * state [ 30 ] ; xx [ 72 ] = cos ( xx [ 71 ] ) ; xx [
75 ] = sin ( xx [ 71 ] ) ; xx [ 71 ] = 0.02540000000000185 ; xx [ 76 ] = xx [
71 ] * xx [ 75 ] ; xx [ 77 ] = 6.817225262079063e-12 + xx [ 71 ] - xx [ 34 ]
* xx [ 76 ] * xx [ 75 ] ; xx [ 78 ] = - xx [ 77 ] ; xx [ 79 ] =
5.61723311615081e-12 + xx [ 34 ] * xx [ 72 ] * xx [ 76 ] ; xx [ 76 ] = - xx [
79 ] ; xx [ 80 ] = 0.152426400001803 ; xx [ 81 ] = xx [ 4 ] * state [ 32 ] ;
xx [ 82 ] = cos ( xx [ 81 ] ) ; xx [ 83 ] = sin ( xx [ 81 ] ) ; xx [ 81 ] =
2.191920996097441e-12 ; xx [ 84 ] = xx [ 81 ] * xx [ 83 ] ; xx [ 85 ] =
3.368449963403463e-13 ; xx [ 86 ] = xx [ 85 ] * xx [ 83 ] ; xx [ 87 ] =
0.02539999999999815 + xx [ 34 ] * ( xx [ 82 ] * xx [ 84 ] + xx [ 86 ] * xx [
83 ] ) - xx [ 85 ] ; xx [ 88 ] = - xx [ 87 ] ; xx [ 89 ] = xx [ 81 ] - ( xx [
84 ] * xx [ 83 ] - xx [ 82 ] * xx [ 86 ] ) * xx [ 34 ] ; xx [ 84 ] = - xx [
89 ] ; xx [ 86 ] = - 0.1524264000010511 ; xx [ 90 ] = 0.6123724356957949 ; xx
[ 91 ] = xx [ 4 ] * state [ 34 ] ; xx [ 92 ] = sin ( xx [ 91 ] ) ; xx [ 93 ]
= xx [ 90 ] * xx [ 92 ] ; xx [ 94 ] = cos ( xx [ 91 ] ) ; xx [ 91 ] = xx [ 90
] * xx [ 94 ] ; xx [ 95 ] = xx [ 93 ] - xx [ 91 ] ; xx [ 96 ] =
0.3535533905932732 ; xx [ 97 ] = xx [ 96 ] * xx [ 94 ] ; xx [ 94 ] = xx [ 96
] * xx [ 92 ] ; xx [ 92 ] = xx [ 97 ] + xx [ 94 ] ; xx [ 98 ] = - xx [ 92 ] ;
xx [ 99 ] = xx [ 94 ] - xx [ 97 ] ; xx [ 94 ] = xx [ 93 ] + xx [ 91 ] ; xx [
91 ] = - xx [ 94 ] ; xx [ 100 ] = xx [ 95 ] ; xx [ 101 ] = xx [ 98 ] ; xx [
102 ] = xx [ 99 ] ; xx [ 103 ] = xx [ 91 ] ; xx [ 93 ] =
1.121202762681406e-11 ; xx [ 97 ] = 6.145027516349377e-13 ; xx [ 104 ] = - xx
[ 93 ] ; xx [ 105 ] = - xx [ 97 ] ; xx [ 106 ] = - 3.999999999522439e-3 ;
pm_math_quatXform ( xx + 100 , xx + 104 , xx + 107 ) ; xx [ 104 ] =
0.1412410329922704 - xx [ 107 ] ; xx [ 105 ] = - xx [ 108 ] ; xx [ 106 ] =
0.05221615474387575 - xx [ 109 ] ; xx [ 107 ] = 0.3535533905932758 ; xx [ 109
] = xx [ 4 ] * state [ 36 ] ; xx [ 110 ] = cos ( xx [ 109 ] ) ; xx [ 111 ] =
xx [ 107 ] * xx [ 110 ] ; xx [ 112 ] = sin ( xx [ 109 ] ) ; xx [ 109 ] = xx [
107 ] * xx [ 112 ] ; xx [ 113 ] = xx [ 111 ] + xx [ 109 ] ; xx [ 114 ] = - xx
[ 113 ] ; xx [ 115 ] = 0.6123724356957934 ; xx [ 116 ] = xx [ 115 ] * xx [
112 ] ; xx [ 112 ] = xx [ 115 ] * xx [ 110 ] ; xx [ 110 ] = xx [ 116 ] - xx [
112 ] ; xx [ 117 ] = xx [ 112 ] + xx [ 116 ] ; xx [ 112 ] = - xx [ 117 ] ; xx
[ 116 ] = xx [ 109 ] - xx [ 111 ] ; xx [ 118 ] = xx [ 114 ] ; xx [ 119 ] = xx
[ 110 ] ; xx [ 120 ] = xx [ 112 ] ; xx [ 121 ] = xx [ 116 ] ; xx [ 109 ] =
3.881762117297072e-12 ; xx [ 111 ] = 3.80025733104361e-12 ; xx [ 122 ] = xx [
109 ] ; xx [ 123 ] = - xx [ 111 ] ; xx [ 124 ] = 3.999999998874377e-3 ;
pm_math_quatXform ( xx + 118 , xx + 122 , xx + 125 ) ; xx [ 122 ] =
0.1412410329922711 + xx [ 125 ] ; xx [ 123 ] = - xx [ 122 ] ; xx [ 124 ] = -
xx [ 126 ] ; xx [ 125 ] = 0.05221615474387407 - xx [ 127 ] ; xx [ 127 ] = xx
[ 4 ] * state [ 38 ] ; xx [ 128 ] = cos ( xx [ 127 ] ) ; xx [ 129 ] = xx [
107 ] * xx [ 128 ] ; xx [ 130 ] = sin ( xx [ 127 ] ) ; xx [ 127 ] = xx [ 107
] * xx [ 130 ] ; xx [ 107 ] = xx [ 129 ] + xx [ 127 ] ; xx [ 131 ] = xx [ 115
] * xx [ 128 ] ; xx [ 128 ] = xx [ 115 ] * xx [ 130 ] ; xx [ 115 ] = xx [ 131
] - xx [ 128 ] ; xx [ 130 ] = xx [ 131 ] + xx [ 128 ] ; xx [ 128 ] = xx [ 129
] - xx [ 127 ] ; xx [ 131 ] = xx [ 107 ] ; xx [ 132 ] = xx [ 115 ] ; xx [ 133
] = xx [ 130 ] ; xx [ 134 ] = xx [ 128 ] ; xx [ 127 ] = 5.998698970888227e-12
; xx [ 129 ] = 6.30935626036444e-12 ; xx [ 135 ] = - xx [ 127 ] ; xx [ 136 ]
= - xx [ 129 ] ; xx [ 137 ] = 4.000000001735564e-3 ; pm_math_quatXform ( xx +
131 , xx + 135 , xx + 138 ) ; xx [ 135 ] = 0.1158410329922713 + xx [ 138 ] ;
xx [ 136 ] = - xx [ 135 ] ; xx [ 137 ] = - xx [ 139 ] ; xx [ 138 ] =
0.09621024525612379 - xx [ 140 ] ; xx [ 140 ] = xx [ 4 ] * state [ 40 ] ; xx
[ 141 ] = sin ( xx [ 140 ] ) ; xx [ 142 ] = xx [ 90 ] * xx [ 141 ] ; xx [ 143
] = cos ( xx [ 140 ] ) ; xx [ 140 ] = xx [ 90 ] * xx [ 143 ] ; xx [ 90 ] = xx
[ 142 ] - xx [ 140 ] ; xx [ 144 ] = xx [ 96 ] * xx [ 143 ] ; xx [ 143 ] = xx
[ 96 ] * xx [ 141 ] ; xx [ 96 ] = xx [ 144 ] + xx [ 143 ] ; xx [ 141 ] = - xx
[ 96 ] ; xx [ 145 ] = xx [ 143 ] - xx [ 144 ] ; xx [ 143 ] = xx [ 142 ] + xx
[ 140 ] ; xx [ 140 ] = - xx [ 143 ] ; xx [ 146 ] = xx [ 90 ] ; xx [ 147 ] =
xx [ 141 ] ; xx [ 148 ] = xx [ 145 ] ; xx [ 149 ] = xx [ 140 ] ; xx [ 142 ] =
7.483145982728478e-12 ; xx [ 144 ] = 5.088251355846174e-12 ; xx [ 150 ] = -
xx [ 142 ] ; xx [ 151 ] = xx [ 144 ] ; xx [ 152 ] = - 4.00000000521855e-3 ;
pm_math_quatXform ( xx + 146 , xx + 150 , xx + 153 ) ; xx [ 150 ] =
0.1158410329922703 - xx [ 153 ] ; xx [ 151 ] = - xx [ 154 ] ; xx [ 152 ] =
0.09621024525612519 - xx [ 155 ] ; xx [ 153 ] = 0.04233709306330295 ; xx [
155 ] = xx [ 4 ] * state [ 42 ] ; xx [ 156 ] = cos ( xx [ 155 ] ) ; xx [ 157
] = 0.04233598682685397 ; xx [ 158 ] = sin ( xx [ 155 ] ) ; xx [ 155 ] = xx [
153 ] * xx [ 156 ] + xx [ 157 ] * xx [ 158 ] ; xx [ 159 ] =
0.7058357201813958 ; xx [ 160 ] = 0.7058407546227096 ; xx [ 161 ] = xx [ 159
] * xx [ 158 ] - xx [ 160 ] * xx [ 156 ] ; xx [ 162 ] = xx [ 159 ] * xx [ 156
] + xx [ 160 ] * xx [ 158 ] ; xx [ 163 ] = xx [ 153 ] * xx [ 158 ] - xx [ 157
] * xx [ 156 ] ; xx [ 156 ] = 1.5875e-3 ; xx [ 158 ] = xx [ 156 ] * xx [ 162
] ; xx [ 164 ] = xx [ 161 ] * xx [ 156 ] - xx [ 163 ] * xx [ 28 ] ; xx [ 165
] = xx [ 28 ] * xx [ 162 ] ; xx [ 166 ] = - xx [ 158 ] ; xx [ 167 ] = xx [
164 ] ; xx [ 168 ] = xx [ 165 ] ; pm_math_cross3 ( xx + 161 , xx + 166 , xx +
169 ) ; xx [ 166 ] = 0.06820673750794114 + ( xx [ 169 ] - xx [ 158 ] * xx [
155 ] ) * xx [ 34 ] - xx [ 28 ] ; xx [ 158 ] = - xx [ 166 ] ; xx [ 167 ] =
0.02992188481855372 - ( xx [ 155 ] * xx [ 164 ] + xx [ 170 ] ) * xx [ 34 ] ;
xx [ 164 ] = 0.1412955924490354 - ( xx [ 34 ] * ( xx [ 171 ] + xx [ 165 ] *
xx [ 155 ] ) - xx [ 156 ] ) ; xx [ 165 ] = xx [ 4 ] * state [ 44 ] ; xx [ 168
] = cos ( xx [ 165 ] ) ; xx [ 169 ] = sin ( xx [ 165 ] ) ; xx [ 165 ] =
0.0319404536709563 ; xx [ 170 ] = 3.107391981487723e-12 ; xx [ 171 ] =
9.83617579279345e-12 ; xx [ 172 ] = xx [ 170 ] * xx [ 169 ] - xx [ 171 ] * xx
[ 168 ] ; xx [ 173 ] = xx [ 170 ] - xx [ 34 ] * xx [ 172 ] * xx [ 169 ] ; xx
[ 174 ] = xx [ 165 ] - xx [ 173 ] ; xx [ 175 ] = xx [ 171 ] + xx [ 34 ] * xx
[ 172 ] * xx [ 168 ] ; xx [ 172 ] = 7.175000002356807e-3 ; xx [ 176 ] = ( xx
[ 168 ] * xx [ 172 ] * xx [ 168 ] + xx [ 172 ] * xx [ 169 ] * xx [ 169 ] ) *
xx [ 34 ] - xx [ 172 ] ; xx [ 172 ] = xx [ 26 ] - xx [ 176 ] ; xx [ 177 ] =
xx [ 44 ] * state [ 49 ] - xx [ 46 ] * state [ 46 ] ; xx [ 178 ] = xx [ 44 ]
* state [ 48 ] + xx [ 46 ] * state [ 47 ] ; xx [ 179 ] = - xx [ 178 ] ; xx [
180 ] = xx [ 46 ] * state [ 48 ] - xx [ 44 ] * state [ 47 ] ; xx [ 181 ] = -
xx [ 180 ] ; xx [ 182 ] = xx [ 44 ] * state [ 46 ] + xx [ 46 ] * state [ 49 ]
; xx [ 183 ] = - xx [ 182 ] ; xx [ 184 ] = xx [ 177 ] ; xx [ 185 ] = xx [ 179
] ; xx [ 186 ] = xx [ 181 ] ; xx [ 187 ] = xx [ 183 ] ; pm_math_quatXform (
xx + 184 , xx + 51 , xx + 188 ) ; xx [ 191 ] = xx [ 4 ] * state [ 53 ] ; xx [
192 ] = cos ( xx [ 191 ] ) ; xx [ 193 ] = sin ( xx [ 191 ] ) ; xx [ 191 ] =
xx [ 153 ] * xx [ 192 ] + xx [ 157 ] * xx [ 193 ] ; xx [ 194 ] = xx [ 159 ] *
xx [ 193 ] - xx [ 160 ] * xx [ 192 ] ; xx [ 195 ] = xx [ 159 ] * xx [ 192 ] +
xx [ 160 ] * xx [ 193 ] ; xx [ 159 ] = xx [ 153 ] * xx [ 193 ] - xx [ 157 ] *
xx [ 192 ] ; xx [ 196 ] = xx [ 194 ] ; xx [ 197 ] = xx [ 195 ] ; xx [ 198 ] =
xx [ 159 ] ; xx [ 153 ] = xx [ 156 ] * xx [ 195 ] ; xx [ 157 ] =
0.02520954632904374 ; xx [ 160 ] = xx [ 194 ] * xx [ 156 ] - xx [ 159 ] * xx
[ 157 ] ; xx [ 192 ] = xx [ 157 ] * xx [ 195 ] ; xx [ 199 ] = - xx [ 153 ] ;
xx [ 200 ] = xx [ 160 ] ; xx [ 201 ] = xx [ 192 ] ; pm_math_cross3 ( xx + 196
, xx + 199 , xx + 202 ) ; xx [ 193 ] = 0.03266483819494233 - ( ( xx [ 202 ] -
xx [ 153 ] * xx [ 191 ] ) * xx [ 34 ] - xx [ 157 ] ) ; xx [ 153 ] =
0.02992259737327991 - ( xx [ 191 ] * xx [ 160 ] + xx [ 203 ] ) * xx [ 34 ] ;
xx [ 160 ] = 0.1534399415345039 - ( xx [ 34 ] * ( xx [ 204 ] + xx [ 192 ] *
xx [ 191 ] ) - xx [ 156 ] ) ; xx [ 156 ] = xx [ 4 ] * state [ 55 ] ; xx [ 192
] = cos ( xx [ 156 ] ) ; xx [ 196 ] = sin ( xx [ 156 ] ) ; xx [ 156 ] =
0.03194045367095631 ; xx [ 197 ] = 9.27756931389703e-12 ; xx [ 198 ] =
5.443558296964576e-12 ; xx [ 199 ] = xx [ 198 ] * xx [ 192 ] - xx [ 197 ] *
xx [ 196 ] ; xx [ 200 ] = xx [ 197 ] + xx [ 34 ] * xx [ 199 ] * xx [ 196 ] ;
xx [ 201 ] = xx [ 156 ] + xx [ 200 ] ; xx [ 202 ] = xx [ 198 ] - xx [ 34 ] *
xx [ 199 ] * xx [ 192 ] ; xx [ 199 ] = - xx [ 202 ] ; xx [ 203 ] =
7.174999998974562e-3 ; xx [ 204 ] = ( xx [ 192 ] * xx [ 203 ] * xx [ 192 ] +
xx [ 203 ] * xx [ 196 ] * xx [ 196 ] ) * xx [ 34 ] - xx [ 203 ] ; xx [ 203 ]
= xx [ 26 ] - xx [ 204 ] ; xx [ 205 ] = xx [ 44 ] * state [ 60 ] - xx [ 46 ]
* state [ 57 ] ; xx [ 206 ] = xx [ 44 ] * state [ 59 ] + xx [ 46 ] * state [
58 ] ; xx [ 207 ] = - xx [ 206 ] ; xx [ 208 ] = xx [ 46 ] * state [ 59 ] - xx
[ 44 ] * state [ 58 ] ; xx [ 209 ] = - xx [ 208 ] ; xx [ 210 ] = xx [ 44 ] *
state [ 57 ] + xx [ 46 ] * state [ 60 ] ; xx [ 211 ] = - xx [ 210 ] ; xx [
212 ] = xx [ 205 ] ; xx [ 213 ] = xx [ 207 ] ; xx [ 214 ] = xx [ 209 ] ; xx [
215 ] = xx [ 211 ] ; pm_math_quatXform ( xx + 212 , xx + 51 , xx + 216 ) ; xx
[ 219 ] = 0.389585375426561 ; xx [ 220 ] = xx [ 4 ] * state [ 64 ] ; xx [ 221
] = cos ( xx [ 220 ] ) ; xx [ 222 ] = 0.3895819001770367 ; xx [ 223 ] = sin (
xx [ 220 ] ) ; xx [ 220 ] = xx [ 219 ] * xx [ 221 ] - xx [ 222 ] * xx [ 223 ]
; xx [ 224 ] = 0.5901074779979936 ; xx [ 225 ] = 0.5901036711621467 ; xx [
226 ] = xx [ 224 ] * xx [ 221 ] + xx [ 225 ] * xx [ 223 ] ; xx [ 227 ] = - xx
[ 226 ] ; xx [ 228 ] = xx [ 225 ] * xx [ 221 ] - xx [ 224 ] * xx [ 223 ] ; xx
[ 224 ] = xx [ 222 ] * xx [ 221 ] + xx [ 219 ] * xx [ 223 ] ; xx [ 219 ] = -
xx [ 224 ] ; xx [ 221 ] = xx [ 228 ] * xx [ 26 ] ; xx [ 229 ] = xx [ 227 ] ;
xx [ 230 ] = xx [ 228 ] ; xx [ 231 ] = xx [ 219 ] ; xx [ 222 ] = xx [ 28 ] *
xx [ 224 ] + xx [ 26 ] * xx [ 226 ] ; xx [ 223 ] = xx [ 228 ] * xx [ 28 ] ;
pm_math_cross3 ( xx + 229 , xx + 221 , xx + 232 ) ; xx [ 225 ] =
0.1165527193553521 - ( ( xx [ 220 ] * xx [ 221 ] + xx [ 232 ] ) * xx [ 34 ] -
xx [ 28 ] ) ; xx [ 221 ] = 0.02992349485130436 - ( xx [ 220 ] * xx [ 222 ] +
xx [ 233 ] ) * xx [ 34 ] ; xx [ 222 ] = 0.1050044054848736 + xx [ 26 ] + xx [
34 ] * ( xx [ 234 ] + xx [ 220 ] * xx [ 223 ] ) ; xx [ 223 ] = - xx [ 222 ] ;
xx [ 229 ] = xx [ 4 ] * state [ 66 ] ; xx [ 230 ] = cos ( xx [ 229 ] ) ; xx [
231 ] = sin ( xx [ 229 ] ) ; xx [ 229 ] = 0.03194045367095626 ; xx [ 232 ] =
1.024070757638107e-11 ; xx [ 233 ] = 6.924287580811761e-12 ; xx [ 234 ] = xx
[ 233 ] * xx [ 230 ] + xx [ 232 ] * xx [ 231 ] ; xx [ 235 ] = xx [ 232 ] - xx
[ 34 ] * xx [ 234 ] * xx [ 231 ] ; xx [ 236 ] = xx [ 229 ] - xx [ 235 ] ; xx
[ 237 ] = xx [ 233 ] - xx [ 34 ] * xx [ 234 ] * xx [ 230 ] ; xx [ 234 ] = -
xx [ 237 ] ; xx [ 238 ] = 4.000000007367204e-3 ; xx [ 239 ] = xx [ 238 ] - (
xx [ 230 ] * xx [ 238 ] * xx [ 230 ] + xx [ 238 ] * xx [ 231 ] * xx [ 231 ] )
* xx [ 34 ] ; xx [ 238 ] = xx [ 26 ] - xx [ 239 ] ; xx [ 240 ] = xx [ 44 ] *
state [ 71 ] - xx [ 46 ] * state [ 68 ] ; xx [ 241 ] = xx [ 44 ] * state [ 70
] + xx [ 46 ] * state [ 69 ] ; xx [ 242 ] = - xx [ 241 ] ; xx [ 243 ] = xx [
46 ] * state [ 70 ] - xx [ 44 ] * state [ 69 ] ; xx [ 244 ] = - xx [ 243 ] ;
xx [ 245 ] = xx [ 44 ] * state [ 68 ] + xx [ 46 ] * state [ 71 ] ; xx [ 246 ]
= - xx [ 245 ] ; xx [ 247 ] = xx [ 240 ] ; xx [ 248 ] = xx [ 242 ] ; xx [ 249
] = xx [ 244 ] ; xx [ 250 ] = xx [ 246 ] ; pm_math_quatXform ( xx + 247 , xx
+ 51 , xx + 251 ) ; xx [ 254 ] = 0.3162553791961485 ; xx [ 255 ] = xx [ 4 ] *
state [ 75 ] ; xx [ 256 ] = cos ( xx [ 255 ] ) ; xx [ 257 ] =
0.3162538200043588 ; xx [ 258 ] = sin ( xx [ 255 ] ) ; xx [ 255 ] = xx [ 254
] * xx [ 256 ] - xx [ 257 ] * xx [ 258 ] ; xx [ 259 ] = 0.6324445710612965 ;
xx [ 260 ] = 0.6324396579890005 ; xx [ 261 ] = xx [ 259 ] * xx [ 256 ] + xx [
260 ] * xx [ 258 ] ; xx [ 262 ] = xx [ 259 ] * xx [ 258 ] - xx [ 260 ] * xx [
256 ] ; xx [ 259 ] = xx [ 257 ] * xx [ 256 ] + xx [ 254 ] * xx [ 258 ] ; xx [
254 ] = - xx [ 259 ] ; xx [ 256 ] = xx [ 262 ] * xx [ 26 ] ; xx [ 263 ] = xx
[ 261 ] ; xx [ 264 ] = xx [ 262 ] ; xx [ 265 ] = xx [ 254 ] ; xx [ 257 ] = xx
[ 28 ] * xx [ 259 ] - xx [ 26 ] * xx [ 261 ] ; xx [ 258 ] = xx [ 262 ] * xx [
28 ] ; pm_math_cross3 ( xx + 263 , xx + 256 , xx + 266 ) ; xx [ 260 ] =
0.08825748853214695 + ( xx [ 255 ] * xx [ 256 ] + xx [ 266 ] ) * xx [ 34 ] -
xx [ 28 ] ; xx [ 256 ] = - xx [ 260 ] ; xx [ 263 ] = 0.02992204813763048 - (
xx [ 255 ] * xx [ 257 ] + xx [ 267 ] ) * xx [ 34 ] ; xx [ 257 ] =
0.1297164406712666 + xx [ 26 ] + xx [ 34 ] * ( xx [ 268 ] + xx [ 255 ] * xx [
258 ] ) ; xx [ 258 ] = - xx [ 257 ] ; xx [ 264 ] = xx [ 4 ] * state [ 77 ] ;
xx [ 265 ] = cos ( xx [ 264 ] ) ; xx [ 266 ] = sin ( xx [ 264 ] ) ; xx [ 264
] = 5.157931604049537e-12 ; xx [ 267 ] = 9.862118968695376e-13 ; xx [ 268 ] =
xx [ 264 ] * xx [ 266 ] - xx [ 267 ] * xx [ 265 ] ; xx [ 269 ] = xx [ 264 ] -
xx [ 34 ] * xx [ 268 ] * xx [ 266 ] ; xx [ 270 ] = xx [ 229 ] - xx [ 269 ] ;
xx [ 271 ] = xx [ 267 ] + xx [ 34 ] * xx [ 268 ] * xx [ 265 ] ; xx [ 268 ] =
3.99999999470772e-3 ; xx [ 272 ] = xx [ 268 ] - ( xx [ 265 ] * xx [ 268 ] *
xx [ 265 ] + xx [ 268 ] * xx [ 266 ] * xx [ 266 ] ) * xx [ 34 ] ; xx [ 268 ]
= xx [ 26 ] - xx [ 272 ] ; xx [ 273 ] = xx [ 44 ] * state [ 82 ] - xx [ 46 ]
* state [ 79 ] ; xx [ 274 ] = xx [ 44 ] * state [ 81 ] + xx [ 46 ] * state [
80 ] ; xx [ 275 ] = - xx [ 274 ] ; xx [ 276 ] = xx [ 46 ] * state [ 81 ] - xx
[ 44 ] * state [ 80 ] ; xx [ 277 ] = - xx [ 276 ] ; xx [ 278 ] = xx [ 44 ] *
state [ 79 ] + xx [ 46 ] * state [ 82 ] ; xx [ 279 ] = - xx [ 278 ] ; xx [
280 ] = xx [ 273 ] ; xx [ 281 ] = xx [ 275 ] ; xx [ 282 ] = xx [ 277 ] ; xx [
283 ] = xx [ 279 ] ; pm_math_quatXform ( xx + 280 , xx + 51 , xx + 284 ) ; xx
[ 287 ] = 0.3162538200043575 ; xx [ 288 ] = xx [ 4 ] * state [ 86 ] ; xx [
289 ] = sin ( xx [ 288 ] ) ; xx [ 290 ] = 0.3162553791961478 ; xx [ 291 ] =
cos ( xx [ 288 ] ) ; xx [ 288 ] = xx [ 287 ] * xx [ 289 ] - xx [ 290 ] * xx [
291 ] ; xx [ 292 ] = 0.6324445710612973 ; xx [ 293 ] = 0.6324396579890008 ;
xx [ 294 ] = xx [ 292 ] * xx [ 291 ] + xx [ 293 ] * xx [ 289 ] ; xx [ 295 ] =
- xx [ 294 ] ; xx [ 296 ] = xx [ 293 ] * xx [ 291 ] - xx [ 292 ] * xx [ 289 ]
; xx [ 292 ] = xx [ 287 ] * xx [ 291 ] + xx [ 290 ] * xx [ 289 ] ; xx [ 287 ]
= 1.587499999999983e-3 ; xx [ 289 ] = xx [ 296 ] * xx [ 287 ] ; xx [ 297 ] =
xx [ 295 ] ; xx [ 298 ] = xx [ 296 ] ; xx [ 299 ] = xx [ 292 ] ; xx [ 290 ] =
xx [ 287 ] * xx [ 294 ] - xx [ 28 ] * xx [ 292 ] ; xx [ 291 ] = xx [ 296 ] *
xx [ 28 ] ; pm_math_cross3 ( xx + 297 , xx + 289 , xx + 300 ) ; xx [ 293 ] =
0.1492477869940503 + ( xx [ 288 ] * xx [ 289 ] + xx [ 300 ] ) * xx [ 34 ] -
xx [ 28 ] ; xx [ 289 ] = - xx [ 293 ] ; xx [ 297 ] = 0.02992151662180351 - (
xx [ 288 ] * xx [ 290 ] + xx [ 301 ] ) * xx [ 34 ] ; xx [ 290 ] =
0.04838166497694621 + xx [ 287 ] + xx [ 34 ] * ( xx [ 302 ] + xx [ 288 ] * xx
[ 291 ] ) ; xx [ 287 ] = - xx [ 290 ] ; xx [ 291 ] = xx [ 4 ] * state [ 88 ]
; xx [ 4 ] = cos ( xx [ 291 ] ) ; xx [ 298 ] = sin ( xx [ 291 ] ) ; xx [ 291
] = 0.03194045367095628 ; xx [ 299 ] = 1.600627075326599e-13 ; xx [ 300 ] =
8.497959654019115e-12 ; xx [ 301 ] = xx [ 299 ] * xx [ 298 ] - xx [ 300 ] *
xx [ 4 ] ; xx [ 302 ] = xx [ 299 ] - xx [ 34 ] * xx [ 301 ] * xx [ 298 ] ; xx
[ 303 ] = xx [ 291 ] - xx [ 302 ] ; xx [ 304 ] = xx [ 300 ] + xx [ 34 ] * xx
[ 301 ] * xx [ 4 ] ; xx [ 301 ] = 1.587500000000039e-3 ; xx [ 305 ] =
3.999999996613603e-3 ; xx [ 306 ] = xx [ 305 ] - ( xx [ 4 ] * xx [ 305 ] * xx
[ 4 ] + xx [ 305 ] * xx [ 298 ] * xx [ 298 ] ) * xx [ 34 ] ; xx [ 305 ] = xx
[ 301 ] - xx [ 306 ] ; xx [ 307 ] = xx [ 44 ] * state [ 93 ] - xx [ 46 ] *
state [ 90 ] ; xx [ 308 ] = xx [ 44 ] * state [ 92 ] + xx [ 46 ] * state [ 91
] ; xx [ 309 ] = - xx [ 308 ] ; xx [ 310 ] = xx [ 46 ] * state [ 92 ] - xx [
44 ] * state [ 91 ] ; xx [ 311 ] = - xx [ 310 ] ; xx [ 312 ] = xx [ 44 ] *
state [ 90 ] + xx [ 46 ] * state [ 93 ] ; xx [ 313 ] = - xx [ 312 ] ; xx [
314 ] = xx [ 307 ] ; xx [ 315 ] = xx [ 309 ] ; xx [ 316 ] = xx [ 311 ] ; xx [
317 ] = xx [ 313 ] ; pm_math_quatXform ( xx + 314 , xx + 51 , xx + 318 ) ; xx
[ 321 ] = - ( xx [ 228 ] * xx [ 231 ] + xx [ 230 ] * xx [ 226 ] ) ; xx [ 322
] = - ( xx [ 220 ] * xx [ 230 ] - xx [ 231 ] * xx [ 224 ] ) ; xx [ 323 ] = xx
[ 220 ] * xx [ 231 ] + xx [ 230 ] * xx [ 224 ] ; xx [ 224 ] = xx [ 228 ] * xx
[ 230 ] - xx [ 231 ] * xx [ 226 ] ; xx [ 324 ] = xx [ 220 ] ; xx [ 325 ] = xx
[ 227 ] ; xx [ 326 ] = xx [ 228 ] ; xx [ 327 ] = xx [ 219 ] ; xx [ 328 ] = xx
[ 236 ] ; xx [ 329 ] = xx [ 234 ] ; xx [ 330 ] = xx [ 238 ] ;
pm_math_quatXform ( xx + 324 , xx + 328 , xx + 331 ) ; xx [ 226 ] = xx [ 331
] + xx [ 225 ] ; xx [ 334 ] = xx [ 332 ] + xx [ 221 ] ; xx [ 331 ] = xx [ 333
] - xx [ 222 ] ; xx [ 335 ] = xx [ 321 ] ; xx [ 336 ] = xx [ 322 ] ; xx [ 337
] = xx [ 323 ] ; xx [ 338 ] = xx [ 224 ] ; pm_math_quatCompose ( xx + 335 ,
xx + 247 , xx + 339 ) ; pm_math_quatXform ( xx + 335 , xx + 251 , xx + 343 )
; xx [ 222 ] = - ( xx [ 33 ] * xx [ 39 ] + xx [ 38 ] * xx [ 31 ] ) ; xx [ 332
] = - ( xx [ 9 ] * xx [ 38 ] - xx [ 39 ] * xx [ 29 ] ) ; xx [ 333 ] = xx [ 9
] * xx [ 39 ] + xx [ 38 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 33 ] * xx [ 38 ] -
xx [ 39 ] * xx [ 31 ] ; xx [ 335 ] = xx [ 9 ] ; xx [ 336 ] = xx [ 32 ] ; xx [
337 ] = xx [ 33 ] ; xx [ 338 ] = xx [ 3 ] ; xx [ 346 ] = xx [ 42 ] ; xx [ 347
] = xx [ 41 ] ; xx [ 348 ] = xx [ 45 ] ; pm_math_quatXform ( xx + 335 , xx +
346 , xx + 349 ) ; xx [ 31 ] = xx [ 349 ] + xx [ 35 ] ; xx [ 352 ] = xx [ 350
] + xx [ 27 ] ; xx [ 349 ] = xx [ 351 ] - xx [ 30 ] ; xx [ 353 ] = xx [ 222 ]
; xx [ 354 ] = xx [ 332 ] ; xx [ 355 ] = xx [ 333 ] ; xx [ 356 ] = xx [ 29 ]
; pm_math_quatCompose ( xx + 353 , xx + 47 , xx + 357 ) ; pm_math_quatXform (
xx + 353 , xx + 54 , xx + 361 ) ; xx [ 30 ] = xx [ 361 ] + xx [ 31 ] ; xx [
350 ] = xx [ 362 ] + xx [ 352 ] ; xx [ 351 ] = xx [ 363 ] + xx [ 349 ] ;
pm_math_quatCompose ( xx + 357 , xx + 63 , xx + 353 ) ; xx [ 361 ] = xx [ 73
] ; xx [ 362 ] = xx [ 74 ] ; xx [ 363 ] = xx [ 70 ] ; pm_math_quatXform ( xx
+ 357 , xx + 361 , xx + 364 ) ; xx [ 367 ] = xx [ 364 ] + xx [ 30 ] ; xx [
368 ] = xx [ 365 ] + xx [ 350 ] ; xx [ 364 ] = xx [ 366 ] + xx [ 351 ] ; xx [
365 ] = xx [ 72 ] * xx [ 353 ] - xx [ 356 ] * xx [ 75 ] ; xx [ 366 ] = xx [
72 ] * xx [ 354 ] + xx [ 355 ] * xx [ 75 ] ; xx [ 369 ] = xx [ 72 ] * xx [
355 ] - xx [ 354 ] * xx [ 75 ] ; xx [ 370 ] = xx [ 353 ] * xx [ 75 ] + xx [
72 ] * xx [ 356 ] ; xx [ 371 ] = xx [ 78 ] ; xx [ 372 ] = xx [ 76 ] ; xx [
373 ] = xx [ 80 ] ; pm_math_quatXform ( xx + 353 , xx + 371 , xx + 374 ) ; xx
[ 377 ] = xx [ 374 ] + xx [ 367 ] ; xx [ 378 ] = xx [ 375 ] + xx [ 368 ] ; xx
[ 374 ] = xx [ 376 ] + xx [ 364 ] ; xx [ 379 ] = xx [ 365 ] ; xx [ 380 ] = xx
[ 366 ] ; xx [ 381 ] = xx [ 369 ] ; xx [ 382 ] = xx [ 370 ] ; xx [ 383 ] = xx
[ 88 ] ; xx [ 384 ] = xx [ 84 ] ; xx [ 385 ] = xx [ 86 ] ; pm_math_quatXform
( xx + 379 , xx + 383 , xx + 386 ) ; xx [ 375 ] = xx [ 230 ] * xx [ 252 ] +
xx [ 251 ] * xx [ 231 ] ; xx [ 376 ] = xx [ 72 ] * xx [ 82 ] + xx [ 75 ] * xx
[ 83 ] ; xx [ 389 ] = xx [ 82 ] * xx [ 75 ] - xx [ 72 ] * xx [ 83 ] ; xx [
390 ] = xx [ 75 ] * xx [ 89 ] ; xx [ 391 ] = xx [ 75 ] * xx [ 87 ] ; xx [ 392
] = xx [ 34 ] * ( xx [ 72 ] * xx [ 390 ] + xx [ 391 ] * xx [ 75 ] ) - xx [ 87
] - xx [ 77 ] ; xx [ 87 ] = ( xx [ 390 ] * xx [ 75 ] - xx [ 72 ] * xx [ 391 ]
) * xx [ 34 ] - xx [ 89 ] - xx [ 79 ] ; xx [ 89 ] = 7.519262990030029e-13 ;
xx [ 390 ] = xx [ 376 ] * xx [ 58 ] + xx [ 62 ] * xx [ 389 ] ; xx [ 391 ] =
xx [ 376 ] * xx [ 59 ] - xx [ 60 ] * xx [ 389 ] ; xx [ 393 ] = - ( xx [ 376 ]
* xx [ 60 ] + xx [ 389 ] * xx [ 59 ] ) ; xx [ 60 ] = xx [ 389 ] * xx [ 58 ] -
xx [ 376 ] * xx [ 62 ] ; xx [ 394 ] = xx [ 392 ] ; xx [ 395 ] = xx [ 87 ] ;
xx [ 396 ] = xx [ 89 ] ; pm_math_quatXform ( xx + 63 , xx + 394 , xx + 397 )
; xx [ 62 ] = xx [ 397 ] + xx [ 73 ] ; xx [ 394 ] = xx [ 398 ] + xx [ 74 ] ;
xx [ 395 ] = xx [ 399 ] + xx [ 70 ] ; xx [ 396 ] = xx [ 390 ] ; xx [ 397 ] =
xx [ 391 ] ; xx [ 398 ] = xx [ 393 ] ; xx [ 399 ] = xx [ 60 ] ;
pm_math_quatCompose ( xx + 47 , xx + 396 , xx + 400 ) ; xx [ 396 ] = xx [ 62
] ; xx [ 397 ] = xx [ 394 ] ; xx [ 398 ] = xx [ 395 ] ; pm_math_quatXform (
xx + 47 , xx + 396 , xx + 404 ) ; xx [ 396 ] = xx [ 404 ] + xx [ 54 ] ; xx [
397 ] = xx [ 405 ] + xx [ 55 ] ; xx [ 398 ] = xx [ 406 ] + xx [ 56 ] ; xx [
399 ] = xx [ 397 ] * xx [ 38 ] + xx [ 396 ] * xx [ 39 ] ; xx [ 404 ] = - ( xx
[ 196 ] * xx [ 195 ] - xx [ 194 ] * xx [ 192 ] ) ; xx [ 405 ] = - ( xx [ 192
] * xx [ 191 ] + xx [ 159 ] * xx [ 196 ] ) ; xx [ 406 ] = xx [ 196 ] * xx [
191 ] - xx [ 159 ] * xx [ 192 ] ; xx [ 407 ] = xx [ 194 ] * xx [ 196 ] + xx [
192 ] * xx [ 195 ] ; xx [ 408 ] = xx [ 191 ] ; xx [ 409 ] = xx [ 194 ] ; xx [
410 ] = xx [ 195 ] ; xx [ 411 ] = xx [ 159 ] ; xx [ 412 ] = xx [ 201 ] ; xx [
413 ] = xx [ 199 ] ; xx [ 414 ] = xx [ 203 ] ; pm_math_quatXform ( xx + 408 ,
xx + 412 , xx + 415 ) ; xx [ 418 ] = xx [ 415 ] + xx [ 193 ] ; xx [ 419 ] =
xx [ 416 ] + xx [ 153 ] ; xx [ 415 ] = xx [ 417 ] + xx [ 160 ] ;
pm_math_quatCompose ( xx + 404 , xx + 212 , xx + 420 ) ; pm_math_quatXform (
xx + 404 , xx + 216 , xx + 424 ) ; pm_math_quatCompose ( xx + 379 , xx + 100
, xx + 427 ) ; pm_math_quatXform ( xx + 379 , xx + 104 , xx + 431 ) ; xx [
416 ] = xx [ 192 ] * xx [ 217 ] + xx [ 216 ] * xx [ 196 ] ; xx [ 417 ] = xx [
72 ] * xx [ 95 ] + xx [ 94 ] * xx [ 75 ] ; xx [ 434 ] = - ( xx [ 92 ] * xx [
72 ] + xx [ 75 ] * xx [ 99 ] ) ; xx [ 435 ] = xx [ 72 ] * xx [ 99 ] - xx [ 92
] * xx [ 75 ] ; xx [ 92 ] = xx [ 75 ] * xx [ 95 ] - xx [ 94 ] * xx [ 72 ] ;
xx [ 94 ] = xx [ 108 ] * xx [ 75 ] ; xx [ 436 ] = xx [ 75 ] * xx [ 104 ] ; xx
[ 437 ] = xx [ 104 ] + xx [ 34 ] * ( xx [ 72 ] * xx [ 94 ] - xx [ 436 ] * xx
[ 75 ] ) - xx [ 77 ] ; xx [ 438 ] = ( xx [ 72 ] * xx [ 436 ] + xx [ 94 ] * xx
[ 75 ] ) * xx [ 34 ] - xx [ 108 ] - xx [ 79 ] ; xx [ 94 ] = xx [ 106 ] + xx [
80 ] ; xx [ 439 ] = xx [ 417 ] ; xx [ 440 ] = xx [ 434 ] ; xx [ 441 ] = xx [
435 ] ; xx [ 442 ] = xx [ 92 ] ; pm_math_quatCompose ( xx + 63 , xx + 439 ,
xx + 443 ) ; xx [ 439 ] = xx [ 437 ] ; xx [ 440 ] = xx [ 438 ] ; xx [ 441 ] =
xx [ 94 ] ; pm_math_quatXform ( xx + 63 , xx + 439 , xx + 447 ) ; xx [ 108 ]
= xx [ 447 ] + xx [ 73 ] ; xx [ 436 ] = xx [ 448 ] + xx [ 74 ] ; xx [ 439 ] =
xx [ 449 ] + xx [ 70 ] ; pm_math_quatCompose ( xx + 47 , xx + 443 , xx + 447
) ; xx [ 440 ] = xx [ 108 ] ; xx [ 441 ] = xx [ 436 ] ; xx [ 442 ] = xx [ 439
] ; pm_math_quatXform ( xx + 47 , xx + 440 , xx + 451 ) ; xx [ 440 ] = xx [
451 ] + xx [ 54 ] ; xx [ 441 ] = xx [ 452 ] + xx [ 55 ] ; xx [ 442 ] = xx [
453 ] + xx [ 56 ] ; xx [ 451 ] = xx [ 441 ] * xx [ 38 ] + xx [ 440 ] * xx [
39 ] ; xx [ 452 ] = - ( xx [ 262 ] * xx [ 266 ] - xx [ 265 ] * xx [ 261 ] ) ;
xx [ 453 ] = - ( xx [ 255 ] * xx [ 265 ] - xx [ 266 ] * xx [ 259 ] ) ; xx [
454 ] = xx [ 255 ] * xx [ 266 ] + xx [ 265 ] * xx [ 259 ] ; xx [ 259 ] = xx [
266 ] * xx [ 261 ] + xx [ 262 ] * xx [ 265 ] ; xx [ 455 ] = xx [ 255 ] ; xx [
456 ] = xx [ 261 ] ; xx [ 457 ] = xx [ 262 ] ; xx [ 458 ] = xx [ 254 ] ; xx [
459 ] = xx [ 270 ] ; xx [ 460 ] = xx [ 271 ] ; xx [ 461 ] = xx [ 268 ] ;
pm_math_quatXform ( xx + 455 , xx + 459 , xx + 462 ) ; xx [ 465 ] = xx [ 462
] - xx [ 260 ] ; xx [ 260 ] = xx [ 463 ] + xx [ 263 ] ; xx [ 462 ] = xx [ 464
] - xx [ 257 ] ; xx [ 466 ] = xx [ 452 ] ; xx [ 467 ] = xx [ 453 ] ; xx [ 468
] = xx [ 454 ] ; xx [ 469 ] = xx [ 259 ] ; pm_math_quatCompose ( xx + 466 ,
xx + 280 , xx + 470 ) ; pm_math_quatXform ( xx + 466 , xx + 284 , xx + 474 )
; pm_math_quatCompose ( xx + 379 , xx + 118 , xx + 466 ) ; pm_math_quatXform
( xx + 379 , xx + 123 , xx + 477 ) ; xx [ 257 ] = xx [ 265 ] * xx [ 285 ] +
xx [ 284 ] * xx [ 266 ] ; xx [ 463 ] = - ( xx [ 113 ] * xx [ 72 ] + xx [ 75 ]
* xx [ 116 ] ) ; xx [ 464 ] = xx [ 72 ] * xx [ 110 ] + xx [ 117 ] * xx [ 75 ]
; xx [ 480 ] = xx [ 75 ] * xx [ 110 ] - xx [ 117 ] * xx [ 72 ] ; xx [ 117 ] =
xx [ 72 ] * xx [ 116 ] - xx [ 113 ] * xx [ 75 ] ; xx [ 113 ] = xx [ 126 ] *
xx [ 75 ] ; xx [ 481 ] = xx [ 75 ] * xx [ 122 ] ; xx [ 482 ] = xx [ 34 ] * (
xx [ 72 ] * xx [ 113 ] + xx [ 481 ] * xx [ 75 ] ) - xx [ 122 ] - xx [ 77 ] ;
xx [ 122 ] = ( xx [ 113 ] * xx [ 75 ] - xx [ 72 ] * xx [ 481 ] ) * xx [ 34 ]
- xx [ 126 ] - xx [ 79 ] ; xx [ 113 ] = xx [ 125 ] + xx [ 80 ] ; xx [ 483 ] =
xx [ 463 ] ; xx [ 484 ] = xx [ 464 ] ; xx [ 485 ] = xx [ 480 ] ; xx [ 486 ] =
xx [ 117 ] ; pm_math_quatCompose ( xx + 63 , xx + 483 , xx + 487 ) ; xx [ 483
] = xx [ 482 ] ; xx [ 484 ] = xx [ 122 ] ; xx [ 485 ] = xx [ 113 ] ;
pm_math_quatXform ( xx + 63 , xx + 483 , xx + 491 ) ; xx [ 126 ] = xx [ 491 ]
+ xx [ 73 ] ; xx [ 481 ] = xx [ 492 ] + xx [ 74 ] ; xx [ 483 ] = xx [ 493 ] +
xx [ 70 ] ; pm_math_quatCompose ( xx + 47 , xx + 487 , xx + 491 ) ; xx [ 484
] = xx [ 126 ] ; xx [ 485 ] = xx [ 481 ] ; xx [ 486 ] = xx [ 483 ] ;
pm_math_quatXform ( xx + 47 , xx + 484 , xx + 495 ) ; xx [ 484 ] = xx [ 495 ]
+ xx [ 54 ] ; xx [ 485 ] = xx [ 496 ] + xx [ 55 ] ; xx [ 486 ] = xx [ 497 ] +
xx [ 56 ] ; xx [ 495 ] = xx [ 485 ] * xx [ 38 ] + xx [ 484 ] * xx [ 39 ] ; xx
[ 496 ] = - ( xx [ 296 ] * xx [ 298 ] + xx [ 4 ] * xx [ 294 ] ) ; xx [ 497 ]
= - ( xx [ 288 ] * xx [ 4 ] + xx [ 298 ] * xx [ 292 ] ) ; xx [ 498 ] = xx [
288 ] * xx [ 298 ] - xx [ 4 ] * xx [ 292 ] ; xx [ 499 ] = xx [ 296 ] * xx [ 4
] - xx [ 298 ] * xx [ 294 ] ; xx [ 500 ] = xx [ 288 ] ; xx [ 501 ] = xx [ 295
] ; xx [ 502 ] = xx [ 296 ] ; xx [ 503 ] = xx [ 292 ] ; pm_math_quatXform (
xx + 500 , xx + 303 , xx + 504 ) ; xx [ 294 ] = xx [ 504 ] - xx [ 293 ] ; xx
[ 293 ] = xx [ 505 ] + xx [ 297 ] ; xx [ 504 ] = xx [ 506 ] - xx [ 290 ] ;
pm_math_quatCompose ( xx + 496 , xx + 314 , xx + 505 ) ; pm_math_quatXform (
xx + 496 , xx + 318 , xx + 509 ) ; pm_math_quatCompose ( xx + 379 , xx + 131
, xx + 512 ) ; pm_math_quatXform ( xx + 379 , xx + 136 , xx + 516 ) ; xx [
290 ] = xx [ 4 ] * xx [ 319 ] + xx [ 318 ] * xx [ 298 ] ; xx [ 519 ] = xx [
107 ] * xx [ 72 ] - xx [ 75 ] * xx [ 128 ] ; xx [ 520 ] = xx [ 72 ] * xx [
115 ] - xx [ 130 ] * xx [ 75 ] ; xx [ 521 ] = xx [ 130 ] * xx [ 72 ] + xx [
75 ] * xx [ 115 ] ; xx [ 522 ] = xx [ 72 ] * xx [ 128 ] + xx [ 107 ] * xx [
75 ] ; xx [ 523 ] = xx [ 139 ] * xx [ 75 ] ; xx [ 524 ] = xx [ 75 ] * xx [
135 ] ; xx [ 525 ] = xx [ 34 ] * ( xx [ 72 ] * xx [ 523 ] + xx [ 524 ] * xx [
75 ] ) - xx [ 135 ] - xx [ 77 ] ; xx [ 135 ] = ( xx [ 523 ] * xx [ 75 ] - xx
[ 72 ] * xx [ 524 ] ) * xx [ 34 ] - xx [ 139 ] - xx [ 79 ] ; xx [ 139 ] = xx
[ 138 ] + xx [ 80 ] ; pm_math_quatCompose ( xx + 63 , xx + 519 , xx + 526 ) ;
xx [ 530 ] = xx [ 525 ] ; xx [ 531 ] = xx [ 135 ] ; xx [ 532 ] = xx [ 139 ] ;
pm_math_quatXform ( xx + 63 , xx + 530 , xx + 533 ) ; xx [ 523 ] = xx [ 533 ]
+ xx [ 73 ] ; xx [ 524 ] = xx [ 534 ] + xx [ 74 ] ; xx [ 530 ] = xx [ 535 ] +
xx [ 70 ] ; pm_math_quatCompose ( xx + 47 , xx + 526 , xx + 531 ) ; xx [ 535
] = xx [ 523 ] ; xx [ 536 ] = xx [ 524 ] ; xx [ 537 ] = xx [ 530 ] ;
pm_math_quatXform ( xx + 47 , xx + 535 , xx + 538 ) ; xx [ 535 ] = xx [ 538 ]
+ xx [ 54 ] ; xx [ 536 ] = xx [ 539 ] + xx [ 55 ] ; xx [ 537 ] = xx [ 540 ] +
xx [ 56 ] ; xx [ 538 ] = xx [ 536 ] * xx [ 38 ] + xx [ 535 ] * xx [ 39 ] ; xx
[ 539 ] = - ( xx [ 169 ] * xx [ 162 ] - xx [ 161 ] * xx [ 168 ] ) ; xx [ 540
] = - ( xx [ 168 ] * xx [ 155 ] + xx [ 163 ] * xx [ 169 ] ) ; xx [ 541 ] = xx
[ 169 ] * xx [ 155 ] - xx [ 163 ] * xx [ 168 ] ; xx [ 542 ] = xx [ 161 ] * xx
[ 169 ] + xx [ 168 ] * xx [ 162 ] ; xx [ 543 ] = xx [ 155 ] ; xx [ 544 ] = xx
[ 161 ] ; xx [ 545 ] = xx [ 162 ] ; xx [ 546 ] = xx [ 163 ] ; xx [ 547 ] = xx
[ 174 ] ; xx [ 548 ] = xx [ 175 ] ; xx [ 549 ] = xx [ 172 ] ;
pm_math_quatXform ( xx + 543 , xx + 547 , xx + 550 ) ; xx [ 553 ] = xx [ 550
] - xx [ 166 ] ; xx [ 166 ] = xx [ 551 ] + xx [ 167 ] ; xx [ 550 ] = xx [ 552
] + xx [ 164 ] ; pm_math_quatCompose ( xx + 539 , xx + 184 , xx + 554 ) ;
pm_math_quatXform ( xx + 539 , xx + 188 , xx + 558 ) ; pm_math_quatCompose (
xx + 379 , xx + 146 , xx + 561 ) ; pm_math_quatXform ( xx + 379 , xx + 150 ,
xx + 565 ) ; xx [ 379 ] = xx [ 168 ] * xx [ 189 ] + xx [ 188 ] * xx [ 169 ] ;
xx [ 380 ] = xx [ 72 ] * xx [ 90 ] + xx [ 143 ] * xx [ 75 ] ; xx [ 381 ] = -
( xx [ 96 ] * xx [ 72 ] + xx [ 75 ] * xx [ 145 ] ) ; xx [ 382 ] = xx [ 72 ] *
xx [ 145 ] - xx [ 96 ] * xx [ 75 ] ; xx [ 96 ] = xx [ 75 ] * xx [ 90 ] - xx [
143 ] * xx [ 72 ] ; xx [ 143 ] = xx [ 154 ] * xx [ 75 ] ; xx [ 551 ] = xx [
75 ] * xx [ 150 ] ; xx [ 552 ] = xx [ 150 ] + xx [ 34 ] * ( xx [ 72 ] * xx [
143 ] - xx [ 551 ] * xx [ 75 ] ) - xx [ 77 ] ; xx [ 77 ] = ( xx [ 72 ] * xx [
551 ] + xx [ 143 ] * xx [ 75 ] ) * xx [ 34 ] - xx [ 154 ] - xx [ 79 ] ; xx [
79 ] = xx [ 152 ] + xx [ 80 ] ; xx [ 568 ] = xx [ 380 ] ; xx [ 569 ] = xx [
381 ] ; xx [ 570 ] = xx [ 382 ] ; xx [ 571 ] = xx [ 96 ] ;
pm_math_quatCompose ( xx + 63 , xx + 568 , xx + 572 ) ; xx [ 568 ] = xx [ 552
] ; xx [ 569 ] = xx [ 77 ] ; xx [ 570 ] = xx [ 79 ] ; pm_math_quatXform ( xx
+ 63 , xx + 568 , xx + 576 ) ; xx [ 143 ] = xx [ 576 ] + xx [ 73 ] ; xx [ 154
] = xx [ 577 ] + xx [ 74 ] ; xx [ 551 ] = xx [ 578 ] + xx [ 70 ] ;
pm_math_quatCompose ( xx + 47 , xx + 572 , xx + 568 ) ; xx [ 576 ] = xx [ 143
] ; xx [ 577 ] = xx [ 154 ] ; xx [ 578 ] = xx [ 551 ] ; pm_math_quatXform (
xx + 47 , xx + 576 , xx + 579 ) ; xx [ 576 ] = xx [ 579 ] + xx [ 54 ] ; xx [
577 ] = xx [ 580 ] + xx [ 55 ] ; xx [ 578 ] = xx [ 581 ] + xx [ 56 ] ; xx [
579 ] = xx [ 577 ] * xx [ 38 ] + xx [ 576 ] * xx [ 39 ] ; xx [ 580 ] = xx [ 1
] * xx [ 24 ] ; xx [ 581 ] = xx [ 1 ] * xx [ 25 ] ; xx [ 582 ] = xx [ 580 ] +
xx [ 581 ] ; xx [ 583 ] = xx [ 580 ] - xx [ 581 ] ; xx [ 580 ] = xx [ 1 ] *
xx [ 22 ] ; xx [ 581 ] = xx [ 1 ] * xx [ 23 ] ; xx [ 584 ] = - ( xx [ 580 ] +
xx [ 581 ] ) ; xx [ 585 ] = xx [ 581 ] - xx [ 580 ] ; xx [ 580 ] =
0.5000000000000001 * xx [ 19 ] ; xx [ 581 ] = ( xx [ 580 ] + xx [ 580 ] ) *
xx [ 34 ] - xx [ 19 ] - state [ 0 ] ; xx [ 580 ] = 1.414213562373095 * ( xx [
1 ] * xx [ 21 ] - xx [ 1 ] * xx [ 20 ] ) ; xx [ 1 ] = state [ 2 ] - ( xx [
580 ] + xx [ 20 ] ) ; xx [ 586 ] = state [ 1 ] - ( xx [ 21 ] - xx [ 580 ] ) ;
pm_math_quatCompose ( xx + 582 , xx + 335 , xx + 587 ) ; xx [ 591 ] = xx [ 35
] ; xx [ 592 ] = xx [ 27 ] ; xx [ 593 ] = xx [ 36 ] ; pm_math_quatXform ( xx
+ 582 , xx + 591 , xx + 594 ) ; xx [ 580 ] = xx [ 594 ] + xx [ 581 ] ; xx [
597 ] = xx [ 595 ] + xx [ 1 ] ; xx [ 594 ] = xx [ 596 ] + xx [ 586 ] ; xx [
595 ] = - ( xx [ 589 ] * xx [ 39 ] - xx [ 38 ] * xx [ 588 ] ) ; xx [ 596 ] =
- ( xx [ 38 ] * xx [ 587 ] + xx [ 590 ] * xx [ 39 ] ) ; xx [ 598 ] = xx [ 587
] * xx [ 39 ] - xx [ 38 ] * xx [ 590 ] ; xx [ 599 ] = xx [ 588 ] * xx [ 39 ]
+ xx [ 38 ] * xx [ 589 ] ; pm_math_quatXform ( xx + 587 , xx + 346 , xx + 600
) ; xx [ 603 ] = xx [ 600 ] + xx [ 580 ] ; xx [ 604 ] = xx [ 601 ] + xx [ 597
] ; xx [ 600 ] = xx [ 602 ] + xx [ 594 ] ; xx [ 605 ] = xx [ 595 ] ; xx [ 606
] = xx [ 596 ] ; xx [ 607 ] = xx [ 598 ] ; xx [ 608 ] = xx [ 599 ] ;
pm_math_quatCompose ( xx + 605 , xx + 47 , xx + 609 ) ; pm_math_quatXform (
xx + 605 , xx + 54 , xx + 613 ) ; xx [ 601 ] = xx [ 613 ] + xx [ 603 ] ; xx [
602 ] = xx [ 614 ] + xx [ 604 ] ; xx [ 605 ] = xx [ 615 ] + xx [ 600 ] ;
pm_math_quatCompose ( xx + 609 , xx + 63 , xx + 613 ) ; pm_math_quatXform (
xx + 609 , xx + 361 , xx + 606 ) ; xx [ 617 ] = xx [ 606 ] + xx [ 601 ] ; xx
[ 618 ] = xx [ 607 ] + xx [ 602 ] ; xx [ 606 ] = xx [ 608 ] + xx [ 605 ] ;
pm_math_quatXform ( xx + 613 , xx + 371 , xx + 619 ) ; xx [ 622 ] = - xx [ 5
] ; xx [ 623 ] = xx [ 7 ] ; xx [ 624 ] = xx [ 8 ] ; pm_math_quatInverseXform
( xx + 12 , xx + 622 , xx + 625 ) ; xx [ 5 ] = ( 1.0 - ( xx [ 24 ] * xx [ 24
] + xx [ 25 ] * xx [ 25 ] ) * xx [ 34 ] ) * state [ 9 ] + xx [ 625 ] * state
[ 10 ] - xx [ 6 ] * state [ 11 ] ; xx [ 6 ] = xx [ 34 ] * ( xx [ 23 ] * xx [
24 ] - xx [ 22 ] * xx [ 25 ] ) * state [ 9 ] + xx [ 626 ] * state [ 10 ] - xx
[ 10 ] * state [ 11 ] ; xx [ 7 ] = xx [ 34 ] * ( xx [ 22 ] * xx [ 24 ] + xx [
23 ] * xx [ 25 ] ) * state [ 9 ] + xx [ 627 ] * state [ 10 ] + xx [ 11 ] *
state [ 11 ] ; xx [ 10 ] = state [ 3 ] ; xx [ 11 ] = state [ 4 ] ; xx [ 12 ]
= state [ 5 ] ; pm_math_quatInverseXform ( xx + 22 , xx + 10 , xx + 13 ) ;
pm_math_cross3 ( xx + 16 , xx + 5 , xx + 10 ) ; xx [ 8 ] = xx [ 13 ] + xx [
10 ] ; xx [ 16 ] = xx [ 14 ] + xx [ 11 ] ; xx [ 10 ] = xx [ 15 ] + xx [ 12 ]
; pm_math_quatInverseXform ( xx + 335 , xx + 5 , xx + 11 ) ; xx [ 14 ] = xx [
13 ] - state [ 13 ] ; pm_math_cross3 ( xx + 5 , xx + 591 , xx + 622 ) ; xx [
591 ] = xx [ 622 ] + xx [ 8 ] ; xx [ 592 ] = xx [ 623 ] + xx [ 16 ] ; xx [
593 ] = xx [ 624 ] + xx [ 10 ] ; pm_math_quatInverseXform ( xx + 335 , xx +
591 , xx + 622 ) ; xx [ 13 ] = xx [ 623 ] - xx [ 28 ] * state [ 13 ] ; xx [
15 ] = xx [ 38 ] * xx [ 12 ] + xx [ 11 ] * xx [ 39 ] ; xx [ 17 ] = xx [ 11 ]
- xx [ 34 ] * xx [ 15 ] * xx [ 39 ] ; xx [ 18 ] = xx [ 12 ] - xx [ 34 ] * xx
[ 15 ] * xx [ 38 ] ; xx [ 15 ] = xx [ 14 ] - ( xx [ 38 ] * xx [ 38 ] * xx [
14 ] + xx [ 39 ] * xx [ 14 ] * xx [ 39 ] ) * xx [ 34 ] + state [ 15 ] ; xx [
335 ] = xx [ 11 ] ; xx [ 336 ] = xx [ 12 ] ; xx [ 337 ] = xx [ 14 ] ;
pm_math_cross3 ( xx + 335 , xx + 346 , xx + 591 ) ; xx [ 335 ] = xx [ 591 ] +
xx [ 622 ] ; xx [ 336 ] = xx [ 592 ] + xx [ 13 ] ; xx [ 337 ] = xx [ 336 ] *
xx [ 38 ] + xx [ 335 ] * xx [ 39 ] ; xx [ 338 ] = xx [ 335 ] - xx [ 34 ] * xx
[ 337 ] * xx [ 39 ] - xx [ 37 ] * state [ 15 ] ; xx [ 37 ] = xx [ 336 ] - xx
[ 34 ] * xx [ 337 ] * xx [ 38 ] + xx [ 40 ] * state [ 15 ] ; xx [ 40 ] = xx [
593 ] + xx [ 624 ] ; xx [ 335 ] = xx [ 40 ] - ( xx [ 38 ] * xx [ 40 ] * xx [
38 ] + xx [ 40 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] ; xx [ 346 ] = xx [ 17
] ; xx [ 347 ] = xx [ 18 ] ; xx [ 348 ] = xx [ 15 ] ;
pm_math_quatInverseXform ( xx + 47 , xx + 346 , xx + 591 ) ; xx [ 40 ] = xx [
44 ] * state [ 20 ] ; xx [ 336 ] = xx [ 44 ] * state [ 21 ] ; xx [ 337 ] =
state [ 20 ] - ( xx [ 44 ] * xx [ 40 ] - xx [ 46 ] * xx [ 336 ] ) * xx [ 34 ]
; xx [ 607 ] = xx [ 591 ] + xx [ 337 ] ; xx [ 608 ] = state [ 21 ] - xx [ 34
] * ( xx [ 46 ] * xx [ 40 ] + xx [ 44 ] * xx [ 336 ] ) ; xx [ 40 ] = xx [ 592
] + xx [ 608 ] ; xx [ 336 ] = xx [ 593 ] + state [ 22 ] ; pm_math_cross3 ( xx
+ 346 , xx + 54 , xx + 591 ) ; xx [ 346 ] = xx [ 591 ] + xx [ 338 ] ; xx [
347 ] = xx [ 592 ] + xx [ 37 ] ; xx [ 348 ] = xx [ 593 ] + xx [ 335 ] ;
pm_math_quatInverseXform ( xx + 47 , xx + 346 , xx + 591 ) ; xx [ 346 ] = xx
[ 337 ] ; xx [ 347 ] = xx [ 608 ] ; xx [ 348 ] = state [ 22 ] ;
pm_math_cross3 ( xx + 346 , xx + 51 , xx + 625 ) ; xx [ 337 ] = xx [ 591 ] +
xx [ 625 ] ; xx [ 346 ] = xx [ 592 ] + xx [ 626 ] ; xx [ 347 ] = xx [ 593 ] +
xx [ 627 ] ; xx [ 591 ] = xx [ 607 ] ; xx [ 592 ] = xx [ 40 ] ; xx [ 593 ] =
xx [ 336 ] ; pm_math_quatInverseXform ( xx + 63 , xx + 591 , xx + 625 ) ; xx
[ 348 ] = xx [ 625 ] + state [ 27 ] ; xx [ 608 ] = xx [ 626 ] + state [ 28 ]
; xx [ 623 ] = xx [ 627 ] + state [ 29 ] ; pm_math_cross3 ( xx + 591 , xx +
361 , xx + 625 ) ; xx [ 361 ] = xx [ 625 ] + xx [ 337 ] ; xx [ 362 ] = xx [
626 ] + xx [ 346 ] ; xx [ 363 ] = xx [ 627 ] + xx [ 347 ] ;
pm_math_quatInverseXform ( xx + 63 , xx + 361 , xx + 591 ) ; xx [ 63 ] =
state [ 27 ] ; xx [ 64 ] = state [ 28 ] ; xx [ 65 ] = state [ 29 ] ;
pm_math_cross3 ( xx + 63 , xx + 67 , xx + 361 ) ; xx [ 63 ] = xx [ 591 ] + xx
[ 361 ] ; xx [ 64 ] = xx [ 592 ] + xx [ 362 ] ; xx [ 65 ] = xx [ 593 ] + xx [
363 ] ; xx [ 66 ] = xx [ 608 ] * xx [ 75 ] ; xx [ 67 ] = xx [ 348 ] * xx [ 75
] ; xx [ 68 ] = xx [ 348 ] + xx [ 34 ] * ( xx [ 72 ] * xx [ 66 ] - xx [ 67 ]
* xx [ 75 ] ) ; xx [ 69 ] = xx [ 608 ] - ( xx [ 72 ] * xx [ 67 ] + xx [ 66 ]
* xx [ 75 ] ) * xx [ 34 ] ; xx [ 66 ] = xx [ 623 ] + state [ 31 ] ; xx [ 361
] = xx [ 348 ] ; xx [ 362 ] = xx [ 608 ] ; xx [ 363 ] = xx [ 623 ] ;
pm_math_cross3 ( xx + 361 , xx + 371 , xx + 591 ) ; xx [ 67 ] = xx [ 591 ] +
xx [ 63 ] ; xx [ 361 ] = xx [ 592 ] + xx [ 64 ] ; xx [ 362 ] = xx [ 361 ] *
xx [ 75 ] ; xx [ 363 ] = xx [ 67 ] * xx [ 75 ] ; xx [ 371 ] = xx [ 67 ] + xx
[ 34 ] * ( xx [ 72 ] * xx [ 362 ] - xx [ 363 ] * xx [ 75 ] ) ; xx [ 67 ] = xx
[ 361 ] - ( xx [ 72 ] * xx [ 363 ] + xx [ 362 ] * xx [ 75 ] ) * xx [ 34 ] -
xx [ 71 ] * state [ 31 ] ; xx [ 71 ] = xx [ 593 ] + xx [ 65 ] ; xx [ 361 ] =
xx [ 83 ] * xx [ 69 ] ; xx [ 362 ] = xx [ 68 ] * xx [ 83 ] ; xx [ 591 ] = xx
[ 68 ] ; xx [ 592 ] = xx [ 69 ] ; xx [ 593 ] = xx [ 66 ] ; pm_math_cross3 (
xx + 591 , xx + 383 , xx + 625 ) ; xx [ 363 ] = xx [ 625 ] + xx [ 371 ] ; xx
[ 372 ] = xx [ 626 ] + xx [ 67 ] ; xx [ 373 ] = xx [ 372 ] * xx [ 83 ] ; xx [
383 ] = xx [ 363 ] * xx [ 83 ] ; pm_math_quatInverseXform ( xx + 100 , xx +
591 , xx + 628 ) ; pm_math_cross3 ( xx + 591 , xx + 104 , xx + 631 ) ; xx [
634 ] = xx [ 631 ] + xx [ 371 ] ; xx [ 635 ] = xx [ 632 ] + xx [ 67 ] ; xx [
636 ] = xx [ 633 ] + xx [ 71 ] ; pm_math_quatInverseXform ( xx + 100 , xx +
634 , xx + 631 ) ; pm_math_quatInverseXform ( xx + 118 , xx + 591 , xx + 100
) ; pm_math_cross3 ( xx + 591 , xx + 123 , xx + 634 ) ; xx [ 637 ] = xx [ 634
] + xx [ 371 ] ; xx [ 638 ] = xx [ 635 ] + xx [ 67 ] ; xx [ 639 ] = xx [ 636
] + xx [ 71 ] ; pm_math_quatInverseXform ( xx + 118 , xx + 637 , xx + 634 ) ;
pm_math_quatInverseXform ( xx + 131 , xx + 591 , xx + 118 ) ; pm_math_cross3
( xx + 591 , xx + 136 , xx + 637 ) ; xx [ 640 ] = xx [ 637 ] + xx [ 371 ] ;
xx [ 641 ] = xx [ 638 ] + xx [ 67 ] ; xx [ 642 ] = xx [ 639 ] + xx [ 71 ] ;
pm_math_quatInverseXform ( xx + 131 , xx + 640 , xx + 637 ) ;
pm_math_quatInverseXform ( xx + 146 , xx + 591 , xx + 131 ) ; pm_math_cross3
( xx + 591 , xx + 150 , xx + 640 ) ; xx [ 591 ] = xx [ 640 ] + xx [ 371 ] ;
xx [ 592 ] = xx [ 641 ] + xx [ 67 ] ; xx [ 593 ] = xx [ 642 ] + xx [ 71 ] ;
pm_math_quatInverseXform ( xx + 146 , xx + 591 , xx + 640 ) ;
pm_math_quatInverseXform ( xx + 543 , xx + 5 , xx + 146 ) ; xx [ 103 ] = xx [
148 ] + state [ 43 ] ; xx [ 591 ] = xx [ 158 ] ; xx [ 592 ] = xx [ 167 ] ; xx
[ 593 ] = xx [ 164 ] ; pm_math_cross3 ( xx + 5 , xx + 591 , xx + 643 ) ; xx [
591 ] = xx [ 643 ] + xx [ 8 ] ; xx [ 592 ] = xx [ 644 ] + xx [ 16 ] ; xx [
593 ] = xx [ 645 ] + xx [ 10 ] ; pm_math_quatInverseXform ( xx + 543 , xx +
591 , xx + 643 ) ; xx [ 121 ] = xx [ 644 ] + xx [ 28 ] * state [ 43 ] ; xx [
134 ] = xx [ 168 ] * xx [ 147 ] + xx [ 146 ] * xx [ 169 ] ; xx [ 148 ] = xx [
146 ] - xx [ 34 ] * xx [ 134 ] * xx [ 169 ] ; xx [ 149 ] = xx [ 147 ] - xx [
34 ] * xx [ 134 ] * xx [ 168 ] ; xx [ 134 ] = xx [ 103 ] - ( xx [ 168 ] * xx
[ 103 ] * xx [ 168 ] + xx [ 103 ] * xx [ 169 ] * xx [ 169 ] ) * xx [ 34 ] +
state [ 45 ] ; xx [ 543 ] = xx [ 146 ] ; xx [ 544 ] = xx [ 147 ] ; xx [ 545 ]
= xx [ 103 ] ; pm_math_cross3 ( xx + 543 , xx + 547 , xx + 591 ) ; xx [ 384 ]
= xx [ 591 ] + xx [ 643 ] ; xx [ 385 ] = xx [ 592 ] + xx [ 121 ] ; xx [ 543 ]
= xx [ 385 ] * xx [ 168 ] + xx [ 384 ] * xx [ 169 ] ; xx [ 544 ] = xx [ 384 ]
- xx [ 34 ] * xx [ 543 ] * xx [ 169 ] - xx [ 171 ] * state [ 45 ] ; xx [ 171
] = xx [ 385 ] - xx [ 34 ] * xx [ 543 ] * xx [ 168 ] - xx [ 170 ] * state [
45 ] ; xx [ 170 ] = xx [ 593 ] + xx [ 645 ] ; xx [ 384 ] = xx [ 170 ] - ( xx
[ 168 ] * xx [ 170 ] * xx [ 168 ] + xx [ 170 ] * xx [ 169 ] * xx [ 169 ] ) *
xx [ 34 ] ; xx [ 545 ] = xx [ 148 ] ; xx [ 546 ] = xx [ 149 ] ; xx [ 547 ] =
xx [ 134 ] ; pm_math_quatInverseXform ( xx + 184 , xx + 545 , xx + 591 ) ; xx
[ 170 ] = xx [ 44 ] * state [ 50 ] ; xx [ 385 ] = xx [ 44 ] * state [ 51 ] ;
xx [ 543 ] = state [ 50 ] - ( xx [ 44 ] * xx [ 170 ] - xx [ 46 ] * xx [ 385 ]
) * xx [ 34 ] ; xx [ 548 ] = state [ 51 ] - xx [ 34 ] * ( xx [ 46 ] * xx [
170 ] + xx [ 44 ] * xx [ 385 ] ) ; pm_math_cross3 ( xx + 545 , xx + 188 , xx
+ 646 ) ; xx [ 545 ] = xx [ 646 ] + xx [ 544 ] ; xx [ 546 ] = xx [ 647 ] + xx
[ 171 ] ; xx [ 547 ] = xx [ 648 ] + xx [ 384 ] ; pm_math_quatInverseXform (
xx + 184 , xx + 545 , xx + 646 ) ; xx [ 184 ] = xx [ 543 ] ; xx [ 185 ] = xx
[ 548 ] ; xx [ 186 ] = state [ 52 ] ; pm_math_cross3 ( xx + 184 , xx + 51 ,
xx + 545 ) ; pm_math_quatInverseXform ( xx + 408 , xx + 5 , xx + 184 ) ; xx [
170 ] = xx [ 186 ] + state [ 54 ] ; xx [ 649 ] = xx [ 193 ] ; xx [ 650 ] = xx
[ 153 ] ; xx [ 651 ] = xx [ 160 ] ; pm_math_cross3 ( xx + 5 , xx + 649 , xx +
652 ) ; xx [ 649 ] = xx [ 652 ] + xx [ 8 ] ; xx [ 650 ] = xx [ 653 ] + xx [
16 ] ; xx [ 651 ] = xx [ 654 ] + xx [ 10 ] ; pm_math_quatInverseXform ( xx +
408 , xx + 649 , xx + 652 ) ; xx [ 186 ] = xx [ 653 ] + xx [ 157 ] * state [
54 ] ; xx [ 157 ] = xx [ 192 ] * xx [ 185 ] + xx [ 184 ] * xx [ 196 ] ; xx [
187 ] = xx [ 184 ] - xx [ 34 ] * xx [ 157 ] * xx [ 196 ] ; xx [ 385 ] = xx [
185 ] - xx [ 34 ] * xx [ 157 ] * xx [ 192 ] ; xx [ 157 ] = xx [ 170 ] - ( xx
[ 192 ] * xx [ 170 ] * xx [ 192 ] + xx [ 170 ] * xx [ 196 ] * xx [ 196 ] ) *
xx [ 34 ] + state [ 56 ] ; xx [ 408 ] = xx [ 184 ] ; xx [ 409 ] = xx [ 185 ]
; xx [ 410 ] = xx [ 170 ] ; pm_math_cross3 ( xx + 408 , xx + 412 , xx + 649 )
; xx [ 408 ] = xx [ 649 ] + xx [ 652 ] ; xx [ 409 ] = xx [ 650 ] + xx [ 186 ]
; xx [ 410 ] = xx [ 409 ] * xx [ 192 ] + xx [ 408 ] * xx [ 196 ] ; xx [ 411 ]
= xx [ 408 ] - xx [ 34 ] * xx [ 410 ] * xx [ 196 ] + xx [ 198 ] * state [ 56
] ; xx [ 198 ] = xx [ 409 ] - xx [ 34 ] * xx [ 410 ] * xx [ 192 ] + xx [ 197
] * state [ 56 ] ; xx [ 197 ] = xx [ 651 ] + xx [ 654 ] ; xx [ 408 ] = xx [
197 ] - ( xx [ 192 ] * xx [ 197 ] * xx [ 192 ] + xx [ 197 ] * xx [ 196 ] * xx
[ 196 ] ) * xx [ 34 ] ; xx [ 412 ] = xx [ 187 ] ; xx [ 413 ] = xx [ 385 ] ;
xx [ 414 ] = xx [ 157 ] ; pm_math_quatInverseXform ( xx + 212 , xx + 412 , xx
+ 649 ) ; xx [ 197 ] = xx [ 44 ] * state [ 61 ] ; xx [ 409 ] = xx [ 44 ] *
state [ 62 ] ; xx [ 410 ] = state [ 61 ] - ( xx [ 44 ] * xx [ 197 ] - xx [ 46
] * xx [ 409 ] ) * xx [ 34 ] ; xx [ 549 ] = state [ 62 ] - xx [ 34 ] * ( xx [
46 ] * xx [ 197 ] + xx [ 44 ] * xx [ 409 ] ) ; pm_math_cross3 ( xx + 412 , xx
+ 216 , xx + 655 ) ; xx [ 412 ] = xx [ 655 ] + xx [ 411 ] ; xx [ 413 ] = xx [
656 ] + xx [ 198 ] ; xx [ 414 ] = xx [ 657 ] + xx [ 408 ] ;
pm_math_quatInverseXform ( xx + 212 , xx + 412 , xx + 655 ) ; xx [ 212 ] = xx
[ 410 ] ; xx [ 213 ] = xx [ 549 ] ; xx [ 214 ] = state [ 63 ] ;
pm_math_cross3 ( xx + 212 , xx + 51 , xx + 412 ) ; pm_math_quatInverseXform (
xx + 324 , xx + 5 , xx + 212 ) ; xx [ 197 ] = xx [ 214 ] - state [ 65 ] ; xx
[ 658 ] = xx [ 225 ] ; xx [ 659 ] = xx [ 221 ] ; xx [ 660 ] = xx [ 223 ] ;
pm_math_cross3 ( xx + 5 , xx + 658 , xx + 661 ) ; xx [ 658 ] = xx [ 661 ] +
xx [ 8 ] ; xx [ 659 ] = xx [ 662 ] + xx [ 16 ] ; xx [ 660 ] = xx [ 663 ] + xx
[ 10 ] ; pm_math_quatInverseXform ( xx + 324 , xx + 658 , xx + 661 ) ; xx [
214 ] = xx [ 662 ] - xx [ 28 ] * state [ 65 ] ; xx [ 215 ] = xx [ 230 ] * xx
[ 213 ] + xx [ 212 ] * xx [ 231 ] ; xx [ 324 ] = xx [ 212 ] - xx [ 34 ] * xx
[ 215 ] * xx [ 231 ] ; xx [ 325 ] = xx [ 213 ] - xx [ 34 ] * xx [ 215 ] * xx
[ 230 ] ; xx [ 215 ] = xx [ 197 ] - ( xx [ 230 ] * xx [ 230 ] * xx [ 197 ] +
xx [ 231 ] * xx [ 197 ] * xx [ 231 ] ) * xx [ 34 ] + state [ 67 ] ; xx [ 658
] = xx [ 212 ] ; xx [ 659 ] = xx [ 213 ] ; xx [ 660 ] = xx [ 197 ] ;
pm_math_cross3 ( xx + 658 , xx + 328 , xx + 664 ) ; xx [ 326 ] = xx [ 664 ] +
xx [ 661 ] ; xx [ 327 ] = xx [ 665 ] + xx [ 214 ] ; xx [ 328 ] = xx [ 327 ] *
xx [ 230 ] + xx [ 326 ] * xx [ 231 ] ; xx [ 329 ] = xx [ 326 ] - xx [ 34 ] *
xx [ 328 ] * xx [ 231 ] + xx [ 233 ] * state [ 67 ] ; xx [ 233 ] = xx [ 327 ]
- xx [ 34 ] * xx [ 328 ] * xx [ 230 ] - xx [ 232 ] * state [ 67 ] ; xx [ 232
] = xx [ 666 ] + xx [ 663 ] ; xx [ 326 ] = xx [ 232 ] - ( xx [ 230 ] * xx [
232 ] * xx [ 230 ] + xx [ 232 ] * xx [ 231 ] * xx [ 231 ] ) * xx [ 34 ] ; xx
[ 658 ] = xx [ 324 ] ; xx [ 659 ] = xx [ 325 ] ; xx [ 660 ] = xx [ 215 ] ;
pm_math_quatInverseXform ( xx + 247 , xx + 658 , xx + 664 ) ; xx [ 232 ] = xx
[ 44 ] * state [ 72 ] ; xx [ 327 ] = xx [ 44 ] * state [ 73 ] ; xx [ 328 ] =
state [ 72 ] - ( xx [ 44 ] * xx [ 232 ] - xx [ 46 ] * xx [ 327 ] ) * xx [ 34
] ; xx [ 330 ] = state [ 73 ] - xx [ 34 ] * ( xx [ 46 ] * xx [ 232 ] + xx [
44 ] * xx [ 327 ] ) ; pm_math_cross3 ( xx + 658 , xx + 251 , xx + 667 ) ; xx
[ 658 ] = xx [ 667 ] + xx [ 329 ] ; xx [ 659 ] = xx [ 668 ] + xx [ 233 ] ; xx
[ 660 ] = xx [ 669 ] + xx [ 326 ] ; pm_math_quatInverseXform ( xx + 247 , xx
+ 658 , xx + 667 ) ; xx [ 247 ] = xx [ 328 ] ; xx [ 248 ] = xx [ 330 ] ; xx [
249 ] = state [ 74 ] ; pm_math_cross3 ( xx + 247 , xx + 51 , xx + 658 ) ;
pm_math_quatInverseXform ( xx + 455 , xx + 5 , xx + 247 ) ; xx [ 232 ] = xx [
249 ] - state [ 76 ] ; xx [ 670 ] = xx [ 256 ] ; xx [ 671 ] = xx [ 263 ] ; xx
[ 672 ] = xx [ 258 ] ; pm_math_cross3 ( xx + 5 , xx + 670 , xx + 673 ) ; xx [
670 ] = xx [ 673 ] + xx [ 8 ] ; xx [ 671 ] = xx [ 674 ] + xx [ 16 ] ; xx [
672 ] = xx [ 675 ] + xx [ 10 ] ; pm_math_quatInverseXform ( xx + 455 , xx +
670 , xx + 673 ) ; xx [ 249 ] = xx [ 674 ] - xx [ 28 ] * state [ 76 ] ; xx [
250 ] = xx [ 265 ] * xx [ 248 ] + xx [ 247 ] * xx [ 266 ] ; xx [ 327 ] = xx [
247 ] - xx [ 34 ] * xx [ 250 ] * xx [ 266 ] ; xx [ 409 ] = xx [ 248 ] - xx [
34 ] * xx [ 250 ] * xx [ 265 ] ; xx [ 250 ] = xx [ 232 ] - ( xx [ 265 ] * xx
[ 265 ] * xx [ 232 ] + xx [ 266 ] * xx [ 232 ] * xx [ 266 ] ) * xx [ 34 ] +
state [ 78 ] ; xx [ 455 ] = xx [ 247 ] ; xx [ 456 ] = xx [ 248 ] ; xx [ 457 ]
= xx [ 232 ] ; pm_math_cross3 ( xx + 455 , xx + 459 , xx + 670 ) ; xx [ 455 ]
= xx [ 670 ] + xx [ 673 ] ; xx [ 456 ] = xx [ 671 ] + xx [ 249 ] ; xx [ 457 ]
= xx [ 456 ] * xx [ 265 ] + xx [ 455 ] * xx [ 266 ] ; xx [ 458 ] = xx [ 455 ]
- xx [ 34 ] * xx [ 457 ] * xx [ 266 ] - xx [ 267 ] * state [ 78 ] ; xx [ 267
] = xx [ 456 ] - xx [ 34 ] * xx [ 457 ] * xx [ 265 ] - xx [ 264 ] * state [
78 ] ; xx [ 264 ] = xx [ 672 ] + xx [ 675 ] ; xx [ 455 ] = xx [ 264 ] - ( xx
[ 265 ] * xx [ 264 ] * xx [ 265 ] + xx [ 264 ] * xx [ 266 ] * xx [ 266 ] ) *
xx [ 34 ] ; xx [ 459 ] = xx [ 327 ] ; xx [ 460 ] = xx [ 409 ] ; xx [ 461 ] =
xx [ 250 ] ; pm_math_quatInverseXform ( xx + 280 , xx + 459 , xx + 670 ) ; xx
[ 264 ] = xx [ 44 ] * state [ 83 ] ; xx [ 456 ] = xx [ 44 ] * state [ 84 ] ;
xx [ 457 ] = state [ 83 ] - ( xx [ 44 ] * xx [ 264 ] - xx [ 46 ] * xx [ 456 ]
) * xx [ 34 ] ; xx [ 625 ] = state [ 84 ] - xx [ 34 ] * ( xx [ 46 ] * xx [
264 ] + xx [ 44 ] * xx [ 456 ] ) ; pm_math_cross3 ( xx + 459 , xx + 284 , xx
+ 676 ) ; xx [ 459 ] = xx [ 676 ] + xx [ 458 ] ; xx [ 460 ] = xx [ 677 ] + xx
[ 267 ] ; xx [ 461 ] = xx [ 678 ] + xx [ 455 ] ; pm_math_quatInverseXform (
xx + 280 , xx + 459 , xx + 676 ) ; xx [ 280 ] = xx [ 457 ] ; xx [ 281 ] = xx
[ 625 ] ; xx [ 282 ] = state [ 85 ] ; pm_math_cross3 ( xx + 280 , xx + 51 ,
xx + 459 ) ; pm_math_quatInverseXform ( xx + 500 , xx + 5 , xx + 280 ) ; xx [
264 ] = xx [ 282 ] - state [ 87 ] ; xx [ 679 ] = xx [ 289 ] ; xx [ 680 ] = xx
[ 297 ] ; xx [ 681 ] = xx [ 287 ] ; pm_math_cross3 ( xx + 5 , xx + 679 , xx +
682 ) ; xx [ 679 ] = xx [ 682 ] + xx [ 8 ] ; xx [ 680 ] = xx [ 683 ] + xx [
16 ] ; xx [ 681 ] = xx [ 684 ] + xx [ 10 ] ; pm_math_quatInverseXform ( xx +
500 , xx + 679 , xx + 682 ) ; xx [ 282 ] = xx [ 683 ] - xx [ 28 ] * state [
87 ] ; xx [ 28 ] = xx [ 4 ] * xx [ 281 ] + xx [ 280 ] * xx [ 298 ] ; xx [ 283
] = xx [ 280 ] - xx [ 34 ] * xx [ 28 ] * xx [ 298 ] ; xx [ 456 ] = xx [ 281 ]
- xx [ 34 ] * xx [ 28 ] * xx [ 4 ] ; xx [ 28 ] = xx [ 264 ] - ( xx [ 4 ] * xx
[ 4 ] * xx [ 264 ] + xx [ 298 ] * xx [ 264 ] * xx [ 298 ] ) * xx [ 34 ] +
state [ 89 ] ; xx [ 500 ] = xx [ 280 ] ; xx [ 501 ] = xx [ 281 ] ; xx [ 502 ]
= xx [ 264 ] ; pm_math_cross3 ( xx + 500 , xx + 303 , xx + 679 ) ; xx [ 500 ]
= xx [ 679 ] + xx [ 682 ] ; xx [ 501 ] = xx [ 680 ] + xx [ 282 ] ; xx [ 502 ]
= xx [ 501 ] * xx [ 4 ] + xx [ 500 ] * xx [ 298 ] ; xx [ 503 ] = xx [ 500 ] -
xx [ 34 ] * xx [ 502 ] * xx [ 298 ] - xx [ 300 ] * state [ 89 ] ; xx [ 300 ]
= xx [ 501 ] - xx [ 34 ] * xx [ 502 ] * xx [ 4 ] - xx [ 299 ] * state [ 89 ]
; xx [ 299 ] = xx [ 681 ] + xx [ 684 ] ; xx [ 500 ] = xx [ 299 ] - ( xx [ 4 ]
* xx [ 299 ] * xx [ 4 ] + xx [ 299 ] * xx [ 298 ] * xx [ 298 ] ) * xx [ 34 ]
; xx [ 679 ] = xx [ 283 ] ; xx [ 680 ] = xx [ 456 ] ; xx [ 681 ] = xx [ 28 ]
; pm_math_quatInverseXform ( xx + 314 , xx + 679 , xx + 685 ) ; xx [ 299 ] =
xx [ 44 ] * state [ 94 ] ; xx [ 501 ] = xx [ 44 ] * state [ 95 ] ; xx [ 502 ]
= state [ 94 ] - ( xx [ 44 ] * xx [ 299 ] - xx [ 46 ] * xx [ 501 ] ) * xx [
34 ] ; xx [ 626 ] = state [ 95 ] - xx [ 34 ] * ( xx [ 46 ] * xx [ 299 ] + xx
[ 44 ] * xx [ 501 ] ) ; pm_math_cross3 ( xx + 679 , xx + 318 , xx + 688 ) ;
xx [ 679 ] = xx [ 688 ] + xx [ 503 ] ; xx [ 680 ] = xx [ 689 ] + xx [ 300 ] ;
xx [ 681 ] = xx [ 690 ] + xx [ 500 ] ; pm_math_quatInverseXform ( xx + 314 ,
xx + 679 , xx + 688 ) ; xx [ 314 ] = xx [ 502 ] ; xx [ 315 ] = xx [ 626 ] ;
xx [ 316 ] = state [ 96 ] ; pm_math_cross3 ( xx + 314 , xx + 51 , xx + 679 )
; motionData [ 0 ] = xx [ 0 ] ; motionData [ 1 ] = xx [ 0 ] ; motionData [ 2
] = xx [ 2 ] ; motionData [ 3 ] = xx [ 2 ] ; motionData [ 4 ] = - state [ 0 ]
; motionData [ 5 ] = state [ 2 ] ; motionData [ 6 ] = state [ 1 ] ;
motionData [ 7 ] = xx [ 22 ] ; motionData [ 8 ] = xx [ 23 ] ; motionData [ 9
] = xx [ 24 ] ; motionData [ 10 ] = xx [ 25 ] ; motionData [ 11 ] = - xx [ 19
] ; motionData [ 12 ] = - xx [ 20 ] ; motionData [ 13 ] = - xx [ 21 ] ;
motionData [ 14 ] = xx [ 9 ] ; motionData [ 15 ] = xx [ 32 ] ; motionData [
16 ] = xx [ 33 ] ; motionData [ 17 ] = xx [ 3 ] ; motionData [ 18 ] = xx [ 35
] ; motionData [ 19 ] = xx [ 27 ] ; motionData [ 20 ] = xx [ 36 ] ;
motionData [ 21 ] = xx [ 0 ] ; motionData [ 22 ] = - xx [ 38 ] ; motionData [
23 ] = xx [ 39 ] ; motionData [ 24 ] = xx [ 0 ] ; motionData [ 25 ] = xx [ 42
] ; motionData [ 26 ] = xx [ 41 ] ; motionData [ 27 ] = xx [ 45 ] ;
motionData [ 28 ] = xx [ 47 ] ; motionData [ 29 ] = xx [ 48 ] ; motionData [
30 ] = xx [ 49 ] ; motionData [ 31 ] = xx [ 50 ] ; motionData [ 32 ] = xx [
54 ] ; motionData [ 33 ] = xx [ 55 ] ; motionData [ 34 ] = xx [ 56 ] ;
motionData [ 35 ] = xx [ 58 ] ; motionData [ 36 ] = xx [ 59 ] ; motionData [
37 ] = xx [ 61 ] ; motionData [ 38 ] = xx [ 57 ] ; motionData [ 39 ] = xx [
73 ] ; motionData [ 40 ] = xx [ 74 ] ; motionData [ 41 ] = xx [ 70 ] ;
motionData [ 42 ] = xx [ 72 ] ; motionData [ 43 ] = xx [ 0 ] ; motionData [
44 ] = xx [ 0 ] ; motionData [ 45 ] = xx [ 75 ] ; motionData [ 46 ] = xx [ 78
] ; motionData [ 47 ] = xx [ 76 ] ; motionData [ 48 ] = xx [ 80 ] ;
motionData [ 49 ] = xx [ 82 ] ; motionData [ 50 ] = xx [ 0 ] ; motionData [
51 ] = xx [ 0 ] ; motionData [ 52 ] = - xx [ 83 ] ; motionData [ 53 ] = xx [
88 ] ; motionData [ 54 ] = xx [ 84 ] ; motionData [ 55 ] = xx [ 86 ] ;
motionData [ 56 ] = xx [ 95 ] ; motionData [ 57 ] = xx [ 98 ] ; motionData [
58 ] = xx [ 99 ] ; motionData [ 59 ] = xx [ 91 ] ; motionData [ 60 ] = xx [
104 ] ; motionData [ 61 ] = xx [ 105 ] ; motionData [ 62 ] = xx [ 106 ] ;
motionData [ 63 ] = xx [ 114 ] ; motionData [ 64 ] = xx [ 110 ] ; motionData
[ 65 ] = xx [ 112 ] ; motionData [ 66 ] = xx [ 116 ] ; motionData [ 67 ] = xx
[ 123 ] ; motionData [ 68 ] = xx [ 124 ] ; motionData [ 69 ] = xx [ 125 ] ;
motionData [ 70 ] = xx [ 107 ] ; motionData [ 71 ] = xx [ 115 ] ; motionData
[ 72 ] = xx [ 130 ] ; motionData [ 73 ] = xx [ 128 ] ; motionData [ 74 ] = xx
[ 136 ] ; motionData [ 75 ] = xx [ 137 ] ; motionData [ 76 ] = xx [ 138 ] ;
motionData [ 77 ] = xx [ 90 ] ; motionData [ 78 ] = xx [ 141 ] ; motionData [
79 ] = xx [ 145 ] ; motionData [ 80 ] = xx [ 140 ] ; motionData [ 81 ] = xx [
150 ] ; motionData [ 82 ] = xx [ 151 ] ; motionData [ 83 ] = xx [ 152 ] ;
motionData [ 84 ] = xx [ 155 ] ; motionData [ 85 ] = xx [ 161 ] ; motionData
[ 86 ] = xx [ 162 ] ; motionData [ 87 ] = xx [ 163 ] ; motionData [ 88 ] = xx
[ 158 ] ; motionData [ 89 ] = xx [ 167 ] ; motionData [ 90 ] = xx [ 164 ] ;
motionData [ 91 ] = xx [ 0 ] ; motionData [ 92 ] = - xx [ 168 ] ; motionData
[ 93 ] = xx [ 169 ] ; motionData [ 94 ] = xx [ 0 ] ; motionData [ 95 ] = xx [
174 ] ; motionData [ 96 ] = xx [ 175 ] ; motionData [ 97 ] = xx [ 172 ] ;
motionData [ 98 ] = xx [ 177 ] ; motionData [ 99 ] = xx [ 179 ] ; motionData
[ 100 ] = xx [ 181 ] ; motionData [ 101 ] = xx [ 183 ] ; motionData [ 102 ] =
xx [ 188 ] ; motionData [ 103 ] = xx [ 189 ] ; motionData [ 104 ] = xx [ 190
] ; motionData [ 105 ] = xx [ 191 ] ; motionData [ 106 ] = xx [ 194 ] ;
motionData [ 107 ] = xx [ 195 ] ; motionData [ 108 ] = xx [ 159 ] ;
motionData [ 109 ] = xx [ 193 ] ; motionData [ 110 ] = xx [ 153 ] ;
motionData [ 111 ] = xx [ 160 ] ; motionData [ 112 ] = xx [ 0 ] ; motionData
[ 113 ] = - xx [ 192 ] ; motionData [ 114 ] = xx [ 196 ] ; motionData [ 115 ]
= xx [ 0 ] ; motionData [ 116 ] = xx [ 201 ] ; motionData [ 117 ] = xx [ 199
] ; motionData [ 118 ] = xx [ 203 ] ; motionData [ 119 ] = xx [ 205 ] ;
motionData [ 120 ] = xx [ 207 ] ; motionData [ 121 ] = xx [ 209 ] ;
motionData [ 122 ] = xx [ 211 ] ; motionData [ 123 ] = xx [ 216 ] ;
motionData [ 124 ] = xx [ 217 ] ; motionData [ 125 ] = xx [ 218 ] ;
motionData [ 126 ] = xx [ 220 ] ; motionData [ 127 ] = xx [ 227 ] ;
motionData [ 128 ] = xx [ 228 ] ; motionData [ 129 ] = xx [ 219 ] ;
motionData [ 130 ] = xx [ 225 ] ; motionData [ 131 ] = xx [ 221 ] ;
motionData [ 132 ] = xx [ 223 ] ; motionData [ 133 ] = xx [ 0 ] ; motionData
[ 134 ] = - xx [ 230 ] ; motionData [ 135 ] = xx [ 231 ] ; motionData [ 136 ]
= xx [ 0 ] ; motionData [ 137 ] = xx [ 236 ] ; motionData [ 138 ] = xx [ 234
] ; motionData [ 139 ] = xx [ 238 ] ; motionData [ 140 ] = xx [ 240 ] ;
motionData [ 141 ] = xx [ 242 ] ; motionData [ 142 ] = xx [ 244 ] ;
motionData [ 143 ] = xx [ 246 ] ; motionData [ 144 ] = xx [ 251 ] ;
motionData [ 145 ] = xx [ 252 ] ; motionData [ 146 ] = xx [ 253 ] ;
motionData [ 147 ] = xx [ 255 ] ; motionData [ 148 ] = xx [ 261 ] ;
motionData [ 149 ] = xx [ 262 ] ; motionData [ 150 ] = xx [ 254 ] ;
motionData [ 151 ] = xx [ 256 ] ; motionData [ 152 ] = xx [ 263 ] ;
motionData [ 153 ] = xx [ 258 ] ; motionData [ 154 ] = xx [ 0 ] ; motionData
[ 155 ] = - xx [ 265 ] ; motionData [ 156 ] = xx [ 266 ] ; motionData [ 157 ]
= xx [ 0 ] ; motionData [ 158 ] = xx [ 270 ] ; motionData [ 159 ] = xx [ 271
] ; motionData [ 160 ] = xx [ 268 ] ; motionData [ 161 ] = xx [ 273 ] ;
motionData [ 162 ] = xx [ 275 ] ; motionData [ 163 ] = xx [ 277 ] ;
motionData [ 164 ] = xx [ 279 ] ; motionData [ 165 ] = xx [ 284 ] ;
motionData [ 166 ] = xx [ 285 ] ; motionData [ 167 ] = xx [ 286 ] ;
motionData [ 168 ] = xx [ 288 ] ; motionData [ 169 ] = xx [ 295 ] ;
motionData [ 170 ] = xx [ 296 ] ; motionData [ 171 ] = xx [ 292 ] ;
motionData [ 172 ] = xx [ 289 ] ; motionData [ 173 ] = xx [ 297 ] ;
motionData [ 174 ] = xx [ 287 ] ; motionData [ 175 ] = xx [ 0 ] ; motionData
[ 176 ] = - xx [ 4 ] ; motionData [ 177 ] = xx [ 298 ] ; motionData [ 178 ] =
xx [ 0 ] ; motionData [ 179 ] = xx [ 303 ] ; motionData [ 180 ] = xx [ 304 ]
; motionData [ 181 ] = xx [ 305 ] ; motionData [ 182 ] = xx [ 307 ] ;
motionData [ 183 ] = xx [ 309 ] ; motionData [ 184 ] = xx [ 311 ] ;
motionData [ 185 ] = xx [ 313 ] ; motionData [ 186 ] = xx [ 318 ] ;
motionData [ 187 ] = xx [ 319 ] ; motionData [ 188 ] = xx [ 320 ] ;
motionData [ 189 ] = xx [ 321 ] ; motionData [ 190 ] = xx [ 322 ] ;
motionData [ 191 ] = xx [ 323 ] ; motionData [ 192 ] = xx [ 224 ] ;
motionData [ 193 ] = xx [ 226 ] ; motionData [ 194 ] = xx [ 334 ] ;
motionData [ 195 ] = xx [ 331 ] ; motionData [ 196 ] = xx [ 339 ] ;
motionData [ 197 ] = xx [ 340 ] ; motionData [ 198 ] = xx [ 341 ] ;
motionData [ 199 ] = xx [ 342 ] ; motionData [ 200 ] = xx [ 343 ] + xx [ 226
] ; motionData [ 201 ] = xx [ 344 ] + xx [ 334 ] ; motionData [ 202 ] = xx [
345 ] + xx [ 331 ] ; motionData [ 203 ] = xx [ 222 ] ; motionData [ 204 ] =
xx [ 332 ] ; motionData [ 205 ] = xx [ 333 ] ; motionData [ 206 ] = xx [ 29 ]
; motionData [ 207 ] = xx [ 31 ] ; motionData [ 208 ] = xx [ 352 ] ;
motionData [ 209 ] = xx [ 349 ] ; motionData [ 210 ] = xx [ 357 ] ;
motionData [ 211 ] = xx [ 358 ] ; motionData [ 212 ] = xx [ 359 ] ;
motionData [ 213 ] = xx [ 360 ] ; motionData [ 214 ] = xx [ 30 ] ; motionData
[ 215 ] = xx [ 350 ] ; motionData [ 216 ] = xx [ 351 ] ; motionData [ 217 ] =
xx [ 353 ] ; motionData [ 218 ] = xx [ 354 ] ; motionData [ 219 ] = xx [ 355
] ; motionData [ 220 ] = xx [ 356 ] ; motionData [ 221 ] = xx [ 367 ] ;
motionData [ 222 ] = xx [ 368 ] ; motionData [ 223 ] = xx [ 364 ] ;
motionData [ 224 ] = xx [ 365 ] ; motionData [ 225 ] = xx [ 366 ] ;
motionData [ 226 ] = xx [ 369 ] ; motionData [ 227 ] = xx [ 370 ] ;
motionData [ 228 ] = xx [ 377 ] ; motionData [ 229 ] = xx [ 378 ] ;
motionData [ 230 ] = xx [ 374 ] ; motionData [ 231 ] = xx [ 82 ] * xx [ 365 ]
+ xx [ 370 ] * xx [ 83 ] ; motionData [ 232 ] = xx [ 366 ] * xx [ 82 ] - xx [
83 ] * xx [ 369 ] ; motionData [ 233 ] = xx [ 82 ] * xx [ 369 ] + xx [ 366 ]
* xx [ 83 ] ; motionData [ 234 ] = xx [ 370 ] * xx [ 82 ] - xx [ 83 ] * xx [
365 ] ; motionData [ 235 ] = xx [ 386 ] + xx [ 377 ] ; motionData [ 236 ] =
xx [ 387 ] + xx [ 378 ] ; motionData [ 237 ] = xx [ 388 ] + xx [ 374 ] ;
motionData [ 238 ] = xx [ 243 ] * xx [ 231 ] - xx [ 230 ] * xx [ 241 ] ;
motionData [ 239 ] = - ( xx [ 231 ] * xx [ 245 ] + xx [ 230 ] * xx [ 240 ] )
; motionData [ 240 ] = xx [ 231 ] * xx [ 240 ] - xx [ 230 ] * xx [ 245 ] ;
motionData [ 241 ] = xx [ 243 ] * xx [ 230 ] + xx [ 231 ] * xx [ 241 ] ;
motionData [ 242 ] = xx [ 251 ] - ( xx [ 34 ] * xx [ 375 ] * xx [ 231 ] + xx
[ 235 ] ) + xx [ 229 ] ; motionData [ 243 ] = xx [ 252 ] - xx [ 34 ] * xx [
375 ] * xx [ 230 ] - xx [ 237 ] ; motionData [ 244 ] = xx [ 253 ] - ( ( xx [
230 ] * xx [ 230 ] * xx [ 253 ] + xx [ 253 ] * xx [ 231 ] * xx [ 231 ] ) * xx
[ 34 ] + xx [ 239 ] ) + xx [ 26 ] ; motionData [ 245 ] = xx [ 376 ] ;
motionData [ 246 ] = xx [ 0 ] ; motionData [ 247 ] = xx [ 0 ] ; motionData [
248 ] = xx [ 389 ] ; motionData [ 249 ] = xx [ 392 ] ; motionData [ 250 ] =
xx [ 87 ] ; motionData [ 251 ] = xx [ 89 ] ; motionData [ 252 ] = xx [ 390 ]
; motionData [ 253 ] = xx [ 391 ] ; motionData [ 254 ] = xx [ 393 ] ;
motionData [ 255 ] = xx [ 60 ] ; motionData [ 256 ] = xx [ 62 ] ; motionData
[ 257 ] = xx [ 394 ] ; motionData [ 258 ] = xx [ 395 ] ; motionData [ 259 ] =
xx [ 400 ] ; motionData [ 260 ] = xx [ 401 ] ; motionData [ 261 ] = xx [ 402
] ; motionData [ 262 ] = xx [ 403 ] ; motionData [ 263 ] = xx [ 396 ] ;
motionData [ 264 ] = xx [ 397 ] ; motionData [ 265 ] = xx [ 398 ] ;
motionData [ 266 ] = xx [ 38 ] * xx [ 401 ] - xx [ 402 ] * xx [ 39 ] ;
motionData [ 267 ] = xx [ 403 ] * xx [ 39 ] - xx [ 38 ] * xx [ 400 ] ;
motionData [ 268 ] = xx [ 400 ] * xx [ 39 ] + xx [ 38 ] * xx [ 403 ] ;
motionData [ 269 ] = - ( xx [ 38 ] * xx [ 402 ] + xx [ 401 ] * xx [ 39 ] ) ;
motionData [ 270 ] = xx [ 396 ] - xx [ 34 ] * xx [ 399 ] * xx [ 39 ] + xx [
42 ] ; motionData [ 271 ] = xx [ 397 ] - xx [ 34 ] * xx [ 399 ] * xx [ 38 ] -
xx [ 43 ] ; motionData [ 272 ] = xx [ 398 ] - ( xx [ 38 ] * xx [ 398 ] * xx [
38 ] + xx [ 398 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] + xx [ 45 ] ;
motionData [ 273 ] = xx [ 404 ] ; motionData [ 274 ] = xx [ 405 ] ;
motionData [ 275 ] = xx [ 406 ] ; motionData [ 276 ] = xx [ 407 ] ;
motionData [ 277 ] = xx [ 418 ] ; motionData [ 278 ] = xx [ 419 ] ;
motionData [ 279 ] = xx [ 415 ] ; motionData [ 280 ] = xx [ 420 ] ;
motionData [ 281 ] = xx [ 421 ] ; motionData [ 282 ] = xx [ 422 ] ;
motionData [ 283 ] = xx [ 423 ] ; motionData [ 284 ] = xx [ 424 ] + xx [ 418
] ; motionData [ 285 ] = xx [ 425 ] + xx [ 419 ] ; motionData [ 286 ] = xx [
426 ] + xx [ 415 ] ; motionData [ 287 ] = xx [ 427 ] ; motionData [ 288 ] =
xx [ 428 ] ; motionData [ 289 ] = xx [ 429 ] ; motionData [ 290 ] = xx [ 430
] ; motionData [ 291 ] = xx [ 431 ] + xx [ 377 ] ; motionData [ 292 ] = xx [
432 ] + xx [ 378 ] ; motionData [ 293 ] = xx [ 433 ] + xx [ 374 ] ;
motionData [ 294 ] = xx [ 208 ] * xx [ 196 ] - xx [ 192 ] * xx [ 206 ] ;
motionData [ 295 ] = - ( xx [ 196 ] * xx [ 210 ] + xx [ 192 ] * xx [ 205 ] )
; motionData [ 296 ] = xx [ 196 ] * xx [ 205 ] - xx [ 192 ] * xx [ 210 ] ;
motionData [ 297 ] = xx [ 208 ] * xx [ 192 ] + xx [ 196 ] * xx [ 206 ] ;
motionData [ 298 ] = xx [ 216 ] - ( xx [ 34 ] * xx [ 416 ] * xx [ 196 ] - xx
[ 200 ] ) + xx [ 156 ] ; motionData [ 299 ] = xx [ 217 ] - xx [ 34 ] * xx [
416 ] * xx [ 192 ] - xx [ 202 ] ; motionData [ 300 ] = xx [ 218 ] - ( ( xx [
192 ] * xx [ 192 ] * xx [ 218 ] + xx [ 218 ] * xx [ 196 ] * xx [ 196 ] ) * xx
[ 34 ] + xx [ 204 ] ) + xx [ 26 ] ; motionData [ 301 ] = xx [ 417 ] ;
motionData [ 302 ] = xx [ 434 ] ; motionData [ 303 ] = xx [ 435 ] ;
motionData [ 304 ] = xx [ 92 ] ; motionData [ 305 ] = xx [ 437 ] ; motionData
[ 306 ] = xx [ 438 ] ; motionData [ 307 ] = xx [ 94 ] ; motionData [ 308 ] =
xx [ 443 ] ; motionData [ 309 ] = xx [ 444 ] ; motionData [ 310 ] = xx [ 445
] ; motionData [ 311 ] = xx [ 446 ] ; motionData [ 312 ] = xx [ 108 ] ;
motionData [ 313 ] = xx [ 436 ] ; motionData [ 314 ] = xx [ 439 ] ;
motionData [ 315 ] = xx [ 447 ] ; motionData [ 316 ] = xx [ 448 ] ;
motionData [ 317 ] = xx [ 449 ] ; motionData [ 318 ] = xx [ 450 ] ;
motionData [ 319 ] = xx [ 440 ] ; motionData [ 320 ] = xx [ 441 ] ;
motionData [ 321 ] = xx [ 442 ] ; motionData [ 322 ] = xx [ 38 ] * xx [ 448 ]
- xx [ 449 ] * xx [ 39 ] ; motionData [ 323 ] = xx [ 450 ] * xx [ 39 ] - xx [
38 ] * xx [ 447 ] ; motionData [ 324 ] = xx [ 447 ] * xx [ 39 ] + xx [ 38 ] *
xx [ 450 ] ; motionData [ 325 ] = - ( xx [ 38 ] * xx [ 449 ] + xx [ 448 ] *
xx [ 39 ] ) ; motionData [ 326 ] = xx [ 440 ] - xx [ 34 ] * xx [ 451 ] * xx [
39 ] + xx [ 42 ] ; motionData [ 327 ] = xx [ 441 ] - xx [ 34 ] * xx [ 451 ] *
xx [ 38 ] - xx [ 43 ] ; motionData [ 328 ] = xx [ 442 ] - ( xx [ 38 ] * xx [
442 ] * xx [ 38 ] + xx [ 442 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] + xx [
45 ] ; motionData [ 329 ] = xx [ 452 ] ; motionData [ 330 ] = xx [ 453 ] ;
motionData [ 331 ] = xx [ 454 ] ; motionData [ 332 ] = xx [ 259 ] ;
motionData [ 333 ] = xx [ 465 ] ; motionData [ 334 ] = xx [ 260 ] ;
motionData [ 335 ] = xx [ 462 ] ; motionData [ 336 ] = xx [ 470 ] ;
motionData [ 337 ] = xx [ 471 ] ; motionData [ 338 ] = xx [ 472 ] ;
motionData [ 339 ] = xx [ 473 ] ; motionData [ 340 ] = xx [ 474 ] + xx [ 465
] ; motionData [ 341 ] = xx [ 475 ] + xx [ 260 ] ; motionData [ 342 ] = xx [
476 ] + xx [ 462 ] ; motionData [ 343 ] = xx [ 466 ] ; motionData [ 344 ] =
xx [ 467 ] ; motionData [ 345 ] = xx [ 468 ] ; motionData [ 346 ] = xx [ 469
] ; motionData [ 347 ] = xx [ 477 ] + xx [ 377 ] ; motionData [ 348 ] = xx [
478 ] + xx [ 378 ] ; motionData [ 349 ] = xx [ 479 ] + xx [ 374 ] ;
motionData [ 350 ] = xx [ 276 ] * xx [ 266 ] - xx [ 265 ] * xx [ 274 ] ;
motionData [ 351 ] = - ( xx [ 266 ] * xx [ 278 ] + xx [ 265 ] * xx [ 273 ] )
; motionData [ 352 ] = xx [ 266 ] * xx [ 273 ] - xx [ 265 ] * xx [ 278 ] ;
motionData [ 353 ] = xx [ 276 ] * xx [ 265 ] + xx [ 266 ] * xx [ 274 ] ;
motionData [ 354 ] = xx [ 284 ] - ( xx [ 34 ] * xx [ 257 ] * xx [ 266 ] + xx
[ 269 ] ) + xx [ 229 ] ; motionData [ 355 ] = xx [ 285 ] - xx [ 34 ] * xx [
257 ] * xx [ 265 ] + xx [ 271 ] ; motionData [ 356 ] = xx [ 286 ] - ( ( xx [
265 ] * xx [ 265 ] * xx [ 286 ] + xx [ 286 ] * xx [ 266 ] * xx [ 266 ] ) * xx
[ 34 ] + xx [ 272 ] ) + xx [ 26 ] ; motionData [ 357 ] = xx [ 463 ] ;
motionData [ 358 ] = xx [ 464 ] ; motionData [ 359 ] = xx [ 480 ] ;
motionData [ 360 ] = xx [ 117 ] ; motionData [ 361 ] = xx [ 482 ] ;
motionData [ 362 ] = xx [ 122 ] ; motionData [ 363 ] = xx [ 113 ] ;
motionData [ 364 ] = xx [ 487 ] ; motionData [ 365 ] = xx [ 488 ] ;
motionData [ 366 ] = xx [ 489 ] ; motionData [ 367 ] = xx [ 490 ] ;
motionData [ 368 ] = xx [ 126 ] ; motionData [ 369 ] = xx [ 481 ] ;
motionData [ 370 ] = xx [ 483 ] ; motionData [ 371 ] = xx [ 491 ] ;
motionData [ 372 ] = xx [ 492 ] ; motionData [ 373 ] = xx [ 493 ] ;
motionData [ 374 ] = xx [ 494 ] ; motionData [ 375 ] = xx [ 484 ] ;
motionData [ 376 ] = xx [ 485 ] ; motionData [ 377 ] = xx [ 486 ] ;
motionData [ 378 ] = xx [ 38 ] * xx [ 492 ] - xx [ 493 ] * xx [ 39 ] ;
motionData [ 379 ] = xx [ 494 ] * xx [ 39 ] - xx [ 38 ] * xx [ 491 ] ;
motionData [ 380 ] = xx [ 491 ] * xx [ 39 ] + xx [ 38 ] * xx [ 494 ] ;
motionData [ 381 ] = - ( xx [ 38 ] * xx [ 493 ] + xx [ 492 ] * xx [ 39 ] ) ;
motionData [ 382 ] = xx [ 484 ] - xx [ 34 ] * xx [ 495 ] * xx [ 39 ] + xx [
42 ] ; motionData [ 383 ] = xx [ 485 ] - xx [ 34 ] * xx [ 495 ] * xx [ 38 ] -
xx [ 43 ] ; motionData [ 384 ] = xx [ 486 ] - ( xx [ 38 ] * xx [ 486 ] * xx [
38 ] + xx [ 486 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] + xx [ 45 ] ;
motionData [ 385 ] = xx [ 496 ] ; motionData [ 386 ] = xx [ 497 ] ;
motionData [ 387 ] = xx [ 498 ] ; motionData [ 388 ] = xx [ 499 ] ;
motionData [ 389 ] = xx [ 294 ] ; motionData [ 390 ] = xx [ 293 ] ;
motionData [ 391 ] = xx [ 504 ] ; motionData [ 392 ] = xx [ 505 ] ;
motionData [ 393 ] = xx [ 506 ] ; motionData [ 394 ] = xx [ 507 ] ;
motionData [ 395 ] = xx [ 508 ] ; motionData [ 396 ] = xx [ 509 ] + xx [ 294
] ; motionData [ 397 ] = xx [ 510 ] + xx [ 293 ] ; motionData [ 398 ] = xx [
511 ] + xx [ 504 ] ; motionData [ 399 ] = xx [ 512 ] ; motionData [ 400 ] =
xx [ 513 ] ; motionData [ 401 ] = xx [ 514 ] ; motionData [ 402 ] = xx [ 515
] ; motionData [ 403 ] = xx [ 516 ] + xx [ 377 ] ; motionData [ 404 ] = xx [
517 ] + xx [ 378 ] ; motionData [ 405 ] = xx [ 518 ] + xx [ 374 ] ;
motionData [ 406 ] = xx [ 310 ] * xx [ 298 ] - xx [ 4 ] * xx [ 308 ] ;
motionData [ 407 ] = - ( xx [ 298 ] * xx [ 312 ] + xx [ 4 ] * xx [ 307 ] ) ;
motionData [ 408 ] = xx [ 298 ] * xx [ 307 ] - xx [ 4 ] * xx [ 312 ] ;
motionData [ 409 ] = xx [ 310 ] * xx [ 4 ] + xx [ 298 ] * xx [ 308 ] ;
motionData [ 410 ] = xx [ 318 ] - ( xx [ 34 ] * xx [ 290 ] * xx [ 298 ] + xx
[ 302 ] ) + xx [ 291 ] ; motionData [ 411 ] = xx [ 319 ] - xx [ 34 ] * xx [
290 ] * xx [ 4 ] + xx [ 304 ] ; motionData [ 412 ] = xx [ 320 ] - ( ( xx [ 4
] * xx [ 4 ] * xx [ 320 ] + xx [ 320 ] * xx [ 298 ] * xx [ 298 ] ) * xx [ 34
] + xx [ 306 ] ) + xx [ 301 ] ; motionData [ 413 ] = xx [ 519 ] ; motionData
[ 414 ] = xx [ 520 ] ; motionData [ 415 ] = xx [ 521 ] ; motionData [ 416 ] =
xx [ 522 ] ; motionData [ 417 ] = xx [ 525 ] ; motionData [ 418 ] = xx [ 135
] ; motionData [ 419 ] = xx [ 139 ] ; motionData [ 420 ] = xx [ 526 ] ;
motionData [ 421 ] = xx [ 527 ] ; motionData [ 422 ] = xx [ 528 ] ;
motionData [ 423 ] = xx [ 529 ] ; motionData [ 424 ] = xx [ 523 ] ;
motionData [ 425 ] = xx [ 524 ] ; motionData [ 426 ] = xx [ 530 ] ;
motionData [ 427 ] = xx [ 531 ] ; motionData [ 428 ] = xx [ 532 ] ;
motionData [ 429 ] = xx [ 533 ] ; motionData [ 430 ] = xx [ 534 ] ;
motionData [ 431 ] = xx [ 535 ] ; motionData [ 432 ] = xx [ 536 ] ;
motionData [ 433 ] = xx [ 537 ] ; motionData [ 434 ] = xx [ 38 ] * xx [ 532 ]
- xx [ 533 ] * xx [ 39 ] ; motionData [ 435 ] = xx [ 534 ] * xx [ 39 ] - xx [
38 ] * xx [ 531 ] ; motionData [ 436 ] = xx [ 531 ] * xx [ 39 ] + xx [ 38 ] *
xx [ 534 ] ; motionData [ 437 ] = - ( xx [ 38 ] * xx [ 533 ] + xx [ 532 ] *
xx [ 39 ] ) ; motionData [ 438 ] = xx [ 535 ] - xx [ 34 ] * xx [ 538 ] * xx [
39 ] + xx [ 42 ] ; motionData [ 439 ] = xx [ 536 ] - xx [ 34 ] * xx [ 538 ] *
xx [ 38 ] - xx [ 43 ] ; motionData [ 440 ] = xx [ 537 ] - ( xx [ 38 ] * xx [
537 ] * xx [ 38 ] + xx [ 537 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] + xx [
45 ] ; motionData [ 441 ] = xx [ 539 ] ; motionData [ 442 ] = xx [ 540 ] ;
motionData [ 443 ] = xx [ 541 ] ; motionData [ 444 ] = xx [ 542 ] ;
motionData [ 445 ] = xx [ 553 ] ; motionData [ 446 ] = xx [ 166 ] ;
motionData [ 447 ] = xx [ 550 ] ; motionData [ 448 ] = xx [ 554 ] ;
motionData [ 449 ] = xx [ 555 ] ; motionData [ 450 ] = xx [ 556 ] ;
motionData [ 451 ] = xx [ 557 ] ; motionData [ 452 ] = xx [ 558 ] + xx [ 553
] ; motionData [ 453 ] = xx [ 559 ] + xx [ 166 ] ; motionData [ 454 ] = xx [
560 ] + xx [ 550 ] ; motionData [ 455 ] = xx [ 561 ] ; motionData [ 456 ] =
xx [ 562 ] ; motionData [ 457 ] = xx [ 563 ] ; motionData [ 458 ] = xx [ 564
] ; motionData [ 459 ] = xx [ 565 ] + xx [ 377 ] ; motionData [ 460 ] = xx [
566 ] + xx [ 378 ] ; motionData [ 461 ] = xx [ 567 ] + xx [ 374 ] ;
motionData [ 462 ] = xx [ 180 ] * xx [ 169 ] - xx [ 168 ] * xx [ 178 ] ;
motionData [ 463 ] = - ( xx [ 169 ] * xx [ 182 ] + xx [ 168 ] * xx [ 177 ] )
; motionData [ 464 ] = xx [ 169 ] * xx [ 177 ] - xx [ 168 ] * xx [ 182 ] ;
motionData [ 465 ] = xx [ 180 ] * xx [ 168 ] + xx [ 169 ] * xx [ 178 ] ;
motionData [ 466 ] = xx [ 188 ] - ( xx [ 34 ] * xx [ 379 ] * xx [ 169 ] + xx
[ 173 ] ) + xx [ 165 ] ; motionData [ 467 ] = xx [ 189 ] - xx [ 34 ] * xx [
379 ] * xx [ 168 ] + xx [ 175 ] ; motionData [ 468 ] = xx [ 190 ] - ( ( xx [
168 ] * xx [ 168 ] * xx [ 190 ] + xx [ 190 ] * xx [ 169 ] * xx [ 169 ] ) * xx
[ 34 ] + xx [ 176 ] ) + xx [ 26 ] ; motionData [ 469 ] = xx [ 380 ] ;
motionData [ 470 ] = xx [ 381 ] ; motionData [ 471 ] = xx [ 382 ] ;
motionData [ 472 ] = xx [ 96 ] ; motionData [ 473 ] = xx [ 552 ] ; motionData
[ 474 ] = xx [ 77 ] ; motionData [ 475 ] = xx [ 79 ] ; motionData [ 476 ] =
xx [ 572 ] ; motionData [ 477 ] = xx [ 573 ] ; motionData [ 478 ] = xx [ 574
] ; motionData [ 479 ] = xx [ 575 ] ; motionData [ 480 ] = xx [ 143 ] ;
motionData [ 481 ] = xx [ 154 ] ; motionData [ 482 ] = xx [ 551 ] ;
motionData [ 483 ] = xx [ 568 ] ; motionData [ 484 ] = xx [ 569 ] ;
motionData [ 485 ] = xx [ 570 ] ; motionData [ 486 ] = xx [ 571 ] ;
motionData [ 487 ] = xx [ 576 ] ; motionData [ 488 ] = xx [ 577 ] ;
motionData [ 489 ] = xx [ 578 ] ; motionData [ 490 ] = xx [ 38 ] * xx [ 569 ]
- xx [ 570 ] * xx [ 39 ] ; motionData [ 491 ] = xx [ 571 ] * xx [ 39 ] - xx [
38 ] * xx [ 568 ] ; motionData [ 492 ] = xx [ 568 ] * xx [ 39 ] + xx [ 38 ] *
xx [ 571 ] ; motionData [ 493 ] = - ( xx [ 38 ] * xx [ 570 ] + xx [ 569 ] *
xx [ 39 ] ) ; motionData [ 494 ] = xx [ 576 ] - xx [ 34 ] * xx [ 579 ] * xx [
39 ] + xx [ 42 ] ; motionData [ 495 ] = xx [ 577 ] - xx [ 34 ] * xx [ 579 ] *
xx [ 38 ] - xx [ 43 ] ; motionData [ 496 ] = xx [ 578 ] - ( xx [ 38 ] * xx [
578 ] * xx [ 38 ] + xx [ 578 ] * xx [ 39 ] * xx [ 39 ] ) * xx [ 34 ] + xx [
45 ] ; motionData [ 497 ] = xx [ 582 ] ; motionData [ 498 ] = xx [ 583 ] ;
motionData [ 499 ] = xx [ 584 ] ; motionData [ 500 ] = xx [ 585 ] ;
motionData [ 501 ] = xx [ 581 ] ; motionData [ 502 ] = xx [ 1 ] ; motionData
[ 503 ] = xx [ 586 ] ; motionData [ 504 ] = xx [ 587 ] ; motionData [ 505 ] =
xx [ 588 ] ; motionData [ 506 ] = xx [ 589 ] ; motionData [ 507 ] = xx [ 590
] ; motionData [ 508 ] = xx [ 580 ] ; motionData [ 509 ] = xx [ 597 ] ;
motionData [ 510 ] = xx [ 594 ] ; motionData [ 511 ] = xx [ 595 ] ;
motionData [ 512 ] = xx [ 596 ] ; motionData [ 513 ] = xx [ 598 ] ;
motionData [ 514 ] = xx [ 599 ] ; motionData [ 515 ] = xx [ 603 ] ;
motionData [ 516 ] = xx [ 604 ] ; motionData [ 517 ] = xx [ 600 ] ;
motionData [ 518 ] = xx [ 609 ] ; motionData [ 519 ] = xx [ 610 ] ;
motionData [ 520 ] = xx [ 611 ] ; motionData [ 521 ] = xx [ 612 ] ;
motionData [ 522 ] = xx [ 601 ] ; motionData [ 523 ] = xx [ 602 ] ;
motionData [ 524 ] = xx [ 605 ] ; motionData [ 525 ] = xx [ 613 ] ;
motionData [ 526 ] = xx [ 614 ] ; motionData [ 527 ] = xx [ 615 ] ;
motionData [ 528 ] = xx [ 616 ] ; motionData [ 529 ] = xx [ 617 ] ;
motionData [ 530 ] = xx [ 618 ] ; motionData [ 531 ] = xx [ 606 ] ;
motionData [ 532 ] = xx [ 72 ] * xx [ 613 ] - xx [ 616 ] * xx [ 75 ] ;
motionData [ 533 ] = xx [ 72 ] * xx [ 614 ] + xx [ 615 ] * xx [ 75 ] ;
motionData [ 534 ] = xx [ 72 ] * xx [ 615 ] - xx [ 614 ] * xx [ 75 ] ;
motionData [ 535 ] = xx [ 613 ] * xx [ 75 ] + xx [ 72 ] * xx [ 616 ] ;
motionData [ 536 ] = xx [ 619 ] + xx [ 617 ] ; motionData [ 537 ] = xx [ 620
] + xx [ 618 ] ; motionData [ 538 ] = xx [ 621 ] + xx [ 606 ] ; motionData [
539 ] = xx [ 0 ] ; motionData [ 540 ] = xx [ 0 ] ; motionData [ 541 ] = xx [
0 ] ; motionData [ 542 ] = state [ 3 ] ; motionData [ 543 ] = state [ 4 ] ;
motionData [ 544 ] = state [ 5 ] ; motionData [ 545 ] = xx [ 5 ] ; motionData
[ 546 ] = xx [ 6 ] ; motionData [ 547 ] = xx [ 7 ] ; motionData [ 548 ] = xx
[ 8 ] ; motionData [ 549 ] = xx [ 16 ] ; motionData [ 550 ] = xx [ 10 ] ;
motionData [ 551 ] = xx [ 11 ] ; motionData [ 552 ] = xx [ 12 ] ; motionData
[ 553 ] = xx [ 14 ] ; motionData [ 554 ] = xx [ 622 ] ; motionData [ 555 ] =
xx [ 13 ] ; motionData [ 556 ] = xx [ 624 ] ; motionData [ 557 ] = xx [ 17 ]
; motionData [ 558 ] = xx [ 18 ] ; motionData [ 559 ] = xx [ 15 ] ;
motionData [ 560 ] = xx [ 338 ] ; motionData [ 561 ] = xx [ 37 ] ; motionData
[ 562 ] = xx [ 335 ] ; motionData [ 563 ] = xx [ 607 ] ; motionData [ 564 ] =
xx [ 40 ] ; motionData [ 565 ] = xx [ 336 ] ; motionData [ 566 ] = xx [ 337 ]
; motionData [ 567 ] = xx [ 346 ] ; motionData [ 568 ] = xx [ 347 ] ;
motionData [ 569 ] = xx [ 348 ] ; motionData [ 570 ] = xx [ 608 ] ;
motionData [ 571 ] = xx [ 623 ] ; motionData [ 572 ] = xx [ 63 ] ; motionData
[ 573 ] = xx [ 64 ] ; motionData [ 574 ] = xx [ 65 ] ; motionData [ 575 ] =
xx [ 68 ] ; motionData [ 576 ] = xx [ 69 ] ; motionData [ 577 ] = xx [ 66 ] ;
motionData [ 578 ] = xx [ 371 ] ; motionData [ 579 ] = xx [ 67 ] ; motionData
[ 580 ] = xx [ 71 ] ; motionData [ 581 ] = xx [ 68 ] - ( xx [ 82 ] * xx [ 361
] + xx [ 362 ] * xx [ 83 ] ) * xx [ 34 ] ; motionData [ 582 ] = xx [ 69 ] +
xx [ 34 ] * ( xx [ 82 ] * xx [ 362 ] - xx [ 361 ] * xx [ 83 ] ) ; motionData
[ 583 ] = xx [ 66 ] - state [ 33 ] ; motionData [ 584 ] = xx [ 363 ] - ( xx [
82 ] * xx [ 373 ] + xx [ 383 ] * xx [ 83 ] ) * xx [ 34 ] - xx [ 81 ] * state
[ 33 ] ; motionData [ 585 ] = xx [ 372 ] + xx [ 34 ] * ( xx [ 82 ] * xx [ 383
] - xx [ 373 ] * xx [ 83 ] ) - xx [ 85 ] * state [ 33 ] ; motionData [ 586 ]
= xx [ 627 ] + xx [ 71 ] ; motionData [ 587 ] = xx [ 628 ] ; motionData [ 588
] = xx [ 629 ] ; motionData [ 589 ] = xx [ 630 ] + state [ 35 ] ; motionData
[ 590 ] = xx [ 631 ] - xx [ 97 ] * state [ 35 ] ; motionData [ 591 ] = xx [
632 ] + xx [ 93 ] * state [ 35 ] ; motionData [ 592 ] = xx [ 633 ] ;
motionData [ 593 ] = xx [ 100 ] ; motionData [ 594 ] = xx [ 101 ] ;
motionData [ 595 ] = xx [ 102 ] - state [ 37 ] ; motionData [ 596 ] = xx [
634 ] + xx [ 111 ] * state [ 37 ] ; motionData [ 597 ] = xx [ 635 ] + xx [
109 ] * state [ 37 ] ; motionData [ 598 ] = xx [ 636 ] ; motionData [ 599 ] =
xx [ 118 ] ; motionData [ 600 ] = xx [ 119 ] ; motionData [ 601 ] = xx [ 120
] - state [ 39 ] ; motionData [ 602 ] = xx [ 637 ] + xx [ 129 ] * state [ 39
] ; motionData [ 603 ] = xx [ 638 ] - xx [ 127 ] * state [ 39 ] ; motionData
[ 604 ] = xx [ 639 ] ; motionData [ 605 ] = xx [ 131 ] ; motionData [ 606 ] =
xx [ 132 ] ; motionData [ 607 ] = xx [ 133 ] + state [ 41 ] ; motionData [
608 ] = xx [ 640 ] + xx [ 144 ] * state [ 41 ] ; motionData [ 609 ] = xx [
641 ] + xx [ 142 ] * state [ 41 ] ; motionData [ 610 ] = xx [ 642 ] ;
motionData [ 611 ] = xx [ 146 ] ; motionData [ 612 ] = xx [ 147 ] ;
motionData [ 613 ] = xx [ 103 ] ; motionData [ 614 ] = xx [ 643 ] ;
motionData [ 615 ] = xx [ 121 ] ; motionData [ 616 ] = xx [ 645 ] ;
motionData [ 617 ] = xx [ 148 ] ; motionData [ 618 ] = xx [ 149 ] ;
motionData [ 619 ] = xx [ 134 ] ; motionData [ 620 ] = xx [ 544 ] ;
motionData [ 621 ] = xx [ 171 ] ; motionData [ 622 ] = xx [ 384 ] ;
motionData [ 623 ] = xx [ 591 ] + xx [ 543 ] ; motionData [ 624 ] = xx [ 592
] + xx [ 548 ] ; motionData [ 625 ] = xx [ 593 ] + state [ 52 ] ; motionData
[ 626 ] = xx [ 646 ] + xx [ 545 ] ; motionData [ 627 ] = xx [ 647 ] + xx [
546 ] ; motionData [ 628 ] = xx [ 648 ] + xx [ 547 ] ; motionData [ 629 ] =
xx [ 184 ] ; motionData [ 630 ] = xx [ 185 ] ; motionData [ 631 ] = xx [ 170
] ; motionData [ 632 ] = xx [ 652 ] ; motionData [ 633 ] = xx [ 186 ] ;
motionData [ 634 ] = xx [ 654 ] ; motionData [ 635 ] = xx [ 187 ] ;
motionData [ 636 ] = xx [ 385 ] ; motionData [ 637 ] = xx [ 157 ] ;
motionData [ 638 ] = xx [ 411 ] ; motionData [ 639 ] = xx [ 198 ] ;
motionData [ 640 ] = xx [ 408 ] ; motionData [ 641 ] = xx [ 649 ] + xx [ 410
] ; motionData [ 642 ] = xx [ 650 ] + xx [ 549 ] ; motionData [ 643 ] = xx [
651 ] + state [ 63 ] ; motionData [ 644 ] = xx [ 655 ] + xx [ 412 ] ;
motionData [ 645 ] = xx [ 656 ] + xx [ 413 ] ; motionData [ 646 ] = xx [ 657
] + xx [ 414 ] ; motionData [ 647 ] = xx [ 212 ] ; motionData [ 648 ] = xx [
213 ] ; motionData [ 649 ] = xx [ 197 ] ; motionData [ 650 ] = xx [ 661 ] ;
motionData [ 651 ] = xx [ 214 ] ; motionData [ 652 ] = xx [ 663 ] ;
motionData [ 653 ] = xx [ 324 ] ; motionData [ 654 ] = xx [ 325 ] ;
motionData [ 655 ] = xx [ 215 ] ; motionData [ 656 ] = xx [ 329 ] ;
motionData [ 657 ] = xx [ 233 ] ; motionData [ 658 ] = xx [ 326 ] ;
motionData [ 659 ] = xx [ 664 ] + xx [ 328 ] ; motionData [ 660 ] = xx [ 665
] + xx [ 330 ] ; motionData [ 661 ] = xx [ 666 ] + state [ 74 ] ; motionData
[ 662 ] = xx [ 667 ] + xx [ 658 ] ; motionData [ 663 ] = xx [ 668 ] + xx [
659 ] ; motionData [ 664 ] = xx [ 669 ] + xx [ 660 ] ; motionData [ 665 ] =
xx [ 247 ] ; motionData [ 666 ] = xx [ 248 ] ; motionData [ 667 ] = xx [ 232
] ; motionData [ 668 ] = xx [ 673 ] ; motionData [ 669 ] = xx [ 249 ] ;
motionData [ 670 ] = xx [ 675 ] ; motionData [ 671 ] = xx [ 327 ] ;
motionData [ 672 ] = xx [ 409 ] ; motionData [ 673 ] = xx [ 250 ] ;
motionData [ 674 ] = xx [ 458 ] ; motionData [ 675 ] = xx [ 267 ] ;
motionData [ 676 ] = xx [ 455 ] ; motionData [ 677 ] = xx [ 670 ] + xx [ 457
] ; motionData [ 678 ] = xx [ 671 ] + xx [ 625 ] ; motionData [ 679 ] = xx [
672 ] + state [ 85 ] ; motionData [ 680 ] = xx [ 676 ] + xx [ 459 ] ;
motionData [ 681 ] = xx [ 677 ] + xx [ 460 ] ; motionData [ 682 ] = xx [ 678
] + xx [ 461 ] ; motionData [ 683 ] = xx [ 280 ] ; motionData [ 684 ] = xx [
281 ] ; motionData [ 685 ] = xx [ 264 ] ; motionData [ 686 ] = xx [ 682 ] ;
motionData [ 687 ] = xx [ 282 ] ; motionData [ 688 ] = xx [ 684 ] ;
motionData [ 689 ] = xx [ 283 ] ; motionData [ 690 ] = xx [ 456 ] ;
motionData [ 691 ] = xx [ 28 ] ; motionData [ 692 ] = xx [ 503 ] ; motionData
[ 693 ] = xx [ 300 ] ; motionData [ 694 ] = xx [ 500 ] ; motionData [ 695 ] =
xx [ 685 ] + xx [ 502 ] ; motionData [ 696 ] = xx [ 686 ] + xx [ 626 ] ;
motionData [ 697 ] = xx [ 687 ] + state [ 96 ] ; motionData [ 698 ] = xx [
688 ] + xx [ 679 ] ; motionData [ 699 ] = xx [ 689 ] + xx [ 680 ] ;
motionData [ 700 ] = xx [ 690 ] + xx [ 681 ] ; } static size_t
computeAssemblyError_0 ( const double * rtdv , const double * state , const
double * motionData , double * error ) { double xx [ 13 ] ; ( void ) rtdv ; (
void ) state ; xx [ 0 ] = motionData [ 231 ] ; xx [ 1 ] = motionData [ 232 ]
; xx [ 2 ] = motionData [ 233 ] ; xx [ 3 ] = motionData [ 234 ] ; xx [ 4 ] =
- 7.599121945184391e-12 ; xx [ 5 ] = 5.036130209737022e-12 ; xx [ 6 ] = -
5.192027881355888e-12 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 7 ) ; xx [
0 ] = motionData [ 196 ] ; xx [ 1 ] = motionData [ 197 ] ; xx [ 2 ] =
motionData [ 198 ] ; xx [ 3 ] = motionData [ 199 ] ; xx [ 4 ] =
3.641924106626229e-8 ; xx [ 5 ] = 0.04574999999998041 ; xx [ 6 ] =
2.92603149291605e-7 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 10 ) ; error
[ 0 ] = xx [ 7 ] + motionData [ 235 ] - ( xx [ 10 ] + motionData [ 200 ] ) ;
error [ 1 ] = xx [ 8 ] + motionData [ 236 ] - ( xx [ 11 ] + motionData [ 201
] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 237 ] - ( xx [ 12 ] + motionData
[ 202 ] ) ; return 3 ; } static size_t computeAssemblyError_1 ( const double
* rtdv , const double * state , const double * motionData , double * error )
{ double xx [ 13 ] ; ( void ) rtdv ; ( void ) state ; xx [ 0 ] = motionData [
287 ] ; xx [ 1 ] = motionData [ 288 ] ; xx [ 2 ] = motionData [ 289 ] ; xx [
3 ] = motionData [ 290 ] ; xx [ 4 ] = - 7.599121945184391e-12 ; xx [ 5 ] =
5.036130209737022e-12 ; xx [ 6 ] = - 5.192027881355888e-12 ;
pm_math_quatXform ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = motionData [ 280
] ; xx [ 1 ] = motionData [ 281 ] ; xx [ 2 ] = motionData [ 282 ] ; xx [ 3 ]
= motionData [ 283 ] ; xx [ 4 ] = 3.641924106626229e-8 ; xx [ 5 ] =
0.04574999999998041 ; xx [ 6 ] = 2.92603149291605e-7 ; pm_math_quatXform ( xx
+ 0 , xx + 4 , xx + 10 ) ; error [ 0 ] = xx [ 7 ] + motionData [ 291 ] - ( xx
[ 10 ] + motionData [ 284 ] ) ; error [ 1 ] = xx [ 8 ] + motionData [ 292 ] -
( xx [ 11 ] + motionData [ 285 ] ) ; error [ 2 ] = xx [ 9 ] + motionData [
293 ] - ( xx [ 12 ] + motionData [ 286 ] ) ; return 3 ; } static size_t
computeAssemblyError_2 ( const double * rtdv , const double * state , const
double * motionData , double * error ) { double xx [ 13 ] ; ( void ) rtdv ; (
void ) state ; xx [ 0 ] = motionData [ 343 ] ; xx [ 1 ] = motionData [ 344 ]
; xx [ 2 ] = motionData [ 345 ] ; xx [ 3 ] = motionData [ 346 ] ; xx [ 4 ] =
- 7.599121945184391e-12 ; xx [ 5 ] = 5.036130209737022e-12 ; xx [ 6 ] = -
5.192027881355888e-12 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 7 ) ; xx [
0 ] = motionData [ 336 ] ; xx [ 1 ] = motionData [ 337 ] ; xx [ 2 ] =
motionData [ 338 ] ; xx [ 3 ] = motionData [ 339 ] ; xx [ 4 ] =
3.641924106626229e-8 ; xx [ 5 ] = 0.04574999999998041 ; xx [ 6 ] =
2.92603149291605e-7 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 10 ) ; error
[ 0 ] = xx [ 7 ] + motionData [ 347 ] - ( xx [ 10 ] + motionData [ 340 ] ) ;
error [ 1 ] = xx [ 8 ] + motionData [ 348 ] - ( xx [ 11 ] + motionData [ 341
] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 349 ] - ( xx [ 12 ] + motionData
[ 342 ] ) ; return 3 ; } static size_t computeAssemblyError_3 ( const double
* rtdv , const double * state , const double * motionData , double * error )
{ double xx [ 13 ] ; ( void ) rtdv ; ( void ) state ; xx [ 0 ] = motionData [
399 ] ; xx [ 1 ] = motionData [ 400 ] ; xx [ 2 ] = motionData [ 401 ] ; xx [
3 ] = motionData [ 402 ] ; xx [ 4 ] = - 7.599121945184391e-12 ; xx [ 5 ] =
5.036130209737022e-12 ; xx [ 6 ] = - 5.192027881355888e-12 ;
pm_math_quatXform ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = motionData [ 392
] ; xx [ 1 ] = motionData [ 393 ] ; xx [ 2 ] = motionData [ 394 ] ; xx [ 3 ]
= motionData [ 395 ] ; xx [ 4 ] = 3.641924106626229e-8 ; xx [ 5 ] =
0.04574999999998041 ; xx [ 6 ] = 2.92603149291605e-7 ; pm_math_quatXform ( xx
+ 0 , xx + 4 , xx + 10 ) ; error [ 0 ] = xx [ 7 ] + motionData [ 403 ] - ( xx
[ 10 ] + motionData [ 396 ] ) ; error [ 1 ] = xx [ 8 ] + motionData [ 404 ] -
( xx [ 11 ] + motionData [ 397 ] ) ; error [ 2 ] = xx [ 9 ] + motionData [
405 ] - ( xx [ 12 ] + motionData [ 398 ] ) ; return 3 ; } static size_t
computeAssemblyError_4 ( const double * rtdv , const double * state , const
double * motionData , double * error ) { double xx [ 13 ] ; ( void ) rtdv ; (
void ) state ; xx [ 0 ] = motionData [ 455 ] ; xx [ 1 ] = motionData [ 456 ]
; xx [ 2 ] = motionData [ 457 ] ; xx [ 3 ] = motionData [ 458 ] ; xx [ 4 ] =
- 7.599121945184391e-12 ; xx [ 5 ] = 5.036130209737022e-12 ; xx [ 6 ] = -
5.192027881355888e-12 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 7 ) ; xx [
0 ] = motionData [ 448 ] ; xx [ 1 ] = motionData [ 449 ] ; xx [ 2 ] =
motionData [ 450 ] ; xx [ 3 ] = motionData [ 451 ] ; xx [ 4 ] =
3.641924106626229e-8 ; xx [ 5 ] = 0.04574999999998041 ; xx [ 6 ] =
2.92603149291605e-7 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 10 ) ; error
[ 0 ] = xx [ 7 ] + motionData [ 459 ] - ( xx [ 10 ] + motionData [ 452 ] ) ;
error [ 1 ] = xx [ 8 ] + motionData [ 460 ] - ( xx [ 11 ] + motionData [ 453
] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 461 ] - ( xx [ 12 ] + motionData
[ 454 ] ) ; return 3 ; } size_t PlatformAssem_f0ca4364_1_computeAssemblyError
( const void * mech , const double * rtdv , size_t constraintIdx , const
double * state , const double * motionData , double * error ) { ( void ) mech
; ( void ) rtdv ; ( void ) state ; ( void ) motionData ; ( void ) error ; (
void ) state ; switch ( constraintIdx ) { case 0 : return
computeAssemblyError_0 ( rtdv , state , motionData , error ) ; case 1 :
return computeAssemblyError_1 ( rtdv , state , motionData , error ) ; case 2
: return computeAssemblyError_2 ( rtdv , state , motionData , error ) ; case
3 : return computeAssemblyError_3 ( rtdv , state , motionData , error ) ;
case 4 : return computeAssemblyError_4 ( rtdv , state , motionData , error )
; } return 0 ; } static size_t computeAssemblyJacobian_0 ( const double *
rtdv , const double * state , const double * motionData , double * J ) {
double xx [ 165 ] ; ( void ) rtdv ; xx [ 0 ] = 0.0 ; xx [ 1 ] =
0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 12 ] ; xx
[ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = 0.389581900177037 ; xx [ 6 ] = sin ( xx
[ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] =
0.5901074779979933 ; xx [ 8 ] = 0.5901036711621462 ; xx [ 9 ] = xx [ 7 ] * xx
[ 4 ] + xx [ 8 ] * xx [ 6 ] ; xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] = xx [ 8 ] *
xx [ 4 ] - xx [ 7 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1 ] *
xx [ 6 ] ; xx [ 1 ] = - xx [ 7 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 11 ] ; xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = motionData [
266 ] ; xx [ 17 ] = motionData [ 267 ] ; xx [ 18 ] = motionData [ 268 ] ; xx
[ 19 ] = motionData [ 269 ] ; pm_math_quatCompose ( xx + 12 , xx + 16 , xx +
20 ) ; xx [ 4 ] = 2.0 ; xx [ 5 ] = 1.0 ; xx [ 12 ] = xx [ 4 ] * ( motionData
[ 266 ] * motionData [ 268 ] - motionData [ 267 ] * motionData [ 269 ] ) ; xx
[ 13 ] = - ( ( motionData [ 266 ] * motionData [ 267 ] + motionData [ 268 ] *
motionData [ 269 ] ) * xx [ 4 ] ) ; xx [ 14 ] = ( motionData [ 267 ] *
motionData [ 267 ] + motionData [ 268 ] * motionData [ 268 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 15 ] = 5.192027881355888e-12 ; xx [ 16 ] = - xx
[ 6 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_cross3 ( xx
+ 12 , xx + 16 , xx + 24 ) ; pm_math_quatXform ( xx + 20 , xx + 24 , xx + 12
) ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = xx [ 11 ] ; xx [ 21 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 270 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
271 ] ; xx [ 22 ] = xx [ 11 ] * motionData [ 271 ] - xx [ 9 ] * motionData [
270 ] ; xx [ 23 ] = - xx [ 1 ] ; xx [ 24 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [
22 ] ; pm_math_cross3 ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 19 ] =
0.02520954632904373 ; xx [ 20 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 21 ] = xx [ 19
] * xx [ 7 ] ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [ 24 ] = cos ( xx [
23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 24 ] * motionData [
15 ] - xx [ 25 ] * motionData [ 16 ] ; xx [ 30 ] = - ( xx [ 24 ] * motionData
[ 14 ] + xx [ 25 ] * motionData [ 17 ] ) ; xx [ 31 ] = xx [ 25 ] * motionData
[ 14 ] - xx [ 24 ] * motionData [ 17 ] ; xx [ 32 ] = xx [ 25 ] * motionData [
15 ] + xx [ 24 ] * motionData [ 16 ] ; xx [ 33 ] = motionData [ 259 ] ; xx [
34 ] = motionData [ 260 ] ; xx [ 35 ] = motionData [ 261 ] ; xx [ 36 ] =
motionData [ 262 ] ; pm_math_quatCompose ( xx + 29 , xx + 33 , xx + 37 ) ; xx
[ 29 ] = xx [ 4 ] * ( motionData [ 260 ] * motionData [ 262 ] - motionData [
259 ] * motionData [ 261 ] ) ; xx [ 30 ] = ( motionData [ 259 ] * motionData
[ 260 ] + motionData [ 261 ] * motionData [ 262 ] ) * xx [ 4 ] ; xx [ 31 ] =
xx [ 5 ] - ( motionData [ 260 ] * motionData [ 260 ] + motionData [ 261 ] *
motionData [ 261 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 29 , xx + 16 , xx +
32 ) ; pm_math_quatXform ( xx + 37 , xx + 32 , xx + 29 ) ; xx [ 23 ] = xx [
25 ] * motionData [ 264 ] - xx [ 24 ] * motionData [ 263 ] ; xx [ 32 ] =
7.748428954013064e-12 ; xx [ 33 ] = 5.376764528053357e-12 ; xx [ 34 ] = xx [
32 ] * xx [ 24 ] - xx [ 33 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 25 ] *
xx [ 23 ] - ( motionData [ 264 ] + xx [ 4 ] * xx [ 34 ] * xx [ 25 ] ) - xx [
33 ] ; xx [ 36 ] = motionData [ 15 ] ; xx [ 37 ] = motionData [ 16 ] ; xx [
38 ] = motionData [ 17 ] ; xx [ 25 ] = motionData [ 263 ] + xx [ 4 ] * xx [
24 ] * xx [ 23 ] - xx [ 4 ] * xx [ 34 ] * xx [ 24 ] + xx [ 32 ] ; xx [ 23 ] =
xx [ 25 ] * motionData [ 17 ] ; xx [ 24 ] = xx [ 35 ] * motionData [ 17 ] ;
xx [ 32 ] = xx [ 25 ] * motionData [ 15 ] - xx [ 35 ] * motionData [ 16 ] ;
xx [ 39 ] = - xx [ 23 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 32 ] ;
pm_math_cross3 ( xx + 36 , xx + 39 , xx + 42 ) ; xx [ 36 ] = motionData [ 203
] ; xx [ 37 ] = motionData [ 204 ] ; xx [ 38 ] = motionData [ 205 ] ; xx [ 39
] = motionData [ 206 ] ; xx [ 33 ] = 3.980251324392935e-7 ; xx [ 34 ] =
0.999999999999921 ; xx [ 40 ] = xx [ 33 ] * state [ 19 ] - xx [ 34 ] * state
[ 16 ] ; xx [ 41 ] = xx [ 33 ] * state [ 18 ] + xx [ 34 ] * state [ 17 ] ; xx
[ 45 ] = - xx [ 41 ] ; xx [ 46 ] = xx [ 34 ] * state [ 18 ] - xx [ 33 ] *
state [ 17 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 33 ] * state [ 16 ]
+ xx [ 34 ] * state [ 19 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = xx [ 45 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ;
pm_math_quatCompose ( xx + 36 , xx + 50 , xx + 54 ) ; xx [ 58 ] = motionData
[ 252 ] ; xx [ 59 ] = motionData [ 253 ] ; xx [ 60 ] = motionData [ 254 ] ;
xx [ 61 ] = motionData [ 255 ] ; pm_math_quatCompose ( xx + 54 , xx + 58 , xx
+ 62 ) ; xx [ 54 ] = motionData [ 253 ] ; xx [ 55 ] = motionData [ 254 ] ; xx
[ 56 ] = motionData [ 255 ] ; xx [ 57 ] = 7.960502648785241e-7 ; xx [ 58 ] =
xx [ 57 ] * motionData [ 255 ] ; xx [ 59 ] = xx [ 57 ] * motionData [ 253 ] +
motionData [ 254 ] ; xx [ 66 ] = xx [ 58 ] ; xx [ 67 ] = motionData [ 255 ] ;
xx [ 68 ] = - xx [ 59 ] ; pm_math_cross3 ( xx + 54 , xx + 66 , xx + 69 ) ; xx
[ 60 ] = motionData [ 252 ] * motionData [ 255 ] ; xx [ 66 ] = xx [ 5 ] + (
xx [ 69 ] - xx [ 58 ] * motionData [ 252 ] ) * xx [ 4 ] ; xx [ 67 ] = xx [ 4
] * ( xx [ 70 ] - xx [ 60 ] ) - xx [ 57 ] ; xx [ 68 ] = xx [ 4 ] * ( xx [ 71
] + xx [ 59 ] * motionData [ 252 ] ) ; pm_math_cross3 ( xx + 66 , xx + 16 ,
xx + 69 ) ; pm_math_quatXform ( xx + 62 , xx + 69 , xx + 66 ) ; xx [ 59 ] = -
( xx [ 57 ] * motionData [ 258 ] ) ; xx [ 69 ] = xx [ 59 ] ; xx [ 70 ] = -
motionData [ 258 ] ; xx [ 71 ] = motionData [ 257 ] + xx [ 57 ] * motionData
[ 256 ] ; pm_math_quatXform ( xx + 50 , xx + 69 , xx + 72 ) ; xx [ 61 ] =
2.329280111075767e-13 ; xx [ 69 ] = 2.926046524751139e-7 ; xx [ 75 ] = xx [
61 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 50 , xx + 75 , xx + 78 ) ; xx [ 81 ] = xx [ 72 ] +
xx [ 78 ] ; xx [ 82 ] = xx [ 73 ] + xx [ 79 ] ; xx [ 83 ] = xx [ 74 ] + xx [
80 ] ; pm_math_quatXform ( xx + 36 , xx + 81 , xx + 70 ) ; xx [ 73 ] =
motionData [ 253 ] - xx [ 57 ] * motionData [ 254 ] ; xx [ 78 ] = -
motionData [ 255 ] ; xx [ 79 ] = xx [ 58 ] ; xx [ 80 ] = xx [ 73 ] ;
pm_math_cross3 ( xx + 54 , xx + 78 , xx + 81 ) ; xx [ 54 ] = xx [ 57 ] + ( xx
[ 60 ] + xx [ 81 ] ) * xx [ 4 ] ; xx [ 55 ] = xx [ 5 ] + xx [ 4 ] * ( xx [ 82
] - xx [ 57 ] * xx [ 60 ] ) ; xx [ 56 ] = xx [ 4 ] * ( xx [ 83 ] - xx [ 73 ]
* motionData [ 252 ] ) ; pm_math_cross3 ( xx + 54 , xx + 16 , xx + 78 ) ;
pm_math_quatXform ( xx + 62 , xx + 78 , xx + 54 ) ; xx [ 78 ] = motionData [
258 ] ; xx [ 79 ] = xx [ 59 ] ; xx [ 80 ] = xx [ 57 ] * motionData [ 257 ] -
motionData [ 256 ] ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 57 ) ; xx [
78 ] = - xx [ 69 ] ; xx [ 79 ] = xx [ 61 ] ; xx [ 80 ] =
7.670997177269469e-12 ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 81 ) ;
xx [ 50 ] = xx [ 57 ] + xx [ 81 ] ; xx [ 51 ] = xx [ 58 ] + xx [ 82 ] ; xx [
52 ] = xx [ 59 ] + xx [ 83 ] ; pm_math_quatXform ( xx + 36 , xx + 50 , xx +
57 ) ; xx [ 50 ] = xx [ 4 ] * ( motionData [ 253 ] * motionData [ 255 ] -
motionData [ 252 ] * motionData [ 254 ] ) ; xx [ 51 ] = ( motionData [ 252 ]
* motionData [ 253 ] + motionData [ 254 ] * motionData [ 255 ] ) * xx [ 4 ] ;
xx [ 52 ] = xx [ 5 ] - ( motionData [ 253 ] * motionData [ 253 ] + motionData
[ 254 ] * motionData [ 254 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 50 , xx +
16 , xx + 81 ) ; pm_math_quatXform ( xx + 62 , xx + 81 , xx + 50 ) ; xx [ 60
] = xx [ 45 ] ; xx [ 61 ] = xx [ 47 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 45 ] =
xx [ 48 ] * motionData [ 256 ] ; xx [ 47 ] = xx [ 48 ] * motionData [ 257 ] ;
xx [ 49 ] = xx [ 41 ] * motionData [ 256 ] + xx [ 46 ] * motionData [ 257 ] ;
xx [ 63 ] = xx [ 45 ] ; xx [ 64 ] = xx [ 47 ] ; xx [ 65 ] = - xx [ 49 ] ;
pm_math_cross3 ( xx + 60 , xx + 63 , xx + 81 ) ; xx [ 53 ] =
3.641162862673871e-8 ; xx [ 63 ] = xx [ 53 ] * xx [ 48 ] ; xx [ 64 ] =
0.04575000000717538 ; xx [ 65 ] = xx [ 64 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 53
] * xx [ 41 ] + xx [ 46 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] =
xx [ 65 ] ; xx [ 86 ] = - xx [ 48 ] ; pm_math_cross3 ( xx + 60 , xx + 84 , xx
+ 87 ) ; xx [ 60 ] = xx [ 4 ] * ( xx [ 81 ] + xx [ 45 ] * xx [ 40 ] ) + xx [
4 ] * ( xx [ 87 ] + xx [ 63 ] * xx [ 40 ] ) - motionData [ 257 ] - xx [ 64 ]
; xx [ 61 ] = motionData [ 256 ] + xx [ 4 ] * ( xx [ 82 ] + xx [ 47 ] * xx [
40 ] ) + ( xx [ 65 ] * xx [ 40 ] + xx [ 88 ] ) * xx [ 4 ] + xx [ 53 ] ; xx [
62 ] = ( xx [ 83 ] - xx [ 40 ] * xx [ 49 ] ) * xx [ 4 ] + ( xx [ 89 ] - xx [
48 ] * xx [ 40 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 60 , xx +
45 ) ; xx [ 36 ] = motionData [ 210 ] ; xx [ 37 ] = motionData [ 211 ] ; xx [
38 ] = motionData [ 212 ] ; xx [ 39 ] = motionData [ 213 ] ; xx [ 40 ] =
3.980251340548381e-7 ; xx [ 41 ] = xx [ 34 ] * state [ 26 ] - xx [ 40 ] *
state [ 23 ] ; xx [ 48 ] = xx [ 34 ] * state [ 25 ] - xx [ 40 ] * state [ 24
] ; xx [ 49 ] = xx [ 40 ] * state [ 25 ] + xx [ 34 ] * state [ 24 ] ; xx [ 60
] = - xx [ 49 ] ; xx [ 61 ] = xx [ 40 ] * state [ 26 ] + xx [ 34 ] * state [
23 ] ; xx [ 40 ] = - xx [ 61 ] ; xx [ 81 ] = xx [ 41 ] ; xx [ 82 ] = xx [ 48
] ; xx [ 83 ] = xx [ 60 ] ; xx [ 84 ] = xx [ 40 ] ; pm_math_quatCompose ( xx
+ 36 , xx + 81 , xx + 85 ) ; xx [ 81 ] = motionData [ 245 ] ; xx [ 82 ] =
motionData [ 246 ] ; xx [ 83 ] = motionData [ 247 ] ; xx [ 84 ] = motionData
[ 248 ] ; pm_math_quatCompose ( xx + 85 , xx + 81 , xx + 89 ) ; xx [ 62 ] =
motionData [ 247 ] * motionData [ 247 ] ; xx [ 63 ] = motionData [ 248 ] *
motionData [ 248 ] ; xx [ 65 ] = motionData [ 246 ] * motionData [ 247 ] ; xx
[ 69 ] = motionData [ 245 ] * motionData [ 248 ] ; xx [ 73 ] = motionData [
245 ] * motionData [ 247 ] ; xx [ 74 ] = motionData [ 246 ] * motionData [
248 ] ; xx [ 81 ] = xx [ 5 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 4 ] ; xx [ 82
] = xx [ 4 ] * ( xx [ 65 ] - xx [ 69 ] ) ; xx [ 83 ] = ( xx [ 73 ] + xx [ 74
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 81 , xx + 16 , xx + 84 ) ;
pm_math_quatXform ( xx + 89 , xx + 84 , xx + 81 ) ; xx [ 84 ] = xx [ 48 ] ;
xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] *
motionData [ 250 ] ; xx [ 60 ] = xx [ 61 ] * motionData [ 251 ] ; xx [ 87 ] =
xx [ 40 ] + xx [ 60 ] ; xx [ 88 ] = xx [ 48 ] * motionData [ 250 ] ; xx [ 93
] = xx [ 48 ] * motionData [ 251 ] ; xx [ 94 ] = - xx [ 87 ] ; xx [ 95 ] = -
xx [ 88 ] ; xx [ 96 ] = - xx [ 93 ] ; pm_math_cross3 ( xx + 84 , xx + 94 , xx
+ 97 ) ; xx [ 94 ] = xx [ 49 ] * xx [ 8 ] ; xx [ 95 ] = xx [ 61 ] * xx [ 15 ]
; xx [ 96 ] = xx [ 94 ] - xx [ 95 ] ; xx [ 100 ] = xx [ 8 ] * xx [ 48 ] ; xx
[ 101 ] = xx [ 15 ] * xx [ 48 ] ; xx [ 102 ] = xx [ 96 ] ; xx [ 103 ] = xx [
100 ] ; xx [ 104 ] = - xx [ 101 ] ; pm_math_cross3 ( xx + 84 , xx + 102 , xx
+ 105 ) ; xx [ 102 ] = xx [ 4 ] * ( xx [ 97 ] - xx [ 87 ] * xx [ 41 ] ) + (
xx [ 41 ] * xx [ 96 ] + xx [ 105 ] ) * xx [ 4 ] ; xx [ 103 ] = xx [ 4 ] * (
xx [ 98 ] - xx [ 88 ] * xx [ 41 ] ) + xx [ 4 ] * ( xx [ 106 ] + xx [ 100 ] *
xx [ 41 ] ) - motionData [ 251 ] - xx [ 15 ] ; xx [ 104 ] = motionData [ 250
] + xx [ 4 ] * ( xx [ 99 ] - xx [ 93 ] * xx [ 41 ] ) + ( xx [ 107 ] - xx [
101 ] * xx [ 41 ] ) * xx [ 4 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 36 , xx
+ 102 , xx + 96 ) ; xx [ 87 ] = motionData [ 246 ] * motionData [ 246 ] ; xx
[ 88 ] = motionData [ 247 ] * motionData [ 248 ] ; xx [ 93 ] = motionData [
245 ] * motionData [ 246 ] ; xx [ 99 ] = ( xx [ 69 ] + xx [ 65 ] ) * xx [ 4 ]
; xx [ 100 ] = xx [ 5 ] - ( xx [ 63 ] + xx [ 87 ] ) * xx [ 4 ] ; xx [ 101 ] =
xx [ 4 ] * ( xx [ 88 ] - xx [ 93 ] ) ; pm_math_cross3 ( xx + 99 , xx + 16 ,
xx + 102 ) ; pm_math_quatXform ( xx + 89 , xx + 102 , xx + 99 ) ; xx [ 63 ] =
xx [ 49 ] * motionData [ 249 ] ; xx [ 65 ] = xx [ 48 ] * motionData [ 249 ] ;
xx [ 69 ] = xx [ 65 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 49 ] * motionData [ 251
] ; xx [ 102 ] = xx [ 63 ] ; xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 60 ]
; pm_math_cross3 ( xx + 84 , xx + 102 , xx + 105 ) ; xx [ 102 ] = xx [ 49 ] *
xx [ 6 ] ; xx [ 103 ] = xx [ 6 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 95 ] - xx [
103 ] ; xx [ 95 ] = xx [ 49 ] * xx [ 15 ] ; xx [ 108 ] = xx [ 102 ] ; xx [
109 ] = - xx [ 48 ] ; xx [ 110 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 84 , xx
+ 108 , xx + 111 ) ; xx [ 108 ] = motionData [ 251 ] + ( xx [ 63 ] * xx [ 41
] + xx [ 105 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 111 ] + xx [ 102 ] * xx [ 41
] ) + xx [ 15 ] ; xx [ 109 ] = ( xx [ 41 ] * xx [ 69 ] + xx [ 106 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 112 ] - xx [ 48 ] * xx [ 41 ] ) ; xx [ 110 ] = ( xx [
60 ] * xx [ 41 ] + xx [ 107 ] ) * xx [ 4 ] + ( xx [ 95 ] * xx [ 41 ] + xx [
113 ] ) * xx [ 4 ] - motionData [ 249 ] - xx [ 6 ] ; pm_math_quatXform ( xx +
36 , xx + 108 , xx + 104 ) ; xx [ 107 ] = xx [ 4 ] * ( xx [ 74 ] - xx [ 73 ]
) ; xx [ 108 ] = ( xx [ 93 ] + xx [ 88 ] ) * xx [ 4 ] ; xx [ 109 ] = xx [ 5 ]
- ( xx [ 87 ] + xx [ 62 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 107 , xx + 16
, xx + 110 ) ; pm_math_quatXform ( xx + 89 , xx + 110 , xx + 107 ) ; xx [ 15
] = xx [ 61 ] * motionData [ 249 ] ; xx [ 48 ] = xx [ 61 ] * motionData [ 250
] ; xx [ 49 ] = xx [ 65 ] - xx [ 40 ] ; xx [ 87 ] = xx [ 15 ] ; xx [ 88 ] =
xx [ 48 ] ; xx [ 89 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx +
90 ) ; xx [ 40 ] = xx [ 61 ] * xx [ 6 ] ; xx [ 60 ] = xx [ 61 ] * xx [ 8 ] ;
xx [ 61 ] = xx [ 103 ] + xx [ 94 ] ; xx [ 87 ] = xx [ 40 ] ; xx [ 88 ] = - xx
[ 60 ] ; xx [ 89 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx + 93
) ; xx [ 84 ] = ( xx [ 15 ] * xx [ 41 ] + xx [ 90 ] ) * xx [ 4 ] + ( xx [ 40
] * xx [ 41 ] + xx [ 93 ] ) * xx [ 4 ] - motionData [ 250 ] + xx [ 8 ] ; xx [
85 ] = motionData [ 249 ] + ( xx [ 48 ] * xx [ 41 ] + xx [ 91 ] ) * xx [ 4 ]
+ xx [ 4 ] * ( xx [ 94 ] - xx [ 60 ] * xx [ 41 ] ) + xx [ 6 ] ; xx [ 86 ] = (
xx [ 41 ] * xx [ 49 ] + xx [ 92 ] ) * xx [ 4 ] + ( xx [ 61 ] * xx [ 41 ] + xx
[ 95 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 84 , xx + 60 ) ; xx
[ 15 ] = xx [ 2 ] * state [ 30 ] ; xx [ 36 ] = cos ( xx [ 15 ] ) ; xx [ 37 ]
= sin ( xx [ 15 ] ) ; xx [ 38 ] = xx [ 36 ] * motionData [ 217 ] - xx [ 37 ]
* motionData [ 220 ] ; xx [ 39 ] = xx [ 36 ] * motionData [ 218 ] + xx [ 37 ]
* motionData [ 219 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 219 ] - xx [ 37 ]
* motionData [ 218 ] ; xx [ 41 ] = xx [ 37 ] * motionData [ 217 ] + xx [ 36 ]
* motionData [ 220 ] ; xx [ 84 ] = motionData [ 49 ] ; xx [ 85 ] = motionData
[ 50 ] ; xx [ 86 ] = motionData [ 51 ] ; xx [ 87 ] = motionData [ 52 ] ;
pm_math_quatCompose ( xx + 38 , xx + 84 , xx + 88 ) ; xx [ 38 ] = xx [ 4 ] *
( motionData [ 50 ] * motionData [ 52 ] - motionData [ 49 ] * motionData [ 51
] ) ; xx [ 39 ] = ( motionData [ 49 ] * motionData [ 50 ] + motionData [ 51 ]
* motionData [ 52 ] ) * xx [ 4 ] ; xx [ 40 ] = xx [ 5 ] - ( motionData [ 50 ]
* motionData [ 50 ] + motionData [ 51 ] * motionData [ 51 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 38 , xx + 16 , xx + 84 ) ; pm_math_quatXform ( xx + 88
, xx + 84 , xx + 15 ) ; xx [ 18 ] = xx [ 37 ] * motionData [ 54 ] ; xx [ 38 ]
= xx [ 37 ] * motionData [ 53 ] ; xx [ 39 ] = 0.02540000000000185 ; xx [ 40 ]
= xx [ 39 ] * xx [ 37 ] ; xx [ 41 ] = xx [ 4 ] * ( xx [ 18 ] * xx [ 37 ] - xx
[ 36 ] * xx [ 38 ] ) - motionData [ 54 ] + xx [ 4 ] * xx [ 36 ] * xx [ 40 ] ;
xx [ 84 ] = motionData [ 218 ] ; xx [ 85 ] = motionData [ 219 ] ; xx [ 86 ] =
motionData [ 220 ] ; xx [ 48 ] = motionData [ 53 ] - ( ( xx [ 36 ] * xx [ 18
] + xx [ 38 ] * xx [ 37 ] ) * xx [ 4 ] - xx [ 4 ] * xx [ 40 ] * xx [ 37 ] ) -
xx [ 39 ] ; xx [ 18 ] = xx [ 48 ] * motionData [ 220 ] ; xx [ 36 ] = xx [ 41
] * motionData [ 220 ] ; xx [ 37 ] = xx [ 48 ] * motionData [ 218 ] - xx [ 41
] * motionData [ 219 ] ; xx [ 38 ] = - xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx
[ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx + 84 , xx + 38 , xx + 87 ) ; xx [ 38
] = xx [ 2 ] * state [ 32 ] ; xx [ 39 ] = cos ( xx [ 38 ] ) ; xx [ 40 ] = sin
( xx [ 38 ] ) ; xx [ 38 ] = xx [ 39 ] * motionData [ 225 ] - xx [ 40 ] *
motionData [ 226 ] ; xx [ 49 ] = xx [ 39 ] * motionData [ 226 ] + xx [ 40 ] *
motionData [ 225 ] ; xx [ 63 ] = xx [ 39 ] * motionData [ 227 ] - xx [ 40 ] *
motionData [ 224 ] ; xx [ 84 ] = xx [ 38 ] ; xx [ 85 ] = xx [ 49 ] ; xx [ 86
] = xx [ 63 ] ; xx [ 65 ] = xx [ 6 ] * xx [ 63 ] ; xx [ 69 ] = xx [ 8 ] * xx
[ 63 ] ; xx [ 63 ] = xx [ 6 ] * xx [ 38 ] - xx [ 49 ] * xx [ 8 ] ; xx [ 90 ]
= - xx [ 65 ] ; xx [ 91 ] = xx [ 69 ] ; xx [ 92 ] = xx [ 63 ] ;
pm_math_cross3 ( xx + 84 , xx + 90 , xx + 93 ) ; xx [ 38 ] = xx [ 39 ] *
motionData [ 224 ] + xx [ 40 ] * motionData [ 227 ] ; xx [ 49 ] =
2.191920996097441e-12 ; xx [ 73 ] = xx [ 49 ] * xx [ 40 ] ; xx [ 74 ] =
3.368449963403463e-13 ; xx [ 84 ] = xx [ 74 ] * xx [ 40 ] ; xx [ 85 ] = xx [
4 ] * ( xx [ 73 ] * xx [ 40 ] - xx [ 39 ] * xx [ 84 ] ) - xx [ 49 ] ; xx [ 90
] = motionData [ 225 ] ; xx [ 91 ] = motionData [ 226 ] ; xx [ 92 ] =
motionData [ 227 ] ; xx [ 49 ] = ( xx [ 39 ] * xx [ 73 ] + xx [ 84 ] * xx [
40 ] ) * xx [ 4 ] - xx [ 74 ] ; xx [ 39 ] = xx [ 49 ] * motionData [ 227 ] ;
xx [ 40 ] = xx [ 85 ] * motionData [ 227 ] ; xx [ 73 ] = xx [ 49 ] *
motionData [ 225 ] - xx [ 85 ] * motionData [ 226 ] ; xx [ 110 ] = - xx [ 39
] ; xx [ 111 ] = xx [ 40 ] ; xx [ 112 ] = xx [ 73 ] ; pm_math_cross3 ( xx +
90 , xx + 110 , xx + 113 ) ; xx [ 74 ] = 0.389585375426561 ; xx [ 84 ] = xx [
2 ] * state [ 64 ] ; xx [ 86 ] = cos ( xx [ 84 ] ) ; xx [ 90 ] =
0.3895819001770367 ; xx [ 91 ] = sin ( xx [ 84 ] ) ; xx [ 84 ] = xx [ 74 ] *
xx [ 86 ] - xx [ 90 ] * xx [ 91 ] ; xx [ 92 ] = 0.5901074779979936 ; xx [ 102
] = 0.5901036711621467 ; xx [ 103 ] = xx [ 92 ] * xx [ 86 ] + xx [ 102 ] * xx
[ 91 ] ; xx [ 110 ] = - xx [ 103 ] ; xx [ 111 ] = xx [ 102 ] * xx [ 86 ] - xx
[ 92 ] * xx [ 91 ] ; xx [ 92 ] = xx [ 90 ] * xx [ 86 ] + xx [ 74 ] * xx [ 91
] ; xx [ 74 ] = - xx [ 92 ] ; xx [ 116 ] = xx [ 84 ] ; xx [ 117 ] = xx [ 110
] ; xx [ 118 ] = xx [ 111 ] ; xx [ 119 ] = xx [ 74 ] ; xx [ 120 ] =
motionData [ 238 ] ; xx [ 121 ] = motionData [ 239 ] ; xx [ 122 ] =
motionData [ 240 ] ; xx [ 123 ] = motionData [ 241 ] ; pm_math_quatCompose (
xx + 116 , xx + 120 , xx + 124 ) ; xx [ 116 ] = xx [ 4 ] * ( motionData [ 238
] * motionData [ 240 ] - motionData [ 239 ] * motionData [ 241 ] ) ; xx [ 117
] = - ( ( motionData [ 238 ] * motionData [ 239 ] + motionData [ 240 ] *
motionData [ 241 ] ) * xx [ 4 ] ) ; xx [ 118 ] = ( motionData [ 239 ] *
motionData [ 239 ] + motionData [ 240 ] * motionData [ 240 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 86 ] = 3.641924106626229e-8 ; xx [ 90 ] = 0.04574999999998041
; xx [ 91 ] = 2.92603149291605e-7 ; xx [ 119 ] = xx [ 86 ] ; xx [ 120 ] = xx
[ 90 ] ; xx [ 121 ] = xx [ 91 ] ; pm_math_cross3 ( xx + 116 , xx + 119 , xx +
128 ) ; pm_math_quatXform ( xx + 124 , xx + 128 , xx + 116 ) ; xx [ 122 ] =
xx [ 110 ] ; xx [ 123 ] = xx [ 111 ] ; xx [ 124 ] = xx [ 74 ] ; xx [ 74 ] =
xx [ 92 ] * motionData [ 242 ] ; xx [ 102 ] = xx [ 92 ] * motionData [ 243 ]
; xx [ 110 ] = xx [ 111 ] * motionData [ 243 ] - xx [ 103 ] * motionData [
242 ] ; xx [ 125 ] = - xx [ 74 ] ; xx [ 126 ] = - xx [ 102 ] ; xx [ 127 ] = -
xx [ 110 ] ; pm_math_cross3 ( xx + 122 , xx + 125 , xx + 128 ) ; xx [ 112 ] =
xx [ 19 ] * xx [ 103 ] ; xx [ 122 ] = xx [ 19 ] * xx [ 92 ] ; xx [ 123 ] = xx
[ 2 ] * state [ 66 ] ; xx [ 2 ] = cos ( xx [ 123 ] ) ; xx [ 124 ] = sin ( xx
[ 123 ] ) ; xx [ 131 ] = xx [ 2 ] * motionData [ 127 ] - xx [ 124 ] *
motionData [ 128 ] ; xx [ 132 ] = - ( xx [ 2 ] * motionData [ 126 ] + xx [
124 ] * motionData [ 129 ] ) ; xx [ 133 ] = xx [ 124 ] * motionData [ 126 ] -
xx [ 2 ] * motionData [ 129 ] ; xx [ 134 ] = xx [ 124 ] * motionData [ 127 ]
+ xx [ 2 ] * motionData [ 128 ] ; xx [ 135 ] = motionData [ 140 ] ; xx [ 136
] = motionData [ 141 ] ; xx [ 137 ] = motionData [ 142 ] ; xx [ 138 ] =
motionData [ 143 ] ; pm_math_quatCompose ( xx + 131 , xx + 135 , xx + 139 ) ;
xx [ 125 ] = xx [ 4 ] * ( motionData [ 141 ] * motionData [ 143 ] -
motionData [ 140 ] * motionData [ 142 ] ) ; xx [ 126 ] = ( motionData [ 140 ]
* motionData [ 141 ] + motionData [ 142 ] * motionData [ 143 ] ) * xx [ 4 ] ;
xx [ 127 ] = xx [ 5 ] - ( motionData [ 141 ] * motionData [ 141 ] +
motionData [ 142 ] * motionData [ 142 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
125 , xx + 119 , xx + 131 ) ; pm_math_quatXform ( xx + 139 , xx + 131 , xx +
119 ) ; xx [ 5 ] = xx [ 124 ] * motionData [ 145 ] - xx [ 2 ] * motionData [
144 ] ; xx [ 123 ] = 6.924287580811761e-12 ; xx [ 125 ] =
1.024070757638107e-11 ; xx [ 126 ] = xx [ 123 ] * xx [ 124 ] - xx [ 125 ] *
xx [ 2 ] ; xx [ 127 ] = xx [ 4 ] * xx [ 124 ] * xx [ 5 ] - ( motionData [ 145
] + xx [ 4 ] * xx [ 126 ] * xx [ 124 ] ) + xx [ 123 ] ; xx [ 131 ] =
motionData [ 127 ] ; xx [ 132 ] = motionData [ 128 ] ; xx [ 133 ] =
motionData [ 129 ] ; xx [ 123 ] = motionData [ 144 ] + xx [ 4 ] * xx [ 2 ] *
xx [ 5 ] - xx [ 4 ] * xx [ 126 ] * xx [ 2 ] - xx [ 125 ] ; xx [ 2 ] = xx [
123 ] * motionData [ 129 ] ; xx [ 5 ] = xx [ 127 ] * motionData [ 129 ] ; xx
[ 124 ] = xx [ 123 ] * motionData [ 127 ] - xx [ 127 ] * motionData [ 128 ] ;
xx [ 134 ] = - xx [ 2 ] ; xx [ 135 ] = xx [ 5 ] ; xx [ 136 ] = xx [ 124 ] ;
pm_math_cross3 ( xx + 131 , xx + 134 , xx + 137 ) ; xx [ 131 ] = motionData [
189 ] ; xx [ 132 ] = motionData [ 190 ] ; xx [ 133 ] = motionData [ 191 ] ;
xx [ 134 ] = motionData [ 192 ] ; xx [ 125 ] = xx [ 33 ] * state [ 71 ] - xx
[ 34 ] * state [ 68 ] ; xx [ 126 ] = xx [ 33 ] * state [ 70 ] + xx [ 34 ] *
state [ 69 ] ; xx [ 135 ] = - xx [ 126 ] ; xx [ 136 ] = xx [ 34 ] * state [
70 ] - xx [ 33 ] * state [ 69 ] ; xx [ 140 ] = - xx [ 136 ] ; xx [ 141 ] = xx
[ 33 ] * state [ 68 ] + xx [ 34 ] * state [ 71 ] ; xx [ 33 ] = - xx [ 141 ] ;
xx [ 142 ] = xx [ 125 ] ; xx [ 143 ] = xx [ 135 ] ; xx [ 144 ] = xx [ 140 ] ;
xx [ 145 ] = xx [ 33 ] ; pm_math_quatCompose ( xx + 131 , xx + 142 , xx + 146
) ; xx [ 34 ] = - 2.329268144978725e-13 ; xx [ 150 ] = xx [ 34 ] ; xx [ 151 ]
= - xx [ 91 ] ; xx [ 152 ] = 0.0457500000000094 ; pm_math_quatXform ( xx +
146 , xx + 150 , xx + 153 ) ; pm_math_quatXform ( xx + 142 , xx + 75 , xx +
150 ) ; pm_math_quatXform ( xx + 131 , xx + 150 , xx + 75 ) ; xx [ 150 ] = xx
[ 91 ] ; xx [ 151 ] = xx [ 34 ] ; xx [ 152 ] = 5.855191459023036e-14 ;
pm_math_quatXform ( xx + 146 , xx + 150 , xx + 156 ) ; pm_math_quatXform ( xx
+ 142 , xx + 78 , xx + 150 ) ; pm_math_quatXform ( xx + 131 , xx + 150 , xx +
78 ) ; xx [ 34 ] = xx [ 86 ] * xx [ 149 ] ; xx [ 91 ] = xx [ 86 ] * xx [ 147
] + xx [ 90 ] * xx [ 148 ] ; xx [ 142 ] = - xx [ 34 ] ; xx [ 143 ] = - ( xx [
90 ] * xx [ 149 ] ) ; xx [ 144 ] = xx [ 91 ] ; pm_math_cross3 ( xx + 147 , xx
+ 142 , xx + 150 ) ; xx [ 142 ] = xx [ 135 ] ; xx [ 143 ] = xx [ 140 ] ; xx [
144 ] = xx [ 33 ] ; xx [ 33 ] = xx [ 53 ] * xx [ 141 ] ; xx [ 135 ] = xx [ 64
] * xx [ 141 ] ; xx [ 140 ] = xx [ 53 ] * xx [ 126 ] + xx [ 136 ] * xx [ 64 ]
; xx [ 159 ] = xx [ 33 ] ; xx [ 160 ] = xx [ 135 ] ; xx [ 161 ] = - xx [ 140
] ; pm_math_cross3 ( xx + 142 , xx + 159 , xx + 162 ) ; xx [ 141 ] = xx [ 4 ]
* ( xx [ 162 ] + xx [ 33 ] * xx [ 125 ] ) - xx [ 64 ] ; xx [ 142 ] = xx [ 53
] + ( xx [ 135 ] * xx [ 125 ] + xx [ 163 ] ) * xx [ 4 ] ; xx [ 143 ] = ( xx [
164 ] - xx [ 140 ] * xx [ 125 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 131 ,
xx + 141 , xx + 159 ) ; J [ 6 ] = xx [ 12 ] + motionData [ 271 ] + ( xx [ 26
] - xx [ 3 ] * xx [ 1 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 11 ] * xx [ 20 ] -
xx [ 3 ] * xx [ 21 ] ) ; J [ 7 ] = xx [ 29 ] + xx [ 35 ] + xx [ 4 ] * ( xx [
42 ] - xx [ 23 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 66 ] + xx [ 70 ] ; J
[ 9 ] = xx [ 54 ] + xx [ 57 ] ; J [ 10 ] = xx [ 50 ] + xx [ 45 ] ; J [ 11 ] =
xx [ 81 ] + xx [ 96 ] ; J [ 12 ] = xx [ 99 ] + xx [ 104 ] ; J [ 13 ] = xx [
107 ] + xx [ 60 ] ; J [ 14 ] = xx [ 15 ] + xx [ 41 ] + xx [ 4 ] * ( xx [ 87 ]
- xx [ 18 ] * motionData [ 217 ] ) ; J [ 15 ] = xx [ 4 ] * ( xx [ 93 ] - xx [
38 ] * xx [ 65 ] ) + xx [ 85 ] + xx [ 4 ] * ( xx [ 113 ] - xx [ 39 ] *
motionData [ 224 ] ) + xx [ 8 ] ; J [ 30 ] = - ( xx [ 116 ] + motionData [
243 ] + ( xx [ 128 ] - xx [ 84 ] * xx [ 74 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [
111 ] * xx [ 112 ] - xx [ 84 ] * xx [ 122 ] ) ) ; J [ 31 ] = - ( xx [ 119 ] +
xx [ 127 ] + xx [ 4 ] * ( xx [ 137 ] - xx [ 2 ] * motionData [ 126 ] ) ) ; J
[ 32 ] = - ( xx [ 153 ] + xx [ 75 ] ) ; J [ 33 ] = - ( xx [ 156 ] + xx [ 78 ]
) ; J [ 34 ] = - ( xx [ 4 ] * ( xx [ 150 ] - xx [ 146 ] * xx [ 34 ] ) + xx [
159 ] - xx [ 90 ] ) ; J [ 51 ] = xx [ 13 ] + ( xx [ 27 ] - xx [ 3 ] * xx [ 10
] ) * xx [ 4 ] - ( motionData [ 270 ] - ( xx [ 21 ] * xx [ 7 ] + xx [ 20 ] *
xx [ 9 ] ) * xx [ 4 ] ) - xx [ 19 ] ; J [ 52 ] = xx [ 30 ] + xx [ 25 ] + ( xx
[ 24 ] * motionData [ 14 ] + xx [ 43 ] ) * xx [ 4 ] ; J [ 53 ] = xx [ 67 ] +
xx [ 71 ] ; J [ 54 ] = xx [ 55 ] + xx [ 58 ] ; J [ 55 ] = xx [ 51 ] + xx [ 46
] ; J [ 56 ] = xx [ 82 ] + xx [ 97 ] ; J [ 57 ] = xx [ 100 ] + xx [ 105 ] ; J
[ 58 ] = xx [ 108 ] + xx [ 61 ] ; J [ 59 ] = xx [ 16 ] + xx [ 48 ] + ( xx [
36 ] * motionData [ 217 ] + xx [ 88 ] ) * xx [ 4 ] ; J [ 60 ] = ( xx [ 38 ] *
xx [ 69 ] + xx [ 94 ] ) * xx [ 4 ] + xx [ 49 ] + ( xx [ 40 ] * motionData [
224 ] + xx [ 114 ] ) * xx [ 4 ] + xx [ 6 ] ; J [ 75 ] = - ( xx [ 117 ] + ( xx
[ 129 ] - xx [ 84 ] * xx [ 102 ] ) * xx [ 4 ] - ( motionData [ 242 ] - ( xx [
122 ] * xx [ 92 ] + xx [ 112 ] * xx [ 103 ] ) * xx [ 4 ] ) - xx [ 19 ] ) ; J
[ 76 ] = - ( xx [ 120 ] + xx [ 123 ] + ( xx [ 5 ] * motionData [ 126 ] + xx [
138 ] ) * xx [ 4 ] ) ; J [ 77 ] = - ( xx [ 154 ] + xx [ 76 ] ) ; J [ 78 ] = -
( xx [ 157 ] + xx [ 79 ] ) ; J [ 79 ] = - ( ( xx [ 151 ] - xx [ 90 ] * xx [
146 ] * xx [ 149 ] ) * xx [ 4 ] + xx [ 160 ] + xx [ 86 ] ) ; J [ 96 ] = xx [
14 ] + xx [ 4 ] * ( xx [ 28 ] - xx [ 3 ] * xx [ 22 ] ) + ( xx [ 3 ] * xx [ 20
] + xx [ 11 ] * xx [ 21 ] ) * xx [ 4 ] ; J [ 97 ] = xx [ 31 ] + ( xx [ 32 ] *
motionData [ 14 ] + xx [ 44 ] ) * xx [ 4 ] ; J [ 98 ] = xx [ 68 ] + xx [ 72 ]
; J [ 99 ] = xx [ 56 ] + xx [ 59 ] ; J [ 100 ] = xx [ 52 ] + xx [ 47 ] ; J [
101 ] = xx [ 83 ] + xx [ 98 ] ; J [ 102 ] = xx [ 101 ] + xx [ 106 ] ; J [ 103
] = xx [ 109 ] + xx [ 62 ] ; J [ 104 ] = xx [ 17 ] + ( xx [ 37 ] * motionData
[ 217 ] + xx [ 89 ] ) * xx [ 4 ] ; J [ 105 ] = ( xx [ 38 ] * xx [ 63 ] + xx [
95 ] ) * xx [ 4 ] + ( xx [ 73 ] * motionData [ 224 ] + xx [ 115 ] ) * xx [ 4
] ; J [ 120 ] = - ( xx [ 118 ] + xx [ 4 ] * ( xx [ 130 ] - xx [ 84 ] * xx [
110 ] ) + ( xx [ 84 ] * xx [ 112 ] + xx [ 111 ] * xx [ 122 ] ) * xx [ 4 ] ) ;
J [ 121 ] = - ( xx [ 121 ] + ( xx [ 124 ] * motionData [ 126 ] + xx [ 139 ] )
* xx [ 4 ] ) ; J [ 122 ] = - ( xx [ 155 ] + xx [ 77 ] ) ; J [ 123 ] = - ( xx
[ 158 ] + xx [ 80 ] ) ; J [ 124 ] = - ( ( xx [ 146 ] * xx [ 91 ] + xx [ 152 ]
) * xx [ 4 ] + xx [ 161 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_1 ( const double * rtdv , const double * state ,
const double * motionData , double * J ) { double xx [ 160 ] ; ( void ) rtdv
; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ]
= xx [ 2 ] * state [ 12 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] =
0.389581900177037 ; xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.5901074779979933 ; xx [ 8 ] =
0.5901036711621462 ; xx [ 9 ] = xx [ 7 ] * xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ;
xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] - xx [ 7 ] * xx [ 6
] ; xx [ 7 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1 ] * xx [ 6 ] ; xx [ 1 ] = - xx [
7 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 11 ] ;
xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = motionData [ 322 ] ; xx [ 17 ] =
motionData [ 323 ] ; xx [ 18 ] = motionData [ 324 ] ; xx [ 19 ] = motionData
[ 325 ] ; pm_math_quatCompose ( xx + 12 , xx + 16 , xx + 20 ) ; xx [ 4 ] =
2.0 ; xx [ 5 ] = 1.0 ; xx [ 12 ] = xx [ 4 ] * ( motionData [ 322 ] *
motionData [ 324 ] - motionData [ 323 ] * motionData [ 325 ] ) ; xx [ 13 ] =
- ( ( motionData [ 322 ] * motionData [ 323 ] + motionData [ 324 ] *
motionData [ 325 ] ) * xx [ 4 ] ) ; xx [ 14 ] = ( motionData [ 323 ] *
motionData [ 323 ] + motionData [ 324 ] * motionData [ 324 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 15 ] = 5.192027881355888e-12 ; xx [ 16 ] = - xx
[ 6 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_cross3 ( xx
+ 12 , xx + 16 , xx + 24 ) ; pm_math_quatXform ( xx + 20 , xx + 24 , xx + 12
) ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = xx [ 11 ] ; xx [ 21 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 326 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
327 ] ; xx [ 22 ] = xx [ 11 ] * motionData [ 327 ] - xx [ 9 ] * motionData [
326 ] ; xx [ 23 ] = - xx [ 1 ] ; xx [ 24 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [
22 ] ; pm_math_cross3 ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 19 ] =
0.02520954632904373 ; xx [ 20 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 21 ] = xx [ 19
] * xx [ 7 ] ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [ 24 ] = cos ( xx [
23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 24 ] * motionData [
15 ] - xx [ 25 ] * motionData [ 16 ] ; xx [ 30 ] = - ( xx [ 24 ] * motionData
[ 14 ] + xx [ 25 ] * motionData [ 17 ] ) ; xx [ 31 ] = xx [ 25 ] * motionData
[ 14 ] - xx [ 24 ] * motionData [ 17 ] ; xx [ 32 ] = xx [ 25 ] * motionData [
15 ] + xx [ 24 ] * motionData [ 16 ] ; xx [ 33 ] = motionData [ 315 ] ; xx [
34 ] = motionData [ 316 ] ; xx [ 35 ] = motionData [ 317 ] ; xx [ 36 ] =
motionData [ 318 ] ; pm_math_quatCompose ( xx + 29 , xx + 33 , xx + 37 ) ; xx
[ 29 ] = xx [ 4 ] * ( motionData [ 316 ] * motionData [ 318 ] - motionData [
315 ] * motionData [ 317 ] ) ; xx [ 30 ] = ( motionData [ 315 ] * motionData
[ 316 ] + motionData [ 317 ] * motionData [ 318 ] ) * xx [ 4 ] ; xx [ 31 ] =
xx [ 5 ] - ( motionData [ 316 ] * motionData [ 316 ] + motionData [ 317 ] *
motionData [ 317 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 29 , xx + 16 , xx +
32 ) ; pm_math_quatXform ( xx + 37 , xx + 32 , xx + 29 ) ; xx [ 23 ] = xx [
25 ] * motionData [ 320 ] - xx [ 24 ] * motionData [ 319 ] ; xx [ 32 ] =
7.748428954013064e-12 ; xx [ 33 ] = 5.376764528053357e-12 ; xx [ 34 ] = xx [
32 ] * xx [ 24 ] - xx [ 33 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 25 ] *
xx [ 23 ] - ( motionData [ 320 ] + xx [ 4 ] * xx [ 34 ] * xx [ 25 ] ) - xx [
33 ] ; xx [ 36 ] = motionData [ 15 ] ; xx [ 37 ] = motionData [ 16 ] ; xx [
38 ] = motionData [ 17 ] ; xx [ 25 ] = motionData [ 319 ] + xx [ 4 ] * xx [
24 ] * xx [ 23 ] - xx [ 4 ] * xx [ 34 ] * xx [ 24 ] + xx [ 32 ] ; xx [ 23 ] =
xx [ 25 ] * motionData [ 17 ] ; xx [ 24 ] = xx [ 35 ] * motionData [ 17 ] ;
xx [ 32 ] = xx [ 25 ] * motionData [ 15 ] - xx [ 35 ] * motionData [ 16 ] ;
xx [ 39 ] = - xx [ 23 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 32 ] ;
pm_math_cross3 ( xx + 36 , xx + 39 , xx + 42 ) ; xx [ 36 ] = motionData [ 203
] ; xx [ 37 ] = motionData [ 204 ] ; xx [ 38 ] = motionData [ 205 ] ; xx [ 39
] = motionData [ 206 ] ; xx [ 33 ] = 3.980251324392935e-7 ; xx [ 34 ] =
0.999999999999921 ; xx [ 40 ] = xx [ 33 ] * state [ 19 ] - xx [ 34 ] * state
[ 16 ] ; xx [ 41 ] = xx [ 33 ] * state [ 18 ] + xx [ 34 ] * state [ 17 ] ; xx
[ 45 ] = - xx [ 41 ] ; xx [ 46 ] = xx [ 34 ] * state [ 18 ] - xx [ 33 ] *
state [ 17 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 33 ] * state [ 16 ]
+ xx [ 34 ] * state [ 19 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = xx [ 45 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ;
pm_math_quatCompose ( xx + 36 , xx + 50 , xx + 54 ) ; xx [ 58 ] = motionData
[ 308 ] ; xx [ 59 ] = motionData [ 309 ] ; xx [ 60 ] = motionData [ 310 ] ;
xx [ 61 ] = motionData [ 311 ] ; pm_math_quatCompose ( xx + 54 , xx + 58 , xx
+ 62 ) ; xx [ 54 ] = motionData [ 309 ] ; xx [ 55 ] = motionData [ 310 ] ; xx
[ 56 ] = motionData [ 311 ] ; xx [ 57 ] = 7.960502648785241e-7 ; xx [ 58 ] =
xx [ 57 ] * motionData [ 311 ] ; xx [ 59 ] = xx [ 57 ] * motionData [ 309 ] +
motionData [ 310 ] ; xx [ 66 ] = xx [ 58 ] ; xx [ 67 ] = motionData [ 311 ] ;
xx [ 68 ] = - xx [ 59 ] ; pm_math_cross3 ( xx + 54 , xx + 66 , xx + 69 ) ; xx
[ 60 ] = motionData [ 308 ] * motionData [ 311 ] ; xx [ 66 ] = xx [ 5 ] + (
xx [ 69 ] - xx [ 58 ] * motionData [ 308 ] ) * xx [ 4 ] ; xx [ 67 ] = xx [ 4
] * ( xx [ 70 ] - xx [ 60 ] ) - xx [ 57 ] ; xx [ 68 ] = xx [ 4 ] * ( xx [ 71
] + xx [ 59 ] * motionData [ 308 ] ) ; pm_math_cross3 ( xx + 66 , xx + 16 ,
xx + 69 ) ; pm_math_quatXform ( xx + 62 , xx + 69 , xx + 66 ) ; xx [ 59 ] = -
( xx [ 57 ] * motionData [ 314 ] ) ; xx [ 69 ] = xx [ 59 ] ; xx [ 70 ] = -
motionData [ 314 ] ; xx [ 71 ] = motionData [ 313 ] + xx [ 57 ] * motionData
[ 312 ] ; pm_math_quatXform ( xx + 50 , xx + 69 , xx + 72 ) ; xx [ 61 ] =
2.329280111075767e-13 ; xx [ 69 ] = 2.926046524751139e-7 ; xx [ 75 ] = xx [
61 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 50 , xx + 75 , xx + 78 ) ; xx [ 81 ] = xx [ 72 ] +
xx [ 78 ] ; xx [ 82 ] = xx [ 73 ] + xx [ 79 ] ; xx [ 83 ] = xx [ 74 ] + xx [
80 ] ; pm_math_quatXform ( xx + 36 , xx + 81 , xx + 70 ) ; xx [ 73 ] =
motionData [ 309 ] - xx [ 57 ] * motionData [ 310 ] ; xx [ 78 ] = -
motionData [ 311 ] ; xx [ 79 ] = xx [ 58 ] ; xx [ 80 ] = xx [ 73 ] ;
pm_math_cross3 ( xx + 54 , xx + 78 , xx + 81 ) ; xx [ 54 ] = xx [ 57 ] + ( xx
[ 60 ] + xx [ 81 ] ) * xx [ 4 ] ; xx [ 55 ] = xx [ 5 ] + xx [ 4 ] * ( xx [ 82
] - xx [ 57 ] * xx [ 60 ] ) ; xx [ 56 ] = xx [ 4 ] * ( xx [ 83 ] - xx [ 73 ]
* motionData [ 308 ] ) ; pm_math_cross3 ( xx + 54 , xx + 16 , xx + 78 ) ;
pm_math_quatXform ( xx + 62 , xx + 78 , xx + 54 ) ; xx [ 78 ] = motionData [
314 ] ; xx [ 79 ] = xx [ 59 ] ; xx [ 80 ] = xx [ 57 ] * motionData [ 313 ] -
motionData [ 312 ] ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 57 ) ; xx [
78 ] = - xx [ 69 ] ; xx [ 79 ] = xx [ 61 ] ; xx [ 80 ] =
7.670997177269469e-12 ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 81 ) ;
xx [ 50 ] = xx [ 57 ] + xx [ 81 ] ; xx [ 51 ] = xx [ 58 ] + xx [ 82 ] ; xx [
52 ] = xx [ 59 ] + xx [ 83 ] ; pm_math_quatXform ( xx + 36 , xx + 50 , xx +
57 ) ; xx [ 50 ] = xx [ 4 ] * ( motionData [ 309 ] * motionData [ 311 ] -
motionData [ 308 ] * motionData [ 310 ] ) ; xx [ 51 ] = ( motionData [ 308 ]
* motionData [ 309 ] + motionData [ 310 ] * motionData [ 311 ] ) * xx [ 4 ] ;
xx [ 52 ] = xx [ 5 ] - ( motionData [ 309 ] * motionData [ 309 ] + motionData
[ 310 ] * motionData [ 310 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 50 , xx +
16 , xx + 81 ) ; pm_math_quatXform ( xx + 62 , xx + 81 , xx + 50 ) ; xx [ 60
] = xx [ 45 ] ; xx [ 61 ] = xx [ 47 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 45 ] =
xx [ 48 ] * motionData [ 312 ] ; xx [ 47 ] = xx [ 48 ] * motionData [ 313 ] ;
xx [ 49 ] = xx [ 41 ] * motionData [ 312 ] + xx [ 46 ] * motionData [ 313 ] ;
xx [ 63 ] = xx [ 45 ] ; xx [ 64 ] = xx [ 47 ] ; xx [ 65 ] = - xx [ 49 ] ;
pm_math_cross3 ( xx + 60 , xx + 63 , xx + 81 ) ; xx [ 53 ] =
3.641162862673871e-8 ; xx [ 63 ] = xx [ 53 ] * xx [ 48 ] ; xx [ 64 ] =
0.04575000000717538 ; xx [ 65 ] = xx [ 64 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 53
] * xx [ 41 ] + xx [ 46 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] =
xx [ 65 ] ; xx [ 86 ] = - xx [ 48 ] ; pm_math_cross3 ( xx + 60 , xx + 84 , xx
+ 87 ) ; xx [ 60 ] = xx [ 4 ] * ( xx [ 81 ] + xx [ 45 ] * xx [ 40 ] ) + xx [
4 ] * ( xx [ 87 ] + xx [ 63 ] * xx [ 40 ] ) - motionData [ 313 ] - xx [ 64 ]
; xx [ 61 ] = motionData [ 312 ] + xx [ 4 ] * ( xx [ 82 ] + xx [ 47 ] * xx [
40 ] ) + ( xx [ 65 ] * xx [ 40 ] + xx [ 88 ] ) * xx [ 4 ] + xx [ 53 ] ; xx [
62 ] = ( xx [ 83 ] - xx [ 40 ] * xx [ 49 ] ) * xx [ 4 ] + ( xx [ 89 ] - xx [
48 ] * xx [ 40 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 60 , xx +
45 ) ; xx [ 36 ] = motionData [ 210 ] ; xx [ 37 ] = motionData [ 211 ] ; xx [
38 ] = motionData [ 212 ] ; xx [ 39 ] = motionData [ 213 ] ; xx [ 40 ] =
3.980251340548381e-7 ; xx [ 41 ] = xx [ 34 ] * state [ 26 ] - xx [ 40 ] *
state [ 23 ] ; xx [ 48 ] = xx [ 34 ] * state [ 25 ] - xx [ 40 ] * state [ 24
] ; xx [ 49 ] = xx [ 40 ] * state [ 25 ] + xx [ 34 ] * state [ 24 ] ; xx [ 60
] = - xx [ 49 ] ; xx [ 61 ] = xx [ 40 ] * state [ 26 ] + xx [ 34 ] * state [
23 ] ; xx [ 40 ] = - xx [ 61 ] ; xx [ 81 ] = xx [ 41 ] ; xx [ 82 ] = xx [ 48
] ; xx [ 83 ] = xx [ 60 ] ; xx [ 84 ] = xx [ 40 ] ; pm_math_quatCompose ( xx
+ 36 , xx + 81 , xx + 85 ) ; xx [ 81 ] = motionData [ 301 ] ; xx [ 82 ] =
motionData [ 302 ] ; xx [ 83 ] = motionData [ 303 ] ; xx [ 84 ] = motionData
[ 304 ] ; pm_math_quatCompose ( xx + 85 , xx + 81 , xx + 89 ) ; xx [ 62 ] =
motionData [ 303 ] * motionData [ 303 ] ; xx [ 63 ] = motionData [ 304 ] *
motionData [ 304 ] ; xx [ 65 ] = motionData [ 302 ] * motionData [ 303 ] ; xx
[ 69 ] = motionData [ 301 ] * motionData [ 304 ] ; xx [ 73 ] = motionData [
301 ] * motionData [ 303 ] ; xx [ 74 ] = motionData [ 302 ] * motionData [
304 ] ; xx [ 81 ] = xx [ 5 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 4 ] ; xx [ 82
] = xx [ 4 ] * ( xx [ 65 ] - xx [ 69 ] ) ; xx [ 83 ] = ( xx [ 73 ] + xx [ 74
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 81 , xx + 16 , xx + 84 ) ;
pm_math_quatXform ( xx + 89 , xx + 84 , xx + 81 ) ; xx [ 84 ] = xx [ 48 ] ;
xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] *
motionData [ 306 ] ; xx [ 60 ] = xx [ 61 ] * motionData [ 307 ] ; xx [ 87 ] =
xx [ 40 ] + xx [ 60 ] ; xx [ 88 ] = xx [ 48 ] * motionData [ 306 ] ; xx [ 93
] = xx [ 48 ] * motionData [ 307 ] ; xx [ 94 ] = - xx [ 87 ] ; xx [ 95 ] = -
xx [ 88 ] ; xx [ 96 ] = - xx [ 93 ] ; pm_math_cross3 ( xx + 84 , xx + 94 , xx
+ 97 ) ; xx [ 94 ] = xx [ 49 ] * xx [ 8 ] ; xx [ 95 ] = xx [ 61 ] * xx [ 15 ]
; xx [ 96 ] = xx [ 94 ] - xx [ 95 ] ; xx [ 100 ] = xx [ 8 ] * xx [ 48 ] ; xx
[ 101 ] = xx [ 15 ] * xx [ 48 ] ; xx [ 102 ] = xx [ 96 ] ; xx [ 103 ] = xx [
100 ] ; xx [ 104 ] = - xx [ 101 ] ; pm_math_cross3 ( xx + 84 , xx + 102 , xx
+ 105 ) ; xx [ 102 ] = xx [ 4 ] * ( xx [ 97 ] - xx [ 87 ] * xx [ 41 ] ) + (
xx [ 41 ] * xx [ 96 ] + xx [ 105 ] ) * xx [ 4 ] ; xx [ 103 ] = xx [ 4 ] * (
xx [ 98 ] - xx [ 88 ] * xx [ 41 ] ) + xx [ 4 ] * ( xx [ 106 ] + xx [ 100 ] *
xx [ 41 ] ) - motionData [ 307 ] - xx [ 15 ] ; xx [ 104 ] = motionData [ 306
] + xx [ 4 ] * ( xx [ 99 ] - xx [ 93 ] * xx [ 41 ] ) + ( xx [ 107 ] - xx [
101 ] * xx [ 41 ] ) * xx [ 4 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 36 , xx
+ 102 , xx + 96 ) ; xx [ 87 ] = motionData [ 302 ] * motionData [ 302 ] ; xx
[ 88 ] = motionData [ 303 ] * motionData [ 304 ] ; xx [ 93 ] = motionData [
301 ] * motionData [ 302 ] ; xx [ 99 ] = ( xx [ 69 ] + xx [ 65 ] ) * xx [ 4 ]
; xx [ 100 ] = xx [ 5 ] - ( xx [ 63 ] + xx [ 87 ] ) * xx [ 4 ] ; xx [ 101 ] =
xx [ 4 ] * ( xx [ 88 ] - xx [ 93 ] ) ; pm_math_cross3 ( xx + 99 , xx + 16 ,
xx + 102 ) ; pm_math_quatXform ( xx + 89 , xx + 102 , xx + 99 ) ; xx [ 63 ] =
xx [ 49 ] * motionData [ 305 ] ; xx [ 65 ] = xx [ 48 ] * motionData [ 305 ] ;
xx [ 69 ] = xx [ 65 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 49 ] * motionData [ 307
] ; xx [ 102 ] = xx [ 63 ] ; xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 60 ]
; pm_math_cross3 ( xx + 84 , xx + 102 , xx + 105 ) ; xx [ 102 ] = xx [ 49 ] *
xx [ 6 ] ; xx [ 103 ] = xx [ 6 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 95 ] - xx [
103 ] ; xx [ 95 ] = xx [ 49 ] * xx [ 15 ] ; xx [ 108 ] = xx [ 102 ] ; xx [
109 ] = - xx [ 48 ] ; xx [ 110 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 84 , xx
+ 108 , xx + 111 ) ; xx [ 108 ] = motionData [ 307 ] + ( xx [ 63 ] * xx [ 41
] + xx [ 105 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 111 ] + xx [ 102 ] * xx [ 41
] ) + xx [ 15 ] ; xx [ 109 ] = ( xx [ 41 ] * xx [ 69 ] + xx [ 106 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 112 ] - xx [ 48 ] * xx [ 41 ] ) ; xx [ 110 ] = ( xx [
60 ] * xx [ 41 ] + xx [ 107 ] ) * xx [ 4 ] + ( xx [ 95 ] * xx [ 41 ] + xx [
113 ] ) * xx [ 4 ] - motionData [ 305 ] - xx [ 6 ] ; pm_math_quatXform ( xx +
36 , xx + 108 , xx + 104 ) ; xx [ 107 ] = xx [ 4 ] * ( xx [ 74 ] - xx [ 73 ]
) ; xx [ 108 ] = ( xx [ 93 ] + xx [ 88 ] ) * xx [ 4 ] ; xx [ 109 ] = xx [ 5 ]
- ( xx [ 87 ] + xx [ 62 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 107 , xx + 16
, xx + 110 ) ; pm_math_quatXform ( xx + 89 , xx + 110 , xx + 107 ) ; xx [ 15
] = xx [ 61 ] * motionData [ 305 ] ; xx [ 48 ] = xx [ 61 ] * motionData [ 306
] ; xx [ 49 ] = xx [ 65 ] - xx [ 40 ] ; xx [ 87 ] = xx [ 15 ] ; xx [ 88 ] =
xx [ 48 ] ; xx [ 89 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx +
90 ) ; xx [ 40 ] = xx [ 61 ] * xx [ 6 ] ; xx [ 60 ] = xx [ 61 ] * xx [ 8 ] ;
xx [ 61 ] = xx [ 103 ] + xx [ 94 ] ; xx [ 87 ] = xx [ 40 ] ; xx [ 88 ] = - xx
[ 60 ] ; xx [ 89 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx + 93
) ; xx [ 84 ] = ( xx [ 15 ] * xx [ 41 ] + xx [ 90 ] ) * xx [ 4 ] + ( xx [ 40
] * xx [ 41 ] + xx [ 93 ] ) * xx [ 4 ] - motionData [ 306 ] + xx [ 8 ] ; xx [
85 ] = motionData [ 305 ] + ( xx [ 48 ] * xx [ 41 ] + xx [ 91 ] ) * xx [ 4 ]
+ xx [ 4 ] * ( xx [ 94 ] - xx [ 60 ] * xx [ 41 ] ) + xx [ 6 ] ; xx [ 86 ] = (
xx [ 41 ] * xx [ 49 ] + xx [ 92 ] ) * xx [ 4 ] + ( xx [ 61 ] * xx [ 41 ] + xx
[ 95 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 84 , xx + 60 ) ; xx
[ 15 ] = xx [ 2 ] * state [ 30 ] ; xx [ 36 ] = cos ( xx [ 15 ] ) ; xx [ 37 ]
= sin ( xx [ 15 ] ) ; xx [ 38 ] = xx [ 36 ] * motionData [ 217 ] - xx [ 37 ]
* motionData [ 220 ] ; xx [ 39 ] = xx [ 36 ] * motionData [ 218 ] + xx [ 37 ]
* motionData [ 219 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 219 ] - xx [ 37 ]
* motionData [ 218 ] ; xx [ 41 ] = xx [ 37 ] * motionData [ 217 ] + xx [ 36 ]
* motionData [ 220 ] ; xx [ 84 ] = motionData [ 56 ] ; xx [ 85 ] = motionData
[ 57 ] ; xx [ 86 ] = motionData [ 58 ] ; xx [ 87 ] = motionData [ 59 ] ;
pm_math_quatCompose ( xx + 38 , xx + 84 , xx + 88 ) ; xx [ 38 ] = xx [ 4 ] *
( motionData [ 57 ] * motionData [ 59 ] - motionData [ 56 ] * motionData [ 58
] ) ; xx [ 39 ] = ( motionData [ 56 ] * motionData [ 57 ] + motionData [ 58 ]
* motionData [ 59 ] ) * xx [ 4 ] ; xx [ 40 ] = xx [ 5 ] - ( motionData [ 57 ]
* motionData [ 57 ] + motionData [ 58 ] * motionData [ 58 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 38 , xx + 16 , xx + 84 ) ; pm_math_quatXform ( xx + 88
, xx + 84 , xx + 15 ) ; xx [ 18 ] = xx [ 37 ] * motionData [ 61 ] ; xx [ 38 ]
= xx [ 37 ] * motionData [ 60 ] ; xx [ 39 ] = 0.02540000000000185 ; xx [ 40 ]
= xx [ 39 ] * xx [ 37 ] ; xx [ 41 ] = xx [ 4 ] * ( xx [ 18 ] * xx [ 37 ] - xx
[ 36 ] * xx [ 38 ] ) - motionData [ 61 ] + xx [ 4 ] * xx [ 36 ] * xx [ 40 ] ;
xx [ 84 ] = motionData [ 218 ] ; xx [ 85 ] = motionData [ 219 ] ; xx [ 86 ] =
motionData [ 220 ] ; xx [ 48 ] = motionData [ 60 ] - ( ( xx [ 36 ] * xx [ 18
] + xx [ 38 ] * xx [ 37 ] ) * xx [ 4 ] - xx [ 4 ] * xx [ 40 ] * xx [ 37 ] ) -
xx [ 39 ] ; xx [ 18 ] = xx [ 48 ] * motionData [ 220 ] ; xx [ 36 ] = xx [ 41
] * motionData [ 220 ] ; xx [ 37 ] = xx [ 48 ] * motionData [ 218 ] - xx [ 41
] * motionData [ 219 ] ; xx [ 38 ] = - xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx
[ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx + 84 , xx + 38 , xx + 87 ) ; xx [ 90
] = motionData [ 224 ] ; xx [ 91 ] = motionData [ 225 ] ; xx [ 92 ] =
motionData [ 226 ] ; xx [ 93 ] = motionData [ 227 ] ; xx [ 38 ] =
0.6123724356957949 ; xx [ 39 ] = xx [ 2 ] * state [ 34 ] ; xx [ 40 ] = sin (
xx [ 39 ] ) ; xx [ 49 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 63 ] = cos ( xx [ 39 ]
) ; xx [ 39 ] = xx [ 38 ] * xx [ 63 ] ; xx [ 38 ] = xx [ 49 ] - xx [ 39 ] ;
xx [ 65 ] = 0.3535533905932732 ; xx [ 69 ] = xx [ 65 ] * xx [ 63 ] ; xx [ 63
] = xx [ 65 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 69 ] + xx [ 63 ] ; xx [ 65 ] = -
xx [ 40 ] ; xx [ 73 ] = xx [ 63 ] - xx [ 69 ] ; xx [ 63 ] = xx [ 49 ] + xx [
39 ] ; xx [ 39 ] = - xx [ 63 ] ; xx [ 110 ] = xx [ 38 ] ; xx [ 111 ] = xx [
65 ] ; xx [ 112 ] = xx [ 73 ] ; xx [ 113 ] = xx [ 39 ] ; pm_math_quatCompose
( xx + 90 , xx + 110 , xx + 114 ) ; xx [ 49 ] = xx [ 6 ] * xx [ 117 ] ; xx [
69 ] = xx [ 8 ] * xx [ 116 ] - xx [ 6 ] * xx [ 115 ] ; xx [ 84 ] = xx [ 49 ]
; xx [ 85 ] = - ( xx [ 8 ] * xx [ 117 ] ) ; xx [ 86 ] = xx [ 69 ] ;
pm_math_cross3 ( xx + 115 , xx + 84 , xx + 110 ) ; xx [ 84 ] = xx [ 65 ] ; xx
[ 85 ] = xx [ 73 ] ; xx [ 86 ] = xx [ 39 ] ; xx [ 39 ] =
1.121202762681406e-11 ; xx [ 65 ] = xx [ 63 ] * xx [ 39 ] ; xx [ 74 ] =
6.145027516349377e-13 ; xx [ 94 ] = xx [ 63 ] * xx [ 74 ] ; xx [ 63 ] = xx [
74 ] * xx [ 73 ] - xx [ 40 ] * xx [ 39 ] ; xx [ 118 ] = xx [ 65 ] ; xx [ 119
] = xx [ 94 ] ; xx [ 120 ] = xx [ 63 ] ; pm_math_cross3 ( xx + 84 , xx + 118
, xx + 121 ) ; xx [ 84 ] = xx [ 4 ] * ( xx [ 121 ] + xx [ 65 ] * xx [ 38 ] )
- xx [ 74 ] ; xx [ 85 ] = xx [ 39 ] + ( xx [ 94 ] * xx [ 38 ] + xx [ 122 ] )
* xx [ 4 ] ; xx [ 86 ] = ( xx [ 38 ] * xx [ 63 ] + xx [ 123 ] ) * xx [ 4 ] ;
pm_math_quatXform ( xx + 90 , xx + 84 , xx + 38 ) ; xx [ 63 ] =
0.04233709306330295 ; xx [ 65 ] = xx [ 2 ] * state [ 53 ] ; xx [ 73 ] = cos (
xx [ 65 ] ) ; xx [ 74 ] = 0.04233598682685397 ; xx [ 84 ] = sin ( xx [ 65 ] )
; xx [ 65 ] = xx [ 63 ] * xx [ 73 ] + xx [ 74 ] * xx [ 84 ] ; xx [ 85 ] =
0.7058357201813958 ; xx [ 86 ] = 0.7058407546227096 ; xx [ 90 ] = xx [ 85 ] *
xx [ 84 ] - xx [ 86 ] * xx [ 73 ] ; xx [ 91 ] = xx [ 85 ] * xx [ 73 ] + xx [
86 ] * xx [ 84 ] ; xx [ 85 ] = xx [ 63 ] * xx [ 84 ] - xx [ 74 ] * xx [ 73 ]
; xx [ 92 ] = xx [ 65 ] ; xx [ 93 ] = xx [ 90 ] ; xx [ 94 ] = xx [ 91 ] ; xx
[ 95 ] = xx [ 85 ] ; xx [ 118 ] = motionData [ 294 ] ; xx [ 119 ] =
motionData [ 295 ] ; xx [ 120 ] = motionData [ 296 ] ; xx [ 121 ] =
motionData [ 297 ] ; pm_math_quatCompose ( xx + 92 , xx + 118 , xx + 122 ) ;
xx [ 92 ] = xx [ 4 ] * ( motionData [ 295 ] * motionData [ 297 ] - motionData
[ 294 ] * motionData [ 296 ] ) ; xx [ 93 ] = ( motionData [ 294 ] *
motionData [ 295 ] + motionData [ 296 ] * motionData [ 297 ] ) * xx [ 4 ] ;
xx [ 94 ] = xx [ 5 ] - ( motionData [ 295 ] * motionData [ 295 ] + motionData
[ 296 ] * motionData [ 296 ] ) * xx [ 4 ] ; xx [ 63 ] = 3.641924106626229e-8
; xx [ 73 ] = 0.04574999999998041 ; xx [ 74 ] = 2.92603149291605e-7 ; xx [
118 ] = xx [ 63 ] ; xx [ 119 ] = xx [ 73 ] ; xx [ 120 ] = xx [ 74 ] ;
pm_math_cross3 ( xx + 92 , xx + 118 , xx + 126 ) ; pm_math_quatXform ( xx +
122 , xx + 126 , xx + 92 ) ; xx [ 121 ] = xx [ 90 ] ; xx [ 122 ] = xx [ 91 ]
; xx [ 123 ] = xx [ 85 ] ; xx [ 84 ] = xx [ 85 ] * motionData [ 298 ] ; xx [
86 ] = xx [ 85 ] * motionData [ 299 ] ; xx [ 95 ] = xx [ 90 ] * motionData [
298 ] + xx [ 91 ] * motionData [ 299 ] ; xx [ 124 ] = - xx [ 84 ] ; xx [ 125
] = - xx [ 86 ] ; xx [ 126 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 121 , xx +
124 , xx + 127 ) ; xx [ 102 ] = 0.02520954632904374 ; xx [ 103 ] = xx [ 90 ]
* xx [ 102 ] ; xx [ 113 ] = xx [ 85 ] * xx [ 102 ] ; xx [ 115 ] = xx [ 2 ] *
state [ 55 ] ; xx [ 2 ] = cos ( xx [ 115 ] ) ; xx [ 116 ] = sin ( xx [ 115 ]
) ; xx [ 121 ] = xx [ 2 ] * motionData [ 106 ] - xx [ 116 ] * motionData [
107 ] ; xx [ 122 ] = - ( xx [ 2 ] * motionData [ 105 ] + xx [ 116 ] *
motionData [ 108 ] ) ; xx [ 123 ] = xx [ 116 ] * motionData [ 105 ] - xx [ 2
] * motionData [ 108 ] ; xx [ 124 ] = xx [ 116 ] * motionData [ 106 ] + xx [
2 ] * motionData [ 107 ] ; xx [ 130 ] = motionData [ 119 ] ; xx [ 131 ] =
motionData [ 120 ] ; xx [ 132 ] = motionData [ 121 ] ; xx [ 133 ] =
motionData [ 122 ] ; pm_math_quatCompose ( xx + 121 , xx + 130 , xx + 134 ) ;
xx [ 121 ] = xx [ 4 ] * ( motionData [ 120 ] * motionData [ 122 ] -
motionData [ 119 ] * motionData [ 121 ] ) ; xx [ 122 ] = ( motionData [ 119 ]
* motionData [ 120 ] + motionData [ 121 ] * motionData [ 122 ] ) * xx [ 4 ] ;
xx [ 123 ] = xx [ 5 ] - ( motionData [ 120 ] * motionData [ 120 ] +
motionData [ 121 ] * motionData [ 121 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
121 , xx + 118 , xx + 124 ) ; pm_math_quatXform ( xx + 134 , xx + 124 , xx +
118 ) ; xx [ 5 ] = xx [ 116 ] * motionData [ 124 ] - xx [ 2 ] * motionData [
123 ] ; xx [ 115 ] = 9.27756931389703e-12 ; xx [ 121 ] =
5.443558296964576e-12 ; xx [ 122 ] = xx [ 115 ] * xx [ 2 ] + xx [ 121 ] * xx
[ 116 ] ; xx [ 123 ] = xx [ 4 ] * xx [ 116 ] * xx [ 5 ] - ( motionData [ 124
] + xx [ 4 ] * xx [ 122 ] * xx [ 116 ] ) + xx [ 121 ] ; xx [ 124 ] =
motionData [ 106 ] ; xx [ 125 ] = motionData [ 107 ] ; xx [ 126 ] =
motionData [ 108 ] ; xx [ 116 ] = motionData [ 123 ] + xx [ 4 ] * xx [ 2 ] *
xx [ 5 ] - xx [ 4 ] * xx [ 122 ] * xx [ 2 ] + xx [ 115 ] ; xx [ 2 ] = xx [
116 ] * motionData [ 108 ] ; xx [ 5 ] = xx [ 123 ] * motionData [ 108 ] ; xx
[ 115 ] = xx [ 116 ] * motionData [ 106 ] - xx [ 123 ] * motionData [ 107 ] ;
xx [ 130 ] = - xx [ 2 ] ; xx [ 131 ] = xx [ 5 ] ; xx [ 132 ] = xx [ 115 ] ;
pm_math_cross3 ( xx + 124 , xx + 130 , xx + 133 ) ; xx [ 136 ] = motionData [
273 ] ; xx [ 137 ] = motionData [ 274 ] ; xx [ 138 ] = motionData [ 275 ] ;
xx [ 139 ] = motionData [ 276 ] ; xx [ 121 ] = xx [ 33 ] * state [ 60 ] - xx
[ 34 ] * state [ 57 ] ; xx [ 122 ] = xx [ 33 ] * state [ 59 ] + xx [ 34 ] *
state [ 58 ] ; xx [ 124 ] = - xx [ 122 ] ; xx [ 125 ] = xx [ 34 ] * state [
59 ] - xx [ 33 ] * state [ 58 ] ; xx [ 126 ] = - xx [ 125 ] ; xx [ 130 ] = xx
[ 33 ] * state [ 57 ] + xx [ 34 ] * state [ 60 ] ; xx [ 33 ] = - xx [ 130 ] ;
xx [ 140 ] = xx [ 121 ] ; xx [ 141 ] = xx [ 124 ] ; xx [ 142 ] = xx [ 126 ] ;
xx [ 143 ] = xx [ 33 ] ; pm_math_quatCompose ( xx + 136 , xx + 140 , xx + 144
) ; xx [ 34 ] = - 2.329268144978725e-13 ; xx [ 148 ] = xx [ 34 ] ; xx [ 149 ]
= - xx [ 74 ] ; xx [ 150 ] = 0.0457500000000094 ; pm_math_quatXform ( xx +
144 , xx + 148 , xx + 151 ) ; pm_math_quatXform ( xx + 140 , xx + 75 , xx +
148 ) ; pm_math_quatXform ( xx + 136 , xx + 148 , xx + 75 ) ; xx [ 148 ] = xx
[ 74 ] ; xx [ 149 ] = xx [ 34 ] ; xx [ 150 ] = 5.855191459023036e-14 ;
pm_math_quatXform ( xx + 144 , xx + 148 , xx + 154 ) ; pm_math_quatXform ( xx
+ 140 , xx + 78 , xx + 148 ) ; pm_math_quatXform ( xx + 136 , xx + 148 , xx +
78 ) ; xx [ 34 ] = xx [ 63 ] * xx [ 147 ] ; xx [ 74 ] = xx [ 63 ] * xx [ 145
] + xx [ 73 ] * xx [ 146 ] ; xx [ 140 ] = - xx [ 34 ] ; xx [ 141 ] = - ( xx [
73 ] * xx [ 147 ] ) ; xx [ 142 ] = xx [ 74 ] ; pm_math_cross3 ( xx + 145 , xx
+ 140 , xx + 148 ) ; xx [ 140 ] = xx [ 124 ] ; xx [ 141 ] = xx [ 126 ] ; xx [
142 ] = xx [ 33 ] ; xx [ 33 ] = xx [ 53 ] * xx [ 130 ] ; xx [ 124 ] = xx [ 64
] * xx [ 130 ] ; xx [ 126 ] = xx [ 53 ] * xx [ 122 ] + xx [ 125 ] * xx [ 64 ]
; xx [ 130 ] = xx [ 33 ] ; xx [ 131 ] = xx [ 124 ] ; xx [ 132 ] = - xx [ 126
] ; pm_math_cross3 ( xx + 140 , xx + 130 , xx + 157 ) ; xx [ 130 ] = xx [ 4 ]
* ( xx [ 157 ] + xx [ 33 ] * xx [ 121 ] ) - xx [ 64 ] ; xx [ 131 ] = xx [ 53
] + ( xx [ 124 ] * xx [ 121 ] + xx [ 158 ] ) * xx [ 4 ] ; xx [ 132 ] = ( xx [
159 ] - xx [ 126 ] * xx [ 121 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 136 ,
xx + 130 , xx + 124 ) ; J [ 6 ] = xx [ 12 ] + motionData [ 327 ] + ( xx [ 26
] - xx [ 3 ] * xx [ 1 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 11 ] * xx [ 20 ] -
xx [ 3 ] * xx [ 21 ] ) ; J [ 7 ] = xx [ 29 ] + xx [ 35 ] + xx [ 4 ] * ( xx [
42 ] - xx [ 23 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 66 ] + xx [ 70 ] ; J
[ 9 ] = xx [ 54 ] + xx [ 57 ] ; J [ 10 ] = xx [ 50 ] + xx [ 45 ] ; J [ 11 ] =
xx [ 81 ] + xx [ 96 ] ; J [ 12 ] = xx [ 99 ] + xx [ 104 ] ; J [ 13 ] = xx [
107 ] + xx [ 60 ] ; J [ 14 ] = xx [ 15 ] + xx [ 41 ] + xx [ 4 ] * ( xx [ 87 ]
- xx [ 18 ] * motionData [ 217 ] ) ; J [ 16 ] = xx [ 4 ] * ( xx [ 110 ] + xx
[ 114 ] * xx [ 49 ] ) + xx [ 38 ] - xx [ 8 ] ; J [ 25 ] = - ( xx [ 92 ] + xx
[ 4 ] * ( xx [ 127 ] - xx [ 84 ] * xx [ 65 ] ) - motionData [ 299 ] + xx [ 4
] * ( xx [ 103 ] * xx [ 91 ] - xx [ 113 ] * xx [ 65 ] ) ) ; J [ 26 ] = - ( xx
[ 118 ] + xx [ 123 ] + xx [ 4 ] * ( xx [ 133 ] - xx [ 2 ] * motionData [ 105
] ) ) ; J [ 27 ] = - ( xx [ 151 ] + xx [ 75 ] ) ; J [ 28 ] = - ( xx [ 154 ] +
xx [ 78 ] ) ; J [ 29 ] = - ( xx [ 4 ] * ( xx [ 148 ] - xx [ 144 ] * xx [ 34 ]
) + xx [ 124 ] - xx [ 73 ] ) ; J [ 51 ] = xx [ 13 ] + ( xx [ 27 ] - xx [ 3 ]
* xx [ 10 ] ) * xx [ 4 ] - ( motionData [ 326 ] - ( xx [ 21 ] * xx [ 7 ] + xx
[ 20 ] * xx [ 9 ] ) * xx [ 4 ] ) - xx [ 19 ] ; J [ 52 ] = xx [ 30 ] + xx [ 25
] + ( xx [ 24 ] * motionData [ 14 ] + xx [ 43 ] ) * xx [ 4 ] ; J [ 53 ] = xx
[ 67 ] + xx [ 71 ] ; J [ 54 ] = xx [ 55 ] + xx [ 58 ] ; J [ 55 ] = xx [ 51 ]
+ xx [ 46 ] ; J [ 56 ] = xx [ 82 ] + xx [ 97 ] ; J [ 57 ] = xx [ 100 ] + xx [
105 ] ; J [ 58 ] = xx [ 108 ] + xx [ 61 ] ; J [ 59 ] = xx [ 16 ] + xx [ 48 ]
+ ( xx [ 36 ] * motionData [ 217 ] + xx [ 88 ] ) * xx [ 4 ] ; J [ 61 ] = ( xx
[ 111 ] - xx [ 8 ] * xx [ 114 ] * xx [ 117 ] ) * xx [ 4 ] + xx [ 39 ] - xx [
6 ] ; J [ 70 ] = - ( xx [ 93 ] + motionData [ 298 ] + xx [ 4 ] * ( xx [ 128 ]
- xx [ 86 ] * xx [ 65 ] ) - ( xx [ 85 ] * xx [ 113 ] + xx [ 90 ] * xx [ 103 ]
) * xx [ 4 ] + xx [ 102 ] ) ; J [ 71 ] = - ( xx [ 119 ] + xx [ 116 ] + ( xx [
5 ] * motionData [ 105 ] + xx [ 134 ] ) * xx [ 4 ] ) ; J [ 72 ] = - ( xx [
152 ] + xx [ 76 ] ) ; J [ 73 ] = - ( xx [ 155 ] + xx [ 79 ] ) ; J [ 74 ] = -
( ( xx [ 149 ] - xx [ 73 ] * xx [ 144 ] * xx [ 147 ] ) * xx [ 4 ] + xx [ 125
] + xx [ 63 ] ) ; J [ 96 ] = xx [ 14 ] + xx [ 4 ] * ( xx [ 28 ] - xx [ 3 ] *
xx [ 22 ] ) + ( xx [ 3 ] * xx [ 20 ] + xx [ 11 ] * xx [ 21 ] ) * xx [ 4 ] ; J
[ 97 ] = xx [ 31 ] + ( xx [ 32 ] * motionData [ 14 ] + xx [ 44 ] ) * xx [ 4 ]
; J [ 98 ] = xx [ 68 ] + xx [ 72 ] ; J [ 99 ] = xx [ 56 ] + xx [ 59 ] ; J [
100 ] = xx [ 52 ] + xx [ 47 ] ; J [ 101 ] = xx [ 83 ] + xx [ 98 ] ; J [ 102 ]
= xx [ 101 ] + xx [ 106 ] ; J [ 103 ] = xx [ 109 ] + xx [ 62 ] ; J [ 104 ] =
xx [ 17 ] + ( xx [ 37 ] * motionData [ 217 ] + xx [ 89 ] ) * xx [ 4 ] ; J [
106 ] = ( xx [ 114 ] * xx [ 69 ] + xx [ 112 ] ) * xx [ 4 ] + xx [ 40 ] ; J [
115 ] = - ( xx [ 94 ] + ( xx [ 95 ] * xx [ 65 ] + xx [ 129 ] ) * xx [ 4 ] + (
xx [ 103 ] * xx [ 65 ] + xx [ 113 ] * xx [ 91 ] ) * xx [ 4 ] ) ; J [ 116 ] =
- ( xx [ 120 ] + ( xx [ 115 ] * motionData [ 105 ] + xx [ 135 ] ) * xx [ 4 ]
) ; J [ 117 ] = - ( xx [ 153 ] + xx [ 77 ] ) ; J [ 118 ] = - ( xx [ 156 ] +
xx [ 80 ] ) ; J [ 119 ] = - ( ( xx [ 144 ] * xx [ 74 ] + xx [ 150 ] ) * xx [
4 ] + xx [ 126 ] ) ; return 3 ; } static size_t computeAssemblyJacobian_2 (
const double * rtdv , const double * state , const double * motionData ,
double * J ) { double xx [ 160 ] ; ( void ) rtdv ; xx [ 0 ] = 0.0 ; xx [ 1 ]
= 0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 12 ] ;
xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = 0.389581900177037 ; xx [ 6 ] = sin (
xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ]
= 0.5901074779979933 ; xx [ 8 ] = 0.5901036711621462 ; xx [ 9 ] = xx [ 7 ] *
xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ; xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] = xx [ 8
] * xx [ 4 ] - xx [ 7 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1
] * xx [ 6 ] ; xx [ 1 ] = - xx [ 7 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx
[ 10 ] ; xx [ 14 ] = xx [ 11 ] ; xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] =
motionData [ 378 ] ; xx [ 17 ] = motionData [ 379 ] ; xx [ 18 ] = motionData
[ 380 ] ; xx [ 19 ] = motionData [ 381 ] ; pm_math_quatCompose ( xx + 12 , xx
+ 16 , xx + 20 ) ; xx [ 4 ] = 2.0 ; xx [ 5 ] = 1.0 ; xx [ 12 ] = xx [ 4 ] * (
motionData [ 378 ] * motionData [ 380 ] - motionData [ 379 ] * motionData [
381 ] ) ; xx [ 13 ] = - ( ( motionData [ 378 ] * motionData [ 379 ] +
motionData [ 380 ] * motionData [ 381 ] ) * xx [ 4 ] ) ; xx [ 14 ] = (
motionData [ 379 ] * motionData [ 379 ] + motionData [ 380 ] * motionData [
380 ] ) * xx [ 4 ] - xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 15 ] = 5.192027881355888e-12 ; xx [ 16 ] = - xx
[ 6 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_cross3 ( xx
+ 12 , xx + 16 , xx + 24 ) ; pm_math_quatXform ( xx + 20 , xx + 24 , xx + 12
) ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = xx [ 11 ] ; xx [ 21 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 382 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
383 ] ; xx [ 22 ] = xx [ 11 ] * motionData [ 383 ] - xx [ 9 ] * motionData [
382 ] ; xx [ 23 ] = - xx [ 1 ] ; xx [ 24 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [
22 ] ; pm_math_cross3 ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 19 ] =
0.02520954632904373 ; xx [ 20 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 21 ] = xx [ 19
] * xx [ 7 ] ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [ 24 ] = cos ( xx [
23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 24 ] * motionData [
15 ] - xx [ 25 ] * motionData [ 16 ] ; xx [ 30 ] = - ( xx [ 24 ] * motionData
[ 14 ] + xx [ 25 ] * motionData [ 17 ] ) ; xx [ 31 ] = xx [ 25 ] * motionData
[ 14 ] - xx [ 24 ] * motionData [ 17 ] ; xx [ 32 ] = xx [ 25 ] * motionData [
15 ] + xx [ 24 ] * motionData [ 16 ] ; xx [ 33 ] = motionData [ 371 ] ; xx [
34 ] = motionData [ 372 ] ; xx [ 35 ] = motionData [ 373 ] ; xx [ 36 ] =
motionData [ 374 ] ; pm_math_quatCompose ( xx + 29 , xx + 33 , xx + 37 ) ; xx
[ 29 ] = xx [ 4 ] * ( motionData [ 372 ] * motionData [ 374 ] - motionData [
371 ] * motionData [ 373 ] ) ; xx [ 30 ] = ( motionData [ 371 ] * motionData
[ 372 ] + motionData [ 373 ] * motionData [ 374 ] ) * xx [ 4 ] ; xx [ 31 ] =
xx [ 5 ] - ( motionData [ 372 ] * motionData [ 372 ] + motionData [ 373 ] *
motionData [ 373 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 29 , xx + 16 , xx +
32 ) ; pm_math_quatXform ( xx + 37 , xx + 32 , xx + 29 ) ; xx [ 23 ] = xx [
25 ] * motionData [ 376 ] - xx [ 24 ] * motionData [ 375 ] ; xx [ 32 ] =
7.748428954013064e-12 ; xx [ 33 ] = 5.376764528053357e-12 ; xx [ 34 ] = xx [
32 ] * xx [ 24 ] - xx [ 33 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 25 ] *
xx [ 23 ] - ( motionData [ 376 ] + xx [ 4 ] * xx [ 34 ] * xx [ 25 ] ) - xx [
33 ] ; xx [ 36 ] = motionData [ 15 ] ; xx [ 37 ] = motionData [ 16 ] ; xx [
38 ] = motionData [ 17 ] ; xx [ 25 ] = motionData [ 375 ] + xx [ 4 ] * xx [
24 ] * xx [ 23 ] - xx [ 4 ] * xx [ 34 ] * xx [ 24 ] + xx [ 32 ] ; xx [ 23 ] =
xx [ 25 ] * motionData [ 17 ] ; xx [ 24 ] = xx [ 35 ] * motionData [ 17 ] ;
xx [ 32 ] = xx [ 25 ] * motionData [ 15 ] - xx [ 35 ] * motionData [ 16 ] ;
xx [ 39 ] = - xx [ 23 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 32 ] ;
pm_math_cross3 ( xx + 36 , xx + 39 , xx + 42 ) ; xx [ 36 ] = motionData [ 203
] ; xx [ 37 ] = motionData [ 204 ] ; xx [ 38 ] = motionData [ 205 ] ; xx [ 39
] = motionData [ 206 ] ; xx [ 33 ] = 3.980251324392935e-7 ; xx [ 34 ] =
0.999999999999921 ; xx [ 40 ] = xx [ 33 ] * state [ 19 ] - xx [ 34 ] * state
[ 16 ] ; xx [ 41 ] = xx [ 33 ] * state [ 18 ] + xx [ 34 ] * state [ 17 ] ; xx
[ 45 ] = - xx [ 41 ] ; xx [ 46 ] = xx [ 34 ] * state [ 18 ] - xx [ 33 ] *
state [ 17 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 33 ] * state [ 16 ]
+ xx [ 34 ] * state [ 19 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = xx [ 45 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ;
pm_math_quatCompose ( xx + 36 , xx + 50 , xx + 54 ) ; xx [ 58 ] = motionData
[ 364 ] ; xx [ 59 ] = motionData [ 365 ] ; xx [ 60 ] = motionData [ 366 ] ;
xx [ 61 ] = motionData [ 367 ] ; pm_math_quatCompose ( xx + 54 , xx + 58 , xx
+ 62 ) ; xx [ 54 ] = motionData [ 365 ] ; xx [ 55 ] = motionData [ 366 ] ; xx
[ 56 ] = motionData [ 367 ] ; xx [ 57 ] = 7.960502648785241e-7 ; xx [ 58 ] =
xx [ 57 ] * motionData [ 367 ] ; xx [ 59 ] = xx [ 57 ] * motionData [ 365 ] +
motionData [ 366 ] ; xx [ 66 ] = xx [ 58 ] ; xx [ 67 ] = motionData [ 367 ] ;
xx [ 68 ] = - xx [ 59 ] ; pm_math_cross3 ( xx + 54 , xx + 66 , xx + 69 ) ; xx
[ 60 ] = motionData [ 364 ] * motionData [ 367 ] ; xx [ 66 ] = xx [ 5 ] + (
xx [ 69 ] - xx [ 58 ] * motionData [ 364 ] ) * xx [ 4 ] ; xx [ 67 ] = xx [ 4
] * ( xx [ 70 ] - xx [ 60 ] ) - xx [ 57 ] ; xx [ 68 ] = xx [ 4 ] * ( xx [ 71
] + xx [ 59 ] * motionData [ 364 ] ) ; pm_math_cross3 ( xx + 66 , xx + 16 ,
xx + 69 ) ; pm_math_quatXform ( xx + 62 , xx + 69 , xx + 66 ) ; xx [ 59 ] = -
( xx [ 57 ] * motionData [ 370 ] ) ; xx [ 69 ] = xx [ 59 ] ; xx [ 70 ] = -
motionData [ 370 ] ; xx [ 71 ] = motionData [ 369 ] + xx [ 57 ] * motionData
[ 368 ] ; pm_math_quatXform ( xx + 50 , xx + 69 , xx + 72 ) ; xx [ 61 ] =
2.329280111075767e-13 ; xx [ 69 ] = 2.926046524751139e-7 ; xx [ 75 ] = xx [
61 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 50 , xx + 75 , xx + 78 ) ; xx [ 81 ] = xx [ 72 ] +
xx [ 78 ] ; xx [ 82 ] = xx [ 73 ] + xx [ 79 ] ; xx [ 83 ] = xx [ 74 ] + xx [
80 ] ; pm_math_quatXform ( xx + 36 , xx + 81 , xx + 70 ) ; xx [ 73 ] =
motionData [ 365 ] - xx [ 57 ] * motionData [ 366 ] ; xx [ 78 ] = -
motionData [ 367 ] ; xx [ 79 ] = xx [ 58 ] ; xx [ 80 ] = xx [ 73 ] ;
pm_math_cross3 ( xx + 54 , xx + 78 , xx + 81 ) ; xx [ 54 ] = xx [ 57 ] + ( xx
[ 60 ] + xx [ 81 ] ) * xx [ 4 ] ; xx [ 55 ] = xx [ 5 ] + xx [ 4 ] * ( xx [ 82
] - xx [ 57 ] * xx [ 60 ] ) ; xx [ 56 ] = xx [ 4 ] * ( xx [ 83 ] - xx [ 73 ]
* motionData [ 364 ] ) ; pm_math_cross3 ( xx + 54 , xx + 16 , xx + 78 ) ;
pm_math_quatXform ( xx + 62 , xx + 78 , xx + 54 ) ; xx [ 78 ] = motionData [
370 ] ; xx [ 79 ] = xx [ 59 ] ; xx [ 80 ] = xx [ 57 ] * motionData [ 369 ] -
motionData [ 368 ] ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 57 ) ; xx [
78 ] = - xx [ 69 ] ; xx [ 79 ] = xx [ 61 ] ; xx [ 80 ] =
7.670997177269469e-12 ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 81 ) ;
xx [ 50 ] = xx [ 57 ] + xx [ 81 ] ; xx [ 51 ] = xx [ 58 ] + xx [ 82 ] ; xx [
52 ] = xx [ 59 ] + xx [ 83 ] ; pm_math_quatXform ( xx + 36 , xx + 50 , xx +
57 ) ; xx [ 50 ] = xx [ 4 ] * ( motionData [ 365 ] * motionData [ 367 ] -
motionData [ 364 ] * motionData [ 366 ] ) ; xx [ 51 ] = ( motionData [ 364 ]
* motionData [ 365 ] + motionData [ 366 ] * motionData [ 367 ] ) * xx [ 4 ] ;
xx [ 52 ] = xx [ 5 ] - ( motionData [ 365 ] * motionData [ 365 ] + motionData
[ 366 ] * motionData [ 366 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 50 , xx +
16 , xx + 81 ) ; pm_math_quatXform ( xx + 62 , xx + 81 , xx + 50 ) ; xx [ 60
] = xx [ 45 ] ; xx [ 61 ] = xx [ 47 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 45 ] =
xx [ 48 ] * motionData [ 368 ] ; xx [ 47 ] = xx [ 48 ] * motionData [ 369 ] ;
xx [ 49 ] = xx [ 41 ] * motionData [ 368 ] + xx [ 46 ] * motionData [ 369 ] ;
xx [ 63 ] = xx [ 45 ] ; xx [ 64 ] = xx [ 47 ] ; xx [ 65 ] = - xx [ 49 ] ;
pm_math_cross3 ( xx + 60 , xx + 63 , xx + 81 ) ; xx [ 53 ] =
3.641162862673871e-8 ; xx [ 63 ] = xx [ 53 ] * xx [ 48 ] ; xx [ 64 ] =
0.04575000000717538 ; xx [ 65 ] = xx [ 64 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 53
] * xx [ 41 ] + xx [ 46 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] =
xx [ 65 ] ; xx [ 86 ] = - xx [ 48 ] ; pm_math_cross3 ( xx + 60 , xx + 84 , xx
+ 87 ) ; xx [ 60 ] = xx [ 4 ] * ( xx [ 81 ] + xx [ 45 ] * xx [ 40 ] ) + xx [
4 ] * ( xx [ 87 ] + xx [ 63 ] * xx [ 40 ] ) - motionData [ 369 ] - xx [ 64 ]
; xx [ 61 ] = motionData [ 368 ] + xx [ 4 ] * ( xx [ 82 ] + xx [ 47 ] * xx [
40 ] ) + ( xx [ 65 ] * xx [ 40 ] + xx [ 88 ] ) * xx [ 4 ] + xx [ 53 ] ; xx [
62 ] = ( xx [ 83 ] - xx [ 40 ] * xx [ 49 ] ) * xx [ 4 ] + ( xx [ 89 ] - xx [
48 ] * xx [ 40 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 60 , xx +
45 ) ; xx [ 36 ] = motionData [ 210 ] ; xx [ 37 ] = motionData [ 211 ] ; xx [
38 ] = motionData [ 212 ] ; xx [ 39 ] = motionData [ 213 ] ; xx [ 40 ] =
3.980251340548381e-7 ; xx [ 41 ] = xx [ 34 ] * state [ 26 ] - xx [ 40 ] *
state [ 23 ] ; xx [ 48 ] = xx [ 34 ] * state [ 25 ] - xx [ 40 ] * state [ 24
] ; xx [ 49 ] = xx [ 40 ] * state [ 25 ] + xx [ 34 ] * state [ 24 ] ; xx [ 60
] = - xx [ 49 ] ; xx [ 61 ] = xx [ 40 ] * state [ 26 ] + xx [ 34 ] * state [
23 ] ; xx [ 40 ] = - xx [ 61 ] ; xx [ 81 ] = xx [ 41 ] ; xx [ 82 ] = xx [ 48
] ; xx [ 83 ] = xx [ 60 ] ; xx [ 84 ] = xx [ 40 ] ; pm_math_quatCompose ( xx
+ 36 , xx + 81 , xx + 85 ) ; xx [ 81 ] = motionData [ 357 ] ; xx [ 82 ] =
motionData [ 358 ] ; xx [ 83 ] = motionData [ 359 ] ; xx [ 84 ] = motionData
[ 360 ] ; pm_math_quatCompose ( xx + 85 , xx + 81 , xx + 89 ) ; xx [ 62 ] =
motionData [ 359 ] * motionData [ 359 ] ; xx [ 63 ] = motionData [ 360 ] *
motionData [ 360 ] ; xx [ 65 ] = motionData [ 358 ] * motionData [ 359 ] ; xx
[ 69 ] = motionData [ 357 ] * motionData [ 360 ] ; xx [ 73 ] = motionData [
357 ] * motionData [ 359 ] ; xx [ 74 ] = motionData [ 358 ] * motionData [
360 ] ; xx [ 81 ] = xx [ 5 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 4 ] ; xx [ 82
] = xx [ 4 ] * ( xx [ 65 ] - xx [ 69 ] ) ; xx [ 83 ] = ( xx [ 73 ] + xx [ 74
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 81 , xx + 16 , xx + 84 ) ;
pm_math_quatXform ( xx + 89 , xx + 84 , xx + 81 ) ; xx [ 84 ] = xx [ 48 ] ;
xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] *
motionData [ 362 ] ; xx [ 60 ] = xx [ 61 ] * motionData [ 363 ] ; xx [ 87 ] =
xx [ 40 ] + xx [ 60 ] ; xx [ 88 ] = xx [ 48 ] * motionData [ 362 ] ; xx [ 93
] = xx [ 48 ] * motionData [ 363 ] ; xx [ 94 ] = - xx [ 87 ] ; xx [ 95 ] = -
xx [ 88 ] ; xx [ 96 ] = - xx [ 93 ] ; pm_math_cross3 ( xx + 84 , xx + 94 , xx
+ 97 ) ; xx [ 94 ] = xx [ 49 ] * xx [ 8 ] ; xx [ 95 ] = xx [ 61 ] * xx [ 15 ]
; xx [ 96 ] = xx [ 94 ] - xx [ 95 ] ; xx [ 100 ] = xx [ 8 ] * xx [ 48 ] ; xx
[ 101 ] = xx [ 15 ] * xx [ 48 ] ; xx [ 102 ] = xx [ 96 ] ; xx [ 103 ] = xx [
100 ] ; xx [ 104 ] = - xx [ 101 ] ; pm_math_cross3 ( xx + 84 , xx + 102 , xx
+ 105 ) ; xx [ 102 ] = xx [ 4 ] * ( xx [ 97 ] - xx [ 87 ] * xx [ 41 ] ) + (
xx [ 41 ] * xx [ 96 ] + xx [ 105 ] ) * xx [ 4 ] ; xx [ 103 ] = xx [ 4 ] * (
xx [ 98 ] - xx [ 88 ] * xx [ 41 ] ) + xx [ 4 ] * ( xx [ 106 ] + xx [ 100 ] *
xx [ 41 ] ) - motionData [ 363 ] - xx [ 15 ] ; xx [ 104 ] = motionData [ 362
] + xx [ 4 ] * ( xx [ 99 ] - xx [ 93 ] * xx [ 41 ] ) + ( xx [ 107 ] - xx [
101 ] * xx [ 41 ] ) * xx [ 4 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 36 , xx
+ 102 , xx + 96 ) ; xx [ 87 ] = motionData [ 358 ] * motionData [ 358 ] ; xx
[ 88 ] = motionData [ 359 ] * motionData [ 360 ] ; xx [ 93 ] = motionData [
357 ] * motionData [ 358 ] ; xx [ 99 ] = ( xx [ 69 ] + xx [ 65 ] ) * xx [ 4 ]
; xx [ 100 ] = xx [ 5 ] - ( xx [ 63 ] + xx [ 87 ] ) * xx [ 4 ] ; xx [ 101 ] =
xx [ 4 ] * ( xx [ 88 ] - xx [ 93 ] ) ; pm_math_cross3 ( xx + 99 , xx + 16 ,
xx + 102 ) ; pm_math_quatXform ( xx + 89 , xx + 102 , xx + 99 ) ; xx [ 63 ] =
xx [ 49 ] * motionData [ 361 ] ; xx [ 65 ] = xx [ 48 ] * motionData [ 361 ] ;
xx [ 69 ] = xx [ 65 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 49 ] * motionData [ 363
] ; xx [ 102 ] = xx [ 63 ] ; xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 60 ]
; pm_math_cross3 ( xx + 84 , xx + 102 , xx + 105 ) ; xx [ 102 ] = xx [ 49 ] *
xx [ 6 ] ; xx [ 103 ] = xx [ 6 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 95 ] - xx [
103 ] ; xx [ 95 ] = xx [ 49 ] * xx [ 15 ] ; xx [ 108 ] = xx [ 102 ] ; xx [
109 ] = - xx [ 48 ] ; xx [ 110 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 84 , xx
+ 108 , xx + 111 ) ; xx [ 108 ] = motionData [ 363 ] + ( xx [ 63 ] * xx [ 41
] + xx [ 105 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 111 ] + xx [ 102 ] * xx [ 41
] ) + xx [ 15 ] ; xx [ 109 ] = ( xx [ 41 ] * xx [ 69 ] + xx [ 106 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 112 ] - xx [ 48 ] * xx [ 41 ] ) ; xx [ 110 ] = ( xx [
60 ] * xx [ 41 ] + xx [ 107 ] ) * xx [ 4 ] + ( xx [ 95 ] * xx [ 41 ] + xx [
113 ] ) * xx [ 4 ] - motionData [ 361 ] - xx [ 6 ] ; pm_math_quatXform ( xx +
36 , xx + 108 , xx + 104 ) ; xx [ 107 ] = xx [ 4 ] * ( xx [ 74 ] - xx [ 73 ]
) ; xx [ 108 ] = ( xx [ 93 ] + xx [ 88 ] ) * xx [ 4 ] ; xx [ 109 ] = xx [ 5 ]
- ( xx [ 87 ] + xx [ 62 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 107 , xx + 16
, xx + 110 ) ; pm_math_quatXform ( xx + 89 , xx + 110 , xx + 107 ) ; xx [ 15
] = xx [ 61 ] * motionData [ 361 ] ; xx [ 48 ] = xx [ 61 ] * motionData [ 362
] ; xx [ 49 ] = xx [ 65 ] - xx [ 40 ] ; xx [ 87 ] = xx [ 15 ] ; xx [ 88 ] =
xx [ 48 ] ; xx [ 89 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx +
90 ) ; xx [ 40 ] = xx [ 61 ] * xx [ 6 ] ; xx [ 60 ] = xx [ 61 ] * xx [ 8 ] ;
xx [ 61 ] = xx [ 103 ] + xx [ 94 ] ; xx [ 87 ] = xx [ 40 ] ; xx [ 88 ] = - xx
[ 60 ] ; xx [ 89 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx + 93
) ; xx [ 84 ] = ( xx [ 15 ] * xx [ 41 ] + xx [ 90 ] ) * xx [ 4 ] + ( xx [ 40
] * xx [ 41 ] + xx [ 93 ] ) * xx [ 4 ] - motionData [ 362 ] + xx [ 8 ] ; xx [
85 ] = motionData [ 361 ] + ( xx [ 48 ] * xx [ 41 ] + xx [ 91 ] ) * xx [ 4 ]
+ xx [ 4 ] * ( xx [ 94 ] - xx [ 60 ] * xx [ 41 ] ) + xx [ 6 ] ; xx [ 86 ] = (
xx [ 41 ] * xx [ 49 ] + xx [ 92 ] ) * xx [ 4 ] + ( xx [ 61 ] * xx [ 41 ] + xx
[ 95 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 84 , xx + 60 ) ; xx
[ 15 ] = xx [ 2 ] * state [ 30 ] ; xx [ 36 ] = cos ( xx [ 15 ] ) ; xx [ 37 ]
= sin ( xx [ 15 ] ) ; xx [ 38 ] = xx [ 36 ] * motionData [ 217 ] - xx [ 37 ]
* motionData [ 220 ] ; xx [ 39 ] = xx [ 36 ] * motionData [ 218 ] + xx [ 37 ]
* motionData [ 219 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 219 ] - xx [ 37 ]
* motionData [ 218 ] ; xx [ 41 ] = xx [ 37 ] * motionData [ 217 ] + xx [ 36 ]
* motionData [ 220 ] ; xx [ 84 ] = motionData [ 63 ] ; xx [ 85 ] = motionData
[ 64 ] ; xx [ 86 ] = motionData [ 65 ] ; xx [ 87 ] = motionData [ 66 ] ;
pm_math_quatCompose ( xx + 38 , xx + 84 , xx + 88 ) ; xx [ 38 ] = xx [ 4 ] *
( motionData [ 64 ] * motionData [ 66 ] - motionData [ 63 ] * motionData [ 65
] ) ; xx [ 39 ] = ( motionData [ 63 ] * motionData [ 64 ] + motionData [ 65 ]
* motionData [ 66 ] ) * xx [ 4 ] ; xx [ 40 ] = xx [ 5 ] - ( motionData [ 64 ]
* motionData [ 64 ] + motionData [ 65 ] * motionData [ 65 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 38 , xx + 16 , xx + 84 ) ; pm_math_quatXform ( xx + 88
, xx + 84 , xx + 15 ) ; xx [ 18 ] = xx [ 37 ] * motionData [ 68 ] ; xx [ 38 ]
= xx [ 37 ] * motionData [ 67 ] ; xx [ 39 ] = 0.02540000000000185 ; xx [ 40 ]
= xx [ 39 ] * xx [ 37 ] ; xx [ 41 ] = xx [ 4 ] * ( xx [ 18 ] * xx [ 37 ] - xx
[ 36 ] * xx [ 38 ] ) - motionData [ 68 ] + xx [ 4 ] * xx [ 36 ] * xx [ 40 ] ;
xx [ 84 ] = motionData [ 218 ] ; xx [ 85 ] = motionData [ 219 ] ; xx [ 86 ] =
motionData [ 220 ] ; xx [ 48 ] = motionData [ 67 ] - ( ( xx [ 36 ] * xx [ 18
] + xx [ 38 ] * xx [ 37 ] ) * xx [ 4 ] - xx [ 4 ] * xx [ 40 ] * xx [ 37 ] ) -
xx [ 39 ] ; xx [ 18 ] = xx [ 48 ] * motionData [ 220 ] ; xx [ 36 ] = xx [ 41
] * motionData [ 220 ] ; xx [ 37 ] = xx [ 48 ] * motionData [ 218 ] - xx [ 41
] * motionData [ 219 ] ; xx [ 38 ] = - xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx
[ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx + 84 , xx + 38 , xx + 87 ) ; xx [ 90
] = motionData [ 224 ] ; xx [ 91 ] = motionData [ 225 ] ; xx [ 92 ] =
motionData [ 226 ] ; xx [ 93 ] = motionData [ 227 ] ; xx [ 38 ] =
0.3535533905932758 ; xx [ 39 ] = xx [ 2 ] * state [ 36 ] ; xx [ 40 ] = cos (
xx [ 39 ] ) ; xx [ 49 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 63 ] = sin ( xx [ 39 ]
) ; xx [ 39 ] = xx [ 38 ] * xx [ 63 ] ; xx [ 38 ] = xx [ 49 ] + xx [ 39 ] ;
xx [ 65 ] = 0.6123724356957934 ; xx [ 69 ] = xx [ 65 ] * xx [ 63 ] ; xx [ 63
] = xx [ 65 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 69 ] - xx [ 63 ] ; xx [ 65 ] =
xx [ 63 ] + xx [ 69 ] ; xx [ 63 ] = - xx [ 65 ] ; xx [ 69 ] = xx [ 39 ] - xx
[ 49 ] ; xx [ 110 ] = - xx [ 38 ] ; xx [ 111 ] = xx [ 40 ] ; xx [ 112 ] = xx
[ 63 ] ; xx [ 113 ] = xx [ 69 ] ; pm_math_quatCompose ( xx + 90 , xx + 110 ,
xx + 114 ) ; xx [ 39 ] = xx [ 6 ] * xx [ 117 ] ; xx [ 49 ] = xx [ 6 ] * xx [
115 ] - xx [ 8 ] * xx [ 116 ] ; xx [ 84 ] = - xx [ 39 ] ; xx [ 85 ] = xx [ 8
] * xx [ 117 ] ; xx [ 86 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 115 , xx + 84
, xx + 110 ) ; xx [ 73 ] = 3.80025733104361e-12 ; xx [ 84 ] = xx [ 40 ] ; xx
[ 85 ] = xx [ 63 ] ; xx [ 86 ] = xx [ 69 ] ; xx [ 63 ] =
3.881762117297072e-12 ; xx [ 74 ] = xx [ 63 ] * xx [ 69 ] ; xx [ 94 ] = xx [
73 ] * xx [ 69 ] ; xx [ 69 ] = xx [ 63 ] * xx [ 40 ] + xx [ 65 ] * xx [ 73 ]
; xx [ 118 ] = - xx [ 74 ] ; xx [ 119 ] = xx [ 94 ] ; xx [ 120 ] = xx [ 69 ]
; pm_math_cross3 ( xx + 84 , xx + 118 , xx + 121 ) ; xx [ 84 ] = xx [ 73 ] +
xx [ 4 ] * ( xx [ 121 ] + xx [ 38 ] * xx [ 74 ] ) ; xx [ 85 ] = xx [ 63 ] + (
xx [ 122 ] - xx [ 38 ] * xx [ 94 ] ) * xx [ 4 ] ; xx [ 86 ] = ( xx [ 123 ] -
xx [ 38 ] * xx [ 69 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 90 , xx + 84 ,
xx + 118 ) ; xx [ 38 ] = 0.3162553791961485 ; xx [ 40 ] = xx [ 2 ] * state [
75 ] ; xx [ 63 ] = cos ( xx [ 40 ] ) ; xx [ 65 ] = 0.3162538200043588 ; xx [
69 ] = sin ( xx [ 40 ] ) ; xx [ 40 ] = xx [ 38 ] * xx [ 63 ] - xx [ 65 ] * xx
[ 69 ] ; xx [ 73 ] = 0.6324445710612965 ; xx [ 74 ] = 0.6324396579890005 ; xx
[ 84 ] = xx [ 73 ] * xx [ 63 ] + xx [ 74 ] * xx [ 69 ] ; xx [ 85 ] = xx [ 73
] * xx [ 69 ] - xx [ 74 ] * xx [ 63 ] ; xx [ 73 ] = xx [ 65 ] * xx [ 63 ] +
xx [ 38 ] * xx [ 69 ] ; xx [ 38 ] = - xx [ 73 ] ; xx [ 90 ] = xx [ 40 ] ; xx
[ 91 ] = xx [ 84 ] ; xx [ 92 ] = xx [ 85 ] ; xx [ 93 ] = xx [ 38 ] ; xx [ 121
] = motionData [ 350 ] ; xx [ 122 ] = motionData [ 351 ] ; xx [ 123 ] =
motionData [ 352 ] ; xx [ 124 ] = motionData [ 353 ] ; pm_math_quatCompose (
xx + 90 , xx + 121 , xx + 125 ) ; xx [ 90 ] = xx [ 4 ] * ( motionData [ 350 ]
* motionData [ 352 ] - motionData [ 351 ] * motionData [ 353 ] ) ; xx [ 91 ]
= - ( ( motionData [ 350 ] * motionData [ 351 ] + motionData [ 352 ] *
motionData [ 353 ] ) * xx [ 4 ] ) ; xx [ 92 ] = ( motionData [ 351 ] *
motionData [ 351 ] + motionData [ 352 ] * motionData [ 352 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 63 ] = 3.641924106626229e-8 ; xx [ 65 ] = 0.04574999999998041
; xx [ 69 ] = 2.92603149291605e-7 ; xx [ 93 ] = xx [ 63 ] ; xx [ 94 ] = xx [
65 ] ; xx [ 95 ] = xx [ 69 ] ; pm_math_cross3 ( xx + 90 , xx + 93 , xx + 121
) ; pm_math_quatXform ( xx + 125 , xx + 121 , xx + 90 ) ; xx [ 121 ] = xx [
84 ] ; xx [ 122 ] = xx [ 85 ] ; xx [ 123 ] = xx [ 38 ] ; xx [ 38 ] = xx [ 73
] * motionData [ 354 ] ; xx [ 74 ] = xx [ 73 ] * motionData [ 355 ] ; xx [ 86
] = xx [ 84 ] * motionData [ 354 ] + xx [ 85 ] * motionData [ 355 ] ; xx [
124 ] = - xx [ 38 ] ; xx [ 125 ] = - xx [ 74 ] ; xx [ 126 ] = - xx [ 86 ] ;
pm_math_cross3 ( xx + 121 , xx + 124 , xx + 127 ) ; xx [ 102 ] = xx [ 19 ] *
xx [ 84 ] ; xx [ 103 ] = xx [ 19 ] * xx [ 73 ] ; xx [ 113 ] = xx [ 2 ] *
state [ 77 ] ; xx [ 2 ] = cos ( xx [ 113 ] ) ; xx [ 115 ] = sin ( xx [ 113 ]
) ; xx [ 121 ] = xx [ 2 ] * motionData [ 148 ] - xx [ 115 ] * motionData [
149 ] ; xx [ 122 ] = - ( xx [ 2 ] * motionData [ 147 ] + xx [ 115 ] *
motionData [ 150 ] ) ; xx [ 123 ] = xx [ 115 ] * motionData [ 147 ] - xx [ 2
] * motionData [ 150 ] ; xx [ 124 ] = xx [ 115 ] * motionData [ 148 ] + xx [
2 ] * motionData [ 149 ] ; xx [ 130 ] = motionData [ 161 ] ; xx [ 131 ] =
motionData [ 162 ] ; xx [ 132 ] = motionData [ 163 ] ; xx [ 133 ] =
motionData [ 164 ] ; pm_math_quatCompose ( xx + 121 , xx + 130 , xx + 134 ) ;
xx [ 121 ] = xx [ 4 ] * ( motionData [ 162 ] * motionData [ 164 ] -
motionData [ 161 ] * motionData [ 163 ] ) ; xx [ 122 ] = ( motionData [ 161 ]
* motionData [ 162 ] + motionData [ 163 ] * motionData [ 164 ] ) * xx [ 4 ] ;
xx [ 123 ] = xx [ 5 ] - ( motionData [ 162 ] * motionData [ 162 ] +
motionData [ 163 ] * motionData [ 163 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
121 , xx + 93 , xx + 124 ) ; pm_math_quatXform ( xx + 134 , xx + 124 , xx +
93 ) ; xx [ 5 ] = xx [ 115 ] * motionData [ 166 ] - xx [ 2 ] * motionData [
165 ] ; xx [ 113 ] = 5.157931604049537e-12 ; xx [ 116 ] =
9.862118968695376e-13 ; xx [ 121 ] = xx [ 113 ] * xx [ 2 ] + xx [ 116 ] * xx
[ 115 ] ; xx [ 122 ] = xx [ 4 ] * xx [ 115 ] * xx [ 5 ] - ( motionData [ 166
] - xx [ 4 ] * xx [ 121 ] * xx [ 115 ] ) - xx [ 116 ] ; xx [ 123 ] =
motionData [ 148 ] ; xx [ 124 ] = motionData [ 149 ] ; xx [ 125 ] =
motionData [ 150 ] ; xx [ 115 ] = motionData [ 165 ] + xx [ 4 ] * xx [ 2 ] *
xx [ 5 ] + xx [ 4 ] * xx [ 121 ] * xx [ 2 ] - xx [ 113 ] ; xx [ 2 ] = xx [
115 ] * motionData [ 150 ] ; xx [ 5 ] = xx [ 122 ] * motionData [ 150 ] ; xx
[ 113 ] = xx [ 115 ] * motionData [ 148 ] - xx [ 122 ] * motionData [ 149 ] ;
xx [ 130 ] = - xx [ 2 ] ; xx [ 131 ] = xx [ 5 ] ; xx [ 132 ] = xx [ 113 ] ;
pm_math_cross3 ( xx + 123 , xx + 130 , xx + 133 ) ; xx [ 123 ] = motionData [
329 ] ; xx [ 124 ] = motionData [ 330 ] ; xx [ 125 ] = motionData [ 331 ] ;
xx [ 126 ] = motionData [ 332 ] ; xx [ 116 ] = xx [ 33 ] * state [ 82 ] - xx
[ 34 ] * state [ 79 ] ; xx [ 121 ] = xx [ 33 ] * state [ 81 ] + xx [ 34 ] *
state [ 80 ] ; xx [ 130 ] = - xx [ 121 ] ; xx [ 131 ] = xx [ 34 ] * state [
81 ] - xx [ 33 ] * state [ 80 ] ; xx [ 132 ] = - xx [ 131 ] ; xx [ 136 ] = xx
[ 33 ] * state [ 79 ] + xx [ 34 ] * state [ 82 ] ; xx [ 33 ] = - xx [ 136 ] ;
xx [ 137 ] = xx [ 116 ] ; xx [ 138 ] = xx [ 130 ] ; xx [ 139 ] = xx [ 132 ] ;
xx [ 140 ] = xx [ 33 ] ; pm_math_quatCompose ( xx + 123 , xx + 137 , xx + 141
) ; xx [ 34 ] = - 2.329268144978725e-13 ; xx [ 145 ] = xx [ 34 ] ; xx [ 146 ]
= - xx [ 69 ] ; xx [ 147 ] = 0.0457500000000094 ; pm_math_quatXform ( xx +
141 , xx + 145 , xx + 148 ) ; pm_math_quatXform ( xx + 137 , xx + 75 , xx +
145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx + 75 ) ; xx [ 145 ] = xx
[ 69 ] ; xx [ 146 ] = xx [ 34 ] ; xx [ 147 ] = 5.855191459023036e-14 ;
pm_math_quatXform ( xx + 141 , xx + 145 , xx + 151 ) ; pm_math_quatXform ( xx
+ 137 , xx + 78 , xx + 145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx +
78 ) ; xx [ 34 ] = xx [ 63 ] * xx [ 144 ] ; xx [ 69 ] = xx [ 63 ] * xx [ 142
] + xx [ 65 ] * xx [ 143 ] ; xx [ 137 ] = - xx [ 34 ] ; xx [ 138 ] = - ( xx [
65 ] * xx [ 144 ] ) ; xx [ 139 ] = xx [ 69 ] ; pm_math_cross3 ( xx + 142 , xx
+ 137 , xx + 145 ) ; xx [ 137 ] = xx [ 130 ] ; xx [ 138 ] = xx [ 132 ] ; xx [
139 ] = xx [ 33 ] ; xx [ 33 ] = xx [ 53 ] * xx [ 136 ] ; xx [ 130 ] = xx [ 64
] * xx [ 136 ] ; xx [ 132 ] = xx [ 53 ] * xx [ 121 ] + xx [ 131 ] * xx [ 64 ]
; xx [ 154 ] = xx [ 33 ] ; xx [ 155 ] = xx [ 130 ] ; xx [ 156 ] = - xx [ 132
] ; pm_math_cross3 ( xx + 137 , xx + 154 , xx + 157 ) ; xx [ 136 ] = xx [ 4 ]
* ( xx [ 157 ] + xx [ 33 ] * xx [ 116 ] ) - xx [ 64 ] ; xx [ 137 ] = xx [ 53
] + ( xx [ 130 ] * xx [ 116 ] + xx [ 158 ] ) * xx [ 4 ] ; xx [ 138 ] = ( xx [
159 ] - xx [ 132 ] * xx [ 116 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 123 ,
xx + 136 , xx + 130 ) ; J [ 6 ] = xx [ 12 ] + motionData [ 383 ] + ( xx [ 26
] - xx [ 3 ] * xx [ 1 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 11 ] * xx [ 20 ] -
xx [ 3 ] * xx [ 21 ] ) ; J [ 7 ] = xx [ 29 ] + xx [ 35 ] + xx [ 4 ] * ( xx [
42 ] - xx [ 23 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 66 ] + xx [ 70 ] ; J
[ 9 ] = xx [ 54 ] + xx [ 57 ] ; J [ 10 ] = xx [ 50 ] + xx [ 45 ] ; J [ 11 ] =
xx [ 81 ] + xx [ 96 ] ; J [ 12 ] = xx [ 99 ] + xx [ 104 ] ; J [ 13 ] = xx [
107 ] + xx [ 60 ] ; J [ 14 ] = xx [ 15 ] + xx [ 41 ] + xx [ 4 ] * ( xx [ 87 ]
- xx [ 18 ] * motionData [ 217 ] ) ; J [ 17 ] = xx [ 4 ] * ( xx [ 110 ] - xx
[ 114 ] * xx [ 39 ] ) + xx [ 118 ] + xx [ 8 ] ; J [ 35 ] = - ( xx [ 90 ] +
motionData [ 355 ] + ( xx [ 127 ] - xx [ 40 ] * xx [ 38 ] ) * xx [ 4 ] - xx [
4 ] * ( xx [ 85 ] * xx [ 102 ] + xx [ 40 ] * xx [ 103 ] ) ) ; J [ 36 ] = - (
xx [ 93 ] + xx [ 122 ] + xx [ 4 ] * ( xx [ 133 ] - xx [ 2 ] * motionData [
147 ] ) ) ; J [ 37 ] = - ( xx [ 148 ] + xx [ 75 ] ) ; J [ 38 ] = - ( xx [ 151
] + xx [ 78 ] ) ; J [ 39 ] = - ( xx [ 4 ] * ( xx [ 145 ] - xx [ 141 ] * xx [
34 ] ) + xx [ 130 ] - xx [ 65 ] ) ; J [ 51 ] = xx [ 13 ] + ( xx [ 27 ] - xx [
3 ] * xx [ 10 ] ) * xx [ 4 ] - ( motionData [ 382 ] - ( xx [ 21 ] * xx [ 7 ]
+ xx [ 20 ] * xx [ 9 ] ) * xx [ 4 ] ) - xx [ 19 ] ; J [ 52 ] = xx [ 30 ] + xx
[ 25 ] + ( xx [ 24 ] * motionData [ 14 ] + xx [ 43 ] ) * xx [ 4 ] ; J [ 53 ]
= xx [ 67 ] + xx [ 71 ] ; J [ 54 ] = xx [ 55 ] + xx [ 58 ] ; J [ 55 ] = xx [
51 ] + xx [ 46 ] ; J [ 56 ] = xx [ 82 ] + xx [ 97 ] ; J [ 57 ] = xx [ 100 ] +
xx [ 105 ] ; J [ 58 ] = xx [ 108 ] + xx [ 61 ] ; J [ 59 ] = xx [ 16 ] + xx [
48 ] + ( xx [ 36 ] * motionData [ 217 ] + xx [ 88 ] ) * xx [ 4 ] ; J [ 62 ] =
( xx [ 8 ] * xx [ 114 ] * xx [ 117 ] + xx [ 111 ] ) * xx [ 4 ] + xx [ 119 ] +
xx [ 6 ] ; J [ 80 ] = - ( xx [ 91 ] + ( xx [ 128 ] - xx [ 40 ] * xx [ 74 ] )
* xx [ 4 ] - ( motionData [ 354 ] - ( xx [ 103 ] * xx [ 73 ] + xx [ 102 ] *
xx [ 84 ] ) * xx [ 4 ] ) - xx [ 19 ] ) ; J [ 81 ] = - ( xx [ 94 ] + xx [ 115
] + ( xx [ 5 ] * motionData [ 147 ] + xx [ 134 ] ) * xx [ 4 ] ) ; J [ 82 ] =
- ( xx [ 149 ] + xx [ 76 ] ) ; J [ 83 ] = - ( xx [ 152 ] + xx [ 79 ] ) ; J [
84 ] = - ( ( xx [ 146 ] - xx [ 65 ] * xx [ 141 ] * xx [ 144 ] ) * xx [ 4 ] +
xx [ 131 ] + xx [ 63 ] ) ; J [ 96 ] = xx [ 14 ] + xx [ 4 ] * ( xx [ 28 ] - xx
[ 3 ] * xx [ 22 ] ) + ( xx [ 3 ] * xx [ 20 ] + xx [ 11 ] * xx [ 21 ] ) * xx [
4 ] ; J [ 97 ] = xx [ 31 ] + ( xx [ 32 ] * motionData [ 14 ] + xx [ 44 ] ) *
xx [ 4 ] ; J [ 98 ] = xx [ 68 ] + xx [ 72 ] ; J [ 99 ] = xx [ 56 ] + xx [ 59
] ; J [ 100 ] = xx [ 52 ] + xx [ 47 ] ; J [ 101 ] = xx [ 83 ] + xx [ 98 ] ; J
[ 102 ] = xx [ 101 ] + xx [ 106 ] ; J [ 103 ] = xx [ 109 ] + xx [ 62 ] ; J [
104 ] = xx [ 17 ] + ( xx [ 37 ] * motionData [ 217 ] + xx [ 89 ] ) * xx [ 4 ]
; J [ 107 ] = ( xx [ 114 ] * xx [ 49 ] + xx [ 112 ] ) * xx [ 4 ] + xx [ 120 ]
; J [ 125 ] = - ( xx [ 92 ] + xx [ 4 ] * ( xx [ 129 ] - xx [ 40 ] * xx [ 86 ]
) + ( xx [ 85 ] * xx [ 103 ] - xx [ 40 ] * xx [ 102 ] ) * xx [ 4 ] ) ; J [
126 ] = - ( xx [ 95 ] + ( xx [ 113 ] * motionData [ 147 ] + xx [ 135 ] ) * xx
[ 4 ] ) ; J [ 127 ] = - ( xx [ 150 ] + xx [ 77 ] ) ; J [ 128 ] = - ( xx [ 153
] + xx [ 80 ] ) ; J [ 129 ] = - ( ( xx [ 141 ] * xx [ 69 ] + xx [ 147 ] ) *
xx [ 4 ] + xx [ 132 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_3 ( const double * rtdv , const double * state ,
const double * motionData , double * J ) { double xx [ 160 ] ; ( void ) rtdv
; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ]
= xx [ 2 ] * state [ 12 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] =
0.389581900177037 ; xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.5901074779979933 ; xx [ 8 ] =
0.5901036711621462 ; xx [ 9 ] = xx [ 7 ] * xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ;
xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] - xx [ 7 ] * xx [ 6
] ; xx [ 7 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1 ] * xx [ 6 ] ; xx [ 1 ] = - xx [
7 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 11 ] ;
xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = motionData [ 434 ] ; xx [ 17 ] =
motionData [ 435 ] ; xx [ 18 ] = motionData [ 436 ] ; xx [ 19 ] = motionData
[ 437 ] ; pm_math_quatCompose ( xx + 12 , xx + 16 , xx + 20 ) ; xx [ 4 ] =
2.0 ; xx [ 5 ] = 1.0 ; xx [ 12 ] = xx [ 4 ] * ( motionData [ 434 ] *
motionData [ 436 ] - motionData [ 435 ] * motionData [ 437 ] ) ; xx [ 13 ] =
- ( ( motionData [ 434 ] * motionData [ 435 ] + motionData [ 436 ] *
motionData [ 437 ] ) * xx [ 4 ] ) ; xx [ 14 ] = ( motionData [ 435 ] *
motionData [ 435 ] + motionData [ 436 ] * motionData [ 436 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 15 ] = 5.192027881355888e-12 ; xx [ 16 ] = - xx
[ 6 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_cross3 ( xx
+ 12 , xx + 16 , xx + 24 ) ; pm_math_quatXform ( xx + 20 , xx + 24 , xx + 12
) ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = xx [ 11 ] ; xx [ 21 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 438 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
439 ] ; xx [ 22 ] = xx [ 11 ] * motionData [ 439 ] - xx [ 9 ] * motionData [
438 ] ; xx [ 23 ] = - xx [ 1 ] ; xx [ 24 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [
22 ] ; pm_math_cross3 ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 19 ] =
0.02520954632904373 ; xx [ 20 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 21 ] = xx [ 19
] * xx [ 7 ] ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [ 24 ] = cos ( xx [
23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 24 ] * motionData [
15 ] - xx [ 25 ] * motionData [ 16 ] ; xx [ 30 ] = - ( xx [ 24 ] * motionData
[ 14 ] + xx [ 25 ] * motionData [ 17 ] ) ; xx [ 31 ] = xx [ 25 ] * motionData
[ 14 ] - xx [ 24 ] * motionData [ 17 ] ; xx [ 32 ] = xx [ 25 ] * motionData [
15 ] + xx [ 24 ] * motionData [ 16 ] ; xx [ 33 ] = motionData [ 427 ] ; xx [
34 ] = motionData [ 428 ] ; xx [ 35 ] = motionData [ 429 ] ; xx [ 36 ] =
motionData [ 430 ] ; pm_math_quatCompose ( xx + 29 , xx + 33 , xx + 37 ) ; xx
[ 29 ] = xx [ 4 ] * ( motionData [ 428 ] * motionData [ 430 ] - motionData [
427 ] * motionData [ 429 ] ) ; xx [ 30 ] = ( motionData [ 427 ] * motionData
[ 428 ] + motionData [ 429 ] * motionData [ 430 ] ) * xx [ 4 ] ; xx [ 31 ] =
xx [ 5 ] - ( motionData [ 428 ] * motionData [ 428 ] + motionData [ 429 ] *
motionData [ 429 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 29 , xx + 16 , xx +
32 ) ; pm_math_quatXform ( xx + 37 , xx + 32 , xx + 29 ) ; xx [ 23 ] = xx [
25 ] * motionData [ 432 ] - xx [ 24 ] * motionData [ 431 ] ; xx [ 32 ] =
7.748428954013064e-12 ; xx [ 33 ] = 5.376764528053357e-12 ; xx [ 34 ] = xx [
32 ] * xx [ 24 ] - xx [ 33 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 25 ] *
xx [ 23 ] - ( motionData [ 432 ] + xx [ 4 ] * xx [ 34 ] * xx [ 25 ] ) - xx [
33 ] ; xx [ 36 ] = motionData [ 15 ] ; xx [ 37 ] = motionData [ 16 ] ; xx [
38 ] = motionData [ 17 ] ; xx [ 25 ] = motionData [ 431 ] + xx [ 4 ] * xx [
24 ] * xx [ 23 ] - xx [ 4 ] * xx [ 34 ] * xx [ 24 ] + xx [ 32 ] ; xx [ 23 ] =
xx [ 25 ] * motionData [ 17 ] ; xx [ 24 ] = xx [ 35 ] * motionData [ 17 ] ;
xx [ 32 ] = xx [ 25 ] * motionData [ 15 ] - xx [ 35 ] * motionData [ 16 ] ;
xx [ 39 ] = - xx [ 23 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 32 ] ;
pm_math_cross3 ( xx + 36 , xx + 39 , xx + 42 ) ; xx [ 36 ] = motionData [ 203
] ; xx [ 37 ] = motionData [ 204 ] ; xx [ 38 ] = motionData [ 205 ] ; xx [ 39
] = motionData [ 206 ] ; xx [ 33 ] = 3.980251324392935e-7 ; xx [ 34 ] =
0.999999999999921 ; xx [ 40 ] = xx [ 33 ] * state [ 19 ] - xx [ 34 ] * state
[ 16 ] ; xx [ 41 ] = xx [ 33 ] * state [ 18 ] + xx [ 34 ] * state [ 17 ] ; xx
[ 45 ] = - xx [ 41 ] ; xx [ 46 ] = xx [ 34 ] * state [ 18 ] - xx [ 33 ] *
state [ 17 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 33 ] * state [ 16 ]
+ xx [ 34 ] * state [ 19 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = xx [ 45 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ;
pm_math_quatCompose ( xx + 36 , xx + 50 , xx + 54 ) ; xx [ 58 ] = motionData
[ 420 ] ; xx [ 59 ] = motionData [ 421 ] ; xx [ 60 ] = motionData [ 422 ] ;
xx [ 61 ] = motionData [ 423 ] ; pm_math_quatCompose ( xx + 54 , xx + 58 , xx
+ 62 ) ; xx [ 54 ] = motionData [ 421 ] ; xx [ 55 ] = motionData [ 422 ] ; xx
[ 56 ] = motionData [ 423 ] ; xx [ 57 ] = 7.960502648785241e-7 ; xx [ 58 ] =
xx [ 57 ] * motionData [ 423 ] ; xx [ 59 ] = xx [ 57 ] * motionData [ 421 ] +
motionData [ 422 ] ; xx [ 66 ] = xx [ 58 ] ; xx [ 67 ] = motionData [ 423 ] ;
xx [ 68 ] = - xx [ 59 ] ; pm_math_cross3 ( xx + 54 , xx + 66 , xx + 69 ) ; xx
[ 60 ] = motionData [ 420 ] * motionData [ 423 ] ; xx [ 66 ] = xx [ 5 ] + (
xx [ 69 ] - xx [ 58 ] * motionData [ 420 ] ) * xx [ 4 ] ; xx [ 67 ] = xx [ 4
] * ( xx [ 70 ] - xx [ 60 ] ) - xx [ 57 ] ; xx [ 68 ] = xx [ 4 ] * ( xx [ 71
] + xx [ 59 ] * motionData [ 420 ] ) ; pm_math_cross3 ( xx + 66 , xx + 16 ,
xx + 69 ) ; pm_math_quatXform ( xx + 62 , xx + 69 , xx + 66 ) ; xx [ 59 ] = -
( xx [ 57 ] * motionData [ 426 ] ) ; xx [ 69 ] = xx [ 59 ] ; xx [ 70 ] = -
motionData [ 426 ] ; xx [ 71 ] = motionData [ 425 ] + xx [ 57 ] * motionData
[ 424 ] ; pm_math_quatXform ( xx + 50 , xx + 69 , xx + 72 ) ; xx [ 61 ] =
2.329280111075767e-13 ; xx [ 69 ] = 2.926046524751139e-7 ; xx [ 75 ] = xx [
61 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 50 , xx + 75 , xx + 78 ) ; xx [ 81 ] = xx [ 72 ] +
xx [ 78 ] ; xx [ 82 ] = xx [ 73 ] + xx [ 79 ] ; xx [ 83 ] = xx [ 74 ] + xx [
80 ] ; pm_math_quatXform ( xx + 36 , xx + 81 , xx + 70 ) ; xx [ 73 ] =
motionData [ 421 ] - xx [ 57 ] * motionData [ 422 ] ; xx [ 78 ] = -
motionData [ 423 ] ; xx [ 79 ] = xx [ 58 ] ; xx [ 80 ] = xx [ 73 ] ;
pm_math_cross3 ( xx + 54 , xx + 78 , xx + 81 ) ; xx [ 54 ] = xx [ 57 ] + ( xx
[ 60 ] + xx [ 81 ] ) * xx [ 4 ] ; xx [ 55 ] = xx [ 5 ] + xx [ 4 ] * ( xx [ 82
] - xx [ 57 ] * xx [ 60 ] ) ; xx [ 56 ] = xx [ 4 ] * ( xx [ 83 ] - xx [ 73 ]
* motionData [ 420 ] ) ; pm_math_cross3 ( xx + 54 , xx + 16 , xx + 78 ) ;
pm_math_quatXform ( xx + 62 , xx + 78 , xx + 54 ) ; xx [ 78 ] = motionData [
426 ] ; xx [ 79 ] = xx [ 59 ] ; xx [ 80 ] = xx [ 57 ] * motionData [ 425 ] -
motionData [ 424 ] ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 57 ) ; xx [
78 ] = - xx [ 69 ] ; xx [ 79 ] = xx [ 61 ] ; xx [ 80 ] =
7.670997177269469e-12 ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 81 ) ;
xx [ 50 ] = xx [ 57 ] + xx [ 81 ] ; xx [ 51 ] = xx [ 58 ] + xx [ 82 ] ; xx [
52 ] = xx [ 59 ] + xx [ 83 ] ; pm_math_quatXform ( xx + 36 , xx + 50 , xx +
57 ) ; xx [ 50 ] = xx [ 4 ] * ( motionData [ 421 ] * motionData [ 423 ] -
motionData [ 420 ] * motionData [ 422 ] ) ; xx [ 51 ] = ( motionData [ 420 ]
* motionData [ 421 ] + motionData [ 422 ] * motionData [ 423 ] ) * xx [ 4 ] ;
xx [ 52 ] = xx [ 5 ] - ( motionData [ 421 ] * motionData [ 421 ] + motionData
[ 422 ] * motionData [ 422 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 50 , xx +
16 , xx + 81 ) ; pm_math_quatXform ( xx + 62 , xx + 81 , xx + 50 ) ; xx [ 60
] = xx [ 45 ] ; xx [ 61 ] = xx [ 47 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 45 ] =
xx [ 48 ] * motionData [ 424 ] ; xx [ 47 ] = xx [ 48 ] * motionData [ 425 ] ;
xx [ 49 ] = xx [ 41 ] * motionData [ 424 ] + xx [ 46 ] * motionData [ 425 ] ;
xx [ 63 ] = xx [ 45 ] ; xx [ 64 ] = xx [ 47 ] ; xx [ 65 ] = - xx [ 49 ] ;
pm_math_cross3 ( xx + 60 , xx + 63 , xx + 81 ) ; xx [ 53 ] =
3.641162862673871e-8 ; xx [ 63 ] = xx [ 53 ] * xx [ 48 ] ; xx [ 64 ] =
0.04575000000717538 ; xx [ 65 ] = xx [ 64 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 53
] * xx [ 41 ] + xx [ 46 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] =
xx [ 65 ] ; xx [ 86 ] = - xx [ 48 ] ; pm_math_cross3 ( xx + 60 , xx + 84 , xx
+ 87 ) ; xx [ 60 ] = xx [ 4 ] * ( xx [ 81 ] + xx [ 45 ] * xx [ 40 ] ) + xx [
4 ] * ( xx [ 87 ] + xx [ 63 ] * xx [ 40 ] ) - motionData [ 425 ] - xx [ 64 ]
; xx [ 61 ] = motionData [ 424 ] + xx [ 4 ] * ( xx [ 82 ] + xx [ 47 ] * xx [
40 ] ) + ( xx [ 65 ] * xx [ 40 ] + xx [ 88 ] ) * xx [ 4 ] + xx [ 53 ] ; xx [
62 ] = ( xx [ 83 ] - xx [ 49 ] * xx [ 40 ] ) * xx [ 4 ] + ( xx [ 89 ] - xx [
48 ] * xx [ 40 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 60 , xx +
45 ) ; xx [ 36 ] = motionData [ 210 ] ; xx [ 37 ] = motionData [ 211 ] ; xx [
38 ] = motionData [ 212 ] ; xx [ 39 ] = motionData [ 213 ] ; xx [ 40 ] =
3.980251340548381e-7 ; xx [ 41 ] = xx [ 34 ] * state [ 26 ] - xx [ 40 ] *
state [ 23 ] ; xx [ 48 ] = xx [ 34 ] * state [ 25 ] - xx [ 40 ] * state [ 24
] ; xx [ 49 ] = xx [ 40 ] * state [ 25 ] + xx [ 34 ] * state [ 24 ] ; xx [ 60
] = - xx [ 49 ] ; xx [ 61 ] = xx [ 40 ] * state [ 26 ] + xx [ 34 ] * state [
23 ] ; xx [ 40 ] = - xx [ 61 ] ; xx [ 81 ] = xx [ 41 ] ; xx [ 82 ] = xx [ 48
] ; xx [ 83 ] = xx [ 60 ] ; xx [ 84 ] = xx [ 40 ] ; pm_math_quatCompose ( xx
+ 36 , xx + 81 , xx + 85 ) ; xx [ 81 ] = motionData [ 413 ] ; xx [ 82 ] =
motionData [ 414 ] ; xx [ 83 ] = motionData [ 415 ] ; xx [ 84 ] = motionData
[ 416 ] ; pm_math_quatCompose ( xx + 85 , xx + 81 , xx + 89 ) ; xx [ 62 ] =
motionData [ 415 ] * motionData [ 415 ] ; xx [ 63 ] = motionData [ 416 ] *
motionData [ 416 ] ; xx [ 65 ] = motionData [ 414 ] * motionData [ 415 ] ; xx
[ 69 ] = motionData [ 413 ] * motionData [ 416 ] ; xx [ 73 ] = motionData [
413 ] * motionData [ 415 ] ; xx [ 74 ] = motionData [ 414 ] * motionData [
416 ] ; xx [ 81 ] = xx [ 5 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 4 ] ; xx [ 82
] = xx [ 4 ] * ( xx [ 65 ] - xx [ 69 ] ) ; xx [ 83 ] = ( xx [ 73 ] + xx [ 74
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 81 , xx + 16 , xx + 84 ) ;
pm_math_quatXform ( xx + 89 , xx + 84 , xx + 81 ) ; xx [ 84 ] = xx [ 48 ] ;
xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] *
motionData [ 418 ] ; xx [ 60 ] = xx [ 61 ] * motionData [ 419 ] ; xx [ 87 ] =
xx [ 40 ] + xx [ 60 ] ; xx [ 88 ] = xx [ 48 ] * motionData [ 418 ] ; xx [ 93
] = xx [ 48 ] * motionData [ 419 ] ; xx [ 94 ] = - xx [ 87 ] ; xx [ 95 ] = -
xx [ 88 ] ; xx [ 96 ] = - xx [ 93 ] ; pm_math_cross3 ( xx + 84 , xx + 94 , xx
+ 97 ) ; xx [ 94 ] = xx [ 49 ] * xx [ 8 ] ; xx [ 95 ] = xx [ 61 ] * xx [ 15 ]
; xx [ 96 ] = xx [ 94 ] - xx [ 95 ] ; xx [ 100 ] = xx [ 8 ] * xx [ 48 ] ; xx
[ 101 ] = xx [ 15 ] * xx [ 48 ] ; xx [ 102 ] = xx [ 96 ] ; xx [ 103 ] = xx [
100 ] ; xx [ 104 ] = - xx [ 101 ] ; pm_math_cross3 ( xx + 84 , xx + 102 , xx
+ 105 ) ; xx [ 102 ] = xx [ 4 ] * ( xx [ 97 ] - xx [ 87 ] * xx [ 41 ] ) + (
xx [ 41 ] * xx [ 96 ] + xx [ 105 ] ) * xx [ 4 ] ; xx [ 103 ] = xx [ 4 ] * (
xx [ 98 ] - xx [ 88 ] * xx [ 41 ] ) + xx [ 4 ] * ( xx [ 106 ] + xx [ 100 ] *
xx [ 41 ] ) - motionData [ 419 ] - xx [ 15 ] ; xx [ 104 ] = motionData [ 418
] + xx [ 4 ] * ( xx [ 99 ] - xx [ 93 ] * xx [ 41 ] ) + ( xx [ 107 ] - xx [
101 ] * xx [ 41 ] ) * xx [ 4 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 36 , xx
+ 102 , xx + 96 ) ; xx [ 87 ] = motionData [ 414 ] * motionData [ 414 ] ; xx
[ 88 ] = motionData [ 415 ] * motionData [ 416 ] ; xx [ 93 ] = motionData [
413 ] * motionData [ 414 ] ; xx [ 99 ] = ( xx [ 69 ] + xx [ 65 ] ) * xx [ 4 ]
; xx [ 100 ] = xx [ 5 ] - ( xx [ 63 ] + xx [ 87 ] ) * xx [ 4 ] ; xx [ 101 ] =
xx [ 4 ] * ( xx [ 88 ] - xx [ 93 ] ) ; pm_math_cross3 ( xx + 99 , xx + 16 ,
xx + 102 ) ; pm_math_quatXform ( xx + 89 , xx + 102 , xx + 99 ) ; xx [ 63 ] =
xx [ 49 ] * motionData [ 417 ] ; xx [ 65 ] = xx [ 48 ] * motionData [ 417 ] ;
xx [ 69 ] = xx [ 65 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 49 ] * motionData [ 419
] ; xx [ 102 ] = xx [ 63 ] ; xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 60 ]
; pm_math_cross3 ( xx + 84 , xx + 102 , xx + 105 ) ; xx [ 102 ] = xx [ 49 ] *
xx [ 6 ] ; xx [ 103 ] = xx [ 6 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 95 ] - xx [
103 ] ; xx [ 95 ] = xx [ 49 ] * xx [ 15 ] ; xx [ 108 ] = xx [ 102 ] ; xx [
109 ] = - xx [ 48 ] ; xx [ 110 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 84 , xx
+ 108 , xx + 111 ) ; xx [ 108 ] = motionData [ 419 ] + ( xx [ 63 ] * xx [ 41
] + xx [ 105 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 111 ] + xx [ 102 ] * xx [ 41
] ) + xx [ 15 ] ; xx [ 109 ] = ( xx [ 41 ] * xx [ 69 ] + xx [ 106 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 112 ] - xx [ 48 ] * xx [ 41 ] ) ; xx [ 110 ] = ( xx [
60 ] * xx [ 41 ] + xx [ 107 ] ) * xx [ 4 ] + ( xx [ 95 ] * xx [ 41 ] + xx [
113 ] ) * xx [ 4 ] - motionData [ 417 ] - xx [ 6 ] ; pm_math_quatXform ( xx +
36 , xx + 108 , xx + 104 ) ; xx [ 107 ] = xx [ 4 ] * ( xx [ 74 ] - xx [ 73 ]
) ; xx [ 108 ] = ( xx [ 93 ] + xx [ 88 ] ) * xx [ 4 ] ; xx [ 109 ] = xx [ 5 ]
- ( xx [ 87 ] + xx [ 62 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 107 , xx + 16
, xx + 110 ) ; pm_math_quatXform ( xx + 89 , xx + 110 , xx + 107 ) ; xx [ 15
] = xx [ 61 ] * motionData [ 417 ] ; xx [ 48 ] = xx [ 61 ] * motionData [ 418
] ; xx [ 49 ] = xx [ 65 ] - xx [ 40 ] ; xx [ 87 ] = xx [ 15 ] ; xx [ 88 ] =
xx [ 48 ] ; xx [ 89 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx +
90 ) ; xx [ 40 ] = xx [ 61 ] * xx [ 6 ] ; xx [ 60 ] = xx [ 61 ] * xx [ 8 ] ;
xx [ 61 ] = xx [ 103 ] + xx [ 94 ] ; xx [ 87 ] = xx [ 40 ] ; xx [ 88 ] = - xx
[ 60 ] ; xx [ 89 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx + 93
) ; xx [ 84 ] = ( xx [ 15 ] * xx [ 41 ] + xx [ 90 ] ) * xx [ 4 ] + ( xx [ 40
] * xx [ 41 ] + xx [ 93 ] ) * xx [ 4 ] - motionData [ 418 ] + xx [ 8 ] ; xx [
85 ] = motionData [ 417 ] + ( xx [ 48 ] * xx [ 41 ] + xx [ 91 ] ) * xx [ 4 ]
+ xx [ 4 ] * ( xx [ 94 ] - xx [ 60 ] * xx [ 41 ] ) + xx [ 6 ] ; xx [ 86 ] = (
xx [ 41 ] * xx [ 49 ] + xx [ 92 ] ) * xx [ 4 ] + ( xx [ 61 ] * xx [ 41 ] + xx
[ 95 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 84 , xx + 60 ) ; xx
[ 15 ] = xx [ 2 ] * state [ 30 ] ; xx [ 36 ] = cos ( xx [ 15 ] ) ; xx [ 37 ]
= sin ( xx [ 15 ] ) ; xx [ 38 ] = xx [ 36 ] * motionData [ 217 ] - xx [ 37 ]
* motionData [ 220 ] ; xx [ 39 ] = xx [ 36 ] * motionData [ 218 ] + xx [ 37 ]
* motionData [ 219 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 219 ] - xx [ 37 ]
* motionData [ 218 ] ; xx [ 41 ] = xx [ 37 ] * motionData [ 217 ] + xx [ 36 ]
* motionData [ 220 ] ; xx [ 84 ] = motionData [ 70 ] ; xx [ 85 ] = motionData
[ 71 ] ; xx [ 86 ] = motionData [ 72 ] ; xx [ 87 ] = motionData [ 73 ] ;
pm_math_quatCompose ( xx + 38 , xx + 84 , xx + 88 ) ; xx [ 38 ] = xx [ 4 ] *
( motionData [ 71 ] * motionData [ 73 ] - motionData [ 70 ] * motionData [ 72
] ) ; xx [ 39 ] = ( motionData [ 70 ] * motionData [ 71 ] + motionData [ 72 ]
* motionData [ 73 ] ) * xx [ 4 ] ; xx [ 40 ] = xx [ 5 ] - ( motionData [ 71 ]
* motionData [ 71 ] + motionData [ 72 ] * motionData [ 72 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 38 , xx + 16 , xx + 84 ) ; pm_math_quatXform ( xx + 88
, xx + 84 , xx + 15 ) ; xx [ 18 ] = xx [ 37 ] * motionData [ 75 ] ; xx [ 38 ]
= xx [ 37 ] * motionData [ 74 ] ; xx [ 39 ] = 0.02540000000000185 ; xx [ 40 ]
= xx [ 39 ] * xx [ 37 ] ; xx [ 41 ] = xx [ 4 ] * ( xx [ 18 ] * xx [ 37 ] - xx
[ 36 ] * xx [ 38 ] ) - motionData [ 75 ] + xx [ 4 ] * xx [ 36 ] * xx [ 40 ] ;
xx [ 84 ] = motionData [ 218 ] ; xx [ 85 ] = motionData [ 219 ] ; xx [ 86 ] =
motionData [ 220 ] ; xx [ 48 ] = motionData [ 74 ] - ( ( xx [ 36 ] * xx [ 18
] + xx [ 38 ] * xx [ 37 ] ) * xx [ 4 ] - xx [ 4 ] * xx [ 40 ] * xx [ 37 ] ) -
xx [ 39 ] ; xx [ 18 ] = xx [ 48 ] * motionData [ 220 ] ; xx [ 36 ] = xx [ 41
] * motionData [ 220 ] ; xx [ 37 ] = xx [ 48 ] * motionData [ 218 ] - xx [ 41
] * motionData [ 219 ] ; xx [ 38 ] = - xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx
[ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx + 84 , xx + 38 , xx + 87 ) ; xx [ 90
] = motionData [ 224 ] ; xx [ 91 ] = motionData [ 225 ] ; xx [ 92 ] =
motionData [ 226 ] ; xx [ 93 ] = motionData [ 227 ] ; xx [ 38 ] =
0.3535533905932758 ; xx [ 39 ] = xx [ 2 ] * state [ 38 ] ; xx [ 40 ] = cos (
xx [ 39 ] ) ; xx [ 49 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 63 ] = sin ( xx [ 39 ]
) ; xx [ 39 ] = xx [ 38 ] * xx [ 63 ] ; xx [ 38 ] = xx [ 49 ] + xx [ 39 ] ;
xx [ 65 ] = 0.6123724356957934 ; xx [ 69 ] = xx [ 65 ] * xx [ 40 ] ; xx [ 40
] = xx [ 65 ] * xx [ 63 ] ; xx [ 63 ] = xx [ 69 ] - xx [ 40 ] ; xx [ 65 ] =
xx [ 69 ] + xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] - xx [ 39 ] ; xx [ 110 ] = xx [
38 ] ; xx [ 111 ] = xx [ 63 ] ; xx [ 112 ] = xx [ 65 ] ; xx [ 113 ] = xx [ 40
] ; pm_math_quatCompose ( xx + 90 , xx + 110 , xx + 114 ) ; xx [ 39 ] = xx [
6 ] * xx [ 117 ] ; xx [ 49 ] = xx [ 6 ] * xx [ 115 ] - xx [ 8 ] * xx [ 116 ]
; xx [ 84 ] = - xx [ 39 ] ; xx [ 85 ] = xx [ 8 ] * xx [ 117 ] ; xx [ 86 ] =
xx [ 49 ] ; pm_math_cross3 ( xx + 115 , xx + 84 , xx + 110 ) ; xx [ 69 ] =
6.30935626036444e-12 ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] = xx [ 65 ] ; xx [
86 ] = xx [ 40 ] ; xx [ 73 ] = 5.998698970888227e-12 ; xx [ 74 ] = xx [ 73 ]
* xx [ 40 ] ; xx [ 94 ] = xx [ 69 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 73 ] * xx
[ 63 ] + xx [ 65 ] * xx [ 69 ] ; xx [ 118 ] = xx [ 74 ] ; xx [ 119 ] = xx [
94 ] ; xx [ 120 ] = - xx [ 40 ] ; pm_math_cross3 ( xx + 84 , xx + 118 , xx +
121 ) ; xx [ 84 ] = xx [ 69 ] + xx [ 4 ] * ( xx [ 121 ] + xx [ 38 ] * xx [ 74
] ) ; xx [ 85 ] = ( xx [ 38 ] * xx [ 94 ] + xx [ 122 ] ) * xx [ 4 ] - xx [ 73
] ; xx [ 86 ] = ( xx [ 123 ] - xx [ 38 ] * xx [ 40 ] ) * xx [ 4 ] ;
pm_math_quatXform ( xx + 90 , xx + 84 , xx + 118 ) ; xx [ 38 ] =
0.3162538200043575 ; xx [ 40 ] = xx [ 2 ] * state [ 86 ] ; xx [ 63 ] = sin (
xx [ 40 ] ) ; xx [ 65 ] = 0.3162553791961478 ; xx [ 69 ] = cos ( xx [ 40 ] )
; xx [ 40 ] = xx [ 38 ] * xx [ 63 ] - xx [ 65 ] * xx [ 69 ] ; xx [ 73 ] =
0.6324445710612973 ; xx [ 74 ] = 0.6324396579890008 ; xx [ 84 ] = xx [ 73 ] *
xx [ 69 ] + xx [ 74 ] * xx [ 63 ] ; xx [ 85 ] = - xx [ 84 ] ; xx [ 86 ] = xx
[ 74 ] * xx [ 69 ] - xx [ 73 ] * xx [ 63 ] ; xx [ 73 ] = xx [ 38 ] * xx [ 69
] + xx [ 65 ] * xx [ 63 ] ; xx [ 90 ] = xx [ 40 ] ; xx [ 91 ] = xx [ 85 ] ;
xx [ 92 ] = xx [ 86 ] ; xx [ 93 ] = xx [ 73 ] ; xx [ 121 ] = motionData [ 406
] ; xx [ 122 ] = motionData [ 407 ] ; xx [ 123 ] = motionData [ 408 ] ; xx [
124 ] = motionData [ 409 ] ; pm_math_quatCompose ( xx + 90 , xx + 121 , xx +
125 ) ; xx [ 90 ] = xx [ 4 ] * ( motionData [ 406 ] * motionData [ 408 ] -
motionData [ 407 ] * motionData [ 409 ] ) ; xx [ 91 ] = - ( ( motionData [
406 ] * motionData [ 407 ] + motionData [ 408 ] * motionData [ 409 ] ) * xx [
4 ] ) ; xx [ 92 ] = ( motionData [ 407 ] * motionData [ 407 ] + motionData [
408 ] * motionData [ 408 ] ) * xx [ 4 ] - xx [ 5 ] ; xx [ 38 ] =
3.641924106626229e-8 ; xx [ 63 ] = 0.04574999999998041 ; xx [ 65 ] =
2.92603149291605e-7 ; xx [ 93 ] = xx [ 38 ] ; xx [ 94 ] = xx [ 63 ] ; xx [ 95
] = xx [ 65 ] ; pm_math_cross3 ( xx + 90 , xx + 93 , xx + 121 ) ;
pm_math_quatXform ( xx + 125 , xx + 121 , xx + 90 ) ; xx [ 69 ] = xx [ 73 ] *
motionData [ 410 ] ; xx [ 121 ] = xx [ 85 ] ; xx [ 122 ] = xx [ 86 ] ; xx [
123 ] = xx [ 73 ] ; xx [ 74 ] = xx [ 73 ] * motionData [ 411 ] ; xx [ 85 ] =
xx [ 86 ] * motionData [ 411 ] - xx [ 84 ] * motionData [ 410 ] ; xx [ 124 ]
= xx [ 69 ] ; xx [ 125 ] = xx [ 74 ] ; xx [ 126 ] = - xx [ 85 ] ;
pm_math_cross3 ( xx + 121 , xx + 124 , xx + 127 ) ; xx [ 102 ] = xx [ 19 ] *
xx [ 84 ] ; xx [ 103 ] = xx [ 19 ] * xx [ 73 ] ; xx [ 113 ] = xx [ 2 ] *
state [ 88 ] ; xx [ 2 ] = cos ( xx [ 113 ] ) ; xx [ 115 ] = sin ( xx [ 113 ]
) ; xx [ 121 ] = xx [ 2 ] * motionData [ 169 ] - xx [ 115 ] * motionData [
170 ] ; xx [ 122 ] = - ( xx [ 2 ] * motionData [ 168 ] + xx [ 115 ] *
motionData [ 171 ] ) ; xx [ 123 ] = xx [ 115 ] * motionData [ 168 ] - xx [ 2
] * motionData [ 171 ] ; xx [ 124 ] = xx [ 115 ] * motionData [ 169 ] + xx [
2 ] * motionData [ 170 ] ; xx [ 130 ] = motionData [ 182 ] ; xx [ 131 ] =
motionData [ 183 ] ; xx [ 132 ] = motionData [ 184 ] ; xx [ 133 ] =
motionData [ 185 ] ; pm_math_quatCompose ( xx + 121 , xx + 130 , xx + 134 ) ;
xx [ 121 ] = xx [ 4 ] * ( motionData [ 183 ] * motionData [ 185 ] -
motionData [ 182 ] * motionData [ 184 ] ) ; xx [ 122 ] = ( motionData [ 182 ]
* motionData [ 183 ] + motionData [ 184 ] * motionData [ 185 ] ) * xx [ 4 ] ;
xx [ 123 ] = xx [ 5 ] - ( motionData [ 183 ] * motionData [ 183 ] +
motionData [ 184 ] * motionData [ 184 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
121 , xx + 93 , xx + 124 ) ; pm_math_quatXform ( xx + 134 , xx + 124 , xx +
93 ) ; xx [ 5 ] = xx [ 115 ] * motionData [ 187 ] - xx [ 2 ] * motionData [
186 ] ; xx [ 113 ] = 1.600627075326599e-13 ; xx [ 116 ] =
8.497959654019115e-12 ; xx [ 121 ] = xx [ 113 ] * xx [ 2 ] + xx [ 116 ] * xx
[ 115 ] ; xx [ 122 ] = xx [ 4 ] * xx [ 115 ] * xx [ 5 ] - ( motionData [ 187
] - xx [ 4 ] * xx [ 121 ] * xx [ 115 ] ) - xx [ 116 ] ; xx [ 123 ] =
motionData [ 169 ] ; xx [ 124 ] = motionData [ 170 ] ; xx [ 125 ] =
motionData [ 171 ] ; xx [ 115 ] = motionData [ 186 ] + xx [ 4 ] * xx [ 2 ] *
xx [ 5 ] + xx [ 4 ] * xx [ 121 ] * xx [ 2 ] - xx [ 113 ] ; xx [ 2 ] = xx [
115 ] * motionData [ 171 ] ; xx [ 5 ] = xx [ 122 ] * motionData [ 171 ] ; xx
[ 113 ] = xx [ 115 ] * motionData [ 169 ] - xx [ 122 ] * motionData [ 170 ] ;
xx [ 130 ] = - xx [ 2 ] ; xx [ 131 ] = xx [ 5 ] ; xx [ 132 ] = xx [ 113 ] ;
pm_math_cross3 ( xx + 123 , xx + 130 , xx + 133 ) ; xx [ 123 ] = motionData [
385 ] ; xx [ 124 ] = motionData [ 386 ] ; xx [ 125 ] = motionData [ 387 ] ;
xx [ 126 ] = motionData [ 388 ] ; xx [ 116 ] = xx [ 33 ] * state [ 93 ] - xx
[ 34 ] * state [ 90 ] ; xx [ 121 ] = xx [ 33 ] * state [ 92 ] + xx [ 34 ] *
state [ 91 ] ; xx [ 130 ] = - xx [ 121 ] ; xx [ 131 ] = xx [ 34 ] * state [
92 ] - xx [ 33 ] * state [ 91 ] ; xx [ 132 ] = - xx [ 131 ] ; xx [ 136 ] = xx
[ 33 ] * state [ 90 ] + xx [ 34 ] * state [ 93 ] ; xx [ 33 ] = - xx [ 136 ] ;
xx [ 137 ] = xx [ 116 ] ; xx [ 138 ] = xx [ 130 ] ; xx [ 139 ] = xx [ 132 ] ;
xx [ 140 ] = xx [ 33 ] ; pm_math_quatCompose ( xx + 123 , xx + 137 , xx + 141
) ; xx [ 34 ] = - 2.329268144978725e-13 ; xx [ 145 ] = xx [ 34 ] ; xx [ 146 ]
= - xx [ 65 ] ; xx [ 147 ] = 0.0457500000000094 ; pm_math_quatXform ( xx +
141 , xx + 145 , xx + 148 ) ; pm_math_quatXform ( xx + 137 , xx + 75 , xx +
145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx + 75 ) ; xx [ 145 ] = xx
[ 65 ] ; xx [ 146 ] = xx [ 34 ] ; xx [ 147 ] = 5.855191459023036e-14 ;
pm_math_quatXform ( xx + 141 , xx + 145 , xx + 151 ) ; pm_math_quatXform ( xx
+ 137 , xx + 78 , xx + 145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx +
78 ) ; xx [ 34 ] = xx [ 38 ] * xx [ 144 ] ; xx [ 65 ] = xx [ 38 ] * xx [ 142
] + xx [ 63 ] * xx [ 143 ] ; xx [ 137 ] = - xx [ 34 ] ; xx [ 138 ] = - ( xx [
63 ] * xx [ 144 ] ) ; xx [ 139 ] = xx [ 65 ] ; pm_math_cross3 ( xx + 142 , xx
+ 137 , xx + 145 ) ; xx [ 137 ] = xx [ 130 ] ; xx [ 138 ] = xx [ 132 ] ; xx [
139 ] = xx [ 33 ] ; xx [ 33 ] = xx [ 53 ] * xx [ 136 ] ; xx [ 130 ] = xx [ 64
] * xx [ 136 ] ; xx [ 132 ] = xx [ 53 ] * xx [ 121 ] + xx [ 131 ] * xx [ 64 ]
; xx [ 154 ] = xx [ 33 ] ; xx [ 155 ] = xx [ 130 ] ; xx [ 156 ] = - xx [ 132
] ; pm_math_cross3 ( xx + 137 , xx + 154 , xx + 157 ) ; xx [ 136 ] = xx [ 4 ]
* ( xx [ 157 ] + xx [ 33 ] * xx [ 116 ] ) - xx [ 64 ] ; xx [ 137 ] = xx [ 53
] + ( xx [ 130 ] * xx [ 116 ] + xx [ 158 ] ) * xx [ 4 ] ; xx [ 138 ] = ( xx [
159 ] - xx [ 132 ] * xx [ 116 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 123 ,
xx + 136 , xx + 130 ) ; J [ 6 ] = xx [ 12 ] + motionData [ 439 ] + ( xx [ 26
] - xx [ 3 ] * xx [ 1 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 11 ] * xx [ 20 ] -
xx [ 3 ] * xx [ 21 ] ) ; J [ 7 ] = xx [ 29 ] + xx [ 35 ] + xx [ 4 ] * ( xx [
42 ] - xx [ 23 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 66 ] + xx [ 70 ] ; J
[ 9 ] = xx [ 54 ] + xx [ 57 ] ; J [ 10 ] = xx [ 50 ] + xx [ 45 ] ; J [ 11 ] =
xx [ 81 ] + xx [ 96 ] ; J [ 12 ] = xx [ 99 ] + xx [ 104 ] ; J [ 13 ] = xx [
107 ] + xx [ 60 ] ; J [ 14 ] = xx [ 15 ] + xx [ 41 ] + xx [ 4 ] * ( xx [ 87 ]
- xx [ 18 ] * motionData [ 217 ] ) ; J [ 18 ] = xx [ 4 ] * ( xx [ 110 ] - xx
[ 114 ] * xx [ 39 ] ) + xx [ 118 ] + xx [ 8 ] ; J [ 40 ] = - ( xx [ 90 ] +
motionData [ 411 ] + ( xx [ 40 ] * xx [ 69 ] + xx [ 127 ] ) * xx [ 4 ] + xx [
4 ] * ( xx [ 86 ] * xx [ 102 ] + xx [ 40 ] * xx [ 103 ] ) ) ; J [ 41 ] = - (
xx [ 93 ] + xx [ 122 ] + xx [ 4 ] * ( xx [ 133 ] - xx [ 2 ] * motionData [
168 ] ) ) ; J [ 42 ] = - ( xx [ 148 ] + xx [ 75 ] ) ; J [ 43 ] = - ( xx [ 151
] + xx [ 78 ] ) ; J [ 44 ] = - ( xx [ 4 ] * ( xx [ 145 ] - xx [ 141 ] * xx [
34 ] ) + xx [ 130 ] - xx [ 63 ] ) ; J [ 51 ] = xx [ 13 ] + ( xx [ 27 ] - xx [
3 ] * xx [ 10 ] ) * xx [ 4 ] - ( motionData [ 438 ] - ( xx [ 21 ] * xx [ 7 ]
+ xx [ 20 ] * xx [ 9 ] ) * xx [ 4 ] ) - xx [ 19 ] ; J [ 52 ] = xx [ 30 ] + xx
[ 25 ] + ( xx [ 24 ] * motionData [ 14 ] + xx [ 43 ] ) * xx [ 4 ] ; J [ 53 ]
= xx [ 67 ] + xx [ 71 ] ; J [ 54 ] = xx [ 55 ] + xx [ 58 ] ; J [ 55 ] = xx [
51 ] + xx [ 46 ] ; J [ 56 ] = xx [ 82 ] + xx [ 97 ] ; J [ 57 ] = xx [ 100 ] +
xx [ 105 ] ; J [ 58 ] = xx [ 108 ] + xx [ 61 ] ; J [ 59 ] = xx [ 16 ] + xx [
48 ] + ( xx [ 36 ] * motionData [ 217 ] + xx [ 88 ] ) * xx [ 4 ] ; J [ 63 ] =
( xx [ 8 ] * xx [ 114 ] * xx [ 117 ] + xx [ 111 ] ) * xx [ 4 ] + xx [ 119 ] +
xx [ 6 ] ; J [ 85 ] = - ( xx [ 91 ] + ( xx [ 40 ] * xx [ 74 ] + xx [ 128 ] )
* xx [ 4 ] - ( motionData [ 410 ] - ( xx [ 103 ] * xx [ 73 ] + xx [ 102 ] *
xx [ 84 ] ) * xx [ 4 ] ) - xx [ 19 ] ) ; J [ 86 ] = - ( xx [ 94 ] + xx [ 115
] + ( xx [ 5 ] * motionData [ 168 ] + xx [ 134 ] ) * xx [ 4 ] ) ; J [ 87 ] =
- ( xx [ 149 ] + xx [ 76 ] ) ; J [ 88 ] = - ( xx [ 152 ] + xx [ 79 ] ) ; J [
89 ] = - ( ( xx [ 146 ] - xx [ 63 ] * xx [ 141 ] * xx [ 144 ] ) * xx [ 4 ] +
xx [ 131 ] + xx [ 38 ] ) ; J [ 96 ] = xx [ 14 ] + xx [ 4 ] * ( xx [ 28 ] - xx
[ 3 ] * xx [ 22 ] ) + ( xx [ 3 ] * xx [ 20 ] + xx [ 11 ] * xx [ 21 ] ) * xx [
4 ] ; J [ 97 ] = xx [ 31 ] + ( xx [ 32 ] * motionData [ 14 ] + xx [ 44 ] ) *
xx [ 4 ] ; J [ 98 ] = xx [ 68 ] + xx [ 72 ] ; J [ 99 ] = xx [ 56 ] + xx [ 59
] ; J [ 100 ] = xx [ 52 ] + xx [ 47 ] ; J [ 101 ] = xx [ 83 ] + xx [ 98 ] ; J
[ 102 ] = xx [ 101 ] + xx [ 106 ] ; J [ 103 ] = xx [ 109 ] + xx [ 62 ] ; J [
104 ] = xx [ 17 ] + ( xx [ 37 ] * motionData [ 217 ] + xx [ 89 ] ) * xx [ 4 ]
; J [ 108 ] = ( xx [ 114 ] * xx [ 49 ] + xx [ 112 ] ) * xx [ 4 ] + xx [ 120 ]
; J [ 130 ] = - ( xx [ 92 ] + xx [ 4 ] * ( xx [ 129 ] - xx [ 40 ] * xx [ 85 ]
) + ( xx [ 40 ] * xx [ 102 ] - xx [ 86 ] * xx [ 103 ] ) * xx [ 4 ] ) ; J [
131 ] = - ( xx [ 95 ] + ( xx [ 113 ] * motionData [ 168 ] + xx [ 135 ] ) * xx
[ 4 ] ) ; J [ 132 ] = - ( xx [ 150 ] + xx [ 77 ] ) ; J [ 133 ] = - ( xx [ 153
] + xx [ 80 ] ) ; J [ 134 ] = - ( ( xx [ 141 ] * xx [ 65 ] + xx [ 147 ] ) *
xx [ 4 ] + xx [ 132 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_4 ( const double * rtdv , const double * state ,
const double * motionData , double * J ) { double xx [ 160 ] ; ( void ) rtdv
; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ]
= xx [ 2 ] * state [ 12 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] =
0.389581900177037 ; xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.5901074779979933 ; xx [ 8 ] =
0.5901036711621462 ; xx [ 9 ] = xx [ 7 ] * xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ;
xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] - xx [ 7 ] * xx [ 6
] ; xx [ 7 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1 ] * xx [ 6 ] ; xx [ 1 ] = - xx [
7 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 11 ] ;
xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = motionData [ 490 ] ; xx [ 17 ] =
motionData [ 491 ] ; xx [ 18 ] = motionData [ 492 ] ; xx [ 19 ] = motionData
[ 493 ] ; pm_math_quatCompose ( xx + 12 , xx + 16 , xx + 20 ) ; xx [ 4 ] =
2.0 ; xx [ 5 ] = 1.0 ; xx [ 12 ] = xx [ 4 ] * ( motionData [ 490 ] *
motionData [ 492 ] - motionData [ 491 ] * motionData [ 493 ] ) ; xx [ 13 ] =
- ( ( motionData [ 490 ] * motionData [ 491 ] + motionData [ 492 ] *
motionData [ 493 ] ) * xx [ 4 ] ) ; xx [ 14 ] = ( motionData [ 491 ] *
motionData [ 491 ] + motionData [ 492 ] * motionData [ 492 ] ) * xx [ 4 ] -
xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 15 ] = 5.192027881355888e-12 ; xx [ 16 ] = - xx
[ 6 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_cross3 ( xx
+ 12 , xx + 16 , xx + 24 ) ; pm_math_quatXform ( xx + 20 , xx + 24 , xx + 12
) ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = xx [ 11 ] ; xx [ 21 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 494 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
495 ] ; xx [ 22 ] = xx [ 11 ] * motionData [ 495 ] - xx [ 9 ] * motionData [
494 ] ; xx [ 23 ] = - xx [ 1 ] ; xx [ 24 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [
22 ] ; pm_math_cross3 ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 19 ] =
0.02520954632904373 ; xx [ 20 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 21 ] = xx [ 19
] * xx [ 7 ] ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [ 24 ] = cos ( xx [
23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 24 ] * motionData [
15 ] - xx [ 25 ] * motionData [ 16 ] ; xx [ 30 ] = - ( xx [ 24 ] * motionData
[ 14 ] + xx [ 25 ] * motionData [ 17 ] ) ; xx [ 31 ] = xx [ 25 ] * motionData
[ 14 ] - xx [ 24 ] * motionData [ 17 ] ; xx [ 32 ] = xx [ 25 ] * motionData [
15 ] + xx [ 24 ] * motionData [ 16 ] ; xx [ 33 ] = motionData [ 483 ] ; xx [
34 ] = motionData [ 484 ] ; xx [ 35 ] = motionData [ 485 ] ; xx [ 36 ] =
motionData [ 486 ] ; pm_math_quatCompose ( xx + 29 , xx + 33 , xx + 37 ) ; xx
[ 29 ] = xx [ 4 ] * ( motionData [ 484 ] * motionData [ 486 ] - motionData [
483 ] * motionData [ 485 ] ) ; xx [ 30 ] = ( motionData [ 483 ] * motionData
[ 484 ] + motionData [ 485 ] * motionData [ 486 ] ) * xx [ 4 ] ; xx [ 31 ] =
xx [ 5 ] - ( motionData [ 484 ] * motionData [ 484 ] + motionData [ 485 ] *
motionData [ 485 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 29 , xx + 16 , xx +
32 ) ; pm_math_quatXform ( xx + 37 , xx + 32 , xx + 29 ) ; xx [ 23 ] = xx [
25 ] * motionData [ 488 ] - xx [ 24 ] * motionData [ 487 ] ; xx [ 32 ] =
7.748428954013064e-12 ; xx [ 33 ] = 5.376764528053357e-12 ; xx [ 34 ] = xx [
32 ] * xx [ 24 ] - xx [ 33 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 25 ] *
xx [ 23 ] - ( motionData [ 488 ] + xx [ 4 ] * xx [ 34 ] * xx [ 25 ] ) - xx [
33 ] ; xx [ 36 ] = motionData [ 15 ] ; xx [ 37 ] = motionData [ 16 ] ; xx [
38 ] = motionData [ 17 ] ; xx [ 25 ] = motionData [ 487 ] + xx [ 4 ] * xx [
24 ] * xx [ 23 ] - xx [ 4 ] * xx [ 34 ] * xx [ 24 ] + xx [ 32 ] ; xx [ 23 ] =
xx [ 25 ] * motionData [ 17 ] ; xx [ 24 ] = xx [ 35 ] * motionData [ 17 ] ;
xx [ 32 ] = xx [ 25 ] * motionData [ 15 ] - xx [ 35 ] * motionData [ 16 ] ;
xx [ 39 ] = - xx [ 23 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 32 ] ;
pm_math_cross3 ( xx + 36 , xx + 39 , xx + 42 ) ; xx [ 36 ] = motionData [ 203
] ; xx [ 37 ] = motionData [ 204 ] ; xx [ 38 ] = motionData [ 205 ] ; xx [ 39
] = motionData [ 206 ] ; xx [ 33 ] = 3.980251324392935e-7 ; xx [ 34 ] =
0.999999999999921 ; xx [ 40 ] = xx [ 33 ] * state [ 19 ] - xx [ 34 ] * state
[ 16 ] ; xx [ 41 ] = xx [ 33 ] * state [ 18 ] + xx [ 34 ] * state [ 17 ] ; xx
[ 45 ] = - xx [ 41 ] ; xx [ 46 ] = xx [ 34 ] * state [ 18 ] - xx [ 33 ] *
state [ 17 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 33 ] * state [ 16 ]
+ xx [ 34 ] * state [ 19 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = xx [ 45 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ;
pm_math_quatCompose ( xx + 36 , xx + 50 , xx + 54 ) ; xx [ 58 ] = motionData
[ 476 ] ; xx [ 59 ] = motionData [ 477 ] ; xx [ 60 ] = motionData [ 478 ] ;
xx [ 61 ] = motionData [ 479 ] ; pm_math_quatCompose ( xx + 54 , xx + 58 , xx
+ 62 ) ; xx [ 54 ] = motionData [ 477 ] ; xx [ 55 ] = motionData [ 478 ] ; xx
[ 56 ] = motionData [ 479 ] ; xx [ 57 ] = 7.960502648785241e-7 ; xx [ 58 ] =
xx [ 57 ] * motionData [ 479 ] ; xx [ 59 ] = xx [ 57 ] * motionData [ 477 ] +
motionData [ 478 ] ; xx [ 66 ] = xx [ 58 ] ; xx [ 67 ] = motionData [ 479 ] ;
xx [ 68 ] = - xx [ 59 ] ; pm_math_cross3 ( xx + 54 , xx + 66 , xx + 69 ) ; xx
[ 60 ] = motionData [ 476 ] * motionData [ 479 ] ; xx [ 66 ] = xx [ 5 ] + (
xx [ 69 ] - xx [ 58 ] * motionData [ 476 ] ) * xx [ 4 ] ; xx [ 67 ] = xx [ 4
] * ( xx [ 70 ] - xx [ 60 ] ) - xx [ 57 ] ; xx [ 68 ] = xx [ 4 ] * ( xx [ 71
] + xx [ 59 ] * motionData [ 476 ] ) ; pm_math_cross3 ( xx + 66 , xx + 16 ,
xx + 69 ) ; pm_math_quatXform ( xx + 62 , xx + 69 , xx + 66 ) ; xx [ 59 ] = -
( xx [ 57 ] * motionData [ 482 ] ) ; xx [ 69 ] = xx [ 59 ] ; xx [ 70 ] = -
motionData [ 482 ] ; xx [ 71 ] = motionData [ 481 ] + xx [ 57 ] * motionData
[ 480 ] ; pm_math_quatXform ( xx + 50 , xx + 69 , xx + 72 ) ; xx [ 61 ] =
2.329280111075767e-13 ; xx [ 69 ] = 2.926046524751139e-7 ; xx [ 75 ] = xx [
61 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 50 , xx + 75 , xx + 78 ) ; xx [ 81 ] = xx [ 72 ] +
xx [ 78 ] ; xx [ 82 ] = xx [ 73 ] + xx [ 79 ] ; xx [ 83 ] = xx [ 74 ] + xx [
80 ] ; pm_math_quatXform ( xx + 36 , xx + 81 , xx + 70 ) ; xx [ 73 ] =
motionData [ 477 ] - xx [ 57 ] * motionData [ 478 ] ; xx [ 78 ] = -
motionData [ 479 ] ; xx [ 79 ] = xx [ 58 ] ; xx [ 80 ] = xx [ 73 ] ;
pm_math_cross3 ( xx + 54 , xx + 78 , xx + 81 ) ; xx [ 54 ] = xx [ 57 ] + ( xx
[ 60 ] + xx [ 81 ] ) * xx [ 4 ] ; xx [ 55 ] = xx [ 5 ] + xx [ 4 ] * ( xx [ 82
] - xx [ 57 ] * xx [ 60 ] ) ; xx [ 56 ] = xx [ 4 ] * ( xx [ 83 ] - xx [ 73 ]
* motionData [ 476 ] ) ; pm_math_cross3 ( xx + 54 , xx + 16 , xx + 78 ) ;
pm_math_quatXform ( xx + 62 , xx + 78 , xx + 54 ) ; xx [ 78 ] = motionData [
482 ] ; xx [ 79 ] = xx [ 59 ] ; xx [ 80 ] = xx [ 57 ] * motionData [ 481 ] -
motionData [ 480 ] ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 57 ) ; xx [
78 ] = - xx [ 69 ] ; xx [ 79 ] = xx [ 61 ] ; xx [ 80 ] =
7.670997177269469e-12 ; pm_math_quatXform ( xx + 50 , xx + 78 , xx + 81 ) ;
xx [ 50 ] = xx [ 57 ] + xx [ 81 ] ; xx [ 51 ] = xx [ 58 ] + xx [ 82 ] ; xx [
52 ] = xx [ 59 ] + xx [ 83 ] ; pm_math_quatXform ( xx + 36 , xx + 50 , xx +
57 ) ; xx [ 50 ] = xx [ 4 ] * ( motionData [ 477 ] * motionData [ 479 ] -
motionData [ 476 ] * motionData [ 478 ] ) ; xx [ 51 ] = ( motionData [ 476 ]
* motionData [ 477 ] + motionData [ 478 ] * motionData [ 479 ] ) * xx [ 4 ] ;
xx [ 52 ] = xx [ 5 ] - ( motionData [ 477 ] * motionData [ 477 ] + motionData
[ 478 ] * motionData [ 478 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 50 , xx +
16 , xx + 81 ) ; pm_math_quatXform ( xx + 62 , xx + 81 , xx + 50 ) ; xx [ 60
] = xx [ 45 ] ; xx [ 61 ] = xx [ 47 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 45 ] =
xx [ 48 ] * motionData [ 480 ] ; xx [ 47 ] = xx [ 48 ] * motionData [ 481 ] ;
xx [ 49 ] = xx [ 41 ] * motionData [ 480 ] + xx [ 46 ] * motionData [ 481 ] ;
xx [ 63 ] = xx [ 45 ] ; xx [ 64 ] = xx [ 47 ] ; xx [ 65 ] = - xx [ 49 ] ;
pm_math_cross3 ( xx + 60 , xx + 63 , xx + 81 ) ; xx [ 53 ] =
3.641162862673871e-8 ; xx [ 63 ] = xx [ 53 ] * xx [ 48 ] ; xx [ 64 ] =
0.04575000000717538 ; xx [ 65 ] = xx [ 64 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 53
] * xx [ 41 ] + xx [ 46 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 63 ] ; xx [ 85 ] =
xx [ 65 ] ; xx [ 86 ] = - xx [ 48 ] ; pm_math_cross3 ( xx + 60 , xx + 84 , xx
+ 87 ) ; xx [ 60 ] = xx [ 4 ] * ( xx [ 81 ] + xx [ 45 ] * xx [ 40 ] ) + xx [
4 ] * ( xx [ 87 ] + xx [ 63 ] * xx [ 40 ] ) - motionData [ 481 ] - xx [ 64 ]
; xx [ 61 ] = motionData [ 480 ] + xx [ 4 ] * ( xx [ 82 ] + xx [ 47 ] * xx [
40 ] ) + ( xx [ 65 ] * xx [ 40 ] + xx [ 88 ] ) * xx [ 4 ] + xx [ 53 ] ; xx [
62 ] = ( xx [ 83 ] - xx [ 40 ] * xx [ 49 ] ) * xx [ 4 ] + ( xx [ 89 ] - xx [
48 ] * xx [ 40 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 60 , xx +
45 ) ; xx [ 36 ] = motionData [ 210 ] ; xx [ 37 ] = motionData [ 211 ] ; xx [
38 ] = motionData [ 212 ] ; xx [ 39 ] = motionData [ 213 ] ; xx [ 40 ] =
3.980251340548381e-7 ; xx [ 41 ] = xx [ 34 ] * state [ 26 ] - xx [ 40 ] *
state [ 23 ] ; xx [ 48 ] = xx [ 34 ] * state [ 25 ] - xx [ 40 ] * state [ 24
] ; xx [ 49 ] = xx [ 40 ] * state [ 25 ] + xx [ 34 ] * state [ 24 ] ; xx [ 60
] = - xx [ 49 ] ; xx [ 61 ] = xx [ 40 ] * state [ 26 ] + xx [ 34 ] * state [
23 ] ; xx [ 40 ] = - xx [ 61 ] ; xx [ 81 ] = xx [ 41 ] ; xx [ 82 ] = xx [ 48
] ; xx [ 83 ] = xx [ 60 ] ; xx [ 84 ] = xx [ 40 ] ; pm_math_quatCompose ( xx
+ 36 , xx + 81 , xx + 85 ) ; xx [ 81 ] = motionData [ 469 ] ; xx [ 82 ] =
motionData [ 470 ] ; xx [ 83 ] = motionData [ 471 ] ; xx [ 84 ] = motionData
[ 472 ] ; pm_math_quatCompose ( xx + 85 , xx + 81 , xx + 89 ) ; xx [ 62 ] =
motionData [ 471 ] * motionData [ 471 ] ; xx [ 63 ] = motionData [ 472 ] *
motionData [ 472 ] ; xx [ 65 ] = motionData [ 470 ] * motionData [ 471 ] ; xx
[ 69 ] = motionData [ 469 ] * motionData [ 472 ] ; xx [ 73 ] = motionData [
469 ] * motionData [ 471 ] ; xx [ 74 ] = motionData [ 470 ] * motionData [
472 ] ; xx [ 81 ] = xx [ 5 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 4 ] ; xx [ 82
] = xx [ 4 ] * ( xx [ 65 ] - xx [ 69 ] ) ; xx [ 83 ] = ( xx [ 73 ] + xx [ 74
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 81 , xx + 16 , xx + 84 ) ;
pm_math_quatXform ( xx + 89 , xx + 84 , xx + 81 ) ; xx [ 84 ] = xx [ 48 ] ;
xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [ 40 ] ; xx [ 40 ] = xx [ 49 ] *
motionData [ 474 ] ; xx [ 60 ] = xx [ 61 ] * motionData [ 475 ] ; xx [ 87 ] =
xx [ 40 ] + xx [ 60 ] ; xx [ 88 ] = xx [ 48 ] * motionData [ 474 ] ; xx [ 93
] = xx [ 48 ] * motionData [ 475 ] ; xx [ 94 ] = - xx [ 87 ] ; xx [ 95 ] = -
xx [ 88 ] ; xx [ 96 ] = - xx [ 93 ] ; pm_math_cross3 ( xx + 84 , xx + 94 , xx
+ 97 ) ; xx [ 94 ] = xx [ 49 ] * xx [ 8 ] ; xx [ 95 ] = xx [ 61 ] * xx [ 15 ]
; xx [ 96 ] = xx [ 94 ] - xx [ 95 ] ; xx [ 100 ] = xx [ 8 ] * xx [ 48 ] ; xx
[ 101 ] = xx [ 15 ] * xx [ 48 ] ; xx [ 102 ] = xx [ 96 ] ; xx [ 103 ] = xx [
100 ] ; xx [ 104 ] = - xx [ 101 ] ; pm_math_cross3 ( xx + 84 , xx + 102 , xx
+ 105 ) ; xx [ 102 ] = xx [ 4 ] * ( xx [ 97 ] - xx [ 87 ] * xx [ 41 ] ) + (
xx [ 41 ] * xx [ 96 ] + xx [ 105 ] ) * xx [ 4 ] ; xx [ 103 ] = xx [ 4 ] * (
xx [ 98 ] - xx [ 88 ] * xx [ 41 ] ) + xx [ 4 ] * ( xx [ 106 ] + xx [ 100 ] *
xx [ 41 ] ) - motionData [ 475 ] - xx [ 15 ] ; xx [ 104 ] = motionData [ 474
] + xx [ 4 ] * ( xx [ 99 ] - xx [ 93 ] * xx [ 41 ] ) + ( xx [ 107 ] - xx [
101 ] * xx [ 41 ] ) * xx [ 4 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 36 , xx
+ 102 , xx + 96 ) ; xx [ 87 ] = motionData [ 470 ] * motionData [ 470 ] ; xx
[ 88 ] = motionData [ 471 ] * motionData [ 472 ] ; xx [ 93 ] = motionData [
469 ] * motionData [ 470 ] ; xx [ 99 ] = ( xx [ 69 ] + xx [ 65 ] ) * xx [ 4 ]
; xx [ 100 ] = xx [ 5 ] - ( xx [ 63 ] + xx [ 87 ] ) * xx [ 4 ] ; xx [ 101 ] =
xx [ 4 ] * ( xx [ 88 ] - xx [ 93 ] ) ; pm_math_cross3 ( xx + 99 , xx + 16 ,
xx + 102 ) ; pm_math_quatXform ( xx + 89 , xx + 102 , xx + 99 ) ; xx [ 63 ] =
xx [ 49 ] * motionData [ 473 ] ; xx [ 65 ] = xx [ 48 ] * motionData [ 473 ] ;
xx [ 69 ] = xx [ 65 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 49 ] * motionData [ 475
] ; xx [ 102 ] = xx [ 63 ] ; xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 60 ]
; pm_math_cross3 ( xx + 84 , xx + 102 , xx + 105 ) ; xx [ 102 ] = xx [ 49 ] *
xx [ 6 ] ; xx [ 103 ] = xx [ 6 ] * xx [ 48 ] ; xx [ 48 ] = xx [ 95 ] - xx [
103 ] ; xx [ 95 ] = xx [ 49 ] * xx [ 15 ] ; xx [ 108 ] = xx [ 102 ] ; xx [
109 ] = - xx [ 48 ] ; xx [ 110 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 84 , xx
+ 108 , xx + 111 ) ; xx [ 108 ] = motionData [ 475 ] + ( xx [ 63 ] * xx [ 41
] + xx [ 105 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 111 ] + xx [ 102 ] * xx [ 41
] ) + xx [ 15 ] ; xx [ 109 ] = ( xx [ 41 ] * xx [ 69 ] + xx [ 106 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 112 ] - xx [ 48 ] * xx [ 41 ] ) ; xx [ 110 ] = ( xx [
60 ] * xx [ 41 ] + xx [ 107 ] ) * xx [ 4 ] + ( xx [ 95 ] * xx [ 41 ] + xx [
113 ] ) * xx [ 4 ] - motionData [ 473 ] - xx [ 6 ] ; pm_math_quatXform ( xx +
36 , xx + 108 , xx + 104 ) ; xx [ 107 ] = xx [ 4 ] * ( xx [ 74 ] - xx [ 73 ]
) ; xx [ 108 ] = ( xx [ 93 ] + xx [ 88 ] ) * xx [ 4 ] ; xx [ 109 ] = xx [ 5 ]
- ( xx [ 87 ] + xx [ 62 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 107 , xx + 16
, xx + 110 ) ; pm_math_quatXform ( xx + 89 , xx + 110 , xx + 107 ) ; xx [ 15
] = xx [ 61 ] * motionData [ 473 ] ; xx [ 48 ] = xx [ 61 ] * motionData [ 474
] ; xx [ 49 ] = xx [ 65 ] - xx [ 40 ] ; xx [ 87 ] = xx [ 15 ] ; xx [ 88 ] =
xx [ 48 ] ; xx [ 89 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx +
90 ) ; xx [ 40 ] = xx [ 61 ] * xx [ 6 ] ; xx [ 60 ] = xx [ 61 ] * xx [ 8 ] ;
xx [ 61 ] = xx [ 103 ] + xx [ 94 ] ; xx [ 87 ] = xx [ 40 ] ; xx [ 88 ] = - xx
[ 60 ] ; xx [ 89 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 84 , xx + 87 , xx + 93
) ; xx [ 84 ] = ( xx [ 15 ] * xx [ 41 ] + xx [ 90 ] ) * xx [ 4 ] + ( xx [ 40
] * xx [ 41 ] + xx [ 93 ] ) * xx [ 4 ] - motionData [ 474 ] + xx [ 8 ] ; xx [
85 ] = motionData [ 473 ] + ( xx [ 48 ] * xx [ 41 ] + xx [ 91 ] ) * xx [ 4 ]
+ xx [ 4 ] * ( xx [ 94 ] - xx [ 60 ] * xx [ 41 ] ) + xx [ 6 ] ; xx [ 86 ] = (
xx [ 41 ] * xx [ 49 ] + xx [ 92 ] ) * xx [ 4 ] + ( xx [ 61 ] * xx [ 41 ] + xx
[ 95 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 36 , xx + 84 , xx + 60 ) ; xx
[ 15 ] = xx [ 2 ] * state [ 30 ] ; xx [ 36 ] = cos ( xx [ 15 ] ) ; xx [ 37 ]
= sin ( xx [ 15 ] ) ; xx [ 38 ] = xx [ 36 ] * motionData [ 217 ] - xx [ 37 ]
* motionData [ 220 ] ; xx [ 39 ] = xx [ 36 ] * motionData [ 218 ] + xx [ 37 ]
* motionData [ 219 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 219 ] - xx [ 37 ]
* motionData [ 218 ] ; xx [ 41 ] = xx [ 37 ] * motionData [ 217 ] + xx [ 36 ]
* motionData [ 220 ] ; xx [ 84 ] = motionData [ 77 ] ; xx [ 85 ] = motionData
[ 78 ] ; xx [ 86 ] = motionData [ 79 ] ; xx [ 87 ] = motionData [ 80 ] ;
pm_math_quatCompose ( xx + 38 , xx + 84 , xx + 88 ) ; xx [ 38 ] = xx [ 4 ] *
( motionData [ 78 ] * motionData [ 80 ] - motionData [ 77 ] * motionData [ 79
] ) ; xx [ 39 ] = ( motionData [ 77 ] * motionData [ 78 ] + motionData [ 79 ]
* motionData [ 80 ] ) * xx [ 4 ] ; xx [ 40 ] = xx [ 5 ] - ( motionData [ 78 ]
* motionData [ 78 ] + motionData [ 79 ] * motionData [ 79 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 38 , xx + 16 , xx + 84 ) ; pm_math_quatXform ( xx + 88
, xx + 84 , xx + 15 ) ; xx [ 18 ] = xx [ 37 ] * motionData [ 82 ] ; xx [ 38 ]
= xx [ 37 ] * motionData [ 81 ] ; xx [ 39 ] = 0.02540000000000185 ; xx [ 40 ]
= xx [ 39 ] * xx [ 37 ] ; xx [ 41 ] = xx [ 4 ] * ( xx [ 18 ] * xx [ 37 ] - xx
[ 36 ] * xx [ 38 ] ) - motionData [ 82 ] + xx [ 4 ] * xx [ 36 ] * xx [ 40 ] ;
xx [ 84 ] = motionData [ 218 ] ; xx [ 85 ] = motionData [ 219 ] ; xx [ 86 ] =
motionData [ 220 ] ; xx [ 48 ] = motionData [ 81 ] - ( ( xx [ 36 ] * xx [ 18
] + xx [ 38 ] * xx [ 37 ] ) * xx [ 4 ] - xx [ 4 ] * xx [ 40 ] * xx [ 37 ] ) -
xx [ 39 ] ; xx [ 18 ] = xx [ 48 ] * motionData [ 220 ] ; xx [ 36 ] = xx [ 41
] * motionData [ 220 ] ; xx [ 37 ] = xx [ 48 ] * motionData [ 218 ] - xx [ 41
] * motionData [ 219 ] ; xx [ 38 ] = - xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx
[ 40 ] = xx [ 37 ] ; pm_math_cross3 ( xx + 84 , xx + 38 , xx + 87 ) ; xx [ 90
] = motionData [ 224 ] ; xx [ 91 ] = motionData [ 225 ] ; xx [ 92 ] =
motionData [ 226 ] ; xx [ 93 ] = motionData [ 227 ] ; xx [ 38 ] =
0.6123724356957949 ; xx [ 39 ] = xx [ 2 ] * state [ 40 ] ; xx [ 40 ] = sin (
xx [ 39 ] ) ; xx [ 49 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 63 ] = cos ( xx [ 39 ]
) ; xx [ 39 ] = xx [ 38 ] * xx [ 63 ] ; xx [ 38 ] = xx [ 49 ] - xx [ 39 ] ;
xx [ 65 ] = 0.3535533905932732 ; xx [ 69 ] = xx [ 65 ] * xx [ 63 ] ; xx [ 63
] = xx [ 65 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 69 ] + xx [ 63 ] ; xx [ 65 ] = -
xx [ 40 ] ; xx [ 73 ] = xx [ 63 ] - xx [ 69 ] ; xx [ 63 ] = xx [ 49 ] + xx [
39 ] ; xx [ 39 ] = - xx [ 63 ] ; xx [ 110 ] = xx [ 38 ] ; xx [ 111 ] = xx [
65 ] ; xx [ 112 ] = xx [ 73 ] ; xx [ 113 ] = xx [ 39 ] ; pm_math_quatCompose
( xx + 90 , xx + 110 , xx + 114 ) ; xx [ 49 ] = xx [ 6 ] * xx [ 117 ] ; xx [
69 ] = xx [ 8 ] * xx [ 116 ] - xx [ 6 ] * xx [ 115 ] ; xx [ 84 ] = xx [ 49 ]
; xx [ 85 ] = - ( xx [ 8 ] * xx [ 117 ] ) ; xx [ 86 ] = xx [ 69 ] ;
pm_math_cross3 ( xx + 115 , xx + 84 , xx + 110 ) ; xx [ 74 ] =
5.088251355846174e-12 ; xx [ 84 ] = xx [ 65 ] ; xx [ 85 ] = xx [ 73 ] ; xx [
86 ] = xx [ 39 ] ; xx [ 39 ] = 7.483145982728478e-12 ; xx [ 65 ] = xx [ 63 ]
* xx [ 39 ] ; xx [ 94 ] = xx [ 63 ] * xx [ 74 ] ; xx [ 63 ] = xx [ 40 ] * xx
[ 39 ] + xx [ 74 ] * xx [ 73 ] ; xx [ 118 ] = xx [ 65 ] ; xx [ 119 ] = - xx [
94 ] ; xx [ 120 ] = - xx [ 63 ] ; pm_math_cross3 ( xx + 84 , xx + 118 , xx +
121 ) ; xx [ 84 ] = xx [ 74 ] + xx [ 4 ] * ( xx [ 121 ] + xx [ 65 ] * xx [ 38
] ) ; xx [ 85 ] = xx [ 39 ] + ( xx [ 122 ] - xx [ 94 ] * xx [ 38 ] ) * xx [ 4
] ; xx [ 86 ] = ( xx [ 123 ] - xx [ 38 ] * xx [ 63 ] ) * xx [ 4 ] ;
pm_math_quatXform ( xx + 90 , xx + 84 , xx + 38 ) ; xx [ 63 ] =
0.04233709306330295 ; xx [ 65 ] = xx [ 2 ] * state [ 42 ] ; xx [ 73 ] = cos (
xx [ 65 ] ) ; xx [ 74 ] = 0.04233598682685397 ; xx [ 84 ] = sin ( xx [ 65 ] )
; xx [ 65 ] = xx [ 63 ] * xx [ 73 ] + xx [ 74 ] * xx [ 84 ] ; xx [ 85 ] =
0.7058357201813958 ; xx [ 86 ] = 0.7058407546227096 ; xx [ 90 ] = xx [ 85 ] *
xx [ 84 ] - xx [ 86 ] * xx [ 73 ] ; xx [ 91 ] = xx [ 85 ] * xx [ 73 ] + xx [
86 ] * xx [ 84 ] ; xx [ 85 ] = xx [ 63 ] * xx [ 84 ] - xx [ 74 ] * xx [ 73 ]
; xx [ 92 ] = xx [ 65 ] ; xx [ 93 ] = xx [ 90 ] ; xx [ 94 ] = xx [ 91 ] ; xx
[ 95 ] = xx [ 85 ] ; xx [ 118 ] = motionData [ 462 ] ; xx [ 119 ] =
motionData [ 463 ] ; xx [ 120 ] = motionData [ 464 ] ; xx [ 121 ] =
motionData [ 465 ] ; pm_math_quatCompose ( xx + 92 , xx + 118 , xx + 122 ) ;
xx [ 92 ] = xx [ 4 ] * ( motionData [ 463 ] * motionData [ 465 ] - motionData
[ 462 ] * motionData [ 464 ] ) ; xx [ 93 ] = ( motionData [ 462 ] *
motionData [ 463 ] + motionData [ 464 ] * motionData [ 465 ] ) * xx [ 4 ] ;
xx [ 94 ] = xx [ 5 ] - ( motionData [ 463 ] * motionData [ 463 ] + motionData
[ 464 ] * motionData [ 464 ] ) * xx [ 4 ] ; xx [ 63 ] = 3.641924106626229e-8
; xx [ 73 ] = 0.04574999999998041 ; xx [ 74 ] = 2.92603149291605e-7 ; xx [
118 ] = xx [ 63 ] ; xx [ 119 ] = xx [ 73 ] ; xx [ 120 ] = xx [ 74 ] ;
pm_math_cross3 ( xx + 92 , xx + 118 , xx + 126 ) ; pm_math_quatXform ( xx +
122 , xx + 126 , xx + 92 ) ; xx [ 121 ] = xx [ 90 ] ; xx [ 122 ] = xx [ 91 ]
; xx [ 123 ] = xx [ 85 ] ; xx [ 84 ] = xx [ 85 ] * motionData [ 466 ] ; xx [
86 ] = xx [ 85 ] * motionData [ 467 ] ; xx [ 95 ] = xx [ 90 ] * motionData [
466 ] + xx [ 91 ] * motionData [ 467 ] ; xx [ 124 ] = - xx [ 84 ] ; xx [ 125
] = - xx [ 86 ] ; xx [ 126 ] = xx [ 95 ] ; pm_math_cross3 ( xx + 121 , xx +
124 , xx + 127 ) ; xx [ 102 ] = xx [ 90 ] * xx [ 19 ] ; xx [ 103 ] = xx [ 85
] * xx [ 19 ] ; xx [ 113 ] = xx [ 2 ] * state [ 44 ] ; xx [ 2 ] = cos ( xx [
113 ] ) ; xx [ 115 ] = sin ( xx [ 113 ] ) ; xx [ 121 ] = xx [ 2 ] *
motionData [ 85 ] - xx [ 115 ] * motionData [ 86 ] ; xx [ 122 ] = - ( xx [ 2
] * motionData [ 84 ] + xx [ 115 ] * motionData [ 87 ] ) ; xx [ 123 ] = xx [
115 ] * motionData [ 84 ] - xx [ 2 ] * motionData [ 87 ] ; xx [ 124 ] = xx [
115 ] * motionData [ 85 ] + xx [ 2 ] * motionData [ 86 ] ; xx [ 130 ] =
motionData [ 98 ] ; xx [ 131 ] = motionData [ 99 ] ; xx [ 132 ] = motionData
[ 100 ] ; xx [ 133 ] = motionData [ 101 ] ; pm_math_quatCompose ( xx + 121 ,
xx + 130 , xx + 134 ) ; xx [ 121 ] = xx [ 4 ] * ( motionData [ 99 ] *
motionData [ 101 ] - motionData [ 98 ] * motionData [ 100 ] ) ; xx [ 122 ] =
( motionData [ 98 ] * motionData [ 99 ] + motionData [ 100 ] * motionData [
101 ] ) * xx [ 4 ] ; xx [ 123 ] = xx [ 5 ] - ( motionData [ 99 ] * motionData
[ 99 ] + motionData [ 100 ] * motionData [ 100 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 121 , xx + 118 , xx + 124 ) ; pm_math_quatXform ( xx +
134 , xx + 124 , xx + 118 ) ; xx [ 5 ] = xx [ 115 ] * motionData [ 103 ] - xx
[ 2 ] * motionData [ 102 ] ; xx [ 113 ] = 3.107391981487723e-12 ; xx [ 116 ]
= 9.83617579279345e-12 ; xx [ 121 ] = xx [ 113 ] * xx [ 2 ] + xx [ 116 ] * xx
[ 115 ] ; xx [ 122 ] = xx [ 4 ] * xx [ 115 ] * xx [ 5 ] - ( motionData [ 103
] - xx [ 4 ] * xx [ 121 ] * xx [ 115 ] ) - xx [ 116 ] ; xx [ 123 ] =
motionData [ 85 ] ; xx [ 124 ] = motionData [ 86 ] ; xx [ 125 ] = motionData
[ 87 ] ; xx [ 115 ] = motionData [ 102 ] + xx [ 4 ] * xx [ 2 ] * xx [ 5 ] +
xx [ 4 ] * xx [ 121 ] * xx [ 2 ] - xx [ 113 ] ; xx [ 2 ] = xx [ 115 ] *
motionData [ 87 ] ; xx [ 5 ] = xx [ 122 ] * motionData [ 87 ] ; xx [ 113 ] =
xx [ 115 ] * motionData [ 85 ] - xx [ 122 ] * motionData [ 86 ] ; xx [ 130 ]
= - xx [ 2 ] ; xx [ 131 ] = xx [ 5 ] ; xx [ 132 ] = xx [ 113 ] ;
pm_math_cross3 ( xx + 123 , xx + 130 , xx + 133 ) ; xx [ 123 ] = motionData [
441 ] ; xx [ 124 ] = motionData [ 442 ] ; xx [ 125 ] = motionData [ 443 ] ;
xx [ 126 ] = motionData [ 444 ] ; xx [ 116 ] = xx [ 33 ] * state [ 49 ] - xx
[ 34 ] * state [ 46 ] ; xx [ 121 ] = xx [ 33 ] * state [ 48 ] + xx [ 34 ] *
state [ 47 ] ; xx [ 130 ] = - xx [ 121 ] ; xx [ 131 ] = xx [ 34 ] * state [
48 ] - xx [ 33 ] * state [ 47 ] ; xx [ 132 ] = - xx [ 131 ] ; xx [ 136 ] = xx
[ 33 ] * state [ 46 ] + xx [ 34 ] * state [ 49 ] ; xx [ 33 ] = - xx [ 136 ] ;
xx [ 137 ] = xx [ 116 ] ; xx [ 138 ] = xx [ 130 ] ; xx [ 139 ] = xx [ 132 ] ;
xx [ 140 ] = xx [ 33 ] ; pm_math_quatCompose ( xx + 123 , xx + 137 , xx + 141
) ; xx [ 34 ] = - 2.329268144978725e-13 ; xx [ 145 ] = xx [ 34 ] ; xx [ 146 ]
= - xx [ 74 ] ; xx [ 147 ] = 0.0457500000000094 ; pm_math_quatXform ( xx +
141 , xx + 145 , xx + 148 ) ; pm_math_quatXform ( xx + 137 , xx + 75 , xx +
145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx + 75 ) ; xx [ 145 ] = xx
[ 74 ] ; xx [ 146 ] = xx [ 34 ] ; xx [ 147 ] = 5.855191459023036e-14 ;
pm_math_quatXform ( xx + 141 , xx + 145 , xx + 151 ) ; pm_math_quatXform ( xx
+ 137 , xx + 78 , xx + 145 ) ; pm_math_quatXform ( xx + 123 , xx + 145 , xx +
78 ) ; xx [ 34 ] = xx [ 63 ] * xx [ 144 ] ; xx [ 74 ] = xx [ 63 ] * xx [ 142
] + xx [ 73 ] * xx [ 143 ] ; xx [ 137 ] = - xx [ 34 ] ; xx [ 138 ] = - ( xx [
73 ] * xx [ 144 ] ) ; xx [ 139 ] = xx [ 74 ] ; pm_math_cross3 ( xx + 142 , xx
+ 137 , xx + 145 ) ; xx [ 137 ] = xx [ 130 ] ; xx [ 138 ] = xx [ 132 ] ; xx [
139 ] = xx [ 33 ] ; xx [ 33 ] = xx [ 53 ] * xx [ 136 ] ; xx [ 130 ] = xx [ 64
] * xx [ 136 ] ; xx [ 132 ] = xx [ 53 ] * xx [ 121 ] + xx [ 131 ] * xx [ 64 ]
; xx [ 154 ] = xx [ 33 ] ; xx [ 155 ] = xx [ 130 ] ; xx [ 156 ] = - xx [ 132
] ; pm_math_cross3 ( xx + 137 , xx + 154 , xx + 157 ) ; xx [ 136 ] = xx [ 4 ]
* ( xx [ 157 ] + xx [ 33 ] * xx [ 116 ] ) - xx [ 64 ] ; xx [ 137 ] = xx [ 53
] + ( xx [ 130 ] * xx [ 116 ] + xx [ 158 ] ) * xx [ 4 ] ; xx [ 138 ] = ( xx [
159 ] - xx [ 132 ] * xx [ 116 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 123 ,
xx + 136 , xx + 130 ) ; J [ 6 ] = xx [ 12 ] + motionData [ 495 ] + ( xx [ 26
] - xx [ 3 ] * xx [ 1 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx [ 11 ] * xx [ 20 ] -
xx [ 3 ] * xx [ 21 ] ) ; J [ 7 ] = xx [ 29 ] + xx [ 35 ] + xx [ 4 ] * ( xx [
42 ] - xx [ 23 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 66 ] + xx [ 70 ] ; J
[ 9 ] = xx [ 54 ] + xx [ 57 ] ; J [ 10 ] = xx [ 50 ] + xx [ 45 ] ; J [ 11 ] =
xx [ 81 ] + xx [ 96 ] ; J [ 12 ] = xx [ 99 ] + xx [ 104 ] ; J [ 13 ] = xx [
107 ] + xx [ 60 ] ; J [ 14 ] = xx [ 15 ] + xx [ 41 ] + xx [ 4 ] * ( xx [ 87 ]
- xx [ 18 ] * motionData [ 217 ] ) ; J [ 19 ] = xx [ 4 ] * ( xx [ 110 ] + xx
[ 114 ] * xx [ 49 ] ) + xx [ 38 ] - xx [ 8 ] ; J [ 20 ] = - ( xx [ 92 ] + xx
[ 4 ] * ( xx [ 127 ] - xx [ 84 ] * xx [ 65 ] ) - motionData [ 467 ] + xx [ 4
] * ( xx [ 102 ] * xx [ 91 ] - xx [ 103 ] * xx [ 65 ] ) ) ; J [ 21 ] = - ( xx
[ 118 ] + xx [ 122 ] + xx [ 4 ] * ( xx [ 133 ] - xx [ 2 ] * motionData [ 84 ]
) ) ; J [ 22 ] = - ( xx [ 148 ] + xx [ 75 ] ) ; J [ 23 ] = - ( xx [ 151 ] +
xx [ 78 ] ) ; J [ 24 ] = - ( xx [ 4 ] * ( xx [ 145 ] - xx [ 141 ] * xx [ 34 ]
) + xx [ 130 ] - xx [ 73 ] ) ; J [ 51 ] = xx [ 13 ] + ( xx [ 27 ] - xx [ 3 ]
* xx [ 10 ] ) * xx [ 4 ] - ( motionData [ 494 ] - ( xx [ 21 ] * xx [ 7 ] + xx
[ 20 ] * xx [ 9 ] ) * xx [ 4 ] ) - xx [ 19 ] ; J [ 52 ] = xx [ 30 ] + xx [ 25
] + ( xx [ 24 ] * motionData [ 14 ] + xx [ 43 ] ) * xx [ 4 ] ; J [ 53 ] = xx
[ 67 ] + xx [ 71 ] ; J [ 54 ] = xx [ 55 ] + xx [ 58 ] ; J [ 55 ] = xx [ 51 ]
+ xx [ 46 ] ; J [ 56 ] = xx [ 82 ] + xx [ 97 ] ; J [ 57 ] = xx [ 100 ] + xx [
105 ] ; J [ 58 ] = xx [ 108 ] + xx [ 61 ] ; J [ 59 ] = xx [ 16 ] + xx [ 48 ]
+ ( xx [ 36 ] * motionData [ 217 ] + xx [ 88 ] ) * xx [ 4 ] ; J [ 64 ] = ( xx
[ 111 ] - xx [ 8 ] * xx [ 114 ] * xx [ 117 ] ) * xx [ 4 ] + xx [ 39 ] - xx [
6 ] ; J [ 65 ] = - ( xx [ 93 ] + motionData [ 466 ] + xx [ 4 ] * ( xx [ 128 ]
- xx [ 86 ] * xx [ 65 ] ) - ( xx [ 85 ] * xx [ 103 ] + xx [ 90 ] * xx [ 102 ]
) * xx [ 4 ] + xx [ 19 ] ) ; J [ 66 ] = - ( xx [ 119 ] + xx [ 115 ] + ( xx [
5 ] * motionData [ 84 ] + xx [ 134 ] ) * xx [ 4 ] ) ; J [ 67 ] = - ( xx [ 149
] + xx [ 76 ] ) ; J [ 68 ] = - ( xx [ 152 ] + xx [ 79 ] ) ; J [ 69 ] = - ( (
xx [ 146 ] - xx [ 73 ] * xx [ 141 ] * xx [ 144 ] ) * xx [ 4 ] + xx [ 131 ] +
xx [ 63 ] ) ; J [ 96 ] = xx [ 14 ] + xx [ 4 ] * ( xx [ 28 ] - xx [ 3 ] * xx [
22 ] ) + ( xx [ 3 ] * xx [ 20 ] + xx [ 11 ] * xx [ 21 ] ) * xx [ 4 ] ; J [ 97
] = xx [ 31 ] + ( xx [ 32 ] * motionData [ 14 ] + xx [ 44 ] ) * xx [ 4 ] ; J
[ 98 ] = xx [ 68 ] + xx [ 72 ] ; J [ 99 ] = xx [ 56 ] + xx [ 59 ] ; J [ 100 ]
= xx [ 52 ] + xx [ 47 ] ; J [ 101 ] = xx [ 83 ] + xx [ 98 ] ; J [ 102 ] = xx
[ 101 ] + xx [ 106 ] ; J [ 103 ] = xx [ 109 ] + xx [ 62 ] ; J [ 104 ] = xx [
17 ] + ( xx [ 37 ] * motionData [ 217 ] + xx [ 89 ] ) * xx [ 4 ] ; J [ 109 ]
= ( xx [ 114 ] * xx [ 69 ] + xx [ 112 ] ) * xx [ 4 ] + xx [ 40 ] ; J [ 110 ]
= - ( xx [ 94 ] + ( xx [ 95 ] * xx [ 65 ] + xx [ 129 ] ) * xx [ 4 ] + ( xx [
102 ] * xx [ 65 ] + xx [ 103 ] * xx [ 91 ] ) * xx [ 4 ] ) ; J [ 111 ] = - (
xx [ 120 ] + ( xx [ 113 ] * motionData [ 84 ] + xx [ 135 ] ) * xx [ 4 ] ) ; J
[ 112 ] = - ( xx [ 150 ] + xx [ 77 ] ) ; J [ 113 ] = - ( xx [ 153 ] + xx [ 80
] ) ; J [ 114 ] = - ( ( xx [ 141 ] * xx [ 74 ] + xx [ 147 ] ) * xx [ 4 ] + xx
[ 132 ] ) ; return 3 ; } size_t
PlatformAssem_f0ca4364_1_computeAssemblyJacobian ( const void * mech , const
double * rtdv , size_t constraintIdx , boolean_T forVelocitySatisfaction ,
const double * state , const double * motionData , double * J ) { ( void )
mech ; ( void ) rtdv ; ( void ) state ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { case 0 : return
computeAssemblyJacobian_0 ( rtdv , state , motionData , J ) ; case 1 : return
computeAssemblyJacobian_1 ( rtdv , state , motionData , J ) ; case 2 : return
computeAssemblyJacobian_2 ( rtdv , state , motionData , J ) ; case 3 : return
computeAssemblyJacobian_3 ( rtdv , state , motionData , J ) ; case 4 : return
computeAssemblyJacobian_4 ( rtdv , state , motionData , J ) ; } return 0 ; }
size_t PlatformAssem_f0ca4364_1_computeFullAssemblyJacobian ( const void *
mech , const double * rtdv , const double * state , const double * motionData
, double * J ) { double xx [ 674 ] ; ( void ) mech ; ( void ) rtdv ; xx [ 0 ]
= 0.0 ; xx [ 1 ] = 0.3895853754265615 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ]
* state [ 12 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = 0.389581900177037 ;
xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx
[ 6 ] ; xx [ 7 ] = 0.5901074779979933 ; xx [ 8 ] = 0.5901036711621462 ; xx [
9 ] = xx [ 7 ] * xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ; xx [ 10 ] = - xx [ 9 ] ; xx
[ 11 ] = xx [ 8 ] * xx [ 4 ] - xx [ 7 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 5 ] * xx
[ 4 ] + xx [ 1 ] * xx [ 6 ] ; xx [ 1 ] = - xx [ 7 ] ; xx [ 12 ] = xx [ 3 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 11 ] ; xx [ 15 ] = xx [ 1 ] ; xx [
16 ] = motionData [ 266 ] ; xx [ 17 ] = motionData [ 267 ] ; xx [ 18 ] =
motionData [ 268 ] ; xx [ 19 ] = motionData [ 269 ] ; pm_math_quatCompose (
xx + 12 , xx + 16 , xx + 20 ) ; xx [ 4 ] = 2.0 ; xx [ 5 ] = 1.0 ; xx [ 16 ] =
xx [ 4 ] * ( motionData [ 266 ] * motionData [ 268 ] - motionData [ 267 ] *
motionData [ 269 ] ) ; xx [ 17 ] = - ( ( motionData [ 266 ] * motionData [
267 ] + motionData [ 268 ] * motionData [ 269 ] ) * xx [ 4 ] ) ; xx [ 18 ] =
( motionData [ 267 ] * motionData [ 267 ] + motionData [ 268 ] * motionData [
268 ] ) * xx [ 4 ] - xx [ 5 ] ; xx [ 6 ] = 7.599121945184391e-12 ; xx [ 8 ] =
5.036130209737022e-12 ; xx [ 19 ] = 5.192027881355888e-12 ; xx [ 24 ] = - xx
[ 6 ] ; xx [ 25 ] = xx [ 8 ] ; xx [ 26 ] = - xx [ 19 ] ; pm_math_cross3 ( xx
+ 16 , xx + 24 , xx + 27 ) ; pm_math_quatXform ( xx + 20 , xx + 27 , xx + 16
) ; xx [ 20 ] = xx [ 10 ] ; xx [ 21 ] = xx [ 11 ] ; xx [ 22 ] = xx [ 1 ] ; xx
[ 1 ] = xx [ 7 ] * motionData [ 270 ] ; xx [ 10 ] = xx [ 7 ] * motionData [
271 ] ; xx [ 23 ] = xx [ 11 ] * motionData [ 271 ] - xx [ 9 ] * motionData [
270 ] ; xx [ 27 ] = - xx [ 1 ] ; xx [ 28 ] = - xx [ 10 ] ; xx [ 29 ] = - xx [
23 ] ; pm_math_cross3 ( xx + 20 , xx + 27 , xx + 30 ) ; xx [ 27 ] =
0.02520954632904373 ; xx [ 28 ] = xx [ 27 ] * xx [ 9 ] ; xx [ 29 ] = xx [ 27
] * xx [ 7 ] ; xx [ 33 ] = xx [ 4 ] * ( xx [ 11 ] * xx [ 28 ] - xx [ 3 ] * xx
[ 29 ] ) ; xx [ 34 ] = xx [ 2 ] * state [ 14 ] ; xx [ 35 ] = cos ( xx [ 34 ]
) ; xx [ 36 ] = sin ( xx [ 34 ] ) ; xx [ 37 ] = xx [ 35 ] * motionData [ 15 ]
- xx [ 36 ] * motionData [ 16 ] ; xx [ 38 ] = - ( xx [ 35 ] * motionData [ 14
] + xx [ 36 ] * motionData [ 17 ] ) ; xx [ 39 ] = xx [ 36 ] * motionData [ 14
] - xx [ 35 ] * motionData [ 17 ] ; xx [ 40 ] = xx [ 36 ] * motionData [ 15 ]
+ xx [ 35 ] * motionData [ 16 ] ; xx [ 41 ] = motionData [ 259 ] ; xx [ 42 ]
= motionData [ 260 ] ; xx [ 43 ] = motionData [ 261 ] ; xx [ 44 ] =
motionData [ 262 ] ; pm_math_quatCompose ( xx + 37 , xx + 41 , xx + 45 ) ; xx
[ 41 ] = xx [ 4 ] * ( motionData [ 260 ] * motionData [ 262 ] - motionData [
259 ] * motionData [ 261 ] ) ; xx [ 42 ] = ( motionData [ 259 ] * motionData
[ 260 ] + motionData [ 261 ] * motionData [ 262 ] ) * xx [ 4 ] ; xx [ 43 ] =
xx [ 5 ] - ( motionData [ 260 ] * motionData [ 260 ] + motionData [ 261 ] *
motionData [ 261 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 41 , xx + 24 , xx +
49 ) ; pm_math_quatXform ( xx + 45 , xx + 49 , xx + 41 ) ; xx [ 34 ] = xx [
36 ] * motionData [ 264 ] - xx [ 35 ] * motionData [ 263 ] ; xx [ 44 ] =
7.748428954013064e-12 ; xx [ 45 ] = 5.376764528053357e-12 ; xx [ 46 ] = xx [
44 ] * xx [ 35 ] - xx [ 45 ] * xx [ 36 ] ; xx [ 47 ] = xx [ 4 ] * xx [ 46 ] *
xx [ 36 ] ; xx [ 48 ] = xx [ 4 ] * xx [ 36 ] * xx [ 34 ] - ( motionData [ 264
] + xx [ 47 ] ) - xx [ 45 ] ; xx [ 49 ] = motionData [ 15 ] ; xx [ 50 ] =
motionData [ 16 ] ; xx [ 51 ] = motionData [ 17 ] ; xx [ 52 ] = xx [ 4 ] * xx
[ 46 ] * xx [ 35 ] ; xx [ 46 ] = motionData [ 263 ] + xx [ 4 ] * xx [ 35 ] *
xx [ 34 ] - xx [ 52 ] + xx [ 44 ] ; xx [ 34 ] = xx [ 46 ] * motionData [ 17 ]
; xx [ 53 ] = xx [ 48 ] * motionData [ 17 ] ; xx [ 54 ] = xx [ 46 ] *
motionData [ 15 ] - xx [ 48 ] * motionData [ 16 ] ; xx [ 55 ] = - xx [ 34 ] ;
xx [ 56 ] = xx [ 53 ] ; xx [ 57 ] = xx [ 54 ] ; pm_math_cross3 ( xx + 49 , xx
+ 55 , xx + 58 ) ; xx [ 61 ] = motionData [ 203 ] ; xx [ 62 ] = motionData [
204 ] ; xx [ 63 ] = motionData [ 205 ] ; xx [ 64 ] = motionData [ 206 ] ; xx
[ 55 ] = 3.980251324392935e-7 ; xx [ 56 ] = 0.999999999999921 ; xx [ 57 ] =
xx [ 55 ] * state [ 19 ] - xx [ 56 ] * state [ 16 ] ; xx [ 65 ] = xx [ 55 ] *
state [ 18 ] + xx [ 56 ] * state [ 17 ] ; xx [ 66 ] = - xx [ 65 ] ; xx [ 67 ]
= xx [ 56 ] * state [ 18 ] - xx [ 55 ] * state [ 17 ] ; xx [ 68 ] = - xx [ 67
] ; xx [ 69 ] = xx [ 55 ] * state [ 16 ] + xx [ 56 ] * state [ 19 ] ; xx [ 70
] = - xx [ 69 ] ; xx [ 71 ] = xx [ 57 ] ; xx [ 72 ] = xx [ 66 ] ; xx [ 73 ] =
xx [ 68 ] ; xx [ 74 ] = xx [ 70 ] ; pm_math_quatCompose ( xx + 61 , xx + 71 ,
xx + 75 ) ; xx [ 79 ] = motionData [ 252 ] ; xx [ 80 ] = motionData [ 253 ] ;
xx [ 81 ] = motionData [ 254 ] ; xx [ 82 ] = motionData [ 255 ] ;
pm_math_quatCompose ( xx + 75 , xx + 79 , xx + 83 ) ; xx [ 79 ] = motionData
[ 253 ] ; xx [ 80 ] = motionData [ 254 ] ; xx [ 81 ] = motionData [ 255 ] ;
xx [ 82 ] = 7.960502648785241e-7 ; xx [ 87 ] = xx [ 82 ] * motionData [ 255 ]
; xx [ 88 ] = xx [ 82 ] * motionData [ 253 ] + motionData [ 254 ] ; xx [ 89 ]
= xx [ 87 ] ; xx [ 90 ] = motionData [ 255 ] ; xx [ 91 ] = - xx [ 88 ] ;
pm_math_cross3 ( xx + 79 , xx + 89 , xx + 92 ) ; xx [ 89 ] = motionData [ 252
] * motionData [ 255 ] ; xx [ 95 ] = xx [ 5 ] + ( xx [ 92 ] - xx [ 87 ] *
motionData [ 252 ] ) * xx [ 4 ] ; xx [ 96 ] = xx [ 4 ] * ( xx [ 93 ] - xx [
89 ] ) - xx [ 82 ] ; xx [ 97 ] = xx [ 4 ] * ( xx [ 94 ] + xx [ 88 ] *
motionData [ 252 ] ) ; pm_math_cross3 ( xx + 95 , xx + 24 , xx + 90 ) ;
pm_math_quatXform ( xx + 83 , xx + 90 , xx + 93 ) ; xx [ 88 ] = - ( xx [ 82 ]
* motionData [ 258 ] ) ; xx [ 90 ] = xx [ 88 ] ; xx [ 91 ] = - motionData [
258 ] ; xx [ 92 ] = motionData [ 257 ] + xx [ 82 ] * motionData [ 256 ] ;
pm_math_quatXform ( xx + 71 , xx + 90 , xx + 96 ) ; xx [ 90 ] =
2.329280111075767e-13 ; xx [ 91 ] = 2.926046524751139e-7 ; xx [ 99 ] = xx [
90 ] ; xx [ 100 ] = xx [ 91 ] ; xx [ 101 ] = 0.04575000000718987 ;
pm_math_quatXform ( xx + 71 , xx + 99 , xx + 102 ) ; xx [ 105 ] = xx [ 96 ] +
xx [ 102 ] ; xx [ 106 ] = xx [ 97 ] + xx [ 103 ] ; xx [ 107 ] = xx [ 98 ] +
xx [ 104 ] ; pm_math_quatXform ( xx + 61 , xx + 105 , xx + 96 ) ; xx [ 92 ] =
motionData [ 253 ] - xx [ 82 ] * motionData [ 254 ] ; xx [ 105 ] = -
motionData [ 255 ] ; xx [ 106 ] = xx [ 87 ] ; xx [ 107 ] = xx [ 92 ] ;
pm_math_cross3 ( xx + 79 , xx + 105 , xx + 108 ) ; xx [ 79 ] = xx [ 82 ] + (
xx [ 89 ] + xx [ 108 ] ) * xx [ 4 ] ; xx [ 80 ] = xx [ 5 ] + xx [ 4 ] * ( xx
[ 109 ] - xx [ 82 ] * xx [ 89 ] ) ; xx [ 81 ] = xx [ 4 ] * ( xx [ 110 ] - xx
[ 92 ] * motionData [ 252 ] ) ; pm_math_cross3 ( xx + 79 , xx + 24 , xx + 105
) ; pm_math_quatXform ( xx + 83 , xx + 105 , xx + 79 ) ; xx [ 105 ] =
motionData [ 258 ] ; xx [ 106 ] = xx [ 88 ] ; xx [ 107 ] = xx [ 82 ] *
motionData [ 257 ] - motionData [ 256 ] ; pm_math_quatXform ( xx + 71 , xx +
105 , xx + 87 ) ; xx [ 105 ] = - xx [ 91 ] ; xx [ 106 ] = xx [ 90 ] ; xx [
107 ] = 7.670997177269469e-12 ; pm_math_quatXform ( xx + 71 , xx + 105 , xx +
90 ) ; xx [ 108 ] = xx [ 87 ] + xx [ 90 ] ; xx [ 109 ] = xx [ 88 ] + xx [ 91
] ; xx [ 110 ] = xx [ 89 ] + xx [ 92 ] ; pm_math_quatXform ( xx + 61 , xx +
108 , xx + 87 ) ; xx [ 108 ] = xx [ 4 ] * ( motionData [ 253 ] * motionData [
255 ] - motionData [ 252 ] * motionData [ 254 ] ) ; xx [ 109 ] = ( motionData
[ 252 ] * motionData [ 253 ] + motionData [ 254 ] * motionData [ 255 ] ) * xx
[ 4 ] ; xx [ 110 ] = xx [ 5 ] - ( motionData [ 253 ] * motionData [ 253 ] +
motionData [ 254 ] * motionData [ 254 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
108 , xx + 24 , xx + 111 ) ; pm_math_quatXform ( xx + 83 , xx + 111 , xx +
108 ) ; xx [ 83 ] = xx [ 66 ] ; xx [ 84 ] = xx [ 68 ] ; xx [ 85 ] = xx [ 70 ]
; xx [ 66 ] = xx [ 69 ] * motionData [ 256 ] ; xx [ 68 ] = xx [ 69 ] *
motionData [ 257 ] ; xx [ 70 ] = xx [ 65 ] * motionData [ 256 ] + xx [ 67 ] *
motionData [ 257 ] ; xx [ 111 ] = xx [ 66 ] ; xx [ 112 ] = xx [ 68 ] ; xx [
113 ] = - xx [ 70 ] ; pm_math_cross3 ( xx + 83 , xx + 111 , xx + 114 ) ; xx [
86 ] = 3.641162862673871e-8 ; xx [ 111 ] = xx [ 86 ] * xx [ 69 ] ; xx [ 112 ]
= 0.04575000000717538 ; xx [ 113 ] = xx [ 112 ] * xx [ 69 ] ; xx [ 117 ] = xx
[ 86 ] * xx [ 65 ] + xx [ 67 ] * xx [ 112 ] ; xx [ 118 ] = xx [ 111 ] ; xx [
119 ] = xx [ 113 ] ; xx [ 120 ] = - xx [ 117 ] ; pm_math_cross3 ( xx + 83 ,
xx + 118 , xx + 121 ) ; xx [ 118 ] = xx [ 4 ] * ( xx [ 121 ] + xx [ 111 ] *
xx [ 57 ] ) ; xx [ 111 ] = ( xx [ 113 ] * xx [ 57 ] + xx [ 122 ] ) * xx [ 4 ]
; xx [ 113 ] = ( xx [ 123 ] - xx [ 117 ] * xx [ 57 ] ) * xx [ 4 ] ; xx [ 119
] = xx [ 4 ] * ( xx [ 114 ] + xx [ 66 ] * xx [ 57 ] ) + xx [ 118 ] -
motionData [ 257 ] - xx [ 112 ] ; xx [ 120 ] = motionData [ 256 ] + xx [ 4 ]
* ( xx [ 115 ] + xx [ 68 ] * xx [ 57 ] ) + xx [ 111 ] + xx [ 86 ] ; xx [ 121
] = ( xx [ 116 ] - xx [ 57 ] * xx [ 70 ] ) * xx [ 4 ] + xx [ 113 ] ;
pm_math_quatXform ( xx + 61 , xx + 119 , xx + 114 ) ; xx [ 119 ] = motionData
[ 210 ] ; xx [ 120 ] = motionData [ 211 ] ; xx [ 121 ] = motionData [ 212 ] ;
xx [ 122 ] = motionData [ 213 ] ; xx [ 66 ] = 3.980251340548381e-7 ; xx [ 68
] = xx [ 56 ] * state [ 26 ] - xx [ 66 ] * state [ 23 ] ; xx [ 70 ] = xx [ 56
] * state [ 25 ] - xx [ 66 ] * state [ 24 ] ; xx [ 117 ] = xx [ 66 ] * state
[ 25 ] + xx [ 56 ] * state [ 24 ] ; xx [ 123 ] = - xx [ 117 ] ; xx [ 124 ] =
xx [ 66 ] * state [ 26 ] + xx [ 56 ] * state [ 23 ] ; xx [ 66 ] = - xx [ 124
] ; xx [ 125 ] = xx [ 68 ] ; xx [ 126 ] = xx [ 70 ] ; xx [ 127 ] = xx [ 123 ]
; xx [ 128 ] = xx [ 66 ] ; pm_math_quatCompose ( xx + 119 , xx + 125 , xx +
129 ) ; xx [ 125 ] = motionData [ 245 ] ; xx [ 126 ] = motionData [ 246 ] ;
xx [ 127 ] = motionData [ 247 ] ; xx [ 128 ] = motionData [ 248 ] ;
pm_math_quatCompose ( xx + 129 , xx + 125 , xx + 133 ) ; xx [ 125 ] =
motionData [ 247 ] * motionData [ 247 ] ; xx [ 126 ] = motionData [ 248 ] *
motionData [ 248 ] ; xx [ 127 ] = motionData [ 246 ] * motionData [ 247 ] ;
xx [ 128 ] = motionData [ 245 ] * motionData [ 248 ] ; xx [ 137 ] =
motionData [ 245 ] * motionData [ 247 ] ; xx [ 138 ] = motionData [ 246 ] *
motionData [ 248 ] ; xx [ 139 ] = xx [ 5 ] - ( xx [ 125 ] + xx [ 126 ] ) * xx
[ 4 ] ; xx [ 140 ] = xx [ 4 ] * ( xx [ 127 ] - xx [ 128 ] ) ; xx [ 141 ] = (
xx [ 137 ] + xx [ 138 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 139 , xx + 24 ,
xx + 142 ) ; pm_math_quatXform ( xx + 133 , xx + 142 , xx + 139 ) ; xx [ 142
] = xx [ 70 ] ; xx [ 143 ] = xx [ 123 ] ; xx [ 144 ] = xx [ 66 ] ; xx [ 66 ]
= xx [ 117 ] * motionData [ 250 ] ; xx [ 123 ] = xx [ 124 ] * motionData [
251 ] ; xx [ 145 ] = xx [ 66 ] + xx [ 123 ] ; xx [ 146 ] = xx [ 70 ] *
motionData [ 250 ] ; xx [ 147 ] = xx [ 70 ] * motionData [ 251 ] ; xx [ 148 ]
= - xx [ 145 ] ; xx [ 149 ] = - xx [ 146 ] ; xx [ 150 ] = - xx [ 147 ] ;
pm_math_cross3 ( xx + 142 , xx + 148 , xx + 151 ) ; xx [ 148 ] = xx [ 117 ] *
xx [ 8 ] ; xx [ 149 ] = xx [ 124 ] * xx [ 19 ] ; xx [ 150 ] = xx [ 148 ] - xx
[ 149 ] ; xx [ 154 ] = xx [ 8 ] * xx [ 70 ] ; xx [ 155 ] = xx [ 19 ] * xx [
70 ] ; xx [ 156 ] = xx [ 150 ] ; xx [ 157 ] = xx [ 154 ] ; xx [ 158 ] = - xx
[ 155 ] ; pm_math_cross3 ( xx + 142 , xx + 156 , xx + 159 ) ; xx [ 156 ] = (
xx [ 68 ] * xx [ 150 ] + xx [ 159 ] ) * xx [ 4 ] ; xx [ 150 ] = xx [ 4 ] * (
xx [ 160 ] + xx [ 154 ] * xx [ 68 ] ) ; xx [ 154 ] = ( xx [ 161 ] - xx [ 155
] * xx [ 68 ] ) * xx [ 4 ] ; xx [ 157 ] = xx [ 4 ] * ( xx [ 151 ] - xx [ 145
] * xx [ 68 ] ) + xx [ 156 ] ; xx [ 158 ] = xx [ 4 ] * ( xx [ 152 ] - xx [
146 ] * xx [ 68 ] ) + xx [ 150 ] - motionData [ 251 ] - xx [ 19 ] ; xx [ 159
] = motionData [ 250 ] + xx [ 4 ] * ( xx [ 153 ] - xx [ 147 ] * xx [ 68 ] ) +
xx [ 154 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 119 , xx + 157 , xx + 145 )
; xx [ 151 ] = motionData [ 246 ] * motionData [ 246 ] ; xx [ 152 ] =
motionData [ 247 ] * motionData [ 248 ] ; xx [ 153 ] = motionData [ 245 ] *
motionData [ 246 ] ; xx [ 157 ] = ( xx [ 128 ] + xx [ 127 ] ) * xx [ 4 ] ; xx
[ 158 ] = xx [ 5 ] - ( xx [ 126 ] + xx [ 151 ] ) * xx [ 4 ] ; xx [ 159 ] = xx
[ 4 ] * ( xx [ 152 ] - xx [ 153 ] ) ; pm_math_cross3 ( xx + 157 , xx + 24 ,
xx + 126 ) ; pm_math_quatXform ( xx + 133 , xx + 126 , xx + 157 ) ; xx [ 126
] = xx [ 117 ] * motionData [ 249 ] ; xx [ 127 ] = xx [ 70 ] * motionData [
249 ] ; xx [ 128 ] = xx [ 127 ] - xx [ 123 ] ; xx [ 123 ] = xx [ 117 ] *
motionData [ 251 ] ; xx [ 160 ] = xx [ 126 ] ; xx [ 161 ] = xx [ 128 ] ; xx [
162 ] = xx [ 123 ] ; pm_math_cross3 ( xx + 142 , xx + 160 , xx + 163 ) ; xx [
155 ] = xx [ 117 ] * xx [ 6 ] ; xx [ 160 ] = xx [ 6 ] * xx [ 70 ] ; xx [ 161
] = xx [ 149 ] - xx [ 160 ] ; xx [ 149 ] = xx [ 117 ] * xx [ 19 ] ; xx [ 166
] = xx [ 155 ] ; xx [ 167 ] = - xx [ 161 ] ; xx [ 168 ] = xx [ 149 ] ;
pm_math_cross3 ( xx + 142 , xx + 166 , xx + 169 ) ; xx [ 162 ] = xx [ 4 ] * (
xx [ 169 ] + xx [ 155 ] * xx [ 68 ] ) ; xx [ 155 ] = xx [ 4 ] * ( xx [ 170 ]
- xx [ 161 ] * xx [ 68 ] ) ; xx [ 161 ] = ( xx [ 149 ] * xx [ 68 ] + xx [ 171
] ) * xx [ 4 ] ; xx [ 166 ] = motionData [ 251 ] + ( xx [ 126 ] * xx [ 68 ] +
xx [ 163 ] ) * xx [ 4 ] + xx [ 162 ] + xx [ 19 ] ; xx [ 167 ] = ( xx [ 68 ] *
xx [ 128 ] + xx [ 164 ] ) * xx [ 4 ] + xx [ 155 ] ; xx [ 168 ] = ( xx [ 123 ]
* xx [ 68 ] + xx [ 165 ] ) * xx [ 4 ] + xx [ 161 ] - motionData [ 249 ] - xx
[ 6 ] ; pm_math_quatXform ( xx + 119 , xx + 166 , xx + 163 ) ; xx [ 166 ] =
xx [ 4 ] * ( xx [ 138 ] - xx [ 137 ] ) ; xx [ 167 ] = ( xx [ 153 ] + xx [ 152
] ) * xx [ 4 ] ; xx [ 168 ] = xx [ 5 ] - ( xx [ 151 ] + xx [ 125 ] ) * xx [ 4
] ; pm_math_cross3 ( xx + 166 , xx + 24 , xx + 151 ) ; pm_math_quatXform ( xx
+ 133 , xx + 151 , xx + 166 ) ; xx [ 123 ] = xx [ 124 ] * motionData [ 249 ]
; xx [ 125 ] = xx [ 124 ] * motionData [ 250 ] ; xx [ 126 ] = xx [ 127 ] - xx
[ 66 ] ; xx [ 133 ] = xx [ 123 ] ; xx [ 134 ] = xx [ 125 ] ; xx [ 135 ] = xx
[ 126 ] ; pm_math_cross3 ( xx + 142 , xx + 133 , xx + 136 ) ; xx [ 66 ] = xx
[ 124 ] * xx [ 6 ] ; xx [ 127 ] = xx [ 124 ] * xx [ 8 ] ; xx [ 128 ] = xx [
160 ] + xx [ 148 ] ; xx [ 133 ] = xx [ 66 ] ; xx [ 134 ] = - xx [ 127 ] ; xx
[ 135 ] = xx [ 128 ] ; pm_math_cross3 ( xx + 142 , xx + 133 , xx + 151 ) ; xx
[ 133 ] = ( xx [ 66 ] * xx [ 68 ] + xx [ 151 ] ) * xx [ 4 ] ; xx [ 66 ] = xx
[ 4 ] * ( xx [ 152 ] - xx [ 127 ] * xx [ 68 ] ) ; xx [ 127 ] = ( xx [ 128 ] *
xx [ 68 ] + xx [ 153 ] ) * xx [ 4 ] ; xx [ 151 ] = ( xx [ 123 ] * xx [ 68 ] +
xx [ 136 ] ) * xx [ 4 ] + xx [ 133 ] - motionData [ 250 ] + xx [ 8 ] ; xx [
152 ] = motionData [ 249 ] + ( xx [ 125 ] * xx [ 68 ] + xx [ 137 ] ) * xx [ 4
] + xx [ 66 ] + xx [ 6 ] ; xx [ 153 ] = ( xx [ 68 ] * xx [ 126 ] + xx [ 138 ]
) * xx [ 4 ] + xx [ 127 ] ; pm_math_quatXform ( xx + 119 , xx + 151 , xx +
134 ) ; xx [ 123 ] = xx [ 2 ] * state [ 30 ] ; xx [ 125 ] = cos ( xx [ 123 ]
) ; xx [ 126 ] = sin ( xx [ 123 ] ) ; xx [ 169 ] = xx [ 125 ] * motionData [
217 ] - xx [ 126 ] * motionData [ 220 ] ; xx [ 170 ] = xx [ 125 ] *
motionData [ 218 ] + xx [ 126 ] * motionData [ 219 ] ; xx [ 171 ] = xx [ 125
] * motionData [ 219 ] - xx [ 126 ] * motionData [ 218 ] ; xx [ 172 ] = xx [
126 ] * motionData [ 217 ] + xx [ 125 ] * motionData [ 220 ] ; xx [ 173 ] =
motionData [ 49 ] ; xx [ 174 ] = motionData [ 50 ] ; xx [ 175 ] = motionData
[ 51 ] ; xx [ 176 ] = motionData [ 52 ] ; pm_math_quatCompose ( xx + 169 , xx
+ 173 , xx + 177 ) ; xx [ 151 ] = xx [ 4 ] * ( motionData [ 50 ] * motionData
[ 52 ] - motionData [ 49 ] * motionData [ 51 ] ) ; xx [ 152 ] = ( motionData
[ 49 ] * motionData [ 50 ] + motionData [ 51 ] * motionData [ 52 ] ) * xx [ 4
] ; xx [ 153 ] = xx [ 5 ] - ( motionData [ 50 ] * motionData [ 50 ] +
motionData [ 51 ] * motionData [ 51 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
151 , xx + 24 , xx + 173 ) ; pm_math_quatXform ( xx + 177 , xx + 173 , xx +
151 ) ; xx [ 123 ] = xx [ 126 ] * motionData [ 54 ] ; xx [ 128 ] = xx [ 126 ]
* motionData [ 53 ] ; xx [ 137 ] = 0.02540000000000185 ; xx [ 138 ] = xx [
137 ] * xx [ 126 ] ; xx [ 148 ] = xx [ 4 ] * xx [ 125 ] * xx [ 138 ] ; xx [
149 ] = xx [ 4 ] * ( xx [ 123 ] * xx [ 126 ] - xx [ 125 ] * xx [ 128 ] ) -
motionData [ 54 ] + xx [ 148 ] ; xx [ 173 ] = motionData [ 218 ] ; xx [ 174 ]
= motionData [ 219 ] ; xx [ 175 ] = motionData [ 220 ] ; xx [ 160 ] = xx [ 4
] * xx [ 138 ] * xx [ 126 ] ; xx [ 138 ] = motionData [ 53 ] - ( ( xx [ 125 ]
* xx [ 123 ] + xx [ 128 ] * xx [ 126 ] ) * xx [ 4 ] - xx [ 160 ] ) - xx [ 137
] ; xx [ 123 ] = xx [ 138 ] * motionData [ 220 ] ; xx [ 128 ] = xx [ 149 ] *
motionData [ 220 ] ; xx [ 176 ] = xx [ 138 ] * motionData [ 218 ] - xx [ 149
] * motionData [ 219 ] ; xx [ 177 ] = - xx [ 123 ] ; xx [ 178 ] = xx [ 128 ]
; xx [ 179 ] = xx [ 176 ] ; pm_math_cross3 ( xx + 173 , xx + 177 , xx + 180 )
; xx [ 177 ] = xx [ 2 ] * state [ 32 ] ; xx [ 178 ] = cos ( xx [ 177 ] ) ; xx
[ 179 ] = sin ( xx [ 177 ] ) ; xx [ 177 ] = xx [ 178 ] * motionData [ 225 ] -
xx [ 179 ] * motionData [ 226 ] ; xx [ 183 ] = xx [ 178 ] * motionData [ 226
] + xx [ 179 ] * motionData [ 225 ] ; xx [ 184 ] = xx [ 178 ] * motionData [
227 ] - xx [ 179 ] * motionData [ 224 ] ; xx [ 185 ] = xx [ 177 ] ; xx [ 186
] = xx [ 183 ] ; xx [ 187 ] = xx [ 184 ] ; xx [ 188 ] = xx [ 6 ] * xx [ 184 ]
; xx [ 189 ] = xx [ 8 ] * xx [ 184 ] ; xx [ 184 ] = xx [ 6 ] * xx [ 177 ] -
xx [ 183 ] * xx [ 8 ] ; xx [ 190 ] = - xx [ 188 ] ; xx [ 191 ] = xx [ 189 ] ;
xx [ 192 ] = xx [ 184 ] ; pm_math_cross3 ( xx + 185 , xx + 190 , xx + 193 ) ;
xx [ 177 ] = xx [ 178 ] * motionData [ 224 ] + xx [ 179 ] * motionData [ 227
] ; xx [ 183 ] = 2.191920996097441e-12 ; xx [ 185 ] = xx [ 183 ] * xx [ 179 ]
; xx [ 186 ] = 3.368449963403463e-13 ; xx [ 187 ] = xx [ 186 ] * xx [ 179 ] ;
xx [ 190 ] = xx [ 4 ] * ( xx [ 185 ] * xx [ 179 ] - xx [ 178 ] * xx [ 187 ] )
- xx [ 183 ] ; xx [ 196 ] = motionData [ 225 ] ; xx [ 197 ] = motionData [
226 ] ; xx [ 198 ] = motionData [ 227 ] ; xx [ 183 ] = ( xx [ 178 ] * xx [
185 ] + xx [ 187 ] * xx [ 179 ] ) * xx [ 4 ] - xx [ 186 ] ; xx [ 178 ] = xx [
183 ] * motionData [ 227 ] ; xx [ 179 ] = xx [ 190 ] * motionData [ 227 ] ;
xx [ 185 ] = xx [ 183 ] * motionData [ 225 ] - xx [ 190 ] * motionData [ 226
] ; xx [ 199 ] = - xx [ 178 ] ; xx [ 200 ] = xx [ 179 ] ; xx [ 201 ] = xx [
185 ] ; pm_math_cross3 ( xx + 196 , xx + 199 , xx + 202 ) ; xx [ 186 ] =
0.389585375426561 ; xx [ 187 ] = xx [ 2 ] * state [ 64 ] ; xx [ 191 ] = cos (
xx [ 187 ] ) ; xx [ 192 ] = 0.3895819001770367 ; xx [ 196 ] = sin ( xx [ 187
] ) ; xx [ 187 ] = xx [ 186 ] * xx [ 191 ] - xx [ 192 ] * xx [ 196 ] ; xx [
197 ] = 0.5901074779979936 ; xx [ 198 ] = 0.5901036711621467 ; xx [ 199 ] =
xx [ 197 ] * xx [ 191 ] + xx [ 198 ] * xx [ 196 ] ; xx [ 200 ] = - xx [ 199 ]
; xx [ 201 ] = xx [ 198 ] * xx [ 191 ] - xx [ 197 ] * xx [ 196 ] ; xx [ 197 ]
= xx [ 192 ] * xx [ 191 ] + xx [ 186 ] * xx [ 196 ] ; xx [ 186 ] = - xx [ 197
] ; xx [ 205 ] = xx [ 187 ] ; xx [ 206 ] = xx [ 200 ] ; xx [ 207 ] = xx [ 201
] ; xx [ 208 ] = xx [ 186 ] ; xx [ 209 ] = motionData [ 238 ] ; xx [ 210 ] =
motionData [ 239 ] ; xx [ 211 ] = motionData [ 240 ] ; xx [ 212 ] =
motionData [ 241 ] ; pm_math_quatCompose ( xx + 205 , xx + 209 , xx + 213 ) ;
xx [ 205 ] = xx [ 4 ] * ( motionData [ 238 ] * motionData [ 240 ] -
motionData [ 239 ] * motionData [ 241 ] ) ; xx [ 206 ] = - ( ( motionData [
238 ] * motionData [ 239 ] + motionData [ 240 ] * motionData [ 241 ] ) * xx [
4 ] ) ; xx [ 207 ] = ( motionData [ 239 ] * motionData [ 239 ] + motionData [
240 ] * motionData [ 240 ] ) * xx [ 4 ] - xx [ 5 ] ; xx [ 191 ] =
3.641924106626229e-8 ; xx [ 192 ] = 0.04574999999998041 ; xx [ 196 ] =
2.92603149291605e-7 ; xx [ 208 ] = xx [ 191 ] ; xx [ 209 ] = xx [ 192 ] ; xx
[ 210 ] = xx [ 196 ] ; pm_math_cross3 ( xx + 205 , xx + 208 , xx + 217 ) ;
pm_math_quatXform ( xx + 213 , xx + 217 , xx + 205 ) ; xx [ 211 ] = xx [ 200
] ; xx [ 212 ] = xx [ 201 ] ; xx [ 213 ] = xx [ 186 ] ; xx [ 186 ] = xx [ 197
] * motionData [ 242 ] ; xx [ 198 ] = xx [ 197 ] * motionData [ 243 ] ; xx [
200 ] = xx [ 201 ] * motionData [ 243 ] - xx [ 199 ] * motionData [ 242 ] ;
xx [ 214 ] = - xx [ 186 ] ; xx [ 215 ] = - xx [ 198 ] ; xx [ 216 ] = - xx [
200 ] ; pm_math_cross3 ( xx + 211 , xx + 214 , xx + 217 ) ; xx [ 211 ] = xx [
27 ] * xx [ 199 ] ; xx [ 212 ] = xx [ 27 ] * xx [ 197 ] ; xx [ 213 ] = xx [ 2
] * state [ 66 ] ; xx [ 214 ] = cos ( xx [ 213 ] ) ; xx [ 215 ] = sin ( xx [
213 ] ) ; xx [ 220 ] = xx [ 214 ] * motionData [ 127 ] - xx [ 215 ] *
motionData [ 128 ] ; xx [ 221 ] = - ( xx [ 214 ] * motionData [ 126 ] + xx [
215 ] * motionData [ 129 ] ) ; xx [ 222 ] = xx [ 215 ] * motionData [ 126 ] -
xx [ 214 ] * motionData [ 129 ] ; xx [ 223 ] = xx [ 215 ] * motionData [ 127
] + xx [ 214 ] * motionData [ 128 ] ; xx [ 224 ] = motionData [ 140 ] ; xx [
225 ] = motionData [ 141 ] ; xx [ 226 ] = motionData [ 142 ] ; xx [ 227 ] =
motionData [ 143 ] ; pm_math_quatCompose ( xx + 220 , xx + 224 , xx + 228 ) ;
xx [ 220 ] = xx [ 4 ] * ( motionData [ 141 ] * motionData [ 143 ] -
motionData [ 140 ] * motionData [ 142 ] ) ; xx [ 221 ] = ( motionData [ 140 ]
* motionData [ 141 ] + motionData [ 142 ] * motionData [ 143 ] ) * xx [ 4 ] ;
xx [ 222 ] = xx [ 5 ] - ( motionData [ 141 ] * motionData [ 141 ] +
motionData [ 142 ] * motionData [ 142 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
220 , xx + 208 , xx + 223 ) ; pm_math_quatXform ( xx + 228 , xx + 223 , xx +
220 ) ; xx [ 213 ] = xx [ 215 ] * motionData [ 145 ] - xx [ 214 ] *
motionData [ 144 ] ; xx [ 216 ] = 6.924287580811761e-12 ; xx [ 223 ] =
1.024070757638107e-11 ; xx [ 224 ] = xx [ 216 ] * xx [ 215 ] - xx [ 223 ] *
xx [ 214 ] ; xx [ 225 ] = xx [ 4 ] * xx [ 215 ] * xx [ 213 ] - ( motionData [
145 ] + xx [ 4 ] * xx [ 224 ] * xx [ 215 ] ) + xx [ 216 ] ; xx [ 226 ] =
motionData [ 127 ] ; xx [ 227 ] = motionData [ 128 ] ; xx [ 228 ] =
motionData [ 129 ] ; xx [ 215 ] = motionData [ 144 ] + xx [ 4 ] * xx [ 214 ]
* xx [ 213 ] - xx [ 4 ] * xx [ 224 ] * xx [ 214 ] - xx [ 223 ] ; xx [ 213 ] =
xx [ 215 ] * motionData [ 129 ] ; xx [ 214 ] = xx [ 225 ] * motionData [ 129
] ; xx [ 216 ] = xx [ 215 ] * motionData [ 127 ] - xx [ 225 ] * motionData [
128 ] ; xx [ 229 ] = - xx [ 213 ] ; xx [ 230 ] = xx [ 214 ] ; xx [ 231 ] = xx
[ 216 ] ; pm_math_cross3 ( xx + 226 , xx + 229 , xx + 232 ) ; xx [ 226 ] =
motionData [ 189 ] ; xx [ 227 ] = motionData [ 190 ] ; xx [ 228 ] =
motionData [ 191 ] ; xx [ 229 ] = motionData [ 192 ] ; xx [ 223 ] = xx [ 55 ]
* state [ 71 ] - xx [ 56 ] * state [ 68 ] ; xx [ 224 ] = xx [ 55 ] * state [
70 ] + xx [ 56 ] * state [ 69 ] ; xx [ 230 ] = - xx [ 224 ] ; xx [ 231 ] = xx
[ 56 ] * state [ 70 ] - xx [ 55 ] * state [ 69 ] ; xx [ 235 ] = - xx [ 231 ]
; xx [ 236 ] = xx [ 55 ] * state [ 68 ] + xx [ 56 ] * state [ 71 ] ; xx [ 237
] = - xx [ 236 ] ; xx [ 238 ] = xx [ 223 ] ; xx [ 239 ] = xx [ 230 ] ; xx [
240 ] = xx [ 235 ] ; xx [ 241 ] = xx [ 237 ] ; pm_math_quatCompose ( xx + 226
, xx + 238 , xx + 242 ) ; xx [ 246 ] = - 2.329268144978725e-13 ; xx [ 247 ] =
xx [ 246 ] ; xx [ 248 ] = - xx [ 196 ] ; xx [ 249 ] = 0.0457500000000094 ;
pm_math_quatXform ( xx + 242 , xx + 247 , xx + 250 ) ; pm_math_quatXform ( xx
+ 238 , xx + 99 , xx + 253 ) ; pm_math_quatXform ( xx + 226 , xx + 253 , xx +
256 ) ; xx [ 253 ] = xx [ 196 ] ; xx [ 254 ] = xx [ 246 ] ; xx [ 255 ] =
5.855191459023036e-14 ; pm_math_quatXform ( xx + 242 , xx + 253 , xx + 259 )
; pm_math_quatXform ( xx + 238 , xx + 105 , xx + 262 ) ; pm_math_quatXform (
xx + 226 , xx + 262 , xx + 238 ) ; xx [ 196 ] = xx [ 191 ] * xx [ 245 ] ; xx
[ 241 ] = xx [ 191 ] * xx [ 243 ] + xx [ 192 ] * xx [ 244 ] ; xx [ 262 ] = -
xx [ 196 ] ; xx [ 263 ] = - ( xx [ 192 ] * xx [ 245 ] ) ; xx [ 264 ] = xx [
241 ] ; pm_math_cross3 ( xx + 243 , xx + 262 , xx + 265 ) ; xx [ 262 ] = xx [
230 ] ; xx [ 263 ] = xx [ 235 ] ; xx [ 264 ] = xx [ 237 ] ; xx [ 230 ] = xx [
86 ] * xx [ 236 ] ; xx [ 235 ] = xx [ 112 ] * xx [ 236 ] ; xx [ 236 ] = xx [
86 ] * xx [ 224 ] + xx [ 231 ] * xx [ 112 ] ; xx [ 268 ] = xx [ 230 ] ; xx [
269 ] = xx [ 235 ] ; xx [ 270 ] = - xx [ 236 ] ; pm_math_cross3 ( xx + 262 ,
xx + 268 , xx + 271 ) ; xx [ 262 ] = xx [ 4 ] * ( xx [ 271 ] + xx [ 230 ] *
xx [ 223 ] ) - xx [ 112 ] ; xx [ 263 ] = xx [ 86 ] + ( xx [ 235 ] * xx [ 223
] + xx [ 272 ] ) * xx [ 4 ] ; xx [ 264 ] = ( xx [ 273 ] - xx [ 236 ] * xx [
223 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 226 , xx + 262 , xx + 235 ) ;
xx [ 223 ] = ( xx [ 29 ] * xx [ 7 ] + xx [ 28 ] * xx [ 9 ] ) * xx [ 4 ] ; xx
[ 224 ] = ( xx [ 3 ] * xx [ 28 ] + xx [ 11 ] * xx [ 29 ] ) * xx [ 4 ] ; xx [
226 ] = motionData [ 322 ] ; xx [ 227 ] = motionData [ 323 ] ; xx [ 228 ] =
motionData [ 324 ] ; xx [ 229 ] = motionData [ 325 ] ; pm_math_quatCompose (
xx + 12 , xx + 226 , xx + 268 ) ; xx [ 226 ] = xx [ 4 ] * ( motionData [ 322
] * motionData [ 324 ] - motionData [ 323 ] * motionData [ 325 ] ) ; xx [ 227
] = - ( ( motionData [ 322 ] * motionData [ 323 ] + motionData [ 324 ] *
motionData [ 325 ] ) * xx [ 4 ] ) ; xx [ 228 ] = ( motionData [ 323 ] *
motionData [ 323 ] + motionData [ 324 ] * motionData [ 324 ] ) * xx [ 4 ] -
xx [ 5 ] ; pm_math_cross3 ( xx + 226 , xx + 24 , xx + 229 ) ;
pm_math_quatXform ( xx + 268 , xx + 229 , xx + 226 ) ; xx [ 28 ] = xx [ 7 ] *
motionData [ 326 ] ; xx [ 29 ] = xx [ 7 ] * motionData [ 327 ] ; xx [ 229 ] =
xx [ 11 ] * motionData [ 327 ] - xx [ 9 ] * motionData [ 326 ] ; xx [ 262 ] =
- xx [ 28 ] ; xx [ 263 ] = - xx [ 29 ] ; xx [ 264 ] = - xx [ 229 ] ;
pm_math_cross3 ( xx + 20 , xx + 262 , xx + 268 ) ; xx [ 271 ] = motionData [
315 ] ; xx [ 272 ] = motionData [ 316 ] ; xx [ 273 ] = motionData [ 317 ] ;
xx [ 274 ] = motionData [ 318 ] ; pm_math_quatCompose ( xx + 37 , xx + 271 ,
xx + 275 ) ; xx [ 262 ] = xx [ 4 ] * ( motionData [ 316 ] * motionData [ 318
] - motionData [ 315 ] * motionData [ 317 ] ) ; xx [ 263 ] = ( motionData [
315 ] * motionData [ 316 ] + motionData [ 317 ] * motionData [ 318 ] ) * xx [
4 ] ; xx [ 264 ] = xx [ 5 ] - ( motionData [ 316 ] * motionData [ 316 ] +
motionData [ 317 ] * motionData [ 317 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
262 , xx + 24 , xx + 271 ) ; pm_math_quatXform ( xx + 275 , xx + 271 , xx +
262 ) ; xx [ 230 ] = xx [ 36 ] * motionData [ 320 ] - xx [ 35 ] * motionData
[ 319 ] ; xx [ 231 ] = xx [ 4 ] * xx [ 36 ] * xx [ 230 ] - ( motionData [ 320
] + xx [ 47 ] ) - xx [ 45 ] ; xx [ 243 ] = motionData [ 319 ] + xx [ 4 ] * xx
[ 35 ] * xx [ 230 ] - xx [ 52 ] + xx [ 44 ] ; xx [ 230 ] = xx [ 243 ] *
motionData [ 17 ] ; xx [ 244 ] = xx [ 231 ] * motionData [ 17 ] ; xx [ 246 ]
= xx [ 243 ] * motionData [ 15 ] - xx [ 231 ] * motionData [ 16 ] ; xx [ 271
] = - xx [ 230 ] ; xx [ 272 ] = xx [ 244 ] ; xx [ 273 ] = xx [ 246 ] ;
pm_math_cross3 ( xx + 49 , xx + 271 , xx + 274 ) ; xx [ 277 ] = motionData [
308 ] ; xx [ 278 ] = motionData [ 309 ] ; xx [ 279 ] = motionData [ 310 ] ;
xx [ 280 ] = motionData [ 311 ] ; pm_math_quatCompose ( xx + 75 , xx + 277 ,
xx + 281 ) ; xx [ 271 ] = motionData [ 309 ] ; xx [ 272 ] = motionData [ 310
] ; xx [ 273 ] = motionData [ 311 ] ; xx [ 277 ] = xx [ 82 ] * motionData [
311 ] ; xx [ 278 ] = xx [ 82 ] * motionData [ 309 ] + motionData [ 310 ] ; xx
[ 285 ] = xx [ 277 ] ; xx [ 286 ] = motionData [ 311 ] ; xx [ 287 ] = - xx [
278 ] ; pm_math_cross3 ( xx + 271 , xx + 285 , xx + 288 ) ; xx [ 279 ] =
motionData [ 308 ] * motionData [ 311 ] ; xx [ 285 ] = xx [ 5 ] + ( xx [ 288
] - xx [ 277 ] * motionData [ 308 ] ) * xx [ 4 ] ; xx [ 286 ] = xx [ 4 ] * (
xx [ 289 ] - xx [ 279 ] ) - xx [ 82 ] ; xx [ 287 ] = xx [ 4 ] * ( xx [ 290 ]
+ xx [ 278 ] * motionData [ 308 ] ) ; pm_math_cross3 ( xx + 285 , xx + 24 ,
xx + 288 ) ; pm_math_quatXform ( xx + 281 , xx + 288 , xx + 285 ) ; xx [ 278
] = - ( xx [ 82 ] * motionData [ 314 ] ) ; xx [ 288 ] = xx [ 278 ] ; xx [ 289
] = - motionData [ 314 ] ; xx [ 290 ] = motionData [ 313 ] + xx [ 82 ] *
motionData [ 312 ] ; pm_math_quatXform ( xx + 71 , xx + 288 , xx + 291 ) ; xx
[ 288 ] = xx [ 291 ] + xx [ 102 ] ; xx [ 289 ] = xx [ 292 ] + xx [ 103 ] ; xx
[ 290 ] = xx [ 293 ] + xx [ 104 ] ; pm_math_quatXform ( xx + 61 , xx + 288 ,
xx + 291 ) ; xx [ 280 ] = motionData [ 309 ] - xx [ 82 ] * motionData [ 310 ]
; xx [ 288 ] = - motionData [ 311 ] ; xx [ 289 ] = xx [ 277 ] ; xx [ 290 ] =
xx [ 280 ] ; pm_math_cross3 ( xx + 271 , xx + 288 , xx + 294 ) ; xx [ 271 ] =
xx [ 82 ] + ( xx [ 279 ] + xx [ 294 ] ) * xx [ 4 ] ; xx [ 272 ] = xx [ 5 ] +
xx [ 4 ] * ( xx [ 295 ] - xx [ 82 ] * xx [ 279 ] ) ; xx [ 273 ] = xx [ 4 ] *
( xx [ 296 ] - xx [ 280 ] * motionData [ 308 ] ) ; pm_math_cross3 ( xx + 271
, xx + 24 , xx + 288 ) ; pm_math_quatXform ( xx + 281 , xx + 288 , xx + 271 )
; xx [ 288 ] = motionData [ 314 ] ; xx [ 289 ] = xx [ 278 ] ; xx [ 290 ] = xx
[ 82 ] * motionData [ 313 ] - motionData [ 312 ] ; pm_math_quatXform ( xx +
71 , xx + 288 , xx + 277 ) ; xx [ 288 ] = xx [ 277 ] + xx [ 90 ] ; xx [ 289 ]
= xx [ 278 ] + xx [ 91 ] ; xx [ 290 ] = xx [ 279 ] + xx [ 92 ] ;
pm_math_quatXform ( xx + 61 , xx + 288 , xx + 277 ) ; xx [ 288 ] = xx [ 4 ] *
( motionData [ 309 ] * motionData [ 311 ] - motionData [ 308 ] * motionData [
310 ] ) ; xx [ 289 ] = ( motionData [ 308 ] * motionData [ 309 ] + motionData
[ 310 ] * motionData [ 311 ] ) * xx [ 4 ] ; xx [ 290 ] = xx [ 5 ] - (
motionData [ 309 ] * motionData [ 309 ] + motionData [ 310 ] * motionData [
310 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 288 , xx + 24 , xx + 294 ) ;
pm_math_quatXform ( xx + 281 , xx + 294 , xx + 288 ) ; xx [ 280 ] = xx [ 69 ]
* motionData [ 312 ] ; xx [ 281 ] = xx [ 69 ] * motionData [ 313 ] ; xx [ 282
] = xx [ 65 ] * motionData [ 312 ] + xx [ 67 ] * motionData [ 313 ] ; xx [
294 ] = xx [ 280 ] ; xx [ 295 ] = xx [ 281 ] ; xx [ 296 ] = - xx [ 282 ] ;
pm_math_cross3 ( xx + 83 , xx + 294 , xx + 297 ) ; xx [ 294 ] = xx [ 4 ] * (
xx [ 297 ] + xx [ 280 ] * xx [ 57 ] ) + xx [ 118 ] - motionData [ 313 ] - xx
[ 112 ] ; xx [ 295 ] = motionData [ 312 ] + xx [ 4 ] * ( xx [ 298 ] + xx [
281 ] * xx [ 57 ] ) + xx [ 111 ] + xx [ 86 ] ; xx [ 296 ] = ( xx [ 299 ] - xx
[ 57 ] * xx [ 282 ] ) * xx [ 4 ] + xx [ 113 ] ; pm_math_quatXform ( xx + 61 ,
xx + 294 , xx + 280 ) ; xx [ 294 ] = motionData [ 301 ] ; xx [ 295 ] =
motionData [ 302 ] ; xx [ 296 ] = motionData [ 303 ] ; xx [ 297 ] =
motionData [ 304 ] ; pm_math_quatCompose ( xx + 129 , xx + 294 , xx + 298 ) ;
xx [ 283 ] = motionData [ 303 ] * motionData [ 303 ] ; xx [ 284 ] =
motionData [ 304 ] * motionData [ 304 ] ; xx [ 294 ] = motionData [ 302 ] *
motionData [ 303 ] ; xx [ 295 ] = motionData [ 301 ] * motionData [ 304 ] ;
xx [ 296 ] = motionData [ 301 ] * motionData [ 303 ] ; xx [ 297 ] =
motionData [ 302 ] * motionData [ 304 ] ; xx [ 302 ] = xx [ 5 ] - ( xx [ 283
] + xx [ 284 ] ) * xx [ 4 ] ; xx [ 303 ] = xx [ 4 ] * ( xx [ 294 ] - xx [ 295
] ) ; xx [ 304 ] = ( xx [ 296 ] + xx [ 297 ] ) * xx [ 4 ] ; pm_math_cross3 (
xx + 302 , xx + 24 , xx + 305 ) ; pm_math_quatXform ( xx + 298 , xx + 305 ,
xx + 302 ) ; xx [ 305 ] = xx [ 117 ] * motionData [ 306 ] ; xx [ 306 ] = xx [
124 ] * motionData [ 307 ] ; xx [ 307 ] = xx [ 305 ] + xx [ 306 ] ; xx [ 308
] = xx [ 70 ] * motionData [ 306 ] ; xx [ 309 ] = xx [ 70 ] * motionData [
307 ] ; xx [ 310 ] = - xx [ 307 ] ; xx [ 311 ] = - xx [ 308 ] ; xx [ 312 ] =
- xx [ 309 ] ; pm_math_cross3 ( xx + 142 , xx + 310 , xx + 313 ) ; xx [ 310 ]
= xx [ 4 ] * ( xx [ 313 ] - xx [ 307 ] * xx [ 68 ] ) + xx [ 156 ] ; xx [ 311
] = xx [ 4 ] * ( xx [ 314 ] - xx [ 308 ] * xx [ 68 ] ) + xx [ 150 ] -
motionData [ 307 ] - xx [ 19 ] ; xx [ 312 ] = motionData [ 306 ] + xx [ 4 ] *
( xx [ 315 ] - xx [ 309 ] * xx [ 68 ] ) + xx [ 154 ] - xx [ 8 ] ;
pm_math_quatXform ( xx + 119 , xx + 310 , xx + 307 ) ; xx [ 310 ] =
motionData [ 302 ] * motionData [ 302 ] ; xx [ 311 ] = motionData [ 303 ] *
motionData [ 304 ] ; xx [ 312 ] = motionData [ 301 ] * motionData [ 302 ] ;
xx [ 313 ] = ( xx [ 295 ] + xx [ 294 ] ) * xx [ 4 ] ; xx [ 314 ] = xx [ 5 ] -
( xx [ 284 ] + xx [ 310 ] ) * xx [ 4 ] ; xx [ 315 ] = xx [ 4 ] * ( xx [ 311 ]
- xx [ 312 ] ) ; pm_math_cross3 ( xx + 313 , xx + 24 , xx + 316 ) ;
pm_math_quatXform ( xx + 298 , xx + 316 , xx + 313 ) ; xx [ 284 ] = xx [ 117
] * motionData [ 305 ] ; xx [ 294 ] = xx [ 70 ] * motionData [ 305 ] ; xx [
295 ] = xx [ 294 ] - xx [ 306 ] ; xx [ 306 ] = xx [ 117 ] * motionData [ 307
] ; xx [ 316 ] = xx [ 284 ] ; xx [ 317 ] = xx [ 295 ] ; xx [ 318 ] = xx [ 306
] ; pm_math_cross3 ( xx + 142 , xx + 316 , xx + 319 ) ; xx [ 316 ] =
motionData [ 307 ] + ( xx [ 284 ] * xx [ 68 ] + xx [ 319 ] ) * xx [ 4 ] + xx
[ 162 ] + xx [ 19 ] ; xx [ 317 ] = ( xx [ 68 ] * xx [ 295 ] + xx [ 320 ] ) *
xx [ 4 ] + xx [ 155 ] ; xx [ 318 ] = ( xx [ 306 ] * xx [ 68 ] + xx [ 321 ] )
* xx [ 4 ] + xx [ 161 ] - motionData [ 305 ] - xx [ 6 ] ; pm_math_quatXform (
xx + 119 , xx + 316 , xx + 319 ) ; xx [ 316 ] = xx [ 4 ] * ( xx [ 297 ] - xx
[ 296 ] ) ; xx [ 317 ] = ( xx [ 312 ] + xx [ 311 ] ) * xx [ 4 ] ; xx [ 318 ]
= xx [ 5 ] - ( xx [ 310 ] + xx [ 283 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
316 , xx + 24 , xx + 295 ) ; pm_math_quatXform ( xx + 298 , xx + 295 , xx +
310 ) ; xx [ 283 ] = xx [ 124 ] * motionData [ 305 ] ; xx [ 284 ] = xx [ 124
] * motionData [ 306 ] ; xx [ 295 ] = xx [ 294 ] - xx [ 305 ] ; xx [ 296 ] =
xx [ 283 ] ; xx [ 297 ] = xx [ 284 ] ; xx [ 298 ] = xx [ 295 ] ;
pm_math_cross3 ( xx + 142 , xx + 296 , xx + 299 ) ; xx [ 296 ] = ( xx [ 283 ]
* xx [ 68 ] + xx [ 299 ] ) * xx [ 4 ] + xx [ 133 ] - motionData [ 306 ] + xx
[ 8 ] ; xx [ 297 ] = motionData [ 305 ] + ( xx [ 284 ] * xx [ 68 ] + xx [ 300
] ) * xx [ 4 ] + xx [ 66 ] + xx [ 6 ] ; xx [ 298 ] = ( xx [ 68 ] * xx [ 295 ]
+ xx [ 301 ] ) * xx [ 4 ] + xx [ 127 ] ; pm_math_quatXform ( xx + 119 , xx +
296 , xx + 299 ) ; xx [ 294 ] = motionData [ 56 ] ; xx [ 295 ] = motionData [
57 ] ; xx [ 296 ] = motionData [ 58 ] ; xx [ 297 ] = motionData [ 59 ] ;
pm_math_quatCompose ( xx + 169 , xx + 294 , xx + 322 ) ; xx [ 294 ] = xx [ 4
] * ( motionData [ 57 ] * motionData [ 59 ] - motionData [ 56 ] * motionData
[ 58 ] ) ; xx [ 295 ] = ( motionData [ 56 ] * motionData [ 57 ] + motionData
[ 58 ] * motionData [ 59 ] ) * xx [ 4 ] ; xx [ 296 ] = xx [ 5 ] - (
motionData [ 57 ] * motionData [ 57 ] + motionData [ 58 ] * motionData [ 58 ]
) * xx [ 4 ] ; pm_math_cross3 ( xx + 294 , xx + 24 , xx + 316 ) ;
pm_math_quatXform ( xx + 322 , xx + 316 , xx + 294 ) ; xx [ 283 ] = xx [ 126
] * motionData [ 61 ] ; xx [ 284 ] = xx [ 126 ] * motionData [ 60 ] ; xx [
297 ] = xx [ 4 ] * ( xx [ 283 ] * xx [ 126 ] - xx [ 125 ] * xx [ 284 ] ) -
motionData [ 61 ] + xx [ 148 ] ; xx [ 298 ] = motionData [ 60 ] - ( ( xx [
125 ] * xx [ 283 ] + xx [ 284 ] * xx [ 126 ] ) * xx [ 4 ] - xx [ 160 ] ) - xx
[ 137 ] ; xx [ 283 ] = xx [ 298 ] * motionData [ 220 ] ; xx [ 284 ] = xx [
297 ] * motionData [ 220 ] ; xx [ 305 ] = xx [ 298 ] * motionData [ 218 ] -
xx [ 297 ] * motionData [ 219 ] ; xx [ 316 ] = - xx [ 283 ] ; xx [ 317 ] = xx
[ 284 ] ; xx [ 318 ] = xx [ 305 ] ; pm_math_cross3 ( xx + 173 , xx + 316 , xx
+ 322 ) ; xx [ 325 ] = motionData [ 224 ] ; xx [ 326 ] = motionData [ 225 ] ;
xx [ 327 ] = motionData [ 226 ] ; xx [ 328 ] = motionData [ 227 ] ; xx [ 306
] = 0.6123724356957949 ; xx [ 316 ] = xx [ 2 ] * state [ 34 ] ; xx [ 317 ] =
sin ( xx [ 316 ] ) ; xx [ 318 ] = xx [ 306 ] * xx [ 317 ] ; xx [ 329 ] = cos
( xx [ 316 ] ) ; xx [ 316 ] = xx [ 306 ] * xx [ 329 ] ; xx [ 330 ] = xx [ 318
] - xx [ 316 ] ; xx [ 331 ] = 0.3535533905932732 ; xx [ 332 ] = xx [ 331 ] *
xx [ 329 ] ; xx [ 329 ] = xx [ 331 ] * xx [ 317 ] ; xx [ 317 ] = xx [ 332 ] +
xx [ 329 ] ; xx [ 333 ] = - xx [ 317 ] ; xx [ 334 ] = xx [ 329 ] - xx [ 332 ]
; xx [ 329 ] = xx [ 318 ] + xx [ 316 ] ; xx [ 316 ] = - xx [ 329 ] ; xx [ 335
] = xx [ 330 ] ; xx [ 336 ] = xx [ 333 ] ; xx [ 337 ] = xx [ 334 ] ; xx [ 338
] = xx [ 316 ] ; pm_math_quatCompose ( xx + 325 , xx + 335 , xx + 339 ) ; xx
[ 318 ] = xx [ 6 ] * xx [ 342 ] ; xx [ 332 ] = xx [ 8 ] * xx [ 341 ] - xx [ 6
] * xx [ 340 ] ; xx [ 335 ] = xx [ 318 ] ; xx [ 336 ] = - ( xx [ 8 ] * xx [
342 ] ) ; xx [ 337 ] = xx [ 332 ] ; pm_math_cross3 ( xx + 340 , xx + 335 , xx
+ 343 ) ; xx [ 335 ] = xx [ 333 ] ; xx [ 336 ] = xx [ 334 ] ; xx [ 337 ] = xx
[ 316 ] ; xx [ 316 ] = 1.121202762681406e-11 ; xx [ 333 ] = xx [ 329 ] * xx [
316 ] ; xx [ 338 ] = 6.145027516349377e-13 ; xx [ 340 ] = xx [ 329 ] * xx [
338 ] ; xx [ 329 ] = xx [ 338 ] * xx [ 334 ] - xx [ 317 ] * xx [ 316 ] ; xx [
346 ] = xx [ 333 ] ; xx [ 347 ] = xx [ 340 ] ; xx [ 348 ] = xx [ 329 ] ;
pm_math_cross3 ( xx + 335 , xx + 346 , xx + 349 ) ; xx [ 334 ] = xx [ 4 ] * (
xx [ 349 ] + xx [ 333 ] * xx [ 330 ] ) - xx [ 338 ] ; xx [ 335 ] = xx [ 316 ]
+ ( xx [ 340 ] * xx [ 330 ] + xx [ 350 ] ) * xx [ 4 ] ; xx [ 336 ] = ( xx [
330 ] * xx [ 329 ] + xx [ 351 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 325 ,
xx + 334 , xx + 346 ) ; xx [ 316 ] = 0.04233709306330295 ; xx [ 317 ] = xx [
2 ] * state [ 53 ] ; xx [ 329 ] = cos ( xx [ 317 ] ) ; xx [ 330 ] =
0.04233598682685397 ; xx [ 333 ] = sin ( xx [ 317 ] ) ; xx [ 317 ] = xx [ 316
] * xx [ 329 ] + xx [ 330 ] * xx [ 333 ] ; xx [ 334 ] = 0.7058357201813958 ;
xx [ 335 ] = 0.7058407546227096 ; xx [ 336 ] = xx [ 334 ] * xx [ 333 ] - xx [
335 ] * xx [ 329 ] ; xx [ 337 ] = xx [ 334 ] * xx [ 329 ] + xx [ 335 ] * xx [
333 ] ; xx [ 338 ] = xx [ 316 ] * xx [ 333 ] - xx [ 330 ] * xx [ 329 ] ; xx [
349 ] = xx [ 317 ] ; xx [ 350 ] = xx [ 336 ] ; xx [ 351 ] = xx [ 337 ] ; xx [
352 ] = xx [ 338 ] ; xx [ 353 ] = motionData [ 294 ] ; xx [ 354 ] =
motionData [ 295 ] ; xx [ 355 ] = motionData [ 296 ] ; xx [ 356 ] =
motionData [ 297 ] ; pm_math_quatCompose ( xx + 349 , xx + 353 , xx + 357 ) ;
xx [ 349 ] = xx [ 4 ] * ( motionData [ 295 ] * motionData [ 297 ] -
motionData [ 294 ] * motionData [ 296 ] ) ; xx [ 350 ] = ( motionData [ 294 ]
* motionData [ 295 ] + motionData [ 296 ] * motionData [ 297 ] ) * xx [ 4 ] ;
xx [ 351 ] = xx [ 5 ] - ( motionData [ 295 ] * motionData [ 295 ] +
motionData [ 296 ] * motionData [ 296 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
349 , xx + 208 , xx + 352 ) ; pm_math_quatXform ( xx + 357 , xx + 352 , xx +
349 ) ; xx [ 329 ] = xx [ 338 ] * motionData [ 298 ] ; xx [ 333 ] = xx [ 338
] * motionData [ 299 ] ; xx [ 340 ] = xx [ 336 ] * motionData [ 298 ] + xx [
337 ] * motionData [ 299 ] ; xx [ 352 ] = - xx [ 329 ] ; xx [ 353 ] = - xx [
333 ] ; xx [ 354 ] = xx [ 340 ] ; pm_math_cross3 ( xx + 336 , xx + 352 , xx +
355 ) ; xx [ 341 ] = 0.02520954632904374 ; xx [ 352 ] = xx [ 336 ] * xx [ 341
] ; xx [ 353 ] = xx [ 338 ] * xx [ 341 ] ; xx [ 354 ] = xx [ 2 ] * state [ 55
] ; xx [ 358 ] = cos ( xx [ 354 ] ) ; xx [ 359 ] = sin ( xx [ 354 ] ) ; xx [
360 ] = xx [ 358 ] * motionData [ 106 ] - xx [ 359 ] * motionData [ 107 ] ;
xx [ 361 ] = - ( xx [ 358 ] * motionData [ 105 ] + xx [ 359 ] * motionData [
108 ] ) ; xx [ 362 ] = xx [ 359 ] * motionData [ 105 ] - xx [ 358 ] *
motionData [ 108 ] ; xx [ 363 ] = xx [ 359 ] * motionData [ 106 ] + xx [ 358
] * motionData [ 107 ] ; xx [ 364 ] = motionData [ 119 ] ; xx [ 365 ] =
motionData [ 120 ] ; xx [ 366 ] = motionData [ 121 ] ; xx [ 367 ] =
motionData [ 122 ] ; pm_math_quatCompose ( xx + 360 , xx + 364 , xx + 368 ) ;
xx [ 360 ] = xx [ 4 ] * ( motionData [ 120 ] * motionData [ 122 ] -
motionData [ 119 ] * motionData [ 121 ] ) ; xx [ 361 ] = ( motionData [ 119 ]
* motionData [ 120 ] + motionData [ 121 ] * motionData [ 122 ] ) * xx [ 4 ] ;
xx [ 362 ] = xx [ 5 ] - ( motionData [ 120 ] * motionData [ 120 ] +
motionData [ 121 ] * motionData [ 121 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
360 , xx + 208 , xx + 363 ) ; pm_math_quatXform ( xx + 368 , xx + 363 , xx +
360 ) ; xx [ 354 ] = xx [ 359 ] * motionData [ 124 ] - xx [ 358 ] *
motionData [ 123 ] ; xx [ 363 ] = 9.27756931389703e-12 ; xx [ 364 ] =
5.443558296964576e-12 ; xx [ 365 ] = xx [ 363 ] * xx [ 358 ] + xx [ 364 ] *
xx [ 359 ] ; xx [ 366 ] = xx [ 4 ] * xx [ 359 ] * xx [ 354 ] - ( motionData [
124 ] + xx [ 4 ] * xx [ 365 ] * xx [ 359 ] ) + xx [ 364 ] ; xx [ 367 ] =
motionData [ 106 ] ; xx [ 368 ] = motionData [ 107 ] ; xx [ 369 ] =
motionData [ 108 ] ; xx [ 359 ] = motionData [ 123 ] + xx [ 4 ] * xx [ 358 ]
* xx [ 354 ] - xx [ 4 ] * xx [ 365 ] * xx [ 358 ] + xx [ 363 ] ; xx [ 354 ] =
xx [ 359 ] * motionData [ 108 ] ; xx [ 358 ] = xx [ 366 ] * motionData [ 108
] ; xx [ 363 ] = xx [ 359 ] * motionData [ 106 ] - xx [ 366 ] * motionData [
107 ] ; xx [ 370 ] = - xx [ 354 ] ; xx [ 371 ] = xx [ 358 ] ; xx [ 372 ] = xx
[ 363 ] ; pm_math_cross3 ( xx + 367 , xx + 370 , xx + 373 ) ; xx [ 367 ] =
motionData [ 273 ] ; xx [ 368 ] = motionData [ 274 ] ; xx [ 369 ] =
motionData [ 275 ] ; xx [ 370 ] = motionData [ 276 ] ; xx [ 364 ] = xx [ 55 ]
* state [ 60 ] - xx [ 56 ] * state [ 57 ] ; xx [ 365 ] = xx [ 55 ] * state [
59 ] + xx [ 56 ] * state [ 58 ] ; xx [ 371 ] = - xx [ 365 ] ; xx [ 372 ] = xx
[ 56 ] * state [ 59 ] - xx [ 55 ] * state [ 58 ] ; xx [ 376 ] = - xx [ 372 ]
; xx [ 377 ] = xx [ 55 ] * state [ 57 ] + xx [ 56 ] * state [ 60 ] ; xx [ 378
] = - xx [ 377 ] ; xx [ 379 ] = xx [ 364 ] ; xx [ 380 ] = xx [ 371 ] ; xx [
381 ] = xx [ 376 ] ; xx [ 382 ] = xx [ 378 ] ; pm_math_quatCompose ( xx + 367
, xx + 379 , xx + 383 ) ; pm_math_quatXform ( xx + 383 , xx + 247 , xx + 387
) ; pm_math_quatXform ( xx + 379 , xx + 99 , xx + 390 ) ; pm_math_quatXform (
xx + 367 , xx + 390 , xx + 393 ) ; pm_math_quatXform ( xx + 383 , xx + 253 ,
xx + 390 ) ; pm_math_quatXform ( xx + 379 , xx + 105 , xx + 396 ) ;
pm_math_quatXform ( xx + 367 , xx + 396 , xx + 379 ) ; xx [ 382 ] = xx [ 191
] * xx [ 386 ] ; xx [ 396 ] = xx [ 191 ] * xx [ 384 ] + xx [ 192 ] * xx [ 385
] ; xx [ 397 ] = - xx [ 382 ] ; xx [ 398 ] = - ( xx [ 192 ] * xx [ 386 ] ) ;
xx [ 399 ] = xx [ 396 ] ; pm_math_cross3 ( xx + 384 , xx + 397 , xx + 400 ) ;
xx [ 397 ] = xx [ 371 ] ; xx [ 398 ] = xx [ 376 ] ; xx [ 399 ] = xx [ 378 ] ;
xx [ 371 ] = xx [ 86 ] * xx [ 377 ] ; xx [ 376 ] = xx [ 112 ] * xx [ 377 ] ;
xx [ 377 ] = xx [ 86 ] * xx [ 365 ] + xx [ 372 ] * xx [ 112 ] ; xx [ 403 ] =
xx [ 371 ] ; xx [ 404 ] = xx [ 376 ] ; xx [ 405 ] = - xx [ 377 ] ;
pm_math_cross3 ( xx + 397 , xx + 403 , xx + 406 ) ; xx [ 397 ] = xx [ 4 ] * (
xx [ 406 ] + xx [ 371 ] * xx [ 364 ] ) - xx [ 112 ] ; xx [ 398 ] = xx [ 86 ]
+ ( xx [ 376 ] * xx [ 364 ] + xx [ 407 ] ) * xx [ 4 ] ; xx [ 399 ] = ( xx [
408 ] - xx [ 377 ] * xx [ 364 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 367 ,
xx + 397 , xx + 376 ) ; xx [ 367 ] = motionData [ 378 ] ; xx [ 368 ] =
motionData [ 379 ] ; xx [ 369 ] = motionData [ 380 ] ; xx [ 370 ] =
motionData [ 381 ] ; pm_math_quatCompose ( xx + 12 , xx + 367 , xx + 403 ) ;
xx [ 367 ] = xx [ 4 ] * ( motionData [ 378 ] * motionData [ 380 ] -
motionData [ 379 ] * motionData [ 381 ] ) ; xx [ 368 ] = - ( ( motionData [
378 ] * motionData [ 379 ] + motionData [ 380 ] * motionData [ 381 ] ) * xx [
4 ] ) ; xx [ 369 ] = ( motionData [ 379 ] * motionData [ 379 ] + motionData [
380 ] * motionData [ 380 ] ) * xx [ 4 ] - xx [ 5 ] ; pm_math_cross3 ( xx +
367 , xx + 24 , xx + 370 ) ; pm_math_quatXform ( xx + 403 , xx + 370 , xx +
367 ) ; xx [ 364 ] = xx [ 7 ] * motionData [ 382 ] ; xx [ 365 ] = xx [ 7 ] *
motionData [ 383 ] ; xx [ 370 ] = xx [ 11 ] * motionData [ 383 ] - xx [ 9 ] *
motionData [ 382 ] ; xx [ 397 ] = - xx [ 364 ] ; xx [ 398 ] = - xx [ 365 ] ;
xx [ 399 ] = - xx [ 370 ] ; pm_math_cross3 ( xx + 20 , xx + 397 , xx + 403 )
; xx [ 406 ] = motionData [ 371 ] ; xx [ 407 ] = motionData [ 372 ] ; xx [
408 ] = motionData [ 373 ] ; xx [ 409 ] = motionData [ 374 ] ;
pm_math_quatCompose ( xx + 37 , xx + 406 , xx + 410 ) ; xx [ 397 ] = xx [ 4 ]
* ( motionData [ 372 ] * motionData [ 374 ] - motionData [ 371 ] * motionData
[ 373 ] ) ; xx [ 398 ] = ( motionData [ 371 ] * motionData [ 372 ] +
motionData [ 373 ] * motionData [ 374 ] ) * xx [ 4 ] ; xx [ 399 ] = xx [ 5 ]
- ( motionData [ 372 ] * motionData [ 372 ] + motionData [ 373 ] * motionData
[ 373 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 397 , xx + 24 , xx + 406 ) ;
pm_math_quatXform ( xx + 410 , xx + 406 , xx + 397 ) ; xx [ 371 ] = xx [ 36 ]
* motionData [ 376 ] - xx [ 35 ] * motionData [ 375 ] ; xx [ 372 ] = xx [ 4 ]
* xx [ 36 ] * xx [ 371 ] - ( motionData [ 376 ] + xx [ 47 ] ) - xx [ 45 ] ;
xx [ 384 ] = motionData [ 375 ] + xx [ 4 ] * xx [ 35 ] * xx [ 371 ] - xx [ 52
] + xx [ 44 ] ; xx [ 371 ] = xx [ 384 ] * motionData [ 17 ] ; xx [ 385 ] = xx
[ 372 ] * motionData [ 17 ] ; xx [ 406 ] = xx [ 384 ] * motionData [ 15 ] -
xx [ 372 ] * motionData [ 16 ] ; xx [ 407 ] = - xx [ 371 ] ; xx [ 408 ] = xx
[ 385 ] ; xx [ 409 ] = xx [ 406 ] ; pm_math_cross3 ( xx + 49 , xx + 407 , xx
+ 410 ) ; xx [ 413 ] = motionData [ 364 ] ; xx [ 414 ] = motionData [ 365 ] ;
xx [ 415 ] = motionData [ 366 ] ; xx [ 416 ] = motionData [ 367 ] ;
pm_math_quatCompose ( xx + 75 , xx + 413 , xx + 417 ) ; xx [ 407 ] =
motionData [ 365 ] ; xx [ 408 ] = motionData [ 366 ] ; xx [ 409 ] =
motionData [ 367 ] ; xx [ 413 ] = xx [ 82 ] * motionData [ 367 ] ; xx [ 414 ]
= xx [ 82 ] * motionData [ 365 ] + motionData [ 366 ] ; xx [ 421 ] = xx [ 413
] ; xx [ 422 ] = motionData [ 367 ] ; xx [ 423 ] = - xx [ 414 ] ;
pm_math_cross3 ( xx + 407 , xx + 421 , xx + 424 ) ; xx [ 415 ] = motionData [
364 ] * motionData [ 367 ] ; xx [ 421 ] = xx [ 5 ] + ( xx [ 424 ] - xx [ 413
] * motionData [ 364 ] ) * xx [ 4 ] ; xx [ 422 ] = xx [ 4 ] * ( xx [ 425 ] -
xx [ 415 ] ) - xx [ 82 ] ; xx [ 423 ] = xx [ 4 ] * ( xx [ 426 ] + xx [ 414 ]
* motionData [ 364 ] ) ; pm_math_cross3 ( xx + 421 , xx + 24 , xx + 424 ) ;
pm_math_quatXform ( xx + 417 , xx + 424 , xx + 421 ) ; xx [ 414 ] = - ( xx [
82 ] * motionData [ 370 ] ) ; xx [ 424 ] = xx [ 414 ] ; xx [ 425 ] = -
motionData [ 370 ] ; xx [ 426 ] = motionData [ 369 ] + xx [ 82 ] * motionData
[ 368 ] ; pm_math_quatXform ( xx + 71 , xx + 424 , xx + 427 ) ; xx [ 424 ] =
xx [ 427 ] + xx [ 102 ] ; xx [ 425 ] = xx [ 428 ] + xx [ 103 ] ; xx [ 426 ] =
xx [ 429 ] + xx [ 104 ] ; pm_math_quatXform ( xx + 61 , xx + 424 , xx + 427 )
; xx [ 416 ] = motionData [ 365 ] - xx [ 82 ] * motionData [ 366 ] ; xx [ 424
] = - motionData [ 367 ] ; xx [ 425 ] = xx [ 413 ] ; xx [ 426 ] = xx [ 416 ]
; pm_math_cross3 ( xx + 407 , xx + 424 , xx + 430 ) ; xx [ 407 ] = xx [ 82 ]
+ ( xx [ 415 ] + xx [ 430 ] ) * xx [ 4 ] ; xx [ 408 ] = xx [ 5 ] + xx [ 4 ] *
( xx [ 431 ] - xx [ 82 ] * xx [ 415 ] ) ; xx [ 409 ] = xx [ 4 ] * ( xx [ 432
] - xx [ 416 ] * motionData [ 364 ] ) ; pm_math_cross3 ( xx + 407 , xx + 24 ,
xx + 424 ) ; pm_math_quatXform ( xx + 417 , xx + 424 , xx + 407 ) ; xx [ 424
] = motionData [ 370 ] ; xx [ 425 ] = xx [ 414 ] ; xx [ 426 ] = xx [ 82 ] *
motionData [ 369 ] - motionData [ 368 ] ; pm_math_quatXform ( xx + 71 , xx +
424 , xx + 413 ) ; xx [ 424 ] = xx [ 413 ] + xx [ 90 ] ; xx [ 425 ] = xx [
414 ] + xx [ 91 ] ; xx [ 426 ] = xx [ 415 ] + xx [ 92 ] ; pm_math_quatXform (
xx + 61 , xx + 424 , xx + 413 ) ; xx [ 424 ] = xx [ 4 ] * ( motionData [ 365
] * motionData [ 367 ] - motionData [ 364 ] * motionData [ 366 ] ) ; xx [ 425
] = ( motionData [ 364 ] * motionData [ 365 ] + motionData [ 366 ] *
motionData [ 367 ] ) * xx [ 4 ] ; xx [ 426 ] = xx [ 5 ] - ( motionData [ 365
] * motionData [ 365 ] + motionData [ 366 ] * motionData [ 366 ] ) * xx [ 4 ]
; pm_math_cross3 ( xx + 424 , xx + 24 , xx + 430 ) ; pm_math_quatXform ( xx +
417 , xx + 430 , xx + 424 ) ; xx [ 416 ] = xx [ 69 ] * motionData [ 368 ] ;
xx [ 417 ] = xx [ 69 ] * motionData [ 369 ] ; xx [ 418 ] = xx [ 65 ] *
motionData [ 368 ] + xx [ 67 ] * motionData [ 369 ] ; xx [ 430 ] = xx [ 416 ]
; xx [ 431 ] = xx [ 417 ] ; xx [ 432 ] = - xx [ 418 ] ; pm_math_cross3 ( xx +
83 , xx + 430 , xx + 433 ) ; xx [ 430 ] = xx [ 4 ] * ( xx [ 433 ] + xx [ 416
] * xx [ 57 ] ) + xx [ 118 ] - motionData [ 369 ] - xx [ 112 ] ; xx [ 431 ] =
motionData [ 368 ] + xx [ 4 ] * ( xx [ 434 ] + xx [ 417 ] * xx [ 57 ] ) + xx
[ 111 ] + xx [ 86 ] ; xx [ 432 ] = ( xx [ 435 ] - xx [ 57 ] * xx [ 418 ] ) *
xx [ 4 ] + xx [ 113 ] ; pm_math_quatXform ( xx + 61 , xx + 430 , xx + 416 ) ;
xx [ 430 ] = motionData [ 357 ] ; xx [ 431 ] = motionData [ 358 ] ; xx [ 432
] = motionData [ 359 ] ; xx [ 433 ] = motionData [ 360 ] ;
pm_math_quatCompose ( xx + 129 , xx + 430 , xx + 434 ) ; xx [ 419 ] =
motionData [ 359 ] * motionData [ 359 ] ; xx [ 420 ] = motionData [ 360 ] *
motionData [ 360 ] ; xx [ 430 ] = motionData [ 358 ] * motionData [ 359 ] ;
xx [ 431 ] = motionData [ 357 ] * motionData [ 360 ] ; xx [ 432 ] =
motionData [ 357 ] * motionData [ 359 ] ; xx [ 433 ] = motionData [ 358 ] *
motionData [ 360 ] ; xx [ 438 ] = xx [ 5 ] - ( xx [ 419 ] + xx [ 420 ] ) * xx
[ 4 ] ; xx [ 439 ] = xx [ 4 ] * ( xx [ 430 ] - xx [ 431 ] ) ; xx [ 440 ] = (
xx [ 432 ] + xx [ 433 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 438 , xx + 24 ,
xx + 441 ) ; pm_math_quatXform ( xx + 434 , xx + 441 , xx + 438 ) ; xx [ 441
] = xx [ 117 ] * motionData [ 362 ] ; xx [ 442 ] = xx [ 124 ] * motionData [
363 ] ; xx [ 443 ] = xx [ 441 ] + xx [ 442 ] ; xx [ 444 ] = xx [ 70 ] *
motionData [ 362 ] ; xx [ 445 ] = xx [ 70 ] * motionData [ 363 ] ; xx [ 446 ]
= - xx [ 443 ] ; xx [ 447 ] = - xx [ 444 ] ; xx [ 448 ] = - xx [ 445 ] ;
pm_math_cross3 ( xx + 142 , xx + 446 , xx + 449 ) ; xx [ 446 ] = xx [ 4 ] * (
xx [ 449 ] - xx [ 443 ] * xx [ 68 ] ) + xx [ 156 ] ; xx [ 447 ] = xx [ 4 ] *
( xx [ 450 ] - xx [ 444 ] * xx [ 68 ] ) + xx [ 150 ] - motionData [ 363 ] -
xx [ 19 ] ; xx [ 448 ] = motionData [ 362 ] + xx [ 4 ] * ( xx [ 451 ] - xx [
445 ] * xx [ 68 ] ) + xx [ 154 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 119 ,
xx + 446 , xx + 443 ) ; xx [ 446 ] = motionData [ 358 ] * motionData [ 358 ]
; xx [ 447 ] = motionData [ 359 ] * motionData [ 360 ] ; xx [ 448 ] =
motionData [ 357 ] * motionData [ 358 ] ; xx [ 449 ] = ( xx [ 431 ] + xx [
430 ] ) * xx [ 4 ] ; xx [ 450 ] = xx [ 5 ] - ( xx [ 420 ] + xx [ 446 ] ) * xx
[ 4 ] ; xx [ 451 ] = xx [ 4 ] * ( xx [ 447 ] - xx [ 448 ] ) ; pm_math_cross3
( xx + 449 , xx + 24 , xx + 452 ) ; pm_math_quatXform ( xx + 434 , xx + 452 ,
xx + 449 ) ; xx [ 420 ] = xx [ 117 ] * motionData [ 361 ] ; xx [ 430 ] = xx [
70 ] * motionData [ 361 ] ; xx [ 431 ] = xx [ 430 ] - xx [ 442 ] ; xx [ 442 ]
= xx [ 117 ] * motionData [ 363 ] ; xx [ 452 ] = xx [ 420 ] ; xx [ 453 ] = xx
[ 431 ] ; xx [ 454 ] = xx [ 442 ] ; pm_math_cross3 ( xx + 142 , xx + 452 , xx
+ 455 ) ; xx [ 452 ] = motionData [ 363 ] + ( xx [ 420 ] * xx [ 68 ] + xx [
455 ] ) * xx [ 4 ] + xx [ 162 ] + xx [ 19 ] ; xx [ 453 ] = ( xx [ 68 ] * xx [
431 ] + xx [ 456 ] ) * xx [ 4 ] + xx [ 155 ] ; xx [ 454 ] = ( xx [ 442 ] * xx
[ 68 ] + xx [ 457 ] ) * xx [ 4 ] + xx [ 161 ] - motionData [ 361 ] - xx [ 6 ]
; pm_math_quatXform ( xx + 119 , xx + 452 , xx + 455 ) ; xx [ 452 ] = xx [ 4
] * ( xx [ 433 ] - xx [ 432 ] ) ; xx [ 453 ] = ( xx [ 448 ] + xx [ 447 ] ) *
xx [ 4 ] ; xx [ 454 ] = xx [ 5 ] - ( xx [ 446 ] + xx [ 419 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 452 , xx + 24 , xx + 431 ) ; pm_math_quatXform ( xx +
434 , xx + 431 , xx + 446 ) ; xx [ 419 ] = xx [ 124 ] * motionData [ 361 ] ;
xx [ 420 ] = xx [ 124 ] * motionData [ 362 ] ; xx [ 431 ] = xx [ 430 ] - xx [
441 ] ; xx [ 432 ] = xx [ 419 ] ; xx [ 433 ] = xx [ 420 ] ; xx [ 434 ] = xx [
431 ] ; pm_math_cross3 ( xx + 142 , xx + 432 , xx + 435 ) ; xx [ 432 ] = ( xx
[ 419 ] * xx [ 68 ] + xx [ 435 ] ) * xx [ 4 ] + xx [ 133 ] - motionData [ 362
] + xx [ 8 ] ; xx [ 433 ] = motionData [ 361 ] + ( xx [ 420 ] * xx [ 68 ] +
xx [ 436 ] ) * xx [ 4 ] + xx [ 66 ] + xx [ 6 ] ; xx [ 434 ] = ( xx [ 68 ] *
xx [ 431 ] + xx [ 437 ] ) * xx [ 4 ] + xx [ 127 ] ; pm_math_quatXform ( xx +
119 , xx + 432 , xx + 435 ) ; xx [ 430 ] = motionData [ 63 ] ; xx [ 431 ] =
motionData [ 64 ] ; xx [ 432 ] = motionData [ 65 ] ; xx [ 433 ] = motionData
[ 66 ] ; pm_math_quatCompose ( xx + 169 , xx + 430 , xx + 458 ) ; xx [ 430 ]
= xx [ 4 ] * ( motionData [ 64 ] * motionData [ 66 ] - motionData [ 63 ] *
motionData [ 65 ] ) ; xx [ 431 ] = ( motionData [ 63 ] * motionData [ 64 ] +
motionData [ 65 ] * motionData [ 66 ] ) * xx [ 4 ] ; xx [ 432 ] = xx [ 5 ] -
( motionData [ 64 ] * motionData [ 64 ] + motionData [ 65 ] * motionData [ 65
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 430 , xx + 24 , xx + 452 ) ;
pm_math_quatXform ( xx + 458 , xx + 452 , xx + 430 ) ; xx [ 419 ] = xx [ 126
] * motionData [ 68 ] ; xx [ 420 ] = xx [ 126 ] * motionData [ 67 ] ; xx [
433 ] = xx [ 4 ] * ( xx [ 419 ] * xx [ 126 ] - xx [ 125 ] * xx [ 420 ] ) -
motionData [ 68 ] + xx [ 148 ] ; xx [ 434 ] = motionData [ 67 ] - ( ( xx [
125 ] * xx [ 419 ] + xx [ 420 ] * xx [ 126 ] ) * xx [ 4 ] - xx [ 160 ] ) - xx
[ 137 ] ; xx [ 419 ] = xx [ 434 ] * motionData [ 220 ] ; xx [ 420 ] = xx [
433 ] * motionData [ 220 ] ; xx [ 441 ] = xx [ 434 ] * motionData [ 218 ] -
xx [ 433 ] * motionData [ 219 ] ; xx [ 452 ] = - xx [ 419 ] ; xx [ 453 ] = xx
[ 420 ] ; xx [ 454 ] = xx [ 441 ] ; pm_math_cross3 ( xx + 173 , xx + 452 , xx
+ 458 ) ; xx [ 442 ] = 0.3535533905932758 ; xx [ 452 ] = xx [ 2 ] * state [
36 ] ; xx [ 453 ] = cos ( xx [ 452 ] ) ; xx [ 454 ] = xx [ 442 ] * xx [ 453 ]
; xx [ 461 ] = sin ( xx [ 452 ] ) ; xx [ 452 ] = xx [ 442 ] * xx [ 461 ] ; xx
[ 462 ] = xx [ 454 ] + xx [ 452 ] ; xx [ 463 ] = 0.6123724356957934 ; xx [
464 ] = xx [ 463 ] * xx [ 461 ] ; xx [ 461 ] = xx [ 463 ] * xx [ 453 ] ; xx [
453 ] = xx [ 464 ] - xx [ 461 ] ; xx [ 465 ] = xx [ 461 ] + xx [ 464 ] ; xx [
461 ] = - xx [ 465 ] ; xx [ 464 ] = xx [ 452 ] - xx [ 454 ] ; xx [ 466 ] = -
xx [ 462 ] ; xx [ 467 ] = xx [ 453 ] ; xx [ 468 ] = xx [ 461 ] ; xx [ 469 ] =
xx [ 464 ] ; pm_math_quatCompose ( xx + 325 , xx + 466 , xx + 470 ) ; xx [
452 ] = xx [ 6 ] * xx [ 473 ] ; xx [ 454 ] = xx [ 6 ] * xx [ 471 ] - xx [ 8 ]
* xx [ 472 ] ; xx [ 466 ] = - xx [ 452 ] ; xx [ 467 ] = xx [ 8 ] * xx [ 473 ]
; xx [ 468 ] = xx [ 454 ] ; pm_math_cross3 ( xx + 471 , xx + 466 , xx + 474 )
; xx [ 466 ] = 3.80025733104361e-12 ; xx [ 467 ] = xx [ 453 ] ; xx [ 468 ] =
xx [ 461 ] ; xx [ 469 ] = xx [ 464 ] ; xx [ 461 ] = 3.881762117297072e-12 ;
xx [ 471 ] = xx [ 461 ] * xx [ 464 ] ; xx [ 472 ] = xx [ 466 ] * xx [ 464 ] ;
xx [ 464 ] = xx [ 461 ] * xx [ 453 ] + xx [ 465 ] * xx [ 466 ] ; xx [ 477 ] =
- xx [ 471 ] ; xx [ 478 ] = xx [ 472 ] ; xx [ 479 ] = xx [ 464 ] ;
pm_math_cross3 ( xx + 467 , xx + 477 , xx + 480 ) ; xx [ 467 ] = xx [ 466 ] +
xx [ 4 ] * ( xx [ 480 ] + xx [ 462 ] * xx [ 471 ] ) ; xx [ 468 ] = xx [ 461 ]
+ ( xx [ 481 ] - xx [ 462 ] * xx [ 472 ] ) * xx [ 4 ] ; xx [ 469 ] = ( xx [
482 ] - xx [ 462 ] * xx [ 464 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 325 ,
xx + 467 , xx + 464 ) ; xx [ 453 ] = 0.3162553791961485 ; xx [ 461 ] = xx [ 2
] * state [ 75 ] ; xx [ 462 ] = cos ( xx [ 461 ] ) ; xx [ 467 ] =
0.3162538200043588 ; xx [ 468 ] = sin ( xx [ 461 ] ) ; xx [ 461 ] = xx [ 453
] * xx [ 462 ] - xx [ 467 ] * xx [ 468 ] ; xx [ 469 ] = 0.6324445710612965 ;
xx [ 471 ] = 0.6324396579890005 ; xx [ 472 ] = xx [ 469 ] * xx [ 462 ] + xx [
471 ] * xx [ 468 ] ; xx [ 477 ] = xx [ 469 ] * xx [ 468 ] - xx [ 471 ] * xx [
462 ] ; xx [ 469 ] = xx [ 467 ] * xx [ 462 ] + xx [ 453 ] * xx [ 468 ] ; xx [
453 ] = - xx [ 469 ] ; xx [ 478 ] = xx [ 461 ] ; xx [ 479 ] = xx [ 472 ] ; xx
[ 480 ] = xx [ 477 ] ; xx [ 481 ] = xx [ 453 ] ; xx [ 482 ] = motionData [
350 ] ; xx [ 483 ] = motionData [ 351 ] ; xx [ 484 ] = motionData [ 352 ] ;
xx [ 485 ] = motionData [ 353 ] ; pm_math_quatCompose ( xx + 478 , xx + 482 ,
xx + 486 ) ; xx [ 478 ] = xx [ 4 ] * ( motionData [ 350 ] * motionData [ 352
] - motionData [ 351 ] * motionData [ 353 ] ) ; xx [ 479 ] = - ( ( motionData
[ 350 ] * motionData [ 351 ] + motionData [ 352 ] * motionData [ 353 ] ) * xx
[ 4 ] ) ; xx [ 480 ] = ( motionData [ 351 ] * motionData [ 351 ] + motionData
[ 352 ] * motionData [ 352 ] ) * xx [ 4 ] - xx [ 5 ] ; pm_math_cross3 ( xx +
478 , xx + 208 , xx + 481 ) ; pm_math_quatXform ( xx + 486 , xx + 481 , xx +
478 ) ; xx [ 481 ] = xx [ 472 ] ; xx [ 482 ] = xx [ 477 ] ; xx [ 483 ] = xx [
453 ] ; xx [ 453 ] = xx [ 469 ] * motionData [ 354 ] ; xx [ 462 ] = xx [ 469
] * motionData [ 355 ] ; xx [ 467 ] = xx [ 472 ] * motionData [ 354 ] + xx [
477 ] * motionData [ 355 ] ; xx [ 484 ] = - xx [ 453 ] ; xx [ 485 ] = - xx [
462 ] ; xx [ 486 ] = - xx [ 467 ] ; pm_math_cross3 ( xx + 481 , xx + 484 , xx
+ 487 ) ; xx [ 468 ] = xx [ 27 ] * xx [ 472 ] ; xx [ 471 ] = xx [ 27 ] * xx [
469 ] ; xx [ 481 ] = xx [ 2 ] * state [ 77 ] ; xx [ 482 ] = cos ( xx [ 481 ]
) ; xx [ 483 ] = sin ( xx [ 481 ] ) ; xx [ 490 ] = xx [ 482 ] * motionData [
148 ] - xx [ 483 ] * motionData [ 149 ] ; xx [ 491 ] = - ( xx [ 482 ] *
motionData [ 147 ] + xx [ 483 ] * motionData [ 150 ] ) ; xx [ 492 ] = xx [
483 ] * motionData [ 147 ] - xx [ 482 ] * motionData [ 150 ] ; xx [ 493 ] =
xx [ 483 ] * motionData [ 148 ] + xx [ 482 ] * motionData [ 149 ] ; xx [ 494
] = motionData [ 161 ] ; xx [ 495 ] = motionData [ 162 ] ; xx [ 496 ] =
motionData [ 163 ] ; xx [ 497 ] = motionData [ 164 ] ; pm_math_quatCompose (
xx + 490 , xx + 494 , xx + 498 ) ; xx [ 484 ] = xx [ 4 ] * ( motionData [ 162
] * motionData [ 164 ] - motionData [ 161 ] * motionData [ 163 ] ) ; xx [ 485
] = ( motionData [ 161 ] * motionData [ 162 ] + motionData [ 163 ] *
motionData [ 164 ] ) * xx [ 4 ] ; xx [ 486 ] = xx [ 5 ] - ( motionData [ 162
] * motionData [ 162 ] + motionData [ 163 ] * motionData [ 163 ] ) * xx [ 4 ]
; pm_math_cross3 ( xx + 484 , xx + 208 , xx + 490 ) ; pm_math_quatXform ( xx
+ 498 , xx + 490 , xx + 484 ) ; xx [ 481 ] = xx [ 483 ] * motionData [ 166 ]
- xx [ 482 ] * motionData [ 165 ] ; xx [ 490 ] = 5.157931604049537e-12 ; xx [
491 ] = 9.862118968695376e-13 ; xx [ 492 ] = xx [ 490 ] * xx [ 482 ] + xx [
491 ] * xx [ 483 ] ; xx [ 493 ] = xx [ 4 ] * xx [ 483 ] * xx [ 481 ] - (
motionData [ 166 ] - xx [ 4 ] * xx [ 492 ] * xx [ 483 ] ) - xx [ 491 ] ; xx [
494 ] = motionData [ 148 ] ; xx [ 495 ] = motionData [ 149 ] ; xx [ 496 ] =
motionData [ 150 ] ; xx [ 483 ] = motionData [ 165 ] + xx [ 4 ] * xx [ 482 ]
* xx [ 481 ] + xx [ 4 ] * xx [ 492 ] * xx [ 482 ] - xx [ 490 ] ; xx [ 481 ] =
xx [ 483 ] * motionData [ 150 ] ; xx [ 482 ] = xx [ 493 ] * motionData [ 150
] ; xx [ 490 ] = xx [ 483 ] * motionData [ 148 ] - xx [ 493 ] * motionData [
149 ] ; xx [ 497 ] = - xx [ 481 ] ; xx [ 498 ] = xx [ 482 ] ; xx [ 499 ] = xx
[ 490 ] ; pm_math_cross3 ( xx + 494 , xx + 497 , xx + 500 ) ; xx [ 494 ] =
motionData [ 329 ] ; xx [ 495 ] = motionData [ 330 ] ; xx [ 496 ] =
motionData [ 331 ] ; xx [ 497 ] = motionData [ 332 ] ; xx [ 491 ] = xx [ 55 ]
* state [ 82 ] - xx [ 56 ] * state [ 79 ] ; xx [ 492 ] = xx [ 55 ] * state [
81 ] + xx [ 56 ] * state [ 80 ] ; xx [ 498 ] = - xx [ 492 ] ; xx [ 499 ] = xx
[ 56 ] * state [ 81 ] - xx [ 55 ] * state [ 80 ] ; xx [ 503 ] = - xx [ 499 ]
; xx [ 504 ] = xx [ 55 ] * state [ 79 ] + xx [ 56 ] * state [ 82 ] ; xx [ 505
] = - xx [ 504 ] ; xx [ 506 ] = xx [ 491 ] ; xx [ 507 ] = xx [ 498 ] ; xx [
508 ] = xx [ 503 ] ; xx [ 509 ] = xx [ 505 ] ; pm_math_quatCompose ( xx + 494
, xx + 506 , xx + 510 ) ; pm_math_quatXform ( xx + 510 , xx + 247 , xx + 514
) ; pm_math_quatXform ( xx + 506 , xx + 99 , xx + 517 ) ; pm_math_quatXform (
xx + 494 , xx + 517 , xx + 520 ) ; pm_math_quatXform ( xx + 510 , xx + 253 ,
xx + 517 ) ; pm_math_quatXform ( xx + 506 , xx + 105 , xx + 523 ) ;
pm_math_quatXform ( xx + 494 , xx + 523 , xx + 506 ) ; xx [ 509 ] = xx [ 191
] * xx [ 513 ] ; xx [ 523 ] = xx [ 191 ] * xx [ 511 ] + xx [ 192 ] * xx [ 512
] ; xx [ 524 ] = - xx [ 509 ] ; xx [ 525 ] = - ( xx [ 192 ] * xx [ 513 ] ) ;
xx [ 526 ] = xx [ 523 ] ; pm_math_cross3 ( xx + 511 , xx + 524 , xx + 527 ) ;
xx [ 524 ] = xx [ 498 ] ; xx [ 525 ] = xx [ 503 ] ; xx [ 526 ] = xx [ 505 ] ;
xx [ 498 ] = xx [ 86 ] * xx [ 504 ] ; xx [ 503 ] = xx [ 112 ] * xx [ 504 ] ;
xx [ 504 ] = xx [ 86 ] * xx [ 492 ] + xx [ 499 ] * xx [ 112 ] ; xx [ 530 ] =
xx [ 498 ] ; xx [ 531 ] = xx [ 503 ] ; xx [ 532 ] = - xx [ 504 ] ;
pm_math_cross3 ( xx + 524 , xx + 530 , xx + 533 ) ; xx [ 524 ] = xx [ 4 ] * (
xx [ 533 ] + xx [ 498 ] * xx [ 491 ] ) - xx [ 112 ] ; xx [ 525 ] = xx [ 86 ]
+ ( xx [ 503 ] * xx [ 491 ] + xx [ 534 ] ) * xx [ 4 ] ; xx [ 526 ] = ( xx [
535 ] - xx [ 504 ] * xx [ 491 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 494 ,
xx + 524 , xx + 503 ) ; xx [ 494 ] = motionData [ 434 ] ; xx [ 495 ] =
motionData [ 435 ] ; xx [ 496 ] = motionData [ 436 ] ; xx [ 497 ] =
motionData [ 437 ] ; pm_math_quatCompose ( xx + 12 , xx + 494 , xx + 530 ) ;
xx [ 494 ] = xx [ 4 ] * ( motionData [ 434 ] * motionData [ 436 ] -
motionData [ 435 ] * motionData [ 437 ] ) ; xx [ 495 ] = - ( ( motionData [
434 ] * motionData [ 435 ] + motionData [ 436 ] * motionData [ 437 ] ) * xx [
4 ] ) ; xx [ 496 ] = ( motionData [ 435 ] * motionData [ 435 ] + motionData [
436 ] * motionData [ 436 ] ) * xx [ 4 ] - xx [ 5 ] ; pm_math_cross3 ( xx +
494 , xx + 24 , xx + 497 ) ; pm_math_quatXform ( xx + 530 , xx + 497 , xx +
494 ) ; xx [ 491 ] = xx [ 7 ] * motionData [ 438 ] ; xx [ 492 ] = xx [ 7 ] *
motionData [ 439 ] ; xx [ 497 ] = xx [ 11 ] * motionData [ 439 ] - xx [ 9 ] *
motionData [ 438 ] ; xx [ 524 ] = - xx [ 491 ] ; xx [ 525 ] = - xx [ 492 ] ;
xx [ 526 ] = - xx [ 497 ] ; pm_math_cross3 ( xx + 20 , xx + 524 , xx + 530 )
; xx [ 533 ] = motionData [ 427 ] ; xx [ 534 ] = motionData [ 428 ] ; xx [
535 ] = motionData [ 429 ] ; xx [ 536 ] = motionData [ 430 ] ;
pm_math_quatCompose ( xx + 37 , xx + 533 , xx + 537 ) ; xx [ 524 ] = xx [ 4 ]
* ( motionData [ 428 ] * motionData [ 430 ] - motionData [ 427 ] * motionData
[ 429 ] ) ; xx [ 525 ] = ( motionData [ 427 ] * motionData [ 428 ] +
motionData [ 429 ] * motionData [ 430 ] ) * xx [ 4 ] ; xx [ 526 ] = xx [ 5 ]
- ( motionData [ 428 ] * motionData [ 428 ] + motionData [ 429 ] * motionData
[ 429 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 524 , xx + 24 , xx + 533 ) ;
pm_math_quatXform ( xx + 537 , xx + 533 , xx + 524 ) ; xx [ 498 ] = xx [ 36 ]
* motionData [ 432 ] - xx [ 35 ] * motionData [ 431 ] ; xx [ 499 ] = xx [ 4 ]
* xx [ 36 ] * xx [ 498 ] - ( motionData [ 432 ] + xx [ 47 ] ) - xx [ 45 ] ;
xx [ 511 ] = motionData [ 431 ] + xx [ 4 ] * xx [ 35 ] * xx [ 498 ] - xx [ 52
] + xx [ 44 ] ; xx [ 498 ] = xx [ 511 ] * motionData [ 17 ] ; xx [ 512 ] = xx
[ 499 ] * motionData [ 17 ] ; xx [ 533 ] = xx [ 511 ] * motionData [ 15 ] -
xx [ 499 ] * motionData [ 16 ] ; xx [ 534 ] = - xx [ 498 ] ; xx [ 535 ] = xx
[ 512 ] ; xx [ 536 ] = xx [ 533 ] ; pm_math_cross3 ( xx + 49 , xx + 534 , xx
+ 537 ) ; xx [ 540 ] = motionData [ 420 ] ; xx [ 541 ] = motionData [ 421 ] ;
xx [ 542 ] = motionData [ 422 ] ; xx [ 543 ] = motionData [ 423 ] ;
pm_math_quatCompose ( xx + 75 , xx + 540 , xx + 544 ) ; xx [ 534 ] =
motionData [ 421 ] ; xx [ 535 ] = motionData [ 422 ] ; xx [ 536 ] =
motionData [ 423 ] ; xx [ 540 ] = xx [ 82 ] * motionData [ 423 ] ; xx [ 541 ]
= xx [ 82 ] * motionData [ 421 ] + motionData [ 422 ] ; xx [ 548 ] = xx [ 540
] ; xx [ 549 ] = motionData [ 423 ] ; xx [ 550 ] = - xx [ 541 ] ;
pm_math_cross3 ( xx + 534 , xx + 548 , xx + 551 ) ; xx [ 542 ] = motionData [
420 ] * motionData [ 423 ] ; xx [ 548 ] = xx [ 5 ] + ( xx [ 551 ] - xx [ 540
] * motionData [ 420 ] ) * xx [ 4 ] ; xx [ 549 ] = xx [ 4 ] * ( xx [ 552 ] -
xx [ 542 ] ) - xx [ 82 ] ; xx [ 550 ] = xx [ 4 ] * ( xx [ 553 ] + xx [ 541 ]
* motionData [ 420 ] ) ; pm_math_cross3 ( xx + 548 , xx + 24 , xx + 551 ) ;
pm_math_quatXform ( xx + 544 , xx + 551 , xx + 548 ) ; xx [ 541 ] = - ( xx [
82 ] * motionData [ 426 ] ) ; xx [ 551 ] = xx [ 541 ] ; xx [ 552 ] = -
motionData [ 426 ] ; xx [ 553 ] = motionData [ 425 ] + xx [ 82 ] * motionData
[ 424 ] ; pm_math_quatXform ( xx + 71 , xx + 551 , xx + 554 ) ; xx [ 551 ] =
xx [ 554 ] + xx [ 102 ] ; xx [ 552 ] = xx [ 555 ] + xx [ 103 ] ; xx [ 553 ] =
xx [ 556 ] + xx [ 104 ] ; pm_math_quatXform ( xx + 61 , xx + 551 , xx + 554 )
; xx [ 543 ] = motionData [ 421 ] - xx [ 82 ] * motionData [ 422 ] ; xx [ 551
] = - motionData [ 423 ] ; xx [ 552 ] = xx [ 540 ] ; xx [ 553 ] = xx [ 543 ]
; pm_math_cross3 ( xx + 534 , xx + 551 , xx + 557 ) ; xx [ 534 ] = xx [ 82 ]
+ ( xx [ 542 ] + xx [ 557 ] ) * xx [ 4 ] ; xx [ 535 ] = xx [ 5 ] + xx [ 4 ] *
( xx [ 558 ] - xx [ 82 ] * xx [ 542 ] ) ; xx [ 536 ] = xx [ 4 ] * ( xx [ 559
] - xx [ 543 ] * motionData [ 420 ] ) ; pm_math_cross3 ( xx + 534 , xx + 24 ,
xx + 551 ) ; pm_math_quatXform ( xx + 544 , xx + 551 , xx + 534 ) ; xx [ 551
] = motionData [ 426 ] ; xx [ 552 ] = xx [ 541 ] ; xx [ 553 ] = xx [ 82 ] *
motionData [ 425 ] - motionData [ 424 ] ; pm_math_quatXform ( xx + 71 , xx +
551 , xx + 540 ) ; xx [ 551 ] = xx [ 540 ] + xx [ 90 ] ; xx [ 552 ] = xx [
541 ] + xx [ 91 ] ; xx [ 553 ] = xx [ 542 ] + xx [ 92 ] ; pm_math_quatXform (
xx + 61 , xx + 551 , xx + 540 ) ; xx [ 551 ] = xx [ 4 ] * ( motionData [ 421
] * motionData [ 423 ] - motionData [ 420 ] * motionData [ 422 ] ) ; xx [ 552
] = ( motionData [ 420 ] * motionData [ 421 ] + motionData [ 422 ] *
motionData [ 423 ] ) * xx [ 4 ] ; xx [ 553 ] = xx [ 5 ] - ( motionData [ 421
] * motionData [ 421 ] + motionData [ 422 ] * motionData [ 422 ] ) * xx [ 4 ]
; pm_math_cross3 ( xx + 551 , xx + 24 , xx + 557 ) ; pm_math_quatXform ( xx +
544 , xx + 557 , xx + 551 ) ; xx [ 543 ] = xx [ 69 ] * motionData [ 424 ] ;
xx [ 544 ] = xx [ 69 ] * motionData [ 425 ] ; xx [ 545 ] = xx [ 65 ] *
motionData [ 424 ] + xx [ 67 ] * motionData [ 425 ] ; xx [ 557 ] = xx [ 543 ]
; xx [ 558 ] = xx [ 544 ] ; xx [ 559 ] = - xx [ 545 ] ; pm_math_cross3 ( xx +
83 , xx + 557 , xx + 560 ) ; xx [ 557 ] = xx [ 4 ] * ( xx [ 560 ] + xx [ 543
] * xx [ 57 ] ) + xx [ 118 ] - motionData [ 425 ] - xx [ 112 ] ; xx [ 558 ] =
motionData [ 424 ] + xx [ 4 ] * ( xx [ 561 ] + xx [ 544 ] * xx [ 57 ] ) + xx
[ 111 ] + xx [ 86 ] ; xx [ 559 ] = ( xx [ 562 ] - xx [ 57 ] * xx [ 545 ] ) *
xx [ 4 ] + xx [ 113 ] ; pm_math_quatXform ( xx + 61 , xx + 557 , xx + 543 ) ;
xx [ 557 ] = motionData [ 413 ] ; xx [ 558 ] = motionData [ 414 ] ; xx [ 559
] = motionData [ 415 ] ; xx [ 560 ] = motionData [ 416 ] ;
pm_math_quatCompose ( xx + 129 , xx + 557 , xx + 561 ) ; xx [ 546 ] =
motionData [ 415 ] * motionData [ 415 ] ; xx [ 547 ] = motionData [ 416 ] *
motionData [ 416 ] ; xx [ 557 ] = motionData [ 414 ] * motionData [ 415 ] ;
xx [ 558 ] = motionData [ 413 ] * motionData [ 416 ] ; xx [ 559 ] =
motionData [ 413 ] * motionData [ 415 ] ; xx [ 560 ] = motionData [ 414 ] *
motionData [ 416 ] ; xx [ 565 ] = xx [ 5 ] - ( xx [ 546 ] + xx [ 547 ] ) * xx
[ 4 ] ; xx [ 566 ] = xx [ 4 ] * ( xx [ 557 ] - xx [ 558 ] ) ; xx [ 567 ] = (
xx [ 559 ] + xx [ 560 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 565 , xx + 24 ,
xx + 568 ) ; pm_math_quatXform ( xx + 561 , xx + 568 , xx + 565 ) ; xx [ 568
] = xx [ 117 ] * motionData [ 418 ] ; xx [ 569 ] = xx [ 124 ] * motionData [
419 ] ; xx [ 570 ] = xx [ 568 ] + xx [ 569 ] ; xx [ 571 ] = xx [ 70 ] *
motionData [ 418 ] ; xx [ 572 ] = xx [ 70 ] * motionData [ 419 ] ; xx [ 573 ]
= - xx [ 570 ] ; xx [ 574 ] = - xx [ 571 ] ; xx [ 575 ] = - xx [ 572 ] ;
pm_math_cross3 ( xx + 142 , xx + 573 , xx + 576 ) ; xx [ 573 ] = xx [ 4 ] * (
xx [ 576 ] - xx [ 570 ] * xx [ 68 ] ) + xx [ 156 ] ; xx [ 574 ] = xx [ 4 ] *
( xx [ 577 ] - xx [ 571 ] * xx [ 68 ] ) + xx [ 150 ] - motionData [ 419 ] -
xx [ 19 ] ; xx [ 575 ] = motionData [ 418 ] + xx [ 4 ] * ( xx [ 578 ] - xx [
572 ] * xx [ 68 ] ) + xx [ 154 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 119 ,
xx + 573 , xx + 570 ) ; xx [ 573 ] = motionData [ 414 ] * motionData [ 414 ]
; xx [ 574 ] = motionData [ 415 ] * motionData [ 416 ] ; xx [ 575 ] =
motionData [ 413 ] * motionData [ 414 ] ; xx [ 576 ] = ( xx [ 558 ] + xx [
557 ] ) * xx [ 4 ] ; xx [ 577 ] = xx [ 5 ] - ( xx [ 547 ] + xx [ 573 ] ) * xx
[ 4 ] ; xx [ 578 ] = xx [ 4 ] * ( xx [ 574 ] - xx [ 575 ] ) ; pm_math_cross3
( xx + 576 , xx + 24 , xx + 579 ) ; pm_math_quatXform ( xx + 561 , xx + 579 ,
xx + 576 ) ; xx [ 547 ] = xx [ 117 ] * motionData [ 417 ] ; xx [ 557 ] = xx [
70 ] * motionData [ 417 ] ; xx [ 558 ] = xx [ 557 ] - xx [ 569 ] ; xx [ 569 ]
= xx [ 117 ] * motionData [ 419 ] ; xx [ 579 ] = xx [ 547 ] ; xx [ 580 ] = xx
[ 558 ] ; xx [ 581 ] = xx [ 569 ] ; pm_math_cross3 ( xx + 142 , xx + 579 , xx
+ 582 ) ; xx [ 579 ] = motionData [ 419 ] + ( xx [ 547 ] * xx [ 68 ] + xx [
582 ] ) * xx [ 4 ] + xx [ 162 ] + xx [ 19 ] ; xx [ 580 ] = ( xx [ 68 ] * xx [
558 ] + xx [ 583 ] ) * xx [ 4 ] + xx [ 155 ] ; xx [ 581 ] = ( xx [ 569 ] * xx
[ 68 ] + xx [ 584 ] ) * xx [ 4 ] + xx [ 161 ] - motionData [ 417 ] - xx [ 6 ]
; pm_math_quatXform ( xx + 119 , xx + 579 , xx + 582 ) ; xx [ 579 ] = xx [ 4
] * ( xx [ 560 ] - xx [ 559 ] ) ; xx [ 580 ] = ( xx [ 575 ] + xx [ 574 ] ) *
xx [ 4 ] ; xx [ 581 ] = xx [ 5 ] - ( xx [ 573 ] + xx [ 546 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 579 , xx + 24 , xx + 558 ) ; pm_math_quatXform ( xx +
561 , xx + 558 , xx + 573 ) ; xx [ 546 ] = xx [ 124 ] * motionData [ 417 ] ;
xx [ 547 ] = xx [ 124 ] * motionData [ 418 ] ; xx [ 558 ] = xx [ 557 ] - xx [
568 ] ; xx [ 559 ] = xx [ 546 ] ; xx [ 560 ] = xx [ 547 ] ; xx [ 561 ] = xx [
558 ] ; pm_math_cross3 ( xx + 142 , xx + 559 , xx + 562 ) ; xx [ 559 ] = ( xx
[ 546 ] * xx [ 68 ] + xx [ 562 ] ) * xx [ 4 ] + xx [ 133 ] - motionData [ 418
] + xx [ 8 ] ; xx [ 560 ] = motionData [ 417 ] + ( xx [ 547 ] * xx [ 68 ] +
xx [ 563 ] ) * xx [ 4 ] + xx [ 66 ] + xx [ 6 ] ; xx [ 561 ] = ( xx [ 68 ] *
xx [ 558 ] + xx [ 564 ] ) * xx [ 4 ] + xx [ 127 ] ; pm_math_quatXform ( xx +
119 , xx + 559 , xx + 562 ) ; xx [ 557 ] = motionData [ 70 ] ; xx [ 558 ] =
motionData [ 71 ] ; xx [ 559 ] = motionData [ 72 ] ; xx [ 560 ] = motionData
[ 73 ] ; pm_math_quatCompose ( xx + 169 , xx + 557 , xx + 585 ) ; xx [ 557 ]
= xx [ 4 ] * ( motionData [ 71 ] * motionData [ 73 ] - motionData [ 70 ] *
motionData [ 72 ] ) ; xx [ 558 ] = ( motionData [ 70 ] * motionData [ 71 ] +
motionData [ 72 ] * motionData [ 73 ] ) * xx [ 4 ] ; xx [ 559 ] = xx [ 5 ] -
( motionData [ 71 ] * motionData [ 71 ] + motionData [ 72 ] * motionData [ 72
] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 557 , xx + 24 , xx + 579 ) ;
pm_math_quatXform ( xx + 585 , xx + 579 , xx + 557 ) ; xx [ 546 ] = xx [ 126
] * motionData [ 75 ] ; xx [ 547 ] = xx [ 126 ] * motionData [ 74 ] ; xx [
560 ] = xx [ 4 ] * ( xx [ 546 ] * xx [ 126 ] - xx [ 125 ] * xx [ 547 ] ) -
motionData [ 75 ] + xx [ 148 ] ; xx [ 561 ] = motionData [ 74 ] - ( ( xx [
125 ] * xx [ 546 ] + xx [ 547 ] * xx [ 126 ] ) * xx [ 4 ] - xx [ 160 ] ) - xx
[ 137 ] ; xx [ 546 ] = xx [ 561 ] * motionData [ 220 ] ; xx [ 547 ] = xx [
560 ] * motionData [ 220 ] ; xx [ 568 ] = xx [ 561 ] * motionData [ 218 ] -
xx [ 560 ] * motionData [ 219 ] ; xx [ 579 ] = - xx [ 546 ] ; xx [ 580 ] = xx
[ 547 ] ; xx [ 581 ] = xx [ 568 ] ; pm_math_cross3 ( xx + 173 , xx + 579 , xx
+ 585 ) ; xx [ 569 ] = xx [ 2 ] * state [ 38 ] ; xx [ 579 ] = cos ( xx [ 569
] ) ; xx [ 580 ] = xx [ 442 ] * xx [ 579 ] ; xx [ 581 ] = sin ( xx [ 569 ] )
; xx [ 569 ] = xx [ 442 ] * xx [ 581 ] ; xx [ 442 ] = xx [ 580 ] + xx [ 569 ]
; xx [ 588 ] = xx [ 463 ] * xx [ 579 ] ; xx [ 579 ] = xx [ 463 ] * xx [ 581 ]
; xx [ 463 ] = xx [ 588 ] - xx [ 579 ] ; xx [ 581 ] = xx [ 588 ] + xx [ 579 ]
; xx [ 579 ] = xx [ 580 ] - xx [ 569 ] ; xx [ 588 ] = xx [ 442 ] ; xx [ 589 ]
= xx [ 463 ] ; xx [ 590 ] = xx [ 581 ] ; xx [ 591 ] = xx [ 579 ] ;
pm_math_quatCompose ( xx + 325 , xx + 588 , xx + 592 ) ; xx [ 569 ] = xx [ 6
] * xx [ 595 ] ; xx [ 580 ] = xx [ 6 ] * xx [ 593 ] - xx [ 8 ] * xx [ 594 ] ;
xx [ 588 ] = - xx [ 569 ] ; xx [ 589 ] = xx [ 8 ] * xx [ 595 ] ; xx [ 590 ] =
xx [ 580 ] ; pm_math_cross3 ( xx + 593 , xx + 588 , xx + 596 ) ; xx [ 588 ] =
6.30935626036444e-12 ; xx [ 589 ] = xx [ 463 ] ; xx [ 590 ] = xx [ 581 ] ; xx
[ 591 ] = xx [ 579 ] ; xx [ 593 ] = 5.998698970888227e-12 ; xx [ 594 ] = xx [
593 ] * xx [ 579 ] ; xx [ 599 ] = xx [ 588 ] * xx [ 579 ] ; xx [ 579 ] = xx [
593 ] * xx [ 463 ] + xx [ 581 ] * xx [ 588 ] ; xx [ 600 ] = xx [ 594 ] ; xx [
601 ] = xx [ 599 ] ; xx [ 602 ] = - xx [ 579 ] ; pm_math_cross3 ( xx + 589 ,
xx + 600 , xx + 603 ) ; xx [ 589 ] = xx [ 588 ] + xx [ 4 ] * ( xx [ 603 ] +
xx [ 442 ] * xx [ 594 ] ) ; xx [ 590 ] = ( xx [ 442 ] * xx [ 599 ] + xx [ 604
] ) * xx [ 4 ] - xx [ 593 ] ; xx [ 591 ] = ( xx [ 605 ] - xx [ 442 ] * xx [
579 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 325 , xx + 589 , xx + 599 ) ;
xx [ 442 ] = 0.3162538200043575 ; xx [ 463 ] = xx [ 2 ] * state [ 86 ] ; xx [
579 ] = sin ( xx [ 463 ] ) ; xx [ 581 ] = 0.3162553791961478 ; xx [ 588 ] =
cos ( xx [ 463 ] ) ; xx [ 463 ] = xx [ 442 ] * xx [ 579 ] - xx [ 581 ] * xx [
588 ] ; xx [ 589 ] = 0.6324445710612973 ; xx [ 590 ] = 0.6324396579890008 ;
xx [ 591 ] = xx [ 589 ] * xx [ 588 ] + xx [ 590 ] * xx [ 579 ] ; xx [ 593 ] =
- xx [ 591 ] ; xx [ 594 ] = xx [ 590 ] * xx [ 588 ] - xx [ 589 ] * xx [ 579 ]
; xx [ 589 ] = xx [ 442 ] * xx [ 588 ] + xx [ 581 ] * xx [ 579 ] ; xx [ 602 ]
= xx [ 463 ] ; xx [ 603 ] = xx [ 593 ] ; xx [ 604 ] = xx [ 594 ] ; xx [ 605 ]
= xx [ 589 ] ; xx [ 606 ] = motionData [ 406 ] ; xx [ 607 ] = motionData [
407 ] ; xx [ 608 ] = motionData [ 408 ] ; xx [ 609 ] = motionData [ 409 ] ;
pm_math_quatCompose ( xx + 602 , xx + 606 , xx + 610 ) ; xx [ 602 ] = xx [ 4
] * ( motionData [ 406 ] * motionData [ 408 ] - motionData [ 407 ] *
motionData [ 409 ] ) ; xx [ 603 ] = - ( ( motionData [ 406 ] * motionData [
407 ] + motionData [ 408 ] * motionData [ 409 ] ) * xx [ 4 ] ) ; xx [ 604 ] =
( motionData [ 407 ] * motionData [ 407 ] + motionData [ 408 ] * motionData [
408 ] ) * xx [ 4 ] - xx [ 5 ] ; pm_math_cross3 ( xx + 602 , xx + 208 , xx +
605 ) ; pm_math_quatXform ( xx + 610 , xx + 605 , xx + 602 ) ; xx [ 442 ] =
xx [ 589 ] * motionData [ 410 ] ; xx [ 605 ] = xx [ 593 ] ; xx [ 606 ] = xx [
594 ] ; xx [ 607 ] = xx [ 589 ] ; xx [ 579 ] = xx [ 589 ] * motionData [ 411
] ; xx [ 581 ] = xx [ 594 ] * motionData [ 411 ] - xx [ 591 ] * motionData [
410 ] ; xx [ 608 ] = xx [ 442 ] ; xx [ 609 ] = xx [ 579 ] ; xx [ 610 ] = - xx
[ 581 ] ; pm_math_cross3 ( xx + 605 , xx + 608 , xx + 611 ) ; xx [ 588 ] = xx
[ 27 ] * xx [ 591 ] ; xx [ 590 ] = xx [ 27 ] * xx [ 589 ] ; xx [ 593 ] = xx [
2 ] * state [ 88 ] ; xx [ 605 ] = cos ( xx [ 593 ] ) ; xx [ 606 ] = sin ( xx
[ 593 ] ) ; xx [ 607 ] = xx [ 605 ] * motionData [ 169 ] - xx [ 606 ] *
motionData [ 170 ] ; xx [ 608 ] = - ( xx [ 605 ] * motionData [ 168 ] + xx [
606 ] * motionData [ 171 ] ) ; xx [ 609 ] = xx [ 606 ] * motionData [ 168 ] -
xx [ 605 ] * motionData [ 171 ] ; xx [ 610 ] = xx [ 606 ] * motionData [ 169
] + xx [ 605 ] * motionData [ 170 ] ; xx [ 614 ] = motionData [ 182 ] ; xx [
615 ] = motionData [ 183 ] ; xx [ 616 ] = motionData [ 184 ] ; xx [ 617 ] =
motionData [ 185 ] ; pm_math_quatCompose ( xx + 607 , xx + 614 , xx + 618 ) ;
xx [ 607 ] = xx [ 4 ] * ( motionData [ 183 ] * motionData [ 185 ] -
motionData [ 182 ] * motionData [ 184 ] ) ; xx [ 608 ] = ( motionData [ 182 ]
* motionData [ 183 ] + motionData [ 184 ] * motionData [ 185 ] ) * xx [ 4 ] ;
xx [ 609 ] = xx [ 5 ] - ( motionData [ 183 ] * motionData [ 183 ] +
motionData [ 184 ] * motionData [ 184 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
607 , xx + 208 , xx + 614 ) ; pm_math_quatXform ( xx + 618 , xx + 614 , xx +
607 ) ; xx [ 593 ] = xx [ 606 ] * motionData [ 187 ] - xx [ 605 ] *
motionData [ 186 ] ; xx [ 610 ] = 1.600627075326599e-13 ; xx [ 614 ] =
8.497959654019115e-12 ; xx [ 615 ] = xx [ 610 ] * xx [ 605 ] + xx [ 614 ] *
xx [ 606 ] ; xx [ 616 ] = xx [ 4 ] * xx [ 606 ] * xx [ 593 ] - ( motionData [
187 ] - xx [ 4 ] * xx [ 615 ] * xx [ 606 ] ) - xx [ 614 ] ; xx [ 617 ] =
motionData [ 169 ] ; xx [ 618 ] = motionData [ 170 ] ; xx [ 619 ] =
motionData [ 171 ] ; xx [ 606 ] = motionData [ 186 ] + xx [ 4 ] * xx [ 605 ]
* xx [ 593 ] + xx [ 4 ] * xx [ 615 ] * xx [ 605 ] - xx [ 610 ] ; xx [ 593 ] =
xx [ 606 ] * motionData [ 171 ] ; xx [ 605 ] = xx [ 616 ] * motionData [ 171
] ; xx [ 610 ] = xx [ 606 ] * motionData [ 169 ] - xx [ 616 ] * motionData [
170 ] ; xx [ 620 ] = - xx [ 593 ] ; xx [ 621 ] = xx [ 605 ] ; xx [ 622 ] = xx
[ 610 ] ; pm_math_cross3 ( xx + 617 , xx + 620 , xx + 623 ) ; xx [ 617 ] =
motionData [ 385 ] ; xx [ 618 ] = motionData [ 386 ] ; xx [ 619 ] =
motionData [ 387 ] ; xx [ 620 ] = motionData [ 388 ] ; xx [ 614 ] = xx [ 55 ]
* state [ 93 ] - xx [ 56 ] * state [ 90 ] ; xx [ 615 ] = xx [ 55 ] * state [
92 ] + xx [ 56 ] * state [ 91 ] ; xx [ 621 ] = - xx [ 615 ] ; xx [ 622 ] = xx
[ 56 ] * state [ 92 ] - xx [ 55 ] * state [ 91 ] ; xx [ 626 ] = - xx [ 622 ]
; xx [ 627 ] = xx [ 55 ] * state [ 90 ] + xx [ 56 ] * state [ 93 ] ; xx [ 628
] = - xx [ 627 ] ; xx [ 629 ] = xx [ 614 ] ; xx [ 630 ] = xx [ 621 ] ; xx [
631 ] = xx [ 626 ] ; xx [ 632 ] = xx [ 628 ] ; pm_math_quatCompose ( xx + 617
, xx + 629 , xx + 633 ) ; pm_math_quatXform ( xx + 633 , xx + 247 , xx + 637
) ; pm_math_quatXform ( xx + 629 , xx + 99 , xx + 640 ) ; pm_math_quatXform (
xx + 617 , xx + 640 , xx + 643 ) ; pm_math_quatXform ( xx + 633 , xx + 253 ,
xx + 640 ) ; pm_math_quatXform ( xx + 629 , xx + 105 , xx + 646 ) ;
pm_math_quatXform ( xx + 617 , xx + 646 , xx + 629 ) ; xx [ 632 ] = xx [ 191
] * xx [ 636 ] ; xx [ 646 ] = xx [ 191 ] * xx [ 634 ] + xx [ 192 ] * xx [ 635
] ; xx [ 647 ] = - xx [ 632 ] ; xx [ 648 ] = - ( xx [ 192 ] * xx [ 636 ] ) ;
xx [ 649 ] = xx [ 646 ] ; pm_math_cross3 ( xx + 634 , xx + 647 , xx + 650 ) ;
xx [ 647 ] = xx [ 621 ] ; xx [ 648 ] = xx [ 626 ] ; xx [ 649 ] = xx [ 628 ] ;
xx [ 621 ] = xx [ 86 ] * xx [ 627 ] ; xx [ 626 ] = xx [ 112 ] * xx [ 627 ] ;
xx [ 627 ] = xx [ 86 ] * xx [ 615 ] + xx [ 622 ] * xx [ 112 ] ; xx [ 653 ] =
xx [ 621 ] ; xx [ 654 ] = xx [ 626 ] ; xx [ 655 ] = - xx [ 627 ] ;
pm_math_cross3 ( xx + 647 , xx + 653 , xx + 656 ) ; xx [ 647 ] = xx [ 4 ] * (
xx [ 656 ] + xx [ 621 ] * xx [ 614 ] ) - xx [ 112 ] ; xx [ 648 ] = xx [ 86 ]
+ ( xx [ 626 ] * xx [ 614 ] + xx [ 657 ] ) * xx [ 4 ] ; xx [ 649 ] = ( xx [
658 ] - xx [ 627 ] * xx [ 614 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 617 ,
xx + 647 , xx + 626 ) ; xx [ 617 ] = motionData [ 490 ] ; xx [ 618 ] =
motionData [ 491 ] ; xx [ 619 ] = motionData [ 492 ] ; xx [ 620 ] =
motionData [ 493 ] ; pm_math_quatCompose ( xx + 12 , xx + 617 , xx + 653 ) ;
xx [ 12 ] = xx [ 4 ] * ( motionData [ 490 ] * motionData [ 492 ] - motionData
[ 491 ] * motionData [ 493 ] ) ; xx [ 13 ] = - ( ( motionData [ 490 ] *
motionData [ 491 ] + motionData [ 492 ] * motionData [ 493 ] ) * xx [ 4 ] ) ;
xx [ 14 ] = ( motionData [ 491 ] * motionData [ 491 ] + motionData [ 492 ] *
motionData [ 492 ] ) * xx [ 4 ] - xx [ 5 ] ; pm_math_cross3 ( xx + 12 , xx +
24 , xx + 617 ) ; pm_math_quatXform ( xx + 653 , xx + 617 , xx + 12 ) ; xx [
15 ] = xx [ 7 ] * motionData [ 494 ] ; xx [ 614 ] = xx [ 7 ] * motionData [
495 ] ; xx [ 7 ] = xx [ 11 ] * motionData [ 495 ] - xx [ 9 ] * motionData [
494 ] ; xx [ 617 ] = - xx [ 15 ] ; xx [ 618 ] = - xx [ 614 ] ; xx [ 619 ] = -
xx [ 7 ] ; pm_math_cross3 ( xx + 20 , xx + 617 , xx + 620 ) ; xx [ 653 ] =
motionData [ 483 ] ; xx [ 654 ] = motionData [ 484 ] ; xx [ 655 ] =
motionData [ 485 ] ; xx [ 656 ] = motionData [ 486 ] ; pm_math_quatCompose (
xx + 37 , xx + 653 , xx + 657 ) ; xx [ 20 ] = xx [ 4 ] * ( motionData [ 484 ]
* motionData [ 486 ] - motionData [ 483 ] * motionData [ 485 ] ) ; xx [ 21 ]
= ( motionData [ 483 ] * motionData [ 484 ] + motionData [ 485 ] * motionData
[ 486 ] ) * xx [ 4 ] ; xx [ 22 ] = xx [ 5 ] - ( motionData [ 484 ] *
motionData [ 484 ] + motionData [ 485 ] * motionData [ 485 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 20 , xx + 24 , xx + 37 ) ; pm_math_quatXform ( xx + 657
, xx + 37 , xx + 20 ) ; xx [ 9 ] = xx [ 36 ] * motionData [ 488 ] - xx [ 35 ]
* motionData [ 487 ] ; xx [ 11 ] = xx [ 4 ] * xx [ 36 ] * xx [ 9 ] - (
motionData [ 488 ] + xx [ 47 ] ) - xx [ 45 ] ; xx [ 36 ] = motionData [ 487 ]
+ xx [ 4 ] * xx [ 35 ] * xx [ 9 ] - xx [ 52 ] + xx [ 44 ] ; xx [ 9 ] = xx [
36 ] * motionData [ 17 ] ; xx [ 35 ] = xx [ 11 ] * motionData [ 17 ] ; xx [
37 ] = xx [ 36 ] * motionData [ 15 ] - xx [ 11 ] * motionData [ 16 ] ; xx [
38 ] = - xx [ 9 ] ; xx [ 39 ] = xx [ 35 ] ; xx [ 40 ] = xx [ 37 ] ;
pm_math_cross3 ( xx + 49 , xx + 38 , xx + 617 ) ; xx [ 49 ] = motionData [
476 ] ; xx [ 50 ] = motionData [ 477 ] ; xx [ 51 ] = motionData [ 478 ] ; xx
[ 52 ] = motionData [ 479 ] ; pm_math_quatCompose ( xx + 75 , xx + 49 , xx +
653 ) ; xx [ 38 ] = motionData [ 477 ] ; xx [ 39 ] = motionData [ 478 ] ; xx
[ 40 ] = motionData [ 479 ] ; xx [ 44 ] = xx [ 82 ] * motionData [ 479 ] ; xx
[ 45 ] = xx [ 82 ] * motionData [ 477 ] + motionData [ 478 ] ; xx [ 49 ] = xx
[ 44 ] ; xx [ 50 ] = motionData [ 479 ] ; xx [ 51 ] = - xx [ 45 ] ;
pm_math_cross3 ( xx + 38 , xx + 49 , xx + 75 ) ; xx [ 47 ] = motionData [ 476
] * motionData [ 479 ] ; xx [ 49 ] = xx [ 5 ] + ( xx [ 75 ] - xx [ 44 ] *
motionData [ 476 ] ) * xx [ 4 ] ; xx [ 50 ] = xx [ 4 ] * ( xx [ 76 ] - xx [
47 ] ) - xx [ 82 ] ; xx [ 51 ] = xx [ 4 ] * ( xx [ 77 ] + xx [ 45 ] *
motionData [ 476 ] ) ; pm_math_cross3 ( xx + 49 , xx + 24 , xx + 75 ) ;
pm_math_quatXform ( xx + 653 , xx + 75 , xx + 49 ) ; xx [ 45 ] = - ( xx [ 82
] * motionData [ 482 ] ) ; xx [ 75 ] = xx [ 45 ] ; xx [ 76 ] = - motionData [
482 ] ; xx [ 77 ] = motionData [ 481 ] + xx [ 82 ] * motionData [ 480 ] ;
pm_math_quatXform ( xx + 71 , xx + 75 , xx + 647 ) ; xx [ 75 ] = xx [ 647 ] +
xx [ 102 ] ; xx [ 76 ] = xx [ 648 ] + xx [ 103 ] ; xx [ 77 ] = xx [ 649 ] +
xx [ 104 ] ; pm_math_quatXform ( xx + 61 , xx + 75 , xx + 102 ) ; xx [ 52 ] =
motionData [ 477 ] - xx [ 82 ] * motionData [ 478 ] ; xx [ 75 ] = -
motionData [ 479 ] ; xx [ 76 ] = xx [ 44 ] ; xx [ 77 ] = xx [ 52 ] ;
pm_math_cross3 ( xx + 38 , xx + 75 , xx + 647 ) ; xx [ 38 ] = xx [ 82 ] + (
xx [ 47 ] + xx [ 647 ] ) * xx [ 4 ] ; xx [ 39 ] = xx [ 5 ] + xx [ 4 ] * ( xx
[ 648 ] - xx [ 82 ] * xx [ 47 ] ) ; xx [ 40 ] = xx [ 4 ] * ( xx [ 649 ] - xx
[ 52 ] * motionData [ 476 ] ) ; pm_math_cross3 ( xx + 38 , xx + 24 , xx + 75
) ; pm_math_quatXform ( xx + 653 , xx + 75 , xx + 38 ) ; xx [ 75 ] =
motionData [ 482 ] ; xx [ 76 ] = xx [ 45 ] ; xx [ 77 ] = xx [ 82 ] *
motionData [ 481 ] - motionData [ 480 ] ; pm_math_quatXform ( xx + 71 , xx +
75 , xx + 647 ) ; xx [ 71 ] = xx [ 647 ] + xx [ 90 ] ; xx [ 72 ] = xx [ 648 ]
+ xx [ 91 ] ; xx [ 73 ] = xx [ 649 ] + xx [ 92 ] ; pm_math_quatXform ( xx +
61 , xx + 71 , xx + 74 ) ; xx [ 71 ] = xx [ 4 ] * ( motionData [ 477 ] *
motionData [ 479 ] - motionData [ 476 ] * motionData [ 478 ] ) ; xx [ 72 ] =
( motionData [ 476 ] * motionData [ 477 ] + motionData [ 478 ] * motionData [
479 ] ) * xx [ 4 ] ; xx [ 73 ] = xx [ 5 ] - ( motionData [ 477 ] * motionData
[ 477 ] + motionData [ 478 ] * motionData [ 478 ] ) * xx [ 4 ] ;
pm_math_cross3 ( xx + 71 , xx + 24 , xx + 90 ) ; pm_math_quatXform ( xx + 653
, xx + 90 , xx + 71 ) ; xx [ 44 ] = xx [ 69 ] * motionData [ 480 ] ; xx [ 45
] = xx [ 69 ] * motionData [ 481 ] ; xx [ 47 ] = xx [ 65 ] * motionData [ 480
] + xx [ 67 ] * motionData [ 481 ] ; xx [ 90 ] = xx [ 44 ] ; xx [ 91 ] = xx [
45 ] ; xx [ 92 ] = - xx [ 47 ] ; pm_math_cross3 ( xx + 83 , xx + 90 , xx +
647 ) ; xx [ 82 ] = xx [ 4 ] * ( xx [ 647 ] + xx [ 44 ] * xx [ 57 ] ) + xx [
118 ] - motionData [ 481 ] - xx [ 112 ] ; xx [ 83 ] = motionData [ 480 ] + xx
[ 4 ] * ( xx [ 648 ] + xx [ 45 ] * xx [ 57 ] ) + xx [ 111 ] + xx [ 86 ] ; xx
[ 84 ] = ( xx [ 649 ] - xx [ 47 ] * xx [ 57 ] ) * xx [ 4 ] + xx [ 113 ] ;
pm_math_quatXform ( xx + 61 , xx + 82 , xx + 90 ) ; xx [ 61 ] = motionData [
469 ] ; xx [ 62 ] = motionData [ 470 ] ; xx [ 63 ] = motionData [ 471 ] ; xx
[ 64 ] = motionData [ 472 ] ; pm_math_quatCompose ( xx + 129 , xx + 61 , xx +
82 ) ; xx [ 44 ] = motionData [ 471 ] * motionData [ 471 ] ; xx [ 45 ] =
motionData [ 472 ] * motionData [ 472 ] ; xx [ 47 ] = motionData [ 470 ] *
motionData [ 471 ] ; xx [ 52 ] = motionData [ 469 ] * motionData [ 472 ] ; xx
[ 57 ] = motionData [ 469 ] * motionData [ 471 ] ; xx [ 61 ] = motionData [
470 ] * motionData [ 472 ] ; xx [ 62 ] = xx [ 5 ] - ( xx [ 44 ] + xx [ 45 ] )
* xx [ 4 ] ; xx [ 63 ] = xx [ 4 ] * ( xx [ 47 ] - xx [ 52 ] ) ; xx [ 64 ] = (
xx [ 57 ] + xx [ 61 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 62 , xx + 24 , xx
+ 129 ) ; pm_math_quatXform ( xx + 82 , xx + 129 , xx + 62 ) ; xx [ 65 ] = xx
[ 117 ] * motionData [ 474 ] ; xx [ 67 ] = xx [ 124 ] * motionData [ 475 ] ;
xx [ 69 ] = xx [ 65 ] + xx [ 67 ] ; xx [ 77 ] = xx [ 70 ] * motionData [ 474
] ; xx [ 78 ] = xx [ 70 ] * motionData [ 475 ] ; xx [ 129 ] = - xx [ 69 ] ;
xx [ 130 ] = - xx [ 77 ] ; xx [ 131 ] = - xx [ 78 ] ; pm_math_cross3 ( xx +
142 , xx + 129 , xx + 647 ) ; xx [ 129 ] = xx [ 4 ] * ( xx [ 647 ] - xx [ 69
] * xx [ 68 ] ) + xx [ 156 ] ; xx [ 130 ] = xx [ 4 ] * ( xx [ 648 ] - xx [ 77
] * xx [ 68 ] ) + xx [ 150 ] - motionData [ 475 ] - xx [ 19 ] ; xx [ 131 ] =
motionData [ 474 ] + xx [ 4 ] * ( xx [ 649 ] - xx [ 78 ] * xx [ 68 ] ) + xx [
154 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 119 , xx + 129 , xx + 647 ) ; xx
[ 69 ] = motionData [ 470 ] * motionData [ 470 ] ; xx [ 77 ] = motionData [
471 ] * motionData [ 472 ] ; xx [ 78 ] = motionData [ 469 ] * motionData [
470 ] ; xx [ 129 ] = ( xx [ 52 ] + xx [ 47 ] ) * xx [ 4 ] ; xx [ 130 ] = xx [
5 ] - ( xx [ 45 ] + xx [ 69 ] ) * xx [ 4 ] ; xx [ 131 ] = xx [ 4 ] * ( xx [
77 ] - xx [ 78 ] ) ; pm_math_cross3 ( xx + 129 , xx + 24 , xx + 653 ) ;
pm_math_quatXform ( xx + 82 , xx + 653 , xx + 129 ) ; xx [ 45 ] = xx [ 117 ]
* motionData [ 473 ] ; xx [ 47 ] = xx [ 70 ] * motionData [ 473 ] ; xx [ 52 ]
= xx [ 47 ] - xx [ 67 ] ; xx [ 67 ] = xx [ 117 ] * motionData [ 475 ] ; xx [
653 ] = xx [ 45 ] ; xx [ 654 ] = xx [ 52 ] ; xx [ 655 ] = xx [ 67 ] ;
pm_math_cross3 ( xx + 142 , xx + 653 , xx + 656 ) ; xx [ 653 ] = motionData [
475 ] + ( xx [ 45 ] * xx [ 68 ] + xx [ 656 ] ) * xx [ 4 ] + xx [ 162 ] + xx [
19 ] ; xx [ 654 ] = ( xx [ 52 ] * xx [ 68 ] + xx [ 657 ] ) * xx [ 4 ] + xx [
155 ] ; xx [ 655 ] = ( xx [ 67 ] * xx [ 68 ] + xx [ 658 ] ) * xx [ 4 ] + xx [
161 ] - motionData [ 473 ] - xx [ 6 ] ; pm_math_quatXform ( xx + 119 , xx +
653 , xx + 154 ) ; xx [ 653 ] = xx [ 4 ] * ( xx [ 61 ] - xx [ 57 ] ) ; xx [
654 ] = ( xx [ 78 ] + xx [ 77 ] ) * xx [ 4 ] ; xx [ 655 ] = xx [ 5 ] - ( xx [
69 ] + xx [ 44 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 653 , xx + 24 , xx +
656 ) ; pm_math_quatXform ( xx + 82 , xx + 656 , xx + 653 ) ; xx [ 19 ] = xx
[ 124 ] * motionData [ 473 ] ; xx [ 44 ] = xx [ 124 ] * motionData [ 474 ] ;
xx [ 45 ] = xx [ 47 ] - xx [ 65 ] ; xx [ 82 ] = xx [ 19 ] ; xx [ 83 ] = xx [
44 ] ; xx [ 84 ] = xx [ 45 ] ; pm_math_cross3 ( xx + 142 , xx + 82 , xx + 656
) ; xx [ 82 ] = ( xx [ 19 ] * xx [ 68 ] + xx [ 656 ] ) * xx [ 4 ] + xx [ 133
] - motionData [ 474 ] + xx [ 8 ] ; xx [ 83 ] = motionData [ 473 ] + ( xx [
44 ] * xx [ 68 ] + xx [ 657 ] ) * xx [ 4 ] + xx [ 66 ] + xx [ 6 ] ; xx [ 84 ]
= ( xx [ 45 ] * xx [ 68 ] + xx [ 658 ] ) * xx [ 4 ] + xx [ 127 ] ;
pm_math_quatXform ( xx + 119 , xx + 82 , xx + 65 ) ; xx [ 82 ] = motionData [
77 ] ; xx [ 83 ] = motionData [ 78 ] ; xx [ 84 ] = motionData [ 79 ] ; xx [
85 ] = motionData [ 80 ] ; pm_math_quatCompose ( xx + 169 , xx + 82 , xx +
117 ) ; xx [ 68 ] = xx [ 4 ] * ( motionData [ 78 ] * motionData [ 80 ] -
motionData [ 77 ] * motionData [ 79 ] ) ; xx [ 69 ] = ( motionData [ 77 ] *
motionData [ 78 ] + motionData [ 79 ] * motionData [ 80 ] ) * xx [ 4 ] ; xx [
70 ] = xx [ 5 ] - ( motionData [ 78 ] * motionData [ 78 ] + motionData [ 79 ]
* motionData [ 79 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 68 , xx + 24 , xx +
82 ) ; pm_math_quatXform ( xx + 117 , xx + 82 , xx + 24 ) ; xx [ 19 ] = xx [
126 ] * motionData [ 82 ] ; xx [ 44 ] = xx [ 126 ] * motionData [ 81 ] ; xx [
45 ] = xx [ 4 ] * ( xx [ 19 ] * xx [ 126 ] - xx [ 125 ] * xx [ 44 ] ) -
motionData [ 82 ] + xx [ 148 ] ; xx [ 47 ] = motionData [ 81 ] - ( ( xx [ 125
] * xx [ 19 ] + xx [ 44 ] * xx [ 126 ] ) * xx [ 4 ] - xx [ 160 ] ) - xx [ 137
] ; xx [ 19 ] = xx [ 47 ] * motionData [ 220 ] ; xx [ 44 ] = xx [ 45 ] *
motionData [ 220 ] ; xx [ 52 ] = xx [ 47 ] * motionData [ 218 ] - xx [ 45 ] *
motionData [ 219 ] ; xx [ 68 ] = - xx [ 19 ] ; xx [ 69 ] = xx [ 44 ] ; xx [
70 ] = xx [ 52 ] ; pm_math_cross3 ( xx + 173 , xx + 68 , xx + 82 ) ; xx [ 57
] = xx [ 2 ] * state [ 40 ] ; xx [ 61 ] = sin ( xx [ 57 ] ) ; xx [ 68 ] = xx
[ 306 ] * xx [ 61 ] ; xx [ 69 ] = cos ( xx [ 57 ] ) ; xx [ 57 ] = xx [ 306 ]
* xx [ 69 ] ; xx [ 70 ] = xx [ 68 ] - xx [ 57 ] ; xx [ 77 ] = xx [ 331 ] * xx
[ 69 ] ; xx [ 69 ] = xx [ 331 ] * xx [ 61 ] ; xx [ 61 ] = xx [ 77 ] + xx [ 69
] ; xx [ 78 ] = - xx [ 61 ] ; xx [ 85 ] = xx [ 69 ] - xx [ 77 ] ; xx [ 69 ] =
xx [ 68 ] + xx [ 57 ] ; xx [ 57 ] = - xx [ 69 ] ; xx [ 117 ] = xx [ 70 ] ; xx
[ 118 ] = xx [ 78 ] ; xx [ 119 ] = xx [ 85 ] ; xx [ 120 ] = xx [ 57 ] ;
pm_math_quatCompose ( xx + 325 , xx + 117 , xx + 124 ) ; xx [ 68 ] = xx [ 6 ]
* xx [ 127 ] ; xx [ 77 ] = xx [ 8 ] * xx [ 126 ] - xx [ 6 ] * xx [ 125 ] ; xx
[ 117 ] = xx [ 68 ] ; xx [ 118 ] = - ( xx [ 8 ] * xx [ 127 ] ) ; xx [ 119 ] =
xx [ 77 ] ; pm_math_cross3 ( xx + 125 , xx + 117 , xx + 120 ) ; xx [ 111 ] =
5.088251355846174e-12 ; xx [ 117 ] = xx [ 78 ] ; xx [ 118 ] = xx [ 85 ] ; xx
[ 119 ] = xx [ 57 ] ; xx [ 57 ] = 7.483145982728478e-12 ; xx [ 78 ] = xx [ 69
] * xx [ 57 ] ; xx [ 113 ] = xx [ 69 ] * xx [ 111 ] ; xx [ 69 ] = xx [ 61 ] *
xx [ 57 ] + xx [ 111 ] * xx [ 85 ] ; xx [ 142 ] = xx [ 78 ] ; xx [ 143 ] = -
xx [ 113 ] ; xx [ 144 ] = - xx [ 69 ] ; pm_math_cross3 ( xx + 117 , xx + 142
, xx + 160 ) ; xx [ 117 ] = xx [ 111 ] + xx [ 4 ] * ( xx [ 160 ] + xx [ 78 ]
* xx [ 70 ] ) ; xx [ 118 ] = xx [ 57 ] + ( xx [ 161 ] - xx [ 113 ] * xx [ 70
] ) * xx [ 4 ] ; xx [ 119 ] = ( xx [ 162 ] - xx [ 70 ] * xx [ 69 ] ) * xx [ 4
] ; pm_math_quatXform ( xx + 325 , xx + 117 , xx + 142 ) ; xx [ 57 ] = xx [ 2
] * state [ 42 ] ; xx [ 61 ] = cos ( xx [ 57 ] ) ; xx [ 69 ] = sin ( xx [ 57
] ) ; xx [ 57 ] = xx [ 316 ] * xx [ 61 ] + xx [ 330 ] * xx [ 69 ] ; xx [ 70 ]
= xx [ 334 ] * xx [ 69 ] - xx [ 335 ] * xx [ 61 ] ; xx [ 78 ] = xx [ 334 ] *
xx [ 61 ] + xx [ 335 ] * xx [ 69 ] ; xx [ 85 ] = xx [ 316 ] * xx [ 69 ] - xx
[ 330 ] * xx [ 61 ] ; xx [ 169 ] = xx [ 57 ] ; xx [ 170 ] = xx [ 70 ] ; xx [
171 ] = xx [ 78 ] ; xx [ 172 ] = xx [ 85 ] ; xx [ 325 ] = motionData [ 462 ]
; xx [ 326 ] = motionData [ 463 ] ; xx [ 327 ] = motionData [ 464 ] ; xx [
328 ] = motionData [ 465 ] ; pm_math_quatCompose ( xx + 169 , xx + 325 , xx +
656 ) ; xx [ 117 ] = xx [ 4 ] * ( motionData [ 463 ] * motionData [ 465 ] -
motionData [ 462 ] * motionData [ 464 ] ) ; xx [ 118 ] = ( motionData [ 462 ]
* motionData [ 463 ] + motionData [ 464 ] * motionData [ 465 ] ) * xx [ 4 ] ;
xx [ 119 ] = xx [ 5 ] - ( motionData [ 463 ] * motionData [ 463 ] +
motionData [ 464 ] * motionData [ 464 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx +
117 , xx + 208 , xx + 160 ) ; pm_math_quatXform ( xx + 656 , xx + 160 , xx +
117 ) ; xx [ 160 ] = xx [ 70 ] ; xx [ 161 ] = xx [ 78 ] ; xx [ 162 ] = xx [
85 ] ; xx [ 61 ] = xx [ 85 ] * motionData [ 466 ] ; xx [ 69 ] = xx [ 85 ] *
motionData [ 467 ] ; xx [ 111 ] = xx [ 70 ] * motionData [ 466 ] + xx [ 78 ]
* motionData [ 467 ] ; xx [ 169 ] = - xx [ 61 ] ; xx [ 170 ] = - xx [ 69 ] ;
xx [ 171 ] = xx [ 111 ] ; pm_math_cross3 ( xx + 160 , xx + 169 , xx + 172 ) ;
xx [ 113 ] = xx [ 70 ] * xx [ 27 ] ; xx [ 125 ] = xx [ 85 ] * xx [ 27 ] ; xx
[ 126 ] = xx [ 2 ] * state [ 44 ] ; xx [ 2 ] = cos ( xx [ 126 ] ) ; xx [ 132
] = sin ( xx [ 126 ] ) ; xx [ 325 ] = xx [ 2 ] * motionData [ 85 ] - xx [ 132
] * motionData [ 86 ] ; xx [ 326 ] = - ( xx [ 2 ] * motionData [ 84 ] + xx [
132 ] * motionData [ 87 ] ) ; xx [ 327 ] = xx [ 132 ] * motionData [ 84 ] -
xx [ 2 ] * motionData [ 87 ] ; xx [ 328 ] = xx [ 132 ] * motionData [ 85 ] +
xx [ 2 ] * motionData [ 86 ] ; xx [ 656 ] = motionData [ 98 ] ; xx [ 657 ] =
motionData [ 99 ] ; xx [ 658 ] = motionData [ 100 ] ; xx [ 659 ] = motionData
[ 101 ] ; pm_math_quatCompose ( xx + 325 , xx + 656 , xx + 660 ) ; xx [ 160 ]
= xx [ 4 ] * ( motionData [ 99 ] * motionData [ 101 ] - motionData [ 98 ] *
motionData [ 100 ] ) ; xx [ 161 ] = ( motionData [ 98 ] * motionData [ 99 ] +
motionData [ 100 ] * motionData [ 101 ] ) * xx [ 4 ] ; xx [ 162 ] = xx [ 5 ]
- ( motionData [ 99 ] * motionData [ 99 ] + motionData [ 100 ] * motionData [
100 ] ) * xx [ 4 ] ; pm_math_cross3 ( xx + 160 , xx + 208 , xx + 169 ) ;
pm_math_quatXform ( xx + 660 , xx + 169 , xx + 160 ) ; xx [ 5 ] = xx [ 132 ]
* motionData [ 103 ] - xx [ 2 ] * motionData [ 102 ] ; xx [ 126 ] =
3.107391981487723e-12 ; xx [ 133 ] = 9.83617579279345e-12 ; xx [ 137 ] = xx [
126 ] * xx [ 2 ] + xx [ 133 ] * xx [ 132 ] ; xx [ 148 ] = xx [ 4 ] * xx [ 132
] * xx [ 5 ] - ( motionData [ 103 ] - xx [ 4 ] * xx [ 137 ] * xx [ 132 ] ) -
xx [ 133 ] ; xx [ 169 ] = motionData [ 85 ] ; xx [ 170 ] = motionData [ 86 ]
; xx [ 171 ] = motionData [ 87 ] ; xx [ 132 ] = motionData [ 102 ] + xx [ 4 ]
* xx [ 2 ] * xx [ 5 ] + xx [ 4 ] * xx [ 137 ] * xx [ 2 ] - xx [ 126 ] ; xx [
2 ] = xx [ 132 ] * motionData [ 87 ] ; xx [ 5 ] = xx [ 148 ] * motionData [
87 ] ; xx [ 126 ] = xx [ 132 ] * motionData [ 85 ] - xx [ 148 ] * motionData
[ 86 ] ; xx [ 208 ] = - xx [ 2 ] ; xx [ 209 ] = xx [ 5 ] ; xx [ 210 ] = xx [
126 ] ; pm_math_cross3 ( xx + 169 , xx + 208 , xx + 325 ) ; xx [ 656 ] =
motionData [ 441 ] ; xx [ 657 ] = motionData [ 442 ] ; xx [ 658 ] =
motionData [ 443 ] ; xx [ 659 ] = motionData [ 444 ] ; xx [ 133 ] = xx [ 55 ]
* state [ 49 ] - xx [ 56 ] * state [ 46 ] ; xx [ 137 ] = xx [ 55 ] * state [
48 ] + xx [ 56 ] * state [ 47 ] ; xx [ 150 ] = - xx [ 137 ] ; xx [ 169 ] = xx
[ 56 ] * state [ 48 ] - xx [ 55 ] * state [ 47 ] ; xx [ 170 ] = - xx [ 169 ]
; xx [ 171 ] = xx [ 55 ] * state [ 46 ] + xx [ 56 ] * state [ 49 ] ; xx [ 55
] = - xx [ 171 ] ; xx [ 660 ] = xx [ 133 ] ; xx [ 661 ] = xx [ 150 ] ; xx [
662 ] = xx [ 170 ] ; xx [ 663 ] = xx [ 55 ] ; pm_math_quatCompose ( xx + 656
, xx + 660 , xx + 664 ) ; pm_math_quatXform ( xx + 664 , xx + 247 , xx + 208
) ; pm_math_quatXform ( xx + 660 , xx + 99 , xx + 247 ) ; pm_math_quatXform (
xx + 656 , xx + 247 , xx + 99 ) ; pm_math_quatXform ( xx + 664 , xx + 253 ,
xx + 247 ) ; pm_math_quatXform ( xx + 660 , xx + 105 , xx + 253 ) ;
pm_math_quatXform ( xx + 656 , xx + 253 , xx + 105 ) ; xx [ 56 ] = xx [ 191 ]
* xx [ 667 ] ; xx [ 175 ] = xx [ 191 ] * xx [ 665 ] + xx [ 192 ] * xx [ 666 ]
; xx [ 253 ] = - xx [ 56 ] ; xx [ 254 ] = - ( xx [ 192 ] * xx [ 667 ] ) ; xx
[ 255 ] = xx [ 175 ] ; pm_math_cross3 ( xx + 665 , xx + 253 , xx + 660 ) ; xx
[ 253 ] = xx [ 150 ] ; xx [ 254 ] = xx [ 170 ] ; xx [ 255 ] = xx [ 55 ] ; xx
[ 55 ] = xx [ 86 ] * xx [ 171 ] ; xx [ 150 ] = xx [ 112 ] * xx [ 171 ] ; xx [
170 ] = xx [ 86 ] * xx [ 137 ] + xx [ 169 ] * xx [ 112 ] ; xx [ 668 ] = xx [
55 ] ; xx [ 669 ] = xx [ 150 ] ; xx [ 670 ] = - xx [ 170 ] ; pm_math_cross3 (
xx + 253 , xx + 668 , xx + 671 ) ; xx [ 253 ] = xx [ 4 ] * ( xx [ 671 ] + xx
[ 55 ] * xx [ 133 ] ) - xx [ 112 ] ; xx [ 254 ] = xx [ 86 ] + ( xx [ 150 ] *
xx [ 133 ] + xx [ 672 ] ) * xx [ 4 ] ; xx [ 255 ] = ( xx [ 673 ] - xx [ 170 ]
* xx [ 133 ] ) * xx [ 4 ] ; pm_math_quatXform ( xx + 656 , xx + 253 , xx +
169 ) ; J [ 6 ] = xx [ 16 ] + motionData [ 271 ] + ( xx [ 30 ] - xx [ 3 ] *
xx [ 1 ] ) * xx [ 4 ] + xx [ 33 ] ; J [ 7 ] = xx [ 41 ] + xx [ 48 ] + xx [ 4
] * ( xx [ 58 ] - xx [ 34 ] * motionData [ 14 ] ) ; J [ 8 ] = xx [ 93 ] + xx
[ 96 ] ; J [ 9 ] = xx [ 79 ] + xx [ 87 ] ; J [ 10 ] = xx [ 108 ] + xx [ 114 ]
; J [ 11 ] = xx [ 139 ] + xx [ 145 ] ; J [ 12 ] = xx [ 157 ] + xx [ 163 ] ; J
[ 13 ] = xx [ 166 ] + xx [ 134 ] ; J [ 14 ] = xx [ 151 ] + xx [ 149 ] + xx [
4 ] * ( xx [ 180 ] - xx [ 123 ] * motionData [ 217 ] ) ; J [ 15 ] = xx [ 4 ]
* ( xx [ 193 ] - xx [ 177 ] * xx [ 188 ] ) + xx [ 190 ] + xx [ 4 ] * ( xx [
202 ] - xx [ 178 ] * motionData [ 224 ] ) + xx [ 8 ] ; J [ 30 ] = - ( xx [
205 ] + motionData [ 243 ] + ( xx [ 217 ] - xx [ 187 ] * xx [ 186 ] ) * xx [
4 ] + xx [ 4 ] * ( xx [ 201 ] * xx [ 211 ] - xx [ 187 ] * xx [ 212 ] ) ) ; J
[ 31 ] = - ( xx [ 220 ] + xx [ 225 ] + xx [ 4 ] * ( xx [ 232 ] - xx [ 213 ] *
motionData [ 126 ] ) ) ; J [ 32 ] = - ( xx [ 250 ] + xx [ 256 ] ) ; J [ 33 ]
= - ( xx [ 259 ] + xx [ 238 ] ) ; J [ 34 ] = - ( xx [ 4 ] * ( xx [ 265 ] - xx
[ 242 ] * xx [ 196 ] ) + xx [ 235 ] - xx [ 192 ] ) ; J [ 51 ] = xx [ 17 ] + (
xx [ 31 ] - xx [ 3 ] * xx [ 10 ] ) * xx [ 4 ] - ( motionData [ 270 ] - xx [
223 ] ) - xx [ 27 ] ; J [ 52 ] = xx [ 42 ] + xx [ 46 ] + ( xx [ 53 ] *
motionData [ 14 ] + xx [ 59 ] ) * xx [ 4 ] ; J [ 53 ] = xx [ 94 ] + xx [ 97 ]
; J [ 54 ] = xx [ 80 ] + xx [ 88 ] ; J [ 55 ] = xx [ 109 ] + xx [ 115 ] ; J [
56 ] = xx [ 140 ] + xx [ 146 ] ; J [ 57 ] = xx [ 158 ] + xx [ 164 ] ; J [ 58
] = xx [ 167 ] + xx [ 135 ] ; J [ 59 ] = xx [ 152 ] + xx [ 138 ] + ( xx [ 128
] * motionData [ 217 ] + xx [ 181 ] ) * xx [ 4 ] ; J [ 60 ] = ( xx [ 177 ] *
xx [ 189 ] + xx [ 194 ] ) * xx [ 4 ] + xx [ 183 ] + ( xx [ 179 ] * motionData
[ 224 ] + xx [ 203 ] ) * xx [ 4 ] + xx [ 6 ] ; J [ 75 ] = - ( xx [ 206 ] + (
xx [ 218 ] - xx [ 187 ] * xx [ 198 ] ) * xx [ 4 ] - ( motionData [ 242 ] - (
xx [ 212 ] * xx [ 197 ] + xx [ 211 ] * xx [ 199 ] ) * xx [ 4 ] ) - xx [ 27 ]
) ; J [ 76 ] = - ( xx [ 221 ] + xx [ 215 ] + ( xx [ 214 ] * motionData [ 126
] + xx [ 233 ] ) * xx [ 4 ] ) ; J [ 77 ] = - ( xx [ 251 ] + xx [ 257 ] ) ; J
[ 78 ] = - ( xx [ 260 ] + xx [ 239 ] ) ; J [ 79 ] = - ( ( xx [ 266 ] - xx [
192 ] * xx [ 242 ] * xx [ 245 ] ) * xx [ 4 ] + xx [ 236 ] + xx [ 191 ] ) ; J
[ 96 ] = xx [ 18 ] + xx [ 4 ] * ( xx [ 32 ] - xx [ 3 ] * xx [ 23 ] ) + xx [
224 ] ; J [ 97 ] = xx [ 43 ] + ( xx [ 54 ] * motionData [ 14 ] + xx [ 60 ] )
* xx [ 4 ] ; J [ 98 ] = xx [ 95 ] + xx [ 98 ] ; J [ 99 ] = xx [ 81 ] + xx [
89 ] ; J [ 100 ] = xx [ 110 ] + xx [ 116 ] ; J [ 101 ] = xx [ 141 ] + xx [
147 ] ; J [ 102 ] = xx [ 159 ] + xx [ 165 ] ; J [ 103 ] = xx [ 168 ] + xx [
136 ] ; J [ 104 ] = xx [ 153 ] + ( xx [ 176 ] * motionData [ 217 ] + xx [ 182
] ) * xx [ 4 ] ; J [ 105 ] = ( xx [ 177 ] * xx [ 184 ] + xx [ 195 ] ) * xx [
4 ] + ( xx [ 185 ] * motionData [ 224 ] + xx [ 204 ] ) * xx [ 4 ] ; J [ 120 ]
= - ( xx [ 207 ] + xx [ 4 ] * ( xx [ 219 ] - xx [ 187 ] * xx [ 200 ] ) + ( xx
[ 187 ] * xx [ 211 ] + xx [ 201 ] * xx [ 212 ] ) * xx [ 4 ] ) ; J [ 121 ] = -
( xx [ 222 ] + ( xx [ 216 ] * motionData [ 126 ] + xx [ 234 ] ) * xx [ 4 ] )
; J [ 122 ] = - ( xx [ 252 ] + xx [ 258 ] ) ; J [ 123 ] = - ( xx [ 261 ] + xx
[ 240 ] ) ; J [ 124 ] = - ( ( xx [ 242 ] * xx [ 241 ] + xx [ 267 ] ) * xx [ 4
] + xx [ 237 ] ) ; J [ 141 ] = xx [ 226 ] + motionData [ 327 ] + ( xx [ 268 ]
- xx [ 3 ] * xx [ 28 ] ) * xx [ 4 ] + xx [ 33 ] ; J [ 142 ] = xx [ 262 ] + xx
[ 231 ] + xx [ 4 ] * ( xx [ 274 ] - xx [ 230 ] * motionData [ 14 ] ) ; J [
143 ] = xx [ 285 ] + xx [ 291 ] ; J [ 144 ] = xx [ 271 ] + xx [ 277 ] ; J [
145 ] = xx [ 288 ] + xx [ 280 ] ; J [ 146 ] = xx [ 302 ] + xx [ 307 ] ; J [
147 ] = xx [ 313 ] + xx [ 319 ] ; J [ 148 ] = xx [ 310 ] + xx [ 299 ] ; J [
149 ] = xx [ 294 ] + xx [ 297 ] + xx [ 4 ] * ( xx [ 322 ] - xx [ 283 ] *
motionData [ 217 ] ) ; J [ 151 ] = xx [ 4 ] * ( xx [ 343 ] + xx [ 339 ] * xx
[ 318 ] ) + xx [ 346 ] - xx [ 8 ] ; J [ 160 ] = - ( xx [ 349 ] + xx [ 4 ] * (
xx [ 355 ] - xx [ 329 ] * xx [ 317 ] ) - motionData [ 299 ] + xx [ 4 ] * ( xx
[ 352 ] * xx [ 337 ] - xx [ 353 ] * xx [ 317 ] ) ) ; J [ 161 ] = - ( xx [ 360
] + xx [ 366 ] + xx [ 4 ] * ( xx [ 373 ] - xx [ 354 ] * motionData [ 105 ] )
) ; J [ 162 ] = - ( xx [ 387 ] + xx [ 393 ] ) ; J [ 163 ] = - ( xx [ 390 ] +
xx [ 379 ] ) ; J [ 164 ] = - ( xx [ 4 ] * ( xx [ 400 ] - xx [ 383 ] * xx [
382 ] ) + xx [ 376 ] - xx [ 192 ] ) ; J [ 186 ] = xx [ 227 ] + ( xx [ 269 ] -
xx [ 3 ] * xx [ 29 ] ) * xx [ 4 ] - ( motionData [ 326 ] - xx [ 223 ] ) - xx
[ 27 ] ; J [ 187 ] = xx [ 263 ] + xx [ 243 ] + ( xx [ 244 ] * motionData [ 14
] + xx [ 275 ] ) * xx [ 4 ] ; J [ 188 ] = xx [ 286 ] + xx [ 292 ] ; J [ 189 ]
= xx [ 272 ] + xx [ 278 ] ; J [ 190 ] = xx [ 289 ] + xx [ 281 ] ; J [ 191 ] =
xx [ 303 ] + xx [ 308 ] ; J [ 192 ] = xx [ 314 ] + xx [ 320 ] ; J [ 193 ] =
xx [ 311 ] + xx [ 300 ] ; J [ 194 ] = xx [ 295 ] + xx [ 298 ] + ( xx [ 284 ]
* motionData [ 217 ] + xx [ 323 ] ) * xx [ 4 ] ; J [ 196 ] = ( xx [ 344 ] -
xx [ 8 ] * xx [ 339 ] * xx [ 342 ] ) * xx [ 4 ] + xx [ 347 ] - xx [ 6 ] ; J [
205 ] = - ( xx [ 350 ] + motionData [ 298 ] + xx [ 4 ] * ( xx [ 356 ] - xx [
333 ] * xx [ 317 ] ) - ( xx [ 338 ] * xx [ 353 ] + xx [ 336 ] * xx [ 352 ] )
* xx [ 4 ] + xx [ 341 ] ) ; J [ 206 ] = - ( xx [ 361 ] + xx [ 359 ] + ( xx [
358 ] * motionData [ 105 ] + xx [ 374 ] ) * xx [ 4 ] ) ; J [ 207 ] = - ( xx [
388 ] + xx [ 394 ] ) ; J [ 208 ] = - ( xx [ 391 ] + xx [ 380 ] ) ; J [ 209 ]
= - ( ( xx [ 401 ] - xx [ 192 ] * xx [ 383 ] * xx [ 386 ] ) * xx [ 4 ] + xx [
377 ] + xx [ 191 ] ) ; J [ 231 ] = xx [ 228 ] + xx [ 4 ] * ( xx [ 270 ] - xx
[ 229 ] * xx [ 3 ] ) + xx [ 224 ] ; J [ 232 ] = xx [ 264 ] + ( xx [ 246 ] *
motionData [ 14 ] + xx [ 276 ] ) * xx [ 4 ] ; J [ 233 ] = xx [ 287 ] + xx [
293 ] ; J [ 234 ] = xx [ 273 ] + xx [ 279 ] ; J [ 235 ] = xx [ 290 ] + xx [
282 ] ; J [ 236 ] = xx [ 304 ] + xx [ 309 ] ; J [ 237 ] = xx [ 315 ] + xx [
321 ] ; J [ 238 ] = xx [ 312 ] + xx [ 301 ] ; J [ 239 ] = xx [ 296 ] + ( xx [
305 ] * motionData [ 217 ] + xx [ 324 ] ) * xx [ 4 ] ; J [ 241 ] = ( xx [ 339
] * xx [ 332 ] + xx [ 345 ] ) * xx [ 4 ] + xx [ 348 ] ; J [ 250 ] = - ( xx [
351 ] + ( xx [ 340 ] * xx [ 317 ] + xx [ 357 ] ) * xx [ 4 ] + ( xx [ 352 ] *
xx [ 317 ] + xx [ 353 ] * xx [ 337 ] ) * xx [ 4 ] ) ; J [ 251 ] = - ( xx [
362 ] + ( xx [ 363 ] * motionData [ 105 ] + xx [ 375 ] ) * xx [ 4 ] ) ; J [
252 ] = - ( xx [ 389 ] + xx [ 395 ] ) ; J [ 253 ] = - ( xx [ 392 ] + xx [ 381
] ) ; J [ 254 ] = - ( ( xx [ 383 ] * xx [ 396 ] + xx [ 402 ] ) * xx [ 4 ] +
xx [ 378 ] ) ; J [ 276 ] = xx [ 367 ] + motionData [ 383 ] + ( xx [ 403 ] -
xx [ 3 ] * xx [ 364 ] ) * xx [ 4 ] + xx [ 33 ] ; J [ 277 ] = xx [ 397 ] + xx
[ 372 ] + xx [ 4 ] * ( xx [ 410 ] - xx [ 371 ] * motionData [ 14 ] ) ; J [
278 ] = xx [ 421 ] + xx [ 427 ] ; J [ 279 ] = xx [ 407 ] + xx [ 413 ] ; J [
280 ] = xx [ 424 ] + xx [ 416 ] ; J [ 281 ] = xx [ 438 ] + xx [ 443 ] ; J [
282 ] = xx [ 449 ] + xx [ 455 ] ; J [ 283 ] = xx [ 446 ] + xx [ 435 ] ; J [
284 ] = xx [ 430 ] + xx [ 433 ] + xx [ 4 ] * ( xx [ 458 ] - xx [ 419 ] *
motionData [ 217 ] ) ; J [ 287 ] = xx [ 4 ] * ( xx [ 474 ] - xx [ 470 ] * xx
[ 452 ] ) + xx [ 464 ] + xx [ 8 ] ; J [ 305 ] = - ( xx [ 478 ] + motionData [
355 ] + ( xx [ 487 ] - xx [ 461 ] * xx [ 453 ] ) * xx [ 4 ] - xx [ 4 ] * ( xx
[ 477 ] * xx [ 468 ] + xx [ 461 ] * xx [ 471 ] ) ) ; J [ 306 ] = - ( xx [ 484
] + xx [ 493 ] + xx [ 4 ] * ( xx [ 500 ] - xx [ 481 ] * motionData [ 147 ] )
) ; J [ 307 ] = - ( xx [ 514 ] + xx [ 520 ] ) ; J [ 308 ] = - ( xx [ 517 ] +
xx [ 506 ] ) ; J [ 309 ] = - ( xx [ 4 ] * ( xx [ 527 ] - xx [ 510 ] * xx [
509 ] ) + xx [ 503 ] - xx [ 192 ] ) ; J [ 321 ] = xx [ 368 ] + ( xx [ 404 ] -
xx [ 3 ] * xx [ 365 ] ) * xx [ 4 ] - ( motionData [ 382 ] - xx [ 223 ] ) - xx
[ 27 ] ; J [ 322 ] = xx [ 398 ] + xx [ 384 ] + ( xx [ 385 ] * motionData [ 14
] + xx [ 411 ] ) * xx [ 4 ] ; J [ 323 ] = xx [ 422 ] + xx [ 428 ] ; J [ 324 ]
= xx [ 408 ] + xx [ 414 ] ; J [ 325 ] = xx [ 425 ] + xx [ 417 ] ; J [ 326 ] =
xx [ 439 ] + xx [ 444 ] ; J [ 327 ] = xx [ 450 ] + xx [ 456 ] ; J [ 328 ] =
xx [ 447 ] + xx [ 436 ] ; J [ 329 ] = xx [ 431 ] + xx [ 434 ] + ( xx [ 420 ]
* motionData [ 217 ] + xx [ 459 ] ) * xx [ 4 ] ; J [ 332 ] = ( xx [ 8 ] * xx
[ 470 ] * xx [ 473 ] + xx [ 475 ] ) * xx [ 4 ] + xx [ 465 ] + xx [ 6 ] ; J [
350 ] = - ( xx [ 479 ] + ( xx [ 488 ] - xx [ 461 ] * xx [ 462 ] ) * xx [ 4 ]
- ( motionData [ 354 ] - ( xx [ 471 ] * xx [ 469 ] + xx [ 468 ] * xx [ 472 ]
) * xx [ 4 ] ) - xx [ 27 ] ) ; J [ 351 ] = - ( xx [ 485 ] + xx [ 483 ] + ( xx
[ 482 ] * motionData [ 147 ] + xx [ 501 ] ) * xx [ 4 ] ) ; J [ 352 ] = - ( xx
[ 515 ] + xx [ 521 ] ) ; J [ 353 ] = - ( xx [ 518 ] + xx [ 507 ] ) ; J [ 354
] = - ( ( xx [ 528 ] - xx [ 192 ] * xx [ 510 ] * xx [ 513 ] ) * xx [ 4 ] + xx
[ 504 ] + xx [ 191 ] ) ; J [ 366 ] = xx [ 369 ] + xx [ 4 ] * ( xx [ 405 ] -
xx [ 3 ] * xx [ 370 ] ) + xx [ 224 ] ; J [ 367 ] = xx [ 399 ] + ( xx [ 406 ]
* motionData [ 14 ] + xx [ 412 ] ) * xx [ 4 ] ; J [ 368 ] = xx [ 423 ] + xx [
429 ] ; J [ 369 ] = xx [ 409 ] + xx [ 415 ] ; J [ 370 ] = xx [ 426 ] + xx [
418 ] ; J [ 371 ] = xx [ 440 ] + xx [ 445 ] ; J [ 372 ] = xx [ 451 ] + xx [
457 ] ; J [ 373 ] = xx [ 448 ] + xx [ 437 ] ; J [ 374 ] = xx [ 432 ] + ( xx [
441 ] * motionData [ 217 ] + xx [ 460 ] ) * xx [ 4 ] ; J [ 377 ] = ( xx [ 470
] * xx [ 454 ] + xx [ 476 ] ) * xx [ 4 ] + xx [ 466 ] ; J [ 395 ] = - ( xx [
480 ] + xx [ 4 ] * ( xx [ 489 ] - xx [ 461 ] * xx [ 467 ] ) + ( xx [ 477 ] *
xx [ 471 ] - xx [ 461 ] * xx [ 468 ] ) * xx [ 4 ] ) ; J [ 396 ] = - ( xx [
486 ] + ( xx [ 490 ] * motionData [ 147 ] + xx [ 502 ] ) * xx [ 4 ] ) ; J [
397 ] = - ( xx [ 516 ] + xx [ 522 ] ) ; J [ 398 ] = - ( xx [ 519 ] + xx [ 508
] ) ; J [ 399 ] = - ( ( xx [ 510 ] * xx [ 523 ] + xx [ 529 ] ) * xx [ 4 ] +
xx [ 505 ] ) ; J [ 411 ] = xx [ 494 ] + motionData [ 439 ] + ( xx [ 530 ] -
xx [ 3 ] * xx [ 491 ] ) * xx [ 4 ] + xx [ 33 ] ; J [ 412 ] = xx [ 524 ] + xx
[ 499 ] + xx [ 4 ] * ( xx [ 537 ] - xx [ 498 ] * motionData [ 14 ] ) ; J [
413 ] = xx [ 548 ] + xx [ 554 ] ; J [ 414 ] = xx [ 534 ] + xx [ 540 ] ; J [
415 ] = xx [ 551 ] + xx [ 543 ] ; J [ 416 ] = xx [ 565 ] + xx [ 570 ] ; J [
417 ] = xx [ 576 ] + xx [ 582 ] ; J [ 418 ] = xx [ 573 ] + xx [ 562 ] ; J [
419 ] = xx [ 557 ] + xx [ 560 ] + xx [ 4 ] * ( xx [ 585 ] - xx [ 546 ] *
motionData [ 217 ] ) ; J [ 423 ] = xx [ 4 ] * ( xx [ 596 ] - xx [ 592 ] * xx
[ 569 ] ) + xx [ 599 ] + xx [ 8 ] ; J [ 445 ] = - ( xx [ 602 ] + motionData [
411 ] + ( xx [ 463 ] * xx [ 442 ] + xx [ 611 ] ) * xx [ 4 ] + xx [ 4 ] * ( xx
[ 594 ] * xx [ 588 ] + xx [ 463 ] * xx [ 590 ] ) ) ; J [ 446 ] = - ( xx [ 607
] + xx [ 616 ] + xx [ 4 ] * ( xx [ 623 ] - xx [ 593 ] * motionData [ 168 ] )
) ; J [ 447 ] = - ( xx [ 637 ] + xx [ 643 ] ) ; J [ 448 ] = - ( xx [ 640 ] +
xx [ 629 ] ) ; J [ 449 ] = - ( xx [ 4 ] * ( xx [ 650 ] - xx [ 633 ] * xx [
632 ] ) + xx [ 626 ] - xx [ 192 ] ) ; J [ 456 ] = xx [ 495 ] + ( xx [ 531 ] -
xx [ 3 ] * xx [ 492 ] ) * xx [ 4 ] - ( motionData [ 438 ] - xx [ 223 ] ) - xx
[ 27 ] ; J [ 457 ] = xx [ 525 ] + xx [ 511 ] + ( xx [ 512 ] * motionData [ 14
] + xx [ 538 ] ) * xx [ 4 ] ; J [ 458 ] = xx [ 549 ] + xx [ 555 ] ; J [ 459 ]
= xx [ 535 ] + xx [ 541 ] ; J [ 460 ] = xx [ 552 ] + xx [ 544 ] ; J [ 461 ] =
xx [ 566 ] + xx [ 571 ] ; J [ 462 ] = xx [ 577 ] + xx [ 583 ] ; J [ 463 ] =
xx [ 574 ] + xx [ 563 ] ; J [ 464 ] = xx [ 558 ] + xx [ 561 ] + ( xx [ 547 ]
* motionData [ 217 ] + xx [ 586 ] ) * xx [ 4 ] ; J [ 468 ] = ( xx [ 8 ] * xx
[ 592 ] * xx [ 595 ] + xx [ 597 ] ) * xx [ 4 ] + xx [ 600 ] + xx [ 6 ] ; J [
490 ] = - ( xx [ 603 ] + ( xx [ 463 ] * xx [ 579 ] + xx [ 612 ] ) * xx [ 4 ]
- ( motionData [ 410 ] - ( xx [ 590 ] * xx [ 589 ] + xx [ 588 ] * xx [ 591 ]
) * xx [ 4 ] ) - xx [ 27 ] ) ; J [ 491 ] = - ( xx [ 608 ] + xx [ 606 ] + ( xx
[ 605 ] * motionData [ 168 ] + xx [ 624 ] ) * xx [ 4 ] ) ; J [ 492 ] = - ( xx
[ 638 ] + xx [ 644 ] ) ; J [ 493 ] = - ( xx [ 641 ] + xx [ 630 ] ) ; J [ 494
] = - ( ( xx [ 651 ] - xx [ 192 ] * xx [ 633 ] * xx [ 636 ] ) * xx [ 4 ] + xx
[ 627 ] + xx [ 191 ] ) ; J [ 501 ] = xx [ 496 ] + xx [ 4 ] * ( xx [ 532 ] -
xx [ 3 ] * xx [ 497 ] ) + xx [ 224 ] ; J [ 502 ] = xx [ 526 ] + ( xx [ 533 ]
* motionData [ 14 ] + xx [ 539 ] ) * xx [ 4 ] ; J [ 503 ] = xx [ 550 ] + xx [
556 ] ; J [ 504 ] = xx [ 536 ] + xx [ 542 ] ; J [ 505 ] = xx [ 553 ] + xx [
545 ] ; J [ 506 ] = xx [ 567 ] + xx [ 572 ] ; J [ 507 ] = xx [ 578 ] + xx [
584 ] ; J [ 508 ] = xx [ 575 ] + xx [ 564 ] ; J [ 509 ] = xx [ 559 ] + ( xx [
568 ] * motionData [ 217 ] + xx [ 587 ] ) * xx [ 4 ] ; J [ 513 ] = ( xx [ 592
] * xx [ 580 ] + xx [ 598 ] ) * xx [ 4 ] + xx [ 601 ] ; J [ 535 ] = - ( xx [
604 ] + xx [ 4 ] * ( xx [ 613 ] - xx [ 463 ] * xx [ 581 ] ) + ( xx [ 463 ] *
xx [ 588 ] - xx [ 594 ] * xx [ 590 ] ) * xx [ 4 ] ) ; J [ 536 ] = - ( xx [
609 ] + ( xx [ 610 ] * motionData [ 168 ] + xx [ 625 ] ) * xx [ 4 ] ) ; J [
537 ] = - ( xx [ 639 ] + xx [ 645 ] ) ; J [ 538 ] = - ( xx [ 642 ] + xx [ 631
] ) ; J [ 539 ] = - ( ( xx [ 633 ] * xx [ 646 ] + xx [ 652 ] ) * xx [ 4 ] +
xx [ 628 ] ) ; J [ 546 ] = xx [ 12 ] + motionData [ 495 ] + ( xx [ 620 ] - xx
[ 3 ] * xx [ 15 ] ) * xx [ 4 ] + xx [ 33 ] ; J [ 547 ] = xx [ 20 ] + xx [ 11
] + xx [ 4 ] * ( xx [ 617 ] - xx [ 9 ] * motionData [ 14 ] ) ; J [ 548 ] = xx
[ 49 ] + xx [ 102 ] ; J [ 549 ] = xx [ 38 ] + xx [ 74 ] ; J [ 550 ] = xx [ 71
] + xx [ 90 ] ; J [ 551 ] = xx [ 62 ] + xx [ 647 ] ; J [ 552 ] = xx [ 129 ] +
xx [ 154 ] ; J [ 553 ] = xx [ 653 ] + xx [ 65 ] ; J [ 554 ] = xx [ 24 ] + xx
[ 45 ] + xx [ 4 ] * ( xx [ 82 ] - xx [ 19 ] * motionData [ 217 ] ) ; J [ 559
] = xx [ 4 ] * ( xx [ 120 ] + xx [ 124 ] * xx [ 68 ] ) + xx [ 142 ] - xx [ 8
] ; J [ 560 ] = - ( xx [ 117 ] + xx [ 4 ] * ( xx [ 172 ] - xx [ 61 ] * xx [
57 ] ) - motionData [ 467 ] + xx [ 4 ] * ( xx [ 113 ] * xx [ 78 ] - xx [ 125
] * xx [ 57 ] ) ) ; J [ 561 ] = - ( xx [ 160 ] + xx [ 148 ] + xx [ 4 ] * ( xx
[ 325 ] - xx [ 2 ] * motionData [ 84 ] ) ) ; J [ 562 ] = - ( xx [ 208 ] + xx
[ 99 ] ) ; J [ 563 ] = - ( xx [ 247 ] + xx [ 105 ] ) ; J [ 564 ] = - ( xx [ 4
] * ( xx [ 660 ] - xx [ 664 ] * xx [ 56 ] ) + xx [ 169 ] - xx [ 192 ] ) ; J [
591 ] = xx [ 13 ] + ( xx [ 621 ] - xx [ 3 ] * xx [ 614 ] ) * xx [ 4 ] - (
motionData [ 494 ] - xx [ 223 ] ) - xx [ 27 ] ; J [ 592 ] = xx [ 21 ] + xx [
36 ] + ( xx [ 35 ] * motionData [ 14 ] + xx [ 618 ] ) * xx [ 4 ] ; J [ 593 ]
= xx [ 50 ] + xx [ 103 ] ; J [ 594 ] = xx [ 39 ] + xx [ 75 ] ; J [ 595 ] = xx
[ 72 ] + xx [ 91 ] ; J [ 596 ] = xx [ 63 ] + xx [ 648 ] ; J [ 597 ] = xx [
130 ] + xx [ 155 ] ; J [ 598 ] = xx [ 654 ] + xx [ 66 ] ; J [ 599 ] = xx [ 25
] + xx [ 47 ] + ( xx [ 44 ] * motionData [ 217 ] + xx [ 83 ] ) * xx [ 4 ] ; J
[ 604 ] = ( xx [ 121 ] - xx [ 8 ] * xx [ 124 ] * xx [ 127 ] ) * xx [ 4 ] + xx
[ 143 ] - xx [ 6 ] ; J [ 605 ] = - ( xx [ 118 ] + motionData [ 466 ] + xx [ 4
] * ( xx [ 173 ] - xx [ 69 ] * xx [ 57 ] ) - ( xx [ 85 ] * xx [ 125 ] + xx [
70 ] * xx [ 113 ] ) * xx [ 4 ] + xx [ 27 ] ) ; J [ 606 ] = - ( xx [ 161 ] +
xx [ 132 ] + ( xx [ 5 ] * motionData [ 84 ] + xx [ 326 ] ) * xx [ 4 ] ) ; J [
607 ] = - ( xx [ 209 ] + xx [ 100 ] ) ; J [ 608 ] = - ( xx [ 248 ] + xx [ 106
] ) ; J [ 609 ] = - ( ( xx [ 661 ] - xx [ 192 ] * xx [ 664 ] * xx [ 667 ] ) *
xx [ 4 ] + xx [ 170 ] + xx [ 191 ] ) ; J [ 636 ] = xx [ 14 ] + xx [ 4 ] * (
xx [ 622 ] - xx [ 7 ] * xx [ 3 ] ) + xx [ 224 ] ; J [ 637 ] = xx [ 22 ] + (
xx [ 37 ] * motionData [ 14 ] + xx [ 619 ] ) * xx [ 4 ] ; J [ 638 ] = xx [ 51
] + xx [ 104 ] ; J [ 639 ] = xx [ 40 ] + xx [ 76 ] ; J [ 640 ] = xx [ 73 ] +
xx [ 92 ] ; J [ 641 ] = xx [ 64 ] + xx [ 649 ] ; J [ 642 ] = xx [ 131 ] + xx
[ 156 ] ; J [ 643 ] = xx [ 655 ] + xx [ 67 ] ; J [ 644 ] = xx [ 26 ] + ( xx [
52 ] * motionData [ 217 ] + xx [ 84 ] ) * xx [ 4 ] ; J [ 649 ] = ( xx [ 124 ]
* xx [ 77 ] + xx [ 122 ] ) * xx [ 4 ] + xx [ 144 ] ; J [ 650 ] = - ( xx [ 119
] + ( xx [ 111 ] * xx [ 57 ] + xx [ 174 ] ) * xx [ 4 ] + ( xx [ 113 ] * xx [
57 ] + xx [ 125 ] * xx [ 78 ] ) * xx [ 4 ] ) ; J [ 651 ] = - ( xx [ 162 ] + (
xx [ 126 ] * motionData [ 84 ] + xx [ 327 ] ) * xx [ 4 ] ) ; J [ 652 ] = - (
xx [ 210 ] + xx [ 101 ] ) ; J [ 653 ] = - ( xx [ 249 ] + xx [ 107 ] ) ; J [
654 ] = - ( ( xx [ 664 ] * xx [ 175 ] + xx [ 662 ] ) * xx [ 4 ] + xx [ 171 ]
) ; return 15 ; } static int isInKinematicSingularity_0 ( const double * rtdv
, const double * motionData ) { ( void ) rtdv ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_1 ( const double * rtdv , const
double * motionData ) { ( void ) rtdv ; ( void ) motionData ; return 0 ; }
static int isInKinematicSingularity_2 ( const double * rtdv , const double *
motionData ) { ( void ) rtdv ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_3 ( const double * rtdv , const double * motionData
) { ( void ) rtdv ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_4 ( const double * rtdv , const double * motionData
) { ( void ) rtdv ; ( void ) motionData ; return 0 ; } int
PlatformAssem_f0ca4364_1_isInKinematicSingularity ( const void * mech , const
double * rtdv , size_t constraintIdx , const double * motionData ) { ( void )
mech ; ( void ) rtdv ; ( void ) motionData ; switch ( constraintIdx ) { case
0 : return isInKinematicSingularity_0 ( rtdv , motionData ) ; case 1 : return
isInKinematicSingularity_1 ( rtdv , motionData ) ; case 2 : return
isInKinematicSingularity_2 ( rtdv , motionData ) ; case 3 : return
isInKinematicSingularity_3 ( rtdv , motionData ) ; case 4 : return
isInKinematicSingularity_4 ( rtdv , motionData ) ; } return 0 ; }
PmfMessageId PlatformAssem_f0ca4364_1_convertStateVector ( const void *
asmMech , const double * rtdv , const void * simMech , const double *
asmState , double * simState , void * neDiagMgr0 ) { NeuDiagnosticManager *
neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; double xx [ 60 ] ; ( void
) asmMech ; ( void ) rtdv ; ( void ) simMech ; ( void ) neDiagMgr ; xx [ 0 ]
= 3.980251340548381e-7 ; xx [ 1 ] = 0.7058357201813958 ; xx [ 2 ] = 0.5 ; xx
[ 3 ] = xx [ 2 ] * asmState [ 42 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] =
0.7058407546227096 ; xx [ 6 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 2 ] * asmState [ 44 ] ; xx [ 8 ]
= cos ( xx [ 7 ] ) ; xx [ 9 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 1 ] * xx [
6 ] + xx [ 5 ] * xx [ 4 ] ; xx [ 1 ] = 0.04233709306330295 ; xx [ 5 ] =
0.04233598682685397 ; xx [ 10 ] = xx [ 1 ] * xx [ 6 ] + xx [ 5 ] * xx [ 4 ] ;
xx [ 11 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 12 ] = xx [ 3 ]
* xx [ 8 ] - xx [ 9 ] * xx [ 7 ] ; xx [ 13 ] = - ( xx [ 8 ] * xx [ 10 ] + xx
[ 11 ] * xx [ 9 ] ) ; xx [ 14 ] = xx [ 9 ] * xx [ 10 ] - xx [ 11 ] * xx [ 8 ]
; xx [ 15 ] = xx [ 3 ] * xx [ 9 ] + xx [ 8 ] * xx [ 7 ] ; xx [ 1 ] =
3.980251324392935e-7 ; xx [ 4 ] = 0.999999999999921 ; xx [ 16 ] = xx [ 1 ] *
asmState [ 49 ] - xx [ 4 ] * asmState [ 46 ] ; xx [ 17 ] = - ( xx [ 1 ] *
asmState [ 48 ] + xx [ 4 ] * asmState [ 47 ] ) ; xx [ 18 ] = - ( xx [ 4 ] *
asmState [ 48 ] - xx [ 1 ] * asmState [ 47 ] ) ; xx [ 19 ] = - ( xx [ 1 ] *
asmState [ 46 ] + xx [ 4 ] * asmState [ 49 ] ) ; pm_math_quatCompose ( xx +
12 , xx + 16 , xx + 20 ) ; xx [ 5 ] = xx [ 2 ] * asmState [ 30 ] ; xx [ 6 ] =
cos ( xx [ 5 ] ) ; xx [ 12 ] = xx [ 2 ] * asmState [ 14 ] ; xx [ 13 ] = cos (
xx [ 12 ] ) ; xx [ 14 ] = 0.5901074779979933 ; xx [ 15 ] = xx [ 2 ] *
asmState [ 12 ] ; xx [ 24 ] = cos ( xx [ 15 ] ) ; xx [ 25 ] =
0.5901036711621462 ; xx [ 26 ] = sin ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 14 ] *
xx [ 24 ] + xx [ 25 ] * xx [ 26 ] ; xx [ 27 ] = xx [ 25 ] * xx [ 24 ] - xx [
14 ] * xx [ 26 ] ; xx [ 14 ] = sin ( xx [ 12 ] ) ; xx [ 12 ] =
0.3895853754265615 ; xx [ 25 ] = 0.389581900177037 ; xx [ 28 ] = xx [ 12 ] *
xx [ 24 ] - xx [ 25 ] * xx [ 26 ] ; xx [ 29 ] = xx [ 25 ] * xx [ 24 ] + xx [
12 ] * xx [ 26 ] ; xx [ 30 ] = - ( xx [ 13 ] * xx [ 15 ] + xx [ 27 ] * xx [
14 ] ) ; xx [ 31 ] = - ( xx [ 28 ] * xx [ 13 ] - xx [ 14 ] * xx [ 29 ] ) ; xx
[ 32 ] = xx [ 28 ] * xx [ 14 ] + xx [ 13 ] * xx [ 29 ] ; xx [ 33 ] = xx [ 27
] * xx [ 13 ] - xx [ 14 ] * xx [ 15 ] ; xx [ 34 ] = xx [ 1 ] * asmState [ 19
] - xx [ 4 ] * asmState [ 16 ] ; xx [ 35 ] = - ( xx [ 1 ] * asmState [ 18 ] +
xx [ 4 ] * asmState [ 17 ] ) ; xx [ 36 ] = - ( xx [ 4 ] * asmState [ 18 ] -
xx [ 1 ] * asmState [ 17 ] ) ; xx [ 37 ] = - ( xx [ 1 ] * asmState [ 16 ] +
xx [ 4 ] * asmState [ 19 ] ) ; pm_math_quatCompose ( xx + 30 , xx + 34 , xx +
38 ) ; xx [ 30 ] = xx [ 4 ] * asmState [ 26 ] - xx [ 0 ] * asmState [ 23 ] ;
xx [ 31 ] = xx [ 4 ] * asmState [ 25 ] - xx [ 0 ] * asmState [ 24 ] ; xx [ 32
] = - ( xx [ 0 ] * asmState [ 25 ] + xx [ 4 ] * asmState [ 24 ] ) ; xx [ 33 ]
= - ( xx [ 0 ] * asmState [ 26 ] + xx [ 4 ] * asmState [ 23 ] ) ;
pm_math_quatCompose ( xx + 38 , xx + 30 , xx + 42 ) ; xx [ 12 ] = sin ( xx [
5 ] ) ; xx [ 38 ] = xx [ 6 ] * xx [ 42 ] - xx [ 45 ] * xx [ 12 ] ; xx [ 39 ]
= xx [ 6 ] * xx [ 43 ] + xx [ 44 ] * xx [ 12 ] ; xx [ 40 ] = xx [ 6 ] * xx [
44 ] - xx [ 43 ] * xx [ 12 ] ; xx [ 41 ] = xx [ 42 ] * xx [ 12 ] + xx [ 6 ] *
xx [ 45 ] ; xx [ 5 ] = 0.6123724356957949 ; xx [ 24 ] = xx [ 2 ] * asmState [
40 ] ; xx [ 25 ] = sin ( xx [ 24 ] ) ; xx [ 26 ] = xx [ 5 ] * xx [ 25 ] ; xx
[ 42 ] = cos ( xx [ 24 ] ) ; xx [ 24 ] = xx [ 5 ] * xx [ 42 ] ; xx [ 5 ] =
0.3535533905932732 ; xx [ 43 ] = xx [ 5 ] * xx [ 42 ] ; xx [ 42 ] = xx [ 5 ]
* xx [ 25 ] ; xx [ 44 ] = xx [ 26 ] - xx [ 24 ] ; xx [ 45 ] = - ( xx [ 43 ] +
xx [ 42 ] ) ; xx [ 46 ] = xx [ 42 ] - xx [ 43 ] ; xx [ 47 ] = - ( xx [ 26 ] +
xx [ 24 ] ) ; pm_math_quatCompose ( xx + 38 , xx + 44 , xx + 48 ) ;
pm_math_quatInverseCompose ( xx + 20 , xx + 48 , xx + 38 ) ; xx [ 20 ] = xx [
28 ] ; xx [ 21 ] = - xx [ 15 ] ; xx [ 22 ] = xx [ 27 ] ; xx [ 23 ] = - xx [
29 ] ; xx [ 5 ] = 0.9982060081755033 ; xx [ 15 ] = xx [ 2 ] * asmState [ 6 ]
; xx [ 24 ] = cos ( xx [ 15 ] ) ; xx [ 25 ] = 7.822272946646824e-7 ; xx [ 26
] = sin ( xx [ 15 ] ) ; xx [ 15 ] = 0.05987290897428056 ; xx [ 27 ] =
3.559887592452546e-6 ; xx [ 48 ] = - ( xx [ 5 ] * xx [ 24 ] + xx [ 25 ] * xx
[ 26 ] ) ; xx [ 49 ] = xx [ 25 ] * xx [ 24 ] - xx [ 5 ] * xx [ 26 ] ; xx [ 50
] = - ( xx [ 15 ] * xx [ 24 ] + xx [ 27 ] * xx [ 26 ] ) ; xx [ 51 ] = xx [ 27
] * xx [ 24 ] - xx [ 15 ] * xx [ 26 ] ; xx [ 5 ] = xx [ 2 ] * asmState [ 7 ]
; xx [ 15 ] = 7.200670813652432e-6 ; xx [ 24 ] = sin ( xx [ 5 ] ) ; xx [ 25 ]
= 0.9999999999734306 ; xx [ 26 ] = 1.135366319023148e-6 ; xx [ 52 ] = cos (
xx [ 5 ] ) ; xx [ 53 ] = - ( xx [ 15 ] * xx [ 24 ] ) ; xx [ 54 ] = xx [ 25 ]
* xx [ 24 ] ; xx [ 55 ] = xx [ 26 ] * xx [ 24 ] ; pm_math_quatCompose ( xx +
48 , xx + 52 , xx + 56 ) ; xx [ 5 ] = xx [ 2 ] * asmState [ 8 ] ; xx [ 2 ] =
0.1195309949245745 ; xx [ 24 ] = sin ( xx [ 5 ] ) ; xx [ 27 ] =
1.987929622149476e-6 ; xx [ 28 ] = 0.9928304695406913 ; xx [ 48 ] = cos ( xx
[ 5 ] ) ; xx [ 49 ] = - ( xx [ 2 ] * xx [ 24 ] ) ; xx [ 50 ] = - ( xx [ 27 ]
* xx [ 24 ] ) ; xx [ 51 ] = xx [ 28 ] * xx [ 24 ] ; pm_math_quatCompose ( xx
+ 56 , xx + 48 , xx + 52 ) ; xx [ 5 ] = 2.0 ; xx [ 56 ] = - xx [ 15 ] ; xx [
57 ] = xx [ 25 ] ; xx [ 58 ] = xx [ 26 ] ; pm_math_quatInverseXform ( xx + 48
, xx + 56 , xx + 24 ) ; xx [ 48 ] = ( 1.0 - ( xx [ 54 ] * xx [ 54 ] + xx [ 55
] * xx [ 55 ] ) * xx [ 5 ] ) * asmState [ 9 ] + xx [ 24 ] * asmState [ 10 ] -
xx [ 2 ] * asmState [ 11 ] ; xx [ 49 ] = xx [ 5 ] * ( xx [ 53 ] * xx [ 54 ] -
xx [ 52 ] * xx [ 55 ] ) * asmState [ 9 ] + xx [ 25 ] * asmState [ 10 ] - xx [
27 ] * asmState [ 11 ] ; xx [ 50 ] = xx [ 5 ] * ( xx [ 52 ] * xx [ 54 ] + xx
[ 53 ] * xx [ 55 ] ) * asmState [ 9 ] + xx [ 26 ] * asmState [ 10 ] + xx [ 28
] * asmState [ 11 ] ; pm_math_quatInverseXform ( xx + 20 , xx + 48 , xx + 24
) ; xx [ 2 ] = xx [ 13 ] * xx [ 25 ] + xx [ 24 ] * xx [ 14 ] ; xx [ 15 ] = xx
[ 26 ] - asmState [ 13 ] ; xx [ 20 ] = xx [ 24 ] - xx [ 5 ] * xx [ 2 ] * xx [
14 ] ; xx [ 21 ] = xx [ 25 ] - xx [ 5 ] * xx [ 2 ] * xx [ 13 ] ; xx [ 22 ] =
xx [ 15 ] - ( xx [ 13 ] * xx [ 13 ] * xx [ 15 ] + xx [ 14 ] * xx [ 15 ] * xx
[ 14 ] ) * xx [ 5 ] + asmState [ 15 ] ; pm_math_quatInverseXform ( xx + 34 ,
xx + 20 , xx + 13 ) ; xx [ 2 ] = xx [ 1 ] * asmState [ 20 ] ; xx [ 20 ] = xx
[ 1 ] * asmState [ 21 ] ; xx [ 21 ] = xx [ 13 ] + asmState [ 20 ] - ( xx [ 1
] * xx [ 2 ] - xx [ 4 ] * xx [ 20 ] ) * xx [ 5 ] ; xx [ 22 ] = xx [ 14 ] +
asmState [ 21 ] - xx [ 5 ] * ( xx [ 4 ] * xx [ 2 ] + xx [ 1 ] * xx [ 20 ] ) ;
xx [ 23 ] = xx [ 15 ] + asmState [ 22 ] ; pm_math_quatInverseXform ( xx + 30
, xx + 21 , xx + 13 ) ; xx [ 2 ] = xx [ 13 ] + asmState [ 27 ] ; xx [ 20 ] =
xx [ 14 ] + asmState [ 28 ] ; xx [ 21 ] = xx [ 20 ] * xx [ 12 ] ; xx [ 22 ] =
xx [ 2 ] * xx [ 12 ] ; xx [ 23 ] = xx [ 2 ] + xx [ 5 ] * ( xx [ 6 ] * xx [ 21
] - xx [ 22 ] * xx [ 12 ] ) ; xx [ 24 ] = xx [ 20 ] - ( xx [ 6 ] * xx [ 22 ]
+ xx [ 21 ] * xx [ 12 ] ) * xx [ 5 ] ; xx [ 25 ] = xx [ 15 ] + asmState [ 29
] + asmState [ 31 ] ; pm_math_quatInverseXform ( xx + 44 , xx + 23 , xx + 12
) ; xx [ 20 ] = xx [ 10 ] ; xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 7 ] ; xx
[ 23 ] = xx [ 11 ] ; pm_math_quatInverseXform ( xx + 20 , xx + 48 , xx + 24 )
; xx [ 2 ] = xx [ 8 ] * xx [ 25 ] + xx [ 24 ] * xx [ 9 ] ; xx [ 3 ] = xx [ 26
] + asmState [ 43 ] ; xx [ 20 ] = xx [ 24 ] - xx [ 5 ] * xx [ 2 ] * xx [ 9 ]
; xx [ 21 ] = xx [ 25 ] - xx [ 5 ] * xx [ 2 ] * xx [ 8 ] ; xx [ 22 ] = xx [ 3
] - ( xx [ 8 ] * xx [ 3 ] * xx [ 8 ] + xx [ 3 ] * xx [ 9 ] * xx [ 9 ] ) * xx
[ 5 ] + asmState [ 45 ] ; pm_math_quatInverseXform ( xx + 16 , xx + 20 , xx +
6 ) ; xx [ 2 ] = xx [ 1 ] * asmState [ 50 ] ; xx [ 3 ] = xx [ 1 ] * asmState
[ 51 ] ; xx [ 9 ] = xx [ 6 ] + asmState [ 50 ] - ( xx [ 1 ] * xx [ 2 ] - xx [
4 ] * xx [ 3 ] ) * xx [ 5 ] ; xx [ 10 ] = xx [ 7 ] + asmState [ 51 ] - xx [ 5
] * ( xx [ 4 ] * xx [ 2 ] + xx [ 1 ] * xx [ 3 ] ) ; xx [ 11 ] = xx [ 8 ] +
asmState [ 52 ] ; pm_math_quatInverseXform ( xx + 38 , xx + 9 , xx + 1 ) ;
simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ; simState
[ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState [ 4 ] =
asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] = asmState
[ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState [ 8 ] ;
simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 42 ] ; simState [ 24 ] = asmState [ 43 ] ;
simState [ 25 ] = asmState [ 44 ] ; simState [ 26 ] = asmState [ 45 ] ;
simState [ 27 ] = asmState [ 46 ] ; simState [ 28 ] = asmState [ 47 ] ;
simState [ 29 ] = asmState [ 48 ] ; simState [ 30 ] = asmState [ 49 ] ;
simState [ 31 ] = asmState [ 50 ] ; simState [ 32 ] = asmState [ 51 ] ;
simState [ 33 ] = asmState [ 52 ] ; simState [ 34 ] = - ( xx [ 0 ] * xx [ 38
] + xx [ 4 ] * xx [ 41 ] ) ; simState [ 35 ] = - ( xx [ 0 ] * xx [ 39 ] + xx
[ 4 ] * xx [ 40 ] ) ; simState [ 36 ] = xx [ 4 ] * xx [ 39 ] - xx [ 0 ] * xx
[ 40 ] ; simState [ 37 ] = xx [ 4 ] * xx [ 38 ] - xx [ 0 ] * xx [ 41 ] ;
simState [ 38 ] = xx [ 12 ] - xx [ 1 ] ; simState [ 39 ] = xx [ 13 ] - xx [ 2
] ; simState [ 40 ] = xx [ 14 ] + asmState [ 41 ] - xx [ 3 ] ; simState [ 41
] = asmState [ 40 ] ; simState [ 42 ] = asmState [ 41 ] ; simState [ 43 ] =
asmState [ 32 ] ; simState [ 44 ] = asmState [ 33 ] ; simState [ 45 ] =
asmState [ 34 ] ; simState [ 46 ] = asmState [ 35 ] ; simState [ 47 ] =
asmState [ 36 ] ; simState [ 48 ] = asmState [ 37 ] ; simState [ 49 ] =
asmState [ 38 ] ; simState [ 50 ] = asmState [ 39 ] ; simState [ 51 ] =
asmState [ 30 ] ; simState [ 52 ] = asmState [ 31 ] ; simState [ 53 ] =
asmState [ 53 ] ; simState [ 54 ] = asmState [ 54 ] ; simState [ 55 ] =
asmState [ 55 ] ; simState [ 56 ] = asmState [ 56 ] ; simState [ 57 ] =
asmState [ 57 ] ; simState [ 58 ] = asmState [ 58 ] ; simState [ 59 ] =
asmState [ 59 ] ; simState [ 60 ] = asmState [ 60 ] ; simState [ 61 ] =
asmState [ 61 ] ; simState [ 62 ] = asmState [ 62 ] ; simState [ 63 ] =
asmState [ 63 ] ; simState [ 64 ] = asmState [ 64 ] ; simState [ 65 ] =
asmState [ 65 ] ; simState [ 66 ] = asmState [ 66 ] ; simState [ 67 ] =
asmState [ 67 ] ; simState [ 68 ] = asmState [ 68 ] ; simState [ 69 ] =
asmState [ 69 ] ; simState [ 70 ] = asmState [ 70 ] ; simState [ 71 ] =
asmState [ 71 ] ; simState [ 72 ] = asmState [ 72 ] ; simState [ 73 ] =
asmState [ 73 ] ; simState [ 74 ] = asmState [ 74 ] ; simState [ 75 ] =
asmState [ 75 ] ; simState [ 76 ] = asmState [ 76 ] ; simState [ 77 ] =
asmState [ 77 ] ; simState [ 78 ] = asmState [ 78 ] ; simState [ 79 ] =
asmState [ 79 ] ; simState [ 80 ] = asmState [ 80 ] ; simState [ 81 ] =
asmState [ 81 ] ; simState [ 82 ] = asmState [ 82 ] ; simState [ 83 ] =
asmState [ 83 ] ; simState [ 84 ] = asmState [ 84 ] ; simState [ 85 ] =
asmState [ 85 ] ; simState [ 86 ] = asmState [ 86 ] ; simState [ 87 ] =
asmState [ 87 ] ; simState [ 88 ] = asmState [ 88 ] ; simState [ 89 ] =
asmState [ 89 ] ; simState [ 90 ] = asmState [ 90 ] ; simState [ 91 ] =
asmState [ 91 ] ; simState [ 92 ] = asmState [ 92 ] ; simState [ 93 ] =
asmState [ 93 ] ; simState [ 94 ] = asmState [ 94 ] ; simState [ 95 ] =
asmState [ 95 ] ; simState [ 96 ] = asmState [ 96 ] ; return NULL ; } void
PlatformAssem_f0ca4364_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) discreteState
; fullState [ 0 ] = u [ 0 ] ; fullState [ 1 ] = u [ 1 ] ; fullState [ 2 ] = u
[ 2 ] ; fullState [ 3 ] = uDot [ 0 ] ; fullState [ 4 ] = uDot [ 1 ] ;
fullState [ 5 ] = uDot [ 2 ] ; fullState [ 6 ] = u [ 3 ] ; fullState [ 7 ] =
u [ 4 ] ; fullState [ 8 ] = u [ 5 ] ; fullState [ 9 ] = uDot [ 3 ] ;
fullState [ 10 ] = uDot [ 4 ] ; fullState [ 11 ] = uDot [ 5 ] ; fullState [
12 ] = u [ 7 ] ; fullState [ 13 ] = uDot [ 7 ] ; fullState [ 14 ] =
solverState [ 0 ] ; fullState [ 15 ] = solverState [ 1 ] ; fullState [ 16 ] =
solverState [ 2 ] ; fullState [ 17 ] = solverState [ 3 ] ; fullState [ 18 ] =
solverState [ 4 ] ; fullState [ 19 ] = solverState [ 5 ] ; fullState [ 20 ] =
solverState [ 6 ] ; fullState [ 21 ] = solverState [ 7 ] ; fullState [ 22 ] =
solverState [ 8 ] ; fullState [ 23 ] = u [ 6 ] ; fullState [ 24 ] = uDot [ 6
] ; fullState [ 25 ] = solverState [ 9 ] ; fullState [ 26 ] = solverState [
10 ] ; fullState [ 27 ] = solverState [ 11 ] ; fullState [ 28 ] = solverState
[ 12 ] ; fullState [ 29 ] = solverState [ 13 ] ; fullState [ 30 ] =
solverState [ 14 ] ; fullState [ 31 ] = solverState [ 15 ] ; fullState [ 32 ]
= solverState [ 16 ] ; fullState [ 33 ] = solverState [ 17 ] ; fullState [ 34
] = solverState [ 18 ] ; fullState [ 35 ] = solverState [ 19 ] ; fullState [
36 ] = solverState [ 20 ] ; fullState [ 37 ] = solverState [ 21 ] ; fullState
[ 38 ] = solverState [ 22 ] ; fullState [ 39 ] = solverState [ 23 ] ;
fullState [ 40 ] = solverState [ 24 ] ; fullState [ 41 ] = solverState [ 25 ]
; fullState [ 42 ] = solverState [ 26 ] ; fullState [ 43 ] = solverState [ 27
] ; fullState [ 44 ] = solverState [ 28 ] ; fullState [ 45 ] = solverState [
29 ] ; fullState [ 46 ] = solverState [ 30 ] ; fullState [ 47 ] = solverState
[ 31 ] ; fullState [ 48 ] = solverState [ 32 ] ; fullState [ 49 ] =
solverState [ 33 ] ; fullState [ 50 ] = solverState [ 34 ] ; fullState [ 51 ]
= solverState [ 35 ] ; fullState [ 52 ] = solverState [ 36 ] ; fullState [ 53
] = u [ 11 ] ; fullState [ 54 ] = uDot [ 11 ] ; fullState [ 55 ] =
solverState [ 37 ] ; fullState [ 56 ] = solverState [ 38 ] ; fullState [ 57 ]
= solverState [ 39 ] ; fullState [ 58 ] = solverState [ 40 ] ; fullState [ 59
] = solverState [ 41 ] ; fullState [ 60 ] = solverState [ 42 ] ; fullState [
61 ] = solverState [ 43 ] ; fullState [ 62 ] = solverState [ 44 ] ; fullState
[ 63 ] = solverState [ 45 ] ; fullState [ 64 ] = u [ 8 ] ; fullState [ 65 ] =
uDot [ 8 ] ; fullState [ 66 ] = solverState [ 46 ] ; fullState [ 67 ] =
solverState [ 47 ] ; fullState [ 68 ] = solverState [ 48 ] ; fullState [ 69 ]
= solverState [ 49 ] ; fullState [ 70 ] = solverState [ 50 ] ; fullState [ 71
] = solverState [ 51 ] ; fullState [ 72 ] = solverState [ 52 ] ; fullState [
73 ] = solverState [ 53 ] ; fullState [ 74 ] = solverState [ 54 ] ; fullState
[ 75 ] = u [ 9 ] ; fullState [ 76 ] = uDot [ 9 ] ; fullState [ 77 ] =
solverState [ 55 ] ; fullState [ 78 ] = solverState [ 56 ] ; fullState [ 79 ]
= solverState [ 57 ] ; fullState [ 80 ] = solverState [ 58 ] ; fullState [ 81
] = solverState [ 59 ] ; fullState [ 82 ] = solverState [ 60 ] ; fullState [
83 ] = solverState [ 61 ] ; fullState [ 84 ] = solverState [ 62 ] ; fullState
[ 85 ] = solverState [ 63 ] ; fullState [ 86 ] = u [ 10 ] ; fullState [ 87 ]
= uDot [ 10 ] ; fullState [ 88 ] = solverState [ 64 ] ; fullState [ 89 ] =
solverState [ 65 ] ; fullState [ 90 ] = solverState [ 66 ] ; fullState [ 91 ]
= solverState [ 67 ] ; fullState [ 92 ] = solverState [ 68 ] ; fullState [ 93
] = solverState [ 69 ] ; fullState [ 94 ] = solverState [ 70 ] ; fullState [
95 ] = solverState [ 71 ] ; fullState [ 96 ] = solverState [ 72 ] ; } void
PlatformAssem_f0ca4364_1_extractSolverStateVector ( const void * mech , const
double * fullState , double * solverState ) { ( void ) mech ; solverState [ 0
] = fullState [ 14 ] ; solverState [ 1 ] = fullState [ 15 ] ; solverState [ 2
] = fullState [ 16 ] ; solverState [ 3 ] = fullState [ 17 ] ; solverState [ 4
] = fullState [ 18 ] ; solverState [ 5 ] = fullState [ 19 ] ; solverState [ 6
] = fullState [ 20 ] ; solverState [ 7 ] = fullState [ 21 ] ; solverState [ 8
] = fullState [ 22 ] ; solverState [ 9 ] = fullState [ 25 ] ; solverState [
10 ] = fullState [ 26 ] ; solverState [ 11 ] = fullState [ 27 ] ; solverState
[ 12 ] = fullState [ 28 ] ; solverState [ 13 ] = fullState [ 29 ] ;
solverState [ 14 ] = fullState [ 30 ] ; solverState [ 15 ] = fullState [ 31 ]
; solverState [ 16 ] = fullState [ 32 ] ; solverState [ 17 ] = fullState [ 33
] ; solverState [ 18 ] = fullState [ 34 ] ; solverState [ 19 ] = fullState [
35 ] ; solverState [ 20 ] = fullState [ 36 ] ; solverState [ 21 ] = fullState
[ 37 ] ; solverState [ 22 ] = fullState [ 38 ] ; solverState [ 23 ] =
fullState [ 39 ] ; solverState [ 24 ] = fullState [ 40 ] ; solverState [ 25 ]
= fullState [ 41 ] ; solverState [ 26 ] = fullState [ 42 ] ; solverState [ 27
] = fullState [ 43 ] ; solverState [ 28 ] = fullState [ 44 ] ; solverState [
29 ] = fullState [ 45 ] ; solverState [ 30 ] = fullState [ 46 ] ; solverState
[ 31 ] = fullState [ 47 ] ; solverState [ 32 ] = fullState [ 48 ] ;
solverState [ 33 ] = fullState [ 49 ] ; solverState [ 34 ] = fullState [ 50 ]
; solverState [ 35 ] = fullState [ 51 ] ; solverState [ 36 ] = fullState [ 52
] ; solverState [ 37 ] = fullState [ 55 ] ; solverState [ 38 ] = fullState [
56 ] ; solverState [ 39 ] = fullState [ 57 ] ; solverState [ 40 ] = fullState
[ 58 ] ; solverState [ 41 ] = fullState [ 59 ] ; solverState [ 42 ] =
fullState [ 60 ] ; solverState [ 43 ] = fullState [ 61 ] ; solverState [ 44 ]
= fullState [ 62 ] ; solverState [ 45 ] = fullState [ 63 ] ; solverState [ 46
] = fullState [ 66 ] ; solverState [ 47 ] = fullState [ 67 ] ; solverState [
48 ] = fullState [ 68 ] ; solverState [ 49 ] = fullState [ 69 ] ; solverState
[ 50 ] = fullState [ 70 ] ; solverState [ 51 ] = fullState [ 71 ] ;
solverState [ 52 ] = fullState [ 72 ] ; solverState [ 53 ] = fullState [ 73 ]
; solverState [ 54 ] = fullState [ 74 ] ; solverState [ 55 ] = fullState [ 77
] ; solverState [ 56 ] = fullState [ 78 ] ; solverState [ 57 ] = fullState [
79 ] ; solverState [ 58 ] = fullState [ 80 ] ; solverState [ 59 ] = fullState
[ 81 ] ; solverState [ 60 ] = fullState [ 82 ] ; solverState [ 61 ] =
fullState [ 83 ] ; solverState [ 62 ] = fullState [ 84 ] ; solverState [ 63 ]
= fullState [ 85 ] ; solverState [ 64 ] = fullState [ 88 ] ; solverState [ 65
] = fullState [ 89 ] ; solverState [ 66 ] = fullState [ 90 ] ; solverState [
67 ] = fullState [ 91 ] ; solverState [ 68 ] = fullState [ 92 ] ; solverState
[ 69 ] = fullState [ 93 ] ; solverState [ 70 ] = fullState [ 94 ] ;
solverState [ 71 ] = fullState [ 95 ] ; solverState [ 72 ] = fullState [ 96 ]
; } int PlatformAssem_f0ca4364_1_isPositionViolation ( const void * mech ,
const double * rtdv , const int * eqnEnableFlags , const double * state ) {
int ii [ 3 ] ; double xx [ 151 ] ; ( void ) mech ; ( void ) rtdv ; ( void )
eqnEnableFlags ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] * state [ 43 ] ; xx [ 2
] = cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 25 ] ; xx [ 4 ] = sin (
xx [ 3 ] ) ; xx [ 5 ] = 0.7058357201813958 ; xx [ 6 ] = xx [ 0 ] * state [ 23
] ; xx [ 7 ] = cos ( xx [ 6 ] ) ; xx [ 8 ] = 0.7058407546227096 ; xx [ 9 ] =
sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ] * xx [ 7 ] + xx [ 8 ] * xx [ 9 ] ; xx
[ 10 ] = xx [ 5 ] * xx [ 9 ] - xx [ 8 ] * xx [ 7 ] ; xx [ 11 ] = cos ( xx [ 3
] ) ; xx [ 3 ] = 0.04233709306330295 ; xx [ 12 ] = 0.04233598682685397 ; xx [
13 ] = xx [ 3 ] * xx [ 7 ] + xx [ 12 ] * xx [ 9 ] ; xx [ 14 ] = xx [ 3 ] * xx
[ 9 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 15 ] = - ( xx [ 4 ] * xx [ 6 ] - xx [ 10
] * xx [ 11 ] ) ; xx [ 16 ] = - ( xx [ 11 ] * xx [ 13 ] + xx [ 14 ] * xx [ 4
] ) ; xx [ 17 ] = xx [ 4 ] * xx [ 13 ] - xx [ 14 ] * xx [ 11 ] ; xx [ 18 ] =
xx [ 10 ] * xx [ 4 ] + xx [ 11 ] * xx [ 6 ] ; xx [ 7 ] = 3.980251324392935e-7
; xx [ 9 ] = 0.999999999999921 ; xx [ 19 ] = xx [ 7 ] * state [ 30 ] - xx [ 9
] * state [ 27 ] ; xx [ 20 ] = - ( xx [ 7 ] * state [ 29 ] + xx [ 9 ] * state
[ 28 ] ) ; xx [ 21 ] = - ( xx [ 9 ] * state [ 29 ] - xx [ 7 ] * state [ 28 ]
) ; xx [ 22 ] = - ( xx [ 7 ] * state [ 27 ] + xx [ 9 ] * state [ 30 ] ) ;
pm_math_quatCompose ( xx + 15 , xx + 19 , xx + 23 ) ; xx [ 27 ] =
3.980251340548381e-7 ; xx [ 28 ] = xx [ 9 ] * state [ 37 ] - xx [ 27 ] *
state [ 34 ] ; xx [ 29 ] = xx [ 9 ] * state [ 36 ] - xx [ 27 ] * state [ 35 ]
; xx [ 30 ] = - ( xx [ 27 ] * state [ 36 ] + xx [ 9 ] * state [ 35 ] ) ; xx [
31 ] = - ( xx [ 27 ] * state [ 37 ] + xx [ 9 ] * state [ 34 ] ) ;
pm_math_quatCompose ( xx + 23 , xx + 28 , xx + 32 ) ; xx [ 27 ] =
0.3535533905932732 ; xx [ 36 ] = xx [ 0 ] * state [ 41 ] ; xx [ 37 ] = sin (
xx [ 36 ] ) ; xx [ 38 ] = 0.8660254037844377 * xx [ 37 ] ; xx [ 39 ] = xx [
27 ] * xx [ 38 ] ; xx [ 40 ] = 0.6123724356957949 ; xx [ 41 ] =
0.5000000000000017 * xx [ 37 ] ; xx [ 37 ] = xx [ 40 ] * xx [ 41 ] ; xx [ 42
] = cos ( xx [ 36 ] ) ; xx [ 36 ] = xx [ 40 ] * xx [ 42 ] ; xx [ 43 ] = xx [
39 ] + xx [ 37 ] - xx [ 36 ] ; xx [ 44 ] = xx [ 40 ] * xx [ 38 ] ; xx [ 38 ]
= xx [ 27 ] * xx [ 42 ] ; xx [ 42 ] = xx [ 27 ] * xx [ 41 ] ; xx [ 41 ] = xx
[ 44 ] + xx [ 38 ] - xx [ 42 ] ; xx [ 45 ] = xx [ 38 ] - xx [ 44 ] + xx [ 42
] ; xx [ 38 ] = xx [ 37 ] + xx [ 36 ] + xx [ 39 ] ; xx [ 46 ] = xx [ 43 ] ;
xx [ 47 ] = xx [ 41 ] ; xx [ 48 ] = xx [ 45 ] ; xx [ 49 ] = xx [ 38 ] ;
pm_math_quatCompose ( xx + 32 , xx + 46 , xx + 50 ) ; xx [ 36 ] = sin ( xx [
1 ] ) ; xx [ 46 ] = xx [ 2 ] * xx [ 50 ] + xx [ 53 ] * xx [ 36 ] ; xx [ 47 ]
= xx [ 2 ] * xx [ 51 ] - xx [ 52 ] * xx [ 36 ] ; xx [ 48 ] = xx [ 2 ] * xx [
52 ] + xx [ 51 ] * xx [ 36 ] ; xx [ 49 ] = xx [ 2 ] * xx [ 53 ] - xx [ 50 ] *
xx [ 36 ] ; xx [ 1 ] = 7.599121945184391e-12 ; xx [ 37 ] =
5.036130209737022e-12 ; xx [ 39 ] = 5.192027881355888e-12 ; xx [ 54 ] = - xx
[ 1 ] ; xx [ 55 ] = xx [ 37 ] ; xx [ 56 ] = - xx [ 39 ] ; pm_math_quatXform (
xx + 46 , xx + 54 , xx + 57 ) ; xx [ 42 ] = 2.0 ; xx [ 44 ] =
2.191920996097441e-12 ; xx [ 46 ] = xx [ 44 ] * xx [ 36 ] ; xx [ 47 ] =
3.368449963403463e-13 * xx [ 36 ] ; xx [ 60 ] = - ( 0.02539999999966131 + xx
[ 42 ] * ( xx [ 2 ] * xx [ 46 ] + xx [ 47 ] * xx [ 36 ] ) ) ; xx [ 61 ] = (
xx [ 46 ] * xx [ 36 ] - xx [ 2 ] * xx [ 47 ] ) * xx [ 42 ] - xx [ 44 ] ; xx [
62 ] = - 0.1524264000010511 ; pm_math_quatXform ( xx + 50 , xx + 60 , xx + 46
) ; xx [ 2 ] = 0.09621024525612519 ; xx [ 36 ] = xx [ 2 ] * xx [ 45 ] ; xx [
60 ] = xx [ 41 ] ; xx [ 61 ] = xx [ 45 ] ; xx [ 62 ] = xx [ 38 ] ; xx [ 44 ]
= 0.1158410329922703 ; xx [ 49 ] = xx [ 44 ] * xx [ 38 ] - xx [ 41 ] * xx [ 2
] ; xx [ 2 ] = xx [ 44 ] * xx [ 45 ] ; xx [ 63 ] = xx [ 36 ] ; xx [ 64 ] = xx
[ 49 ] ; xx [ 65 ] = - xx [ 2 ] ; pm_math_cross3 ( xx + 60 , xx + 63 , xx +
66 ) ; xx [ 60 ] = - ( 0.1158410329997535 + ( xx [ 36 ] * xx [ 43 ] + xx [ 66
] ) * xx [ 42 ] ) ; xx [ 61 ] = 5.088251355846174e-12 - ( xx [ 43 ] * xx [ 49
] + xx [ 67 ] ) * xx [ 42 ] ; xx [ 62 ] = - ( 0.1002102452613437 + xx [ 42 ]
* ( xx [ 68 ] - xx [ 2 ] * xx [ 43 ] ) ) ; pm_math_quatXform ( xx + 32 , xx +
60 , xx + 43 ) ; xx [ 2 ] = 3.641924106626229e-8 ; xx [ 32 ] = xx [ 1 ] ; xx
[ 33 ] = - xx [ 37 ] ; xx [ 34 ] = xx [ 39 ] ; pm_math_quatXform ( xx + 28 ,
xx + 32 , xx + 35 ) ; xx [ 1 ] = 0.04574999999998041 ; xx [ 28 ] =
2.92603149291605e-7 ; xx [ 29 ] = xx [ 2 ] + xx [ 35 ] ; xx [ 30 ] = xx [ 1 ]
+ xx [ 36 ] ; xx [ 31 ] = xx [ 28 ] + xx [ 37 ] ; pm_math_quatXform ( xx + 23
, xx + 29 , xx + 32 ) ; xx [ 23 ] = 3.641162862673871e-8 ; xx [ 24 ] =
0.04575000000717538 ; xx [ 25 ] = - 2.926046524752066e-7 ; pm_math_quatXform
( xx + 19 , xx + 23 , xx + 29 ) ; pm_math_quatXform ( xx + 15 , xx + 29 , xx
+ 19 ) ; xx [ 15 ] = xx [ 13 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 6 ]
; xx [ 18 ] = xx [ 14 ] ; xx [ 22 ] = 9.83617579279345e-12 ; xx [ 26 ] =
3.107391981487723e-12 * xx [ 4 ] - xx [ 22 ] * xx [ 11 ] ; xx [ 29 ] =
7.175000002356807e-3 ; xx [ 35 ] = xx [ 42 ] * xx [ 26 ] * xx [ 4 ] +
0.03194045366784892 ; xx [ 36 ] = xx [ 42 ] * xx [ 26 ] * xx [ 11 ] + xx [ 22
] ; xx [ 37 ] = 8.762500002356819e-3 - ( xx [ 11 ] * xx [ 29 ] * xx [ 11 ] +
xx [ 29 ] * xx [ 4 ] * xx [ 4 ] ) * xx [ 42 ] ; pm_math_quatXform ( xx + 15 ,
xx + 35 , xx + 29 ) ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 6 ] ; xx [ 17
] = xx [ 14 ] ; xx [ 4 ] = 1.5875e-3 ; xx [ 11 ] = xx [ 4 ] * xx [ 6 ] ; xx [
18 ] = 0.02520954632904373 ; xx [ 22 ] = xx [ 10 ] * xx [ 4 ] - xx [ 14 ] *
xx [ 18 ] ; xx [ 10 ] = xx [ 18 ] * xx [ 6 ] ; xx [ 35 ] = - xx [ 11 ] ; xx [
36 ] = xx [ 22 ] ; xx [ 37 ] = xx [ 10 ] ; pm_math_cross3 ( xx + 15 , xx + 35
, xx + 60 ) ; xx [ 6 ] = xx [ 43 ] + xx [ 32 ] + xx [ 19 ] + xx [ 29 ] - ( xx
[ 60 ] - xx [ 11 ] * xx [ 13 ] ) * xx [ 42 ] - 0.04299719117889741 ; xx [ 11
] = 0.5901036711621467 ; xx [ 14 ] = xx [ 0 ] * state [ 64 ] ; xx [ 15 ] =
cos ( xx [ 14 ] ) ; xx [ 16 ] = 0.5901074779979936 ; xx [ 17 ] = sin ( xx [
14 ] ) ; xx [ 14 ] = xx [ 11 ] * xx [ 15 ] - xx [ 16 ] * xx [ 17 ] ; xx [ 26
] = xx [ 0 ] * state [ 66 ] ; xx [ 35 ] = sin ( xx [ 26 ] ) ; xx [ 36 ] = cos
( xx [ 26 ] ) ; xx [ 26 ] = xx [ 16 ] * xx [ 15 ] + xx [ 11 ] * xx [ 17 ] ;
xx [ 11 ] = 0.389585375426561 ; xx [ 16 ] = 0.3895819001770367 ; xx [ 37 ] =
xx [ 11 ] * xx [ 15 ] - xx [ 16 ] * xx [ 17 ] ; xx [ 38 ] = xx [ 16 ] * xx [
15 ] + xx [ 11 ] * xx [ 17 ] ; xx [ 63 ] = - ( xx [ 14 ] * xx [ 35 ] + xx [
36 ] * xx [ 26 ] ) ; xx [ 64 ] = - ( xx [ 37 ] * xx [ 36 ] - xx [ 35 ] * xx [
38 ] ) ; xx [ 65 ] = xx [ 37 ] * xx [ 35 ] + xx [ 36 ] * xx [ 38 ] ; xx [ 66
] = xx [ 14 ] * xx [ 36 ] - xx [ 35 ] * xx [ 26 ] ; xx [ 67 ] = xx [ 7 ] *
state [ 71 ] - xx [ 9 ] * state [ 68 ] ; xx [ 68 ] = - ( xx [ 7 ] * state [
70 ] + xx [ 9 ] * state [ 69 ] ) ; xx [ 69 ] = - ( xx [ 9 ] * state [ 70 ] -
xx [ 7 ] * state [ 69 ] ) ; xx [ 70 ] = - ( xx [ 7 ] * state [ 68 ] + xx [ 9
] * state [ 71 ] ) ; pm_math_quatCompose ( xx + 63 , xx + 67 , xx + 71 ) ; xx
[ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 1 ] ; xx [ 17 ] = xx [ 28 ] ;
pm_math_quatXform ( xx + 71 , xx + 15 , xx + 75 ) ; pm_math_quatXform ( xx +
67 , xx + 23 , xx + 71 ) ; pm_math_quatXform ( xx + 63 , xx + 71 , xx + 67 )
; xx [ 1 ] = - xx [ 26 ] ; xx [ 2 ] = - xx [ 38 ] ; xx [ 63 ] = xx [ 37 ] ;
xx [ 64 ] = xx [ 1 ] ; xx [ 65 ] = xx [ 14 ] ; xx [ 66 ] = xx [ 2 ] ; xx [ 11
] = 6.924287580811761e-12 ; xx [ 28 ] = xx [ 11 ] * xx [ 36 ] +
1.024070757638107e-11 * xx [ 35 ] ; xx [ 39 ] = 4.000000007367204e-3 ; xx [
70 ] = xx [ 42 ] * xx [ 28 ] * xx [ 35 ] + 0.03194045366071555 ; xx [ 71 ] =
xx [ 42 ] * xx [ 28 ] * xx [ 36 ] - xx [ 11 ] ; xx [ 72 ] = ( xx [ 36 ] * xx
[ 39 ] * xx [ 36 ] + xx [ 39 ] * xx [ 35 ] * xx [ 35 ] ) * xx [ 42 ] -
2.412500007367193e-3 ; pm_math_quatXform ( xx + 63 , xx + 70 , xx + 78 ) ; xx
[ 11 ] = 1.587500000000011e-3 ; xx [ 28 ] = xx [ 14 ] * xx [ 11 ] ; xx [ 63 ]
= xx [ 1 ] ; xx [ 64 ] = xx [ 14 ] ; xx [ 65 ] = xx [ 2 ] ; xx [ 1 ] = xx [
18 ] * xx [ 38 ] + xx [ 11 ] * xx [ 26 ] ; xx [ 2 ] = xx [ 14 ] * xx [ 18 ] ;
xx [ 70 ] = xx [ 28 ] ; xx [ 71 ] = xx [ 1 ] ; xx [ 72 ] = xx [ 2 ] ;
pm_math_cross3 ( xx + 63 , xx + 70 , xx + 81 ) ; xx [ 14 ] = xx [ 44 ] + xx [
33 ] + xx [ 20 ] + xx [ 30 ] - ( xx [ 13 ] * xx [ 22 ] + xx [ 61 ] ) * xx [
42 ] + 0.02992188481855372 ; xx [ 19 ] = xx [ 45 ] + xx [ 34 ] + xx [ 21 ] +
xx [ 31 ] - xx [ 42 ] * ( xx [ 62 ] + xx [ 10 ] * xx [ 13 ] ) +
0.1428830924490354 ; xx [ 10 ] = xx [ 0 ] * state [ 45 ] ; xx [ 13 ] = sin (
xx [ 10 ] ) ; xx [ 20 ] = xx [ 40 ] * xx [ 13 ] ; xx [ 21 ] = cos ( xx [ 10 ]
) ; xx [ 10 ] = xx [ 40 ] * xx [ 21 ] ; xx [ 22 ] = xx [ 27 ] * xx [ 21 ] ;
xx [ 21 ] = xx [ 27 ] * xx [ 13 ] ; xx [ 29 ] = xx [ 20 ] - xx [ 10 ] ; xx [
30 ] = - ( xx [ 22 ] + xx [ 21 ] ) ; xx [ 31 ] = xx [ 21 ] - xx [ 22 ] ; xx [
32 ] = - ( xx [ 20 ] + xx [ 10 ] ) ; pm_math_quatCompose ( xx + 50 , xx + 29
, xx + 33 ) ; pm_math_quatXform ( xx + 33 , xx + 54 , xx + 20 ) ; xx [ 33 ] =
- 1.121202762681406e-11 ; xx [ 34 ] = - 6.145027516349377e-13 ; xx [ 35 ] = -
3.999999999522439e-3 ; pm_math_quatXform ( xx + 29 , xx + 33 , xx + 38 ) ; xx
[ 29 ] = 0.1412410329922704 - xx [ 38 ] ; xx [ 30 ] = - xx [ 39 ] ; xx [ 31 ]
= 0.05221615474387575 - xx [ 40 ] ; pm_math_quatXform ( xx + 50 , xx + 29 ,
xx + 32 ) ; xx [ 10 ] = xx [ 0 ] * state [ 55 ] ; xx [ 13 ] = sin ( xx [ 10 ]
) ; xx [ 26 ] = xx [ 0 ] * state [ 53 ] ; xx [ 27 ] = cos ( xx [ 26 ] ) ; xx
[ 29 ] = sin ( xx [ 26 ] ) ; xx [ 26 ] = xx [ 5 ] * xx [ 27 ] + xx [ 8 ] * xx
[ 29 ] ; xx [ 30 ] = xx [ 5 ] * xx [ 29 ] - xx [ 8 ] * xx [ 27 ] ; xx [ 5 ] =
cos ( xx [ 10 ] ) ; xx [ 8 ] = xx [ 3 ] * xx [ 27 ] + xx [ 12 ] * xx [ 29 ] ;
xx [ 10 ] = xx [ 3 ] * xx [ 29 ] - xx [ 12 ] * xx [ 27 ] ; xx [ 38 ] = - ( xx
[ 13 ] * xx [ 26 ] - xx [ 30 ] * xx [ 5 ] ) ; xx [ 39 ] = - ( xx [ 5 ] * xx [
8 ] + xx [ 10 ] * xx [ 13 ] ) ; xx [ 40 ] = xx [ 13 ] * xx [ 8 ] - xx [ 10 ]
* xx [ 5 ] ; xx [ 41 ] = xx [ 30 ] * xx [ 13 ] + xx [ 5 ] * xx [ 26 ] ; xx [
60 ] = xx [ 7 ] * state [ 60 ] - xx [ 9 ] * state [ 57 ] ; xx [ 61 ] = - ( xx
[ 7 ] * state [ 59 ] + xx [ 9 ] * state [ 58 ] ) ; xx [ 62 ] = - ( xx [ 9 ] *
state [ 59 ] - xx [ 7 ] * state [ 58 ] ) ; xx [ 63 ] = - ( xx [ 7 ] * state [
57 ] + xx [ 9 ] * state [ 60 ] ) ; pm_math_quatCompose ( xx + 38 , xx + 60 ,
xx + 70 ) ; pm_math_quatXform ( xx + 70 , xx + 15 , xx + 43 ) ;
pm_math_quatXform ( xx + 60 , xx + 23 , xx + 64 ) ; pm_math_quatXform ( xx +
38 , xx + 64 , xx + 60 ) ; xx [ 38 ] = xx [ 8 ] ; xx [ 39 ] = xx [ 30 ] ; xx
[ 40 ] = xx [ 26 ] ; xx [ 41 ] = xx [ 10 ] ; xx [ 3 ] = 5.443558296964576e-12
; xx [ 12 ] = xx [ 3 ] * xx [ 5 ] - 9.27756931389703e-12 * xx [ 13 ] ; xx [
27 ] = 7.174999998974562e-3 ; xx [ 63 ] = xx [ 42 ] * xx [ 12 ] * xx [ 13 ] +
0.03194045368023388 ; xx [ 64 ] = xx [ 42 ] * xx [ 12 ] * xx [ 5 ] - xx [ 3 ]
; xx [ 65 ] = 8.762499998974573e-3 - ( xx [ 5 ] * xx [ 27 ] * xx [ 5 ] + xx [
27 ] * xx [ 13 ] * xx [ 13 ] ) * xx [ 42 ] ; pm_math_quatXform ( xx + 38 , xx
+ 63 , xx + 70 ) ; xx [ 38 ] = xx [ 30 ] ; xx [ 39 ] = xx [ 26 ] ; xx [ 40 ]
= xx [ 10 ] ; xx [ 3 ] = xx [ 4 ] * xx [ 26 ] ; xx [ 5 ] =
0.02520954632904374 ; xx [ 12 ] = xx [ 30 ] * xx [ 4 ] - xx [ 10 ] * xx [ 5 ]
; xx [ 4 ] = xx [ 5 ] * xx [ 26 ] ; xx [ 29 ] = - xx [ 3 ] ; xx [ 30 ] = xx [
12 ] ; xx [ 31 ] = xx [ 4 ] ; pm_math_cross3 ( xx + 38 , xx + 29 , xx + 63 )
; xx [ 5 ] = 0.3535533905932758 ; xx [ 10 ] = xx [ 0 ] * state [ 47 ] ; xx [
13 ] = cos ( xx [ 10 ] ) ; xx [ 26 ] = xx [ 5 ] * xx [ 13 ] ; xx [ 27 ] = sin
( xx [ 10 ] ) ; xx [ 10 ] = xx [ 5 ] * xx [ 27 ] ; xx [ 29 ] =
0.6123724356957934 ; xx [ 30 ] = xx [ 29 ] * xx [ 27 ] ; xx [ 27 ] = xx [ 29
] * xx [ 13 ] ; xx [ 38 ] = - ( xx [ 26 ] + xx [ 10 ] ) ; xx [ 39 ] = xx [ 30
] - xx [ 27 ] ; xx [ 40 ] = - ( xx [ 27 ] + xx [ 30 ] ) ; xx [ 41 ] = xx [ 10
] - xx [ 26 ] ; pm_math_quatCompose ( xx + 50 , xx + 38 , xx + 84 ) ;
pm_math_quatXform ( xx + 84 , xx + 54 , xx + 88 ) ; xx [ 84 ] =
3.881762117297072e-12 ; xx [ 85 ] = - 3.80025733104361e-12 ; xx [ 86 ] =
3.999999998874377e-3 ; pm_math_quatXform ( xx + 38 , xx + 84 , xx + 91 ) ; xx
[ 38 ] = - ( 0.1412410329922711 + xx [ 91 ] ) ; xx [ 39 ] = - xx [ 92 ] ; xx
[ 40 ] = 0.05221615474387407 - xx [ 93 ] ; pm_math_quatXform ( xx + 50 , xx +
38 , xx + 84 ) ; xx [ 10 ] = 0.6324445710612965 ; xx [ 13 ] = xx [ 0 ] *
state [ 75 ] ; xx [ 26 ] = sin ( xx [ 13 ] ) ; xx [ 27 ] = 0.6324396579890005
; xx [ 30 ] = cos ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 10 ] * xx [ 26 ] - xx [ 27
] * xx [ 30 ] ; xx [ 31 ] = xx [ 0 ] * state [ 77 ] ; xx [ 35 ] = sin ( xx [
31 ] ) ; xx [ 36 ] = cos ( xx [ 31 ] ) ; xx [ 31 ] = xx [ 10 ] * xx [ 30 ] +
xx [ 27 ] * xx [ 26 ] ; xx [ 10 ] = 0.3162553791961485 ; xx [ 27 ] =
0.3162538200043588 ; xx [ 38 ] = xx [ 10 ] * xx [ 30 ] - xx [ 27 ] * xx [ 26
] ; xx [ 39 ] = xx [ 27 ] * xx [ 30 ] + xx [ 10 ] * xx [ 26 ] ; xx [ 91 ] = -
( xx [ 13 ] * xx [ 35 ] - xx [ 36 ] * xx [ 31 ] ) ; xx [ 92 ] = - ( xx [ 38 ]
* xx [ 36 ] - xx [ 35 ] * xx [ 39 ] ) ; xx [ 93 ] = xx [ 38 ] * xx [ 35 ] +
xx [ 36 ] * xx [ 39 ] ; xx [ 94 ] = xx [ 35 ] * xx [ 31 ] + xx [ 13 ] * xx [
36 ] ; xx [ 95 ] = xx [ 7 ] * state [ 82 ] - xx [ 9 ] * state [ 79 ] ; xx [
96 ] = - ( xx [ 7 ] * state [ 81 ] + xx [ 9 ] * state [ 80 ] ) ; xx [ 97 ] =
- ( xx [ 9 ] * state [ 81 ] - xx [ 7 ] * state [ 80 ] ) ; xx [ 98 ] = - ( xx
[ 7 ] * state [ 79 ] + xx [ 9 ] * state [ 82 ] ) ; pm_math_quatCompose ( xx +
91 , xx + 95 , xx + 99 ) ; pm_math_quatXform ( xx + 99 , xx + 15 , xx + 103 )
; pm_math_quatXform ( xx + 95 , xx + 23 , xx + 99 ) ; pm_math_quatXform ( xx
+ 91 , xx + 99 , xx + 95 ) ; xx [ 10 ] = - xx [ 39 ] ; xx [ 91 ] = xx [ 38 ]
; xx [ 92 ] = xx [ 31 ] ; xx [ 93 ] = xx [ 13 ] ; xx [ 94 ] = xx [ 10 ] ; xx
[ 26 ] = 9.862118968695376e-13 ; xx [ 27 ] = 5.157931604049537e-12 * xx [ 35
] - xx [ 26 ] * xx [ 36 ] ; xx [ 30 ] = 3.99999999470772e-3 ; xx [ 98 ] = xx
[ 42 ] * xx [ 27 ] * xx [ 35 ] + 0.03194045366579833 ; xx [ 99 ] = xx [ 42 ]
* xx [ 27 ] * xx [ 36 ] + xx [ 26 ] ; xx [ 100 ] = ( xx [ 36 ] * xx [ 30 ] *
xx [ 36 ] + xx [ 30 ] * xx [ 35 ] * xx [ 35 ] ) * xx [ 42 ] -
2.412499994707708e-3 ; pm_math_quatXform ( xx + 91 , xx + 98 , xx + 106 ) ;
xx [ 26 ] = xx [ 13 ] * xx [ 11 ] ; xx [ 91 ] = xx [ 31 ] ; xx [ 92 ] = xx [
13 ] ; xx [ 93 ] = xx [ 10 ] ; xx [ 10 ] = xx [ 18 ] * xx [ 39 ] - xx [ 11 ]
* xx [ 31 ] ; xx [ 27 ] = xx [ 13 ] * xx [ 18 ] ; xx [ 39 ] = xx [ 26 ] ; xx
[ 40 ] = xx [ 10 ] ; xx [ 41 ] = xx [ 27 ] ; pm_math_cross3 ( xx + 91 , xx +
39 , xx + 98 ) ; xx [ 13 ] = xx [ 0 ] * state [ 49 ] ; xx [ 30 ] = cos ( xx [
13 ] ) ; xx [ 31 ] = xx [ 5 ] * xx [ 30 ] ; xx [ 35 ] = sin ( xx [ 13 ] ) ;
xx [ 13 ] = xx [ 5 ] * xx [ 35 ] ; xx [ 5 ] = xx [ 29 ] * xx [ 30 ] ; xx [ 30
] = xx [ 29 ] * xx [ 35 ] ; xx [ 91 ] = xx [ 31 ] + xx [ 13 ] ; xx [ 92 ] =
xx [ 5 ] - xx [ 30 ] ; xx [ 93 ] = xx [ 5 ] + xx [ 30 ] ; xx [ 94 ] = xx [ 31
] - xx [ 13 ] ; pm_math_quatCompose ( xx + 50 , xx + 91 , xx + 109 ) ;
pm_math_quatXform ( xx + 109 , xx + 54 , xx + 29 ) ; xx [ 39 ] = -
5.998698970888227e-12 ; xx [ 40 ] = - 6.30935626036444e-12 ; xx [ 41 ] =
4.000000001735564e-3 ; pm_math_quatXform ( xx + 91 , xx + 39 , xx + 109 ) ;
xx [ 39 ] = - ( 0.1158410329922713 + xx [ 109 ] ) ; xx [ 40 ] = - xx [ 110 ]
; xx [ 41 ] = 0.09621024525612379 - xx [ 111 ] ; pm_math_quatXform ( xx + 50
, xx + 39 , xx + 91 ) ; xx [ 5 ] = 0.6324396579890008 ; xx [ 13 ] = xx [ 0 ]
* state [ 86 ] ; xx [ 35 ] = cos ( xx [ 13 ] ) ; xx [ 36 ] =
0.6324445710612973 ; xx [ 39 ] = sin ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 5 ] *
xx [ 35 ] - xx [ 36 ] * xx [ 39 ] ; xx [ 40 ] = xx [ 0 ] * state [ 88 ] ; xx
[ 41 ] = sin ( xx [ 40 ] ) ; xx [ 49 ] = cos ( xx [ 40 ] ) ; xx [ 40 ] = xx [
36 ] * xx [ 35 ] + xx [ 5 ] * xx [ 39 ] ; xx [ 5 ] = 0.3162538200043575 ; xx
[ 36 ] = 0.3162553791961478 ; xx [ 66 ] = xx [ 5 ] * xx [ 39 ] - xx [ 36 ] *
xx [ 35 ] ; xx [ 73 ] = xx [ 5 ] * xx [ 35 ] + xx [ 36 ] * xx [ 39 ] ; xx [
109 ] = - ( xx [ 13 ] * xx [ 41 ] + xx [ 49 ] * xx [ 40 ] ) ; xx [ 110 ] = -
( xx [ 66 ] * xx [ 49 ] + xx [ 41 ] * xx [ 73 ] ) ; xx [ 111 ] = xx [ 66 ] *
xx [ 41 ] - xx [ 49 ] * xx [ 73 ] ; xx [ 112 ] = xx [ 13 ] * xx [ 49 ] - xx [
41 ] * xx [ 40 ] ; xx [ 113 ] = xx [ 7 ] * state [ 93 ] - xx [ 9 ] * state [
90 ] ; xx [ 114 ] = - ( xx [ 7 ] * state [ 92 ] + xx [ 9 ] * state [ 91 ] ) ;
xx [ 115 ] = - ( xx [ 9 ] * state [ 92 ] - xx [ 7 ] * state [ 91 ] ) ; xx [
116 ] = - ( xx [ 7 ] * state [ 90 ] + xx [ 9 ] * state [ 93 ] ) ;
pm_math_quatCompose ( xx + 109 , xx + 113 , xx + 117 ) ; pm_math_quatXform (
xx + 117 , xx + 15 , xx + 121 ) ; pm_math_quatXform ( xx + 113 , xx + 23 , xx
+ 117 ) ; pm_math_quatXform ( xx + 109 , xx + 117 , xx + 113 ) ; xx [ 5 ] = -
xx [ 40 ] ; xx [ 109 ] = xx [ 66 ] ; xx [ 110 ] = xx [ 5 ] ; xx [ 111 ] = xx
[ 13 ] ; xx [ 112 ] = xx [ 73 ] ; xx [ 35 ] = 8.497959654019115e-12 ; xx [ 36
] = 1.600627075326599e-13 * xx [ 41 ] - xx [ 35 ] * xx [ 49 ] ; xx [ 39 ] =
3.999999996613603e-3 ; xx [ 116 ] = xx [ 42 ] * xx [ 36 ] * xx [ 41 ] +
0.03194045367079622 ; xx [ 117 ] = xx [ 42 ] * xx [ 36 ] * xx [ 49 ] + xx [
35 ] ; xx [ 118 ] = ( xx [ 49 ] * xx [ 39 ] * xx [ 49 ] + xx [ 39 ] * xx [ 41
] * xx [ 41 ] ) * xx [ 42 ] - 2.412499996613564e-3 ; pm_math_quatXform ( xx +
109 , xx + 116 , xx + 124 ) ; xx [ 35 ] = 1.587499999999983e-3 ; xx [ 36 ] =
xx [ 13 ] * xx [ 35 ] ; xx [ 109 ] = xx [ 5 ] ; xx [ 110 ] = xx [ 13 ] ; xx [
111 ] = xx [ 73 ] ; xx [ 5 ] = xx [ 35 ] * xx [ 40 ] - xx [ 18 ] * xx [ 73 ]
; xx [ 35 ] = xx [ 13 ] * xx [ 18 ] ; xx [ 39 ] = xx [ 36 ] ; xx [ 40 ] = xx
[ 5 ] ; xx [ 41 ] = xx [ 35 ] ; pm_math_cross3 ( xx + 109 , xx + 39 , xx +
116 ) ; xx [ 13 ] = xx [ 0 ] * state [ 51 ] ; xx [ 39 ] = cos ( xx [ 13 ] ) ;
xx [ 40 ] = sin ( xx [ 13 ] ) ; xx [ 109 ] = xx [ 39 ] * xx [ 50 ] + xx [ 53
] * xx [ 40 ] ; xx [ 110 ] = xx [ 39 ] * xx [ 51 ] - xx [ 52 ] * xx [ 40 ] ;
xx [ 111 ] = xx [ 39 ] * xx [ 52 ] + xx [ 51 ] * xx [ 40 ] ; xx [ 112 ] = xx
[ 39 ] * xx [ 53 ] - xx [ 50 ] * xx [ 40 ] ; pm_math_quatXform ( xx + 109 ,
xx + 54 , xx + 127 ) ; xx [ 13 ] = 6.817225262079063e-12 * xx [ 40 ] ; xx [
41 ] = 5.61723311615081e-12 ; xx [ 49 ] = xx [ 41 ] * xx [ 40 ] ; xx [ 54 ] =
0.02540000000681907 - xx [ 42 ] * ( xx [ 13 ] * xx [ 40 ] - xx [ 39 ] * xx [
49 ] ) ; xx [ 55 ] = xx [ 41 ] - ( xx [ 39 ] * xx [ 13 ] + xx [ 49 ] * xx [
40 ] ) * xx [ 42 ] ; xx [ 56 ] = - 0.152426400001803 ; pm_math_quatXform ( xx
+ 50 , xx + 54 , xx + 39 ) ; xx [ 13 ] = 0.5901036711621462 ; xx [ 49 ] = xx
[ 0 ] * state [ 12 ] ; xx [ 50 ] = cos ( xx [ 49 ] ) ; xx [ 51 ] =
0.5901074779979933 ; xx [ 52 ] = sin ( xx [ 49 ] ) ; xx [ 49 ] = xx [ 13 ] *
xx [ 50 ] - xx [ 51 ] * xx [ 52 ] ; xx [ 53 ] = xx [ 0 ] * state [ 14 ] ; xx
[ 0 ] = sin ( xx [ 53 ] ) ; xx [ 54 ] = cos ( xx [ 53 ] ) ; xx [ 53 ] = xx [
51 ] * xx [ 50 ] + xx [ 13 ] * xx [ 52 ] ; xx [ 13 ] = 0.3895853754265615 ;
xx [ 51 ] = 0.389581900177037 ; xx [ 55 ] = xx [ 13 ] * xx [ 50 ] - xx [ 51 ]
* xx [ 52 ] ; xx [ 56 ] = xx [ 51 ] * xx [ 50 ] + xx [ 13 ] * xx [ 52 ] ; xx
[ 109 ] = - ( xx [ 49 ] * xx [ 0 ] + xx [ 54 ] * xx [ 53 ] ) ; xx [ 110 ] = -
( xx [ 55 ] * xx [ 54 ] - xx [ 0 ] * xx [ 56 ] ) ; xx [ 111 ] = xx [ 55 ] *
xx [ 0 ] + xx [ 54 ] * xx [ 56 ] ; xx [ 112 ] = xx [ 49 ] * xx [ 54 ] - xx [
0 ] * xx [ 53 ] ; xx [ 130 ] = xx [ 7 ] * state [ 19 ] - xx [ 9 ] * state [
16 ] ; xx [ 131 ] = - ( xx [ 7 ] * state [ 18 ] + xx [ 9 ] * state [ 17 ] ) ;
xx [ 132 ] = - ( xx [ 9 ] * state [ 18 ] - xx [ 7 ] * state [ 17 ] ) ; xx [
133 ] = - ( xx [ 7 ] * state [ 16 ] + xx [ 9 ] * state [ 19 ] ) ;
pm_math_quatCompose ( xx + 109 , xx + 130 , xx + 134 ) ; pm_math_quatXform (
xx + 134 , xx + 15 , xx + 50 ) ; pm_math_quatXform ( xx + 130 , xx + 23 , xx
+ 15 ) ; pm_math_quatXform ( xx + 109 , xx + 15 , xx + 23 ) ; xx [ 7 ] = - xx
[ 53 ] ; xx [ 9 ] = - xx [ 56 ] ; xx [ 109 ] = xx [ 55 ] ; xx [ 110 ] = xx [
7 ] ; xx [ 111 ] = xx [ 49 ] ; xx [ 112 ] = xx [ 9 ] ; xx [ 13 ] =
5.376764528053357e-12 ; xx [ 15 ] = xx [ 13 ] * xx [ 54 ] +
7.748428954013064e-12 * xx [ 0 ] ; xx [ 16 ] = 4.0000000045273e-3 ; xx [ 130
] = 0.03194045367870467 - xx [ 42 ] * xx [ 15 ] * xx [ 0 ] ; xx [ 131 ] = xx
[ 13 ] - xx [ 42 ] * xx [ 15 ] * xx [ 54 ] ; xx [ 132 ] = ( xx [ 54 ] * xx [
16 ] * xx [ 54 ] + xx [ 16 ] * xx [ 0 ] * xx [ 0 ] ) * xx [ 42 ] -
2.412500004527289e-3 ; pm_math_quatXform ( xx + 109 , xx + 130 , xx + 15 ) ;
xx [ 0 ] = xx [ 49 ] * xx [ 11 ] ; xx [ 109 ] = xx [ 7 ] ; xx [ 110 ] = xx [
49 ] ; xx [ 111 ] = xx [ 9 ] ; xx [ 7 ] = xx [ 18 ] * xx [ 56 ] + xx [ 11 ] *
xx [ 53 ] ; xx [ 9 ] = xx [ 49 ] * xx [ 18 ] ; xx [ 130 ] = xx [ 0 ] ; xx [
131 ] = xx [ 7 ] ; xx [ 132 ] = xx [ 9 ] ; pm_math_cross3 ( xx + 109 , xx +
130 , xx + 133 ) ; xx [ 136 ] = fabs ( xx [ 57 ] + xx [ 46 ] + xx [ 6 ] - (
xx [ 75 ] + xx [ 67 ] + xx [ 78 ] - ( xx [ 37 ] * xx [ 28 ] + xx [ 81 ] ) *
xx [ 42 ] ) - 0.1417622656843958 ) ; xx [ 137 ] = fabs ( xx [ 58 ] + xx [ 47
] + xx [ 14 ] - ( xx [ 76 ] + xx [ 68 ] + xx [ 79 ] - ( xx [ 37 ] * xx [ 1 ]
+ xx [ 82 ] ) * xx [ 42 ] ) - 0.02992349485130436 ) ; xx [ 138 ] = fabs ( xx
[ 59 ] + xx [ 48 ] + xx [ 19 ] - ( xx [ 77 ] + xx [ 69 ] + xx [ 80 ] - xx [
42 ] * ( xx [ 83 ] + xx [ 37 ] * xx [ 2 ] ) ) + 0.1065919054848736 ) ; xx [
139 ] = fabs ( xx [ 20 ] + xx [ 32 ] + xx [ 6 ] - ( xx [ 43 ] + xx [ 60 ] +
xx [ 70 ] - ( xx [ 63 ] - xx [ 3 ] * xx [ 8 ] ) * xx [ 42 ] ) -
0.05787438452398606 ) ; xx [ 140 ] = fabs ( xx [ 21 ] + xx [ 33 ] + xx [ 14 ]
- ( xx [ 44 ] + xx [ 61 ] + xx [ 71 ] - ( xx [ 8 ] * xx [ 12 ] + xx [ 64 ] )
* xx [ 42 ] ) - 0.02992259737327991 ) ; xx [ 141 ] = fabs ( xx [ 22 ] + xx [
34 ] + xx [ 19 ] - ( xx [ 45 ] + xx [ 62 ] + xx [ 72 ] - xx [ 42 ] * ( xx [
65 ] + xx [ 4 ] * xx [ 8 ] ) ) - 0.1550274415345039 ) ; xx [ 142 ] = fabs (
xx [ 88 ] + xx [ 84 ] + xx [ 6 ] - ( xx [ 103 ] + xx [ 95 ] + xx [ 106 ] - (
xx [ 38 ] * xx [ 26 ] + xx [ 98 ] ) * xx [ 42 ] ) + 0.06304794220310322 ) ;
xx [ 143 ] = fabs ( xx [ 89 ] + xx [ 85 ] + xx [ 14 ] - ( xx [ 104 ] + xx [
96 ] + xx [ 107 ] - ( xx [ 38 ] * xx [ 10 ] + xx [ 99 ] ) * xx [ 42 ] ) -
0.02992204813763048 ) ; xx [ 144 ] = fabs ( xx [ 90 ] + xx [ 86 ] + xx [ 19 ]
- ( xx [ 105 ] + xx [ 97 ] + xx [ 108 ] - xx [ 42 ] * ( xx [ 100 ] + xx [ 38
] * xx [ 27 ] ) ) + 0.1313039406712666 ) ; xx [ 145 ] = fabs ( xx [ 29 ] + xx
[ 91 ] + xx [ 6 ] - ( xx [ 121 ] + xx [ 113 ] + xx [ 124 ] - ( xx [ 66 ] * xx
[ 36 ] + xx [ 116 ] ) * xx [ 42 ] ) + 0.1240382406650065 ) ; xx [ 146 ] =
fabs ( xx [ 30 ] + xx [ 92 ] + xx [ 14 ] - ( xx [ 122 ] + xx [ 114 ] + xx [
125 ] - ( xx [ 66 ] * xx [ 5 ] + xx [ 117 ] ) * xx [ 42 ] ) -
0.02992151662180351 ) ; xx [ 147 ] = fabs ( xx [ 31 ] + xx [ 93 ] + xx [ 19 ]
- ( xx [ 123 ] + xx [ 115 ] + xx [ 126 ] - xx [ 42 ] * ( xx [ 118 ] + xx [ 66
] * xx [ 35 ] ) ) + 0.04996916497694619 ) ; xx [ 148 ] = fabs ( xx [ 127 ] +
xx [ 39 ] + xx [ 6 ] - ( xx [ 50 ] + xx [ 23 ] + xx [ 15 ] - ( xx [ 55 ] * xx
[ 0 ] + xx [ 133 ] ) * xx [ 42 ] ) - 0.1816563790182656 ) ; xx [ 149 ] = fabs
( xx [ 128 ] + xx [ 40 ] + xx [ 14 ] - ( xx [ 51 ] + xx [ 24 ] + xx [ 16 ] -
( xx [ 55 ] * xx [ 7 ] + xx [ 134 ] ) * xx [ 42 ] ) - 0.02992367610368172 ) ;
xx [ 150 ] = fabs ( xx [ 129 ] + xx [ 41 ] + xx [ 19 ] - ( xx [ 52 ] + xx [
25 ] + xx [ 17 ] - xx [ 42 ] * ( xx [ 135 ] + xx [ 55 ] * xx [ 9 ] ) ) +
0.01321939793971065 ) ; ii [ 0 ] = 136 ; { int ll ; for ( ll = 137 ; ll < 151
; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -=
136 ; xx [ 0 ] = xx [ 136 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ;
if ( xx [ 1 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] =
+ 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ]
= 0 ; return ii [ 1 ] ; } int PlatformAssem_f0ca4364_1_isVelocityViolation (
const void * mech , const double * rtdv , const int * eqnEnableFlags , const
double * state ) { int ii [ 3 ] ; double xx [ 177 ] ; ( void ) mech ; ( void
) rtdv ; ( void ) eqnEnableFlags ; xx [ 0 ] = 0.04233709306330295 ; xx [ 1 ]
= 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 23 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx
[ 4 ] = 0.04233598682685397 ; xx [ 5 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 0
] * xx [ 3 ] + xx [ 4 ] * xx [ 5 ] ; xx [ 6 ] = 0.7058357201813958 ; xx [ 7 ]
= 0.7058407546227096 ; xx [ 8 ] = xx [ 6 ] * xx [ 5 ] - xx [ 7 ] * xx [ 3 ] ;
xx [ 9 ] = xx [ 6 ] * xx [ 3 ] + xx [ 7 ] * xx [ 5 ] ; xx [ 10 ] = xx [ 0 ] *
xx [ 5 ] - xx [ 4 ] * xx [ 3 ] ; xx [ 11 ] = xx [ 2 ] ; xx [ 12 ] = xx [ 8 ]
; xx [ 13 ] = xx [ 9 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 3 ] =
3.980251324392935e-7 ; xx [ 5 ] = 0.999999999999921 ; xx [ 15 ] = xx [ 3 ] *
state [ 30 ] - xx [ 5 ] * state [ 27 ] ; xx [ 16 ] = - ( xx [ 3 ] * state [
29 ] + xx [ 5 ] * state [ 28 ] ) ; xx [ 17 ] = - ( xx [ 5 ] * state [ 29 ] -
xx [ 3 ] * state [ 28 ] ) ; xx [ 18 ] = - ( xx [ 3 ] * state [ 27 ] + xx [ 5
] * state [ 30 ] ) ; xx [ 19 ] = 3.980251340548381e-7 ; xx [ 20 ] = xx [ 5 ]
* state [ 37 ] - xx [ 19 ] * state [ 34 ] ; xx [ 21 ] = xx [ 5 ] * state [ 36
] - xx [ 19 ] * state [ 35 ] ; xx [ 22 ] = - ( xx [ 19 ] * state [ 36 ] + xx
[ 5 ] * state [ 35 ] ) ; xx [ 23 ] = - ( xx [ 19 ] * state [ 37 ] + xx [ 5 ]
* state [ 34 ] ) ; xx [ 19 ] = xx [ 1 ] * state [ 43 ] ; xx [ 24 ] = cos ( xx
[ 19 ] ) ; xx [ 25 ] = 0.3535533905932732 ; xx [ 26 ] = 0.8660254037844377 ;
xx [ 27 ] = xx [ 1 ] * state [ 41 ] ; xx [ 28 ] = sin ( xx [ 27 ] ) ; xx [ 29
] = xx [ 26 ] * xx [ 28 ] ; xx [ 30 ] = xx [ 25 ] * xx [ 29 ] ; xx [ 31 ] =
0.6123724356957949 ; xx [ 32 ] = 0.5000000000000017 ; xx [ 33 ] = xx [ 32 ] *
xx [ 28 ] ; xx [ 28 ] = xx [ 31 ] * xx [ 33 ] ; xx [ 34 ] = cos ( xx [ 27 ] )
; xx [ 27 ] = xx [ 31 ] * xx [ 34 ] ; xx [ 35 ] = xx [ 30 ] + xx [ 28 ] - xx
[ 27 ] ; xx [ 36 ] = sin ( xx [ 19 ] ) ; xx [ 19 ] = xx [ 28 ] + xx [ 27 ] +
xx [ 30 ] ; xx [ 27 ] = xx [ 31 ] * xx [ 29 ] ; xx [ 28 ] = xx [ 25 ] * xx [
34 ] ; xx [ 29 ] = xx [ 25 ] * xx [ 33 ] ; xx [ 30 ] = xx [ 27 ] + xx [ 28 ]
- xx [ 29 ] ; xx [ 33 ] = xx [ 28 ] - xx [ 27 ] + xx [ 29 ] ; xx [ 37 ] = xx
[ 24 ] * xx [ 35 ] + xx [ 36 ] * xx [ 19 ] ; xx [ 38 ] = xx [ 30 ] * xx [ 24
] - xx [ 36 ] * xx [ 33 ] ; xx [ 39 ] = xx [ 24 ] * xx [ 33 ] + xx [ 30 ] *
xx [ 36 ] ; xx [ 40 ] = xx [ 24 ] * xx [ 19 ] - xx [ 36 ] * xx [ 35 ] ;
pm_math_quatCompose ( xx + 20 , xx + 37 , xx + 41 ) ; pm_math_quatCompose (
xx + 15 , xx + 41 , xx + 45 ) ; xx [ 27 ] = xx [ 1 ] * state [ 25 ] ; xx [ 28
] = sin ( xx [ 27 ] ) ; xx [ 29 ] = cos ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 47 ]
* xx [ 28 ] - xx [ 29 ] * xx [ 46 ] ; xx [ 34 ] = xx [ 48 ] * xx [ 28 ] - xx
[ 29 ] * xx [ 45 ] ; xx [ 49 ] = xx [ 45 ] * xx [ 28 ] + xx [ 29 ] * xx [ 48
] ; xx [ 50 ] = xx [ 29 ] * xx [ 47 ] + xx [ 46 ] * xx [ 28 ] ; xx [ 51 ] = -
xx [ 27 ] ; xx [ 52 ] = xx [ 34 ] ; xx [ 53 ] = xx [ 49 ] ; xx [ 54 ] = - xx
[ 50 ] ; pm_math_quatCompose ( xx + 11 , xx + 51 , xx + 55 ) ; xx [ 51 ] =
2.0 ; xx [ 52 ] = xx [ 49 ] * state [ 24 ] ; xx [ 53 ] = xx [ 34 ] * state [
24 ] ; xx [ 54 ] = xx [ 46 ] * state [ 26 ] ; xx [ 59 ] = xx [ 47 ] * state [
26 ] ; xx [ 60 ] = xx [ 3 ] * state [ 31 ] ; xx [ 61 ] = xx [ 3 ] * state [
32 ] ; xx [ 62 ] = state [ 31 ] - ( xx [ 3 ] * xx [ 60 ] - xx [ 5 ] * xx [ 61
] ) * xx [ 51 ] ; xx [ 63 ] = state [ 32 ] - xx [ 51 ] * ( xx [ 5 ] * xx [ 60
] + xx [ 3 ] * xx [ 61 ] ) ; xx [ 64 ] = state [ 33 ] ;
pm_math_quatInverseXform ( xx + 41 , xx + 62 , xx + 65 ) ; xx [ 41 ] = state
[ 38 ] ; xx [ 42 ] = state [ 39 ] ; xx [ 43 ] = state [ 40 ] ;
pm_math_quatInverseXform ( xx + 37 , xx + 41 , xx + 68 ) ; xx [ 37 ] = xx [
26 ] * state [ 42 ] ; xx [ 26 ] = xx [ 37 ] * xx [ 36 ] ; xx [ 38 ] = xx [ 32
] * state [ 42 ] ; xx [ 71 ] = xx [ 51 ] * ( xx [ 52 ] * xx [ 27 ] - xx [ 50
] * xx [ 53 ] ) + xx [ 51 ] * ( xx [ 48 ] * xx [ 54 ] - xx [ 45 ] * xx [ 59 ]
) + xx [ 65 ] + xx [ 68 ] + xx [ 51 ] * xx [ 26 ] * xx [ 36 ] - xx [ 37 ] ;
xx [ 72 ] = ( xx [ 45 ] * xx [ 54 ] + xx [ 48 ] * xx [ 59 ] ) * xx [ 51 ] +
xx [ 66 ] + xx [ 69 ] - xx [ 51 ] * xx [ 24 ] * xx [ 26 ] - ( xx [ 53 ] * xx
[ 27 ] + xx [ 50 ] * xx [ 52 ] ) * xx [ 51 ] ; xx [ 73 ] = state [ 24 ] - (
xx [ 53 ] * xx [ 34 ] + xx [ 49 ] * xx [ 52 ] ) * xx [ 51 ] + state [ 26 ] -
( xx [ 46 ] * xx [ 54 ] + xx [ 47 ] * xx [ 59 ] ) * xx [ 51 ] + xx [ 67 ] +
xx [ 70 ] - ( xx [ 38 ] + state [ 44 ] ) ; xx [ 26 ] = 7.599121945184391e-12
; xx [ 27 ] = 5.036130209737022e-12 ; xx [ 32 ] = 5.192027881355888e-12 ; xx
[ 44 ] = - xx [ 26 ] ; xx [ 45 ] = xx [ 27 ] ; xx [ 46 ] = - xx [ 32 ] ;
pm_math_cross3 ( xx + 71 , xx + 44 , xx + 47 ) ; pm_math_quatXform ( xx + 55
, xx + 47 , xx + 52 ) ; xx [ 34 ] = 0.02520954632904373 ; xx [ 39 ] = xx [ 8
] * xx [ 34 ] ; xx [ 40 ] = xx [ 10 ] * xx [ 34 ] ; xx [ 47 ] = xx [ 51 ] * (
xx [ 39 ] * xx [ 9 ] - xx [ 40 ] * xx [ 2 ] ) * state [ 24 ] ; xx [ 48 ] =
3.107391981487723e-12 ; xx [ 49 ] = 9.83617579279345e-12 ; xx [ 50 ] = xx [
48 ] * xx [ 29 ] + xx [ 49 ] * xx [ 28 ] ; xx [ 55 ] = ( xx [ 51 ] * xx [ 50
] * xx [ 28 ] - xx [ 49 ] ) * state [ 26 ] ; xx [ 56 ] = 3.641162862673871e-8
; xx [ 57 ] = 0.04575000000717538 ; xx [ 58 ] = - 2.926046524752066e-7 ;
pm_math_cross3 ( xx + 62 , xx + 56 , xx + 59 ) ; pm_math_quatXform ( xx + 15
, xx + 59 , xx + 65 ) ; xx [ 59 ] = xx [ 26 ] ; xx [ 60 ] = - xx [ 27 ] ; xx
[ 61 ] = xx [ 32 ] ; pm_math_cross3 ( xx + 41 , xx + 59 , xx + 68 ) ;
pm_math_quatXform ( xx + 20 , xx + 68 , xx + 71 ) ; xx [ 26 ] =
0.02540000000000025 ; xx [ 27 ] = xx [ 26 ] * xx [ 19 ] ; xx [ 32 ] = xx [ 30
] * xx [ 26 ] ; xx [ 68 ] = xx [ 51 ] * ( xx [ 27 ] * xx [ 35 ] - xx [ 32 ] *
xx [ 33 ] ) * state [ 42 ] ; xx [ 74 ] = xx [ 35 ] ; xx [ 75 ] = xx [ 30 ] ;
xx [ 76 ] = xx [ 33 ] ; xx [ 77 ] = xx [ 19 ] ; xx [ 69 ] =
2.191920996097441e-12 ; xx [ 70 ] = xx [ 69 ] * xx [ 36 ] ; xx [ 78 ] = xx [
70 ] * xx [ 36 ] ; xx [ 79 ] = 3.368449963403463e-13 ; xx [ 80 ] = xx [ 79 ]
* xx [ 36 ] ; xx [ 81 ] = xx [ 24 ] * xx [ 80 ] ; xx [ 82 ] = xx [ 69 ] - (
xx [ 78 ] - xx [ 81 ] ) * xx [ 51 ] ; xx [ 83 ] = xx [ 24 ] * xx [ 70 ] ; xx
[ 24 ] = xx [ 80 ] * xx [ 36 ] ; xx [ 36 ] = 0.02539999999999815 + xx [ 51 ]
* ( xx [ 83 ] + xx [ 24 ] ) - xx [ 79 ] ; xx [ 70 ] = 0.1524264000010511 ; xx
[ 84 ] = ( xx [ 51 ] * ( xx [ 78 ] - xx [ 81 ] ) - xx [ 69 ] ) * state [ 44 ]
- xx [ 38 ] * xx [ 82 ] ; xx [ 85 ] = ( ( xx [ 83 ] + xx [ 24 ] ) * xx [ 51 ]
- xx [ 79 ] ) * state [ 44 ] + xx [ 38 ] * xx [ 36 ] - xx [ 70 ] * xx [ 37 ]
; xx [ 86 ] = xx [ 37 ] * xx [ 82 ] ; pm_math_quatXform ( xx + 74 , xx + 84 ,
xx + 78 ) ; xx [ 83 ] = - xx [ 36 ] ; xx [ 84 ] = - xx [ 82 ] ; xx [ 85 ] = -
xx [ 70 ] ; pm_math_quatXform ( xx + 74 , xx + 83 , xx + 86 ) ; xx [ 24 ] =
0.09621024525612519 ; xx [ 36 ] = xx [ 24 ] * xx [ 33 ] ; xx [ 81 ] = xx [ 30
] ; xx [ 82 ] = xx [ 33 ] ; xx [ 83 ] = xx [ 19 ] ; xx [ 69 ] =
0.1158410329922703 ; xx [ 70 ] = xx [ 69 ] * xx [ 19 ] - xx [ 30 ] * xx [ 24
] ; xx [ 24 ] = xx [ 69 ] * xx [ 33 ] ; xx [ 89 ] = xx [ 36 ] ; xx [ 90 ] =
xx [ 70 ] ; xx [ 91 ] = - xx [ 24 ] ; pm_math_cross3 ( xx + 81 , xx + 89 , xx
+ 92 ) ; xx [ 69 ] = 0.1158410329997535 + ( xx [ 36 ] * xx [ 35 ] + xx [ 92 ]
) * xx [ 51 ] ; xx [ 36 ] = 5.088251355846174e-12 - ( xx [ 35 ] * xx [ 70 ] +
xx [ 93 ] ) * xx [ 51 ] ; xx [ 70 ] = 0.1002102452613437 + xx [ 51 ] * ( xx [
94 ] - xx [ 24 ] * xx [ 35 ] ) ; xx [ 81 ] = xx [ 86 ] - xx [ 69 ] ; xx [ 82
] = xx [ 87 ] + xx [ 36 ] ; xx [ 83 ] = xx [ 88 ] - xx [ 70 ] ;
pm_math_cross3 ( xx + 41 , xx + 81 , xx + 84 ) ; xx [ 24 ] = ( ( xx [ 27 ] *
xx [ 19 ] + xx [ 30 ] * xx [ 32 ] ) * xx [ 51 ] - xx [ 26 ] ) * state [ 42 ]
; xx [ 26 ] = xx [ 51 ] * ( xx [ 32 ] * xx [ 35 ] + xx [ 27 ] * xx [ 33 ] ) *
state [ 42 ] ; xx [ 87 ] = xx [ 68 ] + xx [ 78 ] + xx [ 84 ] ; xx [ 88 ] = xx
[ 24 ] + xx [ 79 ] + xx [ 85 ] ; xx [ 89 ] = xx [ 80 ] - xx [ 26 ] + xx [ 86
] ; pm_math_quatXform ( xx + 20 , xx + 87 , xx + 78 ) ; pm_math_quatXform (
xx + 20 , xx + 81 , xx + 84 ) ; xx [ 27 ] = 3.641924106626229e-8 ;
pm_math_quatXform ( xx + 20 , xx + 59 , xx + 81 ) ; xx [ 32 ] = xx [ 27 ] +
xx [ 81 ] ; xx [ 59 ] = 0.04574999999998041 ; xx [ 60 ] = xx [ 59 ] + xx [ 82
] ; xx [ 61 ] = 2.92603149291605e-7 ; xx [ 81 ] = xx [ 61 ] + xx [ 83 ] ; xx
[ 87 ] = xx [ 84 ] + xx [ 32 ] ; xx [ 88 ] = xx [ 85 ] + xx [ 60 ] ; xx [ 89
] = xx [ 86 ] + xx [ 81 ] ; pm_math_cross3 ( xx + 62 , xx + 87 , xx + 82 ) ;
xx [ 90 ] = xx [ 71 ] + xx [ 78 ] + xx [ 82 ] ; xx [ 91 ] = xx [ 72 ] + xx [
79 ] + xx [ 83 ] ; xx [ 92 ] = xx [ 73 ] + xx [ 80 ] + xx [ 84 ] ;
pm_math_quatXform ( xx + 15 , xx + 90 , xx + 78 ) ; pm_math_quatXform ( xx +
15 , xx + 87 , xx + 82 ) ; pm_math_quatXform ( xx + 15 , xx + 56 , xx + 85 )
; xx [ 88 ] = xx [ 83 ] + xx [ 86 ] ; xx [ 89 ] = xx [ 65 ] + xx [ 78 ] - xx
[ 88 ] * state [ 26 ] ; xx [ 83 ] = xx [ 82 ] + xx [ 85 ] ; xx [ 82 ] = xx [
66 ] + xx [ 79 ] + xx [ 83 ] * state [ 26 ] ; xx [ 84 ] = xx [ 82 ] * xx [ 29
] + xx [ 28 ] * xx [ 89 ] ; xx [ 87 ] = xx [ 88 ] * xx [ 29 ] + xx [ 83 ] *
xx [ 28 ] ; xx [ 90 ] = xx [ 48 ] * xx [ 28 ] - xx [ 49 ] * xx [ 29 ] ; xx [
91 ] = xx [ 49 ] + xx [ 51 ] * xx [ 90 ] * xx [ 29 ] ; xx [ 49 ] = ( xx [ 51
] * xx [ 50 ] * xx [ 29 ] - xx [ 48 ] ) * state [ 26 ] ; xx [ 48 ] = xx [ 51
] * xx [ 90 ] * xx [ 28 ] + 0.03194045366784892 ; xx [ 50 ] = xx [ 67 ] + xx
[ 80 ] ; xx [ 78 ] = xx [ 55 ] + xx [ 89 ] - xx [ 51 ] * xx [ 84 ] * xx [ 28
] - ( xx [ 88 ] - xx [ 51 ] * xx [ 87 ] * xx [ 29 ] + xx [ 91 ] ) * state [
24 ] ; xx [ 79 ] = xx [ 49 ] + xx [ 82 ] - xx [ 51 ] * xx [ 84 ] * xx [ 29 ]
+ ( xx [ 83 ] - xx [ 51 ] * xx [ 87 ] * xx [ 28 ] + xx [ 48 ] ) * state [ 24
] ; xx [ 80 ] = xx [ 50 ] - ( xx [ 29 ] * xx [ 50 ] * xx [ 29 ] + xx [ 50 ] *
xx [ 28 ] * xx [ 28 ] ) * xx [ 51 ] ; pm_math_quatXform ( xx + 11 , xx + 78 ,
xx + 82 ) ; xx [ 50 ] = 0.389585375426561 ; xx [ 78 ] = xx [ 1 ] * state [ 64
] ; xx [ 79 ] = cos ( xx [ 78 ] ) ; xx [ 80 ] = 0.3895819001770367 ; xx [ 87
] = sin ( xx [ 78 ] ) ; xx [ 78 ] = xx [ 50 ] * xx [ 79 ] - xx [ 80 ] * xx [
87 ] ; xx [ 88 ] = 0.5901074779979936 ; xx [ 89 ] = 0.5901036711621467 ; xx [
90 ] = xx [ 88 ] * xx [ 79 ] + xx [ 89 ] * xx [ 87 ] ; xx [ 92 ] = xx [ 89 ]
* xx [ 79 ] - xx [ 88 ] * xx [ 87 ] ; xx [ 88 ] = xx [ 80 ] * xx [ 79 ] + xx
[ 50 ] * xx [ 87 ] ; xx [ 93 ] = xx [ 78 ] ; xx [ 94 ] = - xx [ 90 ] ; xx [
95 ] = xx [ 92 ] ; xx [ 96 ] = - xx [ 88 ] ; xx [ 50 ] = xx [ 5 ] * state [
70 ] - xx [ 3 ] * state [ 69 ] ; xx [ 79 ] = xx [ 1 ] * state [ 66 ] ; xx [
80 ] = sin ( xx [ 79 ] ) ; xx [ 87 ] = cos ( xx [ 79 ] ) ; xx [ 79 ] = xx [ 3
] * state [ 70 ] + xx [ 5 ] * state [ 69 ] ; xx [ 89 ] = xx [ 50 ] * xx [ 80
] - xx [ 87 ] * xx [ 79 ] ; xx [ 97 ] = xx [ 3 ] * state [ 68 ] + xx [ 5 ] *
state [ 71 ] ; xx [ 98 ] = xx [ 3 ] * state [ 71 ] - xx [ 5 ] * state [ 68 ]
; xx [ 99 ] = xx [ 80 ] * xx [ 97 ] + xx [ 87 ] * xx [ 98 ] ; xx [ 100 ] = xx
[ 80 ] * xx [ 98 ] - xx [ 87 ] * xx [ 97 ] ; xx [ 101 ] = xx [ 50 ] * xx [ 87
] + xx [ 80 ] * xx [ 79 ] ; xx [ 102 ] = xx [ 89 ] ; xx [ 103 ] = - xx [ 99 ]
; xx [ 104 ] = xx [ 100 ] ; xx [ 105 ] = xx [ 101 ] ; pm_math_quatCompose (
xx + 93 , xx + 102 , xx + 106 ) ; xx [ 102 ] = xx [ 100 ] * state [ 65 ] ; xx
[ 103 ] = xx [ 99 ] * state [ 65 ] ; xx [ 104 ] = xx [ 50 ] * state [ 67 ] ;
xx [ 105 ] = xx [ 79 ] * state [ 67 ] ; xx [ 110 ] = xx [ 3 ] * state [ 72 ]
; xx [ 111 ] = xx [ 3 ] * state [ 73 ] ; xx [ 112 ] = state [ 72 ] - ( xx [ 3
] * xx [ 110 ] - xx [ 5 ] * xx [ 111 ] ) * xx [ 51 ] ; xx [ 113 ] = state [
73 ] - xx [ 51 ] * ( xx [ 5 ] * xx [ 110 ] + xx [ 3 ] * xx [ 111 ] ) ; xx [
114 ] = xx [ 51 ] * ( xx [ 89 ] * xx [ 102 ] + xx [ 103 ] * xx [ 101 ] ) + (
xx [ 104 ] * xx [ 98 ] + xx [ 105 ] * xx [ 97 ] ) * xx [ 51 ] + xx [ 112 ] ;
xx [ 115 ] = xx [ 51 ] * ( xx [ 104 ] * xx [ 97 ] - xx [ 105 ] * xx [ 98 ] )
+ xx [ 113 ] - ( xx [ 102 ] * xx [ 101 ] - xx [ 89 ] * xx [ 103 ] ) * xx [ 51
] ; xx [ 116 ] = ( xx [ 103 ] * xx [ 99 ] + xx [ 100 ] * xx [ 102 ] ) * xx [
51 ] - state [ 65 ] + state [ 67 ] - ( xx [ 105 ] * xx [ 79 ] + xx [ 50 ] *
xx [ 104 ] ) * xx [ 51 ] + state [ 74 ] ; xx [ 99 ] = xx [ 27 ] ; xx [ 100 ]
= xx [ 59 ] ; xx [ 101 ] = xx [ 61 ] ; pm_math_cross3 ( xx + 114 , xx + 99 ,
xx + 102 ) ; pm_math_quatXform ( xx + 106 , xx + 102 , xx + 114 ) ; xx [ 27 ]
= xx [ 34 ] * xx [ 90 ] ; xx [ 59 ] = xx [ 34 ] * xx [ 88 ] ; xx [ 61 ] =
6.924287580811761e-12 ; xx [ 89 ] = 1.024070757638107e-11 ; xx [ 102 ] = xx [
61 ] * xx [ 80 ] - xx [ 89 ] * xx [ 87 ] ; xx [ 103 ] = xx [ 98 ] ; xx [ 104
] = - xx [ 79 ] ; xx [ 105 ] = - xx [ 50 ] ; xx [ 106 ] = - xx [ 97 ] ; xx [
107 ] = xx [ 112 ] ; xx [ 108 ] = xx [ 113 ] ; xx [ 109 ] = state [ 74 ] ;
pm_math_cross3 ( xx + 107 , xx + 56 , xx + 110 ) ; pm_math_quatXform ( xx +
103 , xx + 110 , xx + 107 ) ; pm_math_quatXform ( xx + 103 , xx + 56 , xx +
110 ) ; xx [ 50 ] = xx [ 107 ] - xx [ 111 ] * state [ 67 ] ; xx [ 79 ] = xx [
108 ] + xx [ 110 ] * state [ 67 ] ; xx [ 97 ] = xx [ 79 ] * xx [ 87 ] + xx [
80 ] * xx [ 50 ] ; xx [ 98 ] = xx [ 61 ] * xx [ 87 ] + xx [ 89 ] * xx [ 80 ]
; xx [ 103 ] = xx [ 87 ] * xx [ 111 ] + xx [ 110 ] * xx [ 80 ] ; xx [ 104 ] =
( xx [ 61 ] - xx [ 51 ] * xx [ 102 ] * xx [ 80 ] ) * state [ 67 ] + xx [ 50 ]
- xx [ 51 ] * xx [ 97 ] * xx [ 80 ] + ( xx [ 111 ] + xx [ 51 ] * xx [ 98 ] *
xx [ 87 ] - xx [ 51 ] * xx [ 103 ] * xx [ 87 ] - xx [ 61 ] ) * state [ 65 ] ;
xx [ 105 ] = xx [ 79 ] - xx [ 51 ] * xx [ 97 ] * xx [ 87 ] - ( xx [ 89 ] + xx
[ 51 ] * xx [ 102 ] * xx [ 87 ] ) * state [ 67 ] - ( xx [ 110 ] + xx [ 51 ] *
xx [ 98 ] * xx [ 80 ] - xx [ 51 ] * xx [ 103 ] * xx [ 80 ] +
0.03194045366071555 ) * state [ 65 ] ; xx [ 106 ] = xx [ 109 ] - ( xx [ 87 ]
* xx [ 87 ] * xx [ 109 ] + xx [ 109 ] * xx [ 80 ] * xx [ 80 ] ) * xx [ 51 ] ;
pm_math_quatXform ( xx + 93 , xx + 104 , xx + 107 ) ; xx [ 50 ] = ( xx [ 34 ]
- ( xx [ 10 ] * xx [ 40 ] + xx [ 8 ] * xx [ 39 ] ) * xx [ 51 ] ) * state [ 24
] ; xx [ 8 ] = xx [ 51 ] * ( xx [ 39 ] * xx [ 2 ] + xx [ 40 ] * xx [ 9 ] ) *
state [ 24 ] ; xx [ 2 ] = xx [ 1 ] * state [ 45 ] ; xx [ 9 ] = sin ( xx [ 2 ]
) ; xx [ 10 ] = xx [ 31 ] * xx [ 9 ] ; xx [ 39 ] = cos ( xx [ 2 ] ) ; xx [ 2
] = xx [ 31 ] * xx [ 39 ] ; xx [ 31 ] = xx [ 10 ] - xx [ 2 ] ; xx [ 40 ] = xx
[ 25 ] * xx [ 39 ] ; xx [ 39 ] = xx [ 25 ] * xx [ 9 ] ; xx [ 9 ] = xx [ 40 ]
+ xx [ 39 ] ; xx [ 25 ] = - xx [ 9 ] ; xx [ 61 ] = xx [ 39 ] - xx [ 40 ] ; xx
[ 39 ] = xx [ 10 ] + xx [ 2 ] ; xx [ 2 ] = - xx [ 39 ] ; xx [ 93 ] = xx [ 31
] ; xx [ 94 ] = xx [ 25 ] ; xx [ 95 ] = xx [ 61 ] ; xx [ 96 ] = xx [ 2 ] ;
pm_math_quatCompose ( xx + 74 , xx + 93 , xx + 102 ) ; pm_math_quatCompose (
xx + 20 , xx + 102 , xx + 110 ) ; pm_math_quatCompose ( xx + 15 , xx + 110 ,
xx + 117 ) ; xx [ 10 ] = xx [ 119 ] * xx [ 28 ] - xx [ 29 ] * xx [ 118 ] ; xx
[ 40 ] = xx [ 120 ] * xx [ 28 ] - xx [ 29 ] * xx [ 117 ] ; xx [ 79 ] = xx [
117 ] * xx [ 28 ] + xx [ 29 ] * xx [ 120 ] ; xx [ 80 ] = xx [ 29 ] * xx [ 119
] + xx [ 118 ] * xx [ 28 ] ; xx [ 121 ] = - xx [ 10 ] ; xx [ 122 ] = xx [ 40
] ; xx [ 123 ] = xx [ 79 ] ; xx [ 124 ] = - xx [ 80 ] ; pm_math_quatCompose (
xx + 11 , xx + 121 , xx + 125 ) ; xx [ 87 ] = xx [ 79 ] * state [ 24 ] ; xx [
89 ] = xx [ 40 ] * state [ 24 ] ; xx [ 97 ] = xx [ 118 ] * state [ 26 ] ; xx
[ 98 ] = xx [ 119 ] * state [ 26 ] ; pm_math_quatInverseXform ( xx + 110 , xx
+ 62 , xx + 121 ) ; pm_math_quatInverseXform ( xx + 102 , xx + 41 , xx + 110
) ; xx [ 102 ] = xx [ 25 ] ; xx [ 103 ] = xx [ 61 ] ; xx [ 104 ] = xx [ 2 ] ;
xx [ 2 ] = xx [ 38 ] * xx [ 61 ] ; xx [ 25 ] = xx [ 39 ] * xx [ 37 ] - xx [ 9
] * xx [ 38 ] ; xx [ 105 ] = xx [ 37 ] * xx [ 61 ] ; xx [ 129 ] = - xx [ 2 ]
; xx [ 130 ] = xx [ 25 ] ; xx [ 131 ] = xx [ 105 ] ; pm_math_cross3 ( xx +
102 , xx + 129 , xx + 132 ) ; xx [ 129 ] = xx [ 51 ] * ( xx [ 87 ] * xx [ 10
] - xx [ 80 ] * xx [ 89 ] ) + xx [ 51 ] * ( xx [ 120 ] * xx [ 97 ] - xx [ 117
] * xx [ 98 ] ) + xx [ 121 ] + xx [ 110 ] + xx [ 51 ] * ( xx [ 132 ] + xx [ 2
] * xx [ 31 ] ) - xx [ 37 ] ; xx [ 130 ] = ( xx [ 117 ] * xx [ 97 ] + xx [
120 ] * xx [ 98 ] ) * xx [ 51 ] + xx [ 122 ] + xx [ 111 ] + xx [ 51 ] * ( xx
[ 133 ] - xx [ 25 ] * xx [ 31 ] ) - ( xx [ 89 ] * xx [ 10 ] + xx [ 80 ] * xx
[ 87 ] ) * xx [ 51 ] ; xx [ 131 ] = state [ 24 ] - ( xx [ 89 ] * xx [ 40 ] +
xx [ 79 ] * xx [ 87 ] ) * xx [ 51 ] + state [ 26 ] - ( xx [ 118 ] * xx [ 97 ]
+ xx [ 119 ] * xx [ 98 ] ) * xx [ 51 ] + xx [ 123 ] + xx [ 112 ] + ( xx [ 134
] - xx [ 105 ] * xx [ 31 ] ) * xx [ 51 ] - xx [ 38 ] + state [ 46 ] ;
pm_math_cross3 ( xx + 129 , xx + 44 , xx + 110 ) ; pm_math_quatXform ( xx +
125 , xx + 110 , xx + 117 ) ; xx [ 2 ] = 1.121202762681406e-11 ; xx [ 10 ] =
xx [ 39 ] * xx [ 2 ] ; xx [ 25 ] = 6.145027516349377e-13 ; xx [ 40 ] = xx [
39 ] * xx [ 25 ] ; xx [ 39 ] = xx [ 25 ] * xx [ 61 ] - xx [ 9 ] * xx [ 2 ] ;
xx [ 110 ] = xx [ 10 ] ; xx [ 111 ] = xx [ 40 ] ; xx [ 112 ] = xx [ 39 ] ;
pm_math_cross3 ( xx + 102 , xx + 110 , xx + 120 ) ; xx [ 102 ] = - xx [ 2 ] ;
xx [ 103 ] = - xx [ 25 ] ; xx [ 104 ] = - 3.999999999522439e-3 ;
pm_math_quatXform ( xx + 93 , xx + 102 , xx + 110 ) ; xx [ 9 ] =
0.05221615474387575 - xx [ 112 ] ; xx [ 61 ] = 0.1412410329922704 - xx [ 110
] ; xx [ 93 ] = ( xx [ 51 ] * ( xx [ 120 ] + xx [ 10 ] * xx [ 31 ] ) - xx [
25 ] ) * state [ 46 ] - xx [ 111 ] * xx [ 38 ] ; xx [ 94 ] = ( xx [ 2 ] + (
xx [ 40 ] * xx [ 31 ] + xx [ 121 ] ) * xx [ 51 ] ) * state [ 46 ] + xx [ 37 ]
* xx [ 9 ] - xx [ 38 ] * xx [ 61 ] ; xx [ 95 ] = xx [ 51 ] * ( xx [ 39 ] * xx
[ 31 ] + xx [ 122 ] ) * state [ 46 ] + xx [ 111 ] * xx [ 37 ] ;
pm_math_quatXform ( xx + 74 , xx + 93 , xx + 96 ) ; xx [ 93 ] = xx [ 61 ] ;
xx [ 94 ] = - xx [ 111 ] ; xx [ 95 ] = xx [ 9 ] ; pm_math_quatXform ( xx + 74
, xx + 93 , xx + 102 ) ; xx [ 93 ] = xx [ 102 ] - xx [ 69 ] ; xx [ 94 ] = xx
[ 103 ] + xx [ 36 ] ; xx [ 95 ] = xx [ 104 ] - xx [ 70 ] ; pm_math_cross3 (
xx + 41 , xx + 93 , xx + 102 ) ; xx [ 110 ] = xx [ 68 ] + xx [ 96 ] + xx [
102 ] ; xx [ 111 ] = xx [ 24 ] + xx [ 97 ] + xx [ 103 ] ; xx [ 112 ] = xx [
98 ] - xx [ 26 ] + xx [ 104 ] ; pm_math_quatXform ( xx + 20 , xx + 110 , xx +
96 ) ; pm_math_quatXform ( xx + 20 , xx + 93 , xx + 102 ) ; xx [ 93 ] = xx [
102 ] + xx [ 32 ] ; xx [ 94 ] = xx [ 103 ] + xx [ 60 ] ; xx [ 95 ] = xx [ 104
] + xx [ 81 ] ; pm_math_cross3 ( xx + 62 , xx + 93 , xx + 102 ) ; xx [ 110 ]
= xx [ 71 ] + xx [ 96 ] + xx [ 102 ] ; xx [ 111 ] = xx [ 72 ] + xx [ 97 ] +
xx [ 103 ] ; xx [ 112 ] = xx [ 73 ] + xx [ 98 ] + xx [ 104 ] ;
pm_math_quatXform ( xx + 15 , xx + 110 , xx + 96 ) ; pm_math_quatXform ( xx +
15 , xx + 93 , xx + 102 ) ; xx [ 2 ] = xx [ 103 ] + xx [ 86 ] ; xx [ 9 ] = xx
[ 65 ] + xx [ 96 ] - xx [ 2 ] * state [ 26 ] ; xx [ 10 ] = xx [ 102 ] + xx [
85 ] ; xx [ 25 ] = xx [ 66 ] + xx [ 97 ] + xx [ 10 ] * state [ 26 ] ; xx [ 31
] = xx [ 25 ] * xx [ 29 ] + xx [ 28 ] * xx [ 9 ] ; xx [ 39 ] = xx [ 2 ] * xx
[ 29 ] + xx [ 10 ] * xx [ 28 ] ; xx [ 40 ] = xx [ 67 ] + xx [ 98 ] ; xx [ 93
] = xx [ 55 ] + xx [ 9 ] - xx [ 51 ] * xx [ 31 ] * xx [ 28 ] - ( xx [ 2 ] -
xx [ 51 ] * xx [ 39 ] * xx [ 29 ] + xx [ 91 ] ) * state [ 24 ] ; xx [ 94 ] =
xx [ 49 ] + xx [ 25 ] - xx [ 51 ] * xx [ 31 ] * xx [ 29 ] + ( xx [ 10 ] - xx
[ 51 ] * xx [ 39 ] * xx [ 28 ] + xx [ 48 ] ) * state [ 24 ] ; xx [ 95 ] = xx
[ 40 ] - ( xx [ 29 ] * xx [ 40 ] * xx [ 29 ] + xx [ 40 ] * xx [ 28 ] * xx [
28 ] ) * xx [ 51 ] ; pm_math_quatXform ( xx + 11 , xx + 93 , xx + 96 ) ; xx [
2 ] = xx [ 1 ] * state [ 53 ] ; xx [ 9 ] = cos ( xx [ 2 ] ) ; xx [ 10 ] = sin
( xx [ 2 ] ) ; xx [ 2 ] = xx [ 0 ] * xx [ 9 ] + xx [ 4 ] * xx [ 10 ] ; xx [
25 ] = xx [ 6 ] * xx [ 10 ] - xx [ 7 ] * xx [ 9 ] ; xx [ 31 ] = xx [ 6 ] * xx
[ 9 ] + xx [ 7 ] * xx [ 10 ] ; xx [ 6 ] = xx [ 0 ] * xx [ 10 ] - xx [ 4 ] *
xx [ 9 ] ; xx [ 102 ] = xx [ 2 ] ; xx [ 103 ] = xx [ 25 ] ; xx [ 104 ] = xx [
31 ] ; xx [ 105 ] = xx [ 6 ] ; xx [ 0 ] = xx [ 5 ] * state [ 59 ] - xx [ 3 ]
* state [ 58 ] ; xx [ 4 ] = xx [ 1 ] * state [ 55 ] ; xx [ 7 ] = sin ( xx [ 4
] ) ; xx [ 9 ] = cos ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 3 ] * state [ 59 ] + xx [
5 ] * state [ 58 ] ; xx [ 10 ] = xx [ 0 ] * xx [ 7 ] - xx [ 9 ] * xx [ 4 ] ;
xx [ 39 ] = xx [ 3 ] * state [ 57 ] + xx [ 5 ] * state [ 60 ] ; xx [ 40 ] =
xx [ 3 ] * state [ 60 ] - xx [ 5 ] * state [ 57 ] ; xx [ 61 ] = xx [ 7 ] * xx
[ 39 ] + xx [ 9 ] * xx [ 40 ] ; xx [ 79 ] = xx [ 7 ] * xx [ 40 ] - xx [ 9 ] *
xx [ 39 ] ; xx [ 80 ] = xx [ 0 ] * xx [ 9 ] + xx [ 7 ] * xx [ 4 ] ; xx [ 110
] = xx [ 10 ] ; xx [ 111 ] = - xx [ 61 ] ; xx [ 112 ] = xx [ 79 ] ; xx [ 113
] = xx [ 80 ] ; pm_math_quatCompose ( xx + 102 , xx + 110 , xx + 120 ) ; xx [
87 ] = xx [ 0 ] * state [ 56 ] ; xx [ 89 ] = xx [ 4 ] * state [ 56 ] ; xx [
93 ] = xx [ 3 ] * state [ 61 ] ; xx [ 94 ] = xx [ 3 ] * state [ 62 ] ; xx [
95 ] = state [ 61 ] - ( xx [ 3 ] * xx [ 93 ] - xx [ 5 ] * xx [ 94 ] ) * xx [
51 ] ; xx [ 106 ] = xx [ 61 ] * state [ 54 ] ; xx [ 110 ] = xx [ 79 ] * state
[ 54 ] ; xx [ 111 ] = state [ 62 ] - xx [ 51 ] * ( xx [ 5 ] * xx [ 93 ] + xx
[ 3 ] * xx [ 94 ] ) ; xx [ 124 ] = ( xx [ 87 ] * xx [ 40 ] + xx [ 89 ] * xx [
39 ] ) * xx [ 51 ] + xx [ 95 ] - xx [ 51 ] * ( xx [ 106 ] * xx [ 80 ] + xx [
10 ] * xx [ 110 ] ) ; xx [ 125 ] = ( xx [ 110 ] * xx [ 80 ] - xx [ 10 ] * xx
[ 106 ] ) * xx [ 51 ] + xx [ 51 ] * ( xx [ 87 ] * xx [ 39 ] - xx [ 89 ] * xx
[ 40 ] ) + xx [ 111 ] ; xx [ 126 ] = state [ 54 ] - ( xx [ 106 ] * xx [ 61 ]
+ xx [ 79 ] * xx [ 110 ] ) * xx [ 51 ] + state [ 56 ] - ( xx [ 89 ] * xx [ 4
] + xx [ 0 ] * xx [ 87 ] ) * xx [ 51 ] + state [ 63 ] ; pm_math_cross3 ( xx +
124 , xx + 99 , xx + 127 ) ; pm_math_quatXform ( xx + 120 , xx + 127 , xx +
124 ) ; xx [ 10 ] = 0.02520954632904374 ; xx [ 61 ] = xx [ 25 ] * xx [ 10 ] ;
xx [ 79 ] = xx [ 6 ] * xx [ 10 ] ; xx [ 80 ] = 5.443558296964576e-12 ; xx [
87 ] = 9.27756931389703e-12 ; xx [ 89 ] = xx [ 87 ] * xx [ 9 ] + xx [ 80 ] *
xx [ 7 ] ; xx [ 120 ] = xx [ 40 ] ; xx [ 121 ] = - xx [ 4 ] ; xx [ 122 ] = -
xx [ 0 ] ; xx [ 123 ] = - xx [ 39 ] ; xx [ 127 ] = xx [ 95 ] ; xx [ 128 ] =
xx [ 111 ] ; xx [ 129 ] = state [ 63 ] ; pm_math_cross3 ( xx + 127 , xx + 56
, xx + 93 ) ; pm_math_quatXform ( xx + 120 , xx + 93 , xx + 110 ) ;
pm_math_quatXform ( xx + 120 , xx + 56 , xx + 93 ) ; xx [ 0 ] = xx [ 110 ] -
xx [ 94 ] * state [ 56 ] ; xx [ 4 ] = xx [ 111 ] + xx [ 93 ] * state [ 56 ] ;
xx [ 39 ] = xx [ 4 ] * xx [ 9 ] + xx [ 7 ] * xx [ 0 ] ; xx [ 40 ] = xx [ 80 ]
* xx [ 9 ] - xx [ 87 ] * xx [ 7 ] ; xx [ 95 ] = xx [ 9 ] * xx [ 94 ] + xx [
93 ] * xx [ 7 ] ; xx [ 120 ] = ( xx [ 80 ] - xx [ 51 ] * xx [ 89 ] * xx [ 7 ]
) * state [ 56 ] + xx [ 0 ] - xx [ 51 ] * xx [ 39 ] * xx [ 7 ] - ( xx [ 94 ]
+ xx [ 51 ] * xx [ 40 ] * xx [ 9 ] - xx [ 51 ] * xx [ 95 ] * xx [ 9 ] - xx [
80 ] ) * state [ 54 ] ; xx [ 121 ] = ( xx [ 87 ] - xx [ 51 ] * xx [ 89 ] * xx
[ 9 ] ) * state [ 56 ] + xx [ 4 ] - xx [ 51 ] * xx [ 39 ] * xx [ 9 ] + ( xx [
93 ] + xx [ 51 ] * xx [ 40 ] * xx [ 7 ] - xx [ 51 ] * xx [ 95 ] * xx [ 7 ] +
0.03194045368023388 ) * state [ 54 ] ; xx [ 122 ] = xx [ 112 ] - ( xx [ 9 ] *
xx [ 9 ] * xx [ 112 ] + xx [ 112 ] * xx [ 7 ] * xx [ 7 ] ) * xx [ 51 ] ;
pm_math_quatXform ( xx + 102 , xx + 120 , xx + 93 ) ; xx [ 0 ] =
0.3535533905932758 ; xx [ 4 ] = xx [ 1 ] * state [ 47 ] ; xx [ 7 ] = cos ( xx
[ 4 ] ) ; xx [ 9 ] = xx [ 0 ] * xx [ 7 ] ; xx [ 39 ] = sin ( xx [ 4 ] ) ; xx
[ 4 ] = xx [ 0 ] * xx [ 39 ] ; xx [ 40 ] = xx [ 9 ] + xx [ 4 ] ; xx [ 80 ] =
0.6123724356957934 ; xx [ 87 ] = xx [ 80 ] * xx [ 39 ] ; xx [ 39 ] = xx [ 80
] * xx [ 7 ] ; xx [ 7 ] = xx [ 87 ] - xx [ 39 ] ; xx [ 89 ] = xx [ 39 ] + xx
[ 87 ] ; xx [ 39 ] = - xx [ 89 ] ; xx [ 87 ] = xx [ 4 ] - xx [ 9 ] ; xx [ 102
] = - xx [ 40 ] ; xx [ 103 ] = xx [ 7 ] ; xx [ 104 ] = xx [ 39 ] ; xx [ 105 ]
= xx [ 87 ] ; pm_math_quatCompose ( xx + 74 , xx + 102 , xx + 110 ) ;
pm_math_quatCompose ( xx + 20 , xx + 110 , xx + 120 ) ; pm_math_quatCompose (
xx + 15 , xx + 120 , xx + 127 ) ; xx [ 4 ] = xx [ 129 ] * xx [ 28 ] - xx [ 29
] * xx [ 128 ] ; xx [ 9 ] = xx [ 130 ] * xx [ 28 ] - xx [ 29 ] * xx [ 127 ] ;
xx [ 106 ] = xx [ 127 ] * xx [ 28 ] + xx [ 29 ] * xx [ 130 ] ; xx [ 131 ] =
xx [ 29 ] * xx [ 129 ] + xx [ 128 ] * xx [ 28 ] ; xx [ 132 ] = - xx [ 4 ] ;
xx [ 133 ] = xx [ 9 ] ; xx [ 134 ] = xx [ 106 ] ; xx [ 135 ] = - xx [ 131 ] ;
pm_math_quatCompose ( xx + 11 , xx + 132 , xx + 136 ) ; xx [ 132 ] = xx [ 106
] * state [ 24 ] ; xx [ 133 ] = xx [ 9 ] * state [ 24 ] ; xx [ 134 ] = xx [
128 ] * state [ 26 ] ; xx [ 135 ] = xx [ 129 ] * state [ 26 ] ;
pm_math_quatInverseXform ( xx + 120 , xx + 62 , xx + 140 ) ;
pm_math_quatInverseXform ( xx + 110 , xx + 41 , xx + 120 ) ; xx [ 110 ] = xx
[ 7 ] ; xx [ 111 ] = xx [ 39 ] ; xx [ 112 ] = xx [ 87 ] ; xx [ 39 ] = xx [ 89
] * xx [ 38 ] ; xx [ 113 ] = xx [ 38 ] * xx [ 7 ] - xx [ 37 ] * xx [ 87 ] ;
xx [ 123 ] = xx [ 89 ] * xx [ 37 ] ; xx [ 143 ] = xx [ 39 ] ; xx [ 144 ] = xx
[ 113 ] ; xx [ 145 ] = - xx [ 123 ] ; pm_math_cross3 ( xx + 110 , xx + 143 ,
xx + 146 ) ; xx [ 143 ] = xx [ 51 ] * ( xx [ 132 ] * xx [ 4 ] - xx [ 131 ] *
xx [ 133 ] ) + xx [ 51 ] * ( xx [ 130 ] * xx [ 134 ] - xx [ 127 ] * xx [ 135
] ) + xx [ 140 ] + xx [ 120 ] + xx [ 51 ] * ( xx [ 146 ] + xx [ 40 ] * xx [
39 ] ) - xx [ 37 ] ; xx [ 144 ] = ( xx [ 127 ] * xx [ 134 ] + xx [ 130 ] * xx
[ 135 ] ) * xx [ 51 ] + xx [ 141 ] + xx [ 121 ] + xx [ 51 ] * ( xx [ 147 ] +
xx [ 40 ] * xx [ 113 ] ) - ( xx [ 133 ] * xx [ 4 ] + xx [ 131 ] * xx [ 132 ]
) * xx [ 51 ] ; xx [ 145 ] = state [ 24 ] - ( xx [ 133 ] * xx [ 9 ] + xx [
106 ] * xx [ 132 ] ) * xx [ 51 ] + state [ 26 ] - ( xx [ 128 ] * xx [ 134 ] +
xx [ 129 ] * xx [ 135 ] ) * xx [ 51 ] + xx [ 142 ] + xx [ 122 ] + ( xx [ 148
] - xx [ 40 ] * xx [ 123 ] ) * xx [ 51 ] - xx [ 38 ] - state [ 48 ] ;
pm_math_cross3 ( xx + 143 , xx + 44 , xx + 120 ) ; pm_math_quatXform ( xx +
136 , xx + 120 , xx + 127 ) ; xx [ 4 ] = 3.80025733104361e-12 ; xx [ 9 ] =
3.881762117297072e-12 ; xx [ 39 ] = xx [ 9 ] * xx [ 87 ] ; xx [ 106 ] = xx [
4 ] * xx [ 87 ] ; xx [ 87 ] = xx [ 9 ] * xx [ 7 ] + xx [ 89 ] * xx [ 4 ] ; xx
[ 120 ] = - xx [ 39 ] ; xx [ 121 ] = xx [ 106 ] ; xx [ 122 ] = xx [ 87 ] ;
pm_math_cross3 ( xx + 110 , xx + 120 , xx + 130 ) ; xx [ 110 ] = xx [ 9 ] ;
xx [ 111 ] = - xx [ 4 ] ; xx [ 112 ] = 3.999999998874377e-3 ;
pm_math_quatXform ( xx + 102 , xx + 110 , xx + 120 ) ; xx [ 7 ] =
0.1412410329922711 + xx [ 120 ] ; xx [ 89 ] = 0.05221615474387407 - xx [ 122
] ; xx [ 102 ] = ( xx [ 4 ] + xx [ 51 ] * ( xx [ 130 ] + xx [ 40 ] * xx [ 39
] ) ) * state [ 48 ] - xx [ 121 ] * xx [ 38 ] ; xx [ 103 ] = ( xx [ 9 ] + (
xx [ 131 ] - xx [ 40 ] * xx [ 106 ] ) * xx [ 51 ] ) * state [ 48 ] + xx [ 38
] * xx [ 7 ] + xx [ 37 ] * xx [ 89 ] ; xx [ 104 ] = xx [ 51 ] * ( xx [ 132 ]
- xx [ 40 ] * xx [ 87 ] ) * state [ 48 ] + xx [ 121 ] * xx [ 37 ] ;
pm_math_quatXform ( xx + 74 , xx + 102 , xx + 110 ) ; xx [ 102 ] = - xx [ 7 ]
; xx [ 103 ] = - xx [ 121 ] ; xx [ 104 ] = xx [ 89 ] ; pm_math_quatXform ( xx
+ 74 , xx + 102 , xx + 120 ) ; xx [ 102 ] = xx [ 120 ] - xx [ 69 ] ; xx [ 103
] = xx [ 121 ] + xx [ 36 ] ; xx [ 104 ] = xx [ 122 ] - xx [ 70 ] ;
pm_math_cross3 ( xx + 41 , xx + 102 , xx + 120 ) ; xx [ 130 ] = xx [ 68 ] +
xx [ 110 ] + xx [ 120 ] ; xx [ 131 ] = xx [ 24 ] + xx [ 111 ] + xx [ 121 ] ;
xx [ 132 ] = xx [ 112 ] - xx [ 26 ] + xx [ 122 ] ; pm_math_quatXform ( xx +
20 , xx + 130 , xx + 110 ) ; pm_math_quatXform ( xx + 20 , xx + 102 , xx +
120 ) ; xx [ 102 ] = xx [ 120 ] + xx [ 32 ] ; xx [ 103 ] = xx [ 121 ] + xx [
60 ] ; xx [ 104 ] = xx [ 122 ] + xx [ 81 ] ; pm_math_cross3 ( xx + 62 , xx +
102 , xx + 120 ) ; xx [ 130 ] = xx [ 71 ] + xx [ 110 ] + xx [ 120 ] ; xx [
131 ] = xx [ 72 ] + xx [ 111 ] + xx [ 121 ] ; xx [ 132 ] = xx [ 73 ] + xx [
112 ] + xx [ 122 ] ; pm_math_quatXform ( xx + 15 , xx + 130 , xx + 110 ) ;
pm_math_quatXform ( xx + 15 , xx + 102 , xx + 120 ) ; xx [ 4 ] = xx [ 121 ] +
xx [ 86 ] ; xx [ 7 ] = xx [ 65 ] + xx [ 110 ] - xx [ 4 ] * state [ 26 ] ; xx
[ 9 ] = xx [ 120 ] + xx [ 85 ] ; xx [ 39 ] = xx [ 66 ] + xx [ 111 ] + xx [ 9
] * state [ 26 ] ; xx [ 40 ] = xx [ 39 ] * xx [ 29 ] + xx [ 28 ] * xx [ 7 ] ;
xx [ 87 ] = xx [ 4 ] * xx [ 29 ] + xx [ 9 ] * xx [ 28 ] ; xx [ 89 ] = xx [ 67
] + xx [ 112 ] ; xx [ 102 ] = xx [ 55 ] + xx [ 7 ] - xx [ 51 ] * xx [ 40 ] *
xx [ 28 ] - ( xx [ 4 ] - xx [ 51 ] * xx [ 87 ] * xx [ 29 ] + xx [ 91 ] ) *
state [ 24 ] ; xx [ 103 ] = xx [ 49 ] + xx [ 39 ] - xx [ 51 ] * xx [ 40 ] *
xx [ 29 ] + ( xx [ 9 ] - xx [ 51 ] * xx [ 87 ] * xx [ 28 ] + xx [ 48 ] ) *
state [ 24 ] ; xx [ 104 ] = xx [ 89 ] - ( xx [ 29 ] * xx [ 89 ] * xx [ 29 ] +
xx [ 89 ] * xx [ 28 ] * xx [ 28 ] ) * xx [ 51 ] ; pm_math_quatXform ( xx + 11
, xx + 102 , xx + 110 ) ; xx [ 4 ] = 0.3162553791961485 ; xx [ 7 ] = xx [ 1 ]
* state [ 75 ] ; xx [ 9 ] = cos ( xx [ 7 ] ) ; xx [ 39 ] = 0.3162538200043588
; xx [ 40 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 4 ] * xx [ 9 ] - xx [ 39 ] *
xx [ 40 ] ; xx [ 87 ] = 0.6324445710612965 ; xx [ 89 ] = 0.6324396579890005 ;
xx [ 102 ] = xx [ 87 ] * xx [ 9 ] + xx [ 89 ] * xx [ 40 ] ; xx [ 103 ] = xx [
87 ] * xx [ 40 ] - xx [ 89 ] * xx [ 9 ] ; xx [ 87 ] = xx [ 39 ] * xx [ 9 ] +
xx [ 4 ] * xx [ 40 ] ; xx [ 120 ] = xx [ 7 ] ; xx [ 121 ] = xx [ 102 ] ; xx [
122 ] = xx [ 103 ] ; xx [ 123 ] = - xx [ 87 ] ; xx [ 4 ] = xx [ 5 ] * state [
81 ] - xx [ 3 ] * state [ 80 ] ; xx [ 9 ] = xx [ 1 ] * state [ 77 ] ; xx [ 39
] = sin ( xx [ 9 ] ) ; xx [ 40 ] = cos ( xx [ 9 ] ) ; xx [ 9 ] = xx [ 3 ] *
state [ 81 ] + xx [ 5 ] * state [ 80 ] ; xx [ 89 ] = xx [ 4 ] * xx [ 39 ] -
xx [ 40 ] * xx [ 9 ] ; xx [ 104 ] = xx [ 3 ] * state [ 79 ] + xx [ 5 ] *
state [ 82 ] ; xx [ 105 ] = xx [ 3 ] * state [ 82 ] - xx [ 5 ] * state [ 79 ]
; xx [ 106 ] = xx [ 39 ] * xx [ 104 ] + xx [ 40 ] * xx [ 105 ] ; xx [ 113 ] =
xx [ 39 ] * xx [ 105 ] - xx [ 40 ] * xx [ 104 ] ; xx [ 130 ] = xx [ 4 ] * xx
[ 40 ] + xx [ 39 ] * xx [ 9 ] ; xx [ 131 ] = xx [ 89 ] ; xx [ 132 ] = - xx [
106 ] ; xx [ 133 ] = xx [ 113 ] ; xx [ 134 ] = xx [ 130 ] ;
pm_math_quatCompose ( xx + 120 , xx + 131 , xx + 135 ) ; xx [ 131 ] = xx [
113 ] * state [ 76 ] ; xx [ 132 ] = xx [ 106 ] * state [ 76 ] ; xx [ 133 ] =
xx [ 4 ] * state [ 78 ] ; xx [ 134 ] = xx [ 9 ] * state [ 78 ] ; xx [ 139 ] =
xx [ 3 ] * state [ 83 ] ; xx [ 140 ] = xx [ 3 ] * state [ 84 ] ; xx [ 141 ] =
state [ 83 ] - ( xx [ 3 ] * xx [ 139 ] - xx [ 5 ] * xx [ 140 ] ) * xx [ 51 ]
; xx [ 142 ] = state [ 84 ] - xx [ 51 ] * ( xx [ 5 ] * xx [ 139 ] + xx [ 3 ]
* xx [ 140 ] ) ; xx [ 143 ] = xx [ 51 ] * ( xx [ 89 ] * xx [ 131 ] + xx [ 132
] * xx [ 130 ] ) + ( xx [ 133 ] * xx [ 105 ] + xx [ 134 ] * xx [ 104 ] ) * xx
[ 51 ] + xx [ 141 ] ; xx [ 144 ] = xx [ 51 ] * ( xx [ 133 ] * xx [ 104 ] - xx
[ 134 ] * xx [ 105 ] ) + xx [ 142 ] - ( xx [ 131 ] * xx [ 130 ] - xx [ 89 ] *
xx [ 132 ] ) * xx [ 51 ] ; xx [ 145 ] = ( xx [ 132 ] * xx [ 106 ] + xx [ 113
] * xx [ 131 ] ) * xx [ 51 ] - state [ 76 ] + state [ 78 ] - ( xx [ 134 ] *
xx [ 9 ] + xx [ 4 ] * xx [ 133 ] ) * xx [ 51 ] + state [ 85 ] ;
pm_math_cross3 ( xx + 143 , xx + 99 , xx + 130 ) ; pm_math_quatXform ( xx +
135 , xx + 130 , xx + 143 ) ; xx [ 89 ] = 5.157931604049537e-12 ; xx [ 106 ]
= 9.862118968695376e-13 ; xx [ 113 ] = xx [ 89 ] * xx [ 40 ] + xx [ 106 ] *
xx [ 39 ] ; xx [ 130 ] = xx [ 105 ] ; xx [ 131 ] = - xx [ 9 ] ; xx [ 132 ] =
- xx [ 4 ] ; xx [ 133 ] = - xx [ 104 ] ; xx [ 134 ] = xx [ 141 ] ; xx [ 135 ]
= xx [ 142 ] ; xx [ 136 ] = state [ 85 ] ; pm_math_cross3 ( xx + 134 , xx +
56 , xx + 137 ) ; pm_math_quatXform ( xx + 130 , xx + 137 , xx + 134 ) ;
pm_math_quatXform ( xx + 130 , xx + 56 , xx + 137 ) ; xx [ 4 ] = xx [ 134 ] -
xx [ 138 ] * state [ 78 ] ; xx [ 9 ] = xx [ 135 ] + xx [ 137 ] * state [ 78 ]
; xx [ 104 ] = xx [ 9 ] * xx [ 40 ] + xx [ 39 ] * xx [ 4 ] ; xx [ 105 ] = xx
[ 89 ] * xx [ 39 ] - xx [ 106 ] * xx [ 40 ] ; xx [ 130 ] = xx [ 40 ] * xx [
138 ] + xx [ 137 ] * xx [ 39 ] ; xx [ 131 ] = ( xx [ 51 ] * xx [ 113 ] * xx [
39 ] - xx [ 106 ] ) * state [ 78 ] + xx [ 4 ] - xx [ 51 ] * xx [ 104 ] * xx [
39 ] + ( xx [ 138 ] + xx [ 51 ] * xx [ 105 ] * xx [ 40 ] - xx [ 51 ] * xx [
130 ] * xx [ 40 ] + xx [ 106 ] ) * state [ 76 ] ; xx [ 132 ] = ( xx [ 51 ] *
xx [ 113 ] * xx [ 40 ] - xx [ 89 ] ) * state [ 78 ] + xx [ 9 ] - xx [ 51 ] *
xx [ 104 ] * xx [ 40 ] - ( xx [ 137 ] + xx [ 51 ] * xx [ 105 ] * xx [ 39 ] -
xx [ 51 ] * xx [ 130 ] * xx [ 39 ] + 0.03194045366579833 ) * state [ 76 ] ;
xx [ 133 ] = xx [ 136 ] - ( xx [ 40 ] * xx [ 40 ] * xx [ 136 ] + xx [ 136 ] *
xx [ 39 ] * xx [ 39 ] ) * xx [ 51 ] ; pm_math_quatXform ( xx + 120 , xx + 131
, xx + 104 ) ; xx [ 4 ] = xx [ 34 ] * xx [ 102 ] ; xx [ 9 ] = xx [ 34 ] * xx
[ 87 ] ; xx [ 39 ] = xx [ 1 ] * state [ 49 ] ; xx [ 40 ] = cos ( xx [ 39 ] )
; xx [ 89 ] = xx [ 0 ] * xx [ 40 ] ; xx [ 113 ] = sin ( xx [ 39 ] ) ; xx [ 39
] = xx [ 0 ] * xx [ 113 ] ; xx [ 0 ] = xx [ 89 ] + xx [ 39 ] ; xx [ 120 ] =
xx [ 80 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 80 ] * xx [ 113 ] ; xx [ 80 ] = xx [
120 ] - xx [ 40 ] ; xx [ 113 ] = xx [ 120 ] + xx [ 40 ] ; xx [ 40 ] = xx [ 89
] - xx [ 39 ] ; xx [ 120 ] = xx [ 0 ] ; xx [ 121 ] = xx [ 80 ] ; xx [ 122 ] =
xx [ 113 ] ; xx [ 123 ] = xx [ 40 ] ; pm_math_quatCompose ( xx + 74 , xx +
120 , xx + 130 ) ; pm_math_quatCompose ( xx + 20 , xx + 130 , xx + 134 ) ;
pm_math_quatCompose ( xx + 15 , xx + 134 , xx + 138 ) ; xx [ 39 ] = xx [ 140
] * xx [ 28 ] - xx [ 29 ] * xx [ 139 ] ; xx [ 89 ] = xx [ 141 ] * xx [ 28 ] -
xx [ 29 ] * xx [ 138 ] ; xx [ 142 ] = xx [ 138 ] * xx [ 28 ] + xx [ 29 ] * xx
[ 141 ] ; xx [ 146 ] = xx [ 29 ] * xx [ 140 ] + xx [ 139 ] * xx [ 28 ] ; xx [
147 ] = - xx [ 39 ] ; xx [ 148 ] = xx [ 89 ] ; xx [ 149 ] = xx [ 142 ] ; xx [
150 ] = - xx [ 146 ] ; pm_math_quatCompose ( xx + 11 , xx + 147 , xx + 151 )
; xx [ 147 ] = xx [ 142 ] * state [ 24 ] ; xx [ 148 ] = xx [ 89 ] * state [
24 ] ; xx [ 149 ] = xx [ 139 ] * state [ 26 ] ; xx [ 150 ] = xx [ 140 ] *
state [ 26 ] ; pm_math_quatInverseXform ( xx + 134 , xx + 62 , xx + 155 ) ;
pm_math_quatInverseXform ( xx + 130 , xx + 41 , xx + 134 ) ; xx [ 130 ] = xx
[ 80 ] ; xx [ 131 ] = xx [ 113 ] ; xx [ 132 ] = xx [ 40 ] ; xx [ 133 ] = xx [
113 ] * xx [ 38 ] ; xx [ 137 ] = xx [ 38 ] * xx [ 80 ] - xx [ 37 ] * xx [ 40
] ; xx [ 158 ] = xx [ 113 ] * xx [ 37 ] ; xx [ 159 ] = - xx [ 133 ] ; xx [
160 ] = xx [ 137 ] ; xx [ 161 ] = xx [ 158 ] ; pm_math_cross3 ( xx + 130 , xx
+ 159 , xx + 162 ) ; xx [ 159 ] = xx [ 51 ] * ( xx [ 147 ] * xx [ 39 ] - xx [
146 ] * xx [ 148 ] ) + xx [ 51 ] * ( xx [ 141 ] * xx [ 149 ] - xx [ 138 ] *
xx [ 150 ] ) + xx [ 155 ] + xx [ 134 ] + xx [ 51 ] * ( xx [ 162 ] + xx [ 0 ]
* xx [ 133 ] ) - xx [ 37 ] ; xx [ 160 ] = ( xx [ 138 ] * xx [ 149 ] + xx [
141 ] * xx [ 150 ] ) * xx [ 51 ] + xx [ 156 ] + xx [ 135 ] + xx [ 51 ] * ( xx
[ 163 ] - xx [ 0 ] * xx [ 137 ] ) - ( xx [ 148 ] * xx [ 39 ] + xx [ 146 ] *
xx [ 147 ] ) * xx [ 51 ] ; xx [ 161 ] = state [ 24 ] - ( xx [ 148 ] * xx [ 89
] + xx [ 142 ] * xx [ 147 ] ) * xx [ 51 ] + state [ 26 ] - ( xx [ 139 ] * xx
[ 149 ] + xx [ 140 ] * xx [ 150 ] ) * xx [ 51 ] + xx [ 157 ] + xx [ 136 ] + (
xx [ 164 ] - xx [ 0 ] * xx [ 158 ] ) * xx [ 51 ] - xx [ 38 ] - state [ 50 ] ;
pm_math_cross3 ( xx + 159 , xx + 44 , xx + 133 ) ; pm_math_quatXform ( xx +
151 , xx + 133 , xx + 136 ) ; xx [ 39 ] = 6.30935626036444e-12 ; xx [ 89 ] =
5.998698970888227e-12 ; xx [ 133 ] = xx [ 89 ] * xx [ 40 ] ; xx [ 134 ] = xx
[ 39 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 89 ] * xx [ 80 ] + xx [ 113 ] * xx [ 39
] ; xx [ 139 ] = xx [ 133 ] ; xx [ 140 ] = xx [ 134 ] ; xx [ 141 ] = - xx [
40 ] ; pm_math_cross3 ( xx + 130 , xx + 139 , xx + 146 ) ; xx [ 130 ] = - xx
[ 89 ] ; xx [ 131 ] = - xx [ 39 ] ; xx [ 132 ] = 4.000000001735564e-3 ;
pm_math_quatXform ( xx + 120 , xx + 130 , xx + 139 ) ; xx [ 80 ] =
0.1158410329922713 + xx [ 139 ] ; xx [ 113 ] = 0.09621024525612379 - xx [ 141
] ; xx [ 120 ] = ( xx [ 39 ] + xx [ 51 ] * ( xx [ 146 ] + xx [ 0 ] * xx [ 133
] ) ) * state [ 50 ] - xx [ 140 ] * xx [ 38 ] ; xx [ 121 ] = ( ( xx [ 0 ] *
xx [ 134 ] + xx [ 147 ] ) * xx [ 51 ] - xx [ 89 ] ) * state [ 50 ] + xx [ 38
] * xx [ 80 ] + xx [ 37 ] * xx [ 113 ] ; xx [ 122 ] = xx [ 51 ] * ( xx [ 148
] - xx [ 0 ] * xx [ 40 ] ) * state [ 50 ] + xx [ 140 ] * xx [ 37 ] ;
pm_math_quatXform ( xx + 74 , xx + 120 , xx + 130 ) ; xx [ 120 ] = - xx [ 80
] ; xx [ 121 ] = - xx [ 140 ] ; xx [ 122 ] = xx [ 113 ] ; pm_math_quatXform (
xx + 74 , xx + 120 , xx + 133 ) ; xx [ 120 ] = xx [ 133 ] - xx [ 69 ] ; xx [
121 ] = xx [ 134 ] + xx [ 36 ] ; xx [ 122 ] = xx [ 135 ] - xx [ 70 ] ;
pm_math_cross3 ( xx + 41 , xx + 120 , xx + 133 ) ; xx [ 139 ] = xx [ 68 ] +
xx [ 130 ] + xx [ 133 ] ; xx [ 140 ] = xx [ 24 ] + xx [ 131 ] + xx [ 134 ] ;
xx [ 141 ] = xx [ 132 ] - xx [ 26 ] + xx [ 135 ] ; pm_math_quatXform ( xx +
20 , xx + 139 , xx + 130 ) ; pm_math_quatXform ( xx + 20 , xx + 120 , xx +
133 ) ; xx [ 120 ] = xx [ 133 ] + xx [ 32 ] ; xx [ 121 ] = xx [ 134 ] + xx [
60 ] ; xx [ 122 ] = xx [ 135 ] + xx [ 81 ] ; pm_math_cross3 ( xx + 62 , xx +
120 , xx + 133 ) ; xx [ 139 ] = xx [ 71 ] + xx [ 130 ] + xx [ 133 ] ; xx [
140 ] = xx [ 72 ] + xx [ 131 ] + xx [ 134 ] ; xx [ 141 ] = xx [ 73 ] + xx [
132 ] + xx [ 135 ] ; pm_math_quatXform ( xx + 15 , xx + 139 , xx + 130 ) ;
pm_math_quatXform ( xx + 15 , xx + 120 , xx + 133 ) ; xx [ 0 ] = xx [ 134 ] +
xx [ 86 ] ; xx [ 39 ] = xx [ 65 ] + xx [ 130 ] - xx [ 0 ] * state [ 26 ] ; xx
[ 40 ] = xx [ 133 ] + xx [ 85 ] ; xx [ 80 ] = xx [ 66 ] + xx [ 131 ] + xx [
40 ] * state [ 26 ] ; xx [ 89 ] = xx [ 80 ] * xx [ 29 ] + xx [ 28 ] * xx [ 39
] ; xx [ 113 ] = xx [ 0 ] * xx [ 29 ] + xx [ 40 ] * xx [ 28 ] ; xx [ 120 ] =
xx [ 67 ] + xx [ 132 ] ; xx [ 121 ] = xx [ 55 ] + xx [ 39 ] - xx [ 51 ] * xx
[ 89 ] * xx [ 28 ] - ( xx [ 0 ] - xx [ 51 ] * xx [ 113 ] * xx [ 29 ] + xx [
91 ] ) * state [ 24 ] ; xx [ 122 ] = xx [ 49 ] + xx [ 80 ] - xx [ 51 ] * xx [
89 ] * xx [ 29 ] + ( xx [ 40 ] - xx [ 51 ] * xx [ 113 ] * xx [ 28 ] + xx [ 48
] ) * state [ 24 ] ; xx [ 123 ] = xx [ 120 ] - ( xx [ 29 ] * xx [ 120 ] * xx
[ 29 ] + xx [ 120 ] * xx [ 28 ] * xx [ 28 ] ) * xx [ 51 ] ; pm_math_quatXform
( xx + 11 , xx + 121 , xx + 130 ) ; xx [ 0 ] = 0.3162538200043575 ; xx [ 39 ]
= xx [ 1 ] * state [ 86 ] ; xx [ 40 ] = sin ( xx [ 39 ] ) ; xx [ 80 ] =
0.3162553791961478 ; xx [ 89 ] = cos ( xx [ 39 ] ) ; xx [ 39 ] = xx [ 0 ] *
xx [ 40 ] - xx [ 80 ] * xx [ 89 ] ; xx [ 113 ] = 0.6324445710612973 ; xx [
120 ] = 0.6324396579890008 ; xx [ 121 ] = xx [ 113 ] * xx [ 89 ] + xx [ 120 ]
* xx [ 40 ] ; xx [ 122 ] = xx [ 120 ] * xx [ 89 ] - xx [ 113 ] * xx [ 40 ] ;
xx [ 113 ] = xx [ 0 ] * xx [ 89 ] + xx [ 80 ] * xx [ 40 ] ; xx [ 139 ] = xx [
39 ] ; xx [ 140 ] = - xx [ 121 ] ; xx [ 141 ] = xx [ 122 ] ; xx [ 142 ] = xx
[ 113 ] ; xx [ 0 ] = xx [ 5 ] * state [ 92 ] - xx [ 3 ] * state [ 91 ] ; xx [
40 ] = xx [ 1 ] * state [ 88 ] ; xx [ 80 ] = sin ( xx [ 40 ] ) ; xx [ 89 ] =
cos ( xx [ 40 ] ) ; xx [ 40 ] = xx [ 3 ] * state [ 92 ] + xx [ 5 ] * state [
91 ] ; xx [ 120 ] = xx [ 0 ] * xx [ 80 ] - xx [ 89 ] * xx [ 40 ] ; xx [ 123 ]
= xx [ 3 ] * state [ 90 ] + xx [ 5 ] * state [ 93 ] ; xx [ 133 ] = xx [ 3 ] *
state [ 93 ] - xx [ 5 ] * state [ 90 ] ; xx [ 134 ] = xx [ 80 ] * xx [ 123 ]
+ xx [ 89 ] * xx [ 133 ] ; xx [ 135 ] = xx [ 80 ] * xx [ 133 ] - xx [ 89 ] *
xx [ 123 ] ; xx [ 146 ] = xx [ 0 ] * xx [ 89 ] + xx [ 80 ] * xx [ 40 ] ; xx [
147 ] = xx [ 120 ] ; xx [ 148 ] = - xx [ 134 ] ; xx [ 149 ] = xx [ 135 ] ; xx
[ 150 ] = xx [ 146 ] ; pm_math_quatCompose ( xx + 139 , xx + 147 , xx + 151 )
; xx [ 147 ] = xx [ 135 ] * state [ 87 ] ; xx [ 148 ] = xx [ 134 ] * state [
87 ] ; xx [ 149 ] = xx [ 0 ] * state [ 89 ] ; xx [ 150 ] = xx [ 40 ] * state
[ 89 ] ; xx [ 155 ] = xx [ 3 ] * state [ 94 ] ; xx [ 156 ] = xx [ 3 ] * state
[ 95 ] ; xx [ 157 ] = state [ 94 ] - ( xx [ 3 ] * xx [ 155 ] - xx [ 5 ] * xx
[ 156 ] ) * xx [ 51 ] ; xx [ 158 ] = state [ 95 ] - xx [ 51 ] * ( xx [ 5 ] *
xx [ 155 ] + xx [ 3 ] * xx [ 156 ] ) ; xx [ 159 ] = xx [ 51 ] * ( xx [ 120 ]
* xx [ 147 ] + xx [ 148 ] * xx [ 146 ] ) + ( xx [ 149 ] * xx [ 133 ] + xx [
150 ] * xx [ 123 ] ) * xx [ 51 ] + xx [ 157 ] ; xx [ 160 ] = xx [ 51 ] * ( xx
[ 149 ] * xx [ 123 ] - xx [ 150 ] * xx [ 133 ] ) + xx [ 158 ] - ( xx [ 147 ]
* xx [ 146 ] - xx [ 120 ] * xx [ 148 ] ) * xx [ 51 ] ; xx [ 161 ] = ( xx [
148 ] * xx [ 134 ] + xx [ 135 ] * xx [ 147 ] ) * xx [ 51 ] - state [ 87 ] +
state [ 89 ] - ( xx [ 150 ] * xx [ 40 ] + xx [ 0 ] * xx [ 149 ] ) * xx [ 51 ]
+ state [ 96 ] ; pm_math_cross3 ( xx + 159 , xx + 99 , xx + 146 ) ;
pm_math_quatXform ( xx + 151 , xx + 146 , xx + 159 ) ; xx [ 120 ] = xx [ 34 ]
* xx [ 121 ] ; xx [ 134 ] = xx [ 34 ] * xx [ 113 ] ; xx [ 135 ] =
1.600627075326599e-13 ; xx [ 146 ] = 8.497959654019115e-12 ; xx [ 147 ] = xx
[ 135 ] * xx [ 89 ] + xx [ 146 ] * xx [ 80 ] ; xx [ 148 ] = xx [ 133 ] ; xx [
149 ] = - xx [ 40 ] ; xx [ 150 ] = - xx [ 0 ] ; xx [ 151 ] = - xx [ 123 ] ;
xx [ 152 ] = xx [ 157 ] ; xx [ 153 ] = xx [ 158 ] ; xx [ 154 ] = state [ 96 ]
; pm_math_cross3 ( xx + 152 , xx + 56 , xx + 155 ) ; pm_math_quatXform ( xx +
148 , xx + 155 , xx + 152 ) ; pm_math_quatXform ( xx + 148 , xx + 56 , xx +
155 ) ; xx [ 0 ] = xx [ 152 ] - xx [ 156 ] * state [ 89 ] ; xx [ 40 ] = xx [
153 ] + xx [ 155 ] * state [ 89 ] ; xx [ 123 ] = xx [ 40 ] * xx [ 89 ] + xx [
80 ] * xx [ 0 ] ; xx [ 133 ] = xx [ 135 ] * xx [ 80 ] - xx [ 146 ] * xx [ 89
] ; xx [ 148 ] = xx [ 89 ] * xx [ 156 ] + xx [ 155 ] * xx [ 80 ] ; xx [ 149 ]
= ( xx [ 51 ] * xx [ 147 ] * xx [ 80 ] - xx [ 146 ] ) * state [ 89 ] + xx [ 0
] - xx [ 51 ] * xx [ 123 ] * xx [ 80 ] + ( xx [ 156 ] + xx [ 51 ] * xx [ 133
] * xx [ 89 ] - xx [ 51 ] * xx [ 148 ] * xx [ 89 ] + xx [ 146 ] ) * state [
87 ] ; xx [ 150 ] = ( xx [ 51 ] * xx [ 147 ] * xx [ 89 ] - xx [ 135 ] ) *
state [ 89 ] + xx [ 40 ] - xx [ 51 ] * xx [ 123 ] * xx [ 89 ] - ( xx [ 155 ]
+ xx [ 51 ] * xx [ 133 ] * xx [ 80 ] - xx [ 51 ] * xx [ 148 ] * xx [ 80 ] +
0.03194045367079622 ) * state [ 87 ] ; xx [ 151 ] = xx [ 154 ] - ( xx [ 89 ]
* xx [ 89 ] * xx [ 154 ] + xx [ 154 ] * xx [ 80 ] * xx [ 80 ] ) * xx [ 51 ] ;
pm_math_quatXform ( xx + 139 , xx + 149 , xx + 146 ) ; xx [ 0 ] = xx [ 1 ] *
state [ 51 ] ; xx [ 40 ] = cos ( xx [ 0 ] ) ; xx [ 80 ] = sin ( xx [ 0 ] ) ;
xx [ 139 ] = xx [ 40 ] * xx [ 35 ] + xx [ 80 ] * xx [ 19 ] ; xx [ 140 ] = xx
[ 30 ] * xx [ 40 ] - xx [ 80 ] * xx [ 33 ] ; xx [ 141 ] = xx [ 40 ] * xx [ 33
] + xx [ 30 ] * xx [ 80 ] ; xx [ 142 ] = xx [ 40 ] * xx [ 19 ] - xx [ 80 ] *
xx [ 35 ] ; pm_math_quatCompose ( xx + 20 , xx + 139 , xx + 149 ) ;
pm_math_quatCompose ( xx + 15 , xx + 149 , xx + 153 ) ; xx [ 0 ] = xx [ 155 ]
* xx [ 28 ] - xx [ 29 ] * xx [ 154 ] ; xx [ 19 ] = xx [ 156 ] * xx [ 28 ] -
xx [ 29 ] * xx [ 153 ] ; xx [ 30 ] = xx [ 153 ] * xx [ 28 ] + xx [ 29 ] * xx
[ 156 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 155 ] + xx [ 154 ] * xx [ 28 ] ; xx [
162 ] = - xx [ 0 ] ; xx [ 163 ] = xx [ 19 ] ; xx [ 164 ] = xx [ 30 ] ; xx [
165 ] = - xx [ 33 ] ; pm_math_quatCompose ( xx + 11 , xx + 162 , xx + 166 ) ;
xx [ 35 ] = xx [ 30 ] * state [ 24 ] ; xx [ 89 ] = xx [ 19 ] * state [ 24 ] ;
xx [ 123 ] = xx [ 154 ] * state [ 26 ] ; xx [ 133 ] = xx [ 155 ] * state [ 26
] ; pm_math_quatInverseXform ( xx + 149 , xx + 62 , xx + 162 ) ;
pm_math_quatInverseXform ( xx + 139 , xx + 41 , xx + 149 ) ; xx [ 135 ] = xx
[ 37 ] * xx [ 80 ] ; xx [ 139 ] = xx [ 51 ] * ( xx [ 35 ] * xx [ 0 ] - xx [
33 ] * xx [ 89 ] ) + xx [ 51 ] * ( xx [ 156 ] * xx [ 123 ] - xx [ 153 ] * xx
[ 133 ] ) + xx [ 162 ] + xx [ 149 ] + xx [ 51 ] * xx [ 135 ] * xx [ 80 ] - xx
[ 37 ] ; xx [ 140 ] = ( xx [ 153 ] * xx [ 123 ] + xx [ 156 ] * xx [ 133 ] ) *
xx [ 51 ] + xx [ 163 ] + xx [ 150 ] - xx [ 51 ] * xx [ 40 ] * xx [ 135 ] - (
xx [ 89 ] * xx [ 0 ] + xx [ 33 ] * xx [ 35 ] ) * xx [ 51 ] ; xx [ 141 ] =
state [ 24 ] - ( xx [ 89 ] * xx [ 19 ] + xx [ 30 ] * xx [ 35 ] ) * xx [ 51 ]
+ state [ 26 ] - ( xx [ 154 ] * xx [ 123 ] + xx [ 155 ] * xx [ 133 ] ) * xx [
51 ] + xx [ 164 ] + xx [ 151 ] - ( xx [ 38 ] + state [ 52 ] ) ;
pm_math_cross3 ( xx + 139 , xx + 44 , xx + 149 ) ; pm_math_quatXform ( xx +
166 , xx + 149 , xx + 44 ) ; xx [ 0 ] = 5.61723311615081e-12 ; xx [ 19 ] =
6.817225262079063e-12 ; xx [ 30 ] = xx [ 19 ] * xx [ 80 ] ; xx [ 33 ] = xx [
40 ] * xx [ 30 ] ; xx [ 35 ] = xx [ 0 ] * xx [ 80 ] ; xx [ 89 ] = xx [ 35 ] *
xx [ 80 ] ; xx [ 123 ] = ( xx [ 33 ] + xx [ 89 ] ) * xx [ 51 ] - xx [ 0 ] ;
xx [ 133 ] = xx [ 40 ] * xx [ 35 ] ; xx [ 35 ] = xx [ 30 ] * xx [ 80 ] ; xx [
30 ] = 0.02540000000000185 - ( xx [ 51 ] * ( xx [ 35 ] - xx [ 133 ] ) - xx [
19 ] ) ; xx [ 40 ] = 0.152426400001803 ; xx [ 139 ] = ( xx [ 0 ] - xx [ 51 ]
* ( xx [ 33 ] + xx [ 89 ] ) ) * state [ 52 ] - xx [ 38 ] * xx [ 123 ] ; xx [
140 ] = - ( ( xx [ 19 ] + ( xx [ 133 ] - xx [ 35 ] ) * xx [ 51 ] ) * state [
52 ] + xx [ 38 ] * xx [ 30 ] + xx [ 40 ] * xx [ 37 ] ) ; xx [ 141 ] = xx [ 37
] * xx [ 123 ] ; pm_math_quatXform ( xx + 74 , xx + 139 , xx + 149 ) ; xx [
139 ] = xx [ 30 ] ; xx [ 140 ] = - xx [ 123 ] ; xx [ 141 ] = - xx [ 40 ] ;
pm_math_quatXform ( xx + 74 , xx + 139 , xx + 152 ) ; xx [ 74 ] = xx [ 152 ]
- xx [ 69 ] ; xx [ 75 ] = xx [ 153 ] + xx [ 36 ] ; xx [ 76 ] = xx [ 154 ] -
xx [ 70 ] ; pm_math_cross3 ( xx + 41 , xx + 74 , xx + 35 ) ; xx [ 40 ] = xx [
68 ] + xx [ 149 ] + xx [ 35 ] ; xx [ 41 ] = xx [ 24 ] + xx [ 150 ] + xx [ 36
] ; xx [ 42 ] = xx [ 151 ] - xx [ 26 ] + xx [ 37 ] ; pm_math_quatXform ( xx +
20 , xx + 40 , xx + 35 ) ; pm_math_quatXform ( xx + 20 , xx + 74 , xx + 40 )
; xx [ 19 ] = xx [ 40 ] + xx [ 32 ] ; xx [ 20 ] = xx [ 41 ] + xx [ 60 ] ; xx
[ 21 ] = xx [ 42 ] + xx [ 81 ] ; pm_math_cross3 ( xx + 62 , xx + 19 , xx + 22
) ; xx [ 40 ] = xx [ 71 ] + xx [ 35 ] + xx [ 22 ] ; xx [ 41 ] = xx [ 72 ] +
xx [ 36 ] + xx [ 23 ] ; xx [ 42 ] = xx [ 73 ] + xx [ 37 ] + xx [ 24 ] ;
pm_math_quatXform ( xx + 15 , xx + 40 , xx + 22 ) ; pm_math_quatXform ( xx +
15 , xx + 19 , xx + 35 ) ; xx [ 0 ] = xx [ 36 ] + xx [ 86 ] ; xx [ 15 ] = xx
[ 65 ] + xx [ 22 ] - xx [ 0 ] * state [ 26 ] ; xx [ 16 ] = xx [ 35 ] + xx [
85 ] ; xx [ 17 ] = xx [ 66 ] + xx [ 23 ] + xx [ 16 ] * state [ 26 ] ; xx [ 18
] = xx [ 17 ] * xx [ 29 ] + xx [ 28 ] * xx [ 15 ] ; xx [ 19 ] = xx [ 0 ] * xx
[ 29 ] + xx [ 16 ] * xx [ 28 ] ; xx [ 20 ] = xx [ 67 ] + xx [ 24 ] ; xx [ 21
] = xx [ 55 ] + xx [ 15 ] - xx [ 51 ] * xx [ 18 ] * xx [ 28 ] - ( xx [ 0 ] -
xx [ 51 ] * xx [ 19 ] * xx [ 29 ] + xx [ 91 ] ) * state [ 24 ] ; xx [ 22 ] =
xx [ 49 ] + xx [ 17 ] - xx [ 51 ] * xx [ 18 ] * xx [ 29 ] + ( xx [ 16 ] - xx
[ 51 ] * xx [ 19 ] * xx [ 28 ] + xx [ 48 ] ) * state [ 24 ] ; xx [ 23 ] = xx
[ 20 ] - ( xx [ 29 ] * xx [ 20 ] * xx [ 29 ] + xx [ 20 ] * xx [ 28 ] * xx [
28 ] ) * xx [ 51 ] ; pm_math_quatXform ( xx + 11 , xx + 21 , xx + 15 ) ; xx [
0 ] = 0.3895853754265615 ; xx [ 11 ] = xx [ 1 ] * state [ 12 ] ; xx [ 12 ] =
cos ( xx [ 11 ] ) ; xx [ 13 ] = 0.389581900177037 ; xx [ 14 ] = sin ( xx [ 11
] ) ; xx [ 11 ] = xx [ 0 ] * xx [ 12 ] - xx [ 13 ] * xx [ 14 ] ; xx [ 18 ] =
0.5901074779979933 ; xx [ 19 ] = 0.5901036711621462 ; xx [ 20 ] = xx [ 18 ] *
xx [ 12 ] + xx [ 19 ] * xx [ 14 ] ; xx [ 21 ] = xx [ 19 ] * xx [ 12 ] - xx [
18 ] * xx [ 14 ] ; xx [ 18 ] = xx [ 13 ] * xx [ 12 ] + xx [ 0 ] * xx [ 14 ] ;
xx [ 35 ] = xx [ 11 ] ; xx [ 36 ] = - xx [ 20 ] ; xx [ 37 ] = xx [ 21 ] ; xx
[ 38 ] = - xx [ 18 ] ; xx [ 0 ] = xx [ 5 ] * state [ 18 ] - xx [ 3 ] * state
[ 17 ] ; xx [ 12 ] = xx [ 1 ] * state [ 14 ] ; xx [ 1 ] = sin ( xx [ 12 ] ) ;
xx [ 13 ] = cos ( xx [ 12 ] ) ; xx [ 12 ] = xx [ 3 ] * state [ 18 ] + xx [ 5
] * state [ 17 ] ; xx [ 14 ] = xx [ 0 ] * xx [ 1 ] - xx [ 13 ] * xx [ 12 ] ;
xx [ 19 ] = xx [ 3 ] * state [ 16 ] + xx [ 5 ] * state [ 19 ] ; xx [ 22 ] =
xx [ 3 ] * state [ 19 ] - xx [ 5 ] * state [ 16 ] ; xx [ 23 ] = xx [ 1 ] * xx
[ 19 ] + xx [ 13 ] * xx [ 22 ] ; xx [ 24 ] = xx [ 1 ] * xx [ 22 ] - xx [ 13 ]
* xx [ 19 ] ; xx [ 26 ] = xx [ 0 ] * xx [ 13 ] + xx [ 1 ] * xx [ 12 ] ; xx [
40 ] = xx [ 14 ] ; xx [ 41 ] = - xx [ 23 ] ; xx [ 42 ] = xx [ 24 ] ; xx [ 43
] = xx [ 26 ] ; pm_math_quatCompose ( xx + 35 , xx + 40 , xx + 62 ) ; xx [ 28
] = xx [ 24 ] * state [ 13 ] ; xx [ 29 ] = xx [ 23 ] * state [ 13 ] ; xx [ 30
] = xx [ 0 ] * state [ 15 ] ; xx [ 32 ] = xx [ 12 ] * state [ 15 ] ; xx [ 33
] = xx [ 3 ] * state [ 20 ] ; xx [ 40 ] = xx [ 3 ] * state [ 21 ] ; xx [ 41 ]
= state [ 20 ] - ( xx [ 3 ] * xx [ 33 ] - xx [ 5 ] * xx [ 40 ] ) * xx [ 51 ]
; xx [ 42 ] = state [ 21 ] - xx [ 51 ] * ( xx [ 5 ] * xx [ 33 ] + xx [ 3 ] *
xx [ 40 ] ) ; xx [ 66 ] = xx [ 51 ] * ( xx [ 14 ] * xx [ 28 ] + xx [ 29 ] *
xx [ 26 ] ) + ( xx [ 30 ] * xx [ 22 ] + xx [ 32 ] * xx [ 19 ] ) * xx [ 51 ] +
xx [ 41 ] ; xx [ 67 ] = xx [ 51 ] * ( xx [ 30 ] * xx [ 19 ] - xx [ 32 ] * xx
[ 22 ] ) + xx [ 42 ] - ( xx [ 28 ] * xx [ 26 ] - xx [ 14 ] * xx [ 29 ] ) * xx
[ 51 ] ; xx [ 68 ] = ( xx [ 29 ] * xx [ 23 ] + xx [ 24 ] * xx [ 28 ] ) * xx [
51 ] - state [ 13 ] + state [ 15 ] - ( xx [ 32 ] * xx [ 12 ] + xx [ 0 ] * xx
[ 30 ] ) * xx [ 51 ] + state [ 22 ] ; pm_math_cross3 ( xx + 66 , xx + 99 , xx
+ 28 ) ; pm_math_quatXform ( xx + 62 , xx + 28 , xx + 66 ) ; xx [ 3 ] = xx [
34 ] * xx [ 20 ] ; xx [ 5 ] = xx [ 34 ] * xx [ 18 ] ; xx [ 62 ] = xx [ 22 ] ;
xx [ 63 ] = - xx [ 12 ] ; xx [ 64 ] = - xx [ 0 ] ; xx [ 65 ] = - xx [ 19 ] ;
xx [ 22 ] = xx [ 41 ] ; xx [ 23 ] = xx [ 42 ] ; xx [ 24 ] = state [ 22 ] ;
pm_math_cross3 ( xx + 22 , xx + 56 , xx + 28 ) ; pm_math_quatXform ( xx + 62
, xx + 28 , xx + 22 ) ; pm_math_quatXform ( xx + 62 , xx + 56 , xx + 28 ) ;
xx [ 0 ] = xx [ 22 ] - xx [ 29 ] * state [ 15 ] ; xx [ 12 ] = xx [ 23 ] + xx
[ 28 ] * state [ 15 ] ; xx [ 14 ] = xx [ 12 ] * xx [ 13 ] + xx [ 1 ] * xx [ 0
] ; xx [ 19 ] = 5.376764528053357e-12 ; xx [ 26 ] = 7.748428954013064e-12 ;
xx [ 30 ] = xx [ 26 ] * xx [ 13 ] - xx [ 19 ] * xx [ 1 ] ; xx [ 32 ] = xx [
19 ] * xx [ 13 ] + xx [ 26 ] * xx [ 1 ] ; xx [ 33 ] = xx [ 13 ] * xx [ 29 ] +
xx [ 28 ] * xx [ 1 ] ; xx [ 40 ] = xx [ 0 ] - xx [ 51 ] * xx [ 14 ] * xx [ 1
] - ( xx [ 19 ] + xx [ 51 ] * xx [ 30 ] * xx [ 1 ] ) * state [ 15 ] + ( xx [
29 ] - xx [ 51 ] * xx [ 32 ] * xx [ 13 ] - xx [ 51 ] * xx [ 33 ] * xx [ 13 ]
+ xx [ 19 ] ) * state [ 13 ] ; xx [ 41 ] = ( xx [ 26 ] - xx [ 51 ] * xx [ 30
] * xx [ 13 ] ) * state [ 15 ] + xx [ 12 ] - xx [ 51 ] * xx [ 14 ] * xx [ 13
] - ( xx [ 28 ] - xx [ 51 ] * xx [ 32 ] * xx [ 1 ] - xx [ 51 ] * xx [ 33 ] *
xx [ 1 ] + 0.03194045367870467 ) * state [ 13 ] ; xx [ 42 ] = xx [ 24 ] - (
xx [ 13 ] * xx [ 13 ] * xx [ 24 ] + xx [ 24 ] * xx [ 1 ] * xx [ 1 ] ) * xx [
51 ] ; pm_math_quatXform ( xx + 35 , xx + 40 , xx + 12 ) ; xx [ 162 ] = fabs
( xx [ 52 ] + xx [ 47 ] + xx [ 82 ] - ( xx [ 114 ] + xx [ 51 ] * ( xx [ 92 ]
* xx [ 27 ] - xx [ 78 ] * xx [ 59 ] ) * state [ 65 ] + xx [ 107 ] ) ) ; xx [
163 ] = fabs ( xx [ 53 ] + xx [ 50 ] + xx [ 83 ] - ( xx [ 115 ] + ( ( xx [ 59
] * xx [ 88 ] + xx [ 27 ] * xx [ 90 ] ) * xx [ 51 ] - xx [ 34 ] ) * state [
65 ] + xx [ 108 ] ) ) ; xx [ 164 ] = fabs ( xx [ 54 ] + xx [ 8 ] + xx [ 84 ]
- ( xx [ 116 ] + xx [ 51 ] * ( xx [ 78 ] * xx [ 27 ] + xx [ 92 ] * xx [ 59 ]
) * state [ 65 ] + xx [ 109 ] ) ) ; xx [ 165 ] = fabs ( xx [ 117 ] + xx [ 47
] + xx [ 96 ] - ( xx [ 124 ] + xx [ 51 ] * ( xx [ 61 ] * xx [ 31 ] - xx [ 79
] * xx [ 2 ] ) * state [ 54 ] + xx [ 93 ] ) ) ; xx [ 166 ] = fabs ( xx [ 118
] + xx [ 50 ] + xx [ 97 ] - ( xx [ 125 ] + ( xx [ 10 ] - ( xx [ 6 ] * xx [ 79
] + xx [ 25 ] * xx [ 61 ] ) * xx [ 51 ] ) * state [ 54 ] + xx [ 94 ] ) ) ; xx
[ 167 ] = fabs ( xx [ 119 ] + xx [ 8 ] + xx [ 98 ] - ( xx [ 126 ] + xx [ 51 ]
* ( xx [ 61 ] * xx [ 2 ] + xx [ 79 ] * xx [ 31 ] ) * state [ 54 ] + xx [ 95 ]
) ) ; xx [ 168 ] = fabs ( xx [ 127 ] + xx [ 47 ] + xx [ 110 ] - ( xx [ 143 ]
+ xx [ 104 ] - xx [ 51 ] * ( xx [ 103 ] * xx [ 4 ] + xx [ 7 ] * xx [ 9 ] ) *
state [ 76 ] ) ) ; xx [ 169 ] = fabs ( xx [ 128 ] + xx [ 50 ] + xx [ 111 ] -
( xx [ 144 ] + ( ( xx [ 9 ] * xx [ 87 ] + xx [ 4 ] * xx [ 102 ] ) * xx [ 51 ]
- xx [ 34 ] ) * state [ 76 ] + xx [ 105 ] ) ) ; xx [ 170 ] = fabs ( xx [ 129
] + xx [ 8 ] + xx [ 112 ] - ( xx [ 145 ] + xx [ 51 ] * ( xx [ 103 ] * xx [ 9
] - xx [ 7 ] * xx [ 4 ] ) * state [ 76 ] + xx [ 106 ] ) ) ; xx [ 171 ] = fabs
( xx [ 136 ] + xx [ 47 ] + xx [ 130 ] - ( xx [ 159 ] + xx [ 51 ] * ( xx [ 122
] * xx [ 120 ] + xx [ 39 ] * xx [ 134 ] ) * state [ 87 ] + xx [ 146 ] ) ) ;
xx [ 172 ] = fabs ( xx [ 137 ] + xx [ 50 ] + xx [ 131 ] - ( xx [ 160 ] + ( (
xx [ 134 ] * xx [ 113 ] + xx [ 120 ] * xx [ 121 ] ) * xx [ 51 ] - xx [ 34 ] )
* state [ 87 ] + xx [ 147 ] ) ) ; xx [ 173 ] = fabs ( xx [ 138 ] + xx [ 8 ] +
xx [ 132 ] - ( xx [ 161 ] + xx [ 51 ] * ( xx [ 39 ] * xx [ 120 ] - xx [ 122 ]
* xx [ 134 ] ) * state [ 87 ] + xx [ 148 ] ) ) ; xx [ 174 ] = fabs ( xx [ 44
] + xx [ 47 ] + xx [ 15 ] - ( xx [ 66 ] + xx [ 51 ] * ( xx [ 21 ] * xx [ 3 ]
- xx [ 11 ] * xx [ 5 ] ) * state [ 13 ] + xx [ 12 ] ) ) ; xx [ 175 ] = fabs (
xx [ 45 ] + xx [ 50 ] + xx [ 16 ] - ( xx [ 67 ] + ( ( xx [ 5 ] * xx [ 18 ] +
xx [ 3 ] * xx [ 20 ] ) * xx [ 51 ] - xx [ 34 ] ) * state [ 13 ] + xx [ 13 ] )
) ; xx [ 176 ] = fabs ( xx [ 46 ] + xx [ 8 ] + xx [ 17 ] - ( xx [ 68 ] + xx [
51 ] * ( xx [ 11 ] * xx [ 3 ] + xx [ 21 ] * xx [ 5 ] ) * state [ 13 ] + xx [
14 ] ) ) ; ii [ 0 ] = 162 ; { int ll ; for ( ll = 163 ; ll < 177 ; ++ ll ) if
( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 162 ; xx [ 0 ]
= xx [ 162 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx [ 1 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; return ii
[ 1 ] ; } PmfMessageId PlatformAssem_f0ca4364_1_projectStateSim ( const void
* mech , const double * rtdv , const int * eqnEnableFlags , const double *
input , double * state , void * neDiagMgr0 ) { NeuDiagnosticManager *
neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; int ii [ 15 ] ; double xx
[ 1964 ] ; ( void ) mech ; ( void ) rtdv ; ( void ) eqnEnableFlags ; ( void )
input ; ( void ) neDiagMgr ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.7058357201813958 ;
xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 23 ] ; xx [ 4 ] = sin ( xx [ 3
] ) ; xx [ 5 ] = 0.7058407546227096 ; xx [ 6 ] = cos ( xx [ 3 ] ) ; xx [ 3 ]
= xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 2 ] * state [
25 ] ; xx [ 8 ] = cos ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 3 ] * xx [ 8 ] ; xx [ 10
] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 1 ] * xx [ 6 ] + xx [ 5 ] * xx [ 4 ] ;
xx [ 11 ] = xx [ 10 ] * xx [ 7 ] ; xx [ 12 ] = 0.04233709306330295 ; xx [ 13
] = 0.04233598682685397 ; xx [ 14 ] = xx [ 12 ] * xx [ 6 ] + xx [ 13 ] * xx [
4 ] ; xx [ 15 ] = xx [ 12 ] * xx [ 4 ] - xx [ 13 ] * xx [ 6 ] ; xx [ 4 ] = -
( xx [ 8 ] * xx [ 14 ] + xx [ 15 ] * xx [ 10 ] ) ; xx [ 6 ] = xx [ 10 ] * xx
[ 14 ] - xx [ 15 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 3 ] * xx [ 10 ] + xx [ 8 ] *
xx [ 7 ] ; xx [ 17 ] = xx [ 9 ] - xx [ 11 ] ; xx [ 18 ] = xx [ 4 ] ; xx [ 19
] = xx [ 6 ] ; xx [ 20 ] = xx [ 16 ] ; xx [ 21 ] = 3.980251324392935e-7 ; xx
[ 22 ] = 1.0 ; xx [ 23 ] = xx [ 22 ] / sqrt ( state [ 27 ] * state [ 27 ] +
state [ 28 ] * state [ 28 ] + state [ 29 ] * state [ 29 ] + state [ 30 ] *
state [ 30 ] ) ; xx [ 24 ] = xx [ 23 ] * state [ 30 ] ; xx [ 25 ] =
0.999999999999921 ; xx [ 26 ] = xx [ 23 ] * state [ 27 ] ; xx [ 27 ] = xx [
21 ] * xx [ 24 ] - xx [ 25 ] * xx [ 26 ] ; xx [ 28 ] = xx [ 23 ] * state [ 29
] ; xx [ 29 ] = xx [ 23 ] * state [ 28 ] ; xx [ 23 ] = xx [ 21 ] * xx [ 28 ]
+ xx [ 25 ] * xx [ 29 ] ; xx [ 30 ] = - xx [ 23 ] ; xx [ 31 ] = xx [ 25 ] *
xx [ 28 ] - xx [ 21 ] * xx [ 29 ] ; xx [ 32 ] = - xx [ 31 ] ; xx [ 33 ] = xx
[ 21 ] * xx [ 26 ] + xx [ 25 ] * xx [ 24 ] ; xx [ 34 ] = - xx [ 33 ] ; xx [
35 ] = xx [ 27 ] ; xx [ 36 ] = xx [ 30 ] ; xx [ 37 ] = xx [ 32 ] ; xx [ 38 ]
= xx [ 34 ] ; xx [ 39 ] = xx [ 22 ] / sqrt ( state [ 34 ] * state [ 34 ] +
state [ 35 ] * state [ 35 ] + state [ 36 ] * state [ 36 ] + state [ 37 ] *
state [ 37 ] ) ; xx [ 40 ] = xx [ 39 ] * state [ 37 ] ; xx [ 41 ] =
3.980251340548381e-7 ; xx [ 42 ] = xx [ 39 ] * state [ 34 ] ; xx [ 43 ] = xx
[ 25 ] * xx [ 40 ] - xx [ 41 ] * xx [ 42 ] ; xx [ 44 ] = xx [ 39 ] * state [
36 ] ; xx [ 45 ] = xx [ 39 ] * state [ 35 ] ; xx [ 39 ] = xx [ 25 ] * xx [ 44
] - xx [ 41 ] * xx [ 45 ] ; xx [ 46 ] = xx [ 41 ] * xx [ 44 ] + xx [ 25 ] *
xx [ 45 ] ; xx [ 47 ] = - xx [ 46 ] ; xx [ 48 ] = xx [ 41 ] * xx [ 40 ] + xx
[ 25 ] * xx [ 42 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [ 43 ] ; xx [
51 ] = xx [ 39 ] ; xx [ 52 ] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ; xx [ 54 ]
= xx [ 2 ] * state [ 43 ] ; xx [ 55 ] = cos ( xx [ 54 ] ) ; xx [ 56 ] =
0.3535533905932732 ; xx [ 57 ] = 0.8660254037844377 ; xx [ 58 ] = xx [ 2 ] *
state [ 41 ] ; xx [ 59 ] = sin ( xx [ 58 ] ) ; xx [ 60 ] = xx [ 57 ] * xx [
59 ] ; xx [ 61 ] = xx [ 56 ] * xx [ 60 ] ; xx [ 62 ] = 0.6123724356957949 ;
xx [ 63 ] = 0.5000000000000017 ; xx [ 64 ] = xx [ 63 ] * xx [ 59 ] ; xx [ 59
] = xx [ 62 ] * xx [ 64 ] ; xx [ 65 ] = cos ( xx [ 58 ] ) ; xx [ 58 ] = xx [
62 ] * xx [ 65 ] ; xx [ 66 ] = xx [ 61 ] + xx [ 59 ] - xx [ 58 ] ; xx [ 67 ]
= sin ( xx [ 54 ] ) ; xx [ 54 ] = xx [ 59 ] + xx [ 58 ] + xx [ 61 ] ; xx [ 58
] = xx [ 55 ] * xx [ 66 ] + xx [ 67 ] * xx [ 54 ] ; xx [ 59 ] = xx [ 62 ] *
xx [ 60 ] ; xx [ 60 ] = xx [ 56 ] * xx [ 65 ] ; xx [ 61 ] = xx [ 56 ] * xx [
64 ] ; xx [ 64 ] = xx [ 59 ] + xx [ 60 ] - xx [ 61 ] ; xx [ 65 ] = xx [ 60 ]
- xx [ 59 ] + xx [ 61 ] ; xx [ 59 ] = xx [ 64 ] * xx [ 55 ] - xx [ 67 ] * xx
[ 65 ] ; xx [ 60 ] = xx [ 55 ] * xx [ 65 ] + xx [ 64 ] * xx [ 67 ] ; xx [ 61
] = xx [ 55 ] * xx [ 54 ] - xx [ 67 ] * xx [ 66 ] ; pm_math_quatCompose ( xx
+ 50 , xx + 58 , xx + 68 ) ; pm_math_quatCompose ( xx + 35 , xx + 68 , xx +
72 ) ; pm_math_quatCompose ( xx + 17 , xx + 72 , xx + 76 ) ; xx [ 80 ] = 2.0
; xx [ 81 ] = xx [ 80 ] * ( xx [ 73 ] * xx [ 75 ] - xx [ 72 ] * xx [ 74 ] ) ;
xx [ 82 ] = ( xx [ 72 ] * xx [ 73 ] + xx [ 74 ] * xx [ 75 ] ) * xx [ 80 ] ;
xx [ 83 ] = xx [ 22 ] - ( xx [ 73 ] * xx [ 73 ] + xx [ 74 ] * xx [ 74 ] ) *
xx [ 80 ] ; xx [ 72 ] = 7.599121945184391e-12 ; xx [ 73 ] =
5.036130209737022e-12 ; xx [ 74 ] = 5.192027881355888e-12 ; xx [ 84 ] = - xx
[ 72 ] ; xx [ 85 ] = xx [ 73 ] ; xx [ 86 ] = - xx [ 74 ] ; pm_math_cross3 (
xx + 81 , xx + 84 , xx + 87 ) ; pm_math_quatXform ( xx + 76 , xx + 87 , xx +
81 ) ; xx [ 75 ] = xx [ 66 ] ; xx [ 76 ] = xx [ 64 ] ; xx [ 77 ] = xx [ 65 ]
; xx [ 78 ] = xx [ 54 ] ; xx [ 79 ] = 0.02539999999999815 ; xx [ 87 ] =
2.191920996097441e-12 ; xx [ 88 ] = xx [ 87 ] * xx [ 67 ] ; xx [ 89 ] = xx [
55 ] * xx [ 88 ] ; xx [ 90 ] = 3.368449963403463e-13 ; xx [ 91 ] = xx [ 90 ]
* xx [ 67 ] ; xx [ 92 ] = xx [ 91 ] * xx [ 67 ] ; xx [ 93 ] = xx [ 79 ] + xx
[ 80 ] * ( xx [ 89 ] + xx [ 92 ] ) - xx [ 90 ] ; xx [ 94 ] = xx [ 88 ] * xx [
67 ] ; xx [ 88 ] = xx [ 55 ] * xx [ 91 ] ; xx [ 91 ] = xx [ 87 ] - ( xx [ 94
] - xx [ 88 ] ) * xx [ 80 ] ; xx [ 95 ] = 0.1524264000010511 ; xx [ 96 ] = -
xx [ 95 ] ; xx [ 97 ] = - xx [ 93 ] ; xx [ 98 ] = - xx [ 91 ] ; xx [ 99 ] =
xx [ 96 ] ; pm_math_quatXform ( xx + 75 , xx + 97 , xx + 100 ) ; xx [ 103 ] =
7.483145982728478e-12 ; xx [ 104 ] = 0.1158410329922703 ; xx [ 105 ] =
0.09621024525612519 ; xx [ 106 ] = xx [ 105 ] * xx [ 65 ] ; xx [ 107 ] = xx [
64 ] ; xx [ 108 ] = xx [ 65 ] ; xx [ 109 ] = xx [ 54 ] ; xx [ 110 ] = xx [
104 ] * xx [ 54 ] - xx [ 64 ] * xx [ 105 ] ; xx [ 111 ] = xx [ 104 ] * xx [
65 ] ; xx [ 112 ] = xx [ 106 ] ; xx [ 113 ] = xx [ 110 ] ; xx [ 114 ] = - xx
[ 111 ] ; pm_math_cross3 ( xx + 107 , xx + 112 , xx + 115 ) ; xx [ 107 ] = xx
[ 103 ] + xx [ 104 ] + ( xx [ 106 ] * xx [ 66 ] + xx [ 115 ] ) * xx [ 80 ] ;
xx [ 106 ] = xx [ 100 ] - xx [ 107 ] ; xx [ 108 ] = 5.088251355846174e-12 ;
xx [ 109 ] = xx [ 108 ] - ( xx [ 66 ] * xx [ 110 ] + xx [ 116 ] ) * xx [ 80 ]
; xx [ 110 ] = xx [ 101 ] + xx [ 109 ] ; xx [ 100 ] = 4.00000000521855e-3 ;
xx [ 101 ] = xx [ 100 ] + xx [ 105 ] + xx [ 80 ] * ( xx [ 117 ] - xx [ 111 ]
* xx [ 66 ] ) ; xx [ 111 ] = xx [ 102 ] - xx [ 101 ] ; xx [ 112 ] = xx [ 106
] ; xx [ 113 ] = xx [ 110 ] ; xx [ 114 ] = xx [ 111 ] ; pm_math_quatXform (
xx + 50 , xx + 112 , xx + 115 ) ; xx [ 102 ] = 3.641924106626229e-8 ; xx [
112 ] = xx [ 72 ] ; xx [ 113 ] = - xx [ 73 ] ; xx [ 114 ] = xx [ 74 ] ;
pm_math_quatXform ( xx + 50 , xx + 112 , xx + 118 ) ; xx [ 121 ] = xx [ 102 ]
+ xx [ 118 ] ; xx [ 122 ] = xx [ 115 ] + xx [ 121 ] ; xx [ 123 ] =
0.04574999999998041 ; xx [ 124 ] = xx [ 123 ] + xx [ 119 ] ; xx [ 125 ] = xx
[ 116 ] + xx [ 124 ] ; xx [ 115 ] = 2.92603149291605e-7 ; xx [ 116 ] = xx [
115 ] + xx [ 120 ] ; xx [ 118 ] = xx [ 117 ] + xx [ 116 ] ; xx [ 126 ] = xx [
122 ] ; xx [ 127 ] = xx [ 125 ] ; xx [ 128 ] = xx [ 118 ] ; pm_math_quatXform
( xx + 35 , xx + 126 , xx + 129 ) ; xx [ 117 ] = 3.641162862673871e-8 ; xx [
119 ] = 0.04575000000717538 ; xx [ 126 ] = xx [ 117 ] ; xx [ 127 ] = xx [ 119
] ; xx [ 128 ] = - 2.926046524752066e-7 ; pm_math_quatXform ( xx + 35 , xx +
126 , xx + 132 ) ; xx [ 120 ] = xx [ 130 ] + xx [ 133 ] ; xx [ 130 ] = xx [
129 ] + xx [ 132 ] ; xx [ 129 ] = xx [ 120 ] * xx [ 10 ] - xx [ 130 ] * xx [
8 ] ; xx [ 131 ] = 3.107391981487723e-12 ; xx [ 135 ] = 9.83617579279345e-12
; xx [ 136 ] = xx [ 131 ] * xx [ 8 ] + xx [ 135 ] * xx [ 10 ] ; xx [ 137 ] =
xx [ 80 ] * xx [ 136 ] * xx [ 10 ] ; xx [ 138 ] = xx [ 80 ] * xx [ 10 ] * xx
[ 129 ] - ( xx [ 120 ] - xx [ 137 ] ) - xx [ 135 ] ; xx [ 139 ] = xx [ 3 ] ;
xx [ 140 ] = xx [ 7 ] ; xx [ 141 ] = xx [ 15 ] ; xx [ 120 ] = xx [ 80 ] * xx
[ 136 ] * xx [ 8 ] ; xx [ 136 ] = xx [ 130 ] + xx [ 80 ] * xx [ 8 ] * xx [
129 ] + xx [ 120 ] - xx [ 131 ] ; xx [ 129 ] = xx [ 15 ] * xx [ 136 ] ; xx [
130 ] = xx [ 15 ] * xx [ 138 ] ; xx [ 142 ] = xx [ 3 ] * xx [ 136 ] - xx [
138 ] * xx [ 7 ] ; xx [ 143 ] = - xx [ 129 ] ; xx [ 144 ] = xx [ 130 ] ; xx [
145 ] = xx [ 142 ] ; pm_math_cross3 ( xx + 139 , xx + 143 , xx + 146 ) ; xx [
149 ] = - ( xx [ 11 ] - xx [ 9 ] ) ; xx [ 150 ] = xx [ 4 ] ; xx [ 151 ] = xx
[ 6 ] ; xx [ 152 ] = xx [ 16 ] ; pm_math_quatCompose ( xx + 149 , xx + 35 ,
xx + 153 ) ; pm_math_quatCompose ( xx + 153 , xx + 68 , xx + 157 ) ; xx [ 4 ]
= 7.960502648785241e-7 ; xx [ 6 ] = xx [ 4 ] * xx [ 71 ] ; xx [ 9 ] = xx [ 4
] * xx [ 69 ] + xx [ 70 ] ; xx [ 143 ] = xx [ 6 ] ; xx [ 144 ] = xx [ 71 ] ;
xx [ 145 ] = - xx [ 9 ] ; pm_math_cross3 ( xx + 69 , xx + 143 , xx + 161 ) ;
xx [ 11 ] = xx [ 68 ] * xx [ 71 ] ; xx [ 143 ] = xx [ 22 ] + ( xx [ 161 ] -
xx [ 68 ] * xx [ 6 ] ) * xx [ 80 ] ; xx [ 144 ] = xx [ 80 ] * ( xx [ 162 ] -
xx [ 11 ] ) - xx [ 4 ] ; xx [ 145 ] = xx [ 80 ] * ( xx [ 163 ] + xx [ 68 ] *
xx [ 9 ] ) ; pm_math_cross3 ( xx + 143 , xx + 84 , xx + 161 ) ;
pm_math_quatXform ( xx + 157 , xx + 161 , xx + 143 ) ; xx [ 9 ] = - ( xx [
118 ] * xx [ 4 ] ) ; xx [ 161 ] = xx [ 9 ] ; xx [ 162 ] = - xx [ 118 ] ; xx [
163 ] = xx [ 125 ] + xx [ 122 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 35 , xx
+ 161 , xx + 164 ) ; xx [ 16 ] = 2.329280111075767e-13 ; xx [ 161 ] =
2.926046524751139e-7 ; xx [ 167 ] = xx [ 16 ] ; xx [ 168 ] = xx [ 161 ] ; xx
[ 169 ] = 0.04575000000718987 ; pm_math_quatXform ( xx + 35 , xx + 167 , xx +
170 ) ; xx [ 173 ] = xx [ 164 ] + xx [ 170 ] ; xx [ 174 ] = xx [ 165 ] + xx [
171 ] ; xx [ 175 ] = xx [ 166 ] + xx [ 172 ] ; pm_math_quatXform ( xx + 149 ,
xx + 173 , xx + 162 ) ; xx [ 165 ] = xx [ 69 ] - xx [ 4 ] * xx [ 70 ] ; xx [
173 ] = - xx [ 71 ] ; xx [ 174 ] = xx [ 6 ] ; xx [ 175 ] = xx [ 165 ] ;
pm_math_cross3 ( xx + 69 , xx + 173 , xx + 176 ) ; xx [ 173 ] = xx [ 4 ] + (
xx [ 11 ] + xx [ 176 ] ) * xx [ 80 ] ; xx [ 174 ] = xx [ 22 ] + xx [ 80 ] * (
xx [ 177 ] - xx [ 4 ] * xx [ 11 ] ) ; xx [ 175 ] = xx [ 80 ] * ( xx [ 178 ] -
xx [ 68 ] * xx [ 165 ] ) ; pm_math_cross3 ( xx + 173 , xx + 84 , xx + 176 ) ;
pm_math_quatXform ( xx + 157 , xx + 176 , xx + 173 ) ; xx [ 176 ] = xx [ 118
] ; xx [ 177 ] = xx [ 9 ] ; xx [ 178 ] = xx [ 125 ] * xx [ 4 ] - xx [ 122 ] ;
pm_math_quatXform ( xx + 35 , xx + 176 , xx + 179 ) ; xx [ 176 ] = - xx [ 161
] ; xx [ 177 ] = xx [ 16 ] ; xx [ 178 ] = 7.670997177269469e-12 ;
pm_math_quatXform ( xx + 35 , xx + 176 , xx + 182 ) ; xx [ 185 ] = xx [ 179 ]
+ xx [ 182 ] ; xx [ 186 ] = xx [ 180 ] + xx [ 183 ] ; xx [ 187 ] = xx [ 181 ]
+ xx [ 184 ] ; pm_math_quatXform ( xx + 149 , xx + 185 , xx + 179 ) ; xx [
185 ] = xx [ 80 ] * ( xx [ 69 ] * xx [ 71 ] - xx [ 68 ] * xx [ 70 ] ) ; xx [
186 ] = ( xx [ 68 ] * xx [ 69 ] + xx [ 70 ] * xx [ 71 ] ) * xx [ 80 ] ; xx [
187 ] = xx [ 22 ] - ( xx [ 69 ] * xx [ 69 ] + xx [ 70 ] * xx [ 70 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 185 , xx + 84 , xx + 68 ) ; pm_math_quatXform (
xx + 157 , xx + 68 , xx + 185 ) ; xx [ 68 ] = xx [ 30 ] ; xx [ 69 ] = xx [ 32
] ; xx [ 70 ] = xx [ 34 ] ; xx [ 6 ] = xx [ 122 ] * xx [ 33 ] ; xx [ 9 ] = xx
[ 125 ] * xx [ 33 ] ; xx [ 11 ] = xx [ 122 ] * xx [ 23 ] + xx [ 31 ] * xx [
125 ] ; xx [ 157 ] = xx [ 6 ] ; xx [ 158 ] = xx [ 9 ] ; xx [ 159 ] = - xx [
11 ] ; pm_math_cross3 ( xx + 68 , xx + 157 , xx + 188 ) ; xx [ 16 ] = xx [
117 ] * xx [ 33 ] ; xx [ 30 ] = xx [ 119 ] * xx [ 33 ] ; xx [ 32 ] = xx [ 117
] * xx [ 23 ] + xx [ 31 ] * xx [ 119 ] ; xx [ 157 ] = xx [ 16 ] ; xx [ 158 ]
= xx [ 30 ] ; xx [ 159 ] = - xx [ 32 ] ; pm_math_cross3 ( xx + 68 , xx + 157
, xx + 191 ) ; xx [ 34 ] = xx [ 80 ] * ( xx [ 191 ] + xx [ 16 ] * xx [ 27 ] )
; xx [ 16 ] = ( xx [ 30 ] * xx [ 27 ] + xx [ 192 ] ) * xx [ 80 ] ; xx [ 30 ]
= ( xx [ 193 ] - xx [ 32 ] * xx [ 27 ] ) * xx [ 80 ] ; xx [ 157 ] = xx [ 80 ]
* ( xx [ 188 ] + xx [ 6 ] * xx [ 27 ] ) + xx [ 34 ] - xx [ 125 ] - xx [ 119 ]
; xx [ 158 ] = xx [ 122 ] + xx [ 80 ] * ( xx [ 189 ] + xx [ 9 ] * xx [ 27 ] )
+ xx [ 16 ] + xx [ 117 ] ; xx [ 159 ] = ( xx [ 190 ] - xx [ 27 ] * xx [ 11 ]
) * xx [ 80 ] + xx [ 30 ] ; pm_math_quatXform ( xx + 149 , xx + 157 , xx +
188 ) ; pm_math_quatCompose ( xx + 153 , xx + 50 , xx + 157 ) ;
pm_math_quatCompose ( xx + 157 , xx + 58 , xx + 191 ) ; xx [ 6 ] = xx [ 60 ]
* xx [ 60 ] ; xx [ 9 ] = xx [ 61 ] * xx [ 61 ] ; xx [ 11 ] = xx [ 60 ] * xx [
59 ] ; xx [ 32 ] = xx [ 58 ] * xx [ 61 ] ; xx [ 71 ] = xx [ 60 ] * xx [ 58 ]
; xx [ 118 ] = xx [ 61 ] * xx [ 59 ] ; xx [ 195 ] = xx [ 22 ] - ( xx [ 6 ] +
xx [ 9 ] ) * xx [ 80 ] ; xx [ 196 ] = xx [ 80 ] * ( xx [ 11 ] - xx [ 32 ] ) ;
xx [ 197 ] = ( xx [ 71 ] + xx [ 118 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx +
195 , xx + 84 , xx + 198 ) ; pm_math_quatXform ( xx + 191 , xx + 198 , xx +
195 ) ; xx [ 198 ] = xx [ 39 ] ; xx [ 199 ] = xx [ 47 ] ; xx [ 200 ] = xx [
49 ] ; xx [ 47 ] = xx [ 46 ] * xx [ 110 ] ; xx [ 49 ] = xx [ 48 ] * xx [ 111
] ; xx [ 122 ] = xx [ 47 ] + xx [ 49 ] ; xx [ 125 ] = xx [ 110 ] * xx [ 39 ]
; xx [ 161 ] = xx [ 111 ] * xx [ 39 ] ; xx [ 201 ] = - xx [ 122 ] ; xx [ 202
] = - xx [ 125 ] ; xx [ 203 ] = - xx [ 161 ] ; pm_math_cross3 ( xx + 198 , xx
+ 201 , xx + 204 ) ; xx [ 165 ] = xx [ 46 ] * xx [ 73 ] ; xx [ 166 ] = xx [
48 ] * xx [ 74 ] ; xx [ 201 ] = xx [ 165 ] - xx [ 166 ] ; xx [ 202 ] = xx [
73 ] * xx [ 39 ] ; xx [ 203 ] = xx [ 74 ] * xx [ 39 ] ; xx [ 207 ] = xx [ 201
] ; xx [ 208 ] = xx [ 202 ] ; xx [ 209 ] = - xx [ 203 ] ; pm_math_cross3 ( xx
+ 198 , xx + 207 , xx + 210 ) ; xx [ 207 ] = ( xx [ 43 ] * xx [ 201 ] + xx [
210 ] ) * xx [ 80 ] ; xx [ 201 ] = xx [ 80 ] * ( xx [ 211 ] + xx [ 202 ] * xx
[ 43 ] ) ; xx [ 202 ] = ( xx [ 212 ] - xx [ 203 ] * xx [ 43 ] ) * xx [ 80 ] ;
xx [ 208 ] = xx [ 80 ] * ( xx [ 204 ] - xx [ 122 ] * xx [ 43 ] ) + xx [ 207 ]
; xx [ 209 ] = xx [ 80 ] * ( xx [ 205 ] - xx [ 125 ] * xx [ 43 ] ) + xx [ 201
] - xx [ 111 ] - xx [ 74 ] ; xx [ 210 ] = xx [ 110 ] + xx [ 80 ] * ( xx [ 206
] - xx [ 161 ] * xx [ 43 ] ) + xx [ 202 ] - xx [ 73 ] ; pm_math_quatXform (
xx + 153 , xx + 208 , xx + 203 ) ; xx [ 122 ] = xx [ 59 ] * xx [ 59 ] ; xx [
125 ] = xx [ 60 ] * xx [ 61 ] ; xx [ 60 ] = xx [ 58 ] * xx [ 59 ] ; xx [ 208
] = ( xx [ 32 ] + xx [ 11 ] ) * xx [ 80 ] ; xx [ 209 ] = xx [ 22 ] - ( xx [ 9
] + xx [ 122 ] ) * xx [ 80 ] ; xx [ 210 ] = xx [ 80 ] * ( xx [ 125 ] - xx [
60 ] ) ; pm_math_cross3 ( xx + 208 , xx + 84 , xx + 211 ) ; pm_math_quatXform
( xx + 191 , xx + 211 , xx + 208 ) ; xx [ 9 ] = xx [ 46 ] * xx [ 106 ] ; xx [
11 ] = xx [ 106 ] * xx [ 39 ] ; xx [ 32 ] = xx [ 11 ] - xx [ 49 ] ; xx [ 49 ]
= xx [ 46 ] * xx [ 111 ] ; xx [ 211 ] = xx [ 9 ] ; xx [ 212 ] = xx [ 32 ] ;
xx [ 213 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 198 , xx + 211 , xx + 214 ) ;
xx [ 58 ] = xx [ 46 ] * xx [ 72 ] ; xx [ 59 ] = xx [ 72 ] * xx [ 39 ] ; xx [
61 ] = xx [ 166 ] - xx [ 59 ] ; xx [ 161 ] = xx [ 46 ] * xx [ 74 ] ; xx [ 211
] = xx [ 58 ] ; xx [ 212 ] = - xx [ 61 ] ; xx [ 213 ] = xx [ 161 ] ;
pm_math_cross3 ( xx + 198 , xx + 211 , xx + 217 ) ; xx [ 166 ] = xx [ 80 ] *
( xx [ 217 ] + xx [ 58 ] * xx [ 43 ] ) ; xx [ 58 ] = xx [ 80 ] * ( xx [ 218 ]
- xx [ 61 ] * xx [ 43 ] ) ; xx [ 61 ] = ( xx [ 161 ] * xx [ 43 ] + xx [ 219 ]
) * xx [ 80 ] ; xx [ 211 ] = xx [ 111 ] + ( xx [ 9 ] * xx [ 43 ] + xx [ 214 ]
) * xx [ 80 ] + xx [ 166 ] + xx [ 74 ] ; xx [ 212 ] = ( xx [ 43 ] * xx [ 32 ]
+ xx [ 215 ] ) * xx [ 80 ] + xx [ 58 ] ; xx [ 213 ] = ( xx [ 49 ] * xx [ 43 ]
+ xx [ 216 ] ) * xx [ 80 ] + xx [ 61 ] - xx [ 106 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 153 , xx + 211 , xx + 214 ) ; xx [ 211 ] = xx [ 80 ]
* ( xx [ 118 ] - xx [ 71 ] ) ; xx [ 212 ] = ( xx [ 60 ] + xx [ 125 ] ) * xx [
80 ] ; xx [ 213 ] = xx [ 22 ] - ( xx [ 122 ] + xx [ 6 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 211 , xx + 84 , xx + 217 ) ; pm_math_quatXform ( xx +
191 , xx + 217 , xx + 211 ) ; xx [ 6 ] = xx [ 48 ] * xx [ 106 ] ; xx [ 9 ] =
xx [ 48 ] * xx [ 110 ] ; xx [ 32 ] = xx [ 11 ] - xx [ 47 ] ; xx [ 191 ] = xx
[ 6 ] ; xx [ 192 ] = xx [ 9 ] ; xx [ 193 ] = xx [ 32 ] ; pm_math_cross3 ( xx
+ 198 , xx + 191 , xx + 217 ) ; xx [ 11 ] = xx [ 48 ] * xx [ 72 ] ; xx [ 47 ]
= xx [ 48 ] * xx [ 73 ] ; xx [ 49 ] = xx [ 59 ] + xx [ 165 ] ; xx [ 191 ] =
xx [ 11 ] ; xx [ 192 ] = - xx [ 47 ] ; xx [ 193 ] = xx [ 49 ] ;
pm_math_cross3 ( xx + 198 , xx + 191 , xx + 220 ) ; xx [ 59 ] = ( xx [ 11 ] *
xx [ 43 ] + xx [ 220 ] ) * xx [ 80 ] ; xx [ 11 ] = xx [ 80 ] * ( xx [ 221 ] -
xx [ 47 ] * xx [ 43 ] ) ; xx [ 47 ] = ( xx [ 49 ] * xx [ 43 ] + xx [ 222 ] )
* xx [ 80 ] ; xx [ 191 ] = ( xx [ 6 ] * xx [ 43 ] + xx [ 217 ] ) * xx [ 80 ]
+ xx [ 59 ] - xx [ 110 ] + xx [ 73 ] ; xx [ 192 ] = xx [ 106 ] + ( xx [ 9 ] *
xx [ 43 ] + xx [ 218 ] ) * xx [ 80 ] + xx [ 11 ] + xx [ 72 ] ; xx [ 193 ] = (
xx [ 43 ] * xx [ 32 ] + xx [ 219 ] ) * xx [ 80 ] + xx [ 47 ] ;
pm_math_quatXform ( xx + 153 , xx + 191 , xx + 217 ) ; pm_math_quatCompose (
xx + 157 , xx + 75 , xx + 191 ) ; xx [ 6 ] = xx [ 55 ] * xx [ 191 ] + xx [
194 ] * xx [ 67 ] ; xx [ 9 ] = xx [ 55 ] * xx [ 192 ] - xx [ 193 ] * xx [ 67
] ; xx [ 32 ] = xx [ 55 ] * xx [ 193 ] + xx [ 192 ] * xx [ 67 ] ; xx [ 49 ] =
xx [ 55 ] * xx [ 194 ] - xx [ 191 ] * xx [ 67 ] ; xx [ 220 ] = xx [ 6 ] ; xx
[ 221 ] = xx [ 9 ] ; xx [ 222 ] = xx [ 32 ] ; xx [ 223 ] = xx [ 49 ] ; xx [
60 ] = xx [ 57 ] * xx [ 67 ] ; xx [ 71 ] = xx [ 80 ] * xx [ 55 ] * xx [ 60 ]
; xx [ 55 ] = 2.51806510486852e-12 ; xx [ 106 ] = 3.799560972592208e-12 ; xx
[ 110 ] = xx [ 80 ] * xx [ 60 ] * xx [ 67 ] - xx [ 57 ] ; xx [ 224 ] = xx [
74 ] * xx [ 71 ] + xx [ 55 ] ; xx [ 225 ] = xx [ 106 ] + xx [ 74 ] * xx [ 110
] ; xx [ 226 ] = xx [ 73 ] * xx [ 110 ] - xx [ 72 ] * xx [ 71 ] ;
pm_math_quatXform ( xx + 220 , xx + 224 , xx + 227 ) ; xx [ 60 ] =
0.1320051346083185 ; xx [ 224 ] = - ( xx [ 63 ] * xx [ 91 ] ) ; xx [ 225 ] =
xx [ 63 ] * xx [ 93 ] - xx [ 60 ] ; xx [ 226 ] = xx [ 57 ] * xx [ 91 ] ;
pm_math_quatXform ( xx + 75 , xx + 224 , xx + 230 ) ; xx [ 67 ] =
0.02540000000000025 ; xx [ 71 ] = xx [ 67 ] * xx [ 54 ] ; xx [ 91 ] = xx [ 64
] * xx [ 67 ] ; xx [ 93 ] = xx [ 80 ] * ( xx [ 71 ] * xx [ 66 ] - xx [ 91 ] *
xx [ 65 ] ) ; xx [ 110 ] = ( xx [ 71 ] * xx [ 54 ] + xx [ 64 ] * xx [ 91 ] )
* xx [ 80 ] ; xx [ 111 ] = ( xx [ 91 ] * xx [ 66 ] + xx [ 71 ] * xx [ 65 ] )
* xx [ 80 ] ; xx [ 224 ] = xx [ 230 ] + xx [ 93 ] ; xx [ 225 ] = xx [ 231 ] +
xx [ 110 ] - xx [ 67 ] ; xx [ 226 ] = xx [ 232 ] - xx [ 111 ] ;
pm_math_quatXform ( xx + 157 , xx + 224 , xx + 230 ) ; xx [ 224 ] = xx [ 9 ]
; xx [ 225 ] = xx [ 32 ] ; xx [ 226 ] = xx [ 49 ] ; xx [ 71 ] = xx [ 72 ] *
xx [ 49 ] ; xx [ 91 ] = xx [ 73 ] * xx [ 49 ] ; xx [ 49 ] = xx [ 72 ] * xx [
9 ] - xx [ 32 ] * xx [ 73 ] ; xx [ 233 ] = - xx [ 71 ] ; xx [ 234 ] = xx [ 91
] ; xx [ 235 ] = xx [ 49 ] ; pm_math_cross3 ( xx + 224 , xx + 233 , xx + 236
) ; xx [ 9 ] = xx [ 80 ] * ( xx [ 94 ] - xx [ 88 ] ) - xx [ 87 ] ; xx [ 32 ]
= ( xx [ 89 ] + xx [ 92 ] ) * xx [ 80 ] - xx [ 90 ] ; xx [ 88 ] = xx [ 194 ]
* xx [ 32 ] ; xx [ 89 ] = xx [ 9 ] * xx [ 194 ] ; xx [ 92 ] = xx [ 192 ] * xx
[ 32 ] - xx [ 9 ] * xx [ 193 ] ; xx [ 224 ] = - xx [ 88 ] ; xx [ 225 ] = xx [
89 ] ; xx [ 226 ] = xx [ 92 ] ; pm_math_cross3 ( xx + 192 , xx + 224 , xx +
233 ) ; xx [ 94 ] = xx [ 2 ] * state [ 66 ] ; xx [ 118 ] = cos ( xx [ 94 ] )
; xx [ 122 ] = 0.5901074779979936 ; xx [ 125 ] = xx [ 2 ] * state [ 64 ] ; xx
[ 161 ] = cos ( xx [ 125 ] ) ; xx [ 165 ] = 0.5901036711621467 ; xx [ 206 ] =
sin ( xx [ 125 ] ) ; xx [ 125 ] = xx [ 122 ] * xx [ 161 ] + xx [ 165 ] * xx [
206 ] ; xx [ 224 ] = xx [ 118 ] * xx [ 125 ] ; xx [ 225 ] = xx [ 165 ] * xx [
161 ] - xx [ 122 ] * xx [ 206 ] ; xx [ 226 ] = sin ( xx [ 94 ] ) ; xx [ 94 ]
= xx [ 225 ] * xx [ 226 ] ; xx [ 239 ] = 0.389585375426561 ; xx [ 240 ] =
0.3895819001770367 ; xx [ 241 ] = xx [ 239 ] * xx [ 161 ] - xx [ 240 ] * xx [
206 ] ; xx [ 242 ] = xx [ 240 ] * xx [ 161 ] + xx [ 239 ] * xx [ 206 ] ; xx [
161 ] = - ( xx [ 241 ] * xx [ 118 ] - xx [ 226 ] * xx [ 242 ] ) ; xx [ 206 ]
= xx [ 241 ] * xx [ 226 ] + xx [ 118 ] * xx [ 242 ] ; xx [ 243 ] = xx [ 225 ]
* xx [ 118 ] - xx [ 226 ] * xx [ 125 ] ; xx [ 244 ] = - ( xx [ 224 ] + xx [
94 ] ) ; xx [ 245 ] = xx [ 161 ] ; xx [ 246 ] = xx [ 206 ] ; xx [ 247 ] = xx
[ 243 ] ; xx [ 248 ] = xx [ 22 ] / sqrt ( state [ 68 ] * state [ 68 ] + state
[ 69 ] * state [ 69 ] + state [ 70 ] * state [ 70 ] + state [ 71 ] * state [
71 ] ) ; xx [ 249 ] = xx [ 248 ] * state [ 71 ] ; xx [ 250 ] = xx [ 248 ] *
state [ 68 ] ; xx [ 251 ] = xx [ 21 ] * xx [ 249 ] - xx [ 25 ] * xx [ 250 ] ;
xx [ 252 ] = xx [ 248 ] * state [ 70 ] ; xx [ 253 ] = xx [ 248 ] * state [ 69
] ; xx [ 248 ] = xx [ 21 ] * xx [ 252 ] + xx [ 25 ] * xx [ 253 ] ; xx [ 254 ]
= - xx [ 248 ] ; xx [ 255 ] = xx [ 25 ] * xx [ 252 ] - xx [ 21 ] * xx [ 253 ]
; xx [ 256 ] = - xx [ 255 ] ; xx [ 257 ] = xx [ 21 ] * xx [ 250 ] + xx [ 25 ]
* xx [ 249 ] ; xx [ 258 ] = - xx [ 257 ] ; xx [ 259 ] = xx [ 251 ] ; xx [ 260
] = xx [ 254 ] ; xx [ 261 ] = xx [ 256 ] ; xx [ 262 ] = xx [ 258 ] ;
pm_math_quatCompose ( xx + 244 , xx + 259 , xx + 263 ) ; xx [ 244 ] = ( xx [
255 ] * xx [ 251 ] + xx [ 257 ] * xx [ 248 ] ) * xx [ 80 ] ; xx [ 245 ] = xx
[ 80 ] * ( xx [ 255 ] * xx [ 257 ] - xx [ 248 ] * xx [ 251 ] ) ; xx [ 246 ] =
xx [ 22 ] - ( xx [ 248 ] * xx [ 248 ] + xx [ 255 ] * xx [ 255 ] ) * xx [ 80 ]
; xx [ 267 ] = xx [ 102 ] ; xx [ 268 ] = xx [ 123 ] ; xx [ 269 ] = xx [ 115 ]
; pm_math_cross3 ( xx + 244 , xx + 267 , xx + 270 ) ; pm_math_quatXform ( xx
+ 263 , xx + 270 , xx + 244 ) ; pm_math_quatXform ( xx + 259 , xx + 126 , xx
+ 263 ) ; xx [ 247 ] = xx [ 264 ] * xx [ 226 ] - xx [ 118 ] * xx [ 263 ] ; xx
[ 266 ] = 6.924287580811761e-12 ; xx [ 270 ] = 1.024070757638107e-11 ; xx [
271 ] = xx [ 266 ] * xx [ 226 ] - xx [ 270 ] * xx [ 118 ] ; xx [ 272 ] = xx [
80 ] * xx [ 226 ] * xx [ 247 ] - ( xx [ 264 ] + xx [ 80 ] * xx [ 271 ] * xx [
226 ] ) + xx [ 266 ] ; xx [ 273 ] = - xx [ 125 ] ; xx [ 274 ] = - xx [ 242 ]
; xx [ 275 ] = xx [ 273 ] ; xx [ 276 ] = xx [ 225 ] ; xx [ 277 ] = xx [ 274 ]
; xx [ 278 ] = xx [ 263 ] + xx [ 80 ] * xx [ 118 ] * xx [ 247 ] - xx [ 80 ] *
xx [ 271 ] * xx [ 118 ] - xx [ 270 ] ; xx [ 247 ] = xx [ 278 ] * xx [ 242 ] ;
xx [ 271 ] = xx [ 272 ] * xx [ 242 ] ; xx [ 279 ] = xx [ 278 ] * xx [ 125 ] +
xx [ 225 ] * xx [ 272 ] ; xx [ 280 ] = xx [ 247 ] ; xx [ 281 ] = - xx [ 271 ]
; xx [ 282 ] = - xx [ 279 ] ; pm_math_cross3 ( xx + 275 , xx + 280 , xx + 283
) ; xx [ 286 ] = - ( xx [ 94 ] + xx [ 224 ] ) ; xx [ 287 ] = xx [ 161 ] ; xx
[ 288 ] = xx [ 206 ] ; xx [ 289 ] = xx [ 243 ] ; pm_math_quatCompose ( xx +
286 , xx + 259 , xx + 290 ) ; xx [ 94 ] = - 2.329268144978725e-13 ; xx [ 280
] = xx [ 94 ] ; xx [ 281 ] = - xx [ 115 ] ; xx [ 282 ] = 0.0457500000000094 ;
pm_math_quatXform ( xx + 290 , xx + 280 , xx + 294 ) ; pm_math_quatXform ( xx
+ 259 , xx + 167 , xx + 297 ) ; pm_math_quatXform ( xx + 286 , xx + 297 , xx
+ 300 ) ; xx [ 297 ] = xx [ 115 ] ; xx [ 298 ] = xx [ 94 ] ; xx [ 299 ] =
5.855191459023036e-14 ; pm_math_quatXform ( xx + 290 , xx + 297 , xx + 303 )
; pm_math_quatXform ( xx + 259 , xx + 176 , xx + 306 ) ; pm_math_quatXform (
xx + 286 , xx + 306 , xx + 259 ) ; xx [ 94 ] = xx [ 102 ] * xx [ 293 ] ; xx [
161 ] = xx [ 102 ] * xx [ 291 ] + xx [ 123 ] * xx [ 292 ] ; xx [ 306 ] = - xx
[ 94 ] ; xx [ 307 ] = - ( xx [ 123 ] * xx [ 293 ] ) ; xx [ 308 ] = xx [ 161 ]
; pm_math_cross3 ( xx + 291 , xx + 306 , xx + 309 ) ; xx [ 306 ] = xx [ 254 ]
; xx [ 307 ] = xx [ 256 ] ; xx [ 308 ] = xx [ 258 ] ; xx [ 206 ] = xx [ 117 ]
* xx [ 257 ] ; xx [ 224 ] = xx [ 119 ] * xx [ 257 ] ; xx [ 243 ] = xx [ 117 ]
* xx [ 248 ] + xx [ 255 ] * xx [ 119 ] ; xx [ 254 ] = xx [ 206 ] ; xx [ 255 ]
= xx [ 224 ] ; xx [ 256 ] = - xx [ 243 ] ; pm_math_cross3 ( xx + 306 , xx +
254 , xx + 312 ) ; xx [ 254 ] = xx [ 80 ] * ( xx [ 312 ] + xx [ 206 ] * xx [
251 ] ) - xx [ 119 ] ; xx [ 255 ] = xx [ 117 ] + ( xx [ 224 ] * xx [ 251 ] +
xx [ 313 ] ) * xx [ 80 ] ; xx [ 256 ] = ( xx [ 314 ] - xx [ 243 ] * xx [ 251
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 286 , xx + 254 , xx + 306 ) ; xx [
206 ] = xx [ 2 ] * state [ 45 ] ; xx [ 224 ] = sin ( xx [ 206 ] ) ; xx [ 243
] = xx [ 62 ] * xx [ 224 ] ; xx [ 248 ] = cos ( xx [ 206 ] ) ; xx [ 206 ] =
xx [ 62 ] * xx [ 248 ] ; xx [ 251 ] = xx [ 243 ] - xx [ 206 ] ; xx [ 254 ] =
xx [ 56 ] * xx [ 248 ] ; xx [ 248 ] = xx [ 56 ] * xx [ 224 ] ; xx [ 224 ] =
xx [ 254 ] + xx [ 248 ] ; xx [ 255 ] = - xx [ 224 ] ; xx [ 256 ] = xx [ 248 ]
- xx [ 254 ] ; xx [ 248 ] = xx [ 243 ] + xx [ 206 ] ; xx [ 206 ] = - xx [ 248
] ; xx [ 312 ] = xx [ 251 ] ; xx [ 313 ] = xx [ 255 ] ; xx [ 314 ] = xx [ 256
] ; xx [ 315 ] = xx [ 206 ] ; pm_math_quatCompose ( xx + 75 , xx + 312 , xx +
316 ) ; pm_math_quatCompose ( xx + 50 , xx + 316 , xx + 320 ) ;
pm_math_quatCompose ( xx + 35 , xx + 320 , xx + 324 ) ; pm_math_quatCompose (
xx + 17 , xx + 324 , xx + 328 ) ; xx [ 332 ] = xx [ 80 ] * ( xx [ 325 ] * xx
[ 327 ] - xx [ 324 ] * xx [ 326 ] ) ; xx [ 333 ] = ( xx [ 324 ] * xx [ 325 ]
+ xx [ 326 ] * xx [ 327 ] ) * xx [ 80 ] ; xx [ 334 ] = xx [ 22 ] - ( xx [ 325
] * xx [ 325 ] + xx [ 326 ] * xx [ 326 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx
+ 332 , xx + 84 , xx + 324 ) ; pm_math_quatXform ( xx + 328 , xx + 324 , xx +
332 ) ; xx [ 243 ] = 0.1412410329922704 ; xx [ 254 ] = 1.121202762681406e-11
; xx [ 257 ] = 6.145027516349377e-13 ; xx [ 324 ] = - xx [ 254 ] ; xx [ 325 ]
= - xx [ 257 ] ; xx [ 326 ] = - 3.999999999522439e-3 ; pm_math_quatXform ( xx
+ 312 , xx + 324 , xx + 327 ) ; xx [ 258 ] = xx [ 243 ] - xx [ 327 ] ; xx [
262 ] = 0.05221615474387575 ; xx [ 327 ] = xx [ 262 ] - xx [ 329 ] ; xx [ 329
] = xx [ 258 ] ; xx [ 330 ] = - xx [ 328 ] ; xx [ 331 ] = xx [ 327 ] ;
pm_math_quatXform ( xx + 75 , xx + 329 , xx + 335 ) ; xx [ 338 ] = xx [ 335 ]
- xx [ 107 ] ; xx [ 339 ] = xx [ 336 ] + xx [ 109 ] ; xx [ 335 ] = xx [ 337 ]
- xx [ 101 ] ; xx [ 340 ] = xx [ 338 ] ; xx [ 341 ] = xx [ 339 ] ; xx [ 342 ]
= xx [ 335 ] ; pm_math_quatXform ( xx + 50 , xx + 340 , xx + 343 ) ; xx [ 336
] = xx [ 343 ] + xx [ 121 ] ; xx [ 337 ] = xx [ 344 ] + xx [ 124 ] ; xx [ 340
] = xx [ 345 ] + xx [ 116 ] ; xx [ 341 ] = xx [ 336 ] ; xx [ 342 ] = xx [ 337
] ; xx [ 343 ] = xx [ 340 ] ; pm_math_quatXform ( xx + 35 , xx + 341 , xx +
344 ) ; xx [ 341 ] = xx [ 345 ] + xx [ 133 ] ; xx [ 342 ] = xx [ 344 ] + xx [
132 ] ; xx [ 343 ] = xx [ 341 ] * xx [ 10 ] - xx [ 342 ] * xx [ 8 ] ; xx [
344 ] = xx [ 80 ] * xx [ 10 ] * xx [ 343 ] - ( xx [ 341 ] - xx [ 137 ] ) - xx
[ 135 ] ; xx [ 341 ] = xx [ 342 ] + xx [ 80 ] * xx [ 8 ] * xx [ 343 ] + xx [
120 ] - xx [ 131 ] ; xx [ 342 ] = xx [ 341 ] * xx [ 15 ] ; xx [ 343 ] = xx [
344 ] * xx [ 15 ] ; xx [ 345 ] = xx [ 341 ] * xx [ 3 ] - xx [ 344 ] * xx [ 7
] ; xx [ 346 ] = - xx [ 342 ] ; xx [ 347 ] = xx [ 343 ] ; xx [ 348 ] = xx [
345 ] ; pm_math_cross3 ( xx + 139 , xx + 346 , xx + 349 ) ;
pm_math_quatCompose ( xx + 153 , xx + 320 , xx + 352 ) ; xx [ 346 ] = xx [ 4
] * xx [ 323 ] ; xx [ 347 ] = xx [ 4 ] * xx [ 321 ] + xx [ 322 ] ; xx [ 356 ]
= xx [ 346 ] ; xx [ 357 ] = xx [ 323 ] ; xx [ 358 ] = - xx [ 347 ] ;
pm_math_cross3 ( xx + 321 , xx + 356 , xx + 359 ) ; xx [ 348 ] = xx [ 320 ] *
xx [ 323 ] ; xx [ 356 ] = xx [ 22 ] + ( xx [ 359 ] - xx [ 320 ] * xx [ 346 ]
) * xx [ 80 ] ; xx [ 357 ] = xx [ 80 ] * ( xx [ 360 ] - xx [ 348 ] ) - xx [ 4
] ; xx [ 358 ] = xx [ 80 ] * ( xx [ 361 ] + xx [ 320 ] * xx [ 347 ] ) ;
pm_math_cross3 ( xx + 356 , xx + 84 , xx + 359 ) ; pm_math_quatXform ( xx +
352 , xx + 359 , xx + 356 ) ; xx [ 347 ] = - ( xx [ 340 ] * xx [ 4 ] ) ; xx [
359 ] = xx [ 347 ] ; xx [ 360 ] = - xx [ 340 ] ; xx [ 361 ] = xx [ 337 ] + xx
[ 336 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 35 , xx + 359 , xx + 362 ) ; xx
[ 359 ] = xx [ 362 ] + xx [ 170 ] ; xx [ 360 ] = xx [ 363 ] + xx [ 171 ] ; xx
[ 361 ] = xx [ 364 ] + xx [ 172 ] ; pm_math_quatXform ( xx + 149 , xx + 359 ,
xx + 362 ) ; xx [ 359 ] = xx [ 321 ] - xx [ 4 ] * xx [ 322 ] ; xx [ 365 ] = -
xx [ 323 ] ; xx [ 366 ] = xx [ 346 ] ; xx [ 367 ] = xx [ 359 ] ;
pm_math_cross3 ( xx + 321 , xx + 365 , xx + 368 ) ; xx [ 365 ] = xx [ 4 ] + (
xx [ 348 ] + xx [ 368 ] ) * xx [ 80 ] ; xx [ 366 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 369 ] - xx [ 4 ] * xx [ 348 ] ) ; xx [ 367 ] = xx [ 80 ] * ( xx [ 370
] - xx [ 320 ] * xx [ 359 ] ) ; pm_math_cross3 ( xx + 365 , xx + 84 , xx +
359 ) ; pm_math_quatXform ( xx + 352 , xx + 359 , xx + 365 ) ; xx [ 359 ] =
xx [ 340 ] ; xx [ 360 ] = xx [ 347 ] ; xx [ 361 ] = xx [ 337 ] * xx [ 4 ] -
xx [ 336 ] ; pm_math_quatXform ( xx + 35 , xx + 359 , xx + 346 ) ; xx [ 359 ]
= xx [ 346 ] + xx [ 182 ] ; xx [ 360 ] = xx [ 347 ] + xx [ 183 ] ; xx [ 361 ]
= xx [ 348 ] + xx [ 184 ] ; pm_math_quatXform ( xx + 149 , xx + 359 , xx +
346 ) ; xx [ 359 ] = xx [ 80 ] * ( xx [ 321 ] * xx [ 323 ] - xx [ 320 ] * xx
[ 322 ] ) ; xx [ 360 ] = ( xx [ 320 ] * xx [ 321 ] + xx [ 322 ] * xx [ 323 ]
) * xx [ 80 ] ; xx [ 361 ] = xx [ 22 ] - ( xx [ 321 ] * xx [ 321 ] + xx [ 322
] * xx [ 322 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 359 , xx + 84 , xx + 320
) ; pm_math_quatXform ( xx + 352 , xx + 320 , xx + 359 ) ; xx [ 320 ] = xx [
336 ] * xx [ 33 ] ; xx [ 321 ] = xx [ 337 ] * xx [ 33 ] ; xx [ 322 ] = xx [
336 ] * xx [ 23 ] + xx [ 337 ] * xx [ 31 ] ; xx [ 352 ] = xx [ 320 ] ; xx [
353 ] = xx [ 321 ] ; xx [ 354 ] = - xx [ 322 ] ; pm_math_cross3 ( xx + 68 ,
xx + 352 , xx + 368 ) ; xx [ 352 ] = xx [ 80 ] * ( xx [ 368 ] + xx [ 320 ] *
xx [ 27 ] ) + xx [ 34 ] - xx [ 337 ] - xx [ 119 ] ; xx [ 353 ] = xx [ 336 ] +
xx [ 80 ] * ( xx [ 369 ] + xx [ 321 ] * xx [ 27 ] ) + xx [ 16 ] + xx [ 117 ]
; xx [ 354 ] = ( xx [ 370 ] - xx [ 322 ] * xx [ 27 ] ) * xx [ 80 ] + xx [ 30
] ; pm_math_quatXform ( xx + 149 , xx + 352 , xx + 320 ) ;
pm_math_quatCompose ( xx + 157 , xx + 316 , xx + 352 ) ; xx [ 323 ] = xx [
318 ] * xx [ 318 ] ; xx [ 336 ] = xx [ 319 ] * xx [ 319 ] ; xx [ 337 ] = xx [
317 ] * xx [ 318 ] ; xx [ 340 ] = xx [ 316 ] * xx [ 319 ] ; xx [ 368 ] = xx [
316 ] * xx [ 318 ] ; xx [ 369 ] = xx [ 317 ] * xx [ 319 ] ; xx [ 370 ] = xx [
22 ] - ( xx [ 323 ] + xx [ 336 ] ) * xx [ 80 ] ; xx [ 371 ] = xx [ 80 ] * (
xx [ 337 ] - xx [ 340 ] ) ; xx [ 372 ] = ( xx [ 368 ] + xx [ 369 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 370 , xx + 84 , xx + 373 ) ; pm_math_quatXform (
xx + 352 , xx + 373 , xx + 370 ) ; xx [ 373 ] = xx [ 339 ] * xx [ 46 ] ; xx [
374 ] = xx [ 335 ] * xx [ 48 ] ; xx [ 375 ] = xx [ 373 ] + xx [ 374 ] ; xx [
376 ] = xx [ 339 ] * xx [ 39 ] ; xx [ 377 ] = xx [ 335 ] * xx [ 39 ] ; xx [
378 ] = - xx [ 375 ] ; xx [ 379 ] = - xx [ 376 ] ; xx [ 380 ] = - xx [ 377 ]
; pm_math_cross3 ( xx + 198 , xx + 378 , xx + 381 ) ; xx [ 378 ] = xx [ 80 ]
* ( xx [ 381 ] - xx [ 375 ] * xx [ 43 ] ) + xx [ 207 ] ; xx [ 379 ] = xx [ 80
] * ( xx [ 382 ] - xx [ 376 ] * xx [ 43 ] ) + xx [ 201 ] - xx [ 335 ] - xx [
74 ] ; xx [ 380 ] = xx [ 339 ] + xx [ 80 ] * ( xx [ 383 ] - xx [ 377 ] * xx [
43 ] ) + xx [ 202 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 153 , xx + 378 ,
xx + 375 ) ; xx [ 378 ] = xx [ 317 ] * xx [ 317 ] ; xx [ 379 ] = xx [ 318 ] *
xx [ 319 ] ; xx [ 318 ] = xx [ 316 ] * xx [ 317 ] ; xx [ 380 ] = ( xx [ 340 ]
+ xx [ 337 ] ) * xx [ 80 ] ; xx [ 381 ] = xx [ 22 ] - ( xx [ 336 ] + xx [ 378
] ) * xx [ 80 ] ; xx [ 382 ] = xx [ 80 ] * ( xx [ 379 ] - xx [ 318 ] ) ;
pm_math_cross3 ( xx + 380 , xx + 84 , xx + 383 ) ; pm_math_quatXform ( xx +
352 , xx + 383 , xx + 380 ) ; xx [ 316 ] = xx [ 338 ] * xx [ 46 ] ; xx [ 317
] = xx [ 338 ] * xx [ 39 ] ; xx [ 319 ] = xx [ 317 ] - xx [ 374 ] ; xx [ 336
] = xx [ 335 ] * xx [ 46 ] ; xx [ 383 ] = xx [ 316 ] ; xx [ 384 ] = xx [ 319
] ; xx [ 385 ] = xx [ 336 ] ; pm_math_cross3 ( xx + 198 , xx + 383 , xx + 386
) ; xx [ 383 ] = xx [ 335 ] + ( xx [ 316 ] * xx [ 43 ] + xx [ 386 ] ) * xx [
80 ] + xx [ 166 ] + xx [ 74 ] ; xx [ 384 ] = ( xx [ 319 ] * xx [ 43 ] + xx [
387 ] ) * xx [ 80 ] + xx [ 58 ] ; xx [ 385 ] = ( xx [ 336 ] * xx [ 43 ] + xx
[ 388 ] ) * xx [ 80 ] + xx [ 61 ] - xx [ 338 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 153 , xx + 383 , xx + 335 ) ; xx [ 383 ] = xx [ 80 ]
* ( xx [ 369 ] - xx [ 368 ] ) ; xx [ 384 ] = ( xx [ 318 ] + xx [ 379 ] ) * xx
[ 80 ] ; xx [ 385 ] = xx [ 22 ] - ( xx [ 378 ] + xx [ 323 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 383 , xx + 84 , xx + 386 ) ; pm_math_quatXform ( xx +
352 , xx + 386 , xx + 383 ) ; xx [ 316 ] = xx [ 338 ] * xx [ 48 ] ; xx [ 318
] = xx [ 339 ] * xx [ 48 ] ; xx [ 319 ] = xx [ 317 ] - xx [ 373 ] ; xx [ 352
] = xx [ 316 ] ; xx [ 353 ] = xx [ 318 ] ; xx [ 354 ] = xx [ 319 ] ;
pm_math_cross3 ( xx + 198 , xx + 352 , xx + 386 ) ; xx [ 352 ] = ( xx [ 316 ]
* xx [ 43 ] + xx [ 386 ] ) * xx [ 80 ] + xx [ 59 ] - xx [ 339 ] + xx [ 73 ] ;
xx [ 353 ] = xx [ 338 ] + ( xx [ 318 ] * xx [ 43 ] + xx [ 387 ] ) * xx [ 80 ]
+ xx [ 11 ] + xx [ 72 ] ; xx [ 354 ] = ( xx [ 319 ] * xx [ 43 ] + xx [ 388 ]
) * xx [ 80 ] + xx [ 47 ] ; pm_math_quatXform ( xx + 153 , xx + 352 , xx +
316 ) ; pm_math_quatCompose ( xx + 191 , xx + 312 , xx + 352 ) ; xx [ 312 ] =
xx [ 255 ] ; xx [ 313 ] = xx [ 256 ] ; xx [ 314 ] = xx [ 206 ] ; xx [ 206 ] =
xx [ 63 ] * xx [ 256 ] ; xx [ 255 ] = xx [ 248 ] * xx [ 57 ] - xx [ 224 ] *
xx [ 63 ] ; xx [ 315 ] = xx [ 57 ] * xx [ 256 ] ; xx [ 338 ] = - xx [ 206 ] ;
xx [ 339 ] = xx [ 255 ] ; xx [ 340 ] = xx [ 315 ] ; pm_math_cross3 ( xx + 312
, xx + 338 , xx + 386 ) ; xx [ 338 ] = xx [ 80 ] * ( xx [ 386 ] + xx [ 206 ]
* xx [ 251 ] ) - xx [ 57 ] ; xx [ 339 ] = xx [ 80 ] * ( xx [ 387 ] - xx [ 251
] * xx [ 255 ] ) ; xx [ 340 ] = ( xx [ 388 ] - xx [ 315 ] * xx [ 251 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 338 , xx + 84 , xx + 386 ) ;
pm_math_quatXform ( xx + 352 , xx + 386 , xx + 338 ) ; xx [ 386 ] = - ( xx [
63 ] * xx [ 328 ] ) ; xx [ 387 ] = xx [ 57 ] * xx [ 327 ] - xx [ 63 ] * xx [
258 ] ; xx [ 388 ] = xx [ 57 ] * xx [ 328 ] ; pm_math_quatXform ( xx + 75 ,
xx + 386 , xx + 389 ) ; xx [ 386 ] = xx [ 389 ] + xx [ 93 ] ; xx [ 387 ] = xx
[ 390 ] + xx [ 110 ] - xx [ 67 ] ; xx [ 388 ] = xx [ 391 ] - xx [ 111 ] ;
pm_math_quatXform ( xx + 157 , xx + 386 , xx + 389 ) ; xx [ 206 ] = xx [ 72 ]
* xx [ 355 ] ; xx [ 255 ] = xx [ 73 ] * xx [ 354 ] - xx [ 72 ] * xx [ 353 ] ;
xx [ 386 ] = xx [ 206 ] ; xx [ 387 ] = - ( xx [ 73 ] * xx [ 355 ] ) ; xx [
388 ] = xx [ 255 ] ; pm_math_cross3 ( xx + 353 , xx + 386 , xx + 392 ) ; xx [
258 ] = xx [ 248 ] * xx [ 254 ] ; xx [ 315 ] = xx [ 248 ] * xx [ 257 ] ; xx [
248 ] = xx [ 257 ] * xx [ 256 ] - xx [ 224 ] * xx [ 254 ] ; xx [ 386 ] = xx [
258 ] ; xx [ 387 ] = xx [ 315 ] ; xx [ 388 ] = xx [ 248 ] ; pm_math_cross3 (
xx + 312 , xx + 386 , xx + 395 ) ; xx [ 312 ] = xx [ 80 ] * ( xx [ 395 ] + xx
[ 258 ] * xx [ 251 ] ) - xx [ 257 ] ; xx [ 313 ] = xx [ 254 ] + ( xx [ 315 ]
* xx [ 251 ] + xx [ 396 ] ) * xx [ 80 ] ; xx [ 314 ] = ( xx [ 251 ] * xx [
248 ] + xx [ 397 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 191 , xx + 312 ,
xx + 386 ) ; xx [ 224 ] = xx [ 2 ] * state [ 53 ] ; xx [ 248 ] = sin ( xx [
224 ] ) ; xx [ 251 ] = cos ( xx [ 224 ] ) ; xx [ 224 ] = xx [ 1 ] * xx [ 248
] - xx [ 5 ] * xx [ 251 ] ; xx [ 256 ] = xx [ 2 ] * state [ 55 ] ; xx [ 258 ]
= cos ( xx [ 256 ] ) ; xx [ 312 ] = xx [ 224 ] * xx [ 258 ] ; xx [ 313 ] =
sin ( xx [ 256 ] ) ; xx [ 256 ] = xx [ 1 ] * xx [ 251 ] + xx [ 5 ] * xx [ 248
] ; xx [ 314 ] = xx [ 313 ] * xx [ 256 ] ; xx [ 315 ] = xx [ 12 ] * xx [ 251
] + xx [ 13 ] * xx [ 248 ] ; xx [ 319 ] = xx [ 12 ] * xx [ 248 ] - xx [ 13 ]
* xx [ 251 ] ; xx [ 248 ] = - ( xx [ 258 ] * xx [ 315 ] + xx [ 319 ] * xx [
313 ] ) ; xx [ 251 ] = xx [ 313 ] * xx [ 315 ] - xx [ 319 ] * xx [ 258 ] ; xx
[ 323 ] = xx [ 224 ] * xx [ 313 ] + xx [ 258 ] * xx [ 256 ] ; xx [ 395 ] = xx
[ 312 ] - xx [ 314 ] ; xx [ 396 ] = xx [ 248 ] ; xx [ 397 ] = xx [ 251 ] ; xx
[ 398 ] = xx [ 323 ] ; xx [ 327 ] = xx [ 22 ] / sqrt ( state [ 57 ] * state [
57 ] + state [ 58 ] * state [ 58 ] + state [ 59 ] * state [ 59 ] + state [ 60
] * state [ 60 ] ) ; xx [ 328 ] = xx [ 327 ] * state [ 60 ] ; xx [ 368 ] = xx
[ 327 ] * state [ 57 ] ; xx [ 369 ] = xx [ 21 ] * xx [ 328 ] - xx [ 25 ] * xx
[ 368 ] ; xx [ 373 ] = xx [ 327 ] * state [ 59 ] ; xx [ 374 ] = xx [ 327 ] *
state [ 58 ] ; xx [ 327 ] = xx [ 21 ] * xx [ 373 ] + xx [ 25 ] * xx [ 374 ] ;
xx [ 378 ] = - xx [ 327 ] ; xx [ 379 ] = xx [ 25 ] * xx [ 373 ] - xx [ 21 ] *
xx [ 374 ] ; xx [ 399 ] = - xx [ 379 ] ; xx [ 400 ] = xx [ 21 ] * xx [ 368 ]
+ xx [ 25 ] * xx [ 328 ] ; xx [ 401 ] = - xx [ 400 ] ; xx [ 402 ] = xx [ 369
] ; xx [ 403 ] = xx [ 378 ] ; xx [ 404 ] = xx [ 399 ] ; xx [ 405 ] = xx [ 401
] ; pm_math_quatCompose ( xx + 395 , xx + 402 , xx + 406 ) ; xx [ 395 ] = (
xx [ 379 ] * xx [ 369 ] + xx [ 400 ] * xx [ 327 ] ) * xx [ 80 ] ; xx [ 396 ]
= xx [ 80 ] * ( xx [ 379 ] * xx [ 400 ] - xx [ 369 ] * xx [ 327 ] ) ; xx [
397 ] = xx [ 22 ] - ( xx [ 327 ] * xx [ 327 ] + xx [ 379 ] * xx [ 379 ] ) *
xx [ 80 ] ; pm_math_cross3 ( xx + 395 , xx + 267 , xx + 410 ) ;
pm_math_quatXform ( xx + 406 , xx + 410 , xx + 395 ) ; pm_math_quatXform ( xx
+ 402 , xx + 126 , xx + 406 ) ; xx [ 398 ] = xx [ 407 ] * xx [ 313 ] - xx [
258 ] * xx [ 406 ] ; xx [ 409 ] = 9.27756931389703e-12 ; xx [ 410 ] =
5.443558296964576e-12 ; xx [ 411 ] = xx [ 409 ] * xx [ 258 ] + xx [ 410 ] *
xx [ 313 ] ; xx [ 412 ] = xx [ 80 ] * xx [ 313 ] * xx [ 398 ] - ( xx [ 407 ]
+ xx [ 80 ] * xx [ 411 ] * xx [ 313 ] ) + xx [ 410 ] ; xx [ 413 ] = xx [ 224
] ; xx [ 414 ] = xx [ 256 ] ; xx [ 415 ] = xx [ 319 ] ; xx [ 416 ] = xx [ 406
] + xx [ 80 ] * xx [ 258 ] * xx [ 398 ] - xx [ 80 ] * xx [ 411 ] * xx [ 258 ]
+ xx [ 409 ] ; xx [ 398 ] = xx [ 319 ] * xx [ 416 ] ; xx [ 411 ] = xx [ 319 ]
* xx [ 412 ] ; xx [ 417 ] = xx [ 224 ] * xx [ 416 ] - xx [ 412 ] * xx [ 256 ]
; xx [ 418 ] = - xx [ 398 ] ; xx [ 419 ] = xx [ 411 ] ; xx [ 420 ] = xx [ 417
] ; pm_math_cross3 ( xx + 413 , xx + 418 , xx + 421 ) ; xx [ 424 ] = - ( xx [
314 ] - xx [ 312 ] ) ; xx [ 425 ] = xx [ 248 ] ; xx [ 426 ] = xx [ 251 ] ; xx
[ 427 ] = xx [ 323 ] ; pm_math_quatCompose ( xx + 424 , xx + 402 , xx + 428 )
; pm_math_quatXform ( xx + 428 , xx + 280 , xx + 418 ) ; pm_math_quatXform (
xx + 402 , xx + 167 , xx + 432 ) ; pm_math_quatXform ( xx + 424 , xx + 432 ,
xx + 435 ) ; pm_math_quatXform ( xx + 428 , xx + 297 , xx + 432 ) ;
pm_math_quatXform ( xx + 402 , xx + 176 , xx + 438 ) ; pm_math_quatXform ( xx
+ 424 , xx + 438 , xx + 402 ) ; xx [ 248 ] = xx [ 102 ] * xx [ 431 ] ; xx [
251 ] = xx [ 102 ] * xx [ 429 ] + xx [ 123 ] * xx [ 430 ] ; xx [ 438 ] = - xx
[ 248 ] ; xx [ 439 ] = - ( xx [ 123 ] * xx [ 431 ] ) ; xx [ 440 ] = xx [ 251
] ; pm_math_cross3 ( xx + 429 , xx + 438 , xx + 441 ) ; xx [ 438 ] = xx [ 378
] ; xx [ 439 ] = xx [ 399 ] ; xx [ 440 ] = xx [ 401 ] ; xx [ 312 ] = xx [ 117
] * xx [ 400 ] ; xx [ 314 ] = xx [ 119 ] * xx [ 400 ] ; xx [ 323 ] = xx [ 117
] * xx [ 327 ] + xx [ 379 ] * xx [ 119 ] ; xx [ 399 ] = xx [ 312 ] ; xx [ 400
] = xx [ 314 ] ; xx [ 401 ] = - xx [ 323 ] ; pm_math_cross3 ( xx + 438 , xx +
399 , xx + 444 ) ; xx [ 399 ] = xx [ 80 ] * ( xx [ 444 ] + xx [ 312 ] * xx [
369 ] ) - xx [ 119 ] ; xx [ 400 ] = xx [ 117 ] + ( xx [ 314 ] * xx [ 369 ] +
xx [ 445 ] ) * xx [ 80 ] ; xx [ 401 ] = ( xx [ 446 ] - xx [ 323 ] * xx [ 369
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 424 , xx + 399 , xx + 438 ) ; xx [
312 ] = 0.3535533905932758 ; xx [ 314 ] = xx [ 2 ] * state [ 47 ] ; xx [ 323
] = cos ( xx [ 314 ] ) ; xx [ 327 ] = xx [ 312 ] * xx [ 323 ] ; xx [ 369 ] =
sin ( xx [ 314 ] ) ; xx [ 314 ] = xx [ 312 ] * xx [ 369 ] ; xx [ 378 ] = xx [
327 ] + xx [ 314 ] ; xx [ 379 ] = 0.6123724356957934 ; xx [ 399 ] = xx [ 379
] * xx [ 369 ] ; xx [ 369 ] = xx [ 379 ] * xx [ 323 ] ; xx [ 323 ] = xx [ 399
] - xx [ 369 ] ; xx [ 400 ] = xx [ 369 ] + xx [ 399 ] ; xx [ 369 ] = - xx [
400 ] ; xx [ 399 ] = xx [ 314 ] - xx [ 327 ] ; xx [ 444 ] = - xx [ 378 ] ; xx
[ 445 ] = xx [ 323 ] ; xx [ 446 ] = xx [ 369 ] ; xx [ 447 ] = xx [ 399 ] ;
pm_math_quatCompose ( xx + 75 , xx + 444 , xx + 448 ) ; pm_math_quatCompose (
xx + 50 , xx + 448 , xx + 452 ) ; pm_math_quatCompose ( xx + 35 , xx + 452 ,
xx + 456 ) ; pm_math_quatCompose ( xx + 17 , xx + 456 , xx + 460 ) ; xx [ 464
] = xx [ 80 ] * ( xx [ 457 ] * xx [ 459 ] - xx [ 456 ] * xx [ 458 ] ) ; xx [
465 ] = ( xx [ 456 ] * xx [ 457 ] + xx [ 458 ] * xx [ 459 ] ) * xx [ 80 ] ;
xx [ 466 ] = xx [ 22 ] - ( xx [ 457 ] * xx [ 457 ] + xx [ 458 ] * xx [ 458 ]
) * xx [ 80 ] ; pm_math_cross3 ( xx + 464 , xx + 84 , xx + 456 ) ;
pm_math_quatXform ( xx + 460 , xx + 456 , xx + 464 ) ; xx [ 314 ] =
0.1412410329922711 ; xx [ 327 ] = 3.881762117297072e-12 ; xx [ 401 ] =
3.80025733104361e-12 ; xx [ 456 ] = xx [ 327 ] ; xx [ 457 ] = - xx [ 401 ] ;
xx [ 458 ] = 3.999999998874377e-3 ; pm_math_quatXform ( xx + 444 , xx + 456 ,
xx + 459 ) ; xx [ 405 ] = xx [ 314 ] + xx [ 459 ] ; xx [ 462 ] =
0.05221615474387407 ; xx [ 459 ] = xx [ 462 ] - xx [ 461 ] ; xx [ 467 ] = -
xx [ 405 ] ; xx [ 468 ] = - xx [ 460 ] ; xx [ 469 ] = xx [ 459 ] ;
pm_math_quatXform ( xx + 75 , xx + 467 , xx + 470 ) ; xx [ 461 ] = xx [ 470 ]
- xx [ 107 ] ; xx [ 463 ] = xx [ 471 ] + xx [ 109 ] ; xx [ 470 ] = xx [ 472 ]
- xx [ 101 ] ; xx [ 471 ] = xx [ 461 ] ; xx [ 472 ] = xx [ 463 ] ; xx [ 473 ]
= xx [ 470 ] ; pm_math_quatXform ( xx + 50 , xx + 471 , xx + 474 ) ; xx [ 471
] = xx [ 474 ] + xx [ 121 ] ; xx [ 472 ] = xx [ 475 ] + xx [ 124 ] ; xx [ 473
] = xx [ 476 ] + xx [ 116 ] ; pm_math_quatXform ( xx + 35 , xx + 471 , xx +
474 ) ; xx [ 477 ] = xx [ 475 ] + xx [ 133 ] ; xx [ 475 ] = xx [ 474 ] + xx [
132 ] ; xx [ 474 ] = xx [ 477 ] * xx [ 10 ] - xx [ 475 ] * xx [ 8 ] ; xx [
476 ] = xx [ 80 ] * xx [ 10 ] * xx [ 474 ] - ( xx [ 477 ] - xx [ 137 ] ) - xx
[ 135 ] ; xx [ 477 ] = xx [ 475 ] + xx [ 80 ] * xx [ 8 ] * xx [ 474 ] + xx [
120 ] - xx [ 131 ] ; xx [ 474 ] = xx [ 15 ] * xx [ 477 ] ; xx [ 475 ] = xx [
15 ] * xx [ 476 ] ; xx [ 478 ] = xx [ 3 ] * xx [ 477 ] - xx [ 476 ] * xx [ 7
] ; xx [ 479 ] = - xx [ 474 ] ; xx [ 480 ] = xx [ 475 ] ; xx [ 481 ] = xx [
478 ] ; pm_math_cross3 ( xx + 139 , xx + 479 , xx + 482 ) ;
pm_math_quatCompose ( xx + 153 , xx + 452 , xx + 485 ) ; xx [ 479 ] = xx [ 4
] * xx [ 455 ] ; xx [ 480 ] = xx [ 4 ] * xx [ 453 ] + xx [ 454 ] ; xx [ 489 ]
= xx [ 479 ] ; xx [ 490 ] = xx [ 455 ] ; xx [ 491 ] = - xx [ 480 ] ;
pm_math_cross3 ( xx + 453 , xx + 489 , xx + 492 ) ; xx [ 481 ] = xx [ 452 ] *
xx [ 455 ] ; xx [ 489 ] = xx [ 22 ] + ( xx [ 492 ] - xx [ 452 ] * xx [ 479 ]
) * xx [ 80 ] ; xx [ 490 ] = xx [ 80 ] * ( xx [ 493 ] - xx [ 481 ] ) - xx [ 4
] ; xx [ 491 ] = xx [ 80 ] * ( xx [ 494 ] + xx [ 452 ] * xx [ 480 ] ) ;
pm_math_cross3 ( xx + 489 , xx + 84 , xx + 492 ) ; pm_math_quatXform ( xx +
485 , xx + 492 , xx + 489 ) ; xx [ 480 ] = - ( xx [ 473 ] * xx [ 4 ] ) ; xx [
492 ] = xx [ 480 ] ; xx [ 493 ] = - xx [ 473 ] ; xx [ 494 ] = xx [ 472 ] + xx
[ 471 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 35 , xx + 492 , xx + 495 ) ; xx
[ 492 ] = xx [ 495 ] + xx [ 170 ] ; xx [ 493 ] = xx [ 496 ] + xx [ 171 ] ; xx
[ 494 ] = xx [ 497 ] + xx [ 172 ] ; pm_math_quatXform ( xx + 149 , xx + 492 ,
xx + 495 ) ; xx [ 492 ] = xx [ 453 ] - xx [ 4 ] * xx [ 454 ] ; xx [ 498 ] = -
xx [ 455 ] ; xx [ 499 ] = xx [ 479 ] ; xx [ 500 ] = xx [ 492 ] ;
pm_math_cross3 ( xx + 453 , xx + 498 , xx + 501 ) ; xx [ 498 ] = xx [ 4 ] + (
xx [ 481 ] + xx [ 501 ] ) * xx [ 80 ] ; xx [ 499 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 502 ] - xx [ 4 ] * xx [ 481 ] ) ; xx [ 500 ] = xx [ 80 ] * ( xx [ 503
] - xx [ 452 ] * xx [ 492 ] ) ; pm_math_cross3 ( xx + 498 , xx + 84 , xx +
492 ) ; pm_math_quatXform ( xx + 485 , xx + 492 , xx + 498 ) ; xx [ 492 ] =
xx [ 473 ] ; xx [ 493 ] = xx [ 480 ] ; xx [ 494 ] = xx [ 472 ] * xx [ 4 ] -
xx [ 471 ] ; pm_math_quatXform ( xx + 35 , xx + 492 , xx + 479 ) ; xx [ 492 ]
= xx [ 479 ] + xx [ 182 ] ; xx [ 493 ] = xx [ 480 ] + xx [ 183 ] ; xx [ 494 ]
= xx [ 481 ] + xx [ 184 ] ; pm_math_quatXform ( xx + 149 , xx + 492 , xx +
479 ) ; xx [ 492 ] = xx [ 80 ] * ( xx [ 453 ] * xx [ 455 ] - xx [ 452 ] * xx
[ 454 ] ) ; xx [ 493 ] = ( xx [ 452 ] * xx [ 453 ] + xx [ 454 ] * xx [ 455 ]
) * xx [ 80 ] ; xx [ 494 ] = xx [ 22 ] - ( xx [ 453 ] * xx [ 453 ] + xx [ 454
] * xx [ 454 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 492 , xx + 84 , xx + 452
) ; pm_math_quatXform ( xx + 485 , xx + 452 , xx + 492 ) ; xx [ 452 ] = xx [
471 ] * xx [ 33 ] ; xx [ 453 ] = xx [ 472 ] * xx [ 33 ] ; xx [ 454 ] = xx [
471 ] * xx [ 23 ] + xx [ 31 ] * xx [ 472 ] ; xx [ 485 ] = xx [ 452 ] ; xx [
486 ] = xx [ 453 ] ; xx [ 487 ] = - xx [ 454 ] ; pm_math_cross3 ( xx + 68 ,
xx + 485 , xx + 501 ) ; xx [ 485 ] = xx [ 80 ] * ( xx [ 501 ] + xx [ 452 ] *
xx [ 27 ] ) + xx [ 34 ] - xx [ 472 ] - xx [ 119 ] ; xx [ 486 ] = xx [ 471 ] +
xx [ 80 ] * ( xx [ 502 ] + xx [ 453 ] * xx [ 27 ] ) + xx [ 16 ] + xx [ 117 ]
; xx [ 487 ] = ( xx [ 503 ] - xx [ 27 ] * xx [ 454 ] ) * xx [ 80 ] + xx [ 30
] ; pm_math_quatXform ( xx + 149 , xx + 485 , xx + 452 ) ;
pm_math_quatCompose ( xx + 157 , xx + 448 , xx + 485 ) ; xx [ 455 ] = xx [
450 ] * xx [ 450 ] ; xx [ 471 ] = xx [ 451 ] * xx [ 451 ] ; xx [ 472 ] = xx [
449 ] * xx [ 450 ] ; xx [ 473 ] = xx [ 448 ] * xx [ 451 ] ; xx [ 501 ] = xx [
448 ] * xx [ 450 ] ; xx [ 502 ] = xx [ 449 ] * xx [ 451 ] ; xx [ 503 ] = xx [
22 ] - ( xx [ 455 ] + xx [ 471 ] ) * xx [ 80 ] ; xx [ 504 ] = xx [ 80 ] * (
xx [ 472 ] - xx [ 473 ] ) ; xx [ 505 ] = ( xx [ 501 ] + xx [ 502 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 503 , xx + 84 , xx + 506 ) ; pm_math_quatXform (
xx + 485 , xx + 506 , xx + 503 ) ; xx [ 506 ] = xx [ 46 ] * xx [ 463 ] ; xx [
507 ] = xx [ 48 ] * xx [ 470 ] ; xx [ 508 ] = xx [ 506 ] + xx [ 507 ] ; xx [
509 ] = xx [ 463 ] * xx [ 39 ] ; xx [ 510 ] = xx [ 470 ] * xx [ 39 ] ; xx [
511 ] = - xx [ 508 ] ; xx [ 512 ] = - xx [ 509 ] ; xx [ 513 ] = - xx [ 510 ]
; pm_math_cross3 ( xx + 198 , xx + 511 , xx + 514 ) ; xx [ 511 ] = xx [ 80 ]
* ( xx [ 514 ] - xx [ 508 ] * xx [ 43 ] ) + xx [ 207 ] ; xx [ 512 ] = xx [ 80
] * ( xx [ 515 ] - xx [ 509 ] * xx [ 43 ] ) + xx [ 201 ] - xx [ 470 ] - xx [
74 ] ; xx [ 513 ] = xx [ 463 ] + xx [ 80 ] * ( xx [ 516 ] - xx [ 510 ] * xx [
43 ] ) + xx [ 202 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 153 , xx + 511 ,
xx + 508 ) ; xx [ 511 ] = xx [ 449 ] * xx [ 449 ] ; xx [ 512 ] = xx [ 450 ] *
xx [ 451 ] ; xx [ 450 ] = xx [ 448 ] * xx [ 449 ] ; xx [ 513 ] = ( xx [ 473 ]
+ xx [ 472 ] ) * xx [ 80 ] ; xx [ 514 ] = xx [ 22 ] - ( xx [ 471 ] + xx [ 511
] ) * xx [ 80 ] ; xx [ 515 ] = xx [ 80 ] * ( xx [ 512 ] - xx [ 450 ] ) ;
pm_math_cross3 ( xx + 513 , xx + 84 , xx + 471 ) ; pm_math_quatXform ( xx +
485 , xx + 471 , xx + 513 ) ; xx [ 448 ] = xx [ 46 ] * xx [ 461 ] ; xx [ 449
] = xx [ 461 ] * xx [ 39 ] ; xx [ 451 ] = xx [ 449 ] - xx [ 507 ] ; xx [ 471
] = xx [ 46 ] * xx [ 470 ] ; xx [ 516 ] = xx [ 448 ] ; xx [ 517 ] = xx [ 451
] ; xx [ 518 ] = xx [ 471 ] ; pm_math_cross3 ( xx + 198 , xx + 516 , xx + 519
) ; xx [ 516 ] = xx [ 470 ] + ( xx [ 448 ] * xx [ 43 ] + xx [ 519 ] ) * xx [
80 ] + xx [ 166 ] + xx [ 74 ] ; xx [ 517 ] = ( xx [ 43 ] * xx [ 451 ] + xx [
520 ] ) * xx [ 80 ] + xx [ 58 ] ; xx [ 518 ] = ( xx [ 471 ] * xx [ 43 ] + xx
[ 521 ] ) * xx [ 80 ] + xx [ 61 ] - xx [ 461 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 153 , xx + 516 , xx + 470 ) ; xx [ 516 ] = xx [ 80 ]
* ( xx [ 502 ] - xx [ 501 ] ) ; xx [ 517 ] = ( xx [ 450 ] + xx [ 512 ] ) * xx
[ 80 ] ; xx [ 518 ] = xx [ 22 ] - ( xx [ 511 ] + xx [ 455 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 516 , xx + 84 , xx + 519 ) ; pm_math_quatXform ( xx +
485 , xx + 519 , xx + 516 ) ; xx [ 448 ] = xx [ 48 ] * xx [ 461 ] ; xx [ 450
] = xx [ 48 ] * xx [ 463 ] ; xx [ 451 ] = xx [ 449 ] - xx [ 506 ] ; xx [ 485
] = xx [ 448 ] ; xx [ 486 ] = xx [ 450 ] ; xx [ 487 ] = xx [ 451 ] ;
pm_math_cross3 ( xx + 198 , xx + 485 , xx + 519 ) ; xx [ 485 ] = ( xx [ 448 ]
* xx [ 43 ] + xx [ 519 ] ) * xx [ 80 ] + xx [ 59 ] - xx [ 463 ] + xx [ 73 ] ;
xx [ 486 ] = xx [ 461 ] + ( xx [ 450 ] * xx [ 43 ] + xx [ 520 ] ) * xx [ 80 ]
+ xx [ 11 ] + xx [ 72 ] ; xx [ 487 ] = ( xx [ 43 ] * xx [ 451 ] + xx [ 521 ]
) * xx [ 80 ] + xx [ 47 ] ; pm_math_quatXform ( xx + 153 , xx + 485 , xx +
448 ) ; pm_math_quatCompose ( xx + 191 , xx + 444 , xx + 485 ) ; xx [ 444 ] =
xx [ 323 ] ; xx [ 445 ] = xx [ 369 ] ; xx [ 446 ] = xx [ 399 ] ; xx [ 369 ] =
xx [ 400 ] * xx [ 63 ] ; xx [ 447 ] = xx [ 63 ] * xx [ 323 ] - xx [ 57 ] * xx
[ 399 ] ; xx [ 451 ] = xx [ 400 ] * xx [ 57 ] ; xx [ 519 ] = xx [ 369 ] ; xx
[ 520 ] = xx [ 447 ] ; xx [ 521 ] = - xx [ 451 ] ; pm_math_cross3 ( xx + 444
, xx + 519 , xx + 522 ) ; xx [ 519 ] = xx [ 80 ] * ( xx [ 522 ] + xx [ 378 ]
* xx [ 369 ] ) - xx [ 57 ] ; xx [ 520 ] = xx [ 80 ] * ( xx [ 523 ] + xx [ 378
] * xx [ 447 ] ) ; xx [ 521 ] = ( xx [ 524 ] - xx [ 378 ] * xx [ 451 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 519 , xx + 84 , xx + 522 ) ;
pm_math_quatXform ( xx + 485 , xx + 522 , xx + 519 ) ; xx [ 522 ] = - ( xx [
63 ] * xx [ 460 ] ) ; xx [ 523 ] = xx [ 63 ] * xx [ 405 ] + xx [ 57 ] * xx [
459 ] ; xx [ 524 ] = xx [ 57 ] * xx [ 460 ] ; pm_math_quatXform ( xx + 75 ,
xx + 522 , xx + 459 ) ; xx [ 522 ] = xx [ 459 ] + xx [ 93 ] ; xx [ 523 ] = xx
[ 460 ] + xx [ 110 ] - xx [ 67 ] ; xx [ 524 ] = xx [ 461 ] - xx [ 111 ] ;
pm_math_quatXform ( xx + 157 , xx + 522 , xx + 459 ) ; xx [ 369 ] = xx [ 72 ]
* xx [ 488 ] ; xx [ 405 ] = xx [ 72 ] * xx [ 486 ] - xx [ 73 ] * xx [ 487 ] ;
xx [ 522 ] = - xx [ 369 ] ; xx [ 523 ] = xx [ 73 ] * xx [ 488 ] ; xx [ 524 ]
= xx [ 405 ] ; pm_math_cross3 ( xx + 486 , xx + 522 , xx + 525 ) ; xx [ 447 ]
= xx [ 327 ] * xx [ 399 ] ; xx [ 451 ] = xx [ 401 ] * xx [ 399 ] ; xx [ 399 ]
= xx [ 327 ] * xx [ 323 ] + xx [ 400 ] * xx [ 401 ] ; xx [ 522 ] = - xx [ 447
] ; xx [ 523 ] = xx [ 451 ] ; xx [ 524 ] = xx [ 399 ] ; pm_math_cross3 ( xx +
444 , xx + 522 , xx + 528 ) ; xx [ 444 ] = xx [ 401 ] + xx [ 80 ] * ( xx [
528 ] + xx [ 378 ] * xx [ 447 ] ) ; xx [ 445 ] = xx [ 327 ] + ( xx [ 529 ] -
xx [ 378 ] * xx [ 451 ] ) * xx [ 80 ] ; xx [ 446 ] = ( xx [ 530 ] - xx [ 378
] * xx [ 399 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 191 , xx + 444 , xx +
522 ) ; xx [ 323 ] = xx [ 2 ] * state [ 77 ] ; xx [ 378 ] = cos ( xx [ 323 ]
) ; xx [ 399 ] = 0.6324445710612965 ; xx [ 400 ] = xx [ 2 ] * state [ 75 ] ;
xx [ 444 ] = cos ( xx [ 400 ] ) ; xx [ 445 ] = 0.6324396579890005 ; xx [ 446
] = sin ( xx [ 400 ] ) ; xx [ 400 ] = xx [ 399 ] * xx [ 444 ] + xx [ 445 ] *
xx [ 446 ] ; xx [ 447 ] = xx [ 378 ] * xx [ 400 ] ; xx [ 451 ] = xx [ 399 ] *
xx [ 446 ] - xx [ 445 ] * xx [ 444 ] ; xx [ 455 ] = sin ( xx [ 323 ] ) ; xx [
323 ] = xx [ 451 ] * xx [ 455 ] ; xx [ 463 ] = 0.3162553791961485 ; xx [ 473
] = 0.3162538200043588 ; xx [ 501 ] = xx [ 463 ] * xx [ 444 ] - xx [ 473 ] *
xx [ 446 ] ; xx [ 502 ] = xx [ 473 ] * xx [ 444 ] + xx [ 463 ] * xx [ 446 ] ;
xx [ 444 ] = - ( xx [ 501 ] * xx [ 378 ] - xx [ 455 ] * xx [ 502 ] ) ; xx [
446 ] = xx [ 501 ] * xx [ 455 ] + xx [ 378 ] * xx [ 502 ] ; xx [ 506 ] = xx [
455 ] * xx [ 400 ] + xx [ 451 ] * xx [ 378 ] ; xx [ 528 ] = xx [ 447 ] - xx [
323 ] ; xx [ 529 ] = xx [ 444 ] ; xx [ 530 ] = xx [ 446 ] ; xx [ 531 ] = xx [
506 ] ; xx [ 507 ] = xx [ 22 ] / sqrt ( state [ 79 ] * state [ 79 ] + state [
80 ] * state [ 80 ] + state [ 81 ] * state [ 81 ] + state [ 82 ] * state [ 82
] ) ; xx [ 511 ] = xx [ 507 ] * state [ 82 ] ; xx [ 512 ] = xx [ 507 ] *
state [ 79 ] ; xx [ 532 ] = xx [ 21 ] * xx [ 511 ] - xx [ 25 ] * xx [ 512 ] ;
xx [ 533 ] = xx [ 507 ] * state [ 81 ] ; xx [ 534 ] = xx [ 507 ] * state [ 80
] ; xx [ 507 ] = xx [ 21 ] * xx [ 533 ] + xx [ 25 ] * xx [ 534 ] ; xx [ 535 ]
= - xx [ 507 ] ; xx [ 536 ] = xx [ 25 ] * xx [ 533 ] - xx [ 21 ] * xx [ 534 ]
; xx [ 537 ] = - xx [ 536 ] ; xx [ 538 ] = xx [ 21 ] * xx [ 512 ] + xx [ 25 ]
* xx [ 511 ] ; xx [ 539 ] = - xx [ 538 ] ; xx [ 540 ] = xx [ 532 ] ; xx [ 541
] = xx [ 535 ] ; xx [ 542 ] = xx [ 537 ] ; xx [ 543 ] = xx [ 539 ] ;
pm_math_quatCompose ( xx + 528 , xx + 540 , xx + 544 ) ; xx [ 528 ] = ( xx [
536 ] * xx [ 532 ] + xx [ 507 ] * xx [ 538 ] ) * xx [ 80 ] ; xx [ 529 ] = xx
[ 80 ] * ( xx [ 536 ] * xx [ 538 ] - xx [ 532 ] * xx [ 507 ] ) ; xx [ 530 ] =
xx [ 22 ] - ( xx [ 507 ] * xx [ 507 ] + xx [ 536 ] * xx [ 536 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 528 , xx + 267 , xx + 548 ) ; pm_math_quatXform ( xx
+ 544 , xx + 548 , xx + 528 ) ; pm_math_quatXform ( xx + 540 , xx + 126 , xx
+ 544 ) ; xx [ 531 ] = xx [ 545 ] * xx [ 455 ] - xx [ 378 ] * xx [ 544 ] ; xx
[ 547 ] = 5.157931604049537e-12 ; xx [ 548 ] = 9.862118968695376e-13 ; xx [
549 ] = xx [ 547 ] * xx [ 378 ] + xx [ 548 ] * xx [ 455 ] ; xx [ 550 ] = xx [
80 ] * xx [ 455 ] * xx [ 531 ] - ( xx [ 545 ] - xx [ 80 ] * xx [ 549 ] * xx [
455 ] ) - xx [ 548 ] ; xx [ 551 ] = - xx [ 502 ] ; xx [ 552 ] = xx [ 400 ] ;
xx [ 553 ] = xx [ 451 ] ; xx [ 554 ] = xx [ 551 ] ; xx [ 555 ] = xx [ 544 ] +
xx [ 80 ] * xx [ 378 ] * xx [ 531 ] + xx [ 80 ] * xx [ 549 ] * xx [ 378 ] -
xx [ 547 ] ; xx [ 531 ] = xx [ 555 ] * xx [ 502 ] ; xx [ 549 ] = xx [ 550 ] *
xx [ 502 ] ; xx [ 556 ] = xx [ 555 ] * xx [ 400 ] - xx [ 451 ] * xx [ 550 ] ;
xx [ 557 ] = xx [ 531 ] ; xx [ 558 ] = - xx [ 549 ] ; xx [ 559 ] = xx [ 556 ]
; pm_math_cross3 ( xx + 552 , xx + 557 , xx + 560 ) ; xx [ 563 ] = - ( xx [
323 ] - xx [ 447 ] ) ; xx [ 564 ] = xx [ 444 ] ; xx [ 565 ] = xx [ 446 ] ; xx
[ 566 ] = xx [ 506 ] ; pm_math_quatCompose ( xx + 563 , xx + 540 , xx + 567 )
; pm_math_quatXform ( xx + 567 , xx + 280 , xx + 557 ) ; pm_math_quatXform (
xx + 540 , xx + 167 , xx + 571 ) ; pm_math_quatXform ( xx + 563 , xx + 571 ,
xx + 574 ) ; pm_math_quatXform ( xx + 567 , xx + 297 , xx + 571 ) ;
pm_math_quatXform ( xx + 540 , xx + 176 , xx + 577 ) ; pm_math_quatXform ( xx
+ 563 , xx + 577 , xx + 540 ) ; xx [ 323 ] = xx [ 102 ] * xx [ 570 ] ; xx [
444 ] = xx [ 102 ] * xx [ 568 ] + xx [ 123 ] * xx [ 569 ] ; xx [ 577 ] = - xx
[ 323 ] ; xx [ 578 ] = - ( xx [ 123 ] * xx [ 570 ] ) ; xx [ 579 ] = xx [ 444
] ; pm_math_cross3 ( xx + 568 , xx + 577 , xx + 580 ) ; xx [ 577 ] = xx [ 535
] ; xx [ 578 ] = xx [ 537 ] ; xx [ 579 ] = xx [ 539 ] ; xx [ 446 ] = xx [ 117
] * xx [ 538 ] ; xx [ 447 ] = xx [ 119 ] * xx [ 538 ] ; xx [ 506 ] = xx [ 117
] * xx [ 507 ] + xx [ 536 ] * xx [ 119 ] ; xx [ 535 ] = xx [ 446 ] ; xx [ 536
] = xx [ 447 ] ; xx [ 537 ] = - xx [ 506 ] ; pm_math_cross3 ( xx + 577 , xx +
535 , xx + 583 ) ; xx [ 535 ] = xx [ 80 ] * ( xx [ 583 ] + xx [ 446 ] * xx [
532 ] ) - xx [ 119 ] ; xx [ 536 ] = xx [ 117 ] + ( xx [ 447 ] * xx [ 532 ] +
xx [ 584 ] ) * xx [ 80 ] ; xx [ 537 ] = ( xx [ 585 ] - xx [ 506 ] * xx [ 532
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 563 , xx + 535 , xx + 577 ) ; xx [
446 ] = xx [ 2 ] * state [ 49 ] ; xx [ 447 ] = cos ( xx [ 446 ] ) ; xx [ 506
] = xx [ 312 ] * xx [ 447 ] ; xx [ 507 ] = sin ( xx [ 446 ] ) ; xx [ 446 ] =
xx [ 312 ] * xx [ 507 ] ; xx [ 532 ] = xx [ 506 ] + xx [ 446 ] ; xx [ 535 ] =
xx [ 379 ] * xx [ 447 ] ; xx [ 447 ] = xx [ 379 ] * xx [ 507 ] ; xx [ 507 ] =
xx [ 535 ] - xx [ 447 ] ; xx [ 536 ] = xx [ 535 ] + xx [ 447 ] ; xx [ 447 ] =
xx [ 506 ] - xx [ 446 ] ; xx [ 583 ] = xx [ 532 ] ; xx [ 584 ] = xx [ 507 ] ;
xx [ 585 ] = xx [ 536 ] ; xx [ 586 ] = xx [ 447 ] ; pm_math_quatCompose ( xx
+ 75 , xx + 583 , xx + 587 ) ; pm_math_quatCompose ( xx + 50 , xx + 587 , xx
+ 591 ) ; pm_math_quatCompose ( xx + 35 , xx + 591 , xx + 595 ) ;
pm_math_quatCompose ( xx + 17 , xx + 595 , xx + 599 ) ; xx [ 537 ] = xx [ 80
] * ( xx [ 596 ] * xx [ 598 ] - xx [ 595 ] * xx [ 597 ] ) ; xx [ 538 ] = ( xx
[ 595 ] * xx [ 596 ] + xx [ 597 ] * xx [ 598 ] ) * xx [ 80 ] ; xx [ 539 ] =
xx [ 22 ] - ( xx [ 596 ] * xx [ 596 ] + xx [ 597 ] * xx [ 597 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 537 , xx + 84 , xx + 595 ) ; pm_math_quatXform ( xx +
599 , xx + 595 , xx + 537 ) ; xx [ 446 ] = 0.1158410329922713 ; xx [ 506 ] =
5.998698970888227e-12 ; xx [ 535 ] = 6.30935626036444e-12 ; xx [ 595 ] = - xx
[ 506 ] ; xx [ 596 ] = - xx [ 535 ] ; xx [ 597 ] = 4.000000001735564e-3 ;
pm_math_quatXform ( xx + 583 , xx + 595 , xx + 598 ) ; xx [ 543 ] = xx [ 446
] + xx [ 598 ] ; xx [ 601 ] = 0.09621024525612379 ; xx [ 598 ] = xx [ 601 ] -
xx [ 600 ] ; xx [ 602 ] = - xx [ 543 ] ; xx [ 603 ] = - xx [ 599 ] ; xx [ 604
] = xx [ 598 ] ; pm_math_quatXform ( xx + 75 , xx + 602 , xx + 605 ) ; xx [
600 ] = xx [ 605 ] - xx [ 107 ] ; xx [ 608 ] = xx [ 606 ] + xx [ 109 ] ; xx [
605 ] = xx [ 607 ] - xx [ 101 ] ; xx [ 609 ] = xx [ 600 ] ; xx [ 610 ] = xx [
608 ] ; xx [ 611 ] = xx [ 605 ] ; pm_math_quatXform ( xx + 50 , xx + 609 , xx
+ 612 ) ; xx [ 606 ] = xx [ 612 ] + xx [ 121 ] ; xx [ 607 ] = xx [ 613 ] + xx
[ 124 ] ; xx [ 609 ] = xx [ 614 ] + xx [ 116 ] ; xx [ 610 ] = xx [ 606 ] ; xx
[ 611 ] = xx [ 607 ] ; xx [ 612 ] = xx [ 609 ] ; pm_math_quatXform ( xx + 35
, xx + 610 , xx + 613 ) ; xx [ 610 ] = xx [ 614 ] + xx [ 133 ] ; xx [ 611 ] =
xx [ 613 ] + xx [ 132 ] ; xx [ 612 ] = xx [ 610 ] * xx [ 10 ] - xx [ 611 ] *
xx [ 8 ] ; xx [ 613 ] = xx [ 80 ] * xx [ 10 ] * xx [ 612 ] - ( xx [ 610 ] -
xx [ 137 ] ) - xx [ 135 ] ; xx [ 610 ] = xx [ 611 ] + xx [ 80 ] * xx [ 8 ] *
xx [ 612 ] + xx [ 120 ] - xx [ 131 ] ; xx [ 611 ] = xx [ 15 ] * xx [ 610 ] ;
xx [ 612 ] = xx [ 15 ] * xx [ 613 ] ; xx [ 614 ] = xx [ 3 ] * xx [ 610 ] - xx
[ 613 ] * xx [ 7 ] ; xx [ 615 ] = - xx [ 611 ] ; xx [ 616 ] = xx [ 612 ] ; xx
[ 617 ] = xx [ 614 ] ; pm_math_cross3 ( xx + 139 , xx + 615 , xx + 618 ) ;
pm_math_quatCompose ( xx + 153 , xx + 591 , xx + 621 ) ; xx [ 615 ] = xx [ 4
] * xx [ 594 ] ; xx [ 616 ] = xx [ 4 ] * xx [ 592 ] + xx [ 593 ] ; xx [ 625 ]
= xx [ 615 ] ; xx [ 626 ] = xx [ 594 ] ; xx [ 627 ] = - xx [ 616 ] ;
pm_math_cross3 ( xx + 592 , xx + 625 , xx + 628 ) ; xx [ 617 ] = xx [ 591 ] *
xx [ 594 ] ; xx [ 625 ] = xx [ 22 ] + ( xx [ 628 ] - xx [ 591 ] * xx [ 615 ]
) * xx [ 80 ] ; xx [ 626 ] = xx [ 80 ] * ( xx [ 629 ] - xx [ 617 ] ) - xx [ 4
] ; xx [ 627 ] = xx [ 80 ] * ( xx [ 630 ] + xx [ 591 ] * xx [ 616 ] ) ;
pm_math_cross3 ( xx + 625 , xx + 84 , xx + 628 ) ; pm_math_quatXform ( xx +
621 , xx + 628 , xx + 625 ) ; xx [ 616 ] = - ( xx [ 609 ] * xx [ 4 ] ) ; xx [
628 ] = xx [ 616 ] ; xx [ 629 ] = - xx [ 609 ] ; xx [ 630 ] = xx [ 607 ] + xx
[ 606 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 35 , xx + 628 , xx + 631 ) ; xx
[ 628 ] = xx [ 631 ] + xx [ 170 ] ; xx [ 629 ] = xx [ 632 ] + xx [ 171 ] ; xx
[ 630 ] = xx [ 633 ] + xx [ 172 ] ; pm_math_quatXform ( xx + 149 , xx + 628 ,
xx + 631 ) ; xx [ 628 ] = xx [ 592 ] - xx [ 4 ] * xx [ 593 ] ; xx [ 634 ] = -
xx [ 594 ] ; xx [ 635 ] = xx [ 615 ] ; xx [ 636 ] = xx [ 628 ] ;
pm_math_cross3 ( xx + 592 , xx + 634 , xx + 637 ) ; xx [ 634 ] = xx [ 4 ] + (
xx [ 617 ] + xx [ 637 ] ) * xx [ 80 ] ; xx [ 635 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 638 ] - xx [ 4 ] * xx [ 617 ] ) ; xx [ 636 ] = xx [ 80 ] * ( xx [ 639
] - xx [ 591 ] * xx [ 628 ] ) ; pm_math_cross3 ( xx + 634 , xx + 84 , xx +
628 ) ; pm_math_quatXform ( xx + 621 , xx + 628 , xx + 634 ) ; xx [ 628 ] =
xx [ 609 ] ; xx [ 629 ] = xx [ 616 ] ; xx [ 630 ] = xx [ 607 ] * xx [ 4 ] -
xx [ 606 ] ; pm_math_quatXform ( xx + 35 , xx + 628 , xx + 615 ) ; xx [ 628 ]
= xx [ 615 ] + xx [ 182 ] ; xx [ 629 ] = xx [ 616 ] + xx [ 183 ] ; xx [ 630 ]
= xx [ 617 ] + xx [ 184 ] ; pm_math_quatXform ( xx + 149 , xx + 628 , xx +
615 ) ; xx [ 628 ] = xx [ 80 ] * ( xx [ 592 ] * xx [ 594 ] - xx [ 591 ] * xx
[ 593 ] ) ; xx [ 629 ] = ( xx [ 591 ] * xx [ 592 ] + xx [ 593 ] * xx [ 594 ]
) * xx [ 80 ] ; xx [ 630 ] = xx [ 22 ] - ( xx [ 592 ] * xx [ 592 ] + xx [ 593
] * xx [ 593 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 628 , xx + 84 , xx + 591
) ; pm_math_quatXform ( xx + 621 , xx + 591 , xx + 628 ) ; xx [ 591 ] = xx [
606 ] * xx [ 33 ] ; xx [ 592 ] = xx [ 607 ] * xx [ 33 ] ; xx [ 593 ] = xx [
606 ] * xx [ 23 ] + xx [ 31 ] * xx [ 607 ] ; xx [ 621 ] = xx [ 591 ] ; xx [
622 ] = xx [ 592 ] ; xx [ 623 ] = - xx [ 593 ] ; pm_math_cross3 ( xx + 68 ,
xx + 621 , xx + 637 ) ; xx [ 621 ] = xx [ 80 ] * ( xx [ 637 ] + xx [ 591 ] *
xx [ 27 ] ) + xx [ 34 ] - xx [ 607 ] - xx [ 119 ] ; xx [ 622 ] = xx [ 606 ] +
xx [ 80 ] * ( xx [ 638 ] + xx [ 592 ] * xx [ 27 ] ) + xx [ 16 ] + xx [ 117 ]
; xx [ 623 ] = ( xx [ 639 ] - xx [ 27 ] * xx [ 593 ] ) * xx [ 80 ] + xx [ 30
] ; pm_math_quatXform ( xx + 149 , xx + 621 , xx + 591 ) ;
pm_math_quatCompose ( xx + 157 , xx + 587 , xx + 621 ) ; xx [ 594 ] = xx [
589 ] * xx [ 589 ] ; xx [ 606 ] = xx [ 590 ] * xx [ 590 ] ; xx [ 607 ] = xx [
588 ] * xx [ 589 ] ; xx [ 609 ] = xx [ 587 ] * xx [ 590 ] ; xx [ 637 ] = xx [
587 ] * xx [ 589 ] ; xx [ 638 ] = xx [ 588 ] * xx [ 590 ] ; xx [ 639 ] = xx [
22 ] - ( xx [ 594 ] + xx [ 606 ] ) * xx [ 80 ] ; xx [ 640 ] = xx [ 80 ] * (
xx [ 607 ] - xx [ 609 ] ) ; xx [ 641 ] = ( xx [ 637 ] + xx [ 638 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 639 , xx + 84 , xx + 642 ) ; pm_math_quatXform (
xx + 621 , xx + 642 , xx + 639 ) ; xx [ 642 ] = xx [ 46 ] * xx [ 608 ] ; xx [
643 ] = xx [ 48 ] * xx [ 605 ] ; xx [ 644 ] = xx [ 642 ] + xx [ 643 ] ; xx [
645 ] = xx [ 608 ] * xx [ 39 ] ; xx [ 646 ] = xx [ 605 ] * xx [ 39 ] ; xx [
647 ] = - xx [ 644 ] ; xx [ 648 ] = - xx [ 645 ] ; xx [ 649 ] = - xx [ 646 ]
; pm_math_cross3 ( xx + 198 , xx + 647 , xx + 650 ) ; xx [ 647 ] = xx [ 80 ]
* ( xx [ 650 ] - xx [ 644 ] * xx [ 43 ] ) + xx [ 207 ] ; xx [ 648 ] = xx [ 80
] * ( xx [ 651 ] - xx [ 645 ] * xx [ 43 ] ) + xx [ 201 ] - xx [ 605 ] - xx [
74 ] ; xx [ 649 ] = xx [ 608 ] + xx [ 80 ] * ( xx [ 652 ] - xx [ 646 ] * xx [
43 ] ) + xx [ 202 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 153 , xx + 647 ,
xx + 644 ) ; xx [ 647 ] = xx [ 588 ] * xx [ 588 ] ; xx [ 648 ] = xx [ 589 ] *
xx [ 590 ] ; xx [ 589 ] = xx [ 587 ] * xx [ 588 ] ; xx [ 649 ] = ( xx [ 609 ]
+ xx [ 607 ] ) * xx [ 80 ] ; xx [ 650 ] = xx [ 22 ] - ( xx [ 606 ] + xx [ 647
] ) * xx [ 80 ] ; xx [ 651 ] = xx [ 80 ] * ( xx [ 648 ] - xx [ 589 ] ) ;
pm_math_cross3 ( xx + 649 , xx + 84 , xx + 652 ) ; pm_math_quatXform ( xx +
621 , xx + 652 , xx + 649 ) ; xx [ 587 ] = xx [ 46 ] * xx [ 600 ] ; xx [ 588
] = xx [ 600 ] * xx [ 39 ] ; xx [ 590 ] = xx [ 588 ] - xx [ 643 ] ; xx [ 606
] = xx [ 46 ] * xx [ 605 ] ; xx [ 652 ] = xx [ 587 ] ; xx [ 653 ] = xx [ 590
] ; xx [ 654 ] = xx [ 606 ] ; pm_math_cross3 ( xx + 198 , xx + 652 , xx + 655
) ; xx [ 652 ] = xx [ 605 ] + ( xx [ 587 ] * xx [ 43 ] + xx [ 655 ] ) * xx [
80 ] + xx [ 166 ] + xx [ 74 ] ; xx [ 653 ] = ( xx [ 43 ] * xx [ 590 ] + xx [
656 ] ) * xx [ 80 ] + xx [ 58 ] ; xx [ 654 ] = ( xx [ 606 ] * xx [ 43 ] + xx
[ 657 ] ) * xx [ 80 ] + xx [ 61 ] - xx [ 600 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 153 , xx + 652 , xx + 605 ) ; xx [ 652 ] = xx [ 80 ]
* ( xx [ 638 ] - xx [ 637 ] ) ; xx [ 653 ] = ( xx [ 589 ] + xx [ 648 ] ) * xx
[ 80 ] ; xx [ 654 ] = xx [ 22 ] - ( xx [ 647 ] + xx [ 594 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 652 , xx + 84 , xx + 655 ) ; pm_math_quatXform ( xx +
621 , xx + 655 , xx + 652 ) ; xx [ 587 ] = xx [ 48 ] * xx [ 600 ] ; xx [ 589
] = xx [ 48 ] * xx [ 608 ] ; xx [ 590 ] = xx [ 588 ] - xx [ 642 ] ; xx [ 621
] = xx [ 587 ] ; xx [ 622 ] = xx [ 589 ] ; xx [ 623 ] = xx [ 590 ] ;
pm_math_cross3 ( xx + 198 , xx + 621 , xx + 655 ) ; xx [ 621 ] = ( xx [ 587 ]
* xx [ 43 ] + xx [ 655 ] ) * xx [ 80 ] + xx [ 59 ] - xx [ 608 ] + xx [ 73 ] ;
xx [ 622 ] = xx [ 600 ] + ( xx [ 589 ] * xx [ 43 ] + xx [ 656 ] ) * xx [ 80 ]
+ xx [ 11 ] + xx [ 72 ] ; xx [ 623 ] = ( xx [ 43 ] * xx [ 590 ] + xx [ 657 ]
) * xx [ 80 ] + xx [ 47 ] ; pm_math_quatXform ( xx + 153 , xx + 621 , xx +
587 ) ; pm_math_quatCompose ( xx + 191 , xx + 583 , xx + 621 ) ; xx [ 583 ] =
xx [ 507 ] ; xx [ 584 ] = xx [ 536 ] ; xx [ 585 ] = xx [ 447 ] ; xx [ 586 ] =
xx [ 536 ] * xx [ 63 ] ; xx [ 590 ] = xx [ 63 ] * xx [ 507 ] - xx [ 57 ] * xx
[ 447 ] ; xx [ 594 ] = xx [ 536 ] * xx [ 57 ] ; xx [ 655 ] = - xx [ 586 ] ;
xx [ 656 ] = xx [ 590 ] ; xx [ 657 ] = xx [ 594 ] ; pm_math_cross3 ( xx + 583
, xx + 655 , xx + 658 ) ; xx [ 655 ] = xx [ 80 ] * ( xx [ 658 ] + xx [ 532 ]
* xx [ 586 ] ) - xx [ 57 ] ; xx [ 656 ] = xx [ 80 ] * ( xx [ 659 ] - xx [ 532
] * xx [ 590 ] ) ; xx [ 657 ] = ( xx [ 660 ] - xx [ 532 ] * xx [ 594 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 655 , xx + 84 , xx + 658 ) ;
pm_math_quatXform ( xx + 621 , xx + 658 , xx + 655 ) ; xx [ 658 ] = - ( xx [
63 ] * xx [ 599 ] ) ; xx [ 659 ] = xx [ 63 ] * xx [ 543 ] + xx [ 57 ] * xx [
598 ] ; xx [ 660 ] = xx [ 57 ] * xx [ 599 ] ; pm_math_quatXform ( xx + 75 ,
xx + 658 , xx + 598 ) ; xx [ 658 ] = xx [ 598 ] + xx [ 93 ] ; xx [ 659 ] = xx
[ 599 ] + xx [ 110 ] - xx [ 67 ] ; xx [ 660 ] = xx [ 600 ] - xx [ 111 ] ;
pm_math_quatXform ( xx + 157 , xx + 658 , xx + 598 ) ; xx [ 543 ] = xx [ 72 ]
* xx [ 624 ] ; xx [ 586 ] = xx [ 72 ] * xx [ 622 ] - xx [ 73 ] * xx [ 623 ] ;
xx [ 658 ] = - xx [ 543 ] ; xx [ 659 ] = xx [ 73 ] * xx [ 624 ] ; xx [ 660 ]
= xx [ 586 ] ; pm_math_cross3 ( xx + 622 , xx + 658 , xx + 661 ) ; xx [ 590 ]
= xx [ 506 ] * xx [ 447 ] ; xx [ 594 ] = xx [ 535 ] * xx [ 447 ] ; xx [ 447 ]
= xx [ 506 ] * xx [ 507 ] + xx [ 536 ] * xx [ 535 ] ; xx [ 658 ] = xx [ 590 ]
; xx [ 659 ] = xx [ 594 ] ; xx [ 660 ] = - xx [ 447 ] ; pm_math_cross3 ( xx +
583 , xx + 658 , xx + 664 ) ; xx [ 583 ] = xx [ 535 ] + xx [ 80 ] * ( xx [
664 ] + xx [ 532 ] * xx [ 590 ] ) ; xx [ 584 ] = ( xx [ 532 ] * xx [ 594 ] +
xx [ 665 ] ) * xx [ 80 ] - xx [ 506 ] ; xx [ 585 ] = ( xx [ 666 ] - xx [ 532
] * xx [ 447 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 191 , xx + 583 , xx +
658 ) ; xx [ 447 ] = xx [ 2 ] * state [ 88 ] ; xx [ 507 ] = cos ( xx [ 447 ]
) ; xx [ 532 ] = 0.6324445710612973 ; xx [ 536 ] = xx [ 2 ] * state [ 86 ] ;
xx [ 583 ] = cos ( xx [ 536 ] ) ; xx [ 584 ] = 0.6324396579890008 ; xx [ 585
] = sin ( xx [ 536 ] ) ; xx [ 536 ] = xx [ 532 ] * xx [ 583 ] + xx [ 584 ] *
xx [ 585 ] ; xx [ 590 ] = xx [ 507 ] * xx [ 536 ] ; xx [ 594 ] = xx [ 584 ] *
xx [ 583 ] - xx [ 532 ] * xx [ 585 ] ; xx [ 608 ] = sin ( xx [ 447 ] ) ; xx [
447 ] = xx [ 594 ] * xx [ 608 ] ; xx [ 609 ] = 0.3162538200043575 ; xx [ 637
] = 0.3162553791961478 ; xx [ 638 ] = xx [ 609 ] * xx [ 585 ] - xx [ 637 ] *
xx [ 583 ] ; xx [ 642 ] = xx [ 609 ] * xx [ 583 ] + xx [ 637 ] * xx [ 585 ] ;
xx [ 583 ] = - ( xx [ 638 ] * xx [ 507 ] + xx [ 608 ] * xx [ 642 ] ) ; xx [
585 ] = xx [ 638 ] * xx [ 608 ] - xx [ 507 ] * xx [ 642 ] ; xx [ 643 ] = xx [
594 ] * xx [ 507 ] - xx [ 608 ] * xx [ 536 ] ; xx [ 664 ] = - ( xx [ 590 ] +
xx [ 447 ] ) ; xx [ 665 ] = xx [ 583 ] ; xx [ 666 ] = xx [ 585 ] ; xx [ 667 ]
= xx [ 643 ] ; xx [ 647 ] = xx [ 22 ] / sqrt ( state [ 90 ] * state [ 90 ] +
state [ 91 ] * state [ 91 ] + state [ 92 ] * state [ 92 ] + state [ 93 ] *
state [ 93 ] ) ; xx [ 648 ] = xx [ 647 ] * state [ 93 ] ; xx [ 668 ] = xx [
647 ] * state [ 90 ] ; xx [ 669 ] = xx [ 21 ] * xx [ 648 ] - xx [ 25 ] * xx [
668 ] ; xx [ 670 ] = xx [ 647 ] * state [ 92 ] ; xx [ 671 ] = xx [ 647 ] *
state [ 91 ] ; xx [ 647 ] = xx [ 21 ] * xx [ 670 ] + xx [ 25 ] * xx [ 671 ] ;
xx [ 672 ] = - xx [ 647 ] ; xx [ 673 ] = xx [ 25 ] * xx [ 670 ] - xx [ 21 ] *
xx [ 671 ] ; xx [ 674 ] = - xx [ 673 ] ; xx [ 675 ] = xx [ 21 ] * xx [ 668 ]
+ xx [ 25 ] * xx [ 648 ] ; xx [ 676 ] = - xx [ 675 ] ; xx [ 677 ] = xx [ 669
] ; xx [ 678 ] = xx [ 672 ] ; xx [ 679 ] = xx [ 674 ] ; xx [ 680 ] = xx [ 676
] ; pm_math_quatCompose ( xx + 664 , xx + 677 , xx + 681 ) ; xx [ 664 ] = (
xx [ 673 ] * xx [ 669 ] + xx [ 647 ] * xx [ 675 ] ) * xx [ 80 ] ; xx [ 665 ]
= xx [ 80 ] * ( xx [ 673 ] * xx [ 675 ] - xx [ 647 ] * xx [ 669 ] ) ; xx [
666 ] = xx [ 22 ] - ( xx [ 647 ] * xx [ 647 ] + xx [ 673 ] * xx [ 673 ] ) *
xx [ 80 ] ; pm_math_cross3 ( xx + 664 , xx + 267 , xx + 685 ) ;
pm_math_quatXform ( xx + 681 , xx + 685 , xx + 664 ) ; pm_math_quatXform ( xx
+ 677 , xx + 126 , xx + 681 ) ; xx [ 667 ] = xx [ 682 ] * xx [ 608 ] - xx [
507 ] * xx [ 681 ] ; xx [ 684 ] = 1.600627075326599e-13 ; xx [ 685 ] =
8.497959654019115e-12 ; xx [ 686 ] = xx [ 684 ] * xx [ 507 ] + xx [ 685 ] *
xx [ 608 ] ; xx [ 687 ] = xx [ 80 ] * xx [ 608 ] * xx [ 667 ] - ( xx [ 682 ]
- xx [ 80 ] * xx [ 686 ] * xx [ 608 ] ) - xx [ 685 ] ; xx [ 688 ] = - xx [
536 ] ; xx [ 689 ] = xx [ 688 ] ; xx [ 690 ] = xx [ 594 ] ; xx [ 691 ] = xx [
642 ] ; xx [ 692 ] = xx [ 681 ] + xx [ 80 ] * xx [ 507 ] * xx [ 667 ] + xx [
80 ] * xx [ 686 ] * xx [ 507 ] - xx [ 684 ] ; xx [ 667 ] = xx [ 692 ] * xx [
642 ] ; xx [ 686 ] = xx [ 687 ] * xx [ 642 ] ; xx [ 693 ] = xx [ 692 ] * xx [
536 ] + xx [ 594 ] * xx [ 687 ] ; xx [ 694 ] = - xx [ 667 ] ; xx [ 695 ] = xx
[ 686 ] ; xx [ 696 ] = - xx [ 693 ] ; pm_math_cross3 ( xx + 689 , xx + 694 ,
xx + 697 ) ; xx [ 700 ] = - ( xx [ 447 ] + xx [ 590 ] ) ; xx [ 701 ] = xx [
583 ] ; xx [ 702 ] = xx [ 585 ] ; xx [ 703 ] = xx [ 643 ] ;
pm_math_quatCompose ( xx + 700 , xx + 677 , xx + 704 ) ; pm_math_quatXform (
xx + 704 , xx + 280 , xx + 694 ) ; pm_math_quatXform ( xx + 677 , xx + 167 ,
xx + 708 ) ; pm_math_quatXform ( xx + 700 , xx + 708 , xx + 711 ) ;
pm_math_quatXform ( xx + 704 , xx + 297 , xx + 708 ) ; pm_math_quatXform ( xx
+ 677 , xx + 176 , xx + 714 ) ; pm_math_quatXform ( xx + 700 , xx + 714 , xx
+ 677 ) ; xx [ 447 ] = xx [ 102 ] * xx [ 707 ] ; xx [ 583 ] = xx [ 102 ] * xx
[ 705 ] + xx [ 123 ] * xx [ 706 ] ; xx [ 714 ] = - xx [ 447 ] ; xx [ 715 ] =
- ( xx [ 123 ] * xx [ 707 ] ) ; xx [ 716 ] = xx [ 583 ] ; pm_math_cross3 ( xx
+ 705 , xx + 714 , xx + 717 ) ; xx [ 714 ] = xx [ 672 ] ; xx [ 715 ] = xx [
674 ] ; xx [ 716 ] = xx [ 676 ] ; xx [ 585 ] = xx [ 117 ] * xx [ 675 ] ; xx [
590 ] = xx [ 119 ] * xx [ 675 ] ; xx [ 643 ] = xx [ 117 ] * xx [ 647 ] + xx [
673 ] * xx [ 119 ] ; xx [ 672 ] = xx [ 585 ] ; xx [ 673 ] = xx [ 590 ] ; xx [
674 ] = - xx [ 643 ] ; pm_math_cross3 ( xx + 714 , xx + 672 , xx + 720 ) ; xx
[ 672 ] = xx [ 80 ] * ( xx [ 720 ] + xx [ 585 ] * xx [ 669 ] ) - xx [ 119 ] ;
xx [ 673 ] = xx [ 117 ] + ( xx [ 590 ] * xx [ 669 ] + xx [ 721 ] ) * xx [ 80
] ; xx [ 674 ] = ( xx [ 722 ] - xx [ 643 ] * xx [ 669 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 700 , xx + 672 , xx + 714 ) ; xx [ 585 ] = xx [ 2 ]
* state [ 14 ] ; xx [ 590 ] = cos ( xx [ 585 ] ) ; xx [ 643 ] =
0.5901074779979933 ; xx [ 647 ] = xx [ 2 ] * state [ 12 ] ; xx [ 669 ] = cos
( xx [ 647 ] ) ; xx [ 672 ] = 0.5901036711621462 ; xx [ 673 ] = sin ( xx [
647 ] ) ; xx [ 647 ] = xx [ 643 ] * xx [ 669 ] + xx [ 672 ] * xx [ 673 ] ; xx
[ 674 ] = xx [ 590 ] * xx [ 647 ] ; xx [ 675 ] = xx [ 672 ] * xx [ 669 ] - xx
[ 643 ] * xx [ 673 ] ; xx [ 676 ] = sin ( xx [ 585 ] ) ; xx [ 585 ] = xx [
675 ] * xx [ 676 ] ; xx [ 680 ] = 0.3895853754265615 ; xx [ 720 ] =
0.389581900177037 ; xx [ 721 ] = xx [ 680 ] * xx [ 669 ] - xx [ 720 ] * xx [
673 ] ; xx [ 722 ] = xx [ 720 ] * xx [ 669 ] + xx [ 680 ] * xx [ 673 ] ; xx [
669 ] = - ( xx [ 721 ] * xx [ 590 ] - xx [ 676 ] * xx [ 722 ] ) ; xx [ 673 ]
= xx [ 721 ] * xx [ 676 ] + xx [ 590 ] * xx [ 722 ] ; xx [ 723 ] = xx [ 675 ]
* xx [ 590 ] - xx [ 676 ] * xx [ 647 ] ; xx [ 724 ] = - ( xx [ 674 ] + xx [
585 ] ) ; xx [ 725 ] = xx [ 669 ] ; xx [ 726 ] = xx [ 673 ] ; xx [ 727 ] = xx
[ 723 ] ; xx [ 728 ] = xx [ 22 ] / sqrt ( state [ 16 ] * state [ 16 ] + state
[ 17 ] * state [ 17 ] + state [ 18 ] * state [ 18 ] + state [ 19 ] * state [
19 ] ) ; xx [ 729 ] = xx [ 728 ] * state [ 19 ] ; xx [ 730 ] = xx [ 728 ] *
state [ 16 ] ; xx [ 731 ] = xx [ 21 ] * xx [ 729 ] - xx [ 25 ] * xx [ 730 ] ;
xx [ 732 ] = xx [ 728 ] * state [ 18 ] ; xx [ 733 ] = xx [ 728 ] * state [ 17
] ; xx [ 728 ] = xx [ 21 ] * xx [ 732 ] + xx [ 25 ] * xx [ 733 ] ; xx [ 734 ]
= - xx [ 728 ] ; xx [ 735 ] = xx [ 25 ] * xx [ 732 ] - xx [ 21 ] * xx [ 733 ]
; xx [ 736 ] = - xx [ 735 ] ; xx [ 737 ] = xx [ 21 ] * xx [ 730 ] + xx [ 25 ]
* xx [ 729 ] ; xx [ 738 ] = - xx [ 737 ] ; xx [ 739 ] = xx [ 731 ] ; xx [ 740
] = xx [ 734 ] ; xx [ 741 ] = xx [ 736 ] ; xx [ 742 ] = xx [ 738 ] ;
pm_math_quatCompose ( xx + 724 , xx + 739 , xx + 743 ) ; xx [ 724 ] = ( xx [
735 ] * xx [ 731 ] + xx [ 728 ] * xx [ 737 ] ) * xx [ 80 ] ; xx [ 725 ] = xx
[ 80 ] * ( xx [ 735 ] * xx [ 737 ] - xx [ 728 ] * xx [ 731 ] ) ; xx [ 726 ] =
xx [ 22 ] - ( xx [ 728 ] * xx [ 728 ] + xx [ 735 ] * xx [ 735 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 724 , xx + 267 , xx + 747 ) ; pm_math_quatXform ( xx
+ 743 , xx + 747 , xx + 724 ) ; pm_math_quatXform ( xx + 739 , xx + 126 , xx
+ 743 ) ; xx [ 727 ] = xx [ 744 ] * xx [ 676 ] - xx [ 590 ] * xx [ 743 ] ; xx
[ 746 ] = 7.748428954013064e-12 ; xx [ 747 ] = 5.376764528053357e-12 ; xx [
748 ] = xx [ 746 ] * xx [ 590 ] - xx [ 747 ] * xx [ 676 ] ; xx [ 749 ] = xx [
80 ] * xx [ 676 ] * xx [ 727 ] - ( xx [ 744 ] + xx [ 80 ] * xx [ 748 ] * xx [
676 ] ) - xx [ 747 ] ; xx [ 750 ] = - xx [ 647 ] ; xx [ 751 ] = - xx [ 722 ]
; xx [ 752 ] = xx [ 750 ] ; xx [ 753 ] = xx [ 675 ] ; xx [ 754 ] = xx [ 751 ]
; xx [ 755 ] = xx [ 743 ] + xx [ 80 ] * xx [ 590 ] * xx [ 727 ] - xx [ 80 ] *
xx [ 748 ] * xx [ 590 ] + xx [ 746 ] ; xx [ 727 ] = xx [ 755 ] * xx [ 722 ] ;
xx [ 748 ] = xx [ 749 ] * xx [ 722 ] ; xx [ 756 ] = xx [ 755 ] * xx [ 647 ] +
xx [ 675 ] * xx [ 749 ] ; xx [ 757 ] = xx [ 727 ] ; xx [ 758 ] = - xx [ 748 ]
; xx [ 759 ] = - xx [ 756 ] ; pm_math_cross3 ( xx + 752 , xx + 757 , xx + 760
) ; xx [ 763 ] = - ( xx [ 585 ] + xx [ 674 ] ) ; xx [ 764 ] = xx [ 669 ] ; xx
[ 765 ] = xx [ 673 ] ; xx [ 766 ] = xx [ 723 ] ; pm_math_quatCompose ( xx +
763 , xx + 739 , xx + 767 ) ; pm_math_quatXform ( xx + 767 , xx + 280 , xx +
757 ) ; pm_math_quatXform ( xx + 739 , xx + 167 , xx + 771 ) ;
pm_math_quatXform ( xx + 763 , xx + 771 , xx + 774 ) ; pm_math_quatXform ( xx
+ 767 , xx + 297 , xx + 771 ) ; pm_math_quatXform ( xx + 739 , xx + 176 , xx
+ 777 ) ; pm_math_quatXform ( xx + 763 , xx + 777 , xx + 739 ) ; xx [ 585 ] =
xx [ 102 ] * xx [ 770 ] ; xx [ 669 ] = xx [ 102 ] * xx [ 768 ] + xx [ 123 ] *
xx [ 769 ] ; xx [ 777 ] = - xx [ 585 ] ; xx [ 778 ] = - ( xx [ 123 ] * xx [
770 ] ) ; xx [ 779 ] = xx [ 669 ] ; pm_math_cross3 ( xx + 768 , xx + 777 , xx
+ 780 ) ; xx [ 777 ] = xx [ 734 ] ; xx [ 778 ] = xx [ 736 ] ; xx [ 779 ] = xx
[ 738 ] ; xx [ 673 ] = xx [ 117 ] * xx [ 737 ] ; xx [ 674 ] = xx [ 119 ] * xx
[ 737 ] ; xx [ 723 ] = xx [ 117 ] * xx [ 728 ] + xx [ 735 ] * xx [ 119 ] ; xx
[ 734 ] = xx [ 673 ] ; xx [ 735 ] = xx [ 674 ] ; xx [ 736 ] = - xx [ 723 ] ;
pm_math_cross3 ( xx + 777 , xx + 734 , xx + 783 ) ; xx [ 734 ] = xx [ 80 ] *
( xx [ 783 ] + xx [ 673 ] * xx [ 731 ] ) - xx [ 119 ] ; xx [ 735 ] = xx [ 117
] + ( xx [ 674 ] * xx [ 731 ] + xx [ 784 ] ) * xx [ 80 ] ; xx [ 736 ] = ( xx
[ 785 ] - xx [ 723 ] * xx [ 731 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
763 , xx + 734 , xx + 777 ) ; xx [ 673 ] = xx [ 2 ] * state [ 51 ] ; xx [ 674
] = cos ( xx [ 673 ] ) ; xx [ 723 ] = sin ( xx [ 673 ] ) ; xx [ 673 ] = xx [
674 ] * xx [ 66 ] + xx [ 723 ] * xx [ 54 ] ; xx [ 728 ] = xx [ 64 ] * xx [
674 ] - xx [ 723 ] * xx [ 65 ] ; xx [ 731 ] = xx [ 674 ] * xx [ 65 ] + xx [
64 ] * xx [ 723 ] ; xx [ 64 ] = xx [ 674 ] * xx [ 54 ] - xx [ 723 ] * xx [ 66
] ; xx [ 734 ] = xx [ 673 ] ; xx [ 735 ] = xx [ 728 ] ; xx [ 736 ] = xx [ 731
] ; xx [ 737 ] = xx [ 64 ] ; pm_math_quatCompose ( xx + 50 , xx + 734 , xx +
783 ) ; pm_math_quatCompose ( xx + 35 , xx + 783 , xx + 787 ) ;
pm_math_quatCompose ( xx + 17 , xx + 787 , xx + 791 ) ; xx [ 17 ] = xx [ 80 ]
* ( xx [ 788 ] * xx [ 790 ] - xx [ 787 ] * xx [ 789 ] ) ; xx [ 18 ] = ( xx [
787 ] * xx [ 788 ] + xx [ 789 ] * xx [ 790 ] ) * xx [ 80 ] ; xx [ 19 ] = xx [
22 ] - ( xx [ 788 ] * xx [ 788 ] + xx [ 789 ] * xx [ 789 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 17 , xx + 84 , xx + 787 ) ; pm_math_quatXform ( xx +
791 , xx + 787 , xx + 17 ) ; xx [ 20 ] = 0.02540000000000185 ; xx [ 54 ] =
6.817225262079063e-12 ; xx [ 65 ] = xx [ 54 ] * xx [ 723 ] ; xx [ 66 ] = xx [
65 ] * xx [ 723 ] ; xx [ 738 ] = 5.61723311615081e-12 ; xx [ 742 ] = xx [ 738
] * xx [ 723 ] ; xx [ 787 ] = xx [ 674 ] * xx [ 742 ] ; xx [ 788 ] = xx [ 20
] - ( xx [ 80 ] * ( xx [ 66 ] - xx [ 787 ] ) - xx [ 54 ] ) ; xx [ 789 ] = xx
[ 674 ] * xx [ 65 ] ; xx [ 65 ] = xx [ 742 ] * xx [ 723 ] ; xx [ 742 ] = ( xx
[ 789 ] + xx [ 65 ] ) * xx [ 80 ] - xx [ 738 ] ; xx [ 790 ] =
0.152426400001803 ; xx [ 791 ] = - xx [ 790 ] ; xx [ 792 ] = xx [ 788 ] ; xx
[ 793 ] = - xx [ 742 ] ; xx [ 794 ] = xx [ 791 ] ; pm_math_quatXform ( xx +
75 , xx + 792 , xx + 795 ) ; xx [ 798 ] = xx [ 795 ] - xx [ 107 ] ; xx [ 799
] = xx [ 796 ] + xx [ 109 ] ; xx [ 795 ] = xx [ 797 ] - xx [ 101 ] ; xx [ 800
] = xx [ 798 ] ; xx [ 801 ] = xx [ 799 ] ; xx [ 802 ] = xx [ 795 ] ;
pm_math_quatXform ( xx + 50 , xx + 800 , xx + 803 ) ; xx [ 50 ] = xx [ 803 ]
+ xx [ 121 ] ; xx [ 51 ] = xx [ 804 ] + xx [ 124 ] ; xx [ 52 ] = xx [ 805 ] +
xx [ 116 ] ; pm_math_quatXform ( xx + 35 , xx + 50 , xx + 800 ) ; xx [ 53 ] =
xx [ 801 ] + xx [ 133 ] ; xx [ 796 ] = xx [ 800 ] + xx [ 132 ] ; xx [ 797 ] =
xx [ 53 ] * xx [ 10 ] - xx [ 796 ] * xx [ 8 ] ; xx [ 800 ] = xx [ 80 ] * xx [
10 ] * xx [ 797 ] - ( xx [ 53 ] - xx [ 137 ] ) - xx [ 135 ] ; xx [ 53 ] = xx
[ 796 ] + xx [ 80 ] * xx [ 8 ] * xx [ 797 ] + xx [ 120 ] - xx [ 131 ] ; xx [
120 ] = xx [ 15 ] * xx [ 53 ] ; xx [ 137 ] = xx [ 15 ] * xx [ 800 ] ; xx [
796 ] = xx [ 3 ] * xx [ 53 ] - xx [ 800 ] * xx [ 7 ] ; xx [ 801 ] = - xx [
120 ] ; xx [ 802 ] = xx [ 137 ] ; xx [ 803 ] = xx [ 796 ] ; pm_math_cross3 (
xx + 139 , xx + 801 , xx + 804 ) ; pm_math_quatCompose ( xx + 153 , xx + 783
, xx + 807 ) ; xx [ 797 ] = xx [ 4 ] * xx [ 786 ] ; xx [ 801 ] = xx [ 4 ] *
xx [ 784 ] + xx [ 785 ] ; xx [ 811 ] = xx [ 797 ] ; xx [ 812 ] = xx [ 786 ] ;
xx [ 813 ] = - xx [ 801 ] ; pm_math_cross3 ( xx + 784 , xx + 811 , xx + 814 )
; xx [ 802 ] = xx [ 783 ] * xx [ 786 ] ; xx [ 811 ] = xx [ 22 ] + ( xx [ 814
] - xx [ 783 ] * xx [ 797 ] ) * xx [ 80 ] ; xx [ 812 ] = xx [ 80 ] * ( xx [
815 ] - xx [ 802 ] ) - xx [ 4 ] ; xx [ 813 ] = xx [ 80 ] * ( xx [ 816 ] + xx
[ 783 ] * xx [ 801 ] ) ; pm_math_cross3 ( xx + 811 , xx + 84 , xx + 814 ) ;
pm_math_quatXform ( xx + 807 , xx + 814 , xx + 811 ) ; xx [ 801 ] = - ( xx [
52 ] * xx [ 4 ] ) ; xx [ 814 ] = xx [ 801 ] ; xx [ 815 ] = - xx [ 52 ] ; xx [
816 ] = xx [ 51 ] + xx [ 50 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 35 , xx +
814 , xx + 817 ) ; xx [ 814 ] = xx [ 817 ] + xx [ 170 ] ; xx [ 815 ] = xx [
818 ] + xx [ 171 ] ; xx [ 816 ] = xx [ 819 ] + xx [ 172 ] ; pm_math_quatXform
( xx + 149 , xx + 814 , xx + 170 ) ; xx [ 803 ] = xx [ 784 ] - xx [ 4 ] * xx
[ 785 ] ; xx [ 814 ] = - xx [ 786 ] ; xx [ 815 ] = xx [ 797 ] ; xx [ 816 ] =
xx [ 803 ] ; pm_math_cross3 ( xx + 784 , xx + 814 , xx + 817 ) ; xx [ 814 ] =
xx [ 4 ] + ( xx [ 802 ] + xx [ 817 ] ) * xx [ 80 ] ; xx [ 815 ] = xx [ 22 ] +
xx [ 80 ] * ( xx [ 818 ] - xx [ 4 ] * xx [ 802 ] ) ; xx [ 816 ] = xx [ 80 ] *
( xx [ 819 ] - xx [ 783 ] * xx [ 803 ] ) ; pm_math_cross3 ( xx + 814 , xx +
84 , xx + 817 ) ; pm_math_quatXform ( xx + 807 , xx + 817 , xx + 814 ) ; xx [
817 ] = xx [ 52 ] ; xx [ 818 ] = xx [ 801 ] ; xx [ 819 ] = xx [ 51 ] * xx [ 4
] - xx [ 50 ] ; pm_math_quatXform ( xx + 35 , xx + 817 , xx + 801 ) ; xx [ 35
] = xx [ 801 ] + xx [ 182 ] ; xx [ 36 ] = xx [ 802 ] + xx [ 183 ] ; xx [ 37 ]
= xx [ 803 ] + xx [ 184 ] ; pm_math_quatXform ( xx + 149 , xx + 35 , xx + 182
) ; xx [ 35 ] = xx [ 80 ] * ( xx [ 784 ] * xx [ 786 ] - xx [ 783 ] * xx [ 785
] ) ; xx [ 36 ] = ( xx [ 783 ] * xx [ 784 ] + xx [ 785 ] * xx [ 786 ] ) * xx
[ 80 ] ; xx [ 37 ] = xx [ 22 ] - ( xx [ 784 ] * xx [ 784 ] + xx [ 785 ] * xx
[ 785 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 35 , xx + 84 , xx + 783 ) ;
pm_math_quatXform ( xx + 807 , xx + 783 , xx + 35 ) ; xx [ 38 ] = xx [ 50 ] *
xx [ 33 ] ; xx [ 52 ] = xx [ 51 ] * xx [ 33 ] ; xx [ 33 ] = xx [ 50 ] * xx [
23 ] + xx [ 31 ] * xx [ 51 ] ; xx [ 783 ] = xx [ 38 ] ; xx [ 784 ] = xx [ 52
] ; xx [ 785 ] = - xx [ 33 ] ; pm_math_cross3 ( xx + 68 , xx + 783 , xx + 801
) ; xx [ 68 ] = xx [ 80 ] * ( xx [ 801 ] + xx [ 38 ] * xx [ 27 ] ) + xx [ 34
] - xx [ 51 ] - xx [ 119 ] ; xx [ 69 ] = xx [ 50 ] + xx [ 80 ] * ( xx [ 802 ]
+ xx [ 52 ] * xx [ 27 ] ) + xx [ 16 ] + xx [ 117 ] ; xx [ 70 ] = ( xx [ 803 ]
- xx [ 27 ] * xx [ 33 ] ) * xx [ 80 ] + xx [ 30 ] ; pm_math_quatXform ( xx +
149 , xx + 68 , xx + 50 ) ; pm_math_quatCompose ( xx + 157 , xx + 734 , xx +
783 ) ; xx [ 16 ] = xx [ 731 ] * xx [ 731 ] ; xx [ 23 ] = xx [ 64 ] * xx [ 64
] ; xx [ 27 ] = xx [ 731 ] * xx [ 728 ] ; xx [ 30 ] = xx [ 673 ] * xx [ 64 ]
; xx [ 31 ] = xx [ 673 ] * xx [ 731 ] ; xx [ 33 ] = xx [ 728 ] * xx [ 64 ] ;
xx [ 68 ] = xx [ 22 ] - ( xx [ 16 ] + xx [ 23 ] ) * xx [ 80 ] ; xx [ 69 ] =
xx [ 80 ] * ( xx [ 27 ] - xx [ 30 ] ) ; xx [ 70 ] = ( xx [ 31 ] + xx [ 33 ] )
* xx [ 80 ] ; pm_math_cross3 ( xx + 68 , xx + 84 , xx + 734 ) ;
pm_math_quatXform ( xx + 783 , xx + 734 , xx + 68 ) ; xx [ 34 ] = xx [ 46 ] *
xx [ 799 ] ; xx [ 38 ] = xx [ 48 ] * xx [ 795 ] ; xx [ 734 ] = xx [ 34 ] + xx
[ 38 ] ; xx [ 735 ] = xx [ 799 ] * xx [ 39 ] ; xx [ 736 ] = xx [ 795 ] * xx [
39 ] ; xx [ 801 ] = - xx [ 734 ] ; xx [ 802 ] = - xx [ 735 ] ; xx [ 803 ] = -
xx [ 736 ] ; pm_math_cross3 ( xx + 198 , xx + 801 , xx + 807 ) ; xx [ 801 ] =
xx [ 80 ] * ( xx [ 807 ] - xx [ 734 ] * xx [ 43 ] ) + xx [ 207 ] ; xx [ 802 ]
= xx [ 80 ] * ( xx [ 808 ] - xx [ 735 ] * xx [ 43 ] ) + xx [ 201 ] - xx [ 795
] - xx [ 74 ] ; xx [ 803 ] = xx [ 799 ] + xx [ 80 ] * ( xx [ 809 ] - xx [ 736
] * xx [ 43 ] ) + xx [ 202 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 153 , xx
+ 801 , xx + 734 ) ; xx [ 201 ] = xx [ 728 ] * xx [ 728 ] ; xx [ 202 ] = xx [
731 ] * xx [ 64 ] ; xx [ 64 ] = xx [ 673 ] * xx [ 728 ] ; xx [ 801 ] = ( xx [
30 ] + xx [ 27 ] ) * xx [ 80 ] ; xx [ 802 ] = xx [ 22 ] - ( xx [ 23 ] + xx [
201 ] ) * xx [ 80 ] ; xx [ 803 ] = xx [ 80 ] * ( xx [ 202 ] - xx [ 64 ] ) ;
pm_math_cross3 ( xx + 801 , xx + 84 , xx + 807 ) ; pm_math_quatXform ( xx +
783 , xx + 807 , xx + 801 ) ; xx [ 23 ] = xx [ 46 ] * xx [ 798 ] ; xx [ 27 ]
= xx [ 798 ] * xx [ 39 ] ; xx [ 30 ] = xx [ 27 ] - xx [ 38 ] ; xx [ 38 ] = xx
[ 46 ] * xx [ 795 ] ; xx [ 807 ] = xx [ 23 ] ; xx [ 808 ] = xx [ 30 ] ; xx [
809 ] = xx [ 38 ] ; pm_math_cross3 ( xx + 198 , xx + 807 , xx + 817 ) ; xx [
807 ] = xx [ 795 ] + ( xx [ 23 ] * xx [ 43 ] + xx [ 817 ] ) * xx [ 80 ] + xx
[ 166 ] + xx [ 74 ] ; xx [ 808 ] = ( xx [ 43 ] * xx [ 30 ] + xx [ 818 ] ) *
xx [ 80 ] + xx [ 58 ] ; xx [ 809 ] = ( xx [ 38 ] * xx [ 43 ] + xx [ 819 ] ) *
xx [ 80 ] + xx [ 61 ] - xx [ 798 ] - xx [ 72 ] ; pm_math_quatXform ( xx + 153
, xx + 807 , xx + 817 ) ; xx [ 807 ] = xx [ 80 ] * ( xx [ 33 ] - xx [ 31 ] )
; xx [ 808 ] = ( xx [ 64 ] + xx [ 202 ] ) * xx [ 80 ] ; xx [ 809 ] = xx [ 22
] - ( xx [ 201 ] + xx [ 16 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 807 , xx +
84 , xx + 820 ) ; pm_math_quatXform ( xx + 783 , xx + 820 , xx + 807 ) ; xx [
16 ] = xx [ 48 ] * xx [ 798 ] ; xx [ 23 ] = xx [ 48 ] * xx [ 799 ] ; xx [ 30
] = xx [ 27 ] - xx [ 34 ] ; xx [ 783 ] = xx [ 16 ] ; xx [ 784 ] = xx [ 23 ] ;
xx [ 785 ] = xx [ 30 ] ; pm_math_cross3 ( xx + 198 , xx + 783 , xx + 820 ) ;
xx [ 198 ] = ( xx [ 16 ] * xx [ 43 ] + xx [ 820 ] ) * xx [ 80 ] + xx [ 59 ] -
xx [ 799 ] + xx [ 73 ] ; xx [ 199 ] = xx [ 798 ] + ( xx [ 23 ] * xx [ 43 ] +
xx [ 821 ] ) * xx [ 80 ] + xx [ 11 ] + xx [ 72 ] ; xx [ 200 ] = ( xx [ 43 ] *
xx [ 30 ] + xx [ 822 ] ) * xx [ 80 ] + xx [ 47 ] ; pm_math_quatXform ( xx +
153 , xx + 198 , xx + 46 ) ; xx [ 11 ] = xx [ 674 ] * xx [ 191 ] + xx [ 194 ]
* xx [ 723 ] ; xx [ 16 ] = xx [ 674 ] * xx [ 192 ] - xx [ 193 ] * xx [ 723 ]
; xx [ 23 ] = xx [ 674 ] * xx [ 193 ] + xx [ 192 ] * xx [ 723 ] ; xx [ 27 ] =
xx [ 674 ] * xx [ 194 ] - xx [ 191 ] * xx [ 723 ] ; xx [ 198 ] = xx [ 11 ] ;
xx [ 199 ] = xx [ 16 ] ; xx [ 200 ] = xx [ 23 ] ; xx [ 201 ] = xx [ 27 ] ; xx
[ 30 ] = xx [ 57 ] * xx [ 723 ] ; xx [ 31 ] = xx [ 80 ] * xx [ 674 ] * xx [
30 ] ; xx [ 33 ] = xx [ 80 ] * xx [ 30 ] * xx [ 723 ] - xx [ 57 ] ; xx [ 783
] = xx [ 74 ] * xx [ 31 ] + xx [ 55 ] ; xx [ 784 ] = xx [ 106 ] + xx [ 74 ] *
xx [ 33 ] ; xx [ 785 ] = xx [ 73 ] * xx [ 33 ] - xx [ 72 ] * xx [ 31 ] ;
pm_math_quatXform ( xx + 198 , xx + 783 , xx + 797 ) ; xx [ 30 ] =
0.1320051346089697 ; xx [ 783 ] = - ( xx [ 63 ] * xx [ 742 ] ) ; xx [ 784 ] =
- ( xx [ 63 ] * xx [ 788 ] + xx [ 30 ] ) ; xx [ 785 ] = xx [ 57 ] * xx [ 742
] ; pm_math_quatXform ( xx + 75 , xx + 783 , xx + 820 ) ; xx [ 75 ] = xx [
820 ] + xx [ 93 ] ; xx [ 76 ] = xx [ 821 ] + xx [ 110 ] - xx [ 67 ] ; xx [ 77
] = xx [ 822 ] - xx [ 111 ] ; pm_math_quatXform ( xx + 157 , xx + 75 , xx +
783 ) ; xx [ 75 ] = xx [ 16 ] ; xx [ 76 ] = xx [ 23 ] ; xx [ 77 ] = xx [ 27 ]
; xx [ 31 ] = xx [ 72 ] * xx [ 27 ] ; xx [ 33 ] = xx [ 73 ] * xx [ 27 ] ; xx
[ 27 ] = xx [ 72 ] * xx [ 16 ] - xx [ 23 ] * xx [ 73 ] ; xx [ 820 ] = - xx [
31 ] ; xx [ 821 ] = xx [ 33 ] ; xx [ 822 ] = xx [ 27 ] ; pm_math_cross3 ( xx
+ 75 , xx + 820 , xx + 823 ) ; xx [ 16 ] = xx [ 738 ] - xx [ 80 ] * ( xx [
789 ] + xx [ 65 ] ) ; xx [ 23 ] = xx [ 54 ] + ( xx [ 787 ] - xx [ 66 ] ) * xx
[ 80 ] ; xx [ 34 ] = xx [ 194 ] * xx [ 23 ] ; xx [ 38 ] = xx [ 16 ] * xx [
194 ] ; xx [ 39 ] = xx [ 192 ] * xx [ 23 ] + xx [ 16 ] * xx [ 193 ] ; xx [ 64
] = xx [ 34 ] ; xx [ 65 ] = xx [ 38 ] ; xx [ 66 ] = - xx [ 39 ] ;
pm_math_cross3 ( xx + 192 , xx + 64 , xx + 75 ) ; xx [ 826 ] = xx [ 0 ] ; xx
[ 827 ] = xx [ 0 ] ; xx [ 828 ] = xx [ 0 ] ; xx [ 829 ] = xx [ 0 ] ; xx [ 830
] = xx [ 81 ] + xx [ 138 ] + xx [ 80 ] * ( xx [ 146 ] - xx [ 129 ] * xx [ 14
] ) ; xx [ 831 ] = xx [ 143 ] + xx [ 162 ] ; xx [ 832 ] = xx [ 173 ] + xx [
179 ] ; xx [ 833 ] = xx [ 185 ] + xx [ 188 ] ; xx [ 834 ] = xx [ 195 ] + xx [
203 ] ; xx [ 835 ] = xx [ 208 ] + xx [ 214 ] ; xx [ 836 ] = xx [ 211 ] + xx [
217 ] ; xx [ 837 ] = xx [ 227 ] + xx [ 230 ] ; xx [ 838 ] = xx [ 80 ] * ( xx
[ 236 ] - xx [ 6 ] * xx [ 71 ] ) + xx [ 9 ] + xx [ 80 ] * ( xx [ 233 ] - xx [
191 ] * xx [ 88 ] ) + xx [ 73 ] ; xx [ 839 ] = xx [ 0 ] ; xx [ 840 ] = xx [ 0
] ; xx [ 841 ] = xx [ 0 ] ; xx [ 842 ] = xx [ 0 ] ; xx [ 843 ] = xx [ 0 ] ;
xx [ 844 ] = xx [ 0 ] ; xx [ 845 ] = xx [ 0 ] ; xx [ 846 ] = xx [ 0 ] ; xx [
847 ] = - ( xx [ 244 ] + xx [ 272 ] + xx [ 80 ] * ( xx [ 283 ] + xx [ 241 ] *
xx [ 247 ] ) ) ; xx [ 848 ] = - ( xx [ 294 ] + xx [ 300 ] ) ; xx [ 849 ] = -
( xx [ 303 ] + xx [ 259 ] ) ; xx [ 850 ] = - ( xx [ 80 ] * ( xx [ 309 ] - xx
[ 290 ] * xx [ 94 ] ) + xx [ 306 ] - xx [ 123 ] ) ; xx [ 851 ] = xx [ 0 ] ;
xx [ 852 ] = xx [ 0 ] ; xx [ 853 ] = xx [ 0 ] ; xx [ 854 ] = xx [ 0 ] ; xx [
855 ] = xx [ 0 ] ; xx [ 856 ] = xx [ 0 ] ; xx [ 857 ] = xx [ 0 ] ; xx [ 858 ]
= xx [ 0 ] ; xx [ 859 ] = xx [ 0 ] ; xx [ 860 ] = xx [ 0 ] ; xx [ 861 ] = xx
[ 0 ] ; xx [ 862 ] = xx [ 0 ] ; xx [ 863 ] = xx [ 82 ] + xx [ 136 ] + ( xx [
130 ] * xx [ 14 ] + xx [ 147 ] ) * xx [ 80 ] ; xx [ 864 ] = xx [ 144 ] + xx [
163 ] ; xx [ 865 ] = xx [ 174 ] + xx [ 180 ] ; xx [ 866 ] = xx [ 186 ] + xx [
189 ] ; xx [ 867 ] = xx [ 196 ] + xx [ 204 ] ; xx [ 868 ] = xx [ 209 ] + xx [
215 ] ; xx [ 869 ] = xx [ 212 ] + xx [ 218 ] ; xx [ 870 ] = xx [ 228 ] + xx [
231 ] ; xx [ 871 ] = ( xx [ 6 ] * xx [ 91 ] + xx [ 237 ] ) * xx [ 80 ] + xx [
32 ] + ( xx [ 191 ] * xx [ 89 ] + xx [ 234 ] ) * xx [ 80 ] + xx [ 72 ] ; xx [
872 ] = xx [ 0 ] ; xx [ 873 ] = xx [ 0 ] ; xx [ 874 ] = xx [ 0 ] ; xx [ 875 ]
= xx [ 0 ] ; xx [ 876 ] = xx [ 0 ] ; xx [ 877 ] = xx [ 0 ] ; xx [ 878 ] = xx
[ 0 ] ; xx [ 879 ] = xx [ 0 ] ; xx [ 880 ] = - ( xx [ 245 ] + xx [ 278 ] + (
xx [ 284 ] - xx [ 241 ] * xx [ 271 ] ) * xx [ 80 ] ) ; xx [ 881 ] = - ( xx [
295 ] + xx [ 301 ] ) ; xx [ 882 ] = - ( xx [ 304 ] + xx [ 260 ] ) ; xx [ 883
] = - ( ( xx [ 310 ] - xx [ 123 ] * xx [ 290 ] * xx [ 293 ] ) * xx [ 80 ] +
xx [ 307 ] + xx [ 102 ] ) ; xx [ 884 ] = xx [ 0 ] ; xx [ 885 ] = xx [ 0 ] ;
xx [ 886 ] = xx [ 0 ] ; xx [ 887 ] = xx [ 0 ] ; xx [ 888 ] = xx [ 0 ] ; xx [
889 ] = xx [ 0 ] ; xx [ 890 ] = xx [ 0 ] ; xx [ 891 ] = xx [ 0 ] ; xx [ 892 ]
= xx [ 0 ] ; xx [ 893 ] = xx [ 0 ] ; xx [ 894 ] = xx [ 0 ] ; xx [ 895 ] = xx
[ 0 ] ; xx [ 896 ] = xx [ 83 ] + ( xx [ 14 ] * xx [ 142 ] + xx [ 148 ] ) * xx
[ 80 ] ; xx [ 897 ] = xx [ 145 ] + xx [ 164 ] ; xx [ 898 ] = xx [ 175 ] + xx
[ 181 ] ; xx [ 899 ] = xx [ 187 ] + xx [ 190 ] ; xx [ 900 ] = xx [ 197 ] + xx
[ 205 ] ; xx [ 901 ] = xx [ 210 ] + xx [ 216 ] ; xx [ 902 ] = xx [ 213 ] + xx
[ 219 ] ; xx [ 903 ] = xx [ 229 ] + xx [ 232 ] ; xx [ 904 ] = ( xx [ 6 ] * xx
[ 49 ] + xx [ 238 ] ) * xx [ 80 ] + ( xx [ 191 ] * xx [ 92 ] + xx [ 235 ] ) *
xx [ 80 ] ; xx [ 905 ] = xx [ 0 ] ; xx [ 906 ] = xx [ 0 ] ; xx [ 907 ] = xx [
0 ] ; xx [ 908 ] = xx [ 0 ] ; xx [ 909 ] = xx [ 0 ] ; xx [ 910 ] = xx [ 0 ] ;
xx [ 911 ] = xx [ 0 ] ; xx [ 912 ] = xx [ 0 ] ; xx [ 913 ] = - ( xx [ 246 ] +
( xx [ 285 ] - xx [ 241 ] * xx [ 279 ] ) * xx [ 80 ] ) ; xx [ 914 ] = - ( xx
[ 296 ] + xx [ 302 ] ) ; xx [ 915 ] = - ( xx [ 305 ] + xx [ 261 ] ) ; xx [
916 ] = - ( ( xx [ 290 ] * xx [ 161 ] + xx [ 311 ] ) * xx [ 80 ] + xx [ 308 ]
) ; xx [ 917 ] = xx [ 0 ] ; xx [ 918 ] = xx [ 0 ] ; xx [ 919 ] = xx [ 0 ] ;
xx [ 920 ] = xx [ 0 ] ; xx [ 921 ] = xx [ 0 ] ; xx [ 922 ] = xx [ 0 ] ; xx [
923 ] = xx [ 0 ] ; xx [ 924 ] = xx [ 0 ] ; xx [ 925 ] = xx [ 0 ] ; xx [ 926 ]
= xx [ 0 ] ; xx [ 927 ] = xx [ 0 ] ; xx [ 928 ] = xx [ 0 ] ; xx [ 929 ] = xx
[ 332 ] + xx [ 344 ] + xx [ 80 ] * ( xx [ 349 ] - xx [ 342 ] * xx [ 14 ] ) ;
xx [ 930 ] = xx [ 356 ] + xx [ 362 ] ; xx [ 931 ] = xx [ 365 ] + xx [ 346 ] ;
xx [ 932 ] = xx [ 359 ] + xx [ 320 ] ; xx [ 933 ] = xx [ 370 ] + xx [ 375 ] ;
xx [ 934 ] = xx [ 380 ] + xx [ 335 ] ; xx [ 935 ] = xx [ 383 ] + xx [ 316 ] ;
xx [ 936 ] = xx [ 338 ] + xx [ 389 ] ; xx [ 937 ] = xx [ 0 ] ; xx [ 938 ] =
xx [ 80 ] * ( xx [ 392 ] + xx [ 352 ] * xx [ 206 ] ) + xx [ 386 ] - xx [ 73 ]
; xx [ 939 ] = xx [ 0 ] ; xx [ 940 ] = xx [ 0 ] ; xx [ 941 ] = xx [ 0 ] ; xx
[ 942 ] = - ( xx [ 395 ] + xx [ 412 ] + xx [ 80 ] * ( xx [ 421 ] - xx [ 398 ]
* xx [ 315 ] ) ) ; xx [ 943 ] = - ( xx [ 418 ] + xx [ 435 ] ) ; xx [ 944 ] =
- ( xx [ 432 ] + xx [ 402 ] ) ; xx [ 945 ] = - ( xx [ 80 ] * ( xx [ 441 ] -
xx [ 428 ] * xx [ 248 ] ) + xx [ 438 ] - xx [ 123 ] ) ; xx [ 946 ] = xx [ 0 ]
; xx [ 947 ] = xx [ 0 ] ; xx [ 948 ] = xx [ 0 ] ; xx [ 949 ] = xx [ 0 ] ; xx
[ 950 ] = xx [ 0 ] ; xx [ 951 ] = xx [ 0 ] ; xx [ 952 ] = xx [ 0 ] ; xx [ 953
] = xx [ 0 ] ; xx [ 954 ] = xx [ 0 ] ; xx [ 955 ] = xx [ 0 ] ; xx [ 956 ] =
xx [ 0 ] ; xx [ 957 ] = xx [ 0 ] ; xx [ 958 ] = xx [ 0 ] ; xx [ 959 ] = xx [
0 ] ; xx [ 960 ] = xx [ 0 ] ; xx [ 961 ] = xx [ 0 ] ; xx [ 962 ] = xx [ 333 ]
+ xx [ 341 ] + ( xx [ 343 ] * xx [ 14 ] + xx [ 350 ] ) * xx [ 80 ] ; xx [ 963
] = xx [ 357 ] + xx [ 363 ] ; xx [ 964 ] = xx [ 366 ] + xx [ 347 ] ; xx [ 965
] = xx [ 360 ] + xx [ 321 ] ; xx [ 966 ] = xx [ 371 ] + xx [ 376 ] ; xx [ 967
] = xx [ 381 ] + xx [ 336 ] ; xx [ 968 ] = xx [ 384 ] + xx [ 317 ] ; xx [ 969
] = xx [ 339 ] + xx [ 390 ] ; xx [ 970 ] = xx [ 0 ] ; xx [ 971 ] = ( xx [ 393
] - xx [ 73 ] * xx [ 352 ] * xx [ 355 ] ) * xx [ 80 ] + xx [ 387 ] - xx [ 72
] ; xx [ 972 ] = xx [ 0 ] ; xx [ 973 ] = xx [ 0 ] ; xx [ 974 ] = xx [ 0 ] ;
xx [ 975 ] = - ( xx [ 396 ] + xx [ 416 ] + ( xx [ 411 ] * xx [ 315 ] + xx [
422 ] ) * xx [ 80 ] ) ; xx [ 976 ] = - ( xx [ 419 ] + xx [ 436 ] ) ; xx [ 977
] = - ( xx [ 433 ] + xx [ 403 ] ) ; xx [ 978 ] = - ( ( xx [ 442 ] - xx [ 123
] * xx [ 428 ] * xx [ 431 ] ) * xx [ 80 ] + xx [ 439 ] + xx [ 102 ] ) ; xx [
979 ] = xx [ 0 ] ; xx [ 980 ] = xx [ 0 ] ; xx [ 981 ] = xx [ 0 ] ; xx [ 982 ]
= xx [ 0 ] ; xx [ 983 ] = xx [ 0 ] ; xx [ 984 ] = xx [ 0 ] ; xx [ 985 ] = xx
[ 0 ] ; xx [ 986 ] = xx [ 0 ] ; xx [ 987 ] = xx [ 0 ] ; xx [ 988 ] = xx [ 0 ]
; xx [ 989 ] = xx [ 0 ] ; xx [ 990 ] = xx [ 0 ] ; xx [ 991 ] = xx [ 0 ] ; xx
[ 992 ] = xx [ 0 ] ; xx [ 993 ] = xx [ 0 ] ; xx [ 994 ] = xx [ 0 ] ; xx [ 995
] = xx [ 334 ] + ( xx [ 345 ] * xx [ 14 ] + xx [ 351 ] ) * xx [ 80 ] ; xx [
996 ] = xx [ 358 ] + xx [ 364 ] ; xx [ 997 ] = xx [ 367 ] + xx [ 348 ] ; xx [
998 ] = xx [ 361 ] + xx [ 322 ] ; xx [ 999 ] = xx [ 372 ] + xx [ 377 ] ; xx [
1000 ] = xx [ 382 ] + xx [ 337 ] ; xx [ 1001 ] = xx [ 385 ] + xx [ 318 ] ; xx
[ 1002 ] = xx [ 340 ] + xx [ 391 ] ; xx [ 1003 ] = xx [ 0 ] ; xx [ 1004 ] = (
xx [ 352 ] * xx [ 255 ] + xx [ 394 ] ) * xx [ 80 ] + xx [ 388 ] ; xx [ 1005 ]
= xx [ 0 ] ; xx [ 1006 ] = xx [ 0 ] ; xx [ 1007 ] = xx [ 0 ] ; xx [ 1008 ] =
- ( xx [ 397 ] + ( xx [ 315 ] * xx [ 417 ] + xx [ 423 ] ) * xx [ 80 ] ) ; xx
[ 1009 ] = - ( xx [ 420 ] + xx [ 437 ] ) ; xx [ 1010 ] = - ( xx [ 434 ] + xx
[ 404 ] ) ; xx [ 1011 ] = - ( ( xx [ 428 ] * xx [ 251 ] + xx [ 443 ] ) * xx [
80 ] + xx [ 440 ] ) ; xx [ 1012 ] = xx [ 0 ] ; xx [ 1013 ] = xx [ 0 ] ; xx [
1014 ] = xx [ 0 ] ; xx [ 1015 ] = xx [ 0 ] ; xx [ 1016 ] = xx [ 0 ] ; xx [
1017 ] = xx [ 0 ] ; xx [ 1018 ] = xx [ 0 ] ; xx [ 1019 ] = xx [ 0 ] ; xx [
1020 ] = xx [ 0 ] ; xx [ 1021 ] = xx [ 0 ] ; xx [ 1022 ] = xx [ 0 ] ; xx [
1023 ] = xx [ 0 ] ; xx [ 1024 ] = xx [ 0 ] ; xx [ 1025 ] = xx [ 0 ] ; xx [
1026 ] = xx [ 0 ] ; xx [ 1027 ] = xx [ 0 ] ; xx [ 1028 ] = xx [ 464 ] + xx [
476 ] + xx [ 80 ] * ( xx [ 482 ] - xx [ 474 ] * xx [ 14 ] ) ; xx [ 1029 ] =
xx [ 489 ] + xx [ 495 ] ; xx [ 1030 ] = xx [ 498 ] + xx [ 479 ] ; xx [ 1031 ]
= xx [ 492 ] + xx [ 452 ] ; xx [ 1032 ] = xx [ 503 ] + xx [ 508 ] ; xx [ 1033
] = xx [ 513 ] + xx [ 470 ] ; xx [ 1034 ] = xx [ 516 ] + xx [ 448 ] ; xx [
1035 ] = xx [ 519 ] + xx [ 459 ] ; xx [ 1036 ] = xx [ 0 ] ; xx [ 1037 ] = xx
[ 0 ] ; xx [ 1038 ] = xx [ 80 ] * ( xx [ 525 ] - xx [ 485 ] * xx [ 369 ] ) +
xx [ 522 ] + xx [ 73 ] ; xx [ 1039 ] = xx [ 0 ] ; xx [ 1040 ] = xx [ 0 ] ; xx
[ 1041 ] = xx [ 0 ] ; xx [ 1042 ] = xx [ 0 ] ; xx [ 1043 ] = xx [ 0 ] ; xx [
1044 ] = xx [ 0 ] ; xx [ 1045 ] = xx [ 0 ] ; xx [ 1046 ] = xx [ 0 ] ; xx [
1047 ] = xx [ 0 ] ; xx [ 1048 ] = xx [ 0 ] ; xx [ 1049 ] = - ( xx [ 528 ] +
xx [ 550 ] + xx [ 80 ] * ( xx [ 560 ] + xx [ 501 ] * xx [ 531 ] ) ) ; xx [
1050 ] = - ( xx [ 557 ] + xx [ 574 ] ) ; xx [ 1051 ] = - ( xx [ 571 ] + xx [
540 ] ) ; xx [ 1052 ] = - ( xx [ 80 ] * ( xx [ 580 ] - xx [ 567 ] * xx [ 323
] ) + xx [ 577 ] - xx [ 123 ] ) ; xx [ 1053 ] = xx [ 0 ] ; xx [ 1054 ] = xx [
0 ] ; xx [ 1055 ] = xx [ 0 ] ; xx [ 1056 ] = xx [ 0 ] ; xx [ 1057 ] = xx [ 0
] ; xx [ 1058 ] = xx [ 0 ] ; xx [ 1059 ] = xx [ 0 ] ; xx [ 1060 ] = xx [ 0 ]
; xx [ 1061 ] = xx [ 465 ] + xx [ 477 ] + ( xx [ 475 ] * xx [ 14 ] + xx [ 483
] ) * xx [ 80 ] ; xx [ 1062 ] = xx [ 490 ] + xx [ 496 ] ; xx [ 1063 ] = xx [
499 ] + xx [ 480 ] ; xx [ 1064 ] = xx [ 493 ] + xx [ 453 ] ; xx [ 1065 ] = xx
[ 504 ] + xx [ 509 ] ; xx [ 1066 ] = xx [ 514 ] + xx [ 471 ] ; xx [ 1067 ] =
xx [ 517 ] + xx [ 449 ] ; xx [ 1068 ] = xx [ 520 ] + xx [ 460 ] ; xx [ 1069 ]
= xx [ 0 ] ; xx [ 1070 ] = xx [ 0 ] ; xx [ 1071 ] = ( xx [ 73 ] * xx [ 485 ]
* xx [ 488 ] + xx [ 526 ] ) * xx [ 80 ] + xx [ 523 ] + xx [ 72 ] ; xx [ 1072
] = xx [ 0 ] ; xx [ 1073 ] = xx [ 0 ] ; xx [ 1074 ] = xx [ 0 ] ; xx [ 1075 ]
= xx [ 0 ] ; xx [ 1076 ] = xx [ 0 ] ; xx [ 1077 ] = xx [ 0 ] ; xx [ 1078 ] =
xx [ 0 ] ; xx [ 1079 ] = xx [ 0 ] ; xx [ 1080 ] = xx [ 0 ] ; xx [ 1081 ] = xx
[ 0 ] ; xx [ 1082 ] = - ( xx [ 529 ] + xx [ 555 ] + ( xx [ 561 ] - xx [ 501 ]
* xx [ 549 ] ) * xx [ 80 ] ) ; xx [ 1083 ] = - ( xx [ 558 ] + xx [ 575 ] ) ;
xx [ 1084 ] = - ( xx [ 572 ] + xx [ 541 ] ) ; xx [ 1085 ] = - ( ( xx [ 581 ]
- xx [ 123 ] * xx [ 567 ] * xx [ 570 ] ) * xx [ 80 ] + xx [ 578 ] + xx [ 102
] ) ; xx [ 1086 ] = xx [ 0 ] ; xx [ 1087 ] = xx [ 0 ] ; xx [ 1088 ] = xx [ 0
] ; xx [ 1089 ] = xx [ 0 ] ; xx [ 1090 ] = xx [ 0 ] ; xx [ 1091 ] = xx [ 0 ]
; xx [ 1092 ] = xx [ 0 ] ; xx [ 1093 ] = xx [ 0 ] ; xx [ 1094 ] = xx [ 466 ]
+ ( xx [ 14 ] * xx [ 478 ] + xx [ 484 ] ) * xx [ 80 ] ; xx [ 1095 ] = xx [
491 ] + xx [ 497 ] ; xx [ 1096 ] = xx [ 500 ] + xx [ 481 ] ; xx [ 1097 ] = xx
[ 494 ] + xx [ 454 ] ; xx [ 1098 ] = xx [ 505 ] + xx [ 510 ] ; xx [ 1099 ] =
xx [ 515 ] + xx [ 472 ] ; xx [ 1100 ] = xx [ 518 ] + xx [ 450 ] ; xx [ 1101 ]
= xx [ 521 ] + xx [ 461 ] ; xx [ 1102 ] = xx [ 0 ] ; xx [ 1103 ] = xx [ 0 ] ;
xx [ 1104 ] = ( xx [ 485 ] * xx [ 405 ] + xx [ 527 ] ) * xx [ 80 ] + xx [ 524
] ; xx [ 1105 ] = xx [ 0 ] ; xx [ 1106 ] = xx [ 0 ] ; xx [ 1107 ] = xx [ 0 ]
; xx [ 1108 ] = xx [ 0 ] ; xx [ 1109 ] = xx [ 0 ] ; xx [ 1110 ] = xx [ 0 ] ;
xx [ 1111 ] = xx [ 0 ] ; xx [ 1112 ] = xx [ 0 ] ; xx [ 1113 ] = xx [ 0 ] ; xx
[ 1114 ] = xx [ 0 ] ; xx [ 1115 ] = - ( xx [ 530 ] + ( xx [ 501 ] * xx [ 556
] + xx [ 562 ] ) * xx [ 80 ] ) ; xx [ 1116 ] = - ( xx [ 559 ] + xx [ 576 ] )
; xx [ 1117 ] = - ( xx [ 573 ] + xx [ 542 ] ) ; xx [ 1118 ] = - ( ( xx [ 567
] * xx [ 444 ] + xx [ 582 ] ) * xx [ 80 ] + xx [ 579 ] ) ; xx [ 1119 ] = xx [
0 ] ; xx [ 1120 ] = xx [ 0 ] ; xx [ 1121 ] = xx [ 0 ] ; xx [ 1122 ] = xx [ 0
] ; xx [ 1123 ] = xx [ 0 ] ; xx [ 1124 ] = xx [ 0 ] ; xx [ 1125 ] = xx [ 0 ]
; xx [ 1126 ] = xx [ 0 ] ; xx [ 1127 ] = xx [ 537 ] + xx [ 613 ] + xx [ 80 ]
* ( xx [ 618 ] - xx [ 611 ] * xx [ 14 ] ) ; xx [ 1128 ] = xx [ 625 ] + xx [
631 ] ; xx [ 1129 ] = xx [ 634 ] + xx [ 615 ] ; xx [ 1130 ] = xx [ 628 ] + xx
[ 591 ] ; xx [ 1131 ] = xx [ 639 ] + xx [ 644 ] ; xx [ 1132 ] = xx [ 649 ] +
xx [ 605 ] ; xx [ 1133 ] = xx [ 652 ] + xx [ 587 ] ; xx [ 1134 ] = xx [ 655 ]
+ xx [ 598 ] ; xx [ 1135 ] = xx [ 0 ] ; xx [ 1136 ] = xx [ 0 ] ; xx [ 1137 ]
= xx [ 0 ] ; xx [ 1138 ] = xx [ 80 ] * ( xx [ 661 ] - xx [ 621 ] * xx [ 543 ]
) + xx [ 658 ] + xx [ 73 ] ; xx [ 1139 ] = xx [ 0 ] ; xx [ 1140 ] = xx [ 0 ]
; xx [ 1141 ] = xx [ 0 ] ; xx [ 1142 ] = xx [ 0 ] ; xx [ 1143 ] = xx [ 0 ] ;
xx [ 1144 ] = xx [ 0 ] ; xx [ 1145 ] = xx [ 0 ] ; xx [ 1146 ] = xx [ 0 ] ; xx
[ 1147 ] = xx [ 0 ] ; xx [ 1148 ] = xx [ 0 ] ; xx [ 1149 ] = xx [ 0 ] ; xx [
1150 ] = xx [ 0 ] ; xx [ 1151 ] = xx [ 0 ] ; xx [ 1152 ] = - ( xx [ 664 ] +
xx [ 687 ] + xx [ 80 ] * ( xx [ 697 ] - xx [ 638 ] * xx [ 667 ] ) ) ; xx [
1153 ] = - ( xx [ 694 ] + xx [ 711 ] ) ; xx [ 1154 ] = - ( xx [ 708 ] + xx [
677 ] ) ; xx [ 1155 ] = - ( xx [ 80 ] * ( xx [ 717 ] - xx [ 704 ] * xx [ 447
] ) + xx [ 714 ] - xx [ 123 ] ) ; xx [ 1156 ] = xx [ 0 ] ; xx [ 1157 ] = xx [
0 ] ; xx [ 1158 ] = xx [ 0 ] ; xx [ 1159 ] = xx [ 0 ] ; xx [ 1160 ] = xx [
538 ] + xx [ 610 ] + ( xx [ 612 ] * xx [ 14 ] + xx [ 619 ] ) * xx [ 80 ] ; xx
[ 1161 ] = xx [ 626 ] + xx [ 632 ] ; xx [ 1162 ] = xx [ 635 ] + xx [ 616 ] ;
xx [ 1163 ] = xx [ 629 ] + xx [ 592 ] ; xx [ 1164 ] = xx [ 640 ] + xx [ 645 ]
; xx [ 1165 ] = xx [ 650 ] + xx [ 606 ] ; xx [ 1166 ] = xx [ 653 ] + xx [ 588
] ; xx [ 1167 ] = xx [ 656 ] + xx [ 599 ] ; xx [ 1168 ] = xx [ 0 ] ; xx [
1169 ] = xx [ 0 ] ; xx [ 1170 ] = xx [ 0 ] ; xx [ 1171 ] = ( xx [ 73 ] * xx [
621 ] * xx [ 624 ] + xx [ 662 ] ) * xx [ 80 ] + xx [ 659 ] + xx [ 72 ] ; xx [
1172 ] = xx [ 0 ] ; xx [ 1173 ] = xx [ 0 ] ; xx [ 1174 ] = xx [ 0 ] ; xx [
1175 ] = xx [ 0 ] ; xx [ 1176 ] = xx [ 0 ] ; xx [ 1177 ] = xx [ 0 ] ; xx [
1178 ] = xx [ 0 ] ; xx [ 1179 ] = xx [ 0 ] ; xx [ 1180 ] = xx [ 0 ] ; xx [
1181 ] = xx [ 0 ] ; xx [ 1182 ] = xx [ 0 ] ; xx [ 1183 ] = xx [ 0 ] ; xx [
1184 ] = xx [ 0 ] ; xx [ 1185 ] = - ( xx [ 665 ] + xx [ 692 ] + ( xx [ 638 ]
* xx [ 686 ] + xx [ 698 ] ) * xx [ 80 ] ) ; xx [ 1186 ] = - ( xx [ 695 ] + xx
[ 712 ] ) ; xx [ 1187 ] = - ( xx [ 709 ] + xx [ 678 ] ) ; xx [ 1188 ] = - ( (
xx [ 718 ] - xx [ 123 ] * xx [ 704 ] * xx [ 707 ] ) * xx [ 80 ] + xx [ 715 ]
+ xx [ 102 ] ) ; xx [ 1189 ] = xx [ 0 ] ; xx [ 1190 ] = xx [ 0 ] ; xx [ 1191
] = xx [ 0 ] ; xx [ 1192 ] = xx [ 0 ] ; xx [ 1193 ] = xx [ 539 ] + ( xx [ 14
] * xx [ 614 ] + xx [ 620 ] ) * xx [ 80 ] ; xx [ 1194 ] = xx [ 627 ] + xx [
633 ] ; xx [ 1195 ] = xx [ 636 ] + xx [ 617 ] ; xx [ 1196 ] = xx [ 630 ] + xx
[ 593 ] ; xx [ 1197 ] = xx [ 641 ] + xx [ 646 ] ; xx [ 1198 ] = xx [ 651 ] +
xx [ 607 ] ; xx [ 1199 ] = xx [ 654 ] + xx [ 589 ] ; xx [ 1200 ] = xx [ 657 ]
+ xx [ 600 ] ; xx [ 1201 ] = xx [ 0 ] ; xx [ 1202 ] = xx [ 0 ] ; xx [ 1203 ]
= xx [ 0 ] ; xx [ 1204 ] = ( xx [ 621 ] * xx [ 586 ] + xx [ 663 ] ) * xx [ 80
] + xx [ 660 ] ; xx [ 1205 ] = xx [ 0 ] ; xx [ 1206 ] = xx [ 0 ] ; xx [ 1207
] = xx [ 0 ] ; xx [ 1208 ] = xx [ 0 ] ; xx [ 1209 ] = xx [ 0 ] ; xx [ 1210 ]
= xx [ 0 ] ; xx [ 1211 ] = xx [ 0 ] ; xx [ 1212 ] = xx [ 0 ] ; xx [ 1213 ] =
xx [ 0 ] ; xx [ 1214 ] = xx [ 0 ] ; xx [ 1215 ] = xx [ 0 ] ; xx [ 1216 ] = xx
[ 0 ] ; xx [ 1217 ] = xx [ 0 ] ; xx [ 1218 ] = - ( xx [ 666 ] + ( xx [ 699 ]
- xx [ 638 ] * xx [ 693 ] ) * xx [ 80 ] ) ; xx [ 1219 ] = - ( xx [ 696 ] + xx
[ 713 ] ) ; xx [ 1220 ] = - ( xx [ 710 ] + xx [ 679 ] ) ; xx [ 1221 ] = - ( (
xx [ 704 ] * xx [ 583 ] + xx [ 719 ] ) * xx [ 80 ] + xx [ 716 ] ) ; xx [ 1222
] = - ( xx [ 724 ] + xx [ 749 ] + xx [ 80 ] * ( xx [ 760 ] + xx [ 721 ] * xx
[ 727 ] ) ) ; xx [ 1223 ] = - ( xx [ 757 ] + xx [ 774 ] ) ; xx [ 1224 ] = - (
xx [ 771 ] + xx [ 739 ] ) ; xx [ 1225 ] = - ( xx [ 80 ] * ( xx [ 780 ] - xx [
767 ] * xx [ 585 ] ) + xx [ 777 ] - xx [ 123 ] ) ; xx [ 1226 ] = xx [ 17 ] +
xx [ 800 ] + xx [ 80 ] * ( xx [ 804 ] - xx [ 120 ] * xx [ 14 ] ) ; xx [ 1227
] = xx [ 811 ] + xx [ 170 ] ; xx [ 1228 ] = xx [ 814 ] + xx [ 182 ] ; xx [
1229 ] = xx [ 35 ] + xx [ 50 ] ; xx [ 1230 ] = xx [ 68 ] + xx [ 734 ] ; xx [
1231 ] = xx [ 801 ] + xx [ 817 ] ; xx [ 1232 ] = xx [ 807 ] + xx [ 46 ] ; xx
[ 1233 ] = xx [ 797 ] + xx [ 783 ] ; xx [ 1234 ] = xx [ 0 ] ; xx [ 1235 ] =
xx [ 0 ] ; xx [ 1236 ] = xx [ 0 ] ; xx [ 1237 ] = xx [ 0 ] ; xx [ 1238 ] = xx
[ 80 ] * ( xx [ 823 ] - xx [ 11 ] * xx [ 31 ] ) + xx [ 16 ] + xx [ 80 ] * (
xx [ 75 ] + xx [ 191 ] * xx [ 34 ] ) + xx [ 73 ] ; xx [ 1239 ] = xx [ 0 ] ;
xx [ 1240 ] = xx [ 0 ] ; xx [ 1241 ] = xx [ 0 ] ; xx [ 1242 ] = xx [ 0 ] ; xx
[ 1243 ] = xx [ 0 ] ; xx [ 1244 ] = xx [ 0 ] ; xx [ 1245 ] = xx [ 0 ] ; xx [
1246 ] = xx [ 0 ] ; xx [ 1247 ] = xx [ 0 ] ; xx [ 1248 ] = xx [ 0 ] ; xx [
1249 ] = xx [ 0 ] ; xx [ 1250 ] = xx [ 0 ] ; xx [ 1251 ] = xx [ 0 ] ; xx [
1252 ] = xx [ 0 ] ; xx [ 1253 ] = xx [ 0 ] ; xx [ 1254 ] = xx [ 0 ] ; xx [
1255 ] = - ( xx [ 725 ] + xx [ 755 ] + ( xx [ 761 ] - xx [ 721 ] * xx [ 748 ]
) * xx [ 80 ] ) ; xx [ 1256 ] = - ( xx [ 758 ] + xx [ 775 ] ) ; xx [ 1257 ] =
- ( xx [ 772 ] + xx [ 740 ] ) ; xx [ 1258 ] = - ( ( xx [ 781 ] - xx [ 123 ] *
xx [ 767 ] * xx [ 770 ] ) * xx [ 80 ] + xx [ 778 ] + xx [ 102 ] ) ; xx [ 1259
] = xx [ 18 ] + xx [ 53 ] + ( xx [ 137 ] * xx [ 14 ] + xx [ 805 ] ) * xx [ 80
] ; xx [ 1260 ] = xx [ 812 ] + xx [ 171 ] ; xx [ 1261 ] = xx [ 815 ] + xx [
183 ] ; xx [ 1262 ] = xx [ 36 ] + xx [ 51 ] ; xx [ 1263 ] = xx [ 69 ] + xx [
735 ] ; xx [ 1264 ] = xx [ 802 ] + xx [ 818 ] ; xx [ 1265 ] = xx [ 808 ] + xx
[ 47 ] ; xx [ 1266 ] = xx [ 798 ] + xx [ 784 ] ; xx [ 1267 ] = xx [ 0 ] ; xx
[ 1268 ] = xx [ 0 ] ; xx [ 1269 ] = xx [ 0 ] ; xx [ 1270 ] = xx [ 0 ] ; xx [
1271 ] = ( xx [ 11 ] * xx [ 33 ] + xx [ 824 ] ) * xx [ 80 ] - xx [ 23 ] + (
xx [ 191 ] * xx [ 38 ] + xx [ 76 ] ) * xx [ 80 ] + xx [ 72 ] ; xx [ 1272 ] =
xx [ 0 ] ; xx [ 1273 ] = xx [ 0 ] ; xx [ 1274 ] = xx [ 0 ] ; xx [ 1275 ] = xx
[ 0 ] ; xx [ 1276 ] = xx [ 0 ] ; xx [ 1277 ] = xx [ 0 ] ; xx [ 1278 ] = xx [
0 ] ; xx [ 1279 ] = xx [ 0 ] ; xx [ 1280 ] = xx [ 0 ] ; xx [ 1281 ] = xx [ 0
] ; xx [ 1282 ] = xx [ 0 ] ; xx [ 1283 ] = xx [ 0 ] ; xx [ 1284 ] = xx [ 0 ]
; xx [ 1285 ] = xx [ 0 ] ; xx [ 1286 ] = xx [ 0 ] ; xx [ 1287 ] = xx [ 0 ] ;
xx [ 1288 ] = - ( xx [ 726 ] + ( xx [ 762 ] - xx [ 721 ] * xx [ 756 ] ) * xx
[ 80 ] ) ; xx [ 1289 ] = - ( xx [ 759 ] + xx [ 776 ] ) ; xx [ 1290 ] = - ( xx
[ 773 ] + xx [ 741 ] ) ; xx [ 1291 ] = - ( ( xx [ 767 ] * xx [ 669 ] + xx [
782 ] ) * xx [ 80 ] + xx [ 779 ] ) ; xx [ 1292 ] = xx [ 19 ] + ( xx [ 14 ] *
xx [ 796 ] + xx [ 806 ] ) * xx [ 80 ] ; xx [ 1293 ] = xx [ 813 ] + xx [ 172 ]
; xx [ 1294 ] = xx [ 816 ] + xx [ 184 ] ; xx [ 1295 ] = xx [ 37 ] + xx [ 52 ]
; xx [ 1296 ] = xx [ 70 ] + xx [ 736 ] ; xx [ 1297 ] = xx [ 803 ] + xx [ 819
] ; xx [ 1298 ] = xx [ 809 ] + xx [ 48 ] ; xx [ 1299 ] = xx [ 799 ] + xx [
785 ] ; xx [ 1300 ] = xx [ 0 ] ; xx [ 1301 ] = xx [ 0 ] ; xx [ 1302 ] = xx [
0 ] ; xx [ 1303 ] = xx [ 0 ] ; xx [ 1304 ] = ( xx [ 11 ] * xx [ 27 ] + xx [
825 ] ) * xx [ 80 ] + ( xx [ 77 ] - xx [ 191 ] * xx [ 39 ] ) * xx [ 80 ] ; xx
[ 1305 ] = xx [ 0 ] ; xx [ 1306 ] = xx [ 0 ] ; xx [ 1307 ] = xx [ 0 ] ; xx [
1308 ] = xx [ 0 ] ; xx [ 1309 ] = xx [ 0 ] ; xx [ 1310 ] = xx [ 0 ] ; xx [
1311 ] = xx [ 0 ] ; xx [ 1312 ] = xx [ 0 ] ; xx [ 1313 ] = xx [ 0 ] ; xx [
1314 ] = xx [ 0 ] ; xx [ 1315 ] = xx [ 0 ] ; xx [ 1316 ] = xx [ 0 ] ; xx [
1317 ] = xx [ 0 ] ; xx [ 1318 ] = xx [ 0 ] ; xx [ 1319 ] = xx [ 0 ] ; xx [
1320 ] = xx [ 0 ] ; pm_math_quatXform ( xx + 220 , xx + 84 , xx + 16 ) ;
pm_math_quatXform ( xx + 191 , xx + 97 , xx + 31 ) ; xx [ 34 ] = - xx [ 107 ]
; xx [ 35 ] = xx [ 109 ] ; xx [ 36 ] = - xx [ 101 ] ; pm_math_quatXform ( xx
+ 157 , xx + 34 , xx + 37 ) ; xx [ 34 ] = xx [ 121 ] ; xx [ 35 ] = xx [ 124 ]
; xx [ 36 ] = xx [ 116 ] ; pm_math_quatXform ( xx + 153 , xx + 34 , xx + 46 )
; pm_math_quatXform ( xx + 149 , xx + 132 , xx + 34 ) ; xx [ 49 ] = xx [ 14 ]
; xx [ 50 ] = xx [ 3 ] ; xx [ 51 ] = xx [ 7 ] ; xx [ 52 ] = xx [ 15 ] ; xx [
6 ] = xx [ 131 ] * xx [ 10 ] - xx [ 135 ] * xx [ 8 ] ; xx [ 9 ] =
0.03194045366784892 ; xx [ 11 ] = 8.762500002356819e-3 ; xx [ 19 ] =
7.175000002356807e-3 ; xx [ 64 ] = xx [ 80 ] * xx [ 6 ] * xx [ 10 ] + xx [ 9
] ; xx [ 65 ] = xx [ 80 ] * xx [ 6 ] * xx [ 8 ] + xx [ 135 ] ; xx [ 66 ] = xx
[ 11 ] - ( xx [ 8 ] * xx [ 19 ] * xx [ 8 ] + xx [ 19 ] * xx [ 10 ] * xx [ 10
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 49 , xx + 64 , xx + 68 ) ; xx [ 6
] = 1.5875e-3 ; xx [ 8 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 10 ] =
0.02520954632904373 ; xx [ 23 ] = xx [ 3 ] * xx [ 6 ] - xx [ 15 ] * xx [ 10 ]
; xx [ 27 ] = xx [ 10 ] * xx [ 7 ] ; xx [ 64 ] = - xx [ 8 ] ; xx [ 65 ] = xx
[ 23 ] ; xx [ 66 ] = xx [ 27 ] ; pm_math_cross3 ( xx + 139 , xx + 64 , xx +
75 ) ; xx [ 43 ] = ( xx [ 75 ] - xx [ 8 ] * xx [ 14 ] ) * xx [ 80 ] ; xx [ 8
] = 0.04299719117889741 ; xx [ 53 ] = xx [ 37 ] + xx [ 46 ] + xx [ 34 ] + xx
[ 68 ] - xx [ 43 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 290 , xx + 267 , xx
+ 64 ) ; pm_math_quatXform ( xx + 286 , xx + 263 , xx + 81 ) ; xx [ 91 ] = xx
[ 241 ] ; xx [ 92 ] = xx [ 273 ] ; xx [ 93 ] = xx [ 225 ] ; xx [ 94 ] = xx [
274 ] ; xx [ 58 ] = xx [ 266 ] * xx [ 118 ] + xx [ 270 ] * xx [ 226 ] ; xx [
59 ] = 0.03194045366071555 ; xx [ 61 ] = 4.000000007367204e-3 ; xx [ 71 ] =
2.412500007367193e-3 ; xx [ 97 ] = xx [ 80 ] * xx [ 58 ] * xx [ 226 ] + xx [
59 ] ; xx [ 98 ] = xx [ 80 ] * xx [ 58 ] * xx [ 118 ] - xx [ 266 ] ; xx [ 99
] = ( xx [ 118 ] * xx [ 61 ] * xx [ 118 ] + xx [ 61 ] * xx [ 226 ] * xx [ 226
] ) * xx [ 80 ] - xx [ 71 ] ; pm_math_quatXform ( xx + 91 , xx + 97 , xx +
109 ) ; xx [ 58 ] = 1.587500000000011e-3 ; xx [ 78 ] = xx [ 225 ] * xx [ 58 ]
; xx [ 88 ] = xx [ 10 ] * xx [ 242 ] + xx [ 58 ] * xx [ 125 ] ; xx [ 89 ] =
xx [ 225 ] * xx [ 10 ] ; xx [ 97 ] = xx [ 78 ] ; xx [ 98 ] = xx [ 88 ] ; xx [
99 ] = xx [ 89 ] ; pm_math_cross3 ( xx + 275 , xx + 97 , xx + 132 ) ; xx [ 97
] = ( xx [ 241 ] * xx [ 78 ] + xx [ 132 ] ) * xx [ 80 ] ; xx [ 78 ] =
0.1417622656843958 ; xx [ 98 ] = ( xx [ 14 ] * xx [ 23 ] + xx [ 76 ] ) * xx [
80 ] ; xx [ 23 ] = 0.02992188481855372 ; xx [ 99 ] = xx [ 38 ] + xx [ 47 ] +
xx [ 35 ] + xx [ 69 ] - xx [ 98 ] + xx [ 23 ] ; xx [ 101 ] = ( xx [ 241 ] *
xx [ 88 ] + xx [ 133 ] ) * xx [ 80 ] ; xx [ 88 ] = 0.02992349485130436 ; xx [
34 ] = xx [ 80 ] * ( xx [ 77 ] + xx [ 27 ] * xx [ 14 ] ) ; xx [ 27 ] =
0.1428830924490354 ; xx [ 35 ] = xx [ 39 ] + xx [ 48 ] + xx [ 36 ] + xx [ 70
] - xx [ 34 ] + xx [ 27 ] ; xx [ 36 ] = xx [ 80 ] * ( xx [ 134 ] + xx [ 241 ]
* xx [ 89 ] ) ; xx [ 37 ] = 0.1065919054848736 ; pm_math_quatXform ( xx + 352
, xx + 84 , xx + 46 ) ; pm_math_quatXform ( xx + 191 , xx + 329 , xx + 68 ) ;
pm_math_quatXform ( xx + 428 , xx + 267 , xx + 75 ) ; pm_math_quatXform ( xx
+ 424 , xx + 406 , xx + 132 ) ; xx [ 142 ] = xx [ 315 ] ; xx [ 143 ] = xx [
224 ] ; xx [ 144 ] = xx [ 256 ] ; xx [ 145 ] = xx [ 319 ] ; xx [ 38 ] = xx [
410 ] * xx [ 258 ] - xx [ 409 ] * xx [ 313 ] ; xx [ 39 ] =
0.03194045368023388 ; xx [ 89 ] = 8.762499998974573e-3 ; xx [ 107 ] =
7.174999998974562e-3 ; xx [ 136 ] = xx [ 80 ] * xx [ 38 ] * xx [ 313 ] + xx [
39 ] ; xx [ 137 ] = xx [ 80 ] * xx [ 38 ] * xx [ 258 ] - xx [ 410 ] ; xx [
138 ] = xx [ 89 ] - ( xx [ 258 ] * xx [ 107 ] * xx [ 258 ] + xx [ 107 ] * xx
[ 313 ] * xx [ 313 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 142 , xx + 136
, xx + 146 ) ; xx [ 38 ] = xx [ 6 ] * xx [ 256 ] ; xx [ 116 ] =
0.02520954632904374 ; xx [ 118 ] = xx [ 224 ] * xx [ 6 ] - xx [ 319 ] * xx [
116 ] ; xx [ 6 ] = xx [ 116 ] * xx [ 256 ] ; xx [ 136 ] = - xx [ 38 ] ; xx [
137 ] = xx [ 118 ] ; xx [ 138 ] = xx [ 6 ] ; pm_math_cross3 ( xx + 413 , xx +
136 , xx + 149 ) ; xx [ 120 ] = ( xx [ 149 ] - xx [ 38 ] * xx [ 315 ] ) * xx
[ 80 ] ; xx [ 38 ] = 0.05787438452398606 ; xx [ 121 ] = ( xx [ 118 ] * xx [
315 ] + xx [ 150 ] ) * xx [ 80 ] ; xx [ 118 ] = 0.02992259737327991 ; xx [
124 ] = xx [ 80 ] * ( xx [ 151 ] + xx [ 6 ] * xx [ 315 ] ) ; xx [ 6 ] =
0.1550274415345039 ; pm_math_quatXform ( xx + 485 , xx + 84 , xx + 136 ) ;
pm_math_quatXform ( xx + 191 , xx + 467 , xx + 149 ) ; pm_math_quatXform ( xx
+ 567 , xx + 267 , xx + 152 ) ; pm_math_quatXform ( xx + 563 , xx + 544 , xx
+ 155 ) ; xx [ 158 ] = xx [ 501 ] ; xx [ 159 ] = xx [ 400 ] ; xx [ 160 ] = xx
[ 451 ] ; xx [ 161 ] = xx [ 551 ] ; xx [ 129 ] = xx [ 547 ] * xx [ 455 ] - xx
[ 548 ] * xx [ 378 ] ; xx [ 130 ] = 0.03194045366579833 ; xx [ 162 ] =
3.99999999470772e-3 ; xx [ 163 ] = 2.412499994707708e-3 ; xx [ 170 ] = xx [
80 ] * xx [ 129 ] * xx [ 455 ] + xx [ 130 ] ; xx [ 171 ] = xx [ 80 ] * xx [
129 ] * xx [ 378 ] + xx [ 548 ] ; xx [ 172 ] = ( xx [ 378 ] * xx [ 162 ] * xx
[ 378 ] + xx [ 162 ] * xx [ 455 ] * xx [ 455 ] ) * xx [ 80 ] - xx [ 163 ] ;
pm_math_quatXform ( xx + 158 , xx + 170 , xx + 173 ) ; xx [ 129 ] = xx [ 451
] * xx [ 58 ] ; xx [ 164 ] = xx [ 10 ] * xx [ 502 ] - xx [ 58 ] * xx [ 400 ]
; xx [ 166 ] = xx [ 451 ] * xx [ 10 ] ; xx [ 170 ] = xx [ 129 ] ; xx [ 171 ]
= xx [ 164 ] ; xx [ 172 ] = xx [ 166 ] ; pm_math_cross3 ( xx + 552 , xx + 170
, xx + 179 ) ; xx [ 170 ] = ( xx [ 501 ] * xx [ 129 ] + xx [ 179 ] ) * xx [
80 ] ; xx [ 129 ] = 0.06304794220310322 ; xx [ 171 ] = ( xx [ 501 ] * xx [
164 ] + xx [ 180 ] ) * xx [ 80 ] ; xx [ 164 ] = 0.02992204813763048 ; xx [
172 ] = xx [ 80 ] * ( xx [ 181 ] + xx [ 501 ] * xx [ 166 ] ) ; xx [ 166 ] =
0.1313039406712666 ; pm_math_quatXform ( xx + 621 , xx + 84 , xx + 179 ) ;
pm_math_quatXform ( xx + 191 , xx + 602 , xx + 182 ) ; pm_math_quatXform ( xx
+ 704 , xx + 267 , xx + 185 ) ; pm_math_quatXform ( xx + 700 , xx + 681 , xx
+ 188 ) ; xx [ 202 ] = xx [ 638 ] ; xx [ 203 ] = xx [ 688 ] ; xx [ 204 ] = xx
[ 594 ] ; xx [ 205 ] = xx [ 642 ] ; xx [ 195 ] = xx [ 684 ] * xx [ 608 ] - xx
[ 685 ] * xx [ 507 ] ; xx [ 196 ] = 0.03194045367079622 ; xx [ 197 ] =
3.999999996613603e-3 ; xx [ 206 ] = 2.412499996613564e-3 ; xx [ 207 ] = xx [
80 ] * xx [ 195 ] * xx [ 608 ] + xx [ 196 ] ; xx [ 208 ] = xx [ 80 ] * xx [
195 ] * xx [ 507 ] + xx [ 685 ] ; xx [ 209 ] = ( xx [ 507 ] * xx [ 197 ] * xx
[ 507 ] + xx [ 197 ] * xx [ 608 ] * xx [ 608 ] ) * xx [ 80 ] - xx [ 206 ] ;
pm_math_quatXform ( xx + 202 , xx + 207 , xx + 210 ) ; xx [ 195 ] =
1.587499999999983e-3 ; xx [ 207 ] = xx [ 594 ] * xx [ 195 ] ; xx [ 208 ] = xx
[ 195 ] * xx [ 536 ] - xx [ 10 ] * xx [ 642 ] ; xx [ 195 ] = xx [ 594 ] * xx
[ 10 ] ; xx [ 213 ] = xx [ 207 ] ; xx [ 214 ] = xx [ 208 ] ; xx [ 215 ] = xx
[ 195 ] ; pm_math_cross3 ( xx + 689 , xx + 213 , xx + 216 ) ; xx [ 209 ] = (
xx [ 638 ] * xx [ 207 ] + xx [ 216 ] ) * xx [ 80 ] ; xx [ 207 ] =
0.1240382406650065 ; xx [ 213 ] = ( xx [ 638 ] * xx [ 208 ] + xx [ 217 ] ) *
xx [ 80 ] ; xx [ 208 ] = 0.02992151662180351 ; xx [ 214 ] = xx [ 80 ] * ( xx
[ 218 ] + xx [ 638 ] * xx [ 195 ] ) ; xx [ 195 ] = 0.04996916497694619 ;
pm_math_quatXform ( xx + 198 , xx + 84 , xx + 215 ) ; pm_math_quatXform ( xx
+ 191 , xx + 792 , xx + 198 ) ; pm_math_quatXform ( xx + 767 , xx + 267 , xx
+ 191 ) ; pm_math_quatXform ( xx + 763 , xx + 743 , xx + 218 ) ; xx [ 226 ] =
xx [ 721 ] ; xx [ 227 ] = xx [ 750 ] ; xx [ 228 ] = xx [ 675 ] ; xx [ 229 ] =
xx [ 751 ] ; xx [ 194 ] = 0.03194045367870467 ; xx [ 201 ] = xx [ 747 ] * xx
[ 590 ] + xx [ 746 ] * xx [ 676 ] ; xx [ 221 ] = 4.0000000045273e-3 ; xx [
222 ] = 2.412500004527289e-3 ; xx [ 230 ] = xx [ 194 ] - xx [ 80 ] * xx [ 201
] * xx [ 676 ] ; xx [ 231 ] = xx [ 747 ] - xx [ 80 ] * xx [ 201 ] * xx [ 590
] ; xx [ 232 ] = ( xx [ 590 ] * xx [ 221 ] * xx [ 590 ] + xx [ 221 ] * xx [
676 ] * xx [ 676 ] ) * xx [ 80 ] - xx [ 222 ] ; pm_math_quatXform ( xx + 226
, xx + 230 , xx + 233 ) ; xx [ 201 ] = xx [ 675 ] * xx [ 58 ] ; xx [ 223 ] =
xx [ 10 ] * xx [ 722 ] + xx [ 58 ] * xx [ 647 ] ; xx [ 58 ] = xx [ 675 ] * xx
[ 10 ] ; xx [ 230 ] = xx [ 201 ] ; xx [ 231 ] = xx [ 223 ] ; xx [ 232 ] = xx
[ 58 ] ; pm_math_cross3 ( xx + 752 , xx + 230 , xx + 236 ) ; xx [ 230 ] = (
xx [ 721 ] * xx [ 201 ] + xx [ 236 ] ) * xx [ 80 ] ; xx [ 201 ] =
0.1816563790182656 ; xx [ 231 ] = ( xx [ 721 ] * xx [ 223 ] + xx [ 237 ] ) *
xx [ 80 ] ; xx [ 223 ] = 0.02992367610368172 ; xx [ 232 ] = xx [ 80 ] * ( xx
[ 238 ] + xx [ 721 ] * xx [ 58 ] ) ; xx [ 58 ] = 0.01321939793971065 ; xx [
329 ] = - ( xx [ 16 ] + xx [ 31 ] + xx [ 53 ] - ( xx [ 64 ] + xx [ 81 ] + xx
[ 109 ] - xx [ 97 ] ) - xx [ 78 ] ) ; xx [ 330 ] = - ( xx [ 17 ] + xx [ 32 ]
+ xx [ 99 ] - ( xx [ 65 ] + xx [ 82 ] + xx [ 110 ] - xx [ 101 ] ) - xx [ 88 ]
) ; xx [ 331 ] = - ( xx [ 18 ] + xx [ 33 ] + xx [ 35 ] - ( xx [ 66 ] + xx [
83 ] + xx [ 111 ] - xx [ 36 ] ) + xx [ 37 ] ) ; xx [ 332 ] = - ( xx [ 46 ] +
xx [ 68 ] + xx [ 53 ] - ( xx [ 75 ] + xx [ 132 ] + xx [ 146 ] - xx [ 120 ] )
- xx [ 38 ] ) ; xx [ 333 ] = - ( xx [ 47 ] + xx [ 69 ] + xx [ 99 ] - ( xx [
76 ] + xx [ 133 ] + xx [ 147 ] - xx [ 121 ] ) - xx [ 118 ] ) ; xx [ 334 ] = -
( xx [ 48 ] + xx [ 70 ] + xx [ 35 ] - ( xx [ 77 ] + xx [ 134 ] + xx [ 148 ] -
xx [ 124 ] ) - xx [ 6 ] ) ; xx [ 335 ] = - ( xx [ 136 ] + xx [ 149 ] + xx [
53 ] - ( xx [ 152 ] + xx [ 155 ] + xx [ 173 ] - xx [ 170 ] ) + xx [ 129 ] ) ;
xx [ 336 ] = - ( xx [ 137 ] + xx [ 150 ] + xx [ 99 ] - ( xx [ 153 ] + xx [
156 ] + xx [ 174 ] - xx [ 171 ] ) - xx [ 164 ] ) ; xx [ 337 ] = - ( xx [ 138
] + xx [ 151 ] + xx [ 35 ] - ( xx [ 154 ] + xx [ 157 ] + xx [ 175 ] - xx [
172 ] ) + xx [ 166 ] ) ; xx [ 338 ] = - ( xx [ 179 ] + xx [ 182 ] + xx [ 53 ]
- ( xx [ 185 ] + xx [ 188 ] + xx [ 210 ] - xx [ 209 ] ) + xx [ 207 ] ) ; xx [
339 ] = - ( xx [ 180 ] + xx [ 183 ] + xx [ 99 ] - ( xx [ 186 ] + xx [ 189 ] +
xx [ 211 ] - xx [ 213 ] ) - xx [ 208 ] ) ; xx [ 340 ] = - ( xx [ 181 ] + xx [
184 ] + xx [ 35 ] - ( xx [ 187 ] + xx [ 190 ] + xx [ 212 ] - xx [ 214 ] ) +
xx [ 195 ] ) ; xx [ 341 ] = - ( xx [ 215 ] + xx [ 198 ] + xx [ 53 ] - ( xx [
191 ] + xx [ 218 ] + xx [ 233 ] - xx [ 230 ] ) - xx [ 201 ] ) ; xx [ 342 ] =
- ( xx [ 216 ] + xx [ 199 ] + xx [ 99 ] - ( xx [ 192 ] + xx [ 219 ] + xx [
234 ] - xx [ 231 ] ) - xx [ 223 ] ) ; xx [ 343 ] = - ( xx [ 217 ] + xx [ 200
] + xx [ 35 ] - ( xx [ 193 ] + xx [ 220 ] + xx [ 235 ] - xx [ 232 ] ) + xx [
58 ] ) ; xx [ 16 ] = 1.0e-8 ; memcpy ( xx + 1321 , xx + 826 , 495 * sizeof (
double ) ) ; factorAndSolveWide ( 15 , 33 , xx + 1321 , xx + 179 , xx + 344 ,
ii + 0 , xx + 329 , xx [ 16 ] , xx + 755 ) ; xx [ 17 ] = state [ 14 ] + xx [
755 ] ; xx [ 18 ] = state [ 25 ] + xx [ 759 ] ; xx [ 31 ] = xx [ 18 ] * xx [
2 ] ; xx [ 32 ] = cos ( xx [ 31 ] ) ; xx [ 33 ] = xx [ 3 ] * xx [ 32 ] ; xx [
35 ] = sin ( xx [ 31 ] ) ; xx [ 31 ] = xx [ 35 ] * xx [ 7 ] ; xx [ 46 ] = - (
xx [ 32 ] * xx [ 14 ] + xx [ 15 ] * xx [ 35 ] ) ; xx [ 47 ] = xx [ 35 ] * xx
[ 14 ] - xx [ 15 ] * xx [ 32 ] ; xx [ 48 ] = xx [ 3 ] * xx [ 35 ] + xx [ 32 ]
* xx [ 7 ] ; xx [ 146 ] = xx [ 33 ] - xx [ 31 ] ; xx [ 147 ] = xx [ 46 ] ; xx
[ 148 ] = xx [ 47 ] ; xx [ 149 ] = xx [ 48 ] ; xx [ 150 ] = xx [ 26 ] ; xx [
151 ] = xx [ 29 ] ; xx [ 152 ] = xx [ 28 ] ; xx [ 153 ] = xx [ 24 ] ;
pm_math_quatDeriv ( xx + 150 , xx + 760 , xx + 154 ) ; xx [ 53 ] = xx [ 24 ]
+ xx [ 157 ] ; xx [ 24 ] = xx [ 26 ] + xx [ 154 ] ; xx [ 26 ] = xx [ 29 ] +
xx [ 155 ] ; xx [ 29 ] = xx [ 28 ] + xx [ 156 ] ; xx [ 28 ] = 1.0e-64 ; xx [
64 ] = sqrt ( xx [ 24 ] * xx [ 24 ] + xx [ 26 ] * xx [ 26 ] + xx [ 29 ] * xx
[ 29 ] + xx [ 53 ] * xx [ 53 ] ) ; if ( xx [ 28 ] > xx [ 64 ] ) xx [ 64 ] =
xx [ 28 ] ; xx [ 65 ] = xx [ 53 ] / xx [ 64 ] ; xx [ 53 ] = xx [ 24 ] / xx [
64 ] ; xx [ 24 ] = xx [ 21 ] * xx [ 65 ] - xx [ 25 ] * xx [ 53 ] ; xx [ 66 ]
= xx [ 29 ] / xx [ 64 ] ; xx [ 29 ] = xx [ 26 ] / xx [ 64 ] ; xx [ 26 ] = xx
[ 21 ] * xx [ 66 ] + xx [ 25 ] * xx [ 29 ] ; xx [ 64 ] = - xx [ 26 ] ; xx [
68 ] = xx [ 25 ] * xx [ 66 ] - xx [ 21 ] * xx [ 29 ] ; xx [ 69 ] = - xx [ 68
] ; xx [ 70 ] = xx [ 21 ] * xx [ 53 ] + xx [ 25 ] * xx [ 65 ] ; xx [ 75 ] = -
xx [ 70 ] ; xx [ 150 ] = xx [ 24 ] ; xx [ 151 ] = xx [ 64 ] ; xx [ 152 ] = xx
[ 69 ] ; xx [ 153 ] = xx [ 75 ] ; xx [ 154 ] = xx [ 42 ] ; xx [ 155 ] = xx [
45 ] ; xx [ 156 ] = xx [ 44 ] ; xx [ 157 ] = xx [ 40 ] ; pm_math_quatDeriv (
xx + 154 , xx + 763 , xx + 179 ) ; xx [ 76 ] = xx [ 40 ] + xx [ 182 ] ; xx [
40 ] = xx [ 42 ] + xx [ 179 ] ; xx [ 42 ] = xx [ 45 ] + xx [ 180 ] ; xx [ 45
] = xx [ 44 ] + xx [ 181 ] ; xx [ 44 ] = sqrt ( xx [ 40 ] * xx [ 40 ] + xx [
42 ] * xx [ 42 ] + xx [ 45 ] * xx [ 45 ] + xx [ 76 ] * xx [ 76 ] ) ; if ( xx
[ 28 ] > xx [ 44 ] ) xx [ 44 ] = xx [ 28 ] ; xx [ 77 ] = xx [ 76 ] / xx [ 44
] ; xx [ 76 ] = xx [ 40 ] / xx [ 44 ] ; xx [ 40 ] = xx [ 25 ] * xx [ 77 ] -
xx [ 41 ] * xx [ 76 ] ; xx [ 81 ] = xx [ 45 ] / xx [ 44 ] ; xx [ 45 ] = xx [
42 ] / xx [ 44 ] ; xx [ 42 ] = xx [ 25 ] * xx [ 81 ] - xx [ 41 ] * xx [ 45 ]
; xx [ 44 ] = xx [ 41 ] * xx [ 81 ] + xx [ 25 ] * xx [ 45 ] ; xx [ 82 ] = -
xx [ 44 ] ; xx [ 83 ] = xx [ 41 ] * xx [ 77 ] + xx [ 25 ] * xx [ 76 ] ; xx [
99 ] = - xx [ 83 ] ; xx [ 154 ] = xx [ 40 ] ; xx [ 155 ] = xx [ 42 ] ; xx [
156 ] = xx [ 82 ] ; xx [ 157 ] = xx [ 99 ] ; xx [ 109 ] = state [ 43 ] + xx [
767 ] ; xx [ 110 ] = xx [ 109 ] * xx [ 2 ] ; xx [ 111 ] = cos ( xx [ 110 ] )
; xx [ 132 ] = state [ 41 ] + xx [ 766 ] ; xx [ 133 ] = xx [ 132 ] * xx [ 2 ]
; xx [ 134 ] = sin ( xx [ 133 ] ) ; xx [ 136 ] = xx [ 57 ] * xx [ 134 ] ; xx
[ 137 ] = xx [ 56 ] * xx [ 136 ] ; xx [ 138 ] = xx [ 63 ] * xx [ 134 ] ; xx [
134 ] = xx [ 62 ] * xx [ 138 ] ; xx [ 173 ] = cos ( xx [ 133 ] ) ; xx [ 133 ]
= xx [ 62 ] * xx [ 173 ] ; xx [ 174 ] = xx [ 137 ] + xx [ 134 ] - xx [ 133 ]
; xx [ 175 ] = sin ( xx [ 110 ] ) ; xx [ 110 ] = xx [ 134 ] + xx [ 133 ] + xx
[ 137 ] ; xx [ 133 ] = xx [ 111 ] * xx [ 174 ] + xx [ 175 ] * xx [ 110 ] ; xx
[ 134 ] = xx [ 62 ] * xx [ 136 ] ; xx [ 136 ] = xx [ 56 ] * xx [ 173 ] ; xx [
137 ] = xx [ 56 ] * xx [ 138 ] ; xx [ 138 ] = xx [ 134 ] + xx [ 136 ] - xx [
137 ] ; xx [ 173 ] = xx [ 136 ] - xx [ 134 ] + xx [ 137 ] ; xx [ 134 ] = xx [
138 ] * xx [ 111 ] - xx [ 175 ] * xx [ 173 ] ; xx [ 136 ] = xx [ 111 ] * xx [
173 ] + xx [ 138 ] * xx [ 175 ] ; xx [ 137 ] = xx [ 111 ] * xx [ 110 ] - xx [
175 ] * xx [ 174 ] ; xx [ 179 ] = xx [ 133 ] ; xx [ 180 ] = xx [ 134 ] ; xx [
181 ] = xx [ 136 ] ; xx [ 182 ] = xx [ 137 ] ; pm_math_quatCompose ( xx + 154
, xx + 179 , xx + 183 ) ; pm_math_quatCompose ( xx + 150 , xx + 183 , xx +
187 ) ; pm_math_quatCompose ( xx + 146 , xx + 187 , xx + 215 ) ; xx [ 191 ] =
xx [ 80 ] * ( xx [ 188 ] * xx [ 190 ] - xx [ 187 ] * xx [ 189 ] ) ; xx [ 192
] = ( xx [ 187 ] * xx [ 188 ] + xx [ 189 ] * xx [ 190 ] ) * xx [ 80 ] ; xx [
193 ] = xx [ 22 ] - ( xx [ 188 ] * xx [ 188 ] + xx [ 189 ] * xx [ 189 ] ) *
xx [ 80 ] ; pm_math_cross3 ( xx + 191 , xx + 84 , xx + 187 ) ;
pm_math_quatXform ( xx + 215 , xx + 187 , xx + 190 ) ; xx [ 215 ] = xx [ 174
] ; xx [ 216 ] = xx [ 138 ] ; xx [ 217 ] = xx [ 173 ] ; xx [ 218 ] = xx [ 110
] ; xx [ 187 ] = xx [ 87 ] * xx [ 175 ] ; xx [ 188 ] = xx [ 111 ] * xx [ 187
] ; xx [ 189 ] = xx [ 90 ] * xx [ 175 ] ; xx [ 193 ] = xx [ 189 ] * xx [ 175
] ; xx [ 198 ] = xx [ 79 ] + xx [ 80 ] * ( xx [ 188 ] + xx [ 193 ] ) - xx [
90 ] ; xx [ 199 ] = xx [ 187 ] * xx [ 175 ] ; xx [ 187 ] = xx [ 111 ] * xx [
189 ] ; xx [ 189 ] = xx [ 87 ] - ( xx [ 199 ] - xx [ 187 ] ) * xx [ 80 ] ; xx
[ 210 ] = - xx [ 198 ] ; xx [ 211 ] = - xx [ 189 ] ; xx [ 212 ] = xx [ 96 ] ;
pm_math_quatXform ( xx + 215 , xx + 210 , xx + 233 ) ; xx [ 200 ] = xx [ 105
] * xx [ 173 ] ; xx [ 236 ] = xx [ 138 ] ; xx [ 237 ] = xx [ 173 ] ; xx [ 238
] = xx [ 110 ] ; xx [ 219 ] = xx [ 104 ] * xx [ 110 ] - xx [ 138 ] * xx [ 105
] ; xx [ 220 ] = xx [ 104 ] * xx [ 173 ] ; xx [ 244 ] = xx [ 200 ] ; xx [ 245
] = xx [ 219 ] ; xx [ 246 ] = - xx [ 220 ] ; pm_math_cross3 ( xx + 236 , xx +
244 , xx + 258 ) ; xx [ 236 ] = xx [ 103 ] + xx [ 104 ] + ( xx [ 200 ] * xx [
174 ] + xx [ 258 ] ) * xx [ 80 ] ; xx [ 103 ] = xx [ 233 ] - xx [ 236 ] ; xx
[ 200 ] = xx [ 108 ] - ( xx [ 174 ] * xx [ 219 ] + xx [ 259 ] ) * xx [ 80 ] ;
xx [ 219 ] = xx [ 234 ] + xx [ 200 ] ; xx [ 233 ] = xx [ 100 ] + xx [ 105 ] +
xx [ 80 ] * ( xx [ 260 ] - xx [ 220 ] * xx [ 174 ] ) ; xx [ 100 ] = xx [ 235
] - xx [ 233 ] ; xx [ 244 ] = xx [ 103 ] ; xx [ 245 ] = xx [ 219 ] ; xx [ 246
] = xx [ 100 ] ; pm_math_quatXform ( xx + 154 , xx + 244 , xx + 258 ) ;
pm_math_quatXform ( xx + 154 , xx + 112 , xx + 244 ) ; xx [ 220 ] = xx [ 102
] + xx [ 244 ] ; xx [ 234 ] = xx [ 258 ] + xx [ 220 ] ; xx [ 235 ] = xx [ 123
] + xx [ 245 ] ; xx [ 237 ] = xx [ 259 ] + xx [ 235 ] ; xx [ 238 ] = xx [ 115
] + xx [ 246 ] ; xx [ 244 ] = xx [ 260 ] + xx [ 238 ] ; xx [ 245 ] = xx [ 234
] ; xx [ 246 ] = xx [ 237 ] ; xx [ 247 ] = xx [ 244 ] ; pm_math_quatXform (
xx + 150 , xx + 245 , xx + 258 ) ; pm_math_quatXform ( xx + 150 , xx + 126 ,
xx + 245 ) ; xx [ 248 ] = xx [ 259 ] + xx [ 246 ] ; xx [ 251 ] = xx [ 258 ] +
xx [ 245 ] ; xx [ 255 ] = xx [ 248 ] * xx [ 35 ] - xx [ 251 ] * xx [ 32 ] ;
xx [ 258 ] = xx [ 131 ] * xx [ 32 ] + xx [ 135 ] * xx [ 35 ] ; xx [ 259 ] =
xx [ 80 ] * xx [ 258 ] * xx [ 35 ] ; xx [ 260 ] = xx [ 80 ] * xx [ 35 ] * xx
[ 255 ] - ( xx [ 248 ] - xx [ 259 ] ) - xx [ 135 ] ; xx [ 248 ] = xx [ 80 ] *
xx [ 258 ] * xx [ 32 ] ; xx [ 258 ] = xx [ 251 ] + xx [ 80 ] * xx [ 32 ] * xx
[ 255 ] + xx [ 248 ] - xx [ 131 ] ; xx [ 251 ] = xx [ 15 ] * xx [ 258 ] ; xx
[ 255 ] = xx [ 15 ] * xx [ 260 ] ; xx [ 261 ] = xx [ 3 ] * xx [ 258 ] - xx [
260 ] * xx [ 7 ] ; xx [ 263 ] = - xx [ 251 ] ; xx [ 264 ] = xx [ 255 ] ; xx [
265 ] = xx [ 261 ] ; pm_math_cross3 ( xx + 139 , xx + 263 , xx + 271 ) ; xx [
283 ] = - ( xx [ 31 ] - xx [ 33 ] ) ; xx [ 284 ] = xx [ 46 ] ; xx [ 285 ] =
xx [ 47 ] ; xx [ 286 ] = xx [ 48 ] ; pm_math_quatCompose ( xx + 283 , xx +
150 , xx + 287 ) ; pm_math_quatCompose ( xx + 287 , xx + 183 , xx + 291 ) ;
xx [ 31 ] = xx [ 4 ] * xx [ 186 ] ; xx [ 33 ] = xx [ 4 ] * xx [ 184 ] + xx [
185 ] ; xx [ 46 ] = xx [ 31 ] ; xx [ 47 ] = xx [ 186 ] ; xx [ 48 ] = - xx [
33 ] ; pm_math_cross3 ( xx + 184 , xx + 46 , xx + 263 ) ; xx [ 46 ] = xx [
183 ] * xx [ 186 ] ; xx [ 300 ] = xx [ 22 ] + ( xx [ 263 ] - xx [ 183 ] * xx
[ 31 ] ) * xx [ 80 ] ; xx [ 301 ] = xx [ 80 ] * ( xx [ 264 ] - xx [ 46 ] ) -
xx [ 4 ] ; xx [ 302 ] = xx [ 80 ] * ( xx [ 265 ] + xx [ 183 ] * xx [ 33 ] ) ;
pm_math_cross3 ( xx + 300 , xx + 84 , xx + 263 ) ; pm_math_quatXform ( xx +
291 , xx + 263 , xx + 300 ) ; xx [ 33 ] = - ( xx [ 244 ] * xx [ 4 ] ) ; xx [
263 ] = xx [ 33 ] ; xx [ 264 ] = - xx [ 244 ] ; xx [ 265 ] = xx [ 237 ] + xx
[ 234 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 150 , xx + 263 , xx + 303 ) ;
pm_math_quatXform ( xx + 150 , xx + 167 , xx + 263 ) ; xx [ 306 ] = xx [ 303
] + xx [ 263 ] ; xx [ 307 ] = xx [ 304 ] + xx [ 264 ] ; xx [ 308 ] = xx [ 305
] + xx [ 265 ] ; pm_math_quatXform ( xx + 283 , xx + 306 , xx + 303 ) ; xx [
47 ] = xx [ 184 ] - xx [ 4 ] * xx [ 185 ] ; xx [ 306 ] = - xx [ 186 ] ; xx [
307 ] = xx [ 31 ] ; xx [ 308 ] = xx [ 47 ] ; pm_math_cross3 ( xx + 184 , xx +
306 , xx + 309 ) ; xx [ 306 ] = xx [ 4 ] + ( xx [ 46 ] + xx [ 309 ] ) * xx [
80 ] ; xx [ 307 ] = xx [ 22 ] + xx [ 80 ] * ( xx [ 310 ] - xx [ 4 ] * xx [ 46
] ) ; xx [ 308 ] = xx [ 80 ] * ( xx [ 311 ] - xx [ 183 ] * xx [ 47 ] ) ;
pm_math_cross3 ( xx + 306 , xx + 84 , xx + 46 ) ; pm_math_quatXform ( xx +
291 , xx + 46 , xx + 306 ) ; xx [ 46 ] = xx [ 244 ] ; xx [ 47 ] = xx [ 33 ] ;
xx [ 48 ] = xx [ 237 ] * xx [ 4 ] - xx [ 234 ] ; pm_math_quatXform ( xx + 150
, xx + 46 , xx + 309 ) ; pm_math_quatXform ( xx + 150 , xx + 176 , xx + 46 )
; xx [ 316 ] = xx [ 309 ] + xx [ 46 ] ; xx [ 317 ] = xx [ 310 ] + xx [ 47 ] ;
xx [ 318 ] = xx [ 311 ] + xx [ 48 ] ; pm_math_quatXform ( xx + 283 , xx + 316
, xx + 309 ) ; xx [ 316 ] = xx [ 80 ] * ( xx [ 184 ] * xx [ 186 ] - xx [ 183
] * xx [ 185 ] ) ; xx [ 317 ] = ( xx [ 183 ] * xx [ 184 ] + xx [ 185 ] * xx [
186 ] ) * xx [ 80 ] ; xx [ 318 ] = xx [ 22 ] - ( xx [ 184 ] * xx [ 184 ] + xx
[ 185 ] * xx [ 185 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 316 , xx + 84 , xx
+ 183 ) ; pm_math_quatXform ( xx + 291 , xx + 183 , xx + 316 ) ; xx [ 183 ] =
xx [ 64 ] ; xx [ 184 ] = xx [ 69 ] ; xx [ 185 ] = xx [ 75 ] ; xx [ 31 ] = xx
[ 234 ] * xx [ 70 ] ; xx [ 33 ] = xx [ 237 ] * xx [ 70 ] ; xx [ 64 ] = xx [
234 ] * xx [ 26 ] + xx [ 68 ] * xx [ 237 ] ; xx [ 291 ] = xx [ 31 ] ; xx [
292 ] = xx [ 33 ] ; xx [ 293 ] = - xx [ 64 ] ; pm_math_cross3 ( xx + 183 , xx
+ 291 , xx + 294 ) ; xx [ 69 ] = xx [ 117 ] * xx [ 70 ] ; xx [ 75 ] = xx [
119 ] * xx [ 70 ] ; xx [ 186 ] = xx [ 117 ] * xx [ 26 ] + xx [ 68 ] * xx [
119 ] ; xx [ 291 ] = xx [ 69 ] ; xx [ 292 ] = xx [ 75 ] ; xx [ 293 ] = - xx [
186 ] ; pm_math_cross3 ( xx + 183 , xx + 291 , xx + 320 ) ; xx [ 244 ] = xx [
80 ] * ( xx [ 320 ] + xx [ 69 ] * xx [ 24 ] ) ; xx [ 69 ] = ( xx [ 75 ] * xx
[ 24 ] + xx [ 321 ] ) * xx [ 80 ] ; xx [ 75 ] = ( xx [ 322 ] - xx [ 186 ] *
xx [ 24 ] ) * xx [ 80 ] ; xx [ 291 ] = xx [ 80 ] * ( xx [ 294 ] + xx [ 31 ] *
xx [ 24 ] ) + xx [ 244 ] - xx [ 237 ] - xx [ 119 ] ; xx [ 292 ] = xx [ 234 ]
+ xx [ 80 ] * ( xx [ 295 ] + xx [ 33 ] * xx [ 24 ] ) + xx [ 69 ] + xx [ 117 ]
; xx [ 293 ] = ( xx [ 296 ] - xx [ 24 ] * xx [ 64 ] ) * xx [ 80 ] + xx [ 75 ]
; pm_math_quatXform ( xx + 283 , xx + 291 , xx + 294 ) ; pm_math_quatCompose
( xx + 287 , xx + 154 , xx + 320 ) ; pm_math_quatCompose ( xx + 320 , xx +
179 , xx + 329 ) ; xx [ 31 ] = xx [ 136 ] * xx [ 136 ] ; xx [ 33 ] = xx [ 137
] * xx [ 137 ] ; xx [ 64 ] = xx [ 136 ] * xx [ 134 ] ; xx [ 179 ] = xx [ 133
] * xx [ 137 ] ; xx [ 180 ] = xx [ 133 ] * xx [ 136 ] ; xx [ 181 ] = xx [ 134
] * xx [ 137 ] ; xx [ 291 ] = xx [ 22 ] - ( xx [ 31 ] + xx [ 33 ] ) * xx [ 80
] ; xx [ 292 ] = xx [ 80 ] * ( xx [ 64 ] - xx [ 179 ] ) ; xx [ 293 ] = ( xx [
180 ] + xx [ 181 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 291 , xx + 84 , xx +
333 ) ; pm_math_quatXform ( xx + 329 , xx + 333 , xx + 291 ) ; xx [ 333 ] =
xx [ 42 ] ; xx [ 334 ] = xx [ 82 ] ; xx [ 335 ] = xx [ 99 ] ; xx [ 82 ] = xx
[ 44 ] * xx [ 219 ] ; xx [ 99 ] = xx [ 83 ] * xx [ 100 ] ; xx [ 182 ] = xx [
82 ] + xx [ 99 ] ; xx [ 186 ] = xx [ 219 ] * xx [ 42 ] ; xx [ 234 ] = xx [
100 ] * xx [ 42 ] ; xx [ 336 ] = - xx [ 182 ] ; xx [ 337 ] = - xx [ 186 ] ;
xx [ 338 ] = - xx [ 234 ] ; pm_math_cross3 ( xx + 333 , xx + 336 , xx + 339 )
; xx [ 237 ] = xx [ 44 ] * xx [ 73 ] ; xx [ 274 ] = xx [ 83 ] * xx [ 74 ] ;
xx [ 278 ] = xx [ 237 ] - xx [ 274 ] ; xx [ 279 ] = xx [ 73 ] * xx [ 42 ] ;
xx [ 313 ] = xx [ 74 ] * xx [ 42 ] ; xx [ 336 ] = xx [ 278 ] ; xx [ 337 ] =
xx [ 279 ] ; xx [ 338 ] = - xx [ 313 ] ; pm_math_cross3 ( xx + 333 , xx + 336
, xx + 342 ) ; xx [ 336 ] = ( xx [ 40 ] * xx [ 278 ] + xx [ 342 ] ) * xx [ 80
] ; xx [ 278 ] = xx [ 80 ] * ( xx [ 343 ] + xx [ 279 ] * xx [ 40 ] ) ; xx [
279 ] = ( xx [ 344 ] - xx [ 313 ] * xx [ 40 ] ) * xx [ 80 ] ; xx [ 342 ] = xx
[ 80 ] * ( xx [ 339 ] - xx [ 182 ] * xx [ 40 ] ) + xx [ 336 ] ; xx [ 343 ] =
xx [ 80 ] * ( xx [ 340 ] - xx [ 186 ] * xx [ 40 ] ) + xx [ 278 ] - xx [ 100 ]
- xx [ 74 ] ; xx [ 344 ] = xx [ 219 ] + xx [ 80 ] * ( xx [ 341 ] - xx [ 234 ]
* xx [ 40 ] ) + xx [ 279 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 287 , xx +
342 , xx + 337 ) ; xx [ 182 ] = xx [ 134 ] * xx [ 134 ] ; xx [ 186 ] = xx [
136 ] * xx [ 137 ] ; xx [ 136 ] = xx [ 133 ] * xx [ 134 ] ; xx [ 340 ] = ( xx
[ 179 ] + xx [ 64 ] ) * xx [ 80 ] ; xx [ 341 ] = xx [ 22 ] - ( xx [ 33 ] + xx
[ 182 ] ) * xx [ 80 ] ; xx [ 342 ] = xx [ 80 ] * ( xx [ 186 ] - xx [ 136 ] )
; pm_math_cross3 ( xx + 340 , xx + 84 , xx + 343 ) ; pm_math_quatXform ( xx +
329 , xx + 343 , xx + 340 ) ; xx [ 33 ] = xx [ 44 ] * xx [ 103 ] ; xx [ 64 ]
= xx [ 103 ] * xx [ 42 ] ; xx [ 133 ] = xx [ 64 ] - xx [ 99 ] ; xx [ 99 ] =
xx [ 44 ] * xx [ 100 ] ; xx [ 343 ] = xx [ 33 ] ; xx [ 344 ] = xx [ 133 ] ;
xx [ 345 ] = xx [ 99 ] ; pm_math_cross3 ( xx + 333 , xx + 343 , xx + 346 ) ;
xx [ 134 ] = xx [ 44 ] * xx [ 72 ] ; xx [ 137 ] = xx [ 72 ] * xx [ 42 ] ; xx
[ 179 ] = xx [ 274 ] - xx [ 137 ] ; xx [ 234 ] = xx [ 44 ] * xx [ 74 ] ; xx [
343 ] = xx [ 134 ] ; xx [ 344 ] = - xx [ 179 ] ; xx [ 345 ] = xx [ 234 ] ;
pm_math_cross3 ( xx + 333 , xx + 343 , xx + 349 ) ; xx [ 274 ] = xx [ 80 ] *
( xx [ 349 ] + xx [ 134 ] * xx [ 40 ] ) ; xx [ 134 ] = xx [ 80 ] * ( xx [ 350
] - xx [ 179 ] * xx [ 40 ] ) ; xx [ 179 ] = ( xx [ 234 ] * xx [ 40 ] + xx [
351 ] ) * xx [ 80 ] ; xx [ 343 ] = xx [ 100 ] + ( xx [ 33 ] * xx [ 40 ] + xx
[ 346 ] ) * xx [ 80 ] + xx [ 274 ] + xx [ 74 ] ; xx [ 344 ] = ( xx [ 133 ] *
xx [ 40 ] + xx [ 347 ] ) * xx [ 80 ] + xx [ 134 ] ; xx [ 345 ] = ( xx [ 99 ]
* xx [ 40 ] + xx [ 348 ] ) * xx [ 80 ] + xx [ 179 ] - xx [ 103 ] - xx [ 72 ]
; pm_math_quatXform ( xx + 287 , xx + 343 , xx + 346 ) ; xx [ 343 ] = xx [ 80
] * ( xx [ 181 ] - xx [ 180 ] ) ; xx [ 344 ] = ( xx [ 136 ] + xx [ 186 ] ) *
xx [ 80 ] ; xx [ 345 ] = xx [ 22 ] - ( xx [ 182 ] + xx [ 31 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 343 , xx + 84 , xx + 180 ) ; pm_math_quatXform ( xx +
329 , xx + 180 , xx + 343 ) ; xx [ 31 ] = xx [ 83 ] * xx [ 103 ] ; xx [ 33 ]
= xx [ 83 ] * xx [ 219 ] ; xx [ 99 ] = xx [ 64 ] - xx [ 82 ] ; xx [ 180 ] =
xx [ 31 ] ; xx [ 181 ] = xx [ 33 ] ; xx [ 182 ] = xx [ 99 ] ; pm_math_cross3
( xx + 333 , xx + 180 , xx + 329 ) ; xx [ 64 ] = xx [ 83 ] * xx [ 72 ] ; xx [
82 ] = xx [ 83 ] * xx [ 73 ] ; xx [ 100 ] = xx [ 137 ] + xx [ 237 ] ; xx [
180 ] = xx [ 64 ] ; xx [ 181 ] = - xx [ 82 ] ; xx [ 182 ] = xx [ 100 ] ;
pm_math_cross3 ( xx + 333 , xx + 180 , xx + 349 ) ; xx [ 133 ] = ( xx [ 64 ]
* xx [ 40 ] + xx [ 349 ] ) * xx [ 80 ] ; xx [ 64 ] = xx [ 80 ] * ( xx [ 350 ]
- xx [ 82 ] * xx [ 40 ] ) ; xx [ 82 ] = ( xx [ 100 ] * xx [ 40 ] + xx [ 351 ]
) * xx [ 80 ] ; xx [ 180 ] = ( xx [ 31 ] * xx [ 40 ] + xx [ 329 ] ) * xx [ 80
] + xx [ 133 ] - xx [ 219 ] + xx [ 73 ] ; xx [ 181 ] = xx [ 103 ] + ( xx [ 33
] * xx [ 40 ] + xx [ 330 ] ) * xx [ 80 ] + xx [ 64 ] + xx [ 72 ] ; xx [ 182 ]
= ( xx [ 99 ] * xx [ 40 ] + xx [ 331 ] ) * xx [ 80 ] + xx [ 82 ] ;
pm_math_quatXform ( xx + 287 , xx + 180 , xx + 329 ) ; pm_math_quatCompose (
xx + 320 , xx + 215 , xx + 349 ) ; xx [ 31 ] = xx [ 111 ] * xx [ 349 ] + xx [
352 ] * xx [ 175 ] ; xx [ 33 ] = xx [ 111 ] * xx [ 350 ] - xx [ 351 ] * xx [
175 ] ; xx [ 99 ] = xx [ 111 ] * xx [ 351 ] + xx [ 350 ] * xx [ 175 ] ; xx [
100 ] = xx [ 111 ] * xx [ 352 ] - xx [ 349 ] * xx [ 175 ] ; xx [ 353 ] = xx [
31 ] ; xx [ 354 ] = xx [ 33 ] ; xx [ 355 ] = xx [ 99 ] ; xx [ 356 ] = xx [
100 ] ; xx [ 103 ] = xx [ 57 ] * xx [ 175 ] ; xx [ 136 ] = xx [ 80 ] * xx [
111 ] * xx [ 103 ] ; xx [ 111 ] = xx [ 80 ] * xx [ 103 ] * xx [ 175 ] - xx [
57 ] ; xx [ 180 ] = xx [ 74 ] * xx [ 136 ] + xx [ 55 ] ; xx [ 181 ] = xx [
106 ] + xx [ 74 ] * xx [ 111 ] ; xx [ 182 ] = xx [ 73 ] * xx [ 111 ] - xx [
72 ] * xx [ 136 ] ; pm_math_quatXform ( xx + 353 , xx + 180 , xx + 357 ) ; xx
[ 180 ] = - ( xx [ 63 ] * xx [ 189 ] ) ; xx [ 181 ] = xx [ 63 ] * xx [ 198 ]
- xx [ 60 ] ; xx [ 182 ] = xx [ 57 ] * xx [ 189 ] ; pm_math_quatXform ( xx +
215 , xx + 180 , xx + 360 ) ; xx [ 103 ] = xx [ 67 ] * xx [ 110 ] ; xx [ 111
] = xx [ 138 ] * xx [ 67 ] ; xx [ 136 ] = xx [ 80 ] * ( xx [ 103 ] * xx [ 174
] - xx [ 111 ] * xx [ 173 ] ) ; xx [ 137 ] = ( xx [ 103 ] * xx [ 110 ] + xx [
138 ] * xx [ 111 ] ) * xx [ 80 ] ; xx [ 175 ] = ( xx [ 111 ] * xx [ 174 ] +
xx [ 103 ] * xx [ 173 ] ) * xx [ 80 ] ; xx [ 180 ] = xx [ 360 ] + xx [ 136 ]
; xx [ 181 ] = xx [ 361 ] + xx [ 137 ] - xx [ 67 ] ; xx [ 182 ] = xx [ 362 ]
- xx [ 175 ] ; pm_math_quatXform ( xx + 320 , xx + 180 , xx + 360 ) ; xx [
180 ] = xx [ 33 ] ; xx [ 181 ] = xx [ 99 ] ; xx [ 182 ] = xx [ 100 ] ; xx [
103 ] = xx [ 72 ] * xx [ 100 ] ; xx [ 111 ] = xx [ 73 ] * xx [ 100 ] ; xx [
100 ] = xx [ 72 ] * xx [ 33 ] - xx [ 99 ] * xx [ 73 ] ; xx [ 363 ] = - xx [
103 ] ; xx [ 364 ] = xx [ 111 ] ; xx [ 365 ] = xx [ 100 ] ; pm_math_cross3 (
xx + 180 , xx + 363 , xx + 369 ) ; xx [ 33 ] = xx [ 80 ] * ( xx [ 199 ] - xx
[ 187 ] ) - xx [ 87 ] ; xx [ 99 ] = ( xx [ 188 ] + xx [ 193 ] ) * xx [ 80 ] -
xx [ 90 ] ; xx [ 180 ] = xx [ 352 ] * xx [ 99 ] ; xx [ 181 ] = xx [ 33 ] * xx
[ 352 ] ; xx [ 182 ] = xx [ 350 ] * xx [ 99 ] - xx [ 33 ] * xx [ 351 ] ; xx [
186 ] = - xx [ 180 ] ; xx [ 187 ] = xx [ 181 ] ; xx [ 188 ] = xx [ 182 ] ;
pm_math_cross3 ( xx + 350 , xx + 186 , xx + 363 ) ; xx [ 186 ] = state [ 66 ]
+ xx [ 776 ] ; xx [ 187 ] = xx [ 186 ] * xx [ 2 ] ; xx [ 188 ] = cos ( xx [
187 ] ) ; xx [ 189 ] = xx [ 188 ] * xx [ 125 ] ; xx [ 193 ] = sin ( xx [ 187
] ) ; xx [ 187 ] = xx [ 225 ] * xx [ 193 ] ; xx [ 198 ] = - ( xx [ 241 ] * xx
[ 188 ] - xx [ 193 ] * xx [ 242 ] ) ; xx [ 199 ] = xx [ 241 ] * xx [ 193 ] +
xx [ 188 ] * xx [ 242 ] ; xx [ 219 ] = xx [ 225 ] * xx [ 188 ] - xx [ 193 ] *
xx [ 125 ] ; xx [ 375 ] = - ( xx [ 189 ] + xx [ 187 ] ) ; xx [ 376 ] = xx [
198 ] ; xx [ 377 ] = xx [ 199 ] ; xx [ 378 ] = xx [ 219 ] ; xx [ 380 ] = xx [
250 ] ; xx [ 381 ] = xx [ 253 ] ; xx [ 382 ] = xx [ 252 ] ; xx [ 383 ] = xx [
249 ] ; pm_math_quatDeriv ( xx + 380 , xx + 777 , xx + 384 ) ; xx [ 234 ] =
xx [ 249 ] + xx [ 387 ] ; xx [ 237 ] = xx [ 250 ] + xx [ 384 ] ; xx [ 249 ] =
xx [ 253 ] + xx [ 385 ] ; xx [ 250 ] = xx [ 252 ] + xx [ 386 ] ; xx [ 252 ] =
sqrt ( xx [ 237 ] * xx [ 237 ] + xx [ 249 ] * xx [ 249 ] + xx [ 250 ] * xx [
250 ] + xx [ 234 ] * xx [ 234 ] ) ; if ( xx [ 28 ] > xx [ 252 ] ) xx [ 252 ]
= xx [ 28 ] ; xx [ 253 ] = xx [ 234 ] / xx [ 252 ] ; xx [ 234 ] = xx [ 237 ]
/ xx [ 252 ] ; xx [ 237 ] = xx [ 21 ] * xx [ 253 ] - xx [ 25 ] * xx [ 234 ] ;
xx [ 313 ] = xx [ 250 ] / xx [ 252 ] ; xx [ 250 ] = xx [ 249 ] / xx [ 252 ] ;
xx [ 249 ] = xx [ 21 ] * xx [ 313 ] + xx [ 25 ] * xx [ 250 ] ; xx [ 252 ] = -
xx [ 249 ] ; xx [ 332 ] = xx [ 25 ] * xx [ 313 ] - xx [ 21 ] * xx [ 250 ] ;
xx [ 366 ] = - xx [ 332 ] ; xx [ 367 ] = xx [ 21 ] * xx [ 234 ] + xx [ 25 ] *
xx [ 253 ] ; xx [ 372 ] = - xx [ 367 ] ; xx [ 380 ] = xx [ 237 ] ; xx [ 381 ]
= xx [ 252 ] ; xx [ 382 ] = xx [ 366 ] ; xx [ 383 ] = xx [ 372 ] ;
pm_math_quatCompose ( xx + 375 , xx + 380 , xx + 384 ) ; xx [ 375 ] = ( xx [
332 ] * xx [ 237 ] + xx [ 249 ] * xx [ 367 ] ) * xx [ 80 ] ; xx [ 376 ] = xx
[ 80 ] * ( xx [ 332 ] * xx [ 367 ] - xx [ 249 ] * xx [ 237 ] ) ; xx [ 377 ] =
xx [ 22 ] - ( xx [ 249 ] * xx [ 249 ] + xx [ 332 ] * xx [ 332 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 375 , xx + 267 , xx + 388 ) ; pm_math_quatXform ( xx
+ 384 , xx + 388 , xx + 375 ) ; pm_math_quatXform ( xx + 380 , xx + 126 , xx
+ 384 ) ; xx [ 378 ] = xx [ 385 ] * xx [ 193 ] - xx [ 188 ] * xx [ 384 ] ; xx
[ 387 ] = xx [ 266 ] * xx [ 193 ] - xx [ 270 ] * xx [ 188 ] ; xx [ 388 ] = xx
[ 80 ] * xx [ 193 ] * xx [ 378 ] - ( xx [ 385 ] + xx [ 80 ] * xx [ 387 ] * xx
[ 193 ] ) + xx [ 266 ] ; xx [ 389 ] = xx [ 384 ] + xx [ 80 ] * xx [ 188 ] *
xx [ 378 ] - xx [ 80 ] * xx [ 387 ] * xx [ 188 ] - xx [ 270 ] ; xx [ 378 ] =
xx [ 389 ] * xx [ 242 ] ; xx [ 387 ] = xx [ 388 ] * xx [ 242 ] ; xx [ 390 ] =
xx [ 389 ] * xx [ 125 ] + xx [ 225 ] * xx [ 388 ] ; xx [ 391 ] = xx [ 378 ] ;
xx [ 392 ] = - xx [ 387 ] ; xx [ 393 ] = - xx [ 390 ] ; pm_math_cross3 ( xx +
275 , xx + 391 , xx + 394 ) ; xx [ 402 ] = - ( xx [ 187 ] + xx [ 189 ] ) ; xx
[ 403 ] = xx [ 198 ] ; xx [ 404 ] = xx [ 199 ] ; xx [ 405 ] = xx [ 219 ] ;
pm_math_quatCompose ( xx + 402 , xx + 380 , xx + 416 ) ; pm_math_quatXform (
xx + 416 , xx + 280 , xx + 275 ) ; pm_math_quatXform ( xx + 380 , xx + 167 ,
xx + 391 ) ; pm_math_quatXform ( xx + 402 , xx + 391 , xx + 406 ) ;
pm_math_quatXform ( xx + 416 , xx + 297 , xx + 391 ) ; pm_math_quatXform ( xx
+ 380 , xx + 176 , xx + 420 ) ; pm_math_quatXform ( xx + 402 , xx + 420 , xx
+ 380 ) ; xx [ 187 ] = xx [ 102 ] * xx [ 419 ] ; xx [ 189 ] = xx [ 102 ] * xx
[ 417 ] + xx [ 123 ] * xx [ 418 ] ; xx [ 420 ] = - xx [ 187 ] ; xx [ 421 ] =
- ( xx [ 123 ] * xx [ 419 ] ) ; xx [ 422 ] = xx [ 189 ] ; pm_math_cross3 ( xx
+ 417 , xx + 420 , xx + 423 ) ; xx [ 420 ] = xx [ 252 ] ; xx [ 421 ] = xx [
366 ] ; xx [ 422 ] = xx [ 372 ] ; xx [ 198 ] = xx [ 117 ] * xx [ 367 ] ; xx [
199 ] = xx [ 119 ] * xx [ 367 ] ; xx [ 219 ] = xx [ 117 ] * xx [ 249 ] + xx [
332 ] * xx [ 119 ] ; xx [ 426 ] = xx [ 198 ] ; xx [ 427 ] = xx [ 199 ] ; xx [
428 ] = - xx [ 219 ] ; pm_math_cross3 ( xx + 420 , xx + 426 , xx + 429 ) ; xx
[ 420 ] = xx [ 80 ] * ( xx [ 429 ] + xx [ 198 ] * xx [ 237 ] ) - xx [ 119 ] ;
xx [ 421 ] = xx [ 117 ] + ( xx [ 199 ] * xx [ 237 ] + xx [ 430 ] ) * xx [ 80
] ; xx [ 422 ] = ( xx [ 431 ] - xx [ 219 ] * xx [ 237 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 402 , xx + 420 , xx + 426 ) ; xx [ 198 ] = state [
45 ] + xx [ 768 ] ; xx [ 199 ] = xx [ 198 ] * xx [ 2 ] ; xx [ 219 ] = sin (
xx [ 199 ] ) ; xx [ 237 ] = xx [ 62 ] * xx [ 219 ] ; xx [ 249 ] = cos ( xx [
199 ] ) ; xx [ 199 ] = xx [ 62 ] * xx [ 249 ] ; xx [ 252 ] = xx [ 237 ] - xx
[ 199 ] ; xx [ 332 ] = xx [ 56 ] * xx [ 249 ] ; xx [ 249 ] = xx [ 56 ] * xx [
219 ] ; xx [ 219 ] = xx [ 332 ] + xx [ 249 ] ; xx [ 366 ] = - xx [ 219 ] ; xx
[ 367 ] = xx [ 249 ] - xx [ 332 ] ; xx [ 249 ] = xx [ 237 ] + xx [ 199 ] ; xx
[ 199 ] = - xx [ 249 ] ; xx [ 429 ] = xx [ 252 ] ; xx [ 430 ] = xx [ 366 ] ;
xx [ 431 ] = xx [ 367 ] ; xx [ 432 ] = xx [ 199 ] ; pm_math_quatCompose ( xx
+ 215 , xx + 429 , xx + 433 ) ; pm_math_quatCompose ( xx + 154 , xx + 433 ,
xx + 437 ) ; pm_math_quatCompose ( xx + 150 , xx + 437 , xx + 441 ) ;
pm_math_quatCompose ( xx + 146 , xx + 441 , xx + 447 ) ; xx [ 420 ] = xx [ 80
] * ( xx [ 442 ] * xx [ 444 ] - xx [ 441 ] * xx [ 443 ] ) ; xx [ 421 ] = ( xx
[ 441 ] * xx [ 442 ] + xx [ 443 ] * xx [ 444 ] ) * xx [ 80 ] ; xx [ 422 ] =
xx [ 22 ] - ( xx [ 442 ] * xx [ 442 ] + xx [ 443 ] * xx [ 443 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 420 , xx + 84 , xx + 441 ) ; pm_math_quatXform ( xx +
447 , xx + 441 , xx + 420 ) ; pm_math_quatXform ( xx + 429 , xx + 324 , xx +
441 ) ; xx [ 237 ] = xx [ 243 ] - xx [ 441 ] ; xx [ 332 ] = xx [ 262 ] - xx [
443 ] ; xx [ 447 ] = xx [ 237 ] ; xx [ 448 ] = - xx [ 442 ] ; xx [ 449 ] = xx
[ 332 ] ; pm_math_quatXform ( xx + 215 , xx + 447 , xx + 452 ) ; xx [ 372 ] =
xx [ 452 ] - xx [ 236 ] ; xx [ 383 ] = xx [ 453 ] + xx [ 200 ] ; xx [ 397 ] =
xx [ 454 ] - xx [ 233 ] ; xx [ 452 ] = xx [ 372 ] ; xx [ 453 ] = xx [ 383 ] ;
xx [ 454 ] = xx [ 397 ] ; pm_math_quatXform ( xx + 154 , xx + 452 , xx + 459
) ; xx [ 398 ] = xx [ 459 ] + xx [ 220 ] ; xx [ 411 ] = xx [ 460 ] + xx [ 235
] ; xx [ 412 ] = xx [ 461 ] + xx [ 238 ] ; xx [ 452 ] = xx [ 398 ] ; xx [ 453
] = xx [ 411 ] ; xx [ 454 ] = xx [ 412 ] ; pm_math_quatXform ( xx + 150 , xx
+ 452 , xx + 459 ) ; xx [ 441 ] = xx [ 460 ] + xx [ 246 ] ; xx [ 443 ] = xx [
459 ] + xx [ 245 ] ; xx [ 444 ] = xx [ 441 ] * xx [ 35 ] - xx [ 443 ] * xx [
32 ] ; xx [ 450 ] = xx [ 80 ] * xx [ 35 ] * xx [ 444 ] - ( xx [ 441 ] - xx [
259 ] ) - xx [ 135 ] ; xx [ 441 ] = xx [ 443 ] + xx [ 80 ] * xx [ 32 ] * xx [
444 ] + xx [ 248 ] - xx [ 131 ] ; xx [ 443 ] = xx [ 15 ] * xx [ 441 ] ; xx [
444 ] = xx [ 15 ] * xx [ 450 ] ; xx [ 452 ] = xx [ 3 ] * xx [ 441 ] - xx [
450 ] * xx [ 7 ] ; xx [ 453 ] = - xx [ 443 ] ; xx [ 454 ] = xx [ 444 ] ; xx [
455 ] = xx [ 452 ] ; pm_math_cross3 ( xx + 139 , xx + 453 , xx + 459 ) ;
pm_math_quatCompose ( xx + 287 , xx + 437 , xx + 464 ) ; xx [ 453 ] = xx [ 4
] * xx [ 440 ] ; xx [ 454 ] = xx [ 4 ] * xx [ 438 ] + xx [ 439 ] ; xx [ 468 ]
= xx [ 453 ] ; xx [ 469 ] = xx [ 440 ] ; xx [ 470 ] = - xx [ 454 ] ;
pm_math_cross3 ( xx + 438 , xx + 468 , xx + 474 ) ; xx [ 455 ] = xx [ 437 ] *
xx [ 440 ] ; xx [ 468 ] = xx [ 22 ] + ( xx [ 474 ] - xx [ 437 ] * xx [ 453 ]
) * xx [ 80 ] ; xx [ 469 ] = xx [ 80 ] * ( xx [ 475 ] - xx [ 455 ] ) - xx [ 4
] ; xx [ 470 ] = xx [ 80 ] * ( xx [ 476 ] + xx [ 437 ] * xx [ 454 ] ) ;
pm_math_cross3 ( xx + 468 , xx + 84 , xx + 474 ) ; pm_math_quatXform ( xx +
464 , xx + 474 , xx + 468 ) ; xx [ 454 ] = - ( xx [ 412 ] * xx [ 4 ] ) ; xx [
474 ] = xx [ 454 ] ; xx [ 475 ] = - xx [ 412 ] ; xx [ 476 ] = xx [ 411 ] + xx
[ 398 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 150 , xx + 474 , xx + 477 ) ;
xx [ 474 ] = xx [ 477 ] + xx [ 263 ] ; xx [ 475 ] = xx [ 478 ] + xx [ 264 ] ;
xx [ 476 ] = xx [ 479 ] + xx [ 265 ] ; pm_math_quatXform ( xx + 283 , xx +
474 , xx + 477 ) ; xx [ 471 ] = xx [ 438 ] - xx [ 4 ] * xx [ 439 ] ; xx [ 474
] = - xx [ 440 ] ; xx [ 475 ] = xx [ 453 ] ; xx [ 476 ] = xx [ 471 ] ;
pm_math_cross3 ( xx + 438 , xx + 474 , xx + 480 ) ; xx [ 474 ] = xx [ 4 ] + (
xx [ 455 ] + xx [ 480 ] ) * xx [ 80 ] ; xx [ 475 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 481 ] - xx [ 4 ] * xx [ 455 ] ) ; xx [ 476 ] = xx [ 80 ] * ( xx [ 482
] - xx [ 437 ] * xx [ 471 ] ) ; pm_math_cross3 ( xx + 474 , xx + 84 , xx +
480 ) ; pm_math_quatXform ( xx + 464 , xx + 480 , xx + 474 ) ; xx [ 480 ] =
xx [ 412 ] ; xx [ 481 ] = xx [ 454 ] ; xx [ 482 ] = xx [ 411 ] * xx [ 4 ] -
xx [ 398 ] ; pm_math_quatXform ( xx + 150 , xx + 480 , xx + 453 ) ; xx [ 480
] = xx [ 453 ] + xx [ 46 ] ; xx [ 481 ] = xx [ 454 ] + xx [ 47 ] ; xx [ 482 ]
= xx [ 455 ] + xx [ 48 ] ; pm_math_quatXform ( xx + 283 , xx + 480 , xx + 453
) ; xx [ 480 ] = xx [ 80 ] * ( xx [ 438 ] * xx [ 440 ] - xx [ 437 ] * xx [
439 ] ) ; xx [ 481 ] = ( xx [ 437 ] * xx [ 438 ] + xx [ 439 ] * xx [ 440 ] )
* xx [ 80 ] ; xx [ 482 ] = xx [ 22 ] - ( xx [ 438 ] * xx [ 438 ] + xx [ 439 ]
* xx [ 439 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 480 , xx + 84 , xx + 437 )
; pm_math_quatXform ( xx + 464 , xx + 437 , xx + 480 ) ; xx [ 412 ] = xx [
398 ] * xx [ 70 ] ; xx [ 437 ] = xx [ 411 ] * xx [ 70 ] ; xx [ 438 ] = xx [
398 ] * xx [ 26 ] + xx [ 411 ] * xx [ 68 ] ; xx [ 464 ] = xx [ 412 ] ; xx [
465 ] = xx [ 437 ] ; xx [ 466 ] = - xx [ 438 ] ; pm_math_cross3 ( xx + 183 ,
xx + 464 , xx + 483 ) ; xx [ 464 ] = xx [ 80 ] * ( xx [ 483 ] + xx [ 412 ] *
xx [ 24 ] ) + xx [ 244 ] - xx [ 411 ] - xx [ 119 ] ; xx [ 465 ] = xx [ 398 ]
+ xx [ 80 ] * ( xx [ 484 ] + xx [ 437 ] * xx [ 24 ] ) + xx [ 69 ] + xx [ 117
] ; xx [ 466 ] = ( xx [ 485 ] - xx [ 438 ] * xx [ 24 ] ) * xx [ 80 ] + xx [
75 ] ; pm_math_quatXform ( xx + 283 , xx + 464 , xx + 437 ) ;
pm_math_quatCompose ( xx + 320 , xx + 433 , xx + 464 ) ; xx [ 398 ] = xx [
435 ] * xx [ 435 ] ; xx [ 411 ] = xx [ 436 ] * xx [ 436 ] ; xx [ 412 ] = xx [
434 ] * xx [ 435 ] ; xx [ 440 ] = xx [ 433 ] * xx [ 436 ] ; xx [ 471 ] = xx [
433 ] * xx [ 435 ] ; xx [ 472 ] = xx [ 434 ] * xx [ 436 ] ; xx [ 483 ] = xx [
22 ] - ( xx [ 398 ] + xx [ 411 ] ) * xx [ 80 ] ; xx [ 484 ] = xx [ 80 ] * (
xx [ 412 ] - xx [ 440 ] ) ; xx [ 485 ] = ( xx [ 471 ] + xx [ 472 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 483 , xx + 84 , xx + 486 ) ; pm_math_quatXform (
xx + 464 , xx + 486 , xx + 483 ) ; xx [ 486 ] = xx [ 383 ] * xx [ 44 ] ; xx [
487 ] = xx [ 397 ] * xx [ 83 ] ; xx [ 488 ] = xx [ 486 ] + xx [ 487 ] ; xx [
489 ] = xx [ 383 ] * xx [ 42 ] ; xx [ 490 ] = xx [ 397 ] * xx [ 42 ] ; xx [
491 ] = - xx [ 488 ] ; xx [ 492 ] = - xx [ 489 ] ; xx [ 493 ] = - xx [ 490 ]
; pm_math_cross3 ( xx + 333 , xx + 491 , xx + 494 ) ; xx [ 491 ] = xx [ 80 ]
* ( xx [ 494 ] - xx [ 488 ] * xx [ 40 ] ) + xx [ 336 ] ; xx [ 492 ] = xx [ 80
] * ( xx [ 495 ] - xx [ 489 ] * xx [ 40 ] ) + xx [ 278 ] - xx [ 397 ] - xx [
74 ] ; xx [ 493 ] = xx [ 383 ] + xx [ 80 ] * ( xx [ 496 ] - xx [ 490 ] * xx [
40 ] ) + xx [ 279 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 287 , xx + 491 ,
xx + 488 ) ; xx [ 491 ] = xx [ 434 ] * xx [ 434 ] ; xx [ 492 ] = xx [ 435 ] *
xx [ 436 ] ; xx [ 435 ] = xx [ 433 ] * xx [ 434 ] ; xx [ 493 ] = ( xx [ 440 ]
+ xx [ 412 ] ) * xx [ 80 ] ; xx [ 494 ] = xx [ 22 ] - ( xx [ 411 ] + xx [ 491
] ) * xx [ 80 ] ; xx [ 495 ] = xx [ 80 ] * ( xx [ 492 ] - xx [ 435 ] ) ;
pm_math_cross3 ( xx + 493 , xx + 84 , xx + 496 ) ; pm_math_quatXform ( xx +
464 , xx + 496 , xx + 493 ) ; xx [ 411 ] = xx [ 372 ] * xx [ 44 ] ; xx [ 412
] = xx [ 372 ] * xx [ 42 ] ; xx [ 433 ] = xx [ 412 ] - xx [ 487 ] ; xx [ 434
] = xx [ 397 ] * xx [ 44 ] ; xx [ 496 ] = xx [ 411 ] ; xx [ 497 ] = xx [ 433
] ; xx [ 498 ] = xx [ 434 ] ; pm_math_cross3 ( xx + 333 , xx + 496 , xx + 503
) ; xx [ 496 ] = xx [ 397 ] + ( xx [ 411 ] * xx [ 40 ] + xx [ 503 ] ) * xx [
80 ] + xx [ 274 ] + xx [ 74 ] ; xx [ 497 ] = ( xx [ 433 ] * xx [ 40 ] + xx [
504 ] ) * xx [ 80 ] + xx [ 134 ] ; xx [ 498 ] = ( xx [ 434 ] * xx [ 40 ] + xx
[ 505 ] ) * xx [ 80 ] + xx [ 179 ] - xx [ 372 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 287 , xx + 496 , xx + 503 ) ; xx [ 496 ] = xx [ 80 ]
* ( xx [ 472 ] - xx [ 471 ] ) ; xx [ 497 ] = ( xx [ 435 ] + xx [ 492 ] ) * xx
[ 80 ] ; xx [ 498 ] = xx [ 22 ] - ( xx [ 491 ] + xx [ 398 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 496 , xx + 84 , xx + 433 ) ; pm_math_quatXform ( xx +
464 , xx + 433 , xx + 496 ) ; xx [ 397 ] = xx [ 372 ] * xx [ 83 ] ; xx [ 398
] = xx [ 383 ] * xx [ 83 ] ; xx [ 411 ] = xx [ 412 ] - xx [ 486 ] ; xx [ 433
] = xx [ 397 ] ; xx [ 434 ] = xx [ 398 ] ; xx [ 435 ] = xx [ 411 ] ;
pm_math_cross3 ( xx + 333 , xx + 433 , xx + 464 ) ; xx [ 433 ] = ( xx [ 397 ]
* xx [ 40 ] + xx [ 464 ] ) * xx [ 80 ] + xx [ 133 ] - xx [ 383 ] + xx [ 73 ]
; xx [ 434 ] = xx [ 372 ] + ( xx [ 398 ] * xx [ 40 ] + xx [ 465 ] ) * xx [ 80
] + xx [ 64 ] + xx [ 72 ] ; xx [ 435 ] = ( xx [ 411 ] * xx [ 40 ] + xx [ 466
] ) * xx [ 80 ] + xx [ 82 ] ; pm_math_quatXform ( xx + 287 , xx + 433 , xx +
464 ) ; pm_math_quatCompose ( xx + 349 , xx + 429 , xx + 433 ) ; xx [ 429 ] =
xx [ 366 ] ; xx [ 430 ] = xx [ 367 ] ; xx [ 431 ] = xx [ 199 ] ; xx [ 199 ] =
xx [ 63 ] * xx [ 367 ] ; xx [ 366 ] = xx [ 249 ] * xx [ 57 ] - xx [ 219 ] *
xx [ 63 ] ; xx [ 372 ] = xx [ 57 ] * xx [ 367 ] ; xx [ 507 ] = - xx [ 199 ] ;
xx [ 508 ] = xx [ 366 ] ; xx [ 509 ] = xx [ 372 ] ; pm_math_cross3 ( xx + 429
, xx + 507 , xx + 513 ) ; xx [ 507 ] = xx [ 80 ] * ( xx [ 513 ] + xx [ 199 ]
* xx [ 252 ] ) - xx [ 57 ] ; xx [ 508 ] = xx [ 80 ] * ( xx [ 514 ] - xx [ 366
] * xx [ 252 ] ) ; xx [ 509 ] = ( xx [ 515 ] - xx [ 372 ] * xx [ 252 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 507 , xx + 84 , xx + 513 ) ;
pm_math_quatXform ( xx + 433 , xx + 513 , xx + 507 ) ; xx [ 513 ] = - ( xx [
63 ] * xx [ 442 ] ) ; xx [ 514 ] = xx [ 57 ] * xx [ 332 ] - xx [ 63 ] * xx [
237 ] ; xx [ 515 ] = xx [ 57 ] * xx [ 442 ] ; pm_math_quatXform ( xx + 215 ,
xx + 513 , xx + 516 ) ; xx [ 513 ] = xx [ 516 ] + xx [ 136 ] ; xx [ 514 ] =
xx [ 517 ] + xx [ 137 ] - xx [ 67 ] ; xx [ 515 ] = xx [ 518 ] - xx [ 175 ] ;
pm_math_quatXform ( xx + 320 , xx + 513 , xx + 516 ) ; xx [ 199 ] = xx [ 72 ]
* xx [ 436 ] ; xx [ 237 ] = xx [ 73 ] * xx [ 435 ] - xx [ 72 ] * xx [ 434 ] ;
xx [ 513 ] = xx [ 199 ] ; xx [ 514 ] = - ( xx [ 73 ] * xx [ 436 ] ) ; xx [
515 ] = xx [ 237 ] ; pm_math_cross3 ( xx + 434 , xx + 513 , xx + 519 ) ; xx [
332 ] = xx [ 249 ] * xx [ 254 ] ; xx [ 366 ] = xx [ 249 ] * xx [ 257 ] ; xx [
249 ] = xx [ 257 ] * xx [ 367 ] - xx [ 219 ] * xx [ 254 ] ; xx [ 513 ] = xx [
332 ] ; xx [ 514 ] = xx [ 366 ] ; xx [ 515 ] = xx [ 249 ] ; pm_math_cross3 (
xx + 429 , xx + 513 , xx + 522 ) ; xx [ 429 ] = xx [ 80 ] * ( xx [ 522 ] + xx
[ 332 ] * xx [ 252 ] ) - xx [ 257 ] ; xx [ 430 ] = xx [ 254 ] + ( xx [ 366 ]
* xx [ 252 ] + xx [ 523 ] ) * xx [ 80 ] ; xx [ 431 ] = ( xx [ 249 ] * xx [
252 ] + xx [ 524 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 349 , xx + 429 ,
xx + 513 ) ; xx [ 219 ] = state [ 55 ] + xx [ 772 ] ; xx [ 249 ] = xx [ 219 ]
* xx [ 2 ] ; xx [ 252 ] = cos ( xx [ 249 ] ) ; xx [ 332 ] = xx [ 224 ] * xx [
252 ] ; xx [ 366 ] = sin ( xx [ 249 ] ) ; xx [ 249 ] = xx [ 366 ] * xx [ 256
] ; xx [ 367 ] = - ( xx [ 252 ] * xx [ 315 ] + xx [ 319 ] * xx [ 366 ] ) ; xx
[ 372 ] = xx [ 366 ] * xx [ 315 ] - xx [ 319 ] * xx [ 252 ] ; xx [ 383 ] = xx
[ 224 ] * xx [ 366 ] + xx [ 252 ] * xx [ 256 ] ; xx [ 429 ] = xx [ 332 ] - xx
[ 249 ] ; xx [ 430 ] = xx [ 367 ] ; xx [ 431 ] = xx [ 372 ] ; xx [ 432 ] = xx
[ 383 ] ; xx [ 522 ] = xx [ 368 ] ; xx [ 523 ] = xx [ 374 ] ; xx [ 524 ] = xx
[ 373 ] ; xx [ 525 ] = xx [ 328 ] ; pm_math_quatDeriv ( xx + 522 , xx + 773 ,
xx + 526 ) ; xx [ 397 ] = xx [ 328 ] + xx [ 529 ] ; xx [ 328 ] = xx [ 368 ] +
xx [ 526 ] ; xx [ 368 ] = xx [ 374 ] + xx [ 527 ] ; xx [ 374 ] = xx [ 373 ] +
xx [ 528 ] ; xx [ 373 ] = sqrt ( xx [ 328 ] * xx [ 328 ] + xx [ 368 ] * xx [
368 ] + xx [ 374 ] * xx [ 374 ] + xx [ 397 ] * xx [ 397 ] ) ; if ( xx [ 28 ]
> xx [ 373 ] ) xx [ 373 ] = xx [ 28 ] ; xx [ 398 ] = xx [ 397 ] / xx [ 373 ]
; xx [ 397 ] = xx [ 328 ] / xx [ 373 ] ; xx [ 328 ] = xx [ 21 ] * xx [ 398 ]
- xx [ 25 ] * xx [ 397 ] ; xx [ 411 ] = xx [ 374 ] / xx [ 373 ] ; xx [ 374 ]
= xx [ 368 ] / xx [ 373 ] ; xx [ 368 ] = xx [ 21 ] * xx [ 411 ] + xx [ 25 ] *
xx [ 374 ] ; xx [ 373 ] = - xx [ 368 ] ; xx [ 412 ] = xx [ 25 ] * xx [ 411 ]
- xx [ 21 ] * xx [ 374 ] ; xx [ 440 ] = - xx [ 412 ] ; xx [ 442 ] = xx [ 21 ]
* xx [ 397 ] + xx [ 25 ] * xx [ 398 ] ; xx [ 467 ] = - xx [ 442 ] ; xx [ 522
] = xx [ 328 ] ; xx [ 523 ] = xx [ 373 ] ; xx [ 524 ] = xx [ 440 ] ; xx [ 525
] = xx [ 467 ] ; pm_math_quatCompose ( xx + 429 , xx + 522 , xx + 526 ) ; xx
[ 429 ] = ( xx [ 412 ] * xx [ 328 ] + xx [ 368 ] * xx [ 442 ] ) * xx [ 80 ] ;
xx [ 430 ] = xx [ 80 ] * ( xx [ 412 ] * xx [ 442 ] - xx [ 368 ] * xx [ 328 ]
) ; xx [ 431 ] = xx [ 22 ] - ( xx [ 368 ] * xx [ 368 ] + xx [ 412 ] * xx [
412 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 429 , xx + 267 , xx + 537 ) ;
pm_math_quatXform ( xx + 526 , xx + 537 , xx + 429 ) ; pm_math_quatXform ( xx
+ 522 , xx + 126 , xx + 526 ) ; xx [ 432 ] = xx [ 527 ] * xx [ 366 ] - xx [
252 ] * xx [ 526 ] ; xx [ 471 ] = xx [ 409 ] * xx [ 252 ] + xx [ 410 ] * xx [
366 ] ; xx [ 472 ] = xx [ 80 ] * xx [ 366 ] * xx [ 432 ] - ( xx [ 527 ] + xx
[ 80 ] * xx [ 471 ] * xx [ 366 ] ) + xx [ 410 ] ; xx [ 486 ] = xx [ 526 ] +
xx [ 80 ] * xx [ 252 ] * xx [ 432 ] - xx [ 80 ] * xx [ 471 ] * xx [ 252 ] +
xx [ 409 ] ; xx [ 432 ] = xx [ 486 ] * xx [ 319 ] ; xx [ 471 ] = xx [ 472 ] *
xx [ 319 ] ; xx [ 487 ] = xx [ 486 ] * xx [ 224 ] - xx [ 472 ] * xx [ 256 ] ;
xx [ 529 ] = - xx [ 432 ] ; xx [ 530 ] = xx [ 471 ] ; xx [ 531 ] = xx [ 487 ]
; pm_math_cross3 ( xx + 413 , xx + 529 , xx + 537 ) ; xx [ 540 ] = - ( xx [
249 ] - xx [ 332 ] ) ; xx [ 541 ] = xx [ 367 ] ; xx [ 542 ] = xx [ 372 ] ; xx
[ 543 ] = xx [ 383 ] ; pm_math_quatCompose ( xx + 540 , xx + 522 , xx + 555 )
; pm_math_quatXform ( xx + 555 , xx + 280 , xx + 413 ) ; pm_math_quatXform (
xx + 522 , xx + 167 , xx + 529 ) ; pm_math_quatXform ( xx + 540 , xx + 529 ,
xx + 544 ) ; pm_math_quatXform ( xx + 555 , xx + 297 , xx + 529 ) ;
pm_math_quatXform ( xx + 522 , xx + 176 , xx + 549 ) ; pm_math_quatXform ( xx
+ 540 , xx + 549 , xx + 522 ) ; xx [ 249 ] = xx [ 102 ] * xx [ 558 ] ; xx [
332 ] = xx [ 102 ] * xx [ 556 ] + xx [ 123 ] * xx [ 557 ] ; xx [ 549 ] = - xx
[ 249 ] ; xx [ 550 ] = - ( xx [ 123 ] * xx [ 558 ] ) ; xx [ 551 ] = xx [ 332
] ; pm_math_cross3 ( xx + 556 , xx + 549 , xx + 559 ) ; xx [ 549 ] = xx [ 373
] ; xx [ 550 ] = xx [ 440 ] ; xx [ 551 ] = xx [ 467 ] ; xx [ 367 ] = xx [ 117
] * xx [ 442 ] ; xx [ 372 ] = xx [ 119 ] * xx [ 442 ] ; xx [ 373 ] = xx [ 117
] * xx [ 368 ] + xx [ 412 ] * xx [ 119 ] ; xx [ 562 ] = xx [ 367 ] ; xx [ 563
] = xx [ 372 ] ; xx [ 564 ] = - xx [ 373 ] ; pm_math_cross3 ( xx + 549 , xx +
562 , xx + 565 ) ; xx [ 549 ] = xx [ 80 ] * ( xx [ 565 ] + xx [ 367 ] * xx [
328 ] ) - xx [ 119 ] ; xx [ 550 ] = xx [ 117 ] + ( xx [ 372 ] * xx [ 328 ] +
xx [ 566 ] ) * xx [ 80 ] ; xx [ 551 ] = ( xx [ 567 ] - xx [ 373 ] * xx [ 328
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 540 , xx + 549 , xx + 562 ) ; xx [
328 ] = state [ 47 ] + xx [ 769 ] ; xx [ 367 ] = xx [ 328 ] * xx [ 2 ] ; xx [
368 ] = cos ( xx [ 367 ] ) ; xx [ 372 ] = xx [ 312 ] * xx [ 368 ] ; xx [ 373
] = sin ( xx [ 367 ] ) ; xx [ 367 ] = xx [ 312 ] * xx [ 373 ] ; xx [ 383 ] =
xx [ 372 ] + xx [ 367 ] ; xx [ 412 ] = xx [ 379 ] * xx [ 373 ] ; xx [ 373 ] =
xx [ 379 ] * xx [ 368 ] ; xx [ 368 ] = xx [ 412 ] - xx [ 373 ] ; xx [ 440 ] =
xx [ 373 ] + xx [ 412 ] ; xx [ 373 ] = - xx [ 440 ] ; xx [ 412 ] = xx [ 367 ]
- xx [ 372 ] ; xx [ 565 ] = - xx [ 383 ] ; xx [ 566 ] = xx [ 368 ] ; xx [ 567
] = xx [ 373 ] ; xx [ 568 ] = xx [ 412 ] ; pm_math_quatCompose ( xx + 215 ,
xx + 565 , xx + 569 ) ; pm_math_quatCompose ( xx + 154 , xx + 569 , xx + 573
) ; pm_math_quatCompose ( xx + 150 , xx + 573 , xx + 577 ) ;
pm_math_quatCompose ( xx + 146 , xx + 577 , xx + 585 ) ; xx [ 549 ] = xx [ 80
] * ( xx [ 578 ] * xx [ 580 ] - xx [ 577 ] * xx [ 579 ] ) ; xx [ 550 ] = ( xx
[ 577 ] * xx [ 578 ] + xx [ 579 ] * xx [ 580 ] ) * xx [ 80 ] ; xx [ 551 ] =
xx [ 22 ] - ( xx [ 578 ] * xx [ 578 ] + xx [ 579 ] * xx [ 579 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 549 , xx + 84 , xx + 577 ) ; pm_math_quatXform ( xx +
585 , xx + 577 , xx + 549 ) ; pm_math_quatXform ( xx + 565 , xx + 456 , xx +
577 ) ; xx [ 367 ] = xx [ 314 ] + xx [ 577 ] ; xx [ 372 ] = xx [ 462 ] - xx [
579 ] ; xx [ 579 ] = - xx [ 367 ] ; xx [ 580 ] = - xx [ 578 ] ; xx [ 581 ] =
xx [ 372 ] ; pm_math_quatXform ( xx + 215 , xx + 579 , xx + 585 ) ; xx [ 442
] = xx [ 585 ] - xx [ 236 ] ; xx [ 467 ] = xx [ 586 ] + xx [ 200 ] ; xx [ 491
] = xx [ 587 ] - xx [ 233 ] ; xx [ 585 ] = xx [ 442 ] ; xx [ 586 ] = xx [ 467
] ; xx [ 587 ] = xx [ 491 ] ; pm_math_quatXform ( xx + 154 , xx + 585 , xx +
588 ) ; xx [ 492 ] = xx [ 588 ] + xx [ 220 ] ; xx [ 499 ] = xx [ 589 ] + xx [
235 ] ; xx [ 500 ] = xx [ 590 ] + xx [ 238 ] ; xx [ 585 ] = xx [ 492 ] ; xx [
586 ] = xx [ 499 ] ; xx [ 587 ] = xx [ 500 ] ; pm_math_quatXform ( xx + 150 ,
xx + 585 , xx + 588 ) ; xx [ 510 ] = xx [ 589 ] + xx [ 246 ] ; xx [ 525 ] =
xx [ 588 ] + xx [ 245 ] ; xx [ 577 ] = xx [ 510 ] * xx [ 35 ] - xx [ 525 ] *
xx [ 32 ] ; xx [ 582 ] = xx [ 80 ] * xx [ 35 ] * xx [ 577 ] - ( xx [ 510 ] -
xx [ 259 ] ) - xx [ 135 ] ; xx [ 510 ] = xx [ 525 ] + xx [ 80 ] * xx [ 32 ] *
xx [ 577 ] + xx [ 248 ] - xx [ 131 ] ; xx [ 525 ] = xx [ 15 ] * xx [ 510 ] ;
xx [ 577 ] = xx [ 15 ] * xx [ 582 ] ; xx [ 583 ] = xx [ 3 ] * xx [ 510 ] - xx
[ 582 ] * xx [ 7 ] ; xx [ 585 ] = - xx [ 525 ] ; xx [ 586 ] = xx [ 577 ] ; xx
[ 587 ] = xx [ 583 ] ; pm_math_cross3 ( xx + 139 , xx + 585 , xx + 588 ) ;
pm_math_quatCompose ( xx + 287 , xx + 573 , xx + 602 ) ; xx [ 585 ] = xx [ 4
] * xx [ 576 ] ; xx [ 586 ] = xx [ 4 ] * xx [ 574 ] + xx [ 575 ] ; xx [ 591 ]
= xx [ 585 ] ; xx [ 592 ] = xx [ 576 ] ; xx [ 593 ] = - xx [ 586 ] ;
pm_math_cross3 ( xx + 574 , xx + 591 , xx + 598 ) ; xx [ 587 ] = xx [ 573 ] *
xx [ 576 ] ; xx [ 591 ] = xx [ 22 ] + ( xx [ 598 ] - xx [ 573 ] * xx [ 585 ]
) * xx [ 80 ] ; xx [ 592 ] = xx [ 80 ] * ( xx [ 599 ] - xx [ 587 ] ) - xx [ 4
] ; xx [ 593 ] = xx [ 80 ] * ( xx [ 600 ] + xx [ 573 ] * xx [ 586 ] ) ;
pm_math_cross3 ( xx + 591 , xx + 84 , xx + 598 ) ; pm_math_quatXform ( xx +
602 , xx + 598 , xx + 591 ) ; xx [ 586 ] = - ( xx [ 500 ] * xx [ 4 ] ) ; xx [
598 ] = xx [ 586 ] ; xx [ 599 ] = - xx [ 500 ] ; xx [ 600 ] = xx [ 499 ] + xx
[ 492 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 150 , xx + 598 , xx + 606 ) ;
xx [ 598 ] = xx [ 606 ] + xx [ 263 ] ; xx [ 599 ] = xx [ 607 ] + xx [ 264 ] ;
xx [ 600 ] = xx [ 608 ] + xx [ 265 ] ; pm_math_quatXform ( xx + 283 , xx +
598 , xx + 606 ) ; xx [ 598 ] = xx [ 574 ] - xx [ 4 ] * xx [ 575 ] ; xx [ 610
] = - xx [ 576 ] ; xx [ 611 ] = xx [ 585 ] ; xx [ 612 ] = xx [ 598 ] ;
pm_math_cross3 ( xx + 574 , xx + 610 , xx + 613 ) ; xx [ 610 ] = xx [ 4 ] + (
xx [ 587 ] + xx [ 613 ] ) * xx [ 80 ] ; xx [ 611 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 614 ] - xx [ 4 ] * xx [ 587 ] ) ; xx [ 612 ] = xx [ 80 ] * ( xx [ 615
] - xx [ 573 ] * xx [ 598 ] ) ; pm_math_cross3 ( xx + 610 , xx + 84 , xx +
598 ) ; pm_math_quatXform ( xx + 602 , xx + 598 , xx + 610 ) ; xx [ 598 ] =
xx [ 500 ] ; xx [ 599 ] = xx [ 586 ] ; xx [ 600 ] = xx [ 499 ] * xx [ 4 ] -
xx [ 492 ] ; pm_math_quatXform ( xx + 150 , xx + 598 , xx + 585 ) ; xx [ 598
] = xx [ 585 ] + xx [ 46 ] ; xx [ 599 ] = xx [ 586 ] + xx [ 47 ] ; xx [ 600 ]
= xx [ 587 ] + xx [ 48 ] ; pm_math_quatXform ( xx + 283 , xx + 598 , xx + 585
) ; xx [ 598 ] = xx [ 80 ] * ( xx [ 574 ] * xx [ 576 ] - xx [ 573 ] * xx [
575 ] ) ; xx [ 599 ] = ( xx [ 573 ] * xx [ 574 ] + xx [ 575 ] * xx [ 576 ] )
* xx [ 80 ] ; xx [ 600 ] = xx [ 22 ] - ( xx [ 574 ] * xx [ 574 ] + xx [ 575 ]
* xx [ 575 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 598 , xx + 84 , xx + 573 )
; pm_math_quatXform ( xx + 602 , xx + 573 , xx + 598 ) ; xx [ 500 ] = xx [
492 ] * xx [ 70 ] ; xx [ 573 ] = xx [ 499 ] * xx [ 70 ] ; xx [ 574 ] = xx [
492 ] * xx [ 26 ] + xx [ 499 ] * xx [ 68 ] ; xx [ 602 ] = xx [ 500 ] ; xx [
603 ] = xx [ 573 ] ; xx [ 604 ] = - xx [ 574 ] ; pm_math_cross3 ( xx + 183 ,
xx + 602 , xx + 613 ) ; xx [ 602 ] = xx [ 80 ] * ( xx [ 613 ] + xx [ 500 ] *
xx [ 24 ] ) + xx [ 244 ] - xx [ 499 ] - xx [ 119 ] ; xx [ 603 ] = xx [ 492 ]
+ xx [ 80 ] * ( xx [ 614 ] + xx [ 573 ] * xx [ 24 ] ) + xx [ 69 ] + xx [ 117
] ; xx [ 604 ] = ( xx [ 615 ] - xx [ 574 ] * xx [ 24 ] ) * xx [ 80 ] + xx [
75 ] ; pm_math_quatXform ( xx + 283 , xx + 602 , xx + 573 ) ;
pm_math_quatCompose ( xx + 320 , xx + 569 , xx + 602 ) ; xx [ 492 ] = xx [
571 ] * xx [ 571 ] ; xx [ 499 ] = xx [ 572 ] * xx [ 572 ] ; xx [ 500 ] = xx [
570 ] * xx [ 571 ] ; xx [ 576 ] = xx [ 569 ] * xx [ 572 ] ; xx [ 613 ] = xx [
569 ] * xx [ 571 ] ; xx [ 614 ] = xx [ 570 ] * xx [ 572 ] ; xx [ 615 ] = xx [
22 ] - ( xx [ 492 ] + xx [ 499 ] ) * xx [ 80 ] ; xx [ 616 ] = xx [ 80 ] * (
xx [ 500 ] - xx [ 576 ] ) ; xx [ 617 ] = ( xx [ 613 ] + xx [ 614 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 615 , xx + 84 , xx + 618 ) ; pm_math_quatXform (
xx + 602 , xx + 618 , xx + 615 ) ; xx [ 618 ] = xx [ 467 ] * xx [ 44 ] ; xx [
619 ] = xx [ 491 ] * xx [ 83 ] ; xx [ 620 ] = xx [ 618 ] + xx [ 619 ] ; xx [
621 ] = xx [ 467 ] * xx [ 42 ] ; xx [ 622 ] = xx [ 491 ] * xx [ 42 ] ; xx [
623 ] = - xx [ 620 ] ; xx [ 624 ] = - xx [ 621 ] ; xx [ 625 ] = - xx [ 622 ]
; pm_math_cross3 ( xx + 333 , xx + 623 , xx + 626 ) ; xx [ 623 ] = xx [ 80 ]
* ( xx [ 626 ] - xx [ 620 ] * xx [ 40 ] ) + xx [ 336 ] ; xx [ 624 ] = xx [ 80
] * ( xx [ 627 ] - xx [ 621 ] * xx [ 40 ] ) + xx [ 278 ] - xx [ 491 ] - xx [
74 ] ; xx [ 625 ] = xx [ 467 ] + xx [ 80 ] * ( xx [ 628 ] - xx [ 622 ] * xx [
40 ] ) + xx [ 279 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 287 , xx + 623 ,
xx + 620 ) ; xx [ 623 ] = xx [ 570 ] * xx [ 570 ] ; xx [ 624 ] = xx [ 571 ] *
xx [ 572 ] ; xx [ 571 ] = xx [ 569 ] * xx [ 570 ] ; xx [ 625 ] = ( xx [ 576 ]
+ xx [ 500 ] ) * xx [ 80 ] ; xx [ 626 ] = xx [ 22 ] - ( xx [ 499 ] + xx [ 623
] ) * xx [ 80 ] ; xx [ 627 ] = xx [ 80 ] * ( xx [ 624 ] - xx [ 571 ] ) ;
pm_math_cross3 ( xx + 625 , xx + 84 , xx + 628 ) ; pm_math_quatXform ( xx +
602 , xx + 628 , xx + 625 ) ; xx [ 499 ] = xx [ 442 ] * xx [ 44 ] ; xx [ 500
] = xx [ 442 ] * xx [ 42 ] ; xx [ 569 ] = xx [ 500 ] - xx [ 619 ] ; xx [ 570
] = xx [ 491 ] * xx [ 44 ] ; xx [ 628 ] = xx [ 499 ] ; xx [ 629 ] = xx [ 569
] ; xx [ 630 ] = xx [ 570 ] ; pm_math_cross3 ( xx + 333 , xx + 628 , xx + 631
) ; xx [ 628 ] = xx [ 491 ] + ( xx [ 499 ] * xx [ 40 ] + xx [ 631 ] ) * xx [
80 ] + xx [ 274 ] + xx [ 74 ] ; xx [ 629 ] = ( xx [ 569 ] * xx [ 40 ] + xx [
632 ] ) * xx [ 80 ] + xx [ 134 ] ; xx [ 630 ] = ( xx [ 570 ] * xx [ 40 ] + xx
[ 633 ] ) * xx [ 80 ] + xx [ 179 ] - xx [ 442 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 287 , xx + 628 , xx + 631 ) ; xx [ 628 ] = xx [ 80 ]
* ( xx [ 614 ] - xx [ 613 ] ) ; xx [ 629 ] = ( xx [ 571 ] + xx [ 624 ] ) * xx
[ 80 ] ; xx [ 630 ] = xx [ 22 ] - ( xx [ 623 ] + xx [ 492 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 628 , xx + 84 , xx + 569 ) ; pm_math_quatXform ( xx +
602 , xx + 569 , xx + 628 ) ; xx [ 491 ] = xx [ 442 ] * xx [ 83 ] ; xx [ 492
] = xx [ 467 ] * xx [ 83 ] ; xx [ 499 ] = xx [ 500 ] - xx [ 618 ] ; xx [ 569
] = xx [ 491 ] ; xx [ 570 ] = xx [ 492 ] ; xx [ 571 ] = xx [ 499 ] ;
pm_math_cross3 ( xx + 333 , xx + 569 , xx + 602 ) ; xx [ 569 ] = ( xx [ 491 ]
* xx [ 40 ] + xx [ 602 ] ) * xx [ 80 ] + xx [ 133 ] - xx [ 467 ] + xx [ 73 ]
; xx [ 570 ] = xx [ 442 ] + ( xx [ 492 ] * xx [ 40 ] + xx [ 603 ] ) * xx [ 80
] + xx [ 64 ] + xx [ 72 ] ; xx [ 571 ] = ( xx [ 499 ] * xx [ 40 ] + xx [ 604
] ) * xx [ 80 ] + xx [ 82 ] ; pm_math_quatXform ( xx + 287 , xx + 569 , xx +
602 ) ; pm_math_quatCompose ( xx + 349 , xx + 565 , xx + 569 ) ; xx [ 565 ] =
xx [ 368 ] ; xx [ 566 ] = xx [ 373 ] ; xx [ 567 ] = xx [ 412 ] ; xx [ 373 ] =
xx [ 440 ] * xx [ 63 ] ; xx [ 442 ] = xx [ 63 ] * xx [ 368 ] - xx [ 57 ] * xx
[ 412 ] ; xx [ 467 ] = xx [ 440 ] * xx [ 57 ] ; xx [ 634 ] = xx [ 373 ] ; xx
[ 635 ] = xx [ 442 ] ; xx [ 636 ] = - xx [ 467 ] ; pm_math_cross3 ( xx + 565
, xx + 634 , xx + 639 ) ; xx [ 634 ] = xx [ 80 ] * ( xx [ 639 ] + xx [ 383 ]
* xx [ 373 ] ) - xx [ 57 ] ; xx [ 635 ] = xx [ 80 ] * ( xx [ 640 ] + xx [ 383
] * xx [ 442 ] ) ; xx [ 636 ] = ( xx [ 641 ] - xx [ 383 ] * xx [ 467 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 634 , xx + 84 , xx + 639 ) ;
pm_math_quatXform ( xx + 569 , xx + 639 , xx + 634 ) ; xx [ 639 ] = - ( xx [
63 ] * xx [ 578 ] ) ; xx [ 640 ] = xx [ 63 ] * xx [ 367 ] + xx [ 57 ] * xx [
372 ] ; xx [ 641 ] = xx [ 57 ] * xx [ 578 ] ; pm_math_quatXform ( xx + 215 ,
xx + 639 , xx + 644 ) ; xx [ 639 ] = xx [ 644 ] + xx [ 136 ] ; xx [ 640 ] =
xx [ 645 ] + xx [ 137 ] - xx [ 67 ] ; xx [ 641 ] = xx [ 646 ] - xx [ 175 ] ;
pm_math_quatXform ( xx + 320 , xx + 639 , xx + 644 ) ; xx [ 367 ] = xx [ 72 ]
* xx [ 572 ] ; xx [ 372 ] = xx [ 72 ] * xx [ 570 ] - xx [ 73 ] * xx [ 571 ] ;
xx [ 639 ] = - xx [ 367 ] ; xx [ 640 ] = xx [ 73 ] * xx [ 572 ] ; xx [ 641 ]
= xx [ 372 ] ; pm_math_cross3 ( xx + 570 , xx + 639 , xx + 649 ) ; xx [ 373 ]
= xx [ 327 ] * xx [ 412 ] ; xx [ 442 ] = xx [ 401 ] * xx [ 412 ] ; xx [ 412 ]
= xx [ 327 ] * xx [ 368 ] + xx [ 440 ] * xx [ 401 ] ; xx [ 639 ] = - xx [ 373
] ; xx [ 640 ] = xx [ 442 ] ; xx [ 641 ] = xx [ 412 ] ; pm_math_cross3 ( xx +
565 , xx + 639 , xx + 652 ) ; xx [ 565 ] = xx [ 401 ] + xx [ 80 ] * ( xx [
652 ] + xx [ 383 ] * xx [ 373 ] ) ; xx [ 566 ] = xx [ 327 ] + ( xx [ 653 ] -
xx [ 383 ] * xx [ 442 ] ) * xx [ 80 ] ; xx [ 567 ] = ( xx [ 654 ] - xx [ 383
] * xx [ 412 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 349 , xx + 565 , xx +
639 ) ; xx [ 368 ] = state [ 77 ] + xx [ 780 ] ; xx [ 373 ] = xx [ 368 ] * xx
[ 2 ] ; xx [ 383 ] = cos ( xx [ 373 ] ) ; xx [ 412 ] = xx [ 383 ] * xx [ 400
] ; xx [ 440 ] = sin ( xx [ 373 ] ) ; xx [ 373 ] = xx [ 451 ] * xx [ 440 ] ;
xx [ 442 ] = - ( xx [ 501 ] * xx [ 383 ] - xx [ 440 ] * xx [ 502 ] ) ; xx [
467 ] = xx [ 501 ] * xx [ 440 ] + xx [ 383 ] * xx [ 502 ] ; xx [ 491 ] = xx [
440 ] * xx [ 400 ] + xx [ 451 ] * xx [ 383 ] ; xx [ 565 ] = xx [ 412 ] - xx [
373 ] ; xx [ 566 ] = xx [ 442 ] ; xx [ 567 ] = xx [ 467 ] ; xx [ 568 ] = xx [
491 ] ; xx [ 652 ] = xx [ 512 ] ; xx [ 653 ] = xx [ 534 ] ; xx [ 654 ] = xx [
533 ] ; xx [ 655 ] = xx [ 511 ] ; pm_math_quatDeriv ( xx + 652 , xx + 781 ,
xx + 656 ) ; xx [ 492 ] = xx [ 511 ] + xx [ 659 ] ; xx [ 499 ] = xx [ 512 ] +
xx [ 656 ] ; xx [ 500 ] = xx [ 534 ] + xx [ 657 ] ; xx [ 511 ] = xx [ 533 ] +
xx [ 658 ] ; xx [ 512 ] = sqrt ( xx [ 499 ] * xx [ 499 ] + xx [ 500 ] * xx [
500 ] + xx [ 511 ] * xx [ 511 ] + xx [ 492 ] * xx [ 492 ] ) ; if ( xx [ 28 ]
> xx [ 512 ] ) xx [ 512 ] = xx [ 28 ] ; xx [ 533 ] = xx [ 492 ] / xx [ 512 ]
; xx [ 492 ] = xx [ 499 ] / xx [ 512 ] ; xx [ 499 ] = xx [ 21 ] * xx [ 533 ]
- xx [ 25 ] * xx [ 492 ] ; xx [ 534 ] = xx [ 511 ] / xx [ 512 ] ; xx [ 511 ]
= xx [ 500 ] / xx [ 512 ] ; xx [ 500 ] = xx [ 21 ] * xx [ 534 ] + xx [ 25 ] *
xx [ 511 ] ; xx [ 512 ] = - xx [ 500 ] ; xx [ 576 ] = xx [ 25 ] * xx [ 534 ]
- xx [ 21 ] * xx [ 511 ] ; xx [ 578 ] = - xx [ 576 ] ; xx [ 605 ] = xx [ 21 ]
* xx [ 492 ] + xx [ 25 ] * xx [ 533 ] ; xx [ 613 ] = - xx [ 605 ] ; xx [ 652
] = xx [ 499 ] ; xx [ 653 ] = xx [ 512 ] ; xx [ 654 ] = xx [ 578 ] ; xx [ 655
] = xx [ 613 ] ; pm_math_quatCompose ( xx + 565 , xx + 652 , xx + 656 ) ; xx
[ 565 ] = ( xx [ 576 ] * xx [ 499 ] + xx [ 605 ] * xx [ 500 ] ) * xx [ 80 ] ;
xx [ 566 ] = xx [ 80 ] * ( xx [ 576 ] * xx [ 605 ] - xx [ 500 ] * xx [ 499 ]
) ; xx [ 567 ] = xx [ 22 ] - ( xx [ 500 ] * xx [ 500 ] + xx [ 576 ] * xx [
576 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 565 , xx + 267 , xx + 660 ) ;
pm_math_quatXform ( xx + 656 , xx + 660 , xx + 565 ) ; pm_math_quatXform ( xx
+ 652 , xx + 126 , xx + 656 ) ; xx [ 568 ] = xx [ 657 ] * xx [ 440 ] - xx [
383 ] * xx [ 656 ] ; xx [ 614 ] = xx [ 547 ] * xx [ 383 ] + xx [ 548 ] * xx [
440 ] ; xx [ 618 ] = xx [ 80 ] * xx [ 440 ] * xx [ 568 ] - ( xx [ 657 ] - xx
[ 80 ] * xx [ 614 ] * xx [ 440 ] ) - xx [ 548 ] ; xx [ 619 ] = xx [ 656 ] +
xx [ 80 ] * xx [ 383 ] * xx [ 568 ] + xx [ 80 ] * xx [ 614 ] * xx [ 383 ] -
xx [ 547 ] ; xx [ 568 ] = xx [ 619 ] * xx [ 502 ] ; xx [ 614 ] = xx [ 618 ] *
xx [ 502 ] ; xx [ 623 ] = xx [ 619 ] * xx [ 400 ] - xx [ 618 ] * xx [ 451 ] ;
xx [ 659 ] = xx [ 568 ] ; xx [ 660 ] = - xx [ 614 ] ; xx [ 661 ] = xx [ 623 ]
; pm_math_cross3 ( xx + 552 , xx + 659 , xx + 662 ) ; xx [ 676 ] = - ( xx [
373 ] - xx [ 412 ] ) ; xx [ 677 ] = xx [ 442 ] ; xx [ 678 ] = xx [ 467 ] ; xx
[ 679 ] = xx [ 491 ] ; pm_math_quatCompose ( xx + 676 , xx + 652 , xx + 692 )
; pm_math_quatXform ( xx + 692 , xx + 280 , xx + 552 ) ; pm_math_quatXform (
xx + 652 , xx + 167 , xx + 659 ) ; pm_math_quatXform ( xx + 676 , xx + 659 ,
xx + 665 ) ; pm_math_quatXform ( xx + 692 , xx + 297 , xx + 659 ) ;
pm_math_quatXform ( xx + 652 , xx + 176 , xx + 681 ) ; pm_math_quatXform ( xx
+ 676 , xx + 681 , xx + 652 ) ; xx [ 373 ] = xx [ 102 ] * xx [ 695 ] ; xx [
412 ] = xx [ 102 ] * xx [ 693 ] + xx [ 123 ] * xx [ 694 ] ; xx [ 681 ] = - xx
[ 373 ] ; xx [ 682 ] = - ( xx [ 123 ] * xx [ 695 ] ) ; xx [ 683 ] = xx [ 412
] ; pm_math_cross3 ( xx + 693 , xx + 681 , xx + 686 ) ; xx [ 681 ] = xx [ 512
] ; xx [ 682 ] = xx [ 578 ] ; xx [ 683 ] = xx [ 613 ] ; xx [ 442 ] = xx [ 117
] * xx [ 605 ] ; xx [ 467 ] = xx [ 119 ] * xx [ 605 ] ; xx [ 491 ] = xx [ 117
] * xx [ 500 ] + xx [ 576 ] * xx [ 119 ] ; xx [ 696 ] = xx [ 442 ] ; xx [ 697
] = xx [ 467 ] ; xx [ 698 ] = - xx [ 491 ] ; pm_math_cross3 ( xx + 681 , xx +
696 , xx + 699 ) ; xx [ 681 ] = xx [ 80 ] * ( xx [ 699 ] + xx [ 442 ] * xx [
499 ] ) - xx [ 119 ] ; xx [ 682 ] = xx [ 117 ] + ( xx [ 467 ] * xx [ 499 ] +
xx [ 700 ] ) * xx [ 80 ] ; xx [ 683 ] = ( xx [ 701 ] - xx [ 491 ] * xx [ 499
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 676 , xx + 681 , xx + 696 ) ; xx [
442 ] = state [ 49 ] + xx [ 770 ] ; xx [ 467 ] = xx [ 442 ] * xx [ 2 ] ; xx [
491 ] = cos ( xx [ 467 ] ) ; xx [ 499 ] = xx [ 312 ] * xx [ 491 ] ; xx [ 500
] = sin ( xx [ 467 ] ) ; xx [ 467 ] = xx [ 312 ] * xx [ 500 ] ; xx [ 512 ] =
xx [ 499 ] + xx [ 467 ] ; xx [ 576 ] = xx [ 379 ] * xx [ 491 ] ; xx [ 491 ] =
xx [ 379 ] * xx [ 500 ] ; xx [ 500 ] = xx [ 576 ] - xx [ 491 ] ; xx [ 578 ] =
xx [ 576 ] + xx [ 491 ] ; xx [ 491 ] = xx [ 499 ] - xx [ 467 ] ; xx [ 699 ] =
xx [ 512 ] ; xx [ 700 ] = xx [ 500 ] ; xx [ 701 ] = xx [ 578 ] ; xx [ 702 ] =
xx [ 491 ] ; pm_math_quatCompose ( xx + 215 , xx + 699 , xx + 703 ) ;
pm_math_quatCompose ( xx + 154 , xx + 703 , xx + 707 ) ; pm_math_quatCompose
( xx + 150 , xx + 707 , xx + 711 ) ; pm_math_quatCompose ( xx + 146 , xx +
711 , xx + 715 ) ; xx [ 681 ] = xx [ 80 ] * ( xx [ 712 ] * xx [ 714 ] - xx [
711 ] * xx [ 713 ] ) ; xx [ 682 ] = ( xx [ 711 ] * xx [ 712 ] + xx [ 713 ] *
xx [ 714 ] ) * xx [ 80 ] ; xx [ 683 ] = xx [ 22 ] - ( xx [ 712 ] * xx [ 712 ]
+ xx [ 713 ] * xx [ 713 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 681 , xx + 84
, xx + 711 ) ; pm_math_quatXform ( xx + 715 , xx + 711 , xx + 681 ) ;
pm_math_quatXform ( xx + 699 , xx + 595 , xx + 711 ) ; xx [ 467 ] = xx [ 446
] + xx [ 711 ] ; xx [ 499 ] = xx [ 601 ] - xx [ 713 ] ; xx [ 713 ] = - xx [
467 ] ; xx [ 714 ] = - xx [ 712 ] ; xx [ 715 ] = xx [ 499 ] ;
pm_math_quatXform ( xx + 215 , xx + 713 , xx + 716 ) ; xx [ 576 ] = xx [ 716
] - xx [ 236 ] ; xx [ 605 ] = xx [ 717 ] + xx [ 200 ] ; xx [ 613 ] = xx [ 718
] - xx [ 233 ] ; xx [ 716 ] = xx [ 576 ] ; xx [ 717 ] = xx [ 605 ] ; xx [ 718
] = xx [ 613 ] ; pm_math_quatXform ( xx + 154 , xx + 716 , xx + 723 ) ; xx [
624 ] = xx [ 723 ] + xx [ 220 ] ; xx [ 655 ] = xx [ 724 ] + xx [ 235 ] ; xx [
669 ] = xx [ 725 ] + xx [ 238 ] ; xx [ 716 ] = xx [ 624 ] ; xx [ 717 ] = xx [
655 ] ; xx [ 718 ] = xx [ 669 ] ; pm_math_quatXform ( xx + 150 , xx + 716 ,
xx + 723 ) ; xx [ 673 ] = xx [ 724 ] + xx [ 246 ] ; xx [ 674 ] = xx [ 723 ] +
xx [ 245 ] ; xx [ 711 ] = xx [ 673 ] * xx [ 35 ] - xx [ 674 ] * xx [ 32 ] ;
xx [ 716 ] = xx [ 80 ] * xx [ 35 ] * xx [ 711 ] - ( xx [ 673 ] - xx [ 259 ] )
- xx [ 135 ] ; xx [ 673 ] = xx [ 674 ] + xx [ 80 ] * xx [ 32 ] * xx [ 711 ] +
xx [ 248 ] - xx [ 131 ] ; xx [ 674 ] = xx [ 15 ] * xx [ 673 ] ; xx [ 711 ] =
xx [ 15 ] * xx [ 716 ] ; xx [ 717 ] = xx [ 3 ] * xx [ 673 ] - xx [ 716 ] * xx
[ 7 ] ; xx [ 723 ] = - xx [ 674 ] ; xx [ 724 ] = xx [ 711 ] ; xx [ 725 ] = xx
[ 717 ] ; pm_math_cross3 ( xx + 139 , xx + 723 , xx + 726 ) ;
pm_math_quatCompose ( xx + 287 , xx + 707 , xx + 734 ) ; xx [ 718 ] = xx [ 4
] * xx [ 710 ] ; xx [ 719 ] = xx [ 4 ] * xx [ 708 ] + xx [ 709 ] ; xx [ 723 ]
= xx [ 718 ] ; xx [ 724 ] = xx [ 710 ] ; xx [ 725 ] = - xx [ 719 ] ;
pm_math_cross3 ( xx + 708 , xx + 723 , xx + 739 ) ; xx [ 723 ] = xx [ 707 ] *
xx [ 710 ] ; xx [ 742 ] = xx [ 22 ] + ( xx [ 739 ] - xx [ 707 ] * xx [ 718 ]
) * xx [ 80 ] ; xx [ 743 ] = xx [ 80 ] * ( xx [ 740 ] - xx [ 723 ] ) - xx [ 4
] ; xx [ 744 ] = xx [ 80 ] * ( xx [ 741 ] + xx [ 707 ] * xx [ 719 ] ) ;
pm_math_cross3 ( xx + 742 , xx + 84 , xx + 739 ) ; pm_math_quatXform ( xx +
734 , xx + 739 , xx + 742 ) ; xx [ 719 ] = - ( xx [ 669 ] * xx [ 4 ] ) ; xx [
739 ] = xx [ 719 ] ; xx [ 740 ] = - xx [ 669 ] ; xx [ 741 ] = xx [ 655 ] + xx
[ 624 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 150 , xx + 739 , xx + 748 ) ;
xx [ 739 ] = xx [ 748 ] + xx [ 263 ] ; xx [ 740 ] = xx [ 749 ] + xx [ 264 ] ;
xx [ 741 ] = xx [ 750 ] + xx [ 265 ] ; pm_math_quatXform ( xx + 283 , xx +
739 , xx + 748 ) ; xx [ 724 ] = xx [ 708 ] - xx [ 4 ] * xx [ 709 ] ; xx [ 739
] = - xx [ 710 ] ; xx [ 740 ] = xx [ 718 ] ; xx [ 741 ] = xx [ 724 ] ;
pm_math_cross3 ( xx + 708 , xx + 739 , xx + 792 ) ; xx [ 739 ] = xx [ 4 ] + (
xx [ 723 ] + xx [ 792 ] ) * xx [ 80 ] ; xx [ 740 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 793 ] - xx [ 4 ] * xx [ 723 ] ) ; xx [ 741 ] = xx [ 80 ] * ( xx [ 794
] - xx [ 707 ] * xx [ 724 ] ) ; pm_math_cross3 ( xx + 739 , xx + 84 , xx +
723 ) ; pm_math_quatXform ( xx + 734 , xx + 723 , xx + 739 ) ; xx [ 723 ] =
xx [ 669 ] ; xx [ 724 ] = xx [ 719 ] ; xx [ 725 ] = xx [ 655 ] * xx [ 4 ] -
xx [ 624 ] ; pm_math_quatXform ( xx + 150 , xx + 723 , xx + 792 ) ; xx [ 723
] = xx [ 792 ] + xx [ 46 ] ; xx [ 724 ] = xx [ 793 ] + xx [ 47 ] ; xx [ 725 ]
= xx [ 794 ] + xx [ 48 ] ; pm_math_quatXform ( xx + 283 , xx + 723 , xx + 792
) ; xx [ 723 ] = xx [ 80 ] * ( xx [ 708 ] * xx [ 710 ] - xx [ 707 ] * xx [
709 ] ) ; xx [ 724 ] = ( xx [ 707 ] * xx [ 708 ] + xx [ 709 ] * xx [ 710 ] )
* xx [ 80 ] ; xx [ 725 ] = xx [ 22 ] - ( xx [ 708 ] * xx [ 708 ] + xx [ 709 ]
* xx [ 709 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 723 , xx + 84 , xx + 707 )
; pm_math_quatXform ( xx + 734 , xx + 707 , xx + 723 ) ; xx [ 669 ] = xx [
624 ] * xx [ 70 ] ; xx [ 707 ] = xx [ 655 ] * xx [ 70 ] ; xx [ 708 ] = xx [
624 ] * xx [ 26 ] + xx [ 68 ] * xx [ 655 ] ; xx [ 734 ] = xx [ 669 ] ; xx [
735 ] = xx [ 707 ] ; xx [ 736 ] = - xx [ 708 ] ; pm_math_cross3 ( xx + 183 ,
xx + 734 , xx + 795 ) ; xx [ 734 ] = xx [ 80 ] * ( xx [ 795 ] + xx [ 669 ] *
xx [ 24 ] ) + xx [ 244 ] - xx [ 655 ] - xx [ 119 ] ; xx [ 735 ] = xx [ 624 ]
+ xx [ 80 ] * ( xx [ 796 ] + xx [ 707 ] * xx [ 24 ] ) + xx [ 69 ] + xx [ 117
] ; xx [ 736 ] = ( xx [ 797 ] - xx [ 24 ] * xx [ 708 ] ) * xx [ 80 ] + xx [
75 ] ; pm_math_quatXform ( xx + 283 , xx + 734 , xx + 707 ) ;
pm_math_quatCompose ( xx + 320 , xx + 703 , xx + 734 ) ; xx [ 624 ] = xx [
705 ] * xx [ 705 ] ; xx [ 655 ] = xx [ 706 ] * xx [ 706 ] ; xx [ 669 ] = xx [
704 ] * xx [ 705 ] ; xx [ 710 ] = xx [ 703 ] * xx [ 706 ] ; xx [ 718 ] = xx [
703 ] * xx [ 705 ] ; xx [ 719 ] = xx [ 704 ] * xx [ 706 ] ; xx [ 795 ] = xx [
22 ] - ( xx [ 624 ] + xx [ 655 ] ) * xx [ 80 ] ; xx [ 796 ] = xx [ 80 ] * (
xx [ 669 ] - xx [ 710 ] ) ; xx [ 797 ] = ( xx [ 718 ] + xx [ 719 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 795 , xx + 84 , xx + 798 ) ; pm_math_quatXform (
xx + 734 , xx + 798 , xx + 795 ) ; xx [ 731 ] = xx [ 44 ] * xx [ 605 ] ; xx [
745 ] = xx [ 83 ] * xx [ 613 ] ; xx [ 751 ] = xx [ 731 ] + xx [ 745 ] ; xx [
788 ] = xx [ 605 ] * xx [ 42 ] ; xx [ 789 ] = xx [ 613 ] * xx [ 42 ] ; xx [
798 ] = - xx [ 751 ] ; xx [ 799 ] = - xx [ 788 ] ; xx [ 800 ] = - xx [ 789 ]
; pm_math_cross3 ( xx + 333 , xx + 798 , xx + 801 ) ; xx [ 798 ] = xx [ 80 ]
* ( xx [ 801 ] - xx [ 751 ] * xx [ 40 ] ) + xx [ 336 ] ; xx [ 799 ] = xx [ 80
] * ( xx [ 802 ] - xx [ 788 ] * xx [ 40 ] ) + xx [ 278 ] - xx [ 613 ] - xx [
74 ] ; xx [ 800 ] = xx [ 605 ] + xx [ 80 ] * ( xx [ 803 ] - xx [ 789 ] * xx [
40 ] ) + xx [ 279 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 287 , xx + 798 ,
xx + 801 ) ; xx [ 751 ] = xx [ 704 ] * xx [ 704 ] ; xx [ 788 ] = xx [ 705 ] *
xx [ 706 ] ; xx [ 705 ] = xx [ 703 ] * xx [ 704 ] ; xx [ 798 ] = ( xx [ 710 ]
+ xx [ 669 ] ) * xx [ 80 ] ; xx [ 799 ] = xx [ 22 ] - ( xx [ 655 ] + xx [ 751
] ) * xx [ 80 ] ; xx [ 800 ] = xx [ 80 ] * ( xx [ 788 ] - xx [ 705 ] ) ;
pm_math_cross3 ( xx + 798 , xx + 84 , xx + 804 ) ; pm_math_quatXform ( xx +
734 , xx + 804 , xx + 798 ) ; xx [ 655 ] = xx [ 44 ] * xx [ 576 ] ; xx [ 669
] = xx [ 576 ] * xx [ 42 ] ; xx [ 703 ] = xx [ 669 ] - xx [ 745 ] ; xx [ 704
] = xx [ 44 ] * xx [ 613 ] ; xx [ 804 ] = xx [ 655 ] ; xx [ 805 ] = xx [ 703
] ; xx [ 806 ] = xx [ 704 ] ; pm_math_cross3 ( xx + 333 , xx + 804 , xx + 807
) ; xx [ 804 ] = xx [ 613 ] + ( xx [ 655 ] * xx [ 40 ] + xx [ 807 ] ) * xx [
80 ] + xx [ 274 ] + xx [ 74 ] ; xx [ 805 ] = ( xx [ 40 ] * xx [ 703 ] + xx [
808 ] ) * xx [ 80 ] + xx [ 134 ] ; xx [ 806 ] = ( xx [ 704 ] * xx [ 40 ] + xx
[ 809 ] ) * xx [ 80 ] + xx [ 179 ] - xx [ 576 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 287 , xx + 804 , xx + 807 ) ; xx [ 804 ] = xx [ 80 ]
* ( xx [ 719 ] - xx [ 718 ] ) ; xx [ 805 ] = ( xx [ 705 ] + xx [ 788 ] ) * xx
[ 80 ] ; xx [ 806 ] = xx [ 22 ] - ( xx [ 751 ] + xx [ 624 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 804 , xx + 84 , xx + 703 ) ; pm_math_quatXform ( xx +
734 , xx + 703 , xx + 804 ) ; xx [ 613 ] = xx [ 83 ] * xx [ 576 ] ; xx [ 624
] = xx [ 83 ] * xx [ 605 ] ; xx [ 655 ] = xx [ 669 ] - xx [ 731 ] ; xx [ 703
] = xx [ 613 ] ; xx [ 704 ] = xx [ 624 ] ; xx [ 705 ] = xx [ 655 ] ;
pm_math_cross3 ( xx + 333 , xx + 703 , xx + 734 ) ; xx [ 703 ] = ( xx [ 613 ]
* xx [ 40 ] + xx [ 734 ] ) * xx [ 80 ] + xx [ 133 ] - xx [ 605 ] + xx [ 73 ]
; xx [ 704 ] = xx [ 576 ] + ( xx [ 624 ] * xx [ 40 ] + xx [ 735 ] ) * xx [ 80
] + xx [ 64 ] + xx [ 72 ] ; xx [ 705 ] = ( xx [ 40 ] * xx [ 655 ] + xx [ 736
] ) * xx [ 80 ] + xx [ 82 ] ; pm_math_quatXform ( xx + 287 , xx + 703 , xx +
734 ) ; pm_math_quatCompose ( xx + 349 , xx + 699 , xx + 703 ) ; xx [ 699 ] =
xx [ 500 ] ; xx [ 700 ] = xx [ 578 ] ; xx [ 701 ] = xx [ 491 ] ; xx [ 576 ] =
xx [ 578 ] * xx [ 63 ] ; xx [ 605 ] = xx [ 63 ] * xx [ 500 ] - xx [ 57 ] * xx
[ 491 ] ; xx [ 613 ] = xx [ 578 ] * xx [ 57 ] ; xx [ 810 ] = - xx [ 576 ] ;
xx [ 811 ] = xx [ 605 ] ; xx [ 812 ] = xx [ 613 ] ; pm_math_cross3 ( xx + 699
, xx + 810 , xx + 813 ) ; xx [ 810 ] = xx [ 80 ] * ( xx [ 813 ] + xx [ 512 ]
* xx [ 576 ] ) - xx [ 57 ] ; xx [ 811 ] = xx [ 80 ] * ( xx [ 814 ] - xx [ 512
] * xx [ 605 ] ) ; xx [ 812 ] = ( xx [ 815 ] - xx [ 512 ] * xx [ 613 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 810 , xx + 84 , xx + 813 ) ;
pm_math_quatXform ( xx + 703 , xx + 813 , xx + 810 ) ; xx [ 813 ] = - ( xx [
63 ] * xx [ 712 ] ) ; xx [ 814 ] = xx [ 63 ] * xx [ 467 ] + xx [ 57 ] * xx [
499 ] ; xx [ 815 ] = xx [ 57 ] * xx [ 712 ] ; pm_math_quatXform ( xx + 215 ,
xx + 813 , xx + 816 ) ; xx [ 813 ] = xx [ 816 ] + xx [ 136 ] ; xx [ 814 ] =
xx [ 817 ] + xx [ 137 ] - xx [ 67 ] ; xx [ 815 ] = xx [ 818 ] - xx [ 175 ] ;
pm_math_quatXform ( xx + 320 , xx + 813 , xx + 816 ) ; xx [ 467 ] = xx [ 72 ]
* xx [ 706 ] ; xx [ 499 ] = xx [ 72 ] * xx [ 704 ] - xx [ 73 ] * xx [ 705 ] ;
xx [ 813 ] = - xx [ 467 ] ; xx [ 814 ] = xx [ 73 ] * xx [ 706 ] ; xx [ 815 ]
= xx [ 499 ] ; pm_math_cross3 ( xx + 704 , xx + 813 , xx + 819 ) ; xx [ 576 ]
= xx [ 506 ] * xx [ 491 ] ; xx [ 605 ] = xx [ 535 ] * xx [ 491 ] ; xx [ 491 ]
= xx [ 506 ] * xx [ 500 ] + xx [ 578 ] * xx [ 535 ] ; xx [ 813 ] = xx [ 576 ]
; xx [ 814 ] = xx [ 605 ] ; xx [ 815 ] = - xx [ 491 ] ; pm_math_cross3 ( xx +
699 , xx + 813 , xx + 822 ) ; xx [ 699 ] = xx [ 535 ] + xx [ 80 ] * ( xx [
822 ] + xx [ 512 ] * xx [ 576 ] ) ; xx [ 700 ] = ( xx [ 512 ] * xx [ 605 ] +
xx [ 823 ] ) * xx [ 80 ] - xx [ 506 ] ; xx [ 701 ] = ( xx [ 824 ] - xx [ 512
] * xx [ 491 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 349 , xx + 699 , xx +
813 ) ; xx [ 491 ] = state [ 88 ] + xx [ 784 ] ; xx [ 500 ] = xx [ 491 ] * xx
[ 2 ] ; xx [ 512 ] = cos ( xx [ 500 ] ) ; xx [ 576 ] = xx [ 512 ] * xx [ 536
] ; xx [ 578 ] = sin ( xx [ 500 ] ) ; xx [ 500 ] = xx [ 594 ] * xx [ 578 ] ;
xx [ 605 ] = - ( xx [ 638 ] * xx [ 512 ] + xx [ 578 ] * xx [ 642 ] ) ; xx [
613 ] = xx [ 638 ] * xx [ 578 ] - xx [ 512 ] * xx [ 642 ] ; xx [ 624 ] = xx [
594 ] * xx [ 512 ] - xx [ 578 ] * xx [ 536 ] ; xx [ 699 ] = - ( xx [ 576 ] +
xx [ 500 ] ) ; xx [ 700 ] = xx [ 605 ] ; xx [ 701 ] = xx [ 613 ] ; xx [ 702 ]
= xx [ 624 ] ; xx [ 822 ] = xx [ 668 ] ; xx [ 823 ] = xx [ 671 ] ; xx [ 824 ]
= xx [ 670 ] ; xx [ 825 ] = xx [ 648 ] ; pm_math_quatDeriv ( xx + 822 , xx +
785 , xx + 826 ) ; xx [ 655 ] = xx [ 648 ] + xx [ 829 ] ; xx [ 648 ] = xx [
668 ] + xx [ 826 ] ; xx [ 668 ] = xx [ 671 ] + xx [ 827 ] ; xx [ 669 ] = xx [
670 ] + xx [ 828 ] ; xx [ 670 ] = sqrt ( xx [ 648 ] * xx [ 648 ] + xx [ 668 ]
* xx [ 668 ] + xx [ 669 ] * xx [ 669 ] + xx [ 655 ] * xx [ 655 ] ) ; if ( xx
[ 28 ] > xx [ 670 ] ) xx [ 670 ] = xx [ 28 ] ; xx [ 671 ] = xx [ 655 ] / xx [
670 ] ; xx [ 655 ] = xx [ 648 ] / xx [ 670 ] ; xx [ 648 ] = xx [ 21 ] * xx [
671 ] - xx [ 25 ] * xx [ 655 ] ; xx [ 710 ] = xx [ 669 ] / xx [ 670 ] ; xx [
669 ] = xx [ 668 ] / xx [ 670 ] ; xx [ 668 ] = xx [ 21 ] * xx [ 710 ] + xx [
25 ] * xx [ 669 ] ; xx [ 670 ] = - xx [ 668 ] ; xx [ 712 ] = xx [ 25 ] * xx [
710 ] - xx [ 21 ] * xx [ 669 ] ; xx [ 718 ] = - xx [ 712 ] ; xx [ 719 ] = xx
[ 21 ] * xx [ 655 ] + xx [ 25 ] * xx [ 671 ] ; xx [ 731 ] = - xx [ 719 ] ; xx
[ 822 ] = xx [ 648 ] ; xx [ 823 ] = xx [ 670 ] ; xx [ 824 ] = xx [ 718 ] ; xx
[ 825 ] = xx [ 731 ] ; pm_math_quatCompose ( xx + 699 , xx + 822 , xx + 826 )
; xx [ 699 ] = ( xx [ 712 ] * xx [ 648 ] + xx [ 719 ] * xx [ 668 ] ) * xx [
80 ] ; xx [ 700 ] = xx [ 80 ] * ( xx [ 712 ] * xx [ 719 ] - xx [ 668 ] * xx [
648 ] ) ; xx [ 701 ] = xx [ 22 ] - ( xx [ 668 ] * xx [ 668 ] + xx [ 712 ] *
xx [ 712 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 699 , xx + 267 , xx + 830 )
; pm_math_quatXform ( xx + 826 , xx + 830 , xx + 699 ) ; pm_math_quatXform (
xx + 822 , xx + 126 , xx + 826 ) ; xx [ 702 ] = xx [ 827 ] * xx [ 578 ] - xx
[ 512 ] * xx [ 826 ] ; xx [ 737 ] = xx [ 684 ] * xx [ 512 ] + xx [ 685 ] * xx
[ 578 ] ; xx [ 745 ] = xx [ 80 ] * xx [ 578 ] * xx [ 702 ] - ( xx [ 827 ] -
xx [ 80 ] * xx [ 737 ] * xx [ 578 ] ) - xx [ 685 ] ; xx [ 751 ] = xx [ 826 ]
+ xx [ 80 ] * xx [ 512 ] * xx [ 702 ] + xx [ 80 ] * xx [ 737 ] * xx [ 512 ] -
xx [ 684 ] ; xx [ 702 ] = xx [ 751 ] * xx [ 642 ] ; xx [ 737 ] = xx [ 745 ] *
xx [ 642 ] ; xx [ 788 ] = xx [ 751 ] * xx [ 536 ] + xx [ 594 ] * xx [ 745 ] ;
xx [ 829 ] = - xx [ 702 ] ; xx [ 830 ] = xx [ 737 ] ; xx [ 831 ] = - xx [ 788
] ; pm_math_cross3 ( xx + 689 , xx + 829 , xx + 832 ) ; xx [ 835 ] = - ( xx [
500 ] + xx [ 576 ] ) ; xx [ 836 ] = xx [ 605 ] ; xx [ 837 ] = xx [ 613 ] ; xx
[ 838 ] = xx [ 624 ] ; pm_math_quatCompose ( xx + 835 , xx + 822 , xx + 839 )
; pm_math_quatXform ( xx + 839 , xx + 280 , xx + 689 ) ; pm_math_quatXform (
xx + 822 , xx + 167 , xx + 829 ) ; pm_math_quatXform ( xx + 835 , xx + 829 ,
xx + 843 ) ; pm_math_quatXform ( xx + 839 , xx + 297 , xx + 829 ) ;
pm_math_quatXform ( xx + 822 , xx + 176 , xx + 846 ) ; pm_math_quatXform ( xx
+ 835 , xx + 846 , xx + 822 ) ; xx [ 500 ] = xx [ 102 ] * xx [ 842 ] ; xx [
576 ] = xx [ 102 ] * xx [ 840 ] + xx [ 123 ] * xx [ 841 ] ; xx [ 846 ] = - xx
[ 500 ] ; xx [ 847 ] = - ( xx [ 123 ] * xx [ 842 ] ) ; xx [ 848 ] = xx [ 576
] ; pm_math_cross3 ( xx + 840 , xx + 846 , xx + 849 ) ; xx [ 846 ] = xx [ 670
] ; xx [ 847 ] = xx [ 718 ] ; xx [ 848 ] = xx [ 731 ] ; xx [ 605 ] = xx [ 117
] * xx [ 719 ] ; xx [ 613 ] = xx [ 119 ] * xx [ 719 ] ; xx [ 624 ] = xx [ 117
] * xx [ 668 ] + xx [ 712 ] * xx [ 119 ] ; xx [ 852 ] = xx [ 605 ] ; xx [ 853
] = xx [ 613 ] ; xx [ 854 ] = - xx [ 624 ] ; pm_math_cross3 ( xx + 846 , xx +
852 , xx + 855 ) ; xx [ 846 ] = xx [ 80 ] * ( xx [ 855 ] + xx [ 605 ] * xx [
648 ] ) - xx [ 119 ] ; xx [ 847 ] = xx [ 117 ] + ( xx [ 613 ] * xx [ 648 ] +
xx [ 856 ] ) * xx [ 80 ] ; xx [ 848 ] = ( xx [ 857 ] - xx [ 624 ] * xx [ 648
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 835 , xx + 846 , xx + 852 ) ; xx [
605 ] = xx [ 17 ] * xx [ 2 ] ; xx [ 613 ] = cos ( xx [ 605 ] ) ; xx [ 624 ] =
xx [ 613 ] * xx [ 647 ] ; xx [ 648 ] = sin ( xx [ 605 ] ) ; xx [ 605 ] = xx [
675 ] * xx [ 648 ] ; xx [ 668 ] = - ( xx [ 721 ] * xx [ 613 ] - xx [ 648 ] *
xx [ 722 ] ) ; xx [ 670 ] = xx [ 721 ] * xx [ 648 ] + xx [ 613 ] * xx [ 722 ]
; xx [ 712 ] = xx [ 675 ] * xx [ 613 ] - xx [ 648 ] * xx [ 647 ] ; xx [ 855 ]
= - ( xx [ 624 ] + xx [ 605 ] ) ; xx [ 856 ] = xx [ 668 ] ; xx [ 857 ] = xx [
670 ] ; xx [ 858 ] = xx [ 712 ] ; xx [ 859 ] = xx [ 730 ] ; xx [ 860 ] = xx [
733 ] ; xx [ 861 ] = xx [ 732 ] ; xx [ 862 ] = xx [ 729 ] ; pm_math_quatDeriv
( xx + 859 , xx + 756 , xx + 863 ) ; xx [ 718 ] = xx [ 729 ] + xx [ 866 ] ;
xx [ 719 ] = xx [ 730 ] + xx [ 863 ] ; xx [ 729 ] = xx [ 733 ] + xx [ 864 ] ;
xx [ 730 ] = xx [ 732 ] + xx [ 865 ] ; xx [ 731 ] = sqrt ( xx [ 719 ] * xx [
719 ] + xx [ 729 ] * xx [ 729 ] + xx [ 730 ] * xx [ 730 ] + xx [ 718 ] * xx [
718 ] ) ; if ( xx [ 28 ] > xx [ 731 ] ) xx [ 731 ] = xx [ 28 ] ; xx [ 732 ] =
xx [ 718 ] / xx [ 731 ] ; xx [ 718 ] = xx [ 719 ] / xx [ 731 ] ; xx [ 719 ] =
xx [ 21 ] * xx [ 732 ] - xx [ 25 ] * xx [ 718 ] ; xx [ 733 ] = xx [ 730 ] /
xx [ 731 ] ; xx [ 730 ] = xx [ 729 ] / xx [ 731 ] ; xx [ 729 ] = xx [ 21 ] *
xx [ 733 ] + xx [ 25 ] * xx [ 730 ] ; xx [ 731 ] = - xx [ 729 ] ; xx [ 789 ]
= xx [ 25 ] * xx [ 733 ] - xx [ 21 ] * xx [ 730 ] ; xx [ 825 ] = - xx [ 789 ]
; xx [ 846 ] = xx [ 21 ] * xx [ 718 ] + xx [ 25 ] * xx [ 732 ] ; xx [ 847 ] =
- xx [ 846 ] ; xx [ 859 ] = xx [ 719 ] ; xx [ 860 ] = xx [ 731 ] ; xx [ 861 ]
= xx [ 825 ] ; xx [ 862 ] = xx [ 847 ] ; pm_math_quatCompose ( xx + 855 , xx
+ 859 , xx + 863 ) ; xx [ 855 ] = ( xx [ 789 ] * xx [ 719 ] + xx [ 729 ] * xx
[ 846 ] ) * xx [ 80 ] ; xx [ 856 ] = xx [ 80 ] * ( xx [ 789 ] * xx [ 846 ] -
xx [ 729 ] * xx [ 719 ] ) ; xx [ 857 ] = xx [ 22 ] - ( xx [ 729 ] * xx [ 729
] + xx [ 789 ] * xx [ 789 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 855 , xx +
267 , xx + 867 ) ; pm_math_quatXform ( xx + 863 , xx + 867 , xx + 855 ) ;
pm_math_quatXform ( xx + 859 , xx + 126 , xx + 863 ) ; xx [ 848 ] = xx [ 864
] * xx [ 648 ] - xx [ 613 ] * xx [ 863 ] ; xx [ 858 ] = xx [ 746 ] * xx [ 613
] - xx [ 747 ] * xx [ 648 ] ; xx [ 866 ] = xx [ 80 ] * xx [ 648 ] * xx [ 848
] - ( xx [ 864 ] + xx [ 80 ] * xx [ 858 ] * xx [ 648 ] ) - xx [ 747 ] ; xx [
867 ] = xx [ 863 ] + xx [ 80 ] * xx [ 613 ] * xx [ 848 ] - xx [ 80 ] * xx [
858 ] * xx [ 613 ] + xx [ 746 ] ; xx [ 848 ] = xx [ 867 ] * xx [ 722 ] ; xx [
858 ] = xx [ 866 ] * xx [ 722 ] ; xx [ 868 ] = xx [ 867 ] * xx [ 647 ] + xx [
675 ] * xx [ 866 ] ; xx [ 869 ] = xx [ 848 ] ; xx [ 870 ] = - xx [ 858 ] ; xx
[ 871 ] = - xx [ 868 ] ; pm_math_cross3 ( xx + 752 , xx + 869 , xx + 872 ) ;
xx [ 875 ] = - ( xx [ 605 ] + xx [ 624 ] ) ; xx [ 876 ] = xx [ 668 ] ; xx [
877 ] = xx [ 670 ] ; xx [ 878 ] = xx [ 712 ] ; pm_math_quatCompose ( xx + 875
, xx + 859 , xx + 879 ) ; pm_math_quatXform ( xx + 879 , xx + 280 , xx + 752
) ; pm_math_quatXform ( xx + 859 , xx + 167 , xx + 869 ) ; pm_math_quatXform
( xx + 875 , xx + 869 , xx + 883 ) ; pm_math_quatXform ( xx + 879 , xx + 297
, xx + 869 ) ; pm_math_quatXform ( xx + 859 , xx + 176 , xx + 886 ) ;
pm_math_quatXform ( xx + 875 , xx + 886 , xx + 859 ) ; xx [ 605 ] = xx [ 102
] * xx [ 882 ] ; xx [ 624 ] = xx [ 102 ] * xx [ 880 ] + xx [ 123 ] * xx [ 881
] ; xx [ 886 ] = - xx [ 605 ] ; xx [ 887 ] = - ( xx [ 123 ] * xx [ 882 ] ) ;
xx [ 888 ] = xx [ 624 ] ; pm_math_cross3 ( xx + 880 , xx + 886 , xx + 889 ) ;
xx [ 886 ] = xx [ 731 ] ; xx [ 887 ] = xx [ 825 ] ; xx [ 888 ] = xx [ 847 ] ;
xx [ 668 ] = xx [ 117 ] * xx [ 846 ] ; xx [ 670 ] = xx [ 119 ] * xx [ 846 ] ;
xx [ 712 ] = xx [ 117 ] * xx [ 729 ] + xx [ 789 ] * xx [ 119 ] ; xx [ 892 ] =
xx [ 668 ] ; xx [ 893 ] = xx [ 670 ] ; xx [ 894 ] = - xx [ 712 ] ;
pm_math_cross3 ( xx + 886 , xx + 892 , xx + 895 ) ; xx [ 886 ] = xx [ 80 ] *
( xx [ 895 ] + xx [ 668 ] * xx [ 719 ] ) - xx [ 119 ] ; xx [ 887 ] = xx [ 117
] + ( xx [ 670 ] * xx [ 719 ] + xx [ 896 ] ) * xx [ 80 ] ; xx [ 888 ] = ( xx
[ 897 ] - xx [ 712 ] * xx [ 719 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
875 , xx + 886 , xx + 892 ) ; xx [ 668 ] = state [ 51 ] + xx [ 771 ] ; xx [
670 ] = xx [ 668 ] * xx [ 2 ] ; xx [ 712 ] = cos ( xx [ 670 ] ) ; xx [ 719 ]
= sin ( xx [ 670 ] ) ; xx [ 670 ] = xx [ 712 ] * xx [ 174 ] + xx [ 719 ] * xx
[ 110 ] ; xx [ 729 ] = xx [ 138 ] * xx [ 712 ] - xx [ 719 ] * xx [ 173 ] ; xx
[ 731 ] = xx [ 712 ] * xx [ 173 ] + xx [ 138 ] * xx [ 719 ] ; xx [ 138 ] = xx
[ 712 ] * xx [ 110 ] - xx [ 719 ] * xx [ 174 ] ; xx [ 755 ] = xx [ 670 ] ; xx
[ 756 ] = xx [ 729 ] ; xx [ 757 ] = xx [ 731 ] ; xx [ 758 ] = xx [ 138 ] ;
pm_math_quatCompose ( xx + 154 , xx + 755 , xx + 759 ) ; pm_math_quatCompose
( xx + 150 , xx + 759 , xx + 763 ) ; pm_math_quatCompose ( xx + 146 , xx +
763 , xx + 767 ) ; xx [ 146 ] = xx [ 80 ] * ( xx [ 764 ] * xx [ 766 ] - xx [
763 ] * xx [ 765 ] ) ; xx [ 147 ] = ( xx [ 763 ] * xx [ 764 ] + xx [ 765 ] *
xx [ 766 ] ) * xx [ 80 ] ; xx [ 148 ] = xx [ 22 ] - ( xx [ 764 ] * xx [ 764 ]
+ xx [ 765 ] * xx [ 765 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 146 , xx + 84
, xx + 763 ) ; pm_math_quatXform ( xx + 767 , xx + 763 , xx + 146 ) ; xx [
110 ] = xx [ 54 ] * xx [ 719 ] ; xx [ 149 ] = xx [ 110 ] * xx [ 719 ] ; xx [
173 ] = xx [ 738 ] * xx [ 719 ] ; xx [ 174 ] = xx [ 712 ] * xx [ 173 ] ; xx [
763 ] = xx [ 20 ] - ( xx [ 80 ] * ( xx [ 149 ] - xx [ 174 ] ) - xx [ 54 ] ) ;
xx [ 764 ] = xx [ 712 ] * xx [ 110 ] ; xx [ 110 ] = xx [ 173 ] * xx [ 719 ] ;
xx [ 173 ] = ( xx [ 764 ] + xx [ 110 ] ) * xx [ 80 ] - xx [ 738 ] ; xx [ 765
] = xx [ 763 ] ; xx [ 766 ] = - xx [ 173 ] ; xx [ 767 ] = xx [ 791 ] ;
pm_math_quatXform ( xx + 215 , xx + 765 , xx + 768 ) ; xx [ 771 ] = xx [ 768
] - xx [ 236 ] ; xx [ 772 ] = xx [ 769 ] + xx [ 200 ] ; xx [ 768 ] = xx [ 770
] - xx [ 233 ] ; xx [ 773 ] = xx [ 771 ] ; xx [ 774 ] = xx [ 772 ] ; xx [ 775
] = xx [ 768 ] ; pm_math_quatXform ( xx + 154 , xx + 773 , xx + 776 ) ; xx [
154 ] = xx [ 776 ] + xx [ 220 ] ; xx [ 155 ] = xx [ 777 ] + xx [ 235 ] ; xx [
156 ] = xx [ 778 ] + xx [ 238 ] ; pm_math_quatXform ( xx + 150 , xx + 154 ,
xx + 773 ) ; xx [ 157 ] = xx [ 774 ] + xx [ 246 ] ; xx [ 769 ] = xx [ 773 ] +
xx [ 245 ] ; xx [ 770 ] = xx [ 157 ] * xx [ 35 ] - xx [ 769 ] * xx [ 32 ] ;
xx [ 773 ] = xx [ 80 ] * xx [ 35 ] * xx [ 770 ] - ( xx [ 157 ] - xx [ 259 ] )
- xx [ 135 ] ; xx [ 157 ] = xx [ 769 ] + xx [ 80 ] * xx [ 32 ] * xx [ 770 ] +
xx [ 248 ] - xx [ 131 ] ; xx [ 248 ] = xx [ 15 ] * xx [ 157 ] ; xx [ 259 ] =
xx [ 15 ] * xx [ 773 ] ; xx [ 769 ] = xx [ 3 ] * xx [ 157 ] - xx [ 773 ] * xx
[ 7 ] ; xx [ 774 ] = - xx [ 248 ] ; xx [ 775 ] = xx [ 259 ] ; xx [ 776 ] = xx
[ 769 ] ; pm_math_cross3 ( xx + 139 , xx + 774 , xx + 777 ) ;
pm_math_quatCompose ( xx + 287 , xx + 759 , xx + 780 ) ; xx [ 139 ] = xx [ 4
] * xx [ 762 ] ; xx [ 140 ] = xx [ 4 ] * xx [ 760 ] + xx [ 761 ] ; xx [ 774 ]
= xx [ 139 ] ; xx [ 775 ] = xx [ 762 ] ; xx [ 776 ] = - xx [ 140 ] ;
pm_math_cross3 ( xx + 760 , xx + 774 , xx + 784 ) ; xx [ 141 ] = xx [ 759 ] *
xx [ 762 ] ; xx [ 774 ] = xx [ 22 ] + ( xx [ 784 ] - xx [ 759 ] * xx [ 139 ]
) * xx [ 80 ] ; xx [ 775 ] = xx [ 80 ] * ( xx [ 785 ] - xx [ 141 ] ) - xx [ 4
] ; xx [ 776 ] = xx [ 80 ] * ( xx [ 786 ] + xx [ 759 ] * xx [ 140 ] ) ;
pm_math_cross3 ( xx + 774 , xx + 84 , xx + 784 ) ; pm_math_quatXform ( xx +
780 , xx + 784 , xx + 774 ) ; xx [ 140 ] = - ( xx [ 156 ] * xx [ 4 ] ) ; xx [
784 ] = xx [ 140 ] ; xx [ 785 ] = - xx [ 156 ] ; xx [ 786 ] = xx [ 155 ] + xx
[ 154 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 150 , xx + 784 , xx + 886 ) ;
xx [ 784 ] = xx [ 886 ] + xx [ 263 ] ; xx [ 785 ] = xx [ 887 ] + xx [ 264 ] ;
xx [ 786 ] = xx [ 888 ] + xx [ 265 ] ; pm_math_quatXform ( xx + 283 , xx +
784 , xx + 263 ) ; xx [ 770 ] = xx [ 760 ] - xx [ 4 ] * xx [ 761 ] ; xx [ 784
] = - xx [ 762 ] ; xx [ 785 ] = xx [ 139 ] ; xx [ 786 ] = xx [ 770 ] ;
pm_math_cross3 ( xx + 760 , xx + 784 , xx + 886 ) ; xx [ 784 ] = xx [ 4 ] + (
xx [ 141 ] + xx [ 886 ] ) * xx [ 80 ] ; xx [ 785 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 887 ] - xx [ 4 ] * xx [ 141 ] ) ; xx [ 786 ] = xx [ 80 ] * ( xx [ 888
] - xx [ 759 ] * xx [ 770 ] ) ; pm_math_cross3 ( xx + 784 , xx + 84 , xx +
886 ) ; pm_math_quatXform ( xx + 780 , xx + 886 , xx + 784 ) ; xx [ 886 ] =
xx [ 156 ] ; xx [ 887 ] = xx [ 140 ] ; xx [ 888 ] = xx [ 155 ] * xx [ 4 ] -
xx [ 154 ] ; pm_math_quatXform ( xx + 150 , xx + 886 , xx + 139 ) ; xx [ 150
] = xx [ 139 ] + xx [ 46 ] ; xx [ 151 ] = xx [ 140 ] + xx [ 47 ] ; xx [ 152 ]
= xx [ 141 ] + xx [ 48 ] ; pm_math_quatXform ( xx + 283 , xx + 150 , xx + 46
) ; xx [ 139 ] = xx [ 80 ] * ( xx [ 760 ] * xx [ 762 ] - xx [ 759 ] * xx [
761 ] ) ; xx [ 140 ] = ( xx [ 759 ] * xx [ 760 ] + xx [ 761 ] * xx [ 762 ] )
* xx [ 80 ] ; xx [ 141 ] = xx [ 22 ] - ( xx [ 760 ] * xx [ 760 ] + xx [ 761 ]
* xx [ 761 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 139 , xx + 84 , xx + 150 )
; pm_math_quatXform ( xx + 780 , xx + 150 , xx + 139 ) ; xx [ 150 ] = xx [
154 ] * xx [ 70 ] ; xx [ 151 ] = xx [ 155 ] * xx [ 70 ] ; xx [ 70 ] = xx [
154 ] * xx [ 26 ] + xx [ 68 ] * xx [ 155 ] ; xx [ 759 ] = xx [ 150 ] ; xx [
760 ] = xx [ 151 ] ; xx [ 761 ] = - xx [ 70 ] ; pm_math_cross3 ( xx + 183 ,
xx + 759 , xx + 780 ) ; xx [ 183 ] = xx [ 80 ] * ( xx [ 780 ] + xx [ 150 ] *
xx [ 24 ] ) + xx [ 244 ] - xx [ 155 ] - xx [ 119 ] ; xx [ 184 ] = xx [ 154 ]
+ xx [ 80 ] * ( xx [ 781 ] + xx [ 151 ] * xx [ 24 ] ) + xx [ 69 ] + xx [ 117
] ; xx [ 185 ] = ( xx [ 782 ] - xx [ 24 ] * xx [ 70 ] ) * xx [ 80 ] + xx [ 75
] ; pm_math_quatXform ( xx + 283 , xx + 183 , xx + 68 ) ; pm_math_quatCompose
( xx + 320 , xx + 755 , xx + 150 ) ; xx [ 24 ] = xx [ 731 ] * xx [ 731 ] ; xx
[ 26 ] = xx [ 138 ] * xx [ 138 ] ; xx [ 75 ] = xx [ 731 ] * xx [ 729 ] ; xx [
154 ] = xx [ 670 ] * xx [ 138 ] ; xx [ 155 ] = xx [ 731 ] * xx [ 670 ] ; xx [
156 ] = xx [ 138 ] * xx [ 729 ] ; xx [ 183 ] = xx [ 22 ] - ( xx [ 24 ] + xx [
26 ] ) * xx [ 80 ] ; xx [ 184 ] = xx [ 80 ] * ( xx [ 75 ] - xx [ 154 ] ) ; xx
[ 185 ] = ( xx [ 155 ] + xx [ 156 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 183
, xx + 84 , xx + 755 ) ; pm_math_quatXform ( xx + 150 , xx + 755 , xx + 183 )
; xx [ 244 ] = xx [ 44 ] * xx [ 772 ] ; xx [ 755 ] = xx [ 83 ] * xx [ 768 ] ;
xx [ 756 ] = xx [ 244 ] + xx [ 755 ] ; xx [ 757 ] = xx [ 772 ] * xx [ 42 ] ;
xx [ 758 ] = xx [ 768 ] * xx [ 42 ] ; xx [ 759 ] = - xx [ 756 ] ; xx [ 760 ]
= - xx [ 757 ] ; xx [ 761 ] = - xx [ 758 ] ; pm_math_cross3 ( xx + 333 , xx +
759 , xx + 780 ) ; xx [ 759 ] = xx [ 80 ] * ( xx [ 780 ] - xx [ 756 ] * xx [
40 ] ) + xx [ 336 ] ; xx [ 760 ] = xx [ 80 ] * ( xx [ 781 ] - xx [ 757 ] * xx
[ 40 ] ) + xx [ 278 ] - xx [ 768 ] - xx [ 74 ] ; xx [ 761 ] = xx [ 772 ] + xx
[ 80 ] * ( xx [ 782 ] - xx [ 758 ] * xx [ 40 ] ) + xx [ 279 ] - xx [ 73 ] ;
pm_math_quatXform ( xx + 287 , xx + 759 , xx + 756 ) ; xx [ 278 ] = xx [ 729
] * xx [ 729 ] ; xx [ 279 ] = xx [ 731 ] * xx [ 138 ] ; xx [ 138 ] = xx [ 670
] * xx [ 729 ] ; xx [ 759 ] = ( xx [ 154 ] + xx [ 75 ] ) * xx [ 80 ] ; xx [
760 ] = xx [ 22 ] - ( xx [ 26 ] + xx [ 278 ] ) * xx [ 80 ] ; xx [ 761 ] = xx
[ 80 ] * ( xx [ 279 ] - xx [ 138 ] ) ; pm_math_cross3 ( xx + 759 , xx + 84 ,
xx + 780 ) ; pm_math_quatXform ( xx + 150 , xx + 780 , xx + 759 ) ; xx [ 26 ]
= xx [ 44 ] * xx [ 771 ] ; xx [ 75 ] = xx [ 771 ] * xx [ 42 ] ; xx [ 42 ] =
xx [ 75 ] - xx [ 755 ] ; xx [ 154 ] = xx [ 44 ] * xx [ 768 ] ; xx [ 780 ] =
xx [ 26 ] ; xx [ 781 ] = xx [ 42 ] ; xx [ 782 ] = xx [ 154 ] ; pm_math_cross3
( xx + 333 , xx + 780 , xx + 886 ) ; xx [ 780 ] = xx [ 768 ] + ( xx [ 26 ] *
xx [ 40 ] + xx [ 886 ] ) * xx [ 80 ] + xx [ 274 ] + xx [ 74 ] ; xx [ 781 ] =
( xx [ 40 ] * xx [ 42 ] + xx [ 887 ] ) * xx [ 80 ] + xx [ 134 ] ; xx [ 782 ]
= ( xx [ 154 ] * xx [ 40 ] + xx [ 888 ] ) * xx [ 80 ] + xx [ 179 ] - xx [ 771
] - xx [ 72 ] ; pm_math_quatXform ( xx + 287 , xx + 780 , xx + 886 ) ; xx [
780 ] = xx [ 80 ] * ( xx [ 156 ] - xx [ 155 ] ) ; xx [ 781 ] = ( xx [ 138 ] +
xx [ 279 ] ) * xx [ 80 ] ; xx [ 782 ] = xx [ 22 ] - ( xx [ 278 ] + xx [ 24 ]
) * xx [ 80 ] ; pm_math_cross3 ( xx + 780 , xx + 84 , xx + 154 ) ;
pm_math_quatXform ( xx + 150 , xx + 154 , xx + 780 ) ; xx [ 24 ] = xx [ 83 ]
* xx [ 771 ] ; xx [ 26 ] = xx [ 83 ] * xx [ 772 ] ; xx [ 42 ] = xx [ 75 ] -
xx [ 244 ] ; xx [ 150 ] = xx [ 24 ] ; xx [ 151 ] = xx [ 26 ] ; xx [ 152 ] =
xx [ 42 ] ; pm_math_cross3 ( xx + 333 , xx + 150 , xx + 153 ) ; xx [ 150 ] =
( xx [ 24 ] * xx [ 40 ] + xx [ 153 ] ) * xx [ 80 ] + xx [ 133 ] - xx [ 772 ]
+ xx [ 73 ] ; xx [ 151 ] = xx [ 771 ] + ( xx [ 26 ] * xx [ 40 ] + xx [ 154 ]
) * xx [ 80 ] + xx [ 64 ] + xx [ 72 ] ; xx [ 152 ] = ( xx [ 40 ] * xx [ 42 ]
+ xx [ 155 ] ) * xx [ 80 ] + xx [ 82 ] ; pm_math_quatXform ( xx + 287 , xx +
150 , xx + 153 ) ; xx [ 24 ] = xx [ 712 ] * xx [ 349 ] + xx [ 352 ] * xx [
719 ] ; xx [ 26 ] = xx [ 712 ] * xx [ 350 ] - xx [ 351 ] * xx [ 719 ] ; xx [
40 ] = xx [ 712 ] * xx [ 351 ] + xx [ 350 ] * xx [ 719 ] ; xx [ 42 ] = xx [
712 ] * xx [ 352 ] - xx [ 349 ] * xx [ 719 ] ; xx [ 333 ] = xx [ 24 ] ; xx [
334 ] = xx [ 26 ] ; xx [ 335 ] = xx [ 40 ] ; xx [ 336 ] = xx [ 42 ] ; xx [ 44
] = xx [ 57 ] * xx [ 719 ] ; xx [ 64 ] = xx [ 80 ] * xx [ 712 ] * xx [ 44 ] ;
xx [ 75 ] = xx [ 80 ] * xx [ 44 ] * xx [ 719 ] - xx [ 57 ] ; xx [ 150 ] = xx
[ 74 ] * xx [ 64 ] + xx [ 55 ] ; xx [ 151 ] = xx [ 106 ] + xx [ 74 ] * xx [
75 ] ; xx [ 152 ] = xx [ 73 ] * xx [ 75 ] - xx [ 72 ] * xx [ 64 ] ;
pm_math_quatXform ( xx + 333 , xx + 150 , xx + 770 ) ; xx [ 150 ] = - ( xx [
63 ] * xx [ 173 ] ) ; xx [ 151 ] = - ( xx [ 63 ] * xx [ 763 ] + xx [ 30 ] ) ;
xx [ 152 ] = xx [ 57 ] * xx [ 173 ] ; pm_math_quatXform ( xx + 215 , xx + 150
, xx + 895 ) ; xx [ 150 ] = xx [ 895 ] + xx [ 136 ] ; xx [ 151 ] = xx [ 896 ]
+ xx [ 137 ] - xx [ 67 ] ; xx [ 152 ] = xx [ 897 ] - xx [ 175 ] ;
pm_math_quatXform ( xx + 320 , xx + 150 , xx + 136 ) ; xx [ 150 ] = xx [ 26 ]
; xx [ 151 ] = xx [ 40 ] ; xx [ 152 ] = xx [ 42 ] ; xx [ 44 ] = xx [ 72 ] *
xx [ 42 ] ; xx [ 64 ] = xx [ 73 ] * xx [ 42 ] ; xx [ 42 ] = xx [ 72 ] * xx [
26 ] - xx [ 40 ] * xx [ 73 ] ; xx [ 215 ] = - xx [ 44 ] ; xx [ 216 ] = xx [
64 ] ; xx [ 217 ] = xx [ 42 ] ; pm_math_cross3 ( xx + 150 , xx + 215 , xx +
895 ) ; xx [ 26 ] = xx [ 738 ] - xx [ 80 ] * ( xx [ 764 ] + xx [ 110 ] ) ; xx
[ 40 ] = xx [ 54 ] + ( xx [ 174 ] - xx [ 149 ] ) * xx [ 80 ] ; xx [ 75 ] = xx
[ 352 ] * xx [ 40 ] ; xx [ 82 ] = xx [ 26 ] * xx [ 352 ] ; xx [ 83 ] = xx [
350 ] * xx [ 40 ] + xx [ 26 ] * xx [ 351 ] ; xx [ 149 ] = xx [ 75 ] ; xx [
150 ] = xx [ 82 ] ; xx [ 151 ] = - xx [ 83 ] ; pm_math_cross3 ( xx + 350 , xx
+ 149 , xx + 173 ) ; xx [ 898 ] = xx [ 0 ] ; xx [ 899 ] = xx [ 0 ] ; xx [ 900
] = xx [ 0 ] ; xx [ 901 ] = xx [ 0 ] ; xx [ 902 ] = xx [ 190 ] + xx [ 260 ] +
xx [ 80 ] * ( xx [ 271 ] - xx [ 251 ] * xx [ 14 ] ) ; xx [ 903 ] = xx [ 300 ]
+ xx [ 303 ] ; xx [ 904 ] = xx [ 306 ] + xx [ 309 ] ; xx [ 905 ] = xx [ 316 ]
+ xx [ 294 ] ; xx [ 906 ] = xx [ 291 ] + xx [ 337 ] ; xx [ 907 ] = xx [ 340 ]
+ xx [ 346 ] ; xx [ 908 ] = xx [ 343 ] + xx [ 329 ] ; xx [ 909 ] = xx [ 357 ]
+ xx [ 360 ] ; xx [ 910 ] = xx [ 80 ] * ( xx [ 369 ] - xx [ 31 ] * xx [ 103 ]
) + xx [ 33 ] + xx [ 80 ] * ( xx [ 363 ] - xx [ 349 ] * xx [ 180 ] ) + xx [
73 ] ; xx [ 911 ] = xx [ 0 ] ; xx [ 912 ] = xx [ 0 ] ; xx [ 913 ] = xx [ 0 ]
; xx [ 914 ] = xx [ 0 ] ; xx [ 915 ] = xx [ 0 ] ; xx [ 916 ] = xx [ 0 ] ; xx
[ 917 ] = xx [ 0 ] ; xx [ 918 ] = xx [ 0 ] ; xx [ 919 ] = - ( xx [ 375 ] + xx
[ 388 ] + xx [ 80 ] * ( xx [ 394 ] + xx [ 241 ] * xx [ 378 ] ) ) ; xx [ 920 ]
= - ( xx [ 275 ] + xx [ 406 ] ) ; xx [ 921 ] = - ( xx [ 391 ] + xx [ 380 ] )
; xx [ 922 ] = - ( xx [ 80 ] * ( xx [ 423 ] - xx [ 416 ] * xx [ 187 ] ) + xx
[ 426 ] - xx [ 123 ] ) ; xx [ 923 ] = xx [ 0 ] ; xx [ 924 ] = xx [ 0 ] ; xx [
925 ] = xx [ 0 ] ; xx [ 926 ] = xx [ 0 ] ; xx [ 927 ] = xx [ 0 ] ; xx [ 928 ]
= xx [ 0 ] ; xx [ 929 ] = xx [ 0 ] ; xx [ 930 ] = xx [ 0 ] ; xx [ 931 ] = xx
[ 0 ] ; xx [ 932 ] = xx [ 0 ] ; xx [ 933 ] = xx [ 0 ] ; xx [ 934 ] = xx [ 0 ]
; xx [ 935 ] = xx [ 191 ] + xx [ 258 ] + ( xx [ 255 ] * xx [ 14 ] + xx [ 272
] ) * xx [ 80 ] ; xx [ 936 ] = xx [ 301 ] + xx [ 304 ] ; xx [ 937 ] = xx [
307 ] + xx [ 310 ] ; xx [ 938 ] = xx [ 317 ] + xx [ 295 ] ; xx [ 939 ] = xx [
292 ] + xx [ 338 ] ; xx [ 940 ] = xx [ 341 ] + xx [ 347 ] ; xx [ 941 ] = xx [
344 ] + xx [ 330 ] ; xx [ 942 ] = xx [ 358 ] + xx [ 361 ] ; xx [ 943 ] = ( xx
[ 31 ] * xx [ 111 ] + xx [ 370 ] ) * xx [ 80 ] + xx [ 99 ] + ( xx [ 349 ] *
xx [ 181 ] + xx [ 364 ] ) * xx [ 80 ] + xx [ 72 ] ; xx [ 944 ] = xx [ 0 ] ;
xx [ 945 ] = xx [ 0 ] ; xx [ 946 ] = xx [ 0 ] ; xx [ 947 ] = xx [ 0 ] ; xx [
948 ] = xx [ 0 ] ; xx [ 949 ] = xx [ 0 ] ; xx [ 950 ] = xx [ 0 ] ; xx [ 951 ]
= xx [ 0 ] ; xx [ 952 ] = - ( xx [ 376 ] + xx [ 389 ] + ( xx [ 395 ] - xx [
241 ] * xx [ 387 ] ) * xx [ 80 ] ) ; xx [ 953 ] = - ( xx [ 276 ] + xx [ 407 ]
) ; xx [ 954 ] = - ( xx [ 392 ] + xx [ 381 ] ) ; xx [ 955 ] = - ( ( xx [ 424
] - xx [ 123 ] * xx [ 416 ] * xx [ 419 ] ) * xx [ 80 ] + xx [ 427 ] + xx [
102 ] ) ; xx [ 956 ] = xx [ 0 ] ; xx [ 957 ] = xx [ 0 ] ; xx [ 958 ] = xx [ 0
] ; xx [ 959 ] = xx [ 0 ] ; xx [ 960 ] = xx [ 0 ] ; xx [ 961 ] = xx [ 0 ] ;
xx [ 962 ] = xx [ 0 ] ; xx [ 963 ] = xx [ 0 ] ; xx [ 964 ] = xx [ 0 ] ; xx [
965 ] = xx [ 0 ] ; xx [ 966 ] = xx [ 0 ] ; xx [ 967 ] = xx [ 0 ] ; xx [ 968 ]
= xx [ 192 ] + ( xx [ 14 ] * xx [ 261 ] + xx [ 273 ] ) * xx [ 80 ] ; xx [ 969
] = xx [ 302 ] + xx [ 305 ] ; xx [ 970 ] = xx [ 308 ] + xx [ 311 ] ; xx [ 971
] = xx [ 318 ] + xx [ 296 ] ; xx [ 972 ] = xx [ 293 ] + xx [ 339 ] ; xx [ 973
] = xx [ 342 ] + xx [ 348 ] ; xx [ 974 ] = xx [ 345 ] + xx [ 331 ] ; xx [ 975
] = xx [ 359 ] + xx [ 362 ] ; xx [ 976 ] = ( xx [ 31 ] * xx [ 100 ] + xx [
371 ] ) * xx [ 80 ] + ( xx [ 349 ] * xx [ 182 ] + xx [ 365 ] ) * xx [ 80 ] ;
xx [ 977 ] = xx [ 0 ] ; xx [ 978 ] = xx [ 0 ] ; xx [ 979 ] = xx [ 0 ] ; xx [
980 ] = xx [ 0 ] ; xx [ 981 ] = xx [ 0 ] ; xx [ 982 ] = xx [ 0 ] ; xx [ 983 ]
= xx [ 0 ] ; xx [ 984 ] = xx [ 0 ] ; xx [ 985 ] = - ( xx [ 377 ] + ( xx [ 396
] - xx [ 241 ] * xx [ 390 ] ) * xx [ 80 ] ) ; xx [ 986 ] = - ( xx [ 277 ] +
xx [ 408 ] ) ; xx [ 987 ] = - ( xx [ 393 ] + xx [ 382 ] ) ; xx [ 988 ] = - (
( xx [ 416 ] * xx [ 189 ] + xx [ 425 ] ) * xx [ 80 ] + xx [ 428 ] ) ; xx [
989 ] = xx [ 0 ] ; xx [ 990 ] = xx [ 0 ] ; xx [ 991 ] = xx [ 0 ] ; xx [ 992 ]
= xx [ 0 ] ; xx [ 993 ] = xx [ 0 ] ; xx [ 994 ] = xx [ 0 ] ; xx [ 995 ] = xx
[ 0 ] ; xx [ 996 ] = xx [ 0 ] ; xx [ 997 ] = xx [ 0 ] ; xx [ 998 ] = xx [ 0 ]
; xx [ 999 ] = xx [ 0 ] ; xx [ 1000 ] = xx [ 0 ] ; xx [ 1001 ] = xx [ 420 ] +
xx [ 450 ] + xx [ 80 ] * ( xx [ 459 ] - xx [ 443 ] * xx [ 14 ] ) ; xx [ 1002
] = xx [ 468 ] + xx [ 477 ] ; xx [ 1003 ] = xx [ 474 ] + xx [ 453 ] ; xx [
1004 ] = xx [ 480 ] + xx [ 437 ] ; xx [ 1005 ] = xx [ 483 ] + xx [ 488 ] ; xx
[ 1006 ] = xx [ 493 ] + xx [ 503 ] ; xx [ 1007 ] = xx [ 496 ] + xx [ 464 ] ;
xx [ 1008 ] = xx [ 507 ] + xx [ 516 ] ; xx [ 1009 ] = xx [ 0 ] ; xx [ 1010 ]
= xx [ 80 ] * ( xx [ 519 ] + xx [ 433 ] * xx [ 199 ] ) + xx [ 513 ] - xx [ 73
] ; xx [ 1011 ] = xx [ 0 ] ; xx [ 1012 ] = xx [ 0 ] ; xx [ 1013 ] = xx [ 0 ]
; xx [ 1014 ] = - ( xx [ 429 ] + xx [ 472 ] + xx [ 80 ] * ( xx [ 537 ] - xx [
432 ] * xx [ 315 ] ) ) ; xx [ 1015 ] = - ( xx [ 413 ] + xx [ 544 ] ) ; xx [
1016 ] = - ( xx [ 529 ] + xx [ 522 ] ) ; xx [ 1017 ] = - ( xx [ 80 ] * ( xx [
559 ] - xx [ 555 ] * xx [ 249 ] ) + xx [ 562 ] - xx [ 123 ] ) ; xx [ 1018 ] =
xx [ 0 ] ; xx [ 1019 ] = xx [ 0 ] ; xx [ 1020 ] = xx [ 0 ] ; xx [ 1021 ] = xx
[ 0 ] ; xx [ 1022 ] = xx [ 0 ] ; xx [ 1023 ] = xx [ 0 ] ; xx [ 1024 ] = xx [
0 ] ; xx [ 1025 ] = xx [ 0 ] ; xx [ 1026 ] = xx [ 0 ] ; xx [ 1027 ] = xx [ 0
] ; xx [ 1028 ] = xx [ 0 ] ; xx [ 1029 ] = xx [ 0 ] ; xx [ 1030 ] = xx [ 0 ]
; xx [ 1031 ] = xx [ 0 ] ; xx [ 1032 ] = xx [ 0 ] ; xx [ 1033 ] = xx [ 0 ] ;
xx [ 1034 ] = xx [ 421 ] + xx [ 441 ] + ( xx [ 444 ] * xx [ 14 ] + xx [ 460 ]
) * xx [ 80 ] ; xx [ 1035 ] = xx [ 469 ] + xx [ 478 ] ; xx [ 1036 ] = xx [
475 ] + xx [ 454 ] ; xx [ 1037 ] = xx [ 481 ] + xx [ 438 ] ; xx [ 1038 ] = xx
[ 484 ] + xx [ 489 ] ; xx [ 1039 ] = xx [ 494 ] + xx [ 504 ] ; xx [ 1040 ] =
xx [ 497 ] + xx [ 465 ] ; xx [ 1041 ] = xx [ 508 ] + xx [ 517 ] ; xx [ 1042 ]
= xx [ 0 ] ; xx [ 1043 ] = ( xx [ 520 ] - xx [ 73 ] * xx [ 433 ] * xx [ 436 ]
) * xx [ 80 ] + xx [ 514 ] - xx [ 72 ] ; xx [ 1044 ] = xx [ 0 ] ; xx [ 1045 ]
= xx [ 0 ] ; xx [ 1046 ] = xx [ 0 ] ; xx [ 1047 ] = - ( xx [ 430 ] + xx [ 486
] + ( xx [ 471 ] * xx [ 315 ] + xx [ 538 ] ) * xx [ 80 ] ) ; xx [ 1048 ] = -
( xx [ 414 ] + xx [ 545 ] ) ; xx [ 1049 ] = - ( xx [ 530 ] + xx [ 523 ] ) ;
xx [ 1050 ] = - ( ( xx [ 560 ] - xx [ 123 ] * xx [ 555 ] * xx [ 558 ] ) * xx
[ 80 ] + xx [ 563 ] + xx [ 102 ] ) ; xx [ 1051 ] = xx [ 0 ] ; xx [ 1052 ] =
xx [ 0 ] ; xx [ 1053 ] = xx [ 0 ] ; xx [ 1054 ] = xx [ 0 ] ; xx [ 1055 ] = xx
[ 0 ] ; xx [ 1056 ] = xx [ 0 ] ; xx [ 1057 ] = xx [ 0 ] ; xx [ 1058 ] = xx [
0 ] ; xx [ 1059 ] = xx [ 0 ] ; xx [ 1060 ] = xx [ 0 ] ; xx [ 1061 ] = xx [ 0
] ; xx [ 1062 ] = xx [ 0 ] ; xx [ 1063 ] = xx [ 0 ] ; xx [ 1064 ] = xx [ 0 ]
; xx [ 1065 ] = xx [ 0 ] ; xx [ 1066 ] = xx [ 0 ] ; xx [ 1067 ] = xx [ 422 ]
+ ( xx [ 14 ] * xx [ 452 ] + xx [ 461 ] ) * xx [ 80 ] ; xx [ 1068 ] = xx [
470 ] + xx [ 479 ] ; xx [ 1069 ] = xx [ 476 ] + xx [ 455 ] ; xx [ 1070 ] = xx
[ 482 ] + xx [ 439 ] ; xx [ 1071 ] = xx [ 485 ] + xx [ 490 ] ; xx [ 1072 ] =
xx [ 495 ] + xx [ 505 ] ; xx [ 1073 ] = xx [ 498 ] + xx [ 466 ] ; xx [ 1074 ]
= xx [ 509 ] + xx [ 518 ] ; xx [ 1075 ] = xx [ 0 ] ; xx [ 1076 ] = ( xx [ 433
] * xx [ 237 ] + xx [ 521 ] ) * xx [ 80 ] + xx [ 515 ] ; xx [ 1077 ] = xx [ 0
] ; xx [ 1078 ] = xx [ 0 ] ; xx [ 1079 ] = xx [ 0 ] ; xx [ 1080 ] = - ( xx [
431 ] + ( xx [ 487 ] * xx [ 315 ] + xx [ 539 ] ) * xx [ 80 ] ) ; xx [ 1081 ]
= - ( xx [ 415 ] + xx [ 546 ] ) ; xx [ 1082 ] = - ( xx [ 531 ] + xx [ 524 ] )
; xx [ 1083 ] = - ( ( xx [ 555 ] * xx [ 332 ] + xx [ 561 ] ) * xx [ 80 ] + xx
[ 564 ] ) ; xx [ 1084 ] = xx [ 0 ] ; xx [ 1085 ] = xx [ 0 ] ; xx [ 1086 ] =
xx [ 0 ] ; xx [ 1087 ] = xx [ 0 ] ; xx [ 1088 ] = xx [ 0 ] ; xx [ 1089 ] = xx
[ 0 ] ; xx [ 1090 ] = xx [ 0 ] ; xx [ 1091 ] = xx [ 0 ] ; xx [ 1092 ] = xx [
0 ] ; xx [ 1093 ] = xx [ 0 ] ; xx [ 1094 ] = xx [ 0 ] ; xx [ 1095 ] = xx [ 0
] ; xx [ 1096 ] = xx [ 0 ] ; xx [ 1097 ] = xx [ 0 ] ; xx [ 1098 ] = xx [ 0 ]
; xx [ 1099 ] = xx [ 0 ] ; xx [ 1100 ] = xx [ 549 ] + xx [ 582 ] + xx [ 80 ]
* ( xx [ 588 ] - xx [ 525 ] * xx [ 14 ] ) ; xx [ 1101 ] = xx [ 591 ] + xx [
606 ] ; xx [ 1102 ] = xx [ 610 ] + xx [ 585 ] ; xx [ 1103 ] = xx [ 598 ] + xx
[ 573 ] ; xx [ 1104 ] = xx [ 615 ] + xx [ 620 ] ; xx [ 1105 ] = xx [ 625 ] +
xx [ 631 ] ; xx [ 1106 ] = xx [ 628 ] + xx [ 602 ] ; xx [ 1107 ] = xx [ 634 ]
+ xx [ 644 ] ; xx [ 1108 ] = xx [ 0 ] ; xx [ 1109 ] = xx [ 0 ] ; xx [ 1110 ]
= xx [ 80 ] * ( xx [ 649 ] - xx [ 569 ] * xx [ 367 ] ) + xx [ 639 ] + xx [ 73
] ; xx [ 1111 ] = xx [ 0 ] ; xx [ 1112 ] = xx [ 0 ] ; xx [ 1113 ] = xx [ 0 ]
; xx [ 1114 ] = xx [ 0 ] ; xx [ 1115 ] = xx [ 0 ] ; xx [ 1116 ] = xx [ 0 ] ;
xx [ 1117 ] = xx [ 0 ] ; xx [ 1118 ] = xx [ 0 ] ; xx [ 1119 ] = xx [ 0 ] ; xx
[ 1120 ] = xx [ 0 ] ; xx [ 1121 ] = - ( xx [ 565 ] + xx [ 618 ] + xx [ 80 ] *
( xx [ 662 ] + xx [ 501 ] * xx [ 568 ] ) ) ; xx [ 1122 ] = - ( xx [ 552 ] +
xx [ 665 ] ) ; xx [ 1123 ] = - ( xx [ 659 ] + xx [ 652 ] ) ; xx [ 1124 ] = -
( xx [ 80 ] * ( xx [ 686 ] - xx [ 692 ] * xx [ 373 ] ) + xx [ 696 ] - xx [
123 ] ) ; xx [ 1125 ] = xx [ 0 ] ; xx [ 1126 ] = xx [ 0 ] ; xx [ 1127 ] = xx
[ 0 ] ; xx [ 1128 ] = xx [ 0 ] ; xx [ 1129 ] = xx [ 0 ] ; xx [ 1130 ] = xx [
0 ] ; xx [ 1131 ] = xx [ 0 ] ; xx [ 1132 ] = xx [ 0 ] ; xx [ 1133 ] = xx [
550 ] + xx [ 510 ] + ( xx [ 577 ] * xx [ 14 ] + xx [ 589 ] ) * xx [ 80 ] ; xx
[ 1134 ] = xx [ 592 ] + xx [ 607 ] ; xx [ 1135 ] = xx [ 611 ] + xx [ 586 ] ;
xx [ 1136 ] = xx [ 599 ] + xx [ 574 ] ; xx [ 1137 ] = xx [ 616 ] + xx [ 621 ]
; xx [ 1138 ] = xx [ 626 ] + xx [ 632 ] ; xx [ 1139 ] = xx [ 629 ] + xx [ 603
] ; xx [ 1140 ] = xx [ 635 ] + xx [ 645 ] ; xx [ 1141 ] = xx [ 0 ] ; xx [
1142 ] = xx [ 0 ] ; xx [ 1143 ] = ( xx [ 73 ] * xx [ 569 ] * xx [ 572 ] + xx
[ 650 ] ) * xx [ 80 ] + xx [ 640 ] + xx [ 72 ] ; xx [ 1144 ] = xx [ 0 ] ; xx
[ 1145 ] = xx [ 0 ] ; xx [ 1146 ] = xx [ 0 ] ; xx [ 1147 ] = xx [ 0 ] ; xx [
1148 ] = xx [ 0 ] ; xx [ 1149 ] = xx [ 0 ] ; xx [ 1150 ] = xx [ 0 ] ; xx [
1151 ] = xx [ 0 ] ; xx [ 1152 ] = xx [ 0 ] ; xx [ 1153 ] = xx [ 0 ] ; xx [
1154 ] = - ( xx [ 566 ] + xx [ 619 ] + ( xx [ 663 ] - xx [ 501 ] * xx [ 614 ]
) * xx [ 80 ] ) ; xx [ 1155 ] = - ( xx [ 553 ] + xx [ 666 ] ) ; xx [ 1156 ] =
- ( xx [ 660 ] + xx [ 653 ] ) ; xx [ 1157 ] = - ( ( xx [ 687 ] - xx [ 123 ] *
xx [ 692 ] * xx [ 695 ] ) * xx [ 80 ] + xx [ 697 ] + xx [ 102 ] ) ; xx [ 1158
] = xx [ 0 ] ; xx [ 1159 ] = xx [ 0 ] ; xx [ 1160 ] = xx [ 0 ] ; xx [ 1161 ]
= xx [ 0 ] ; xx [ 1162 ] = xx [ 0 ] ; xx [ 1163 ] = xx [ 0 ] ; xx [ 1164 ] =
xx [ 0 ] ; xx [ 1165 ] = xx [ 0 ] ; xx [ 1166 ] = xx [ 551 ] + ( xx [ 14 ] *
xx [ 583 ] + xx [ 590 ] ) * xx [ 80 ] ; xx [ 1167 ] = xx [ 593 ] + xx [ 608 ]
; xx [ 1168 ] = xx [ 612 ] + xx [ 587 ] ; xx [ 1169 ] = xx [ 600 ] + xx [ 575
] ; xx [ 1170 ] = xx [ 617 ] + xx [ 622 ] ; xx [ 1171 ] = xx [ 627 ] + xx [
633 ] ; xx [ 1172 ] = xx [ 630 ] + xx [ 604 ] ; xx [ 1173 ] = xx [ 636 ] + xx
[ 646 ] ; xx [ 1174 ] = xx [ 0 ] ; xx [ 1175 ] = xx [ 0 ] ; xx [ 1176 ] = (
xx [ 569 ] * xx [ 372 ] + xx [ 651 ] ) * xx [ 80 ] + xx [ 641 ] ; xx [ 1177 ]
= xx [ 0 ] ; xx [ 1178 ] = xx [ 0 ] ; xx [ 1179 ] = xx [ 0 ] ; xx [ 1180 ] =
xx [ 0 ] ; xx [ 1181 ] = xx [ 0 ] ; xx [ 1182 ] = xx [ 0 ] ; xx [ 1183 ] = xx
[ 0 ] ; xx [ 1184 ] = xx [ 0 ] ; xx [ 1185 ] = xx [ 0 ] ; xx [ 1186 ] = xx [
0 ] ; xx [ 1187 ] = - ( xx [ 567 ] + ( xx [ 501 ] * xx [ 623 ] + xx [ 664 ] )
* xx [ 80 ] ) ; xx [ 1188 ] = - ( xx [ 554 ] + xx [ 667 ] ) ; xx [ 1189 ] = -
( xx [ 661 ] + xx [ 654 ] ) ; xx [ 1190 ] = - ( ( xx [ 692 ] * xx [ 412 ] +
xx [ 688 ] ) * xx [ 80 ] + xx [ 698 ] ) ; xx [ 1191 ] = xx [ 0 ] ; xx [ 1192
] = xx [ 0 ] ; xx [ 1193 ] = xx [ 0 ] ; xx [ 1194 ] = xx [ 0 ] ; xx [ 1195 ]
= xx [ 0 ] ; xx [ 1196 ] = xx [ 0 ] ; xx [ 1197 ] = xx [ 0 ] ; xx [ 1198 ] =
xx [ 0 ] ; xx [ 1199 ] = xx [ 681 ] + xx [ 716 ] + xx [ 80 ] * ( xx [ 726 ] -
xx [ 674 ] * xx [ 14 ] ) ; xx [ 1200 ] = xx [ 742 ] + xx [ 748 ] ; xx [ 1201
] = xx [ 739 ] + xx [ 792 ] ; xx [ 1202 ] = xx [ 723 ] + xx [ 707 ] ; xx [
1203 ] = xx [ 795 ] + xx [ 801 ] ; xx [ 1204 ] = xx [ 798 ] + xx [ 807 ] ; xx
[ 1205 ] = xx [ 804 ] + xx [ 734 ] ; xx [ 1206 ] = xx [ 810 ] + xx [ 816 ] ;
xx [ 1207 ] = xx [ 0 ] ; xx [ 1208 ] = xx [ 0 ] ; xx [ 1209 ] = xx [ 0 ] ; xx
[ 1210 ] = xx [ 80 ] * ( xx [ 819 ] - xx [ 703 ] * xx [ 467 ] ) + xx [ 813 ]
+ xx [ 73 ] ; xx [ 1211 ] = xx [ 0 ] ; xx [ 1212 ] = xx [ 0 ] ; xx [ 1213 ] =
xx [ 0 ] ; xx [ 1214 ] = xx [ 0 ] ; xx [ 1215 ] = xx [ 0 ] ; xx [ 1216 ] = xx
[ 0 ] ; xx [ 1217 ] = xx [ 0 ] ; xx [ 1218 ] = xx [ 0 ] ; xx [ 1219 ] = xx [
0 ] ; xx [ 1220 ] = xx [ 0 ] ; xx [ 1221 ] = xx [ 0 ] ; xx [ 1222 ] = xx [ 0
] ; xx [ 1223 ] = xx [ 0 ] ; xx [ 1224 ] = - ( xx [ 699 ] + xx [ 745 ] + xx [
80 ] * ( xx [ 832 ] - xx [ 638 ] * xx [ 702 ] ) ) ; xx [ 1225 ] = - ( xx [
689 ] + xx [ 843 ] ) ; xx [ 1226 ] = - ( xx [ 829 ] + xx [ 822 ] ) ; xx [
1227 ] = - ( xx [ 80 ] * ( xx [ 849 ] - xx [ 839 ] * xx [ 500 ] ) + xx [ 852
] - xx [ 123 ] ) ; xx [ 1228 ] = xx [ 0 ] ; xx [ 1229 ] = xx [ 0 ] ; xx [
1230 ] = xx [ 0 ] ; xx [ 1231 ] = xx [ 0 ] ; xx [ 1232 ] = xx [ 682 ] + xx [
673 ] + ( xx [ 711 ] * xx [ 14 ] + xx [ 727 ] ) * xx [ 80 ] ; xx [ 1233 ] =
xx [ 743 ] + xx [ 749 ] ; xx [ 1234 ] = xx [ 740 ] + xx [ 793 ] ; xx [ 1235 ]
= xx [ 724 ] + xx [ 708 ] ; xx [ 1236 ] = xx [ 796 ] + xx [ 802 ] ; xx [ 1237
] = xx [ 799 ] + xx [ 808 ] ; xx [ 1238 ] = xx [ 805 ] + xx [ 735 ] ; xx [
1239 ] = xx [ 811 ] + xx [ 817 ] ; xx [ 1240 ] = xx [ 0 ] ; xx [ 1241 ] = xx
[ 0 ] ; xx [ 1242 ] = xx [ 0 ] ; xx [ 1243 ] = ( xx [ 73 ] * xx [ 703 ] * xx
[ 706 ] + xx [ 820 ] ) * xx [ 80 ] + xx [ 814 ] + xx [ 72 ] ; xx [ 1244 ] =
xx [ 0 ] ; xx [ 1245 ] = xx [ 0 ] ; xx [ 1246 ] = xx [ 0 ] ; xx [ 1247 ] = xx
[ 0 ] ; xx [ 1248 ] = xx [ 0 ] ; xx [ 1249 ] = xx [ 0 ] ; xx [ 1250 ] = xx [
0 ] ; xx [ 1251 ] = xx [ 0 ] ; xx [ 1252 ] = xx [ 0 ] ; xx [ 1253 ] = xx [ 0
] ; xx [ 1254 ] = xx [ 0 ] ; xx [ 1255 ] = xx [ 0 ] ; xx [ 1256 ] = xx [ 0 ]
; xx [ 1257 ] = - ( xx [ 700 ] + xx [ 751 ] + ( xx [ 638 ] * xx [ 737 ] + xx
[ 833 ] ) * xx [ 80 ] ) ; xx [ 1258 ] = - ( xx [ 690 ] + xx [ 844 ] ) ; xx [
1259 ] = - ( xx [ 830 ] + xx [ 823 ] ) ; xx [ 1260 ] = - ( ( xx [ 850 ] - xx
[ 123 ] * xx [ 839 ] * xx [ 842 ] ) * xx [ 80 ] + xx [ 853 ] + xx [ 102 ] ) ;
xx [ 1261 ] = xx [ 0 ] ; xx [ 1262 ] = xx [ 0 ] ; xx [ 1263 ] = xx [ 0 ] ; xx
[ 1264 ] = xx [ 0 ] ; xx [ 1265 ] = xx [ 683 ] + ( xx [ 14 ] * xx [ 717 ] +
xx [ 728 ] ) * xx [ 80 ] ; xx [ 1266 ] = xx [ 744 ] + xx [ 750 ] ; xx [ 1267
] = xx [ 741 ] + xx [ 794 ] ; xx [ 1268 ] = xx [ 725 ] + xx [ 709 ] ; xx [
1269 ] = xx [ 797 ] + xx [ 803 ] ; xx [ 1270 ] = xx [ 800 ] + xx [ 809 ] ; xx
[ 1271 ] = xx [ 806 ] + xx [ 736 ] ; xx [ 1272 ] = xx [ 812 ] + xx [ 818 ] ;
xx [ 1273 ] = xx [ 0 ] ; xx [ 1274 ] = xx [ 0 ] ; xx [ 1275 ] = xx [ 0 ] ; xx
[ 1276 ] = ( xx [ 703 ] * xx [ 499 ] + xx [ 821 ] ) * xx [ 80 ] + xx [ 815 ]
; xx [ 1277 ] = xx [ 0 ] ; xx [ 1278 ] = xx [ 0 ] ; xx [ 1279 ] = xx [ 0 ] ;
xx [ 1280 ] = xx [ 0 ] ; xx [ 1281 ] = xx [ 0 ] ; xx [ 1282 ] = xx [ 0 ] ; xx
[ 1283 ] = xx [ 0 ] ; xx [ 1284 ] = xx [ 0 ] ; xx [ 1285 ] = xx [ 0 ] ; xx [
1286 ] = xx [ 0 ] ; xx [ 1287 ] = xx [ 0 ] ; xx [ 1288 ] = xx [ 0 ] ; xx [
1289 ] = xx [ 0 ] ; xx [ 1290 ] = - ( xx [ 701 ] + ( xx [ 834 ] - xx [ 638 ]
* xx [ 788 ] ) * xx [ 80 ] ) ; xx [ 1291 ] = - ( xx [ 691 ] + xx [ 845 ] ) ;
xx [ 1292 ] = - ( xx [ 831 ] + xx [ 824 ] ) ; xx [ 1293 ] = - ( ( xx [ 839 ]
* xx [ 576 ] + xx [ 851 ] ) * xx [ 80 ] + xx [ 854 ] ) ; xx [ 1294 ] = - ( xx
[ 855 ] + xx [ 866 ] + xx [ 80 ] * ( xx [ 872 ] + xx [ 721 ] * xx [ 848 ] ) )
; xx [ 1295 ] = - ( xx [ 752 ] + xx [ 883 ] ) ; xx [ 1296 ] = - ( xx [ 869 ]
+ xx [ 859 ] ) ; xx [ 1297 ] = - ( xx [ 80 ] * ( xx [ 889 ] - xx [ 879 ] * xx
[ 605 ] ) + xx [ 892 ] - xx [ 123 ] ) ; xx [ 1298 ] = xx [ 146 ] + xx [ 773 ]
+ xx [ 80 ] * ( xx [ 777 ] - xx [ 248 ] * xx [ 14 ] ) ; xx [ 1299 ] = xx [
774 ] + xx [ 263 ] ; xx [ 1300 ] = xx [ 784 ] + xx [ 46 ] ; xx [ 1301 ] = xx
[ 139 ] + xx [ 68 ] ; xx [ 1302 ] = xx [ 183 ] + xx [ 756 ] ; xx [ 1303 ] =
xx [ 759 ] + xx [ 886 ] ; xx [ 1304 ] = xx [ 780 ] + xx [ 153 ] ; xx [ 1305 ]
= xx [ 770 ] + xx [ 136 ] ; xx [ 1306 ] = xx [ 0 ] ; xx [ 1307 ] = xx [ 0 ] ;
xx [ 1308 ] = xx [ 0 ] ; xx [ 1309 ] = xx [ 0 ] ; xx [ 1310 ] = xx [ 80 ] * (
xx [ 895 ] - xx [ 24 ] * xx [ 44 ] ) + xx [ 26 ] + xx [ 80 ] * ( xx [ 173 ] +
xx [ 349 ] * xx [ 75 ] ) + xx [ 73 ] ; xx [ 1311 ] = xx [ 0 ] ; xx [ 1312 ] =
xx [ 0 ] ; xx [ 1313 ] = xx [ 0 ] ; xx [ 1314 ] = xx [ 0 ] ; xx [ 1315 ] = xx
[ 0 ] ; xx [ 1316 ] = xx [ 0 ] ; xx [ 1317 ] = xx [ 0 ] ; xx [ 1318 ] = xx [
0 ] ; xx [ 1319 ] = xx [ 0 ] ; xx [ 1320 ] = xx [ 0 ] ; xx [ 1321 ] = xx [ 0
] ; xx [ 1322 ] = xx [ 0 ] ; xx [ 1323 ] = xx [ 0 ] ; xx [ 1324 ] = xx [ 0 ]
; xx [ 1325 ] = xx [ 0 ] ; xx [ 1326 ] = xx [ 0 ] ; xx [ 1327 ] = - ( xx [
856 ] + xx [ 867 ] + ( xx [ 873 ] - xx [ 721 ] * xx [ 858 ] ) * xx [ 80 ] ) ;
xx [ 1328 ] = - ( xx [ 753 ] + xx [ 884 ] ) ; xx [ 1329 ] = - ( xx [ 870 ] +
xx [ 860 ] ) ; xx [ 1330 ] = - ( ( xx [ 890 ] - xx [ 123 ] * xx [ 879 ] * xx
[ 882 ] ) * xx [ 80 ] + xx [ 893 ] + xx [ 102 ] ) ; xx [ 1331 ] = xx [ 147 ]
+ xx [ 157 ] + ( xx [ 259 ] * xx [ 14 ] + xx [ 778 ] ) * xx [ 80 ] ; xx [
1332 ] = xx [ 775 ] + xx [ 264 ] ; xx [ 1333 ] = xx [ 785 ] + xx [ 47 ] ; xx
[ 1334 ] = xx [ 140 ] + xx [ 69 ] ; xx [ 1335 ] = xx [ 184 ] + xx [ 757 ] ;
xx [ 1336 ] = xx [ 760 ] + xx [ 887 ] ; xx [ 1337 ] = xx [ 781 ] + xx [ 154 ]
; xx [ 1338 ] = xx [ 771 ] + xx [ 137 ] ; xx [ 1339 ] = xx [ 0 ] ; xx [ 1340
] = xx [ 0 ] ; xx [ 1341 ] = xx [ 0 ] ; xx [ 1342 ] = xx [ 0 ] ; xx [ 1343 ]
= ( xx [ 24 ] * xx [ 64 ] + xx [ 896 ] ) * xx [ 80 ] - xx [ 40 ] + ( xx [ 349
] * xx [ 82 ] + xx [ 174 ] ) * xx [ 80 ] + xx [ 72 ] ; xx [ 1344 ] = xx [ 0 ]
; xx [ 1345 ] = xx [ 0 ] ; xx [ 1346 ] = xx [ 0 ] ; xx [ 1347 ] = xx [ 0 ] ;
xx [ 1348 ] = xx [ 0 ] ; xx [ 1349 ] = xx [ 0 ] ; xx [ 1350 ] = xx [ 0 ] ; xx
[ 1351 ] = xx [ 0 ] ; xx [ 1352 ] = xx [ 0 ] ; xx [ 1353 ] = xx [ 0 ] ; xx [
1354 ] = xx [ 0 ] ; xx [ 1355 ] = xx [ 0 ] ; xx [ 1356 ] = xx [ 0 ] ; xx [
1357 ] = xx [ 0 ] ; xx [ 1358 ] = xx [ 0 ] ; xx [ 1359 ] = xx [ 0 ] ; xx [
1360 ] = - ( xx [ 857 ] + ( xx [ 874 ] - xx [ 721 ] * xx [ 868 ] ) * xx [ 80
] ) ; xx [ 1361 ] = - ( xx [ 754 ] + xx [ 885 ] ) ; xx [ 1362 ] = - ( xx [
871 ] + xx [ 861 ] ) ; xx [ 1363 ] = - ( ( xx [ 879 ] * xx [ 624 ] + xx [ 891
] ) * xx [ 80 ] + xx [ 894 ] ) ; xx [ 1364 ] = xx [ 148 ] + ( xx [ 14 ] * xx
[ 769 ] + xx [ 779 ] ) * xx [ 80 ] ; xx [ 1365 ] = xx [ 776 ] + xx [ 265 ] ;
xx [ 1366 ] = xx [ 786 ] + xx [ 48 ] ; xx [ 1367 ] = xx [ 141 ] + xx [ 70 ] ;
xx [ 1368 ] = xx [ 185 ] + xx [ 758 ] ; xx [ 1369 ] = xx [ 761 ] + xx [ 888 ]
; xx [ 1370 ] = xx [ 782 ] + xx [ 155 ] ; xx [ 1371 ] = xx [ 772 ] + xx [ 138
] ; xx [ 1372 ] = xx [ 0 ] ; xx [ 1373 ] = xx [ 0 ] ; xx [ 1374 ] = xx [ 0 ]
; xx [ 1375 ] = xx [ 0 ] ; xx [ 1376 ] = ( xx [ 24 ] * xx [ 42 ] + xx [ 897 ]
) * xx [ 80 ] + ( xx [ 175 ] - xx [ 349 ] * xx [ 83 ] ) * xx [ 80 ] ; xx [
1377 ] = xx [ 0 ] ; xx [ 1378 ] = xx [ 0 ] ; xx [ 1379 ] = xx [ 0 ] ; xx [
1380 ] = xx [ 0 ] ; xx [ 1381 ] = xx [ 0 ] ; xx [ 1382 ] = xx [ 0 ] ; xx [
1383 ] = xx [ 0 ] ; xx [ 1384 ] = xx [ 0 ] ; xx [ 1385 ] = xx [ 0 ] ; xx [
1386 ] = xx [ 0 ] ; xx [ 1387 ] = xx [ 0 ] ; xx [ 1388 ] = xx [ 0 ] ; xx [
1389 ] = xx [ 0 ] ; xx [ 1390 ] = xx [ 0 ] ; xx [ 1391 ] = xx [ 0 ] ; xx [
1392 ] = xx [ 0 ] ; pm_math_quatXform ( xx + 353 , xx + 84 , xx + 46 ) ;
pm_math_quatXform ( xx + 349 , xx + 210 , xx + 68 ) ; xx [ 136 ] = - xx [ 236
] ; xx [ 137 ] = xx [ 200 ] ; xx [ 138 ] = - xx [ 233 ] ; pm_math_quatXform (
xx + 320 , xx + 136 , xx + 139 ) ; xx [ 136 ] = xx [ 220 ] ; xx [ 137 ] = xx
[ 235 ] ; xx [ 138 ] = xx [ 238 ] ; pm_math_quatXform ( xx + 287 , xx + 136 ,
xx + 146 ) ; pm_math_quatXform ( xx + 283 , xx + 245 , xx + 136 ) ; xx [ 24 ]
= xx [ 131 ] * xx [ 35 ] - xx [ 135 ] * xx [ 32 ] ; xx [ 149 ] = xx [ 80 ] *
xx [ 24 ] * xx [ 35 ] + xx [ 9 ] ; xx [ 150 ] = xx [ 80 ] * xx [ 24 ] * xx [
32 ] + xx [ 135 ] ; xx [ 151 ] = xx [ 11 ] - ( xx [ 32 ] * xx [ 19 ] * xx [
32 ] + xx [ 19 ] * xx [ 35 ] * xx [ 35 ] ) * xx [ 80 ] ; pm_math_quatXform (
xx + 49 , xx + 149 , xx + 31 ) ; xx [ 24 ] = xx [ 139 ] + xx [ 146 ] + xx [
136 ] + xx [ 31 ] - xx [ 43 ] - xx [ 8 ] ; pm_math_quatXform ( xx + 416 , xx
+ 267 , xx + 149 ) ; pm_math_quatXform ( xx + 402 , xx + 384 , xx + 152 ) ;
xx [ 26 ] = xx [ 266 ] * xx [ 188 ] + xx [ 270 ] * xx [ 193 ] ; xx [ 155 ] =
xx [ 80 ] * xx [ 26 ] * xx [ 193 ] + xx [ 59 ] ; xx [ 156 ] = xx [ 80 ] * xx
[ 26 ] * xx [ 188 ] - xx [ 266 ] ; xx [ 157 ] = ( xx [ 188 ] * xx [ 61 ] * xx
[ 188 ] + xx [ 61 ] * xx [ 193 ] * xx [ 193 ] ) * xx [ 80 ] - xx [ 71 ] ;
pm_math_quatXform ( xx + 91 , xx + 155 , xx + 173 ) ; xx [ 26 ] = xx [ 140 ]
+ xx [ 147 ] + xx [ 137 ] + xx [ 32 ] - xx [ 98 ] + xx [ 23 ] ; xx [ 31 ] =
xx [ 141 ] + xx [ 148 ] + xx [ 138 ] + xx [ 33 ] - xx [ 34 ] + xx [ 27 ] ;
pm_math_quatXform ( xx + 433 , xx + 84 , xx + 136 ) ; pm_math_quatXform ( xx
+ 349 , xx + 447 , xx + 139 ) ; pm_math_quatXform ( xx + 555 , xx + 267 , xx
+ 146 ) ; pm_math_quatXform ( xx + 540 , xx + 526 , xx + 155 ) ; xx [ 32 ] =
xx [ 410 ] * xx [ 252 ] - xx [ 409 ] * xx [ 366 ] ; xx [ 179 ] = xx [ 80 ] *
xx [ 32 ] * xx [ 366 ] + xx [ 39 ] ; xx [ 180 ] = xx [ 80 ] * xx [ 32 ] * xx
[ 252 ] - xx [ 410 ] ; xx [ 181 ] = xx [ 89 ] - ( xx [ 252 ] * xx [ 107 ] *
xx [ 252 ] + xx [ 107 ] * xx [ 366 ] * xx [ 366 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 142 , xx + 179 , xx + 182 ) ; pm_math_quatXform ( xx
+ 569 , xx + 84 , xx + 179 ) ; pm_math_quatXform ( xx + 349 , xx + 579 , xx +
187 ) ; pm_math_quatXform ( xx + 692 , xx + 267 , xx + 190 ) ;
pm_math_quatXform ( xx + 676 , xx + 656 , xx + 210 ) ; xx [ 32 ] = xx [ 547 ]
* xx [ 440 ] - xx [ 548 ] * xx [ 383 ] ; xx [ 215 ] = xx [ 80 ] * xx [ 32 ] *
xx [ 440 ] + xx [ 130 ] ; xx [ 216 ] = xx [ 80 ] * xx [ 32 ] * xx [ 383 ] +
xx [ 548 ] ; xx [ 217 ] = ( xx [ 383 ] * xx [ 162 ] * xx [ 383 ] + xx [ 162 ]
* xx [ 440 ] * xx [ 440 ] ) * xx [ 80 ] - xx [ 163 ] ; pm_math_quatXform ( xx
+ 158 , xx + 215 , xx + 235 ) ; pm_math_quatXform ( xx + 703 , xx + 84 , xx +
215 ) ; pm_math_quatXform ( xx + 349 , xx + 713 , xx + 244 ) ;
pm_math_quatXform ( xx + 839 , xx + 267 , xx + 247 ) ; pm_math_quatXform ( xx
+ 835 , xx + 826 , xx + 258 ) ; xx [ 32 ] = xx [ 684 ] * xx [ 578 ] - xx [
685 ] * xx [ 512 ] ; xx [ 263 ] = xx [ 80 ] * xx [ 32 ] * xx [ 578 ] + xx [
196 ] ; xx [ 264 ] = xx [ 80 ] * xx [ 32 ] * xx [ 512 ] + xx [ 685 ] ; xx [
265 ] = ( xx [ 512 ] * xx [ 197 ] * xx [ 512 ] + xx [ 197 ] * xx [ 578 ] * xx
[ 578 ] ) * xx [ 80 ] - xx [ 206 ] ; pm_math_quatXform ( xx + 202 , xx + 263
, xx + 271 ) ; pm_math_quatXform ( xx + 333 , xx + 84 , xx + 263 ) ;
pm_math_quatXform ( xx + 349 , xx + 765 , xx + 274 ) ; pm_math_quatXform ( xx
+ 879 , xx + 267 , xx + 277 ) ; pm_math_quatXform ( xx + 875 , xx + 863 , xx
+ 283 ) ; xx [ 32 ] = xx [ 747 ] * xx [ 613 ] + xx [ 746 ] * xx [ 648 ] ; xx
[ 286 ] = xx [ 194 ] - xx [ 80 ] * xx [ 32 ] * xx [ 648 ] ; xx [ 287 ] = xx [
747 ] - xx [ 80 ] * xx [ 32 ] * xx [ 613 ] ; xx [ 288 ] = ( xx [ 613 ] * xx [
221 ] * xx [ 613 ] + xx [ 221 ] * xx [ 648 ] * xx [ 648 ] ) * xx [ 80 ] - xx
[ 222 ] ; pm_math_quatXform ( xx + 226 , xx + 286 , xx + 289 ) ; xx [ 329 ] =
- ( xx [ 46 ] + xx [ 68 ] + xx [ 24 ] - ( xx [ 149 ] + xx [ 152 ] + xx [ 173
] - xx [ 97 ] ) - xx [ 78 ] ) ; xx [ 330 ] = - ( xx [ 47 ] + xx [ 69 ] + xx [
26 ] - ( xx [ 150 ] + xx [ 153 ] + xx [ 174 ] - xx [ 101 ] ) - xx [ 88 ] ) ;
xx [ 331 ] = - ( xx [ 48 ] + xx [ 70 ] + xx [ 31 ] - ( xx [ 151 ] + xx [ 154
] + xx [ 175 ] - xx [ 36 ] ) + xx [ 37 ] ) ; xx [ 332 ] = - ( xx [ 136 ] + xx
[ 139 ] + xx [ 24 ] - ( xx [ 146 ] + xx [ 155 ] + xx [ 182 ] - xx [ 120 ] ) -
xx [ 38 ] ) ; xx [ 333 ] = - ( xx [ 137 ] + xx [ 140 ] + xx [ 26 ] - ( xx [
147 ] + xx [ 156 ] + xx [ 183 ] - xx [ 121 ] ) - xx [ 118 ] ) ; xx [ 334 ] =
- ( xx [ 138 ] + xx [ 141 ] + xx [ 31 ] - ( xx [ 148 ] + xx [ 157 ] + xx [
184 ] - xx [ 124 ] ) - xx [ 6 ] ) ; xx [ 335 ] = - ( xx [ 179 ] + xx [ 187 ]
+ xx [ 24 ] - ( xx [ 190 ] + xx [ 210 ] + xx [ 235 ] - xx [ 170 ] ) + xx [
129 ] ) ; xx [ 336 ] = - ( xx [ 180 ] + xx [ 188 ] + xx [ 26 ] - ( xx [ 191 ]
+ xx [ 211 ] + xx [ 236 ] - xx [ 171 ] ) - xx [ 164 ] ) ; xx [ 337 ] = - ( xx
[ 181 ] + xx [ 189 ] + xx [ 31 ] - ( xx [ 192 ] + xx [ 212 ] + xx [ 237 ] -
xx [ 172 ] ) + xx [ 166 ] ) ; xx [ 338 ] = - ( xx [ 215 ] + xx [ 244 ] + xx [
24 ] - ( xx [ 247 ] + xx [ 258 ] + xx [ 271 ] - xx [ 209 ] ) + xx [ 207 ] ) ;
xx [ 339 ] = - ( xx [ 216 ] + xx [ 245 ] + xx [ 26 ] - ( xx [ 248 ] + xx [
259 ] + xx [ 272 ] - xx [ 213 ] ) - xx [ 208 ] ) ; xx [ 340 ] = - ( xx [ 217
] + xx [ 246 ] + xx [ 31 ] - ( xx [ 249 ] + xx [ 260 ] + xx [ 273 ] - xx [
214 ] ) + xx [ 195 ] ) ; xx [ 341 ] = - ( xx [ 263 ] + xx [ 274 ] + xx [ 24 ]
- ( xx [ 277 ] + xx [ 283 ] + xx [ 289 ] - xx [ 230 ] ) - xx [ 201 ] ) ; xx [
342 ] = - ( xx [ 264 ] + xx [ 275 ] + xx [ 26 ] - ( xx [ 278 ] + xx [ 284 ] +
xx [ 290 ] - xx [ 231 ] ) - xx [ 223 ] ) ; xx [ 343 ] = - ( xx [ 265 ] + xx [
276 ] + xx [ 31 ] - ( xx [ 279 ] + xx [ 285 ] + xx [ 291 ] - xx [ 232 ] ) +
xx [ 58 ] ) ; memcpy ( xx + 1393 , xx + 898 , 495 * sizeof ( double ) ) ;
factorAndSolveWide ( 15 , 33 , xx + 1393 , xx + 344 , xx + 380 , ii + 0 , xx
+ 329 , xx [ 16 ] , xx + 549 ) ; xx [ 24 ] = xx [ 17 ] + xx [ 549 ] ; xx [
136 ] = xx [ 718 ] ; xx [ 137 ] = xx [ 730 ] ; xx [ 138 ] = xx [ 733 ] ; xx [
139 ] = xx [ 732 ] ; pm_math_quatDeriv ( xx + 136 , xx + 550 , xx + 146 ) ;
xx [ 17 ] = xx [ 718 ] + xx [ 146 ] ; xx [ 26 ] = xx [ 730 ] + xx [ 147 ] ;
xx [ 31 ] = xx [ 733 ] + xx [ 148 ] ; xx [ 32 ] = xx [ 732 ] + xx [ 149 ] ;
xx [ 33 ] = sqrt ( xx [ 17 ] * xx [ 17 ] + xx [ 26 ] * xx [ 26 ] + xx [ 31 ]
* xx [ 31 ] + xx [ 32 ] * xx [ 32 ] ) ; if ( xx [ 28 ] > xx [ 33 ] ) xx [ 33
] = xx [ 28 ] ; xx [ 35 ] = xx [ 17 ] / xx [ 33 ] ; xx [ 17 ] = xx [ 26 ] /
xx [ 33 ] ; xx [ 26 ] = xx [ 31 ] / xx [ 33 ] ; xx [ 31 ] = xx [ 32 ] / xx [
33 ] ; xx [ 32 ] = xx [ 18 ] + xx [ 553 ] ; xx [ 136 ] = xx [ 53 ] ; xx [ 137
] = xx [ 29 ] ; xx [ 138 ] = xx [ 66 ] ; xx [ 139 ] = xx [ 65 ] ;
pm_math_quatDeriv ( xx + 136 , xx + 554 , xx + 146 ) ; xx [ 18 ] = xx [ 53 ]
+ xx [ 146 ] ; xx [ 33 ] = xx [ 29 ] + xx [ 147 ] ; xx [ 29 ] = xx [ 66 ] +
xx [ 148 ] ; xx [ 40 ] = xx [ 65 ] + xx [ 149 ] ; xx [ 42 ] = sqrt ( xx [ 18
] * xx [ 18 ] + xx [ 33 ] * xx [ 33 ] + xx [ 29 ] * xx [ 29 ] + xx [ 40 ] *
xx [ 40 ] ) ; if ( xx [ 28 ] > xx [ 42 ] ) xx [ 42 ] = xx [ 28 ] ; xx [ 44 ]
= xx [ 18 ] / xx [ 42 ] ; xx [ 18 ] = xx [ 33 ] / xx [ 42 ] ; xx [ 33 ] = xx
[ 29 ] / xx [ 42 ] ; xx [ 29 ] = xx [ 40 ] / xx [ 42 ] ; xx [ 136 ] = xx [ 76
] ; xx [ 137 ] = xx [ 45 ] ; xx [ 138 ] = xx [ 81 ] ; xx [ 139 ] = xx [ 77 ]
; pm_math_quatDeriv ( xx + 136 , xx + 557 , xx + 146 ) ; xx [ 40 ] = xx [ 76
] + xx [ 146 ] ; xx [ 42 ] = xx [ 45 ] + xx [ 147 ] ; xx [ 45 ] = xx [ 81 ] +
xx [ 148 ] ; xx [ 46 ] = xx [ 77 ] + xx [ 149 ] ; xx [ 47 ] = sqrt ( xx [ 40
] * xx [ 40 ] + xx [ 42 ] * xx [ 42 ] + xx [ 45 ] * xx [ 45 ] + xx [ 46 ] *
xx [ 46 ] ) ; if ( xx [ 28 ] > xx [ 47 ] ) xx [ 47 ] = xx [ 28 ] ; xx [ 48 ]
= xx [ 40 ] / xx [ 47 ] ; xx [ 40 ] = xx [ 42 ] / xx [ 47 ] ; xx [ 42 ] = xx
[ 45 ] / xx [ 47 ] ; xx [ 45 ] = xx [ 46 ] / xx [ 47 ] ; xx [ 46 ] = xx [ 132
] + xx [ 560 ] ; xx [ 47 ] = xx [ 109 ] + xx [ 561 ] ; xx [ 53 ] = xx [ 198 ]
+ xx [ 562 ] ; xx [ 64 ] = xx [ 328 ] + xx [ 563 ] ; xx [ 65 ] = xx [ 442 ] +
xx [ 564 ] ; xx [ 66 ] = xx [ 668 ] + xx [ 565 ] ; xx [ 68 ] = xx [ 219 ] +
xx [ 566 ] ; xx [ 136 ] = xx [ 397 ] ; xx [ 137 ] = xx [ 374 ] ; xx [ 138 ] =
xx [ 411 ] ; xx [ 139 ] = xx [ 398 ] ; pm_math_quatDeriv ( xx + 136 , xx +
567 , xx + 146 ) ; xx [ 69 ] = xx [ 397 ] + xx [ 146 ] ; xx [ 70 ] = xx [ 374
] + xx [ 147 ] ; xx [ 75 ] = xx [ 411 ] + xx [ 148 ] ; xx [ 76 ] = xx [ 398 ]
+ xx [ 149 ] ; xx [ 77 ] = sqrt ( xx [ 69 ] * xx [ 69 ] + xx [ 70 ] * xx [ 70
] + xx [ 75 ] * xx [ 75 ] + xx [ 76 ] * xx [ 76 ] ) ; if ( xx [ 28 ] > xx [
77 ] ) xx [ 77 ] = xx [ 28 ] ; xx [ 81 ] = xx [ 69 ] / xx [ 77 ] ; xx [ 69 ]
= xx [ 70 ] / xx [ 77 ] ; xx [ 70 ] = xx [ 75 ] / xx [ 77 ] ; xx [ 75 ] = xx
[ 76 ] / xx [ 77 ] ; xx [ 76 ] = xx [ 186 ] + xx [ 570 ] ; xx [ 136 ] = xx [
234 ] ; xx [ 137 ] = xx [ 250 ] ; xx [ 138 ] = xx [ 313 ] ; xx [ 139 ] = xx [
253 ] ; pm_math_quatDeriv ( xx + 136 , xx + 571 , xx + 146 ) ; xx [ 77 ] = xx
[ 234 ] + xx [ 146 ] ; xx [ 82 ] = xx [ 250 ] + xx [ 147 ] ; xx [ 83 ] = xx [
313 ] + xx [ 148 ] ; xx [ 99 ] = xx [ 253 ] + xx [ 149 ] ; xx [ 100 ] = sqrt
( xx [ 77 ] * xx [ 77 ] + xx [ 82 ] * xx [ 82 ] + xx [ 83 ] * xx [ 83 ] + xx
[ 99 ] * xx [ 99 ] ) ; if ( xx [ 28 ] > xx [ 100 ] ) xx [ 100 ] = xx [ 28 ] ;
xx [ 103 ] = xx [ 77 ] / xx [ 100 ] ; xx [ 77 ] = xx [ 82 ] / xx [ 100 ] ; xx
[ 82 ] = xx [ 83 ] / xx [ 100 ] ; xx [ 83 ] = xx [ 99 ] / xx [ 100 ] ; xx [
99 ] = xx [ 368 ] + xx [ 574 ] ; xx [ 136 ] = xx [ 492 ] ; xx [ 137 ] = xx [
511 ] ; xx [ 138 ] = xx [ 534 ] ; xx [ 139 ] = xx [ 533 ] ; pm_math_quatDeriv
( xx + 136 , xx + 575 , xx + 146 ) ; xx [ 100 ] = xx [ 492 ] + xx [ 146 ] ;
xx [ 109 ] = xx [ 511 ] + xx [ 147 ] ; xx [ 110 ] = xx [ 534 ] + xx [ 148 ] ;
xx [ 111 ] = xx [ 533 ] + xx [ 149 ] ; xx [ 132 ] = sqrt ( xx [ 100 ] * xx [
100 ] + xx [ 109 ] * xx [ 109 ] + xx [ 110 ] * xx [ 110 ] + xx [ 111 ] * xx [
111 ] ) ; if ( xx [ 28 ] > xx [ 132 ] ) xx [ 132 ] = xx [ 28 ] ; xx [ 133 ] =
xx [ 100 ] / xx [ 132 ] ; xx [ 100 ] = xx [ 109 ] / xx [ 132 ] ; xx [ 109 ] =
xx [ 110 ] / xx [ 132 ] ; xx [ 110 ] = xx [ 111 ] / xx [ 132 ] ; xx [ 111 ] =
xx [ 491 ] + xx [ 578 ] ; xx [ 136 ] = xx [ 655 ] ; xx [ 137 ] = xx [ 669 ] ;
xx [ 138 ] = xx [ 710 ] ; xx [ 139 ] = xx [ 671 ] ; pm_math_quatDeriv ( xx +
136 , xx + 579 , xx + 146 ) ; xx [ 132 ] = xx [ 655 ] + xx [ 146 ] ; xx [ 134
] = xx [ 669 ] + xx [ 147 ] ; xx [ 136 ] = xx [ 710 ] + xx [ 148 ] ; xx [ 137
] = xx [ 671 ] + xx [ 149 ] ; xx [ 138 ] = sqrt ( xx [ 132 ] * xx [ 132 ] +
xx [ 134 ] * xx [ 134 ] + xx [ 136 ] * xx [ 136 ] + xx [ 137 ] * xx [ 137 ] )
; if ( xx [ 28 ] > xx [ 138 ] ) xx [ 138 ] = xx [ 28 ] ; xx [ 28 ] = xx [ 132
] / xx [ 138 ] ; xx [ 132 ] = xx [ 134 ] / xx [ 138 ] ; xx [ 134 ] = xx [ 136
] / xx [ 138 ] ; xx [ 136 ] = xx [ 137 ] / xx [ 138 ] ; xx [ 792 ] = state [
0 ] ; xx [ 793 ] = state [ 1 ] ; xx [ 794 ] = state [ 2 ] ; xx [ 795 ] =
state [ 3 ] ; xx [ 796 ] = state [ 4 ] ; xx [ 797 ] = state [ 5 ] ; xx [ 798
] = state [ 6 ] ; xx [ 799 ] = state [ 7 ] ; xx [ 800 ] = state [ 8 ] ; xx [
801 ] = state [ 9 ] ; xx [ 802 ] = state [ 10 ] ; xx [ 803 ] = state [ 11 ] ;
xx [ 804 ] = state [ 12 ] ; xx [ 805 ] = state [ 13 ] ; xx [ 806 ] = xx [ 24
] ; xx [ 807 ] = state [ 15 ] ; xx [ 808 ] = xx [ 35 ] ; xx [ 809 ] = xx [ 17
] ; xx [ 810 ] = xx [ 26 ] ; xx [ 811 ] = xx [ 31 ] ; xx [ 812 ] = state [ 20
] ; xx [ 813 ] = state [ 21 ] ; xx [ 814 ] = state [ 22 ] ; xx [ 815 ] =
state [ 23 ] ; xx [ 816 ] = state [ 24 ] ; xx [ 817 ] = xx [ 32 ] ; xx [ 818
] = state [ 26 ] ; xx [ 819 ] = xx [ 44 ] ; xx [ 820 ] = xx [ 18 ] ; xx [ 821
] = xx [ 33 ] ; xx [ 822 ] = xx [ 29 ] ; xx [ 823 ] = state [ 31 ] ; xx [ 824
] = state [ 32 ] ; xx [ 825 ] = state [ 33 ] ; xx [ 826 ] = xx [ 48 ] ; xx [
827 ] = xx [ 40 ] ; xx [ 828 ] = xx [ 42 ] ; xx [ 829 ] = xx [ 45 ] ; xx [
830 ] = state [ 38 ] ; xx [ 831 ] = state [ 39 ] ; xx [ 832 ] = state [ 40 ]
; xx [ 833 ] = xx [ 46 ] ; xx [ 834 ] = state [ 42 ] ; xx [ 835 ] = xx [ 47 ]
; xx [ 836 ] = state [ 44 ] ; xx [ 837 ] = xx [ 53 ] ; xx [ 838 ] = state [
46 ] ; xx [ 839 ] = xx [ 64 ] ; xx [ 840 ] = state [ 48 ] ; xx [ 841 ] = xx [
65 ] ; xx [ 842 ] = state [ 50 ] ; xx [ 843 ] = xx [ 66 ] ; xx [ 844 ] =
state [ 52 ] ; xx [ 845 ] = state [ 53 ] ; xx [ 846 ] = state [ 54 ] ; xx [
847 ] = xx [ 68 ] ; xx [ 848 ] = state [ 56 ] ; xx [ 849 ] = xx [ 81 ] ; xx [
850 ] = xx [ 69 ] ; xx [ 851 ] = xx [ 70 ] ; xx [ 852 ] = xx [ 75 ] ; xx [
853 ] = state [ 61 ] ; xx [ 854 ] = state [ 62 ] ; xx [ 855 ] = state [ 63 ]
; xx [ 856 ] = state [ 64 ] ; xx [ 857 ] = state [ 65 ] ; xx [ 858 ] = xx [
76 ] ; xx [ 859 ] = state [ 67 ] ; xx [ 860 ] = xx [ 103 ] ; xx [ 861 ] = xx
[ 77 ] ; xx [ 862 ] = xx [ 82 ] ; xx [ 863 ] = xx [ 83 ] ; xx [ 864 ] = state
[ 72 ] ; xx [ 865 ] = state [ 73 ] ; xx [ 866 ] = state [ 74 ] ; xx [ 867 ] =
state [ 75 ] ; xx [ 868 ] = state [ 76 ] ; xx [ 869 ] = xx [ 99 ] ; xx [ 870
] = state [ 78 ] ; xx [ 871 ] = xx [ 133 ] ; xx [ 872 ] = xx [ 100 ] ; xx [
873 ] = xx [ 109 ] ; xx [ 874 ] = xx [ 110 ] ; xx [ 875 ] = state [ 83 ] ; xx
[ 876 ] = state [ 84 ] ; xx [ 877 ] = state [ 85 ] ; xx [ 878 ] = state [ 86
] ; xx [ 879 ] = state [ 87 ] ; xx [ 880 ] = xx [ 111 ] ; xx [ 881 ] = state
[ 89 ] ; xx [ 882 ] = xx [ 28 ] ; xx [ 883 ] = xx [ 132 ] ; xx [ 884 ] = xx [
134 ] ; xx [ 885 ] = xx [ 136 ] ; xx [ 886 ] = state [ 94 ] ; xx [ 887 ] =
state [ 95 ] ; xx [ 888 ] = state [ 96 ] ; xx [ 137 ] = xx [ 47 ] * xx [ 2 ]
; xx [ 47 ] = cos ( xx [ 137 ] ) ; xx [ 138 ] = xx [ 32 ] * xx [ 2 ] ; xx [
32 ] = sin ( xx [ 138 ] ) ; xx [ 139 ] = cos ( xx [ 138 ] ) ; xx [ 146 ] = -
( xx [ 32 ] * xx [ 7 ] - xx [ 3 ] * xx [ 139 ] ) ; xx [ 147 ] = - ( xx [ 139
] * xx [ 14 ] + xx [ 15 ] * xx [ 32 ] ) ; xx [ 148 ] = xx [ 32 ] * xx [ 14 ]
- xx [ 15 ] * xx [ 139 ] ; xx [ 149 ] = xx [ 3 ] * xx [ 32 ] + xx [ 139 ] *
xx [ 7 ] ; xx [ 150 ] = xx [ 21 ] * xx [ 29 ] - xx [ 25 ] * xx [ 44 ] ; xx [
151 ] = - ( xx [ 21 ] * xx [ 33 ] + xx [ 25 ] * xx [ 18 ] ) ; xx [ 152 ] = -
( xx [ 25 ] * xx [ 33 ] - xx [ 21 ] * xx [ 18 ] ) ; xx [ 153 ] = - ( xx [ 21
] * xx [ 44 ] + xx [ 25 ] * xx [ 29 ] ) ; pm_math_quatCompose ( xx + 146 , xx
+ 150 , xx + 154 ) ; xx [ 179 ] = xx [ 25 ] * xx [ 45 ] - xx [ 41 ] * xx [ 48
] ; xx [ 180 ] = xx [ 25 ] * xx [ 42 ] - xx [ 41 ] * xx [ 40 ] ; xx [ 181 ] =
- ( xx [ 41 ] * xx [ 42 ] + xx [ 25 ] * xx [ 40 ] ) ; xx [ 182 ] = - ( xx [
41 ] * xx [ 45 ] + xx [ 25 ] * xx [ 48 ] ) ; pm_math_quatCompose ( xx + 154 ,
xx + 179 , xx + 183 ) ; xx [ 3 ] = xx [ 46 ] * xx [ 2 ] ; xx [ 7 ] = sin ( xx
[ 3 ] ) ; xx [ 14 ] = xx [ 57 ] * xx [ 7 ] ; xx [ 15 ] = xx [ 56 ] * xx [ 14
] ; xx [ 18 ] = xx [ 63 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 62 ] * xx [ 18 ] ; xx
[ 29 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 62 ] * xx [ 29 ] ; xx [ 33 ] = xx
[ 15 ] + xx [ 7 ] - xx [ 3 ] ; xx [ 40 ] = xx [ 62 ] * xx [ 14 ] ; xx [ 14 ]
= xx [ 56 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 56 ] * xx [ 18 ] ; xx [ 18 ] = xx
[ 40 ] + xx [ 14 ] - xx [ 29 ] ; xx [ 42 ] = xx [ 14 ] - xx [ 40 ] + xx [ 29
] ; xx [ 14 ] = xx [ 7 ] + xx [ 3 ] + xx [ 15 ] ; xx [ 187 ] = xx [ 33 ] ; xx
[ 188 ] = xx [ 18 ] ; xx [ 189 ] = xx [ 42 ] ; xx [ 190 ] = xx [ 14 ] ;
pm_math_quatCompose ( xx + 183 , xx + 187 , xx + 215 ) ; xx [ 3 ] = sin ( xx
[ 137 ] ) ; xx [ 187 ] = xx [ 47 ] * xx [ 215 ] + xx [ 218 ] * xx [ 3 ] ; xx
[ 188 ] = xx [ 47 ] * xx [ 216 ] - xx [ 217 ] * xx [ 3 ] ; xx [ 189 ] = xx [
47 ] * xx [ 217 ] + xx [ 216 ] * xx [ 3 ] ; xx [ 190 ] = xx [ 47 ] * xx [ 218
] - xx [ 215 ] * xx [ 3 ] ; pm_math_quatXform ( xx + 187 , xx + 84 , xx + 44
) ; xx [ 7 ] = xx [ 87 ] * xx [ 3 ] ; xx [ 15 ] = xx [ 90 ] * xx [ 3 ] ; xx [
173 ] = - ( 0.02539999999966131 + xx [ 80 ] * ( xx [ 47 ] * xx [ 7 ] + xx [
15 ] * xx [ 3 ] ) ) ; xx [ 174 ] = ( xx [ 7 ] * xx [ 3 ] - xx [ 47 ] * xx [
15 ] ) * xx [ 80 ] - xx [ 87 ] ; xx [ 175 ] = xx [ 96 ] ; pm_math_quatXform (
xx + 215 , xx + 173 , xx + 187 ) ; xx [ 3 ] = 0.1158410329997535 ; xx [ 7 ] =
xx [ 105 ] * xx [ 42 ] ; xx [ 173 ] = xx [ 18 ] ; xx [ 174 ] = xx [ 42 ] ; xx
[ 175 ] = xx [ 14 ] ; xx [ 15 ] = xx [ 104 ] * xx [ 14 ] - xx [ 18 ] * xx [
105 ] ; xx [ 14 ] = xx [ 104 ] * xx [ 42 ] ; xx [ 190 ] = xx [ 7 ] ; xx [ 191
] = xx [ 15 ] ; xx [ 192 ] = - xx [ 14 ] ; pm_math_cross3 ( xx + 173 , xx +
190 , xx + 198 ) ; xx [ 18 ] = 0.1002102452613437 ; xx [ 173 ] = - ( xx [ 3 ]
+ ( xx [ 7 ] * xx [ 33 ] + xx [ 198 ] ) * xx [ 80 ] ) ; xx [ 174 ] = xx [ 108
] - ( xx [ 33 ] * xx [ 15 ] + xx [ 199 ] ) * xx [ 80 ] ; xx [ 175 ] = - ( xx
[ 18 ] + xx [ 80 ] * ( xx [ 200 ] - xx [ 14 ] * xx [ 33 ] ) ) ;
pm_math_quatXform ( xx + 183 , xx + 173 , xx + 190 ) ; pm_math_quatXform ( xx
+ 179 , xx + 112 , xx + 173 ) ; xx [ 179 ] = xx [ 102 ] + xx [ 173 ] ; xx [
180 ] = xx [ 123 ] + xx [ 174 ] ; xx [ 181 ] = xx [ 115 ] + xx [ 175 ] ;
pm_math_quatXform ( xx + 154 , xx + 179 , xx + 173 ) ; pm_math_quatXform ( xx
+ 150 , xx + 126 , xx + 154 ) ; pm_math_quatXform ( xx + 146 , xx + 154 , xx
+ 150 ) ; xx [ 7 ] = xx [ 131 ] * xx [ 32 ] - xx [ 135 ] * xx [ 139 ] ; xx [
146 ] = xx [ 80 ] * xx [ 7 ] * xx [ 32 ] + xx [ 9 ] ; xx [ 147 ] = xx [ 80 ]
* xx [ 7 ] * xx [ 139 ] + xx [ 135 ] ; xx [ 148 ] = xx [ 11 ] - ( xx [ 139 ]
* xx [ 19 ] * xx [ 139 ] + xx [ 19 ] * xx [ 32 ] * xx [ 32 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 49 , xx + 146 , xx + 137 ) ; xx [ 7 ] = xx [ 190 ] +
xx [ 173 ] + xx [ 150 ] + xx [ 137 ] - xx [ 43 ] - xx [ 8 ] ; xx [ 8 ] = xx [
76 ] * xx [ 2 ] ; xx [ 11 ] = sin ( xx [ 8 ] ) ; xx [ 14 ] = cos ( xx [ 8 ] )
; xx [ 47 ] = - ( xx [ 225 ] * xx [ 11 ] + xx [ 14 ] * xx [ 125 ] ) ; xx [ 48
] = - ( xx [ 241 ] * xx [ 14 ] - xx [ 11 ] * xx [ 242 ] ) ; xx [ 49 ] = xx [
241 ] * xx [ 11 ] + xx [ 14 ] * xx [ 242 ] ; xx [ 50 ] = xx [ 225 ] * xx [ 14
] - xx [ 11 ] * xx [ 125 ] ; xx [ 146 ] = xx [ 21 ] * xx [ 83 ] - xx [ 25 ] *
xx [ 103 ] ; xx [ 147 ] = - ( xx [ 21 ] * xx [ 82 ] + xx [ 25 ] * xx [ 77 ] )
; xx [ 148 ] = - ( xx [ 25 ] * xx [ 82 ] - xx [ 21 ] * xx [ 77 ] ) ; xx [ 149
] = - ( xx [ 21 ] * xx [ 103 ] + xx [ 25 ] * xx [ 83 ] ) ;
pm_math_quatCompose ( xx + 47 , xx + 146 , xx + 153 ) ; pm_math_quatXform (
xx + 153 , xx + 267 , xx + 179 ) ; pm_math_quatXform ( xx + 146 , xx + 126 ,
xx + 153 ) ; pm_math_quatXform ( xx + 47 , xx + 153 , xx + 146 ) ; xx [ 8 ] =
xx [ 266 ] * xx [ 14 ] + xx [ 270 ] * xx [ 11 ] ; xx [ 47 ] = xx [ 80 ] * xx
[ 8 ] * xx [ 11 ] + xx [ 59 ] ; xx [ 48 ] = xx [ 80 ] * xx [ 8 ] * xx [ 14 ]
- xx [ 266 ] ; xx [ 49 ] = ( xx [ 14 ] * xx [ 61 ] * xx [ 14 ] + xx [ 61 ] *
xx [ 11 ] * xx [ 11 ] ) * xx [ 80 ] - xx [ 71 ] ; pm_math_quatXform ( xx + 91
, xx + 47 , xx + 50 ) ; xx [ 8 ] = xx [ 191 ] + xx [ 174 ] + xx [ 151 ] + xx
[ 138 ] - xx [ 98 ] + xx [ 23 ] ; xx [ 11 ] = xx [ 192 ] + xx [ 175 ] + xx [
152 ] + xx [ 139 ] - xx [ 34 ] + xx [ 27 ] ; xx [ 14 ] = xx [ 53 ] * xx [ 2 ]
; xx [ 15 ] = sin ( xx [ 14 ] ) ; xx [ 19 ] = xx [ 62 ] * xx [ 15 ] ; xx [ 23
] = cos ( xx [ 14 ] ) ; xx [ 14 ] = xx [ 62 ] * xx [ 23 ] ; xx [ 27 ] = xx [
56 ] * xx [ 23 ] ; xx [ 23 ] = xx [ 56 ] * xx [ 15 ] ; xx [ 91 ] = xx [ 19 ]
- xx [ 14 ] ; xx [ 92 ] = - ( xx [ 27 ] + xx [ 23 ] ) ; xx [ 93 ] = xx [ 23 ]
- xx [ 27 ] ; xx [ 94 ] = - ( xx [ 19 ] + xx [ 14 ] ) ; pm_math_quatCompose (
xx + 215 , xx + 91 , xx + 137 ) ; pm_math_quatXform ( xx + 137 , xx + 84 , xx
+ 32 ) ; pm_math_quatXform ( xx + 91 , xx + 324 , xx + 47 ) ; xx [ 91 ] = xx
[ 243 ] - xx [ 47 ] ; xx [ 92 ] = - xx [ 48 ] ; xx [ 93 ] = xx [ 262 ] - xx [
49 ] ; pm_math_quatXform ( xx + 215 , xx + 91 , xx + 47 ) ; xx [ 14 ] = xx [
68 ] * xx [ 2 ] ; xx [ 15 ] = sin ( xx [ 14 ] ) ; xx [ 19 ] = cos ( xx [ 14 ]
) ; xx [ 91 ] = - ( xx [ 15 ] * xx [ 256 ] - xx [ 224 ] * xx [ 19 ] ) ; xx [
92 ] = - ( xx [ 19 ] * xx [ 315 ] + xx [ 319 ] * xx [ 15 ] ) ; xx [ 93 ] = xx
[ 15 ] * xx [ 315 ] - xx [ 319 ] * xx [ 19 ] ; xx [ 94 ] = xx [ 224 ] * xx [
15 ] + xx [ 19 ] * xx [ 256 ] ; xx [ 137 ] = xx [ 21 ] * xx [ 75 ] - xx [ 25
] * xx [ 81 ] ; xx [ 138 ] = - ( xx [ 21 ] * xx [ 70 ] + xx [ 25 ] * xx [ 69
] ) ; xx [ 139 ] = - ( xx [ 25 ] * xx [ 70 ] - xx [ 21 ] * xx [ 69 ] ) ; xx [
140 ] = - ( xx [ 21 ] * xx [ 81 ] + xx [ 25 ] * xx [ 75 ] ) ;
pm_math_quatCompose ( xx + 91 , xx + 137 , xx + 68 ) ; pm_math_quatXform ( xx
+ 68 , xx + 267 , xx + 75 ) ; pm_math_quatXform ( xx + 137 , xx + 126 , xx +
68 ) ; pm_math_quatXform ( xx + 91 , xx + 68 , xx + 81 ) ; xx [ 14 ] = xx [
410 ] * xx [ 19 ] - xx [ 409 ] * xx [ 15 ] ; xx [ 68 ] = xx [ 80 ] * xx [ 14
] * xx [ 15 ] + xx [ 39 ] ; xx [ 69 ] = xx [ 80 ] * xx [ 14 ] * xx [ 19 ] -
xx [ 410 ] ; xx [ 70 ] = xx [ 89 ] - ( xx [ 19 ] * xx [ 107 ] * xx [ 19 ] +
xx [ 107 ] * xx [ 15 ] * xx [ 15 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
142 , xx + 68 , xx + 91 ) ; xx [ 14 ] = xx [ 64 ] * xx [ 2 ] ; xx [ 15 ] =
cos ( xx [ 14 ] ) ; xx [ 19 ] = xx [ 312 ] * xx [ 15 ] ; xx [ 23 ] = sin ( xx
[ 14 ] ) ; xx [ 14 ] = xx [ 312 ] * xx [ 23 ] ; xx [ 27 ] = xx [ 379 ] * xx [
23 ] ; xx [ 23 ] = xx [ 379 ] * xx [ 15 ] ; xx [ 68 ] = - ( xx [ 19 ] + xx [
14 ] ) ; xx [ 69 ] = xx [ 27 ] - xx [ 23 ] ; xx [ 70 ] = - ( xx [ 23 ] + xx [
27 ] ) ; xx [ 71 ] = xx [ 14 ] - xx [ 19 ] ; pm_math_quatCompose ( xx + 215 ,
xx + 68 , xx + 137 ) ; pm_math_quatXform ( xx + 137 , xx + 84 , xx + 141 ) ;
pm_math_quatXform ( xx + 68 , xx + 456 , xx + 137 ) ; xx [ 68 ] = - ( xx [
314 ] + xx [ 137 ] ) ; xx [ 69 ] = - xx [ 138 ] ; xx [ 70 ] = xx [ 462 ] - xx
[ 139 ] ; pm_math_quatXform ( xx + 215 , xx + 68 , xx + 137 ) ; xx [ 14 ] =
xx [ 99 ] * xx [ 2 ] ; xx [ 15 ] = sin ( xx [ 14 ] ) ; xx [ 19 ] = cos ( xx [
14 ] ) ; xx [ 68 ] = - ( xx [ 451 ] * xx [ 15 ] - xx [ 19 ] * xx [ 400 ] ) ;
xx [ 69 ] = - ( xx [ 501 ] * xx [ 19 ] - xx [ 15 ] * xx [ 502 ] ) ; xx [ 70 ]
= xx [ 501 ] * xx [ 15 ] + xx [ 19 ] * xx [ 502 ] ; xx [ 71 ] = xx [ 15 ] *
xx [ 400 ] + xx [ 451 ] * xx [ 19 ] ; xx [ 149 ] = xx [ 21 ] * xx [ 110 ] -
xx [ 25 ] * xx [ 133 ] ; xx [ 150 ] = - ( xx [ 21 ] * xx [ 109 ] + xx [ 25 ]
* xx [ 100 ] ) ; xx [ 151 ] = - ( xx [ 25 ] * xx [ 109 ] - xx [ 21 ] * xx [
100 ] ) ; xx [ 152 ] = - ( xx [ 21 ] * xx [ 133 ] + xx [ 25 ] * xx [ 110 ] )
; pm_math_quatCompose ( xx + 68 , xx + 149 , xx + 153 ) ; pm_math_quatXform (
xx + 153 , xx + 267 , xx + 98 ) ; pm_math_quatXform ( xx + 149 , xx + 126 ,
xx + 153 ) ; pm_math_quatXform ( xx + 68 , xx + 153 , xx + 149 ) ; xx [ 14 ]
= xx [ 547 ] * xx [ 15 ] - xx [ 548 ] * xx [ 19 ] ; xx [ 68 ] = xx [ 80 ] *
xx [ 14 ] * xx [ 15 ] + xx [ 130 ] ; xx [ 69 ] = xx [ 80 ] * xx [ 14 ] * xx [
19 ] + xx [ 548 ] ; xx [ 70 ] = ( xx [ 19 ] * xx [ 162 ] * xx [ 19 ] + xx [
162 ] * xx [ 15 ] * xx [ 15 ] ) * xx [ 80 ] - xx [ 163 ] ; pm_math_quatXform
( xx + 158 , xx + 68 , xx + 152 ) ; xx [ 14 ] = xx [ 65 ] * xx [ 2 ] ; xx [
15 ] = cos ( xx [ 14 ] ) ; xx [ 19 ] = xx [ 312 ] * xx [ 15 ] ; xx [ 23 ] =
sin ( xx [ 14 ] ) ; xx [ 14 ] = xx [ 312 ] * xx [ 23 ] ; xx [ 27 ] = xx [ 379
] * xx [ 15 ] ; xx [ 15 ] = xx [ 379 ] * xx [ 23 ] ; xx [ 68 ] = xx [ 19 ] +
xx [ 14 ] ; xx [ 69 ] = xx [ 27 ] - xx [ 15 ] ; xx [ 70 ] = xx [ 27 ] + xx [
15 ] ; xx [ 71 ] = xx [ 19 ] - xx [ 14 ] ; pm_math_quatCompose ( xx + 215 ,
xx + 68 , xx + 155 ) ; pm_math_quatXform ( xx + 155 , xx + 84 , xx + 159 ) ;
pm_math_quatXform ( xx + 68 , xx + 595 , xx + 155 ) ; xx [ 68 ] = - ( xx [
446 ] + xx [ 155 ] ) ; xx [ 69 ] = - xx [ 156 ] ; xx [ 70 ] = xx [ 601 ] - xx
[ 157 ] ; pm_math_quatXform ( xx + 215 , xx + 68 , xx + 155 ) ; xx [ 14 ] =
xx [ 111 ] * xx [ 2 ] ; xx [ 15 ] = sin ( xx [ 14 ] ) ; xx [ 19 ] = cos ( xx
[ 14 ] ) ; xx [ 68 ] = - ( xx [ 594 ] * xx [ 15 ] + xx [ 19 ] * xx [ 536 ] )
; xx [ 69 ] = - ( xx [ 638 ] * xx [ 19 ] + xx [ 15 ] * xx [ 642 ] ) ; xx [ 70
] = xx [ 638 ] * xx [ 15 ] - xx [ 19 ] * xx [ 642 ] ; xx [ 71 ] = xx [ 594 ]
* xx [ 19 ] - xx [ 15 ] * xx [ 536 ] ; xx [ 182 ] = xx [ 21 ] * xx [ 136 ] -
xx [ 25 ] * xx [ 28 ] ; xx [ 183 ] = - ( xx [ 21 ] * xx [ 134 ] + xx [ 25 ] *
xx [ 132 ] ) ; xx [ 184 ] = - ( xx [ 25 ] * xx [ 134 ] - xx [ 21 ] * xx [ 132
] ) ; xx [ 185 ] = - ( xx [ 21 ] * xx [ 28 ] + xx [ 25 ] * xx [ 136 ] ) ;
pm_math_quatCompose ( xx + 68 , xx + 182 , xx + 190 ) ; pm_math_quatXform (
xx + 190 , xx + 267 , xx + 27 ) ; pm_math_quatXform ( xx + 182 , xx + 126 ,
xx + 109 ) ; pm_math_quatXform ( xx + 68 , xx + 109 , xx + 132 ) ; xx [ 14 ]
= xx [ 684 ] * xx [ 15 ] - xx [ 685 ] * xx [ 19 ] ; xx [ 68 ] = xx [ 80 ] *
xx [ 14 ] * xx [ 15 ] + xx [ 196 ] ; xx [ 69 ] = xx [ 80 ] * xx [ 14 ] * xx [
19 ] + xx [ 685 ] ; xx [ 70 ] = ( xx [ 19 ] * xx [ 197 ] * xx [ 19 ] + xx [
197 ] * xx [ 15 ] * xx [ 15 ] ) * xx [ 80 ] - xx [ 206 ] ; pm_math_quatXform
( xx + 202 , xx + 68 , xx + 109 ) ; xx [ 14 ] = xx [ 66 ] * xx [ 2 ] ; xx [
15 ] = cos ( xx [ 14 ] ) ; xx [ 19 ] = sin ( xx [ 14 ] ) ; xx [ 68 ] = xx [
15 ] * xx [ 215 ] + xx [ 218 ] * xx [ 19 ] ; xx [ 69 ] = xx [ 15 ] * xx [ 216
] - xx [ 217 ] * xx [ 19 ] ; xx [ 70 ] = xx [ 15 ] * xx [ 217 ] + xx [ 216 ]
* xx [ 19 ] ; xx [ 71 ] = xx [ 15 ] * xx [ 218 ] - xx [ 215 ] * xx [ 19 ] ;
pm_math_quatXform ( xx + 68 , xx + 84 , xx + 64 ) ; xx [ 14 ] = xx [ 54 ] *
xx [ 19 ] ; xx [ 23 ] = xx [ 738 ] * xx [ 19 ] ; xx [ 68 ] =
0.02540000000681907 - xx [ 80 ] * ( xx [ 14 ] * xx [ 19 ] - xx [ 15 ] * xx [
23 ] ) ; xx [ 69 ] = xx [ 738 ] - ( xx [ 15 ] * xx [ 14 ] + xx [ 23 ] * xx [
19 ] ) * xx [ 80 ] ; xx [ 70 ] = xx [ 791 ] ; pm_math_quatXform ( xx + 215 ,
xx + 68 , xx + 173 ) ; xx [ 14 ] = xx [ 24 ] * xx [ 2 ] ; xx [ 15 ] = sin (
xx [ 14 ] ) ; xx [ 19 ] = cos ( xx [ 14 ] ) ; xx [ 68 ] = - ( xx [ 675 ] * xx
[ 15 ] + xx [ 19 ] * xx [ 647 ] ) ; xx [ 69 ] = - ( xx [ 721 ] * xx [ 19 ] -
xx [ 15 ] * xx [ 722 ] ) ; xx [ 70 ] = xx [ 721 ] * xx [ 15 ] + xx [ 19 ] *
xx [ 722 ] ; xx [ 71 ] = xx [ 675 ] * xx [ 19 ] - xx [ 15 ] * xx [ 647 ] ; xx
[ 182 ] = xx [ 21 ] * xx [ 31 ] - xx [ 25 ] * xx [ 35 ] ; xx [ 183 ] = - ( xx
[ 21 ] * xx [ 26 ] + xx [ 25 ] * xx [ 17 ] ) ; xx [ 184 ] = - ( xx [ 25 ] *
xx [ 26 ] - xx [ 21 ] * xx [ 17 ] ) ; xx [ 185 ] = - ( xx [ 21 ] * xx [ 35 ]
+ xx [ 25 ] * xx [ 31 ] ) ; pm_math_quatCompose ( xx + 68 , xx + 182 , xx +
190 ) ; pm_math_quatXform ( xx + 190 , xx + 267 , xx + 197 ) ;
pm_math_quatXform ( xx + 182 , xx + 126 , xx + 190 ) ; pm_math_quatXform ( xx
+ 68 , xx + 190 , xx + 182 ) ; xx [ 14 ] = xx [ 747 ] * xx [ 19 ] + xx [ 746
] * xx [ 15 ] ; xx [ 68 ] = xx [ 194 ] - xx [ 80 ] * xx [ 14 ] * xx [ 15 ] ;
xx [ 69 ] = xx [ 747 ] - xx [ 80 ] * xx [ 14 ] * xx [ 19 ] ; xx [ 70 ] = ( xx
[ 19 ] * xx [ 221 ] * xx [ 19 ] + xx [ 221 ] * xx [ 15 ] * xx [ 15 ] ) * xx [
80 ] - xx [ 222 ] ; pm_math_quatXform ( xx + 226 , xx + 68 , xx + 190 ) ; xx
[ 328 ] = fabs ( xx [ 44 ] + xx [ 187 ] + xx [ 7 ] - ( xx [ 179 ] + xx [ 146
] + xx [ 50 ] - xx [ 97 ] ) - xx [ 78 ] ) ; xx [ 329 ] = fabs ( xx [ 45 ] +
xx [ 188 ] + xx [ 8 ] - ( xx [ 180 ] + xx [ 147 ] + xx [ 51 ] - xx [ 101 ] )
- xx [ 88 ] ) ; xx [ 330 ] = fabs ( xx [ 46 ] + xx [ 189 ] + xx [ 11 ] - ( xx
[ 181 ] + xx [ 148 ] + xx [ 52 ] - xx [ 36 ] ) + xx [ 37 ] ) ; xx [ 331 ] =
fabs ( xx [ 32 ] + xx [ 47 ] + xx [ 7 ] - ( xx [ 75 ] + xx [ 81 ] + xx [ 91 ]
- xx [ 120 ] ) - xx [ 38 ] ) ; xx [ 332 ] = fabs ( xx [ 33 ] + xx [ 48 ] + xx
[ 8 ] - ( xx [ 76 ] + xx [ 82 ] + xx [ 92 ] - xx [ 121 ] ) - xx [ 118 ] ) ;
xx [ 333 ] = fabs ( xx [ 34 ] + xx [ 49 ] + xx [ 11 ] - ( xx [ 77 ] + xx [ 83
] + xx [ 93 ] - xx [ 124 ] ) - xx [ 6 ] ) ; xx [ 334 ] = fabs ( xx [ 141 ] +
xx [ 137 ] + xx [ 7 ] - ( xx [ 98 ] + xx [ 149 ] + xx [ 152 ] - xx [ 170 ] )
+ xx [ 129 ] ) ; xx [ 335 ] = fabs ( xx [ 142 ] + xx [ 138 ] + xx [ 8 ] - (
xx [ 99 ] + xx [ 150 ] + xx [ 153 ] - xx [ 171 ] ) - xx [ 164 ] ) ; xx [ 336
] = fabs ( xx [ 143 ] + xx [ 139 ] + xx [ 11 ] - ( xx [ 100 ] + xx [ 151 ] +
xx [ 154 ] - xx [ 172 ] ) + xx [ 166 ] ) ; xx [ 337 ] = fabs ( xx [ 159 ] +
xx [ 155 ] + xx [ 7 ] - ( xx [ 27 ] + xx [ 132 ] + xx [ 109 ] - xx [ 209 ] )
+ xx [ 207 ] ) ; xx [ 338 ] = fabs ( xx [ 160 ] + xx [ 156 ] + xx [ 8 ] - (
xx [ 28 ] + xx [ 133 ] + xx [ 110 ] - xx [ 213 ] ) - xx [ 208 ] ) ; xx [ 339
] = fabs ( xx [ 161 ] + xx [ 157 ] + xx [ 11 ] - ( xx [ 29 ] + xx [ 134 ] +
xx [ 111 ] - xx [ 214 ] ) + xx [ 195 ] ) ; xx [ 340 ] = fabs ( xx [ 64 ] + xx
[ 173 ] + xx [ 7 ] - ( xx [ 197 ] + xx [ 182 ] + xx [ 190 ] - xx [ 230 ] ) -
xx [ 201 ] ) ; xx [ 341 ] = fabs ( xx [ 65 ] + xx [ 174 ] + xx [ 8 ] - ( xx [
198 ] + xx [ 183 ] + xx [ 191 ] - xx [ 231 ] ) - xx [ 223 ] ) ; xx [ 342 ] =
fabs ( xx [ 66 ] + xx [ 175 ] + xx [ 11 ] - ( xx [ 199 ] + xx [ 184 ] + xx [
192 ] - xx [ 232 ] ) + xx [ 58 ] ) ; ii [ 0 ] = 328 ; { int ll ; for ( ll =
329 ; ll < 343 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; }
ii [ 0 ] -= 328 ; xx [ 6 ] = xx [ 328 + ( ii [ 0 ] ) ] ; xx [ 7 ] = 1.0e-9 ;
xx [ 8 ] = xx [ 6 ] - xx [ 7 ] ; if ( xx [ 8 ] < 0.0 ) ii [ 1 ] = - 1 ; else
if ( xx [ 8 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1
] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0
] ) { case 0 : case 1 : case 2 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_11/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_12/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_13/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_14/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_1/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 6 ] = xx [ 2 ] * xx [ 815 ] ; xx [ 8 ] = sin ( xx
[ 6 ] ) ; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 1 ] * xx [ 8 ] - xx
[ 5 ] * xx [ 11 ] ; xx [ 14 ] = xx [ 2 ] * xx [ 817 ] ; xx [ 15 ] = cos ( xx
[ 14 ] ) ; xx [ 17 ] = xx [ 6 ] * xx [ 15 ] ; xx [ 19 ] = sin ( xx [ 14 ] ) ;
xx [ 14 ] = xx [ 1 ] * xx [ 11 ] + xx [ 5 ] * xx [ 8 ] ; xx [ 23 ] = xx [ 19
] * xx [ 14 ] ; xx [ 24 ] = xx [ 12 ] * xx [ 11 ] + xx [ 13 ] * xx [ 8 ] ; xx
[ 26 ] = xx [ 12 ] * xx [ 8 ] - xx [ 13 ] * xx [ 11 ] ; xx [ 8 ] = - ( xx [
15 ] * xx [ 24 ] + xx [ 26 ] * xx [ 19 ] ) ; xx [ 11 ] = xx [ 19 ] * xx [ 24
] - xx [ 26 ] * xx [ 15 ] ; xx [ 27 ] = xx [ 6 ] * xx [ 19 ] + xx [ 15 ] * xx
[ 14 ] ; xx [ 31 ] = xx [ 17 ] - xx [ 23 ] ; xx [ 32 ] = xx [ 8 ] ; xx [ 33 ]
= xx [ 11 ] ; xx [ 34 ] = xx [ 27 ] ; xx [ 28 ] = xx [ 21 ] * xx [ 822 ] - xx
[ 25 ] * xx [ 819 ] ; xx [ 29 ] = xx [ 21 ] * xx [ 821 ] + xx [ 25 ] * xx [
820 ] ; xx [ 35 ] = - xx [ 29 ] ; xx [ 36 ] = xx [ 25 ] * xx [ 821 ] - xx [
21 ] * xx [ 820 ] ; xx [ 37 ] = - xx [ 36 ] ; xx [ 38 ] = xx [ 21 ] * xx [
819 ] + xx [ 25 ] * xx [ 822 ] ; xx [ 40 ] = - xx [ 38 ] ; xx [ 42 ] = xx [
28 ] ; xx [ 43 ] = xx [ 35 ] ; xx [ 44 ] = xx [ 37 ] ; xx [ 45 ] = xx [ 40 ]
; xx [ 46 ] = xx [ 25 ] * xx [ 829 ] - xx [ 41 ] * xx [ 826 ] ; xx [ 47 ] =
xx [ 25 ] * xx [ 828 ] - xx [ 41 ] * xx [ 827 ] ; xx [ 48 ] = xx [ 41 ] * xx
[ 828 ] + xx [ 25 ] * xx [ 827 ] ; xx [ 49 ] = - xx [ 48 ] ; xx [ 50 ] = xx [
41 ] * xx [ 829 ] + xx [ 25 ] * xx [ 826 ] ; xx [ 41 ] = - xx [ 50 ] ; xx [
68 ] = xx [ 46 ] ; xx [ 69 ] = xx [ 47 ] ; xx [ 70 ] = xx [ 49 ] ; xx [ 71 ]
= xx [ 41 ] ; xx [ 51 ] = xx [ 2 ] * xx [ 835 ] ; xx [ 52 ] = cos ( xx [ 51 ]
) ; xx [ 53 ] = xx [ 2 ] * xx [ 833 ] ; xx [ 58 ] = sin ( xx [ 53 ] ) ; xx [
61 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 64 ] = xx [ 56 ] * xx [ 61 ] ; xx [ 65 ]
= xx [ 63 ] * xx [ 58 ] ; xx [ 58 ] = xx [ 62 ] * xx [ 65 ] ; xx [ 66 ] = cos
( xx [ 53 ] ) ; xx [ 53 ] = xx [ 62 ] * xx [ 66 ] ; xx [ 75 ] = xx [ 64 ] +
xx [ 58 ] - xx [ 53 ] ; xx [ 76 ] = sin ( xx [ 51 ] ) ; xx [ 51 ] = xx [ 58 ]
+ xx [ 53 ] + xx [ 64 ] ; xx [ 53 ] = xx [ 52 ] * xx [ 75 ] + xx [ 76 ] * xx
[ 51 ] ; xx [ 58 ] = xx [ 62 ] * xx [ 61 ] ; xx [ 61 ] = xx [ 56 ] * xx [ 66
] ; xx [ 64 ] = xx [ 56 ] * xx [ 65 ] ; xx [ 65 ] = xx [ 58 ] + xx [ 61 ] -
xx [ 64 ] ; xx [ 66 ] = xx [ 61 ] - xx [ 58 ] + xx [ 64 ] ; xx [ 58 ] = xx [
65 ] * xx [ 52 ] - xx [ 76 ] * xx [ 66 ] ; xx [ 61 ] = xx [ 52 ] * xx [ 66 ]
+ xx [ 65 ] * xx [ 76 ] ; xx [ 64 ] = xx [ 52 ] * xx [ 51 ] - xx [ 76 ] * xx
[ 75 ] ; xx [ 91 ] = xx [ 53 ] ; xx [ 92 ] = xx [ 58 ] ; xx [ 93 ] = xx [ 61
] ; xx [ 94 ] = xx [ 64 ] ; pm_math_quatCompose ( xx + 68 , xx + 91 , xx + 97
) ; pm_math_quatCompose ( xx + 42 , xx + 97 , xx + 136 ) ;
pm_math_quatCompose ( xx + 31 , xx + 136 , xx + 140 ) ; xx [ 81 ] = xx [ 80 ]
* ( xx [ 137 ] * xx [ 139 ] - xx [ 136 ] * xx [ 138 ] ) ; xx [ 82 ] = ( xx [
136 ] * xx [ 137 ] + xx [ 138 ] * xx [ 139 ] ) * xx [ 80 ] ; xx [ 83 ] = xx [
22 ] - ( xx [ 137 ] * xx [ 137 ] + xx [ 138 ] * xx [ 138 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 81 , xx + 84 , xx + 109 ) ; pm_math_quatXform ( xx +
140 , xx + 109 , xx + 81 ) ; xx [ 140 ] = xx [ 75 ] ; xx [ 141 ] = xx [ 65 ]
; xx [ 142 ] = xx [ 66 ] ; xx [ 143 ] = xx [ 51 ] ; xx [ 77 ] = xx [ 87 ] *
xx [ 76 ] ; xx [ 78 ] = xx [ 52 ] * xx [ 77 ] ; xx [ 88 ] = xx [ 90 ] * xx [
76 ] ; xx [ 89 ] = xx [ 88 ] * xx [ 76 ] ; xx [ 101 ] = xx [ 79 ] + xx [ 80 ]
* ( xx [ 78 ] + xx [ 89 ] ) - xx [ 90 ] ; xx [ 79 ] = xx [ 77 ] * xx [ 76 ] ;
xx [ 77 ] = xx [ 52 ] * xx [ 88 ] ; xx [ 88 ] = xx [ 87 ] - ( xx [ 79 ] - xx
[ 77 ] ) * xx [ 80 ] ; xx [ 109 ] = - xx [ 101 ] ; xx [ 110 ] = - xx [ 88 ] ;
xx [ 111 ] = xx [ 96 ] ; pm_math_quatXform ( xx + 140 , xx + 109 , xx + 132 )
; xx [ 96 ] = xx [ 105 ] * xx [ 66 ] ; xx [ 109 ] = xx [ 65 ] ; xx [ 110 ] =
xx [ 66 ] ; xx [ 111 ] = xx [ 51 ] ; xx [ 103 ] = xx [ 104 ] * xx [ 51 ] - xx
[ 65 ] * xx [ 105 ] ; xx [ 105 ] = xx [ 104 ] * xx [ 66 ] ; xx [ 144 ] = xx [
96 ] ; xx [ 145 ] = xx [ 103 ] ; xx [ 146 ] = - xx [ 105 ] ; pm_math_cross3 (
xx + 109 , xx + 144 , xx + 147 ) ; xx [ 104 ] = xx [ 3 ] + ( xx [ 96 ] * xx [
75 ] + xx [ 147 ] ) * xx [ 80 ] ; xx [ 3 ] = xx [ 132 ] - xx [ 104 ] ; xx [
96 ] = xx [ 108 ] - ( xx [ 75 ] * xx [ 103 ] + xx [ 148 ] ) * xx [ 80 ] ; xx
[ 103 ] = xx [ 133 ] + xx [ 96 ] ; xx [ 107 ] = xx [ 18 ] + xx [ 80 ] * ( xx
[ 149 ] - xx [ 105 ] * xx [ 75 ] ) ; xx [ 18 ] = xx [ 134 ] - xx [ 107 ] ; xx
[ 108 ] = xx [ 3 ] ; xx [ 109 ] = xx [ 103 ] ; xx [ 110 ] = xx [ 18 ] ;
pm_math_quatXform ( xx + 68 , xx + 108 , xx + 132 ) ; pm_math_quatXform ( xx
+ 68 , xx + 112 , xx + 144 ) ; xx [ 105 ] = xx [ 102 ] + xx [ 144 ] ; xx [
111 ] = xx [ 132 ] + xx [ 105 ] ; xx [ 118 ] = xx [ 123 ] + xx [ 145 ] ; xx [
120 ] = xx [ 133 ] + xx [ 118 ] ; xx [ 121 ] = xx [ 115 ] + xx [ 146 ] ; xx [
115 ] = xx [ 134 ] + xx [ 121 ] ; xx [ 132 ] = xx [ 111 ] ; xx [ 133 ] = xx [
120 ] ; xx [ 134 ] = xx [ 115 ] ; pm_math_quatXform ( xx + 42 , xx + 132 , xx
+ 144 ) ; pm_math_quatXform ( xx + 42 , xx + 126 , xx + 147 ) ; xx [ 124 ] =
xx [ 145 ] + xx [ 148 ] ; xx [ 125 ] = xx [ 144 ] + xx [ 147 ] ; xx [ 129 ] =
xx [ 124 ] * xx [ 19 ] - xx [ 125 ] * xx [ 15 ] ; xx [ 144 ] = xx [ 131 ] *
xx [ 15 ] + xx [ 135 ] * xx [ 19 ] ; xx [ 145 ] = xx [ 80 ] * xx [ 144 ] * xx
[ 19 ] ; xx [ 146 ] = xx [ 80 ] * xx [ 19 ] * xx [ 129 ] - ( xx [ 124 ] - xx
[ 145 ] ) - xx [ 135 ] ; xx [ 149 ] = xx [ 6 ] ; xx [ 150 ] = xx [ 14 ] ; xx
[ 151 ] = xx [ 26 ] ; xx [ 152 ] = xx [ 80 ] * xx [ 144 ] * xx [ 15 ] ; xx [
144 ] = xx [ 125 ] + xx [ 80 ] * xx [ 15 ] * xx [ 129 ] + xx [ 152 ] - xx [
131 ] ; xx [ 129 ] = xx [ 26 ] * xx [ 144 ] ; xx [ 153 ] = xx [ 26 ] * xx [
146 ] ; xx [ 154 ] = xx [ 6 ] * xx [ 144 ] - xx [ 146 ] * xx [ 14 ] ; xx [
155 ] = - xx [ 129 ] ; xx [ 156 ] = xx [ 153 ] ; xx [ 157 ] = xx [ 154 ] ;
pm_math_cross3 ( xx + 149 , xx + 155 , xx + 158 ) ; xx [ 161 ] = - ( xx [ 23
] - xx [ 17 ] ) ; xx [ 162 ] = xx [ 8 ] ; xx [ 163 ] = xx [ 11 ] ; xx [ 164 ]
= xx [ 27 ] ; pm_math_quatCompose ( xx + 161 , xx + 42 , xx + 170 ) ;
pm_math_quatCompose ( xx + 170 , xx + 97 , xx + 179 ) ; xx [ 8 ] = xx [ 4 ] *
xx [ 100 ] ; xx [ 11 ] = xx [ 4 ] * xx [ 98 ] + xx [ 99 ] ; xx [ 155 ] = xx [
8 ] ; xx [ 156 ] = xx [ 100 ] ; xx [ 157 ] = - xx [ 11 ] ; pm_math_cross3 (
xx + 98 , xx + 155 , xx + 183 ) ; xx [ 17 ] = xx [ 97 ] * xx [ 100 ] ; xx [
155 ] = xx [ 22 ] + ( xx [ 183 ] - xx [ 97 ] * xx [ 8 ] ) * xx [ 80 ] ; xx [
156 ] = xx [ 80 ] * ( xx [ 184 ] - xx [ 17 ] ) - xx [ 4 ] ; xx [ 157 ] = xx [
80 ] * ( xx [ 185 ] + xx [ 97 ] * xx [ 11 ] ) ; pm_math_cross3 ( xx + 155 ,
xx + 84 , xx + 183 ) ; pm_math_quatXform ( xx + 179 , xx + 183 , xx + 155 ) ;
xx [ 11 ] = - ( xx [ 115 ] * xx [ 4 ] ) ; xx [ 183 ] = xx [ 11 ] ; xx [ 184 ]
= - xx [ 115 ] ; xx [ 185 ] = xx [ 120 ] + xx [ 111 ] * xx [ 4 ] ;
pm_math_quatXform ( xx + 42 , xx + 183 , xx + 186 ) ; pm_math_quatXform ( xx
+ 42 , xx + 167 , xx + 183 ) ; xx [ 189 ] = xx [ 186 ] + xx [ 183 ] ; xx [
190 ] = xx [ 187 ] + xx [ 184 ] ; xx [ 191 ] = xx [ 188 ] + xx [ 185 ] ;
pm_math_quatXform ( xx + 161 , xx + 189 , xx + 186 ) ; xx [ 23 ] = xx [ 98 ]
- xx [ 4 ] * xx [ 99 ] ; xx [ 189 ] = - xx [ 100 ] ; xx [ 190 ] = xx [ 8 ] ;
xx [ 191 ] = xx [ 23 ] ; pm_math_cross3 ( xx + 98 , xx + 189 , xx + 197 ) ;
xx [ 189 ] = xx [ 4 ] + ( xx [ 17 ] + xx [ 197 ] ) * xx [ 80 ] ; xx [ 190 ] =
xx [ 22 ] + xx [ 80 ] * ( xx [ 198 ] - xx [ 4 ] * xx [ 17 ] ) ; xx [ 191 ] =
xx [ 80 ] * ( xx [ 199 ] - xx [ 97 ] * xx [ 23 ] ) ; pm_math_cross3 ( xx +
189 , xx + 84 , xx + 197 ) ; pm_math_quatXform ( xx + 179 , xx + 197 , xx +
189 ) ; xx [ 197 ] = xx [ 115 ] ; xx [ 198 ] = xx [ 11 ] ; xx [ 199 ] = xx [
120 ] * xx [ 4 ] - xx [ 111 ] ; pm_math_quatXform ( xx + 42 , xx + 197 , xx +
200 ) ; pm_math_quatXform ( xx + 42 , xx + 176 , xx + 197 ) ; xx [ 203 ] = xx
[ 200 ] + xx [ 197 ] ; xx [ 204 ] = xx [ 201 ] + xx [ 198 ] ; xx [ 205 ] = xx
[ 202 ] + xx [ 199 ] ; pm_math_quatXform ( xx + 161 , xx + 203 , xx + 200 ) ;
xx [ 203 ] = xx [ 80 ] * ( xx [ 98 ] * xx [ 100 ] - xx [ 97 ] * xx [ 99 ] ) ;
xx [ 204 ] = ( xx [ 97 ] * xx [ 98 ] + xx [ 99 ] * xx [ 100 ] ) * xx [ 80 ] ;
xx [ 205 ] = xx [ 22 ] - ( xx [ 98 ] * xx [ 98 ] + xx [ 99 ] * xx [ 99 ] ) *
xx [ 80 ] ; pm_math_cross3 ( xx + 203 , xx + 84 , xx + 206 ) ;
pm_math_quatXform ( xx + 179 , xx + 206 , xx + 203 ) ; xx [ 179 ] = xx [ 35 ]
; xx [ 180 ] = xx [ 37 ] ; xx [ 181 ] = xx [ 40 ] ; xx [ 8 ] = xx [ 111 ] *
xx [ 38 ] ; xx [ 11 ] = xx [ 120 ] * xx [ 38 ] ; xx [ 17 ] = xx [ 111 ] * xx
[ 29 ] + xx [ 36 ] * xx [ 120 ] ; xx [ 206 ] = xx [ 8 ] ; xx [ 207 ] = xx [
11 ] ; xx [ 208 ] = - xx [ 17 ] ; pm_math_cross3 ( xx + 179 , xx + 206 , xx +
209 ) ; xx [ 23 ] = xx [ 117 ] * xx [ 38 ] ; xx [ 27 ] = xx [ 119 ] * xx [ 38
] ; xx [ 35 ] = xx [ 117 ] * xx [ 29 ] + xx [ 36 ] * xx [ 119 ] ; xx [ 206 ]
= xx [ 23 ] ; xx [ 207 ] = xx [ 27 ] ; xx [ 208 ] = - xx [ 35 ] ;
pm_math_cross3 ( xx + 179 , xx + 206 , xx + 212 ) ; xx [ 37 ] = xx [ 80 ] * (
xx [ 212 ] + xx [ 23 ] * xx [ 28 ] ) ; xx [ 23 ] = ( xx [ 27 ] * xx [ 28 ] +
xx [ 213 ] ) * xx [ 80 ] ; xx [ 27 ] = ( xx [ 214 ] - xx [ 35 ] * xx [ 28 ] )
* xx [ 80 ] ; xx [ 206 ] = xx [ 80 ] * ( xx [ 209 ] + xx [ 8 ] * xx [ 28 ] )
+ xx [ 37 ] - xx [ 120 ] - xx [ 119 ] ; xx [ 207 ] = xx [ 111 ] + xx [ 80 ] *
( xx [ 210 ] + xx [ 11 ] * xx [ 28 ] ) + xx [ 23 ] + xx [ 117 ] ; xx [ 208 ]
= ( xx [ 211 ] - xx [ 17 ] * xx [ 28 ] ) * xx [ 80 ] + xx [ 27 ] ;
pm_math_quatXform ( xx + 161 , xx + 206 , xx + 209 ) ; pm_math_quatCompose (
xx + 170 , xx + 68 , xx + 212 ) ; pm_math_quatCompose ( xx + 212 , xx + 91 ,
xx + 216 ) ; xx [ 8 ] = xx [ 61 ] * xx [ 61 ] ; xx [ 11 ] = xx [ 64 ] * xx [
64 ] ; xx [ 17 ] = xx [ 61 ] * xx [ 58 ] ; xx [ 35 ] = xx [ 53 ] * xx [ 64 ]
; xx [ 40 ] = xx [ 53 ] * xx [ 61 ] ; xx [ 111 ] = xx [ 58 ] * xx [ 64 ] ; xx
[ 206 ] = xx [ 22 ] - ( xx [ 8 ] + xx [ 11 ] ) * xx [ 80 ] ; xx [ 207 ] = xx
[ 80 ] * ( xx [ 17 ] - xx [ 35 ] ) ; xx [ 208 ] = ( xx [ 40 ] + xx [ 111 ] )
* xx [ 80 ] ; pm_math_cross3 ( xx + 206 , xx + 84 , xx + 220 ) ;
pm_math_quatXform ( xx + 216 , xx + 220 , xx + 206 ) ; xx [ 220 ] = xx [ 47 ]
; xx [ 221 ] = xx [ 49 ] ; xx [ 222 ] = xx [ 41 ] ; xx [ 41 ] = xx [ 48 ] *
xx [ 103 ] ; xx [ 49 ] = xx [ 50 ] * xx [ 18 ] ; xx [ 115 ] = xx [ 41 ] + xx
[ 49 ] ; xx [ 120 ] = xx [ 103 ] * xx [ 47 ] ; xx [ 166 ] = xx [ 18 ] * xx [
47 ] ; xx [ 223 ] = - xx [ 115 ] ; xx [ 224 ] = - xx [ 120 ] ; xx [ 225 ] = -
xx [ 166 ] ; pm_math_cross3 ( xx + 220 , xx + 223 , xx + 226 ) ; xx [ 174 ] =
xx [ 48 ] * xx [ 73 ] ; xx [ 175 ] = xx [ 50 ] * xx [ 74 ] ; xx [ 182 ] = xx
[ 174 ] - xx [ 175 ] ; xx [ 192 ] = xx [ 73 ] * xx [ 47 ] ; xx [ 193 ] = xx [
74 ] * xx [ 47 ] ; xx [ 223 ] = xx [ 182 ] ; xx [ 224 ] = xx [ 192 ] ; xx [
225 ] = - xx [ 193 ] ; pm_math_cross3 ( xx + 220 , xx + 223 , xx + 229 ) ; xx
[ 195 ] = ( xx [ 182 ] * xx [ 46 ] + xx [ 229 ] ) * xx [ 80 ] ; xx [ 182 ] =
xx [ 80 ] * ( xx [ 230 ] + xx [ 192 ] * xx [ 46 ] ) ; xx [ 192 ] = ( xx [ 231
] - xx [ 193 ] * xx [ 46 ] ) * xx [ 80 ] ; xx [ 223 ] = xx [ 80 ] * ( xx [
226 ] - xx [ 115 ] * xx [ 46 ] ) + xx [ 195 ] ; xx [ 224 ] = xx [ 80 ] * ( xx
[ 227 ] - xx [ 120 ] * xx [ 46 ] ) + xx [ 182 ] - xx [ 18 ] - xx [ 74 ] ; xx
[ 225 ] = xx [ 103 ] + xx [ 80 ] * ( xx [ 228 ] - xx [ 166 ] * xx [ 46 ] ) +
xx [ 192 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 170 , xx + 223 , xx + 226 )
; xx [ 115 ] = xx [ 58 ] * xx [ 58 ] ; xx [ 120 ] = xx [ 61 ] * xx [ 64 ] ;
xx [ 61 ] = xx [ 53 ] * xx [ 58 ] ; xx [ 223 ] = ( xx [ 35 ] + xx [ 17 ] ) *
xx [ 80 ] ; xx [ 224 ] = xx [ 22 ] - ( xx [ 11 ] + xx [ 115 ] ) * xx [ 80 ] ;
xx [ 225 ] = xx [ 80 ] * ( xx [ 120 ] - xx [ 61 ] ) ; pm_math_cross3 ( xx +
223 , xx + 84 , xx + 229 ) ; pm_math_quatXform ( xx + 216 , xx + 229 , xx +
223 ) ; xx [ 11 ] = xx [ 48 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 3 ] * xx [ 47 ] ;
xx [ 35 ] = xx [ 17 ] - xx [ 49 ] ; xx [ 49 ] = xx [ 48 ] * xx [ 18 ] ; xx [
229 ] = xx [ 11 ] ; xx [ 230 ] = xx [ 35 ] ; xx [ 231 ] = xx [ 49 ] ;
pm_math_cross3 ( xx + 220 , xx + 229 , xx + 232 ) ; xx [ 53 ] = xx [ 48 ] *
xx [ 72 ] ; xx [ 58 ] = xx [ 72 ] * xx [ 47 ] ; xx [ 64 ] = xx [ 175 ] - xx [
58 ] ; xx [ 166 ] = xx [ 48 ] * xx [ 74 ] ; xx [ 229 ] = xx [ 53 ] ; xx [ 230
] = - xx [ 64 ] ; xx [ 231 ] = xx [ 166 ] ; pm_math_cross3 ( xx + 220 , xx +
229 , xx + 235 ) ; xx [ 175 ] = xx [ 80 ] * ( xx [ 235 ] + xx [ 53 ] * xx [
46 ] ) ; xx [ 53 ] = xx [ 80 ] * ( xx [ 236 ] - xx [ 64 ] * xx [ 46 ] ) ; xx
[ 64 ] = ( xx [ 166 ] * xx [ 46 ] + xx [ 237 ] ) * xx [ 80 ] ; xx [ 229 ] =
xx [ 18 ] + ( xx [ 11 ] * xx [ 46 ] + xx [ 232 ] ) * xx [ 80 ] + xx [ 175 ] +
xx [ 74 ] ; xx [ 230 ] = ( xx [ 35 ] * xx [ 46 ] + xx [ 233 ] ) * xx [ 80 ] +
xx [ 53 ] ; xx [ 231 ] = ( xx [ 49 ] * xx [ 46 ] + xx [ 234 ] ) * xx [ 80 ] +
xx [ 64 ] - xx [ 3 ] - xx [ 72 ] ; pm_math_quatXform ( xx + 170 , xx + 229 ,
xx + 232 ) ; xx [ 229 ] = xx [ 80 ] * ( xx [ 111 ] - xx [ 40 ] ) ; xx [ 230 ]
= ( xx [ 61 ] + xx [ 120 ] ) * xx [ 80 ] ; xx [ 231 ] = xx [ 22 ] - ( xx [
115 ] + xx [ 8 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 229 , xx + 84 , xx +
235 ) ; pm_math_quatXform ( xx + 216 , xx + 235 , xx + 229 ) ; xx [ 8 ] = xx
[ 50 ] * xx [ 3 ] ; xx [ 11 ] = xx [ 50 ] * xx [ 103 ] ; xx [ 18 ] = xx [ 17
] - xx [ 41 ] ; xx [ 216 ] = xx [ 8 ] ; xx [ 217 ] = xx [ 11 ] ; xx [ 218 ] =
xx [ 18 ] ; pm_math_cross3 ( xx + 220 , xx + 216 , xx + 235 ) ; xx [ 17 ] =
xx [ 50 ] * xx [ 72 ] ; xx [ 35 ] = xx [ 50 ] * xx [ 73 ] ; xx [ 40 ] = xx [
58 ] + xx [ 174 ] ; xx [ 216 ] = xx [ 17 ] ; xx [ 217 ] = - xx [ 35 ] ; xx [
218 ] = xx [ 40 ] ; pm_math_cross3 ( xx + 220 , xx + 216 , xx + 244 ) ; xx [
41 ] = ( xx [ 17 ] * xx [ 46 ] + xx [ 244 ] ) * xx [ 80 ] ; xx [ 17 ] = xx [
80 ] * ( xx [ 245 ] - xx [ 35 ] * xx [ 46 ] ) ; xx [ 35 ] = ( xx [ 40 ] * xx
[ 46 ] + xx [ 246 ] ) * xx [ 80 ] ; xx [ 216 ] = ( xx [ 8 ] * xx [ 46 ] + xx
[ 235 ] ) * xx [ 80 ] + xx [ 41 ] - xx [ 103 ] + xx [ 73 ] ; xx [ 217 ] = xx
[ 3 ] + ( xx [ 11 ] * xx [ 46 ] + xx [ 236 ] ) * xx [ 80 ] + xx [ 17 ] + xx [
72 ] ; xx [ 218 ] = ( xx [ 18 ] * xx [ 46 ] + xx [ 237 ] ) * xx [ 80 ] + xx [
35 ] ; pm_math_quatXform ( xx + 170 , xx + 216 , xx + 235 ) ;
pm_math_quatCompose ( xx + 212 , xx + 140 , xx + 216 ) ; xx [ 3 ] = xx [ 52 ]
* xx [ 216 ] + xx [ 219 ] * xx [ 76 ] ; xx [ 8 ] = xx [ 52 ] * xx [ 217 ] -
xx [ 218 ] * xx [ 76 ] ; xx [ 11 ] = xx [ 52 ] * xx [ 218 ] + xx [ 217 ] * xx
[ 76 ] ; xx [ 18 ] = xx [ 52 ] * xx [ 219 ] - xx [ 216 ] * xx [ 76 ] ; xx [
244 ] = xx [ 3 ] ; xx [ 245 ] = xx [ 8 ] ; xx [ 246 ] = xx [ 11 ] ; xx [ 247
] = xx [ 18 ] ; xx [ 40 ] = xx [ 57 ] * xx [ 76 ] ; xx [ 49 ] = xx [ 80 ] *
xx [ 52 ] * xx [ 40 ] ; xx [ 58 ] = xx [ 80 ] * xx [ 40 ] * xx [ 76 ] - xx [
57 ] ; xx [ 248 ] = xx [ 74 ] * xx [ 49 ] + xx [ 55 ] ; xx [ 249 ] = xx [ 106
] + xx [ 74 ] * xx [ 58 ] ; xx [ 250 ] = xx [ 73 ] * xx [ 58 ] - xx [ 72 ] *
xx [ 49 ] ; pm_math_quatXform ( xx + 244 , xx + 248 , xx + 251 ) ; xx [ 244 ]
= - ( xx [ 63 ] * xx [ 88 ] ) ; xx [ 245 ] = xx [ 63 ] * xx [ 101 ] - xx [ 60
] ; xx [ 246 ] = xx [ 57 ] * xx [ 88 ] ; pm_math_quatXform ( xx + 140 , xx +
244 , xx + 247 ) ; xx [ 40 ] = xx [ 67 ] * xx [ 51 ] ; xx [ 49 ] = xx [ 65 ]
* xx [ 67 ] ; xx [ 58 ] = xx [ 40 ] * xx [ 75 ] - xx [ 49 ] * xx [ 66 ] ; xx
[ 60 ] = xx [ 80 ] * xx [ 58 ] ; xx [ 61 ] = ( xx [ 40 ] * xx [ 51 ] + xx [
65 ] * xx [ 49 ] ) * xx [ 80 ] ; xx [ 103 ] = xx [ 49 ] * xx [ 75 ] + xx [ 40
] * xx [ 66 ] ; xx [ 40 ] = xx [ 103 ] * xx [ 80 ] ; xx [ 244 ] = xx [ 247 ]
+ xx [ 60 ] ; xx [ 245 ] = xx [ 248 ] + xx [ 61 ] - xx [ 67 ] ; xx [ 246 ] =
xx [ 249 ] - xx [ 40 ] ; pm_math_quatXform ( xx + 212 , xx + 244 , xx + 247 )
; xx [ 244 ] = xx [ 8 ] ; xx [ 245 ] = xx [ 11 ] ; xx [ 246 ] = xx [ 18 ] ;
xx [ 49 ] = xx [ 72 ] * xx [ 18 ] ; xx [ 111 ] = xx [ 73 ] * xx [ 18 ] ; xx [
18 ] = xx [ 72 ] * xx [ 8 ] - xx [ 11 ] * xx [ 73 ] ; xx [ 258 ] = - xx [ 49
] ; xx [ 259 ] = xx [ 111 ] ; xx [ 260 ] = xx [ 18 ] ; pm_math_cross3 ( xx +
244 , xx + 258 , xx + 263 ) ; xx [ 8 ] = xx [ 80 ] * ( xx [ 79 ] - xx [ 77 ]
) - xx [ 87 ] ; xx [ 11 ] = ( xx [ 78 ] + xx [ 89 ] ) * xx [ 80 ] - xx [ 90 ]
; xx [ 77 ] = xx [ 219 ] * xx [ 11 ] ; xx [ 78 ] = xx [ 8 ] * xx [ 219 ] ; xx
[ 79 ] = xx [ 217 ] * xx [ 11 ] - xx [ 8 ] * xx [ 218 ] ; xx [ 244 ] = - xx [
77 ] ; xx [ 245 ] = xx [ 78 ] ; xx [ 246 ] = xx [ 79 ] ; pm_math_cross3 ( xx
+ 217 , xx + 244 , xx + 258 ) ; xx [ 87 ] = xx [ 2 ] * xx [ 858 ] ; xx [ 89 ]
= cos ( xx [ 87 ] ) ; xx [ 90 ] = xx [ 2 ] * xx [ 856 ] ; xx [ 115 ] = cos (
xx [ 90 ] ) ; xx [ 120 ] = sin ( xx [ 90 ] ) ; xx [ 90 ] = xx [ 122 ] * xx [
115 ] + xx [ 165 ] * xx [ 120 ] ; xx [ 166 ] = xx [ 89 ] * xx [ 90 ] ; xx [
174 ] = xx [ 165 ] * xx [ 115 ] - xx [ 122 ] * xx [ 120 ] ; xx [ 122 ] = sin
( xx [ 87 ] ) ; xx [ 87 ] = xx [ 174 ] * xx [ 122 ] ; xx [ 165 ] = xx [ 239 ]
* xx [ 115 ] - xx [ 240 ] * xx [ 120 ] ; xx [ 193 ] = xx [ 240 ] * xx [ 115 ]
+ xx [ 239 ] * xx [ 120 ] ; xx [ 115 ] = - ( xx [ 165 ] * xx [ 89 ] - xx [
122 ] * xx [ 193 ] ) ; xx [ 120 ] = xx [ 165 ] * xx [ 122 ] + xx [ 89 ] * xx
[ 193 ] ; xx [ 238 ] = xx [ 174 ] * xx [ 89 ] - xx [ 122 ] * xx [ 90 ] ; xx [
239 ] = - ( xx [ 166 ] + xx [ 87 ] ) ; xx [ 240 ] = xx [ 115 ] ; xx [ 241 ] =
xx [ 120 ] ; xx [ 242 ] = xx [ 238 ] ; xx [ 244 ] = xx [ 21 ] * xx [ 863 ] -
xx [ 25 ] * xx [ 860 ] ; xx [ 245 ] = xx [ 21 ] * xx [ 862 ] + xx [ 25 ] * xx
[ 861 ] ; xx [ 246 ] = - xx [ 245 ] ; xx [ 250 ] = xx [ 25 ] * xx [ 862 ] -
xx [ 21 ] * xx [ 861 ] ; xx [ 255 ] = - xx [ 250 ] ; xx [ 256 ] = xx [ 21 ] *
xx [ 860 ] + xx [ 25 ] * xx [ 863 ] ; xx [ 261 ] = - xx [ 256 ] ; xx [ 271 ]
= xx [ 244 ] ; xx [ 272 ] = xx [ 246 ] ; xx [ 273 ] = xx [ 255 ] ; xx [ 274 ]
= xx [ 261 ] ; pm_math_quatCompose ( xx + 239 , xx + 271 , xx + 275 ) ; xx [
239 ] = ( xx [ 250 ] * xx [ 244 ] + xx [ 245 ] * xx [ 256 ] ) * xx [ 80 ] ;
xx [ 240 ] = xx [ 80 ] * ( xx [ 250 ] * xx [ 256 ] - xx [ 244 ] * xx [ 245 ]
) ; xx [ 241 ] = xx [ 22 ] - ( xx [ 245 ] * xx [ 245 ] + xx [ 250 ] * xx [
250 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 239 , xx + 267 , xx + 283 ) ;
pm_math_quatXform ( xx + 275 , xx + 283 , xx + 239 ) ; pm_math_quatXform ( xx
+ 271 , xx + 126 , xx + 275 ) ; xx [ 242 ] = xx [ 276 ] * xx [ 122 ] - xx [
89 ] * xx [ 275 ] ; xx [ 277 ] = xx [ 266 ] * xx [ 122 ] - xx [ 270 ] * xx [
89 ] ; xx [ 278 ] = xx [ 80 ] * xx [ 277 ] * xx [ 122 ] ; xx [ 279 ] = xx [
80 ] * xx [ 122 ] * xx [ 242 ] - ( xx [ 276 ] + xx [ 278 ] ) + xx [ 266 ] ;
xx [ 283 ] = - xx [ 90 ] ; xx [ 284 ] = - xx [ 193 ] ; xx [ 285 ] = xx [ 283
] ; xx [ 286 ] = xx [ 174 ] ; xx [ 287 ] = xx [ 284 ] ; xx [ 288 ] = xx [ 80
] * xx [ 277 ] * xx [ 89 ] ; xx [ 277 ] = xx [ 275 ] + xx [ 80 ] * xx [ 89 ]
* xx [ 242 ] - xx [ 288 ] - xx [ 270 ] ; xx [ 242 ] = xx [ 277 ] * xx [ 193 ]
; xx [ 289 ] = xx [ 279 ] * xx [ 193 ] ; xx [ 290 ] = xx [ 277 ] * xx [ 90 ]
+ xx [ 174 ] * xx [ 279 ] ; xx [ 291 ] = xx [ 242 ] ; xx [ 292 ] = - xx [ 289
] ; xx [ 293 ] = - xx [ 290 ] ; pm_math_cross3 ( xx + 285 , xx + 291 , xx +
294 ) ; xx [ 300 ] = - ( xx [ 87 ] + xx [ 166 ] ) ; xx [ 301 ] = xx [ 115 ] ;
xx [ 302 ] = xx [ 120 ] ; xx [ 303 ] = xx [ 238 ] ; pm_math_quatCompose ( xx
+ 300 , xx + 271 , xx + 304 ) ; pm_math_quatXform ( xx + 304 , xx + 280 , xx
+ 285 ) ; pm_math_quatXform ( xx + 271 , xx + 167 , xx + 291 ) ;
pm_math_quatXform ( xx + 300 , xx + 291 , xx + 308 ) ; pm_math_quatXform ( xx
+ 304 , xx + 297 , xx + 291 ) ; pm_math_quatXform ( xx + 271 , xx + 176 , xx
+ 315 ) ; pm_math_quatXform ( xx + 300 , xx + 315 , xx + 318 ) ; xx [ 87 ] =
xx [ 102 ] * xx [ 307 ] ; xx [ 115 ] = xx [ 102 ] * xx [ 305 ] + xx [ 123 ] *
xx [ 306 ] ; xx [ 315 ] = - xx [ 87 ] ; xx [ 316 ] = - ( xx [ 123 ] * xx [
307 ] ) ; xx [ 317 ] = xx [ 115 ] ; pm_math_cross3 ( xx + 305 , xx + 315 , xx
+ 321 ) ; xx [ 315 ] = xx [ 246 ] ; xx [ 316 ] = xx [ 255 ] ; xx [ 317 ] = xx
[ 261 ] ; xx [ 120 ] = xx [ 117 ] * xx [ 256 ] ; xx [ 166 ] = xx [ 119 ] * xx
[ 256 ] ; xx [ 238 ] = xx [ 117 ] * xx [ 245 ] + xx [ 250 ] * xx [ 119 ] ; xx
[ 328 ] = xx [ 120 ] ; xx [ 329 ] = xx [ 166 ] ; xx [ 330 ] = - xx [ 238 ] ;
pm_math_cross3 ( xx + 315 , xx + 328 , xx + 331 ) ; xx [ 315 ] = xx [ 80 ] *
( xx [ 331 ] + xx [ 120 ] * xx [ 244 ] ) - xx [ 119 ] ; xx [ 316 ] = xx [ 117
] + ( xx [ 166 ] * xx [ 244 ] + xx [ 332 ] ) * xx [ 80 ] ; xx [ 317 ] = ( xx
[ 333 ] - xx [ 238 ] * xx [ 244 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
300 , xx + 315 , xx + 328 ) ; xx [ 120 ] = xx [ 2 ] * xx [ 837 ] ; xx [ 166 ]
= sin ( xx [ 120 ] ) ; xx [ 238 ] = xx [ 62 ] * xx [ 166 ] ; xx [ 246 ] = cos
( xx [ 120 ] ) ; xx [ 120 ] = xx [ 62 ] * xx [ 246 ] ; xx [ 62 ] = xx [ 238 ]
- xx [ 120 ] ; xx [ 255 ] = xx [ 56 ] * xx [ 246 ] ; xx [ 246 ] = xx [ 56 ] *
xx [ 166 ] ; xx [ 56 ] = xx [ 255 ] + xx [ 246 ] ; xx [ 166 ] = - xx [ 56 ] ;
xx [ 261 ] = xx [ 246 ] - xx [ 255 ] ; xx [ 246 ] = xx [ 238 ] + xx [ 120 ] ;
xx [ 120 ] = - xx [ 246 ] ; xx [ 300 ] = xx [ 62 ] ; xx [ 301 ] = xx [ 166 ]
; xx [ 302 ] = xx [ 261 ] ; xx [ 303 ] = xx [ 120 ] ; pm_math_quatCompose (
xx + 140 , xx + 300 , xx + 331 ) ; pm_math_quatCompose ( xx + 68 , xx + 331 ,
xx + 335 ) ; pm_math_quatCompose ( xx + 42 , xx + 335 , xx + 339 ) ;
pm_math_quatCompose ( xx + 31 , xx + 339 , xx + 343 ) ; xx [ 315 ] = xx [ 80
] * ( xx [ 340 ] * xx [ 342 ] - xx [ 339 ] * xx [ 341 ] ) ; xx [ 316 ] = ( xx
[ 339 ] * xx [ 340 ] + xx [ 341 ] * xx [ 342 ] ) * xx [ 80 ] ; xx [ 317 ] =
xx [ 22 ] - ( xx [ 340 ] * xx [ 340 ] + xx [ 341 ] * xx [ 341 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 315 , xx + 84 , xx + 347 ) ; pm_math_quatXform ( xx +
343 , xx + 347 , xx + 315 ) ; pm_math_quatXform ( xx + 300 , xx + 324 , xx +
343 ) ; xx [ 238 ] = xx [ 243 ] - xx [ 343 ] ; xx [ 243 ] = xx [ 262 ] - xx [
345 ] ; xx [ 324 ] = xx [ 238 ] ; xx [ 325 ] = - xx [ 344 ] ; xx [ 326 ] = xx
[ 243 ] ; pm_math_quatXform ( xx + 140 , xx + 324 , xx + 345 ) ; xx [ 255 ] =
xx [ 345 ] - xx [ 104 ] ; xx [ 262 ] = xx [ 346 ] + xx [ 96 ] ; xx [ 305 ] =
xx [ 347 ] - xx [ 107 ] ; xx [ 324 ] = xx [ 255 ] ; xx [ 325 ] = xx [ 262 ] ;
xx [ 326 ] = xx [ 305 ] ; pm_math_quatXform ( xx + 68 , xx + 324 , xx + 345 )
; xx [ 306 ] = xx [ 345 ] + xx [ 105 ] ; xx [ 311 ] = xx [ 346 ] + xx [ 118 ]
; xx [ 313 ] = xx [ 347 ] + xx [ 121 ] ; xx [ 345 ] = xx [ 306 ] ; xx [ 346 ]
= xx [ 311 ] ; xx [ 347 ] = xx [ 313 ] ; pm_math_quatXform ( xx + 42 , xx +
345 , xx + 348 ) ; xx [ 343 ] = xx [ 349 ] + xx [ 148 ] ; xx [ 349 ] = xx [
348 ] + xx [ 147 ] ; xx [ 348 ] = xx [ 343 ] * xx [ 19 ] - xx [ 349 ] * xx [
15 ] ; xx [ 350 ] = xx [ 80 ] * xx [ 19 ] * xx [ 348 ] - ( xx [ 343 ] - xx [
145 ] ) - xx [ 135 ] ; xx [ 351 ] = xx [ 349 ] + xx [ 80 ] * xx [ 15 ] * xx [
348 ] + xx [ 152 ] - xx [ 131 ] ; xx [ 348 ] = xx [ 351 ] * xx [ 26 ] ; xx [
352 ] = xx [ 350 ] * xx [ 26 ] ; xx [ 353 ] = xx [ 351 ] * xx [ 6 ] - xx [
350 ] * xx [ 14 ] ; xx [ 354 ] = - xx [ 348 ] ; xx [ 355 ] = xx [ 352 ] ; xx
[ 356 ] = xx [ 353 ] ; pm_math_cross3 ( xx + 149 , xx + 354 , xx + 357 ) ;
pm_math_quatCompose ( xx + 170 , xx + 335 , xx + 360 ) ; xx [ 354 ] = xx [ 4
] * xx [ 338 ] ; xx [ 355 ] = xx [ 4 ] * xx [ 336 ] + xx [ 337 ] ; xx [ 364 ]
= xx [ 354 ] ; xx [ 365 ] = xx [ 338 ] ; xx [ 366 ] = - xx [ 355 ] ;
pm_math_cross3 ( xx + 336 , xx + 364 , xx + 367 ) ; xx [ 356 ] = xx [ 335 ] *
xx [ 338 ] ; xx [ 364 ] = xx [ 22 ] + ( xx [ 367 ] - xx [ 335 ] * xx [ 354 ]
) * xx [ 80 ] ; xx [ 365 ] = xx [ 80 ] * ( xx [ 368 ] - xx [ 356 ] ) - xx [ 4
] ; xx [ 366 ] = xx [ 80 ] * ( xx [ 369 ] + xx [ 335 ] * xx [ 355 ] ) ;
pm_math_cross3 ( xx + 364 , xx + 84 , xx + 367 ) ; pm_math_quatXform ( xx +
360 , xx + 367 , xx + 364 ) ; xx [ 355 ] = - ( xx [ 313 ] * xx [ 4 ] ) ; xx [
367 ] = xx [ 355 ] ; xx [ 368 ] = - xx [ 313 ] ; xx [ 369 ] = xx [ 311 ] + xx
[ 306 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 42 , xx + 367 , xx + 370 ) ; xx
[ 367 ] = xx [ 370 ] + xx [ 183 ] ; xx [ 368 ] = xx [ 371 ] + xx [ 184 ] ; xx
[ 369 ] = xx [ 372 ] + xx [ 185 ] ; pm_math_quatXform ( xx + 161 , xx + 367 ,
xx + 370 ) ; xx [ 367 ] = xx [ 336 ] - xx [ 4 ] * xx [ 337 ] ; xx [ 373 ] = -
xx [ 338 ] ; xx [ 374 ] = xx [ 354 ] ; xx [ 375 ] = xx [ 367 ] ;
pm_math_cross3 ( xx + 336 , xx + 373 , xx + 376 ) ; xx [ 373 ] = xx [ 4 ] + (
xx [ 356 ] + xx [ 376 ] ) * xx [ 80 ] ; xx [ 374 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 377 ] - xx [ 4 ] * xx [ 356 ] ) ; xx [ 375 ] = xx [ 80 ] * ( xx [ 378
] - xx [ 335 ] * xx [ 367 ] ) ; pm_math_cross3 ( xx + 373 , xx + 84 , xx +
367 ) ; pm_math_quatXform ( xx + 360 , xx + 367 , xx + 373 ) ; xx [ 367 ] =
xx [ 313 ] ; xx [ 368 ] = xx [ 355 ] ; xx [ 369 ] = xx [ 311 ] * xx [ 4 ] -
xx [ 306 ] ; pm_math_quatXform ( xx + 42 , xx + 367 , xx + 354 ) ; xx [ 367 ]
= xx [ 354 ] + xx [ 197 ] ; xx [ 368 ] = xx [ 355 ] + xx [ 198 ] ; xx [ 369 ]
= xx [ 356 ] + xx [ 199 ] ; pm_math_quatXform ( xx + 161 , xx + 367 , xx +
354 ) ; xx [ 367 ] = xx [ 80 ] * ( xx [ 336 ] * xx [ 338 ] - xx [ 335 ] * xx
[ 337 ] ) ; xx [ 368 ] = ( xx [ 335 ] * xx [ 336 ] + xx [ 337 ] * xx [ 338 ]
) * xx [ 80 ] ; xx [ 369 ] = xx [ 22 ] - ( xx [ 336 ] * xx [ 336 ] + xx [ 337
] * xx [ 337 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 367 , xx + 84 , xx + 376
) ; pm_math_quatXform ( xx + 360 , xx + 376 , xx + 367 ) ; xx [ 313 ] = xx [
306 ] * xx [ 38 ] ; xx [ 360 ] = xx [ 311 ] * xx [ 38 ] ; xx [ 361 ] = xx [
306 ] * xx [ 29 ] + xx [ 311 ] * xx [ 36 ] ; xx [ 376 ] = xx [ 313 ] ; xx [
377 ] = xx [ 360 ] ; xx [ 378 ] = - xx [ 361 ] ; pm_math_cross3 ( xx + 179 ,
xx + 376 , xx + 380 ) ; xx [ 376 ] = xx [ 80 ] * ( xx [ 380 ] + xx [ 313 ] *
xx [ 28 ] ) + xx [ 37 ] - xx [ 311 ] - xx [ 119 ] ; xx [ 377 ] = xx [ 306 ] +
xx [ 80 ] * ( xx [ 381 ] + xx [ 360 ] * xx [ 28 ] ) + xx [ 23 ] + xx [ 117 ]
; xx [ 378 ] = ( xx [ 382 ] - xx [ 361 ] * xx [ 28 ] ) * xx [ 80 ] + xx [ 27
] ; pm_math_quatXform ( xx + 161 , xx + 376 , xx + 360 ) ;
pm_math_quatCompose ( xx + 212 , xx + 331 , xx + 380 ) ; xx [ 306 ] = xx [
333 ] * xx [ 333 ] ; xx [ 311 ] = xx [ 334 ] * xx [ 334 ] ; xx [ 313 ] = xx [
332 ] * xx [ 333 ] ; xx [ 363 ] = xx [ 331 ] * xx [ 334 ] ; xx [ 376 ] = xx [
331 ] * xx [ 333 ] ; xx [ 377 ] = xx [ 332 ] * xx [ 334 ] ; xx [ 384 ] = xx [
22 ] - ( xx [ 306 ] + xx [ 311 ] ) * xx [ 80 ] ; xx [ 385 ] = xx [ 80 ] * (
xx [ 313 ] - xx [ 363 ] ) ; xx [ 386 ] = ( xx [ 376 ] + xx [ 377 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 384 , xx + 84 , xx + 387 ) ; pm_math_quatXform (
xx + 380 , xx + 387 , xx + 384 ) ; xx [ 378 ] = xx [ 262 ] * xx [ 48 ] ; xx [
387 ] = xx [ 305 ] * xx [ 50 ] ; xx [ 388 ] = xx [ 378 ] + xx [ 387 ] ; xx [
389 ] = xx [ 262 ] * xx [ 47 ] ; xx [ 390 ] = xx [ 305 ] * xx [ 47 ] ; xx [
391 ] = - xx [ 388 ] ; xx [ 392 ] = - xx [ 389 ] ; xx [ 393 ] = - xx [ 390 ]
; pm_math_cross3 ( xx + 220 , xx + 391 , xx + 394 ) ; xx [ 391 ] = xx [ 80 ]
* ( xx [ 394 ] - xx [ 388 ] * xx [ 46 ] ) + xx [ 195 ] ; xx [ 392 ] = xx [ 80
] * ( xx [ 395 ] - xx [ 389 ] * xx [ 46 ] ) + xx [ 182 ] - xx [ 305 ] - xx [
74 ] ; xx [ 393 ] = xx [ 262 ] + xx [ 80 ] * ( xx [ 396 ] - xx [ 390 ] * xx [
46 ] ) + xx [ 192 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 170 , xx + 391 ,
xx + 388 ) ; xx [ 391 ] = xx [ 332 ] * xx [ 332 ] ; xx [ 392 ] = xx [ 333 ] *
xx [ 334 ] ; xx [ 393 ] = xx [ 331 ] * xx [ 332 ] ; xx [ 394 ] = ( xx [ 363 ]
+ xx [ 313 ] ) * xx [ 80 ] ; xx [ 395 ] = xx [ 22 ] - ( xx [ 311 ] + xx [ 391
] ) * xx [ 80 ] ; xx [ 396 ] = xx [ 80 ] * ( xx [ 392 ] - xx [ 393 ] ) ;
pm_math_cross3 ( xx + 394 , xx + 84 , xx + 402 ) ; pm_math_quatXform ( xx +
380 , xx + 402 , xx + 394 ) ; xx [ 311 ] = xx [ 255 ] * xx [ 48 ] ; xx [ 313
] = xx [ 255 ] * xx [ 47 ] ; xx [ 363 ] = xx [ 313 ] - xx [ 387 ] ; xx [ 387
] = xx [ 305 ] * xx [ 48 ] ; xx [ 402 ] = xx [ 311 ] ; xx [ 403 ] = xx [ 363
] ; xx [ 404 ] = xx [ 387 ] ; pm_math_cross3 ( xx + 220 , xx + 402 , xx + 405
) ; xx [ 402 ] = xx [ 305 ] + ( xx [ 311 ] * xx [ 46 ] + xx [ 405 ] ) * xx [
80 ] + xx [ 175 ] + xx [ 74 ] ; xx [ 403 ] = ( xx [ 363 ] * xx [ 46 ] + xx [
406 ] ) * xx [ 80 ] + xx [ 53 ] ; xx [ 404 ] = ( xx [ 387 ] * xx [ 46 ] + xx
[ 407 ] ) * xx [ 80 ] + xx [ 64 ] - xx [ 255 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 170 , xx + 402 , xx + 405 ) ; xx [ 402 ] = xx [ 80 ]
* ( xx [ 377 ] - xx [ 376 ] ) ; xx [ 403 ] = ( xx [ 393 ] + xx [ 392 ] ) * xx
[ 80 ] ; xx [ 404 ] = xx [ 22 ] - ( xx [ 391 ] + xx [ 306 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 402 , xx + 84 , xx + 391 ) ; pm_math_quatXform ( xx +
380 , xx + 391 , xx + 402 ) ; xx [ 305 ] = xx [ 255 ] * xx [ 50 ] ; xx [ 306
] = xx [ 262 ] * xx [ 50 ] ; xx [ 311 ] = xx [ 313 ] - xx [ 378 ] ; xx [ 376
] = xx [ 305 ] ; xx [ 377 ] = xx [ 306 ] ; xx [ 378 ] = xx [ 311 ] ;
pm_math_cross3 ( xx + 220 , xx + 376 , xx + 380 ) ; xx [ 376 ] = ( xx [ 305 ]
* xx [ 46 ] + xx [ 380 ] ) * xx [ 80 ] + xx [ 41 ] - xx [ 262 ] + xx [ 73 ] ;
xx [ 377 ] = xx [ 255 ] + ( xx [ 306 ] * xx [ 46 ] + xx [ 381 ] ) * xx [ 80 ]
+ xx [ 17 ] + xx [ 72 ] ; xx [ 378 ] = ( xx [ 311 ] * xx [ 46 ] + xx [ 382 ]
) * xx [ 80 ] + xx [ 35 ] ; pm_math_quatXform ( xx + 170 , xx + 376 , xx +
380 ) ; pm_math_quatCompose ( xx + 216 , xx + 300 , xx + 411 ) ; xx [ 300 ] =
xx [ 166 ] ; xx [ 301 ] = xx [ 261 ] ; xx [ 302 ] = xx [ 120 ] ; xx [ 120 ] =
xx [ 63 ] * xx [ 261 ] ; xx [ 166 ] = xx [ 246 ] * xx [ 57 ] - xx [ 56 ] * xx
[ 63 ] ; xx [ 255 ] = xx [ 57 ] * xx [ 261 ] ; xx [ 376 ] = - xx [ 120 ] ; xx
[ 377 ] = xx [ 166 ] ; xx [ 378 ] = xx [ 255 ] ; pm_math_cross3 ( xx + 300 ,
xx + 376 , xx + 391 ) ; xx [ 376 ] = xx [ 80 ] * ( xx [ 391 ] + xx [ 120 ] *
xx [ 62 ] ) - xx [ 57 ] ; xx [ 377 ] = xx [ 80 ] * ( xx [ 392 ] - xx [ 166 ]
* xx [ 62 ] ) ; xx [ 378 ] = ( xx [ 393 ] - xx [ 255 ] * xx [ 62 ] ) * xx [
80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 376 , xx + 84 , xx + 391 ) ;
pm_math_quatXform ( xx + 411 , xx + 391 , xx + 376 ) ; xx [ 391 ] = - ( xx [
63 ] * xx [ 344 ] ) ; xx [ 392 ] = xx [ 57 ] * xx [ 243 ] - xx [ 63 ] * xx [
238 ] ; xx [ 393 ] = xx [ 57 ] * xx [ 344 ] ; pm_math_quatXform ( xx + 140 ,
xx + 391 , xx + 415 ) ; xx [ 391 ] = xx [ 415 ] + xx [ 60 ] ; xx [ 392 ] = xx
[ 416 ] + xx [ 61 ] - xx [ 67 ] ; xx [ 393 ] = xx [ 417 ] - xx [ 40 ] ;
pm_math_quatXform ( xx + 212 , xx + 391 , xx + 415 ) ; xx [ 120 ] = xx [ 72 ]
* xx [ 414 ] ; xx [ 166 ] = xx [ 73 ] * xx [ 413 ] - xx [ 72 ] * xx [ 412 ] ;
xx [ 391 ] = xx [ 120 ] ; xx [ 392 ] = - ( xx [ 73 ] * xx [ 414 ] ) ; xx [
393 ] = xx [ 166 ] ; pm_math_cross3 ( xx + 412 , xx + 391 , xx + 418 ) ; xx [
255 ] = xx [ 246 ] * xx [ 254 ] ; xx [ 262 ] = xx [ 246 ] * xx [ 257 ] ; xx [
303 ] = xx [ 257 ] * xx [ 261 ] - xx [ 56 ] * xx [ 254 ] ; xx [ 391 ] = xx [
255 ] ; xx [ 392 ] = xx [ 262 ] ; xx [ 393 ] = xx [ 303 ] ; pm_math_cross3 (
xx + 300 , xx + 391 , xx + 421 ) ; xx [ 305 ] = xx [ 80 ] * ( xx [ 421 ] + xx
[ 255 ] * xx [ 62 ] ) - xx [ 257 ] ; xx [ 255 ] = xx [ 254 ] + ( xx [ 262 ] *
xx [ 62 ] + xx [ 422 ] ) * xx [ 80 ] ; xx [ 254 ] = xx [ 303 ] * xx [ 62 ] +
xx [ 423 ] ; xx [ 257 ] = xx [ 254 ] * xx [ 80 ] ; xx [ 391 ] = xx [ 305 ] ;
xx [ 392 ] = xx [ 255 ] ; xx [ 393 ] = xx [ 257 ] ; pm_math_quatXform ( xx +
216 , xx + 391 , xx + 421 ) ; xx [ 262 ] = xx [ 2 ] * xx [ 845 ] ; xx [ 303 ]
= sin ( xx [ 262 ] ) ; xx [ 306 ] = cos ( xx [ 262 ] ) ; xx [ 262 ] = xx [ 1
] * xx [ 303 ] - xx [ 5 ] * xx [ 306 ] ; xx [ 311 ] = xx [ 2 ] * xx [ 847 ] ;
xx [ 313 ] = cos ( xx [ 311 ] ) ; xx [ 363 ] = xx [ 262 ] * xx [ 313 ] ; xx [
383 ] = sin ( xx [ 311 ] ) ; xx [ 311 ] = xx [ 1 ] * xx [ 306 ] + xx [ 5 ] *
xx [ 303 ] ; xx [ 1 ] = xx [ 383 ] * xx [ 311 ] ; xx [ 5 ] = xx [ 12 ] * xx [
306 ] + xx [ 13 ] * xx [ 303 ] ; xx [ 387 ] = xx [ 12 ] * xx [ 303 ] - xx [
13 ] * xx [ 306 ] ; xx [ 12 ] = - ( xx [ 313 ] * xx [ 5 ] + xx [ 387 ] * xx [
383 ] ) ; xx [ 13 ] = xx [ 383 ] * xx [ 5 ] - xx [ 387 ] * xx [ 313 ] ; xx [
303 ] = xx [ 262 ] * xx [ 383 ] + xx [ 313 ] * xx [ 311 ] ; xx [ 424 ] = xx [
363 ] - xx [ 1 ] ; xx [ 425 ] = xx [ 12 ] ; xx [ 426 ] = xx [ 13 ] ; xx [ 427
] = xx [ 303 ] ; xx [ 306 ] = xx [ 21 ] * xx [ 852 ] - xx [ 25 ] * xx [ 849 ]
; xx [ 391 ] = xx [ 21 ] * xx [ 851 ] + xx [ 25 ] * xx [ 850 ] ; xx [ 392 ] =
- xx [ 391 ] ; xx [ 393 ] = xx [ 25 ] * xx [ 851 ] - xx [ 21 ] * xx [ 850 ] ;
xx [ 397 ] = - xx [ 393 ] ; xx [ 398 ] = xx [ 21 ] * xx [ 849 ] + xx [ 25 ] *
xx [ 852 ] ; xx [ 400 ] = - xx [ 398 ] ; xx [ 428 ] = xx [ 306 ] ; xx [ 429 ]
= xx [ 392 ] ; xx [ 430 ] = xx [ 397 ] ; xx [ 431 ] = xx [ 400 ] ;
pm_math_quatCompose ( xx + 424 , xx + 428 , xx + 432 ) ; xx [ 424 ] = ( xx [
393 ] * xx [ 306 ] + xx [ 391 ] * xx [ 398 ] ) * xx [ 80 ] ; xx [ 425 ] = xx
[ 80 ] * ( xx [ 393 ] * xx [ 398 ] - xx [ 306 ] * xx [ 391 ] ) ; xx [ 426 ] =
xx [ 22 ] - ( xx [ 391 ] * xx [ 391 ] + xx [ 393 ] * xx [ 393 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 424 , xx + 267 , xx + 436 ) ; pm_math_quatXform ( xx
+ 432 , xx + 436 , xx + 424 ) ; pm_math_quatXform ( xx + 428 , xx + 126 , xx
+ 432 ) ; xx [ 408 ] = xx [ 433 ] * xx [ 383 ] - xx [ 313 ] * xx [ 432 ] ; xx
[ 412 ] = xx [ 409 ] * xx [ 313 ] + xx [ 410 ] * xx [ 383 ] ; xx [ 413 ] = xx
[ 80 ] * xx [ 412 ] * xx [ 383 ] ; xx [ 427 ] = xx [ 80 ] * xx [ 383 ] * xx [
408 ] - ( xx [ 433 ] + xx [ 413 ] ) + xx [ 410 ] ; xx [ 434 ] = xx [ 262 ] ;
xx [ 435 ] = xx [ 311 ] ; xx [ 436 ] = xx [ 387 ] ; xx [ 437 ] = xx [ 80 ] *
xx [ 412 ] * xx [ 313 ] ; xx [ 412 ] = xx [ 432 ] + xx [ 80 ] * xx [ 313 ] *
xx [ 408 ] - xx [ 437 ] + xx [ 409 ] ; xx [ 408 ] = xx [ 387 ] * xx [ 412 ] ;
xx [ 438 ] = xx [ 387 ] * xx [ 427 ] ; xx [ 439 ] = xx [ 262 ] * xx [ 412 ] -
xx [ 427 ] * xx [ 311 ] ; xx [ 440 ] = - xx [ 408 ] ; xx [ 441 ] = xx [ 438 ]
; xx [ 442 ] = xx [ 439 ] ; pm_math_cross3 ( xx + 434 , xx + 440 , xx + 447 )
; xx [ 440 ] = - ( xx [ 1 ] - xx [ 363 ] ) ; xx [ 441 ] = xx [ 12 ] ; xx [
442 ] = xx [ 13 ] ; xx [ 443 ] = xx [ 303 ] ; pm_math_quatCompose ( xx + 440
, xx + 428 , xx + 450 ) ; pm_math_quatXform ( xx + 450 , xx + 280 , xx + 434
) ; pm_math_quatXform ( xx + 428 , xx + 167 , xx + 459 ) ; pm_math_quatXform
( xx + 440 , xx + 459 , xx + 464 ) ; pm_math_quatXform ( xx + 450 , xx + 297
, xx + 459 ) ; pm_math_quatXform ( xx + 428 , xx + 176 , xx + 467 ) ;
pm_math_quatXform ( xx + 440 , xx + 467 , xx + 470 ) ; xx [ 1 ] = xx [ 102 ]
* xx [ 453 ] ; xx [ 12 ] = xx [ 102 ] * xx [ 451 ] + xx [ 123 ] * xx [ 452 ]
; xx [ 467 ] = - xx [ 1 ] ; xx [ 468 ] = - ( xx [ 123 ] * xx [ 453 ] ) ; xx [
469 ] = xx [ 12 ] ; pm_math_cross3 ( xx + 451 , xx + 467 , xx + 474 ) ; xx [
467 ] = xx [ 392 ] ; xx [ 468 ] = xx [ 397 ] ; xx [ 469 ] = xx [ 400 ] ; xx [
13 ] = xx [ 117 ] * xx [ 398 ] ; xx [ 303 ] = xx [ 119 ] * xx [ 398 ] ; xx [
363 ] = xx [ 117 ] * xx [ 391 ] + xx [ 393 ] * xx [ 119 ] ; xx [ 477 ] = xx [
13 ] ; xx [ 478 ] = xx [ 303 ] ; xx [ 479 ] = - xx [ 363 ] ; pm_math_cross3 (
xx + 467 , xx + 477 , xx + 480 ) ; xx [ 467 ] = xx [ 80 ] * ( xx [ 480 ] + xx
[ 13 ] * xx [ 306 ] ) - xx [ 119 ] ; xx [ 468 ] = xx [ 117 ] + ( xx [ 303 ] *
xx [ 306 ] + xx [ 481 ] ) * xx [ 80 ] ; xx [ 469 ] = ( xx [ 482 ] - xx [ 363
] * xx [ 306 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 440 , xx + 467 , xx +
477 ) ; xx [ 13 ] = xx [ 2 ] * xx [ 839 ] ; xx [ 303 ] = cos ( xx [ 13 ] ) ;
xx [ 363 ] = xx [ 312 ] * xx [ 303 ] ; xx [ 392 ] = sin ( xx [ 13 ] ) ; xx [
13 ] = xx [ 312 ] * xx [ 392 ] ; xx [ 397 ] = xx [ 363 ] + xx [ 13 ] ; xx [
400 ] = xx [ 379 ] * xx [ 392 ] ; xx [ 392 ] = xx [ 379 ] * xx [ 303 ] ; xx [
303 ] = xx [ 400 ] - xx [ 392 ] ; xx [ 440 ] = xx [ 392 ] + xx [ 400 ] ; xx [
392 ] = - xx [ 440 ] ; xx [ 400 ] = xx [ 13 ] - xx [ 363 ] ; xx [ 441 ] = -
xx [ 397 ] ; xx [ 442 ] = xx [ 303 ] ; xx [ 443 ] = xx [ 392 ] ; xx [ 444 ] =
xx [ 400 ] ; pm_math_quatCompose ( xx + 140 , xx + 441 , xx + 480 ) ;
pm_math_quatCompose ( xx + 68 , xx + 480 , xx + 484 ) ; pm_math_quatCompose (
xx + 42 , xx + 484 , xx + 488 ) ; pm_math_quatCompose ( xx + 31 , xx + 488 ,
xx + 492 ) ; xx [ 467 ] = xx [ 80 ] * ( xx [ 489 ] * xx [ 491 ] - xx [ 488 ]
* xx [ 490 ] ) ; xx [ 468 ] = ( xx [ 488 ] * xx [ 489 ] + xx [ 490 ] * xx [
491 ] ) * xx [ 80 ] ; xx [ 469 ] = xx [ 22 ] - ( xx [ 489 ] * xx [ 489 ] + xx
[ 490 ] * xx [ 490 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 467 , xx + 84 , xx
+ 496 ) ; pm_math_quatXform ( xx + 492 , xx + 496 , xx + 467 ) ;
pm_math_quatXform ( xx + 441 , xx + 456 , xx + 492 ) ; xx [ 13 ] = xx [ 314 ]
+ xx [ 492 ] ; xx [ 314 ] = xx [ 462 ] - xx [ 494 ] ; xx [ 454 ] = - xx [ 13
] ; xx [ 455 ] = - xx [ 493 ] ; xx [ 456 ] = xx [ 314 ] ; pm_math_quatXform (
xx + 140 , xx + 454 , xx + 494 ) ; xx [ 363 ] = xx [ 494 ] - xx [ 104 ] ; xx
[ 451 ] = xx [ 495 ] + xx [ 96 ] ; xx [ 452 ] = xx [ 496 ] - xx [ 107 ] ; xx
[ 454 ] = xx [ 363 ] ; xx [ 455 ] = xx [ 451 ] ; xx [ 456 ] = xx [ 452 ] ;
pm_math_quatXform ( xx + 68 , xx + 454 , xx + 494 ) ; xx [ 457 ] = xx [ 494 ]
+ xx [ 105 ] ; xx [ 458 ] = xx [ 495 ] + xx [ 118 ] ; xx [ 462 ] = xx [ 496 ]
+ xx [ 121 ] ; xx [ 494 ] = xx [ 457 ] ; xx [ 495 ] = xx [ 458 ] ; xx [ 496 ]
= xx [ 462 ] ; pm_math_quatXform ( xx + 42 , xx + 494 , xx + 497 ) ; xx [ 492
] = xx [ 498 ] + xx [ 148 ] ; xx [ 498 ] = xx [ 497 ] + xx [ 147 ] ; xx [ 497
] = xx [ 492 ] * xx [ 19 ] - xx [ 498 ] * xx [ 15 ] ; xx [ 499 ] = xx [ 80 ]
* xx [ 19 ] * xx [ 497 ] - ( xx [ 492 ] - xx [ 145 ] ) - xx [ 135 ] ; xx [
500 ] = xx [ 498 ] + xx [ 80 ] * xx [ 15 ] * xx [ 497 ] + xx [ 152 ] - xx [
131 ] ; xx [ 497 ] = xx [ 500 ] * xx [ 26 ] ; xx [ 501 ] = xx [ 499 ] * xx [
26 ] ; xx [ 502 ] = xx [ 500 ] * xx [ 6 ] - xx [ 499 ] * xx [ 14 ] ; xx [ 503
] = - xx [ 497 ] ; xx [ 504 ] = xx [ 501 ] ; xx [ 505 ] = xx [ 502 ] ;
pm_math_cross3 ( xx + 149 , xx + 503 , xx + 507 ) ; pm_math_quatCompose ( xx
+ 170 , xx + 484 , xx + 510 ) ; xx [ 503 ] = xx [ 4 ] * xx [ 487 ] ; xx [ 504
] = xx [ 4 ] * xx [ 485 ] + xx [ 486 ] ; xx [ 514 ] = xx [ 503 ] ; xx [ 515 ]
= xx [ 487 ] ; xx [ 516 ] = - xx [ 504 ] ; pm_math_cross3 ( xx + 485 , xx +
514 , xx + 517 ) ; xx [ 505 ] = xx [ 484 ] * xx [ 487 ] ; xx [ 514 ] = xx [
22 ] + ( xx [ 517 ] - xx [ 484 ] * xx [ 503 ] ) * xx [ 80 ] ; xx [ 515 ] = xx
[ 80 ] * ( xx [ 518 ] - xx [ 505 ] ) - xx [ 4 ] ; xx [ 516 ] = xx [ 80 ] * (
xx [ 519 ] + xx [ 484 ] * xx [ 504 ] ) ; pm_math_cross3 ( xx + 514 , xx + 84
, xx + 517 ) ; pm_math_quatXform ( xx + 510 , xx + 517 , xx + 514 ) ; xx [
504 ] = - ( xx [ 462 ] * xx [ 4 ] ) ; xx [ 517 ] = xx [ 504 ] ; xx [ 518 ] =
- xx [ 462 ] ; xx [ 519 ] = xx [ 458 ] + xx [ 457 ] * xx [ 4 ] ;
pm_math_quatXform ( xx + 42 , xx + 517 , xx + 520 ) ; xx [ 517 ] = xx [ 520 ]
+ xx [ 183 ] ; xx [ 518 ] = xx [ 521 ] + xx [ 184 ] ; xx [ 519 ] = xx [ 522 ]
+ xx [ 185 ] ; pm_math_quatXform ( xx + 161 , xx + 517 , xx + 520 ) ; xx [
517 ] = xx [ 485 ] - xx [ 4 ] * xx [ 486 ] ; xx [ 523 ] = - xx [ 487 ] ; xx [
524 ] = xx [ 503 ] ; xx [ 525 ] = xx [ 517 ] ; pm_math_cross3 ( xx + 485 , xx
+ 523 , xx + 526 ) ; xx [ 523 ] = xx [ 4 ] + ( xx [ 505 ] + xx [ 526 ] ) * xx
[ 80 ] ; xx [ 524 ] = xx [ 22 ] + xx [ 80 ] * ( xx [ 527 ] - xx [ 4 ] * xx [
505 ] ) ; xx [ 525 ] = xx [ 80 ] * ( xx [ 528 ] - xx [ 484 ] * xx [ 517 ] ) ;
pm_math_cross3 ( xx + 523 , xx + 84 , xx + 517 ) ; pm_math_quatXform ( xx +
510 , xx + 517 , xx + 523 ) ; xx [ 517 ] = xx [ 462 ] ; xx [ 518 ] = xx [ 504
] ; xx [ 519 ] = xx [ 458 ] * xx [ 4 ] - xx [ 457 ] ; pm_math_quatXform ( xx
+ 42 , xx + 517 , xx + 503 ) ; xx [ 517 ] = xx [ 503 ] + xx [ 197 ] ; xx [
518 ] = xx [ 504 ] + xx [ 198 ] ; xx [ 519 ] = xx [ 505 ] + xx [ 199 ] ;
pm_math_quatXform ( xx + 161 , xx + 517 , xx + 503 ) ; xx [ 517 ] = xx [ 80 ]
* ( xx [ 485 ] * xx [ 487 ] - xx [ 484 ] * xx [ 486 ] ) ; xx [ 518 ] = ( xx [
484 ] * xx [ 485 ] + xx [ 486 ] * xx [ 487 ] ) * xx [ 80 ] ; xx [ 519 ] = xx
[ 22 ] - ( xx [ 485 ] * xx [ 485 ] + xx [ 486 ] * xx [ 486 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 517 , xx + 84 , xx + 526 ) ; pm_math_quatXform ( xx +
510 , xx + 526 , xx + 517 ) ; xx [ 462 ] = xx [ 457 ] * xx [ 38 ] ; xx [ 510
] = xx [ 458 ] * xx [ 38 ] ; xx [ 511 ] = xx [ 457 ] * xx [ 29 ] + xx [ 458 ]
* xx [ 36 ] ; xx [ 526 ] = xx [ 462 ] ; xx [ 527 ] = xx [ 510 ] ; xx [ 528 ]
= - xx [ 511 ] ; pm_math_cross3 ( xx + 179 , xx + 526 , xx + 529 ) ; xx [ 526
] = xx [ 80 ] * ( xx [ 529 ] + xx [ 462 ] * xx [ 28 ] ) + xx [ 37 ] - xx [
458 ] - xx [ 119 ] ; xx [ 527 ] = xx [ 457 ] + xx [ 80 ] * ( xx [ 530 ] + xx
[ 510 ] * xx [ 28 ] ) + xx [ 23 ] + xx [ 117 ] ; xx [ 528 ] = ( xx [ 531 ] -
xx [ 511 ] * xx [ 28 ] ) * xx [ 80 ] + xx [ 27 ] ; pm_math_quatXform ( xx +
161 , xx + 526 , xx + 510 ) ; pm_math_quatCompose ( xx + 212 , xx + 480 , xx
+ 526 ) ; xx [ 457 ] = xx [ 482 ] * xx [ 482 ] ; xx [ 458 ] = xx [ 483 ] * xx
[ 483 ] ; xx [ 462 ] = xx [ 481 ] * xx [ 482 ] ; xx [ 513 ] = xx [ 480 ] * xx
[ 483 ] ; xx [ 530 ] = xx [ 480 ] * xx [ 482 ] ; xx [ 531 ] = xx [ 481 ] * xx
[ 483 ] ; xx [ 536 ] = xx [ 22 ] - ( xx [ 457 ] + xx [ 458 ] ) * xx [ 80 ] ;
xx [ 537 ] = xx [ 80 ] * ( xx [ 462 ] - xx [ 513 ] ) ; xx [ 538 ] = ( xx [
530 ] + xx [ 531 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 536 , xx + 84 , xx +
539 ) ; pm_math_quatXform ( xx + 526 , xx + 539 , xx + 536 ) ; xx [ 533 ] =
xx [ 451 ] * xx [ 48 ] ; xx [ 534 ] = xx [ 452 ] * xx [ 50 ] ; xx [ 539 ] =
xx [ 533 ] + xx [ 534 ] ; xx [ 540 ] = xx [ 451 ] * xx [ 47 ] ; xx [ 541 ] =
xx [ 452 ] * xx [ 47 ] ; xx [ 542 ] = - xx [ 539 ] ; xx [ 543 ] = - xx [ 540
] ; xx [ 544 ] = - xx [ 541 ] ; pm_math_cross3 ( xx + 220 , xx + 542 , xx +
549 ) ; xx [ 542 ] = xx [ 80 ] * ( xx [ 549 ] - xx [ 539 ] * xx [ 46 ] ) + xx
[ 195 ] ; xx [ 543 ] = xx [ 80 ] * ( xx [ 550 ] - xx [ 540 ] * xx [ 46 ] ) +
xx [ 182 ] - xx [ 452 ] - xx [ 74 ] ; xx [ 544 ] = xx [ 451 ] + xx [ 80 ] * (
xx [ 551 ] - xx [ 541 ] * xx [ 46 ] ) + xx [ 192 ] - xx [ 73 ] ;
pm_math_quatXform ( xx + 170 , xx + 542 , xx + 539 ) ; xx [ 542 ] = xx [ 481
] * xx [ 481 ] ; xx [ 543 ] = xx [ 482 ] * xx [ 483 ] ; xx [ 544 ] = xx [ 480
] * xx [ 481 ] ; xx [ 549 ] = ( xx [ 513 ] + xx [ 462 ] ) * xx [ 80 ] ; xx [
550 ] = xx [ 22 ] - ( xx [ 458 ] + xx [ 542 ] ) * xx [ 80 ] ; xx [ 551 ] = xx
[ 80 ] * ( xx [ 543 ] - xx [ 544 ] ) ; pm_math_cross3 ( xx + 549 , xx + 84 ,
xx + 552 ) ; pm_math_quatXform ( xx + 526 , xx + 552 , xx + 549 ) ; xx [ 458
] = xx [ 363 ] * xx [ 48 ] ; xx [ 462 ] = xx [ 363 ] * xx [ 47 ] ; xx [ 513 ]
= xx [ 462 ] - xx [ 534 ] ; xx [ 534 ] = xx [ 452 ] * xx [ 48 ] ; xx [ 552 ]
= xx [ 458 ] ; xx [ 553 ] = xx [ 513 ] ; xx [ 554 ] = xx [ 534 ] ;
pm_math_cross3 ( xx + 220 , xx + 552 , xx + 555 ) ; xx [ 552 ] = xx [ 452 ] +
( xx [ 458 ] * xx [ 46 ] + xx [ 555 ] ) * xx [ 80 ] + xx [ 175 ] + xx [ 74 ]
; xx [ 553 ] = ( xx [ 513 ] * xx [ 46 ] + xx [ 556 ] ) * xx [ 80 ] + xx [ 53
] ; xx [ 554 ] = ( xx [ 534 ] * xx [ 46 ] + xx [ 557 ] ) * xx [ 80 ] + xx [
64 ] - xx [ 363 ] - xx [ 72 ] ; pm_math_quatXform ( xx + 170 , xx + 552 , xx
+ 555 ) ; xx [ 552 ] = xx [ 80 ] * ( xx [ 531 ] - xx [ 530 ] ) ; xx [ 553 ] =
( xx [ 544 ] + xx [ 543 ] ) * xx [ 80 ] ; xx [ 554 ] = xx [ 22 ] - ( xx [ 542
] + xx [ 457 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 552 , xx + 84 , xx + 542
) ; pm_math_quatXform ( xx + 526 , xx + 542 , xx + 552 ) ; xx [ 452 ] = xx [
363 ] * xx [ 50 ] ; xx [ 457 ] = xx [ 451 ] * xx [ 50 ] ; xx [ 458 ] = xx [
462 ] - xx [ 533 ] ; xx [ 526 ] = xx [ 452 ] ; xx [ 527 ] = xx [ 457 ] ; xx [
528 ] = xx [ 458 ] ; pm_math_cross3 ( xx + 220 , xx + 526 , xx + 529 ) ; xx [
526 ] = ( xx [ 452 ] * xx [ 46 ] + xx [ 529 ] ) * xx [ 80 ] + xx [ 41 ] - xx
[ 451 ] + xx [ 73 ] ; xx [ 527 ] = xx [ 363 ] + ( xx [ 457 ] * xx [ 46 ] + xx
[ 530 ] ) * xx [ 80 ] + xx [ 17 ] + xx [ 72 ] ; xx [ 528 ] = ( xx [ 458 ] *
xx [ 46 ] + xx [ 531 ] ) * xx [ 80 ] + xx [ 35 ] ; pm_math_quatXform ( xx +
170 , xx + 526 , xx + 529 ) ; pm_math_quatCompose ( xx + 216 , xx + 441 , xx
+ 542 ) ; xx [ 441 ] = xx [ 303 ] ; xx [ 442 ] = xx [ 392 ] ; xx [ 443 ] = xx
[ 400 ] ; xx [ 363 ] = xx [ 440 ] * xx [ 63 ] ; xx [ 392 ] = xx [ 63 ] * xx [
303 ] - xx [ 57 ] * xx [ 400 ] ; xx [ 444 ] = xx [ 440 ] * xx [ 57 ] ; xx [
526 ] = xx [ 363 ] ; xx [ 527 ] = xx [ 392 ] ; xx [ 528 ] = - xx [ 444 ] ;
pm_math_cross3 ( xx + 441 , xx + 526 , xx + 558 ) ; xx [ 526 ] = xx [ 80 ] *
( xx [ 558 ] + xx [ 397 ] * xx [ 363 ] ) - xx [ 57 ] ; xx [ 527 ] = xx [ 80 ]
* ( xx [ 559 ] + xx [ 397 ] * xx [ 392 ] ) ; xx [ 528 ] = ( xx [ 560 ] - xx [
397 ] * xx [ 444 ] ) * xx [ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 526 , xx
+ 84 , xx + 558 ) ; pm_math_quatXform ( xx + 542 , xx + 558 , xx + 526 ) ; xx
[ 558 ] = - ( xx [ 63 ] * xx [ 493 ] ) ; xx [ 559 ] = xx [ 63 ] * xx [ 13 ] +
xx [ 57 ] * xx [ 314 ] ; xx [ 560 ] = xx [ 57 ] * xx [ 493 ] ;
pm_math_quatXform ( xx + 140 , xx + 558 , xx + 561 ) ; xx [ 558 ] = xx [ 561
] + xx [ 60 ] ; xx [ 559 ] = xx [ 562 ] + xx [ 61 ] - xx [ 67 ] ; xx [ 560 ]
= xx [ 563 ] - xx [ 40 ] ; pm_math_quatXform ( xx + 212 , xx + 558 , xx + 561
) ; xx [ 363 ] = xx [ 72 ] * xx [ 545 ] ; xx [ 392 ] = xx [ 72 ] * xx [ 543 ]
- xx [ 73 ] * xx [ 544 ] ; xx [ 558 ] = - xx [ 363 ] ; xx [ 559 ] = xx [ 73 ]
* xx [ 545 ] ; xx [ 560 ] = xx [ 392 ] ; pm_math_cross3 ( xx + 543 , xx + 558
, xx + 564 ) ; xx [ 444 ] = xx [ 327 ] * xx [ 400 ] ; xx [ 451 ] = xx [ 401 ]
* xx [ 400 ] ; xx [ 452 ] = xx [ 327 ] * xx [ 303 ] + xx [ 440 ] * xx [ 401 ]
; xx [ 558 ] = - xx [ 444 ] ; xx [ 559 ] = xx [ 451 ] ; xx [ 560 ] = xx [ 452
] ; pm_math_cross3 ( xx + 441 , xx + 558 , xx + 567 ) ; xx [ 457 ] = xx [ 401
] + xx [ 80 ] * ( xx [ 567 ] + xx [ 397 ] * xx [ 444 ] ) ; xx [ 401 ] = xx [
327 ] + ( xx [ 568 ] - xx [ 397 ] * xx [ 451 ] ) * xx [ 80 ] ; xx [ 327 ] =
xx [ 569 ] - xx [ 397 ] * xx [ 452 ] ; xx [ 444 ] = xx [ 327 ] * xx [ 80 ] ;
xx [ 558 ] = xx [ 457 ] ; xx [ 559 ] = xx [ 401 ] ; xx [ 560 ] = xx [ 444 ] ;
pm_math_quatXform ( xx + 216 , xx + 558 , xx + 567 ) ; xx [ 451 ] = xx [ 2 ]
* xx [ 869 ] ; xx [ 452 ] = cos ( xx [ 451 ] ) ; xx [ 458 ] = xx [ 2 ] * xx [
867 ] ; xx [ 462 ] = cos ( xx [ 458 ] ) ; xx [ 513 ] = sin ( xx [ 458 ] ) ;
xx [ 458 ] = xx [ 399 ] * xx [ 462 ] + xx [ 445 ] * xx [ 513 ] ; xx [ 533 ] =
xx [ 452 ] * xx [ 458 ] ; xx [ 534 ] = xx [ 399 ] * xx [ 513 ] - xx [ 445 ] *
xx [ 462 ] ; xx [ 399 ] = sin ( xx [ 451 ] ) ; xx [ 445 ] = xx [ 534 ] * xx [
399 ] ; xx [ 451 ] = xx [ 463 ] * xx [ 462 ] - xx [ 473 ] * xx [ 513 ] ; xx [
543 ] = xx [ 473 ] * xx [ 462 ] + xx [ 463 ] * xx [ 513 ] ; xx [ 462 ] = - (
xx [ 451 ] * xx [ 452 ] - xx [ 399 ] * xx [ 543 ] ) ; xx [ 463 ] = xx [ 451 ]
* xx [ 399 ] + xx [ 452 ] * xx [ 543 ] ; xx [ 473 ] = xx [ 399 ] * xx [ 458 ]
+ xx [ 534 ] * xx [ 452 ] ; xx [ 570 ] = xx [ 533 ] - xx [ 445 ] ; xx [ 571 ]
= xx [ 462 ] ; xx [ 572 ] = xx [ 463 ] ; xx [ 573 ] = xx [ 473 ] ; xx [ 513 ]
= xx [ 21 ] * xx [ 874 ] - xx [ 25 ] * xx [ 871 ] ; xx [ 544 ] = xx [ 21 ] *
xx [ 873 ] + xx [ 25 ] * xx [ 872 ] ; xx [ 546 ] = - xx [ 544 ] ; xx [ 558 ]
= xx [ 25 ] * xx [ 873 ] - xx [ 21 ] * xx [ 872 ] ; xx [ 559 ] = - xx [ 558 ]
; xx [ 560 ] = xx [ 21 ] * xx [ 871 ] + xx [ 25 ] * xx [ 874 ] ; xx [ 574 ] =
- xx [ 560 ] ; xx [ 575 ] = xx [ 513 ] ; xx [ 576 ] = xx [ 546 ] ; xx [ 577 ]
= xx [ 559 ] ; xx [ 578 ] = xx [ 574 ] ; pm_math_quatCompose ( xx + 570 , xx
+ 575 , xx + 579 ) ; xx [ 570 ] = ( xx [ 558 ] * xx [ 513 ] + xx [ 544 ] * xx
[ 560 ] ) * xx [ 80 ] ; xx [ 571 ] = xx [ 80 ] * ( xx [ 558 ] * xx [ 560 ] -
xx [ 544 ] * xx [ 513 ] ) ; xx [ 572 ] = xx [ 22 ] - ( xx [ 544 ] * xx [ 544
] + xx [ 558 ] * xx [ 558 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 570 , xx +
267 , xx + 585 ) ; pm_math_quatXform ( xx + 579 , xx + 585 , xx + 570 ) ;
pm_math_quatXform ( xx + 575 , xx + 126 , xx + 579 ) ; xx [ 573 ] = xx [ 580
] * xx [ 399 ] - xx [ 452 ] * xx [ 579 ] ; xx [ 581 ] = xx [ 547 ] * xx [ 452
] + xx [ 548 ] * xx [ 399 ] ; xx [ 582 ] = xx [ 80 ] * xx [ 581 ] * xx [ 399
] ; xx [ 583 ] = xx [ 80 ] * xx [ 399 ] * xx [ 573 ] - ( xx [ 580 ] - xx [
582 ] ) - xx [ 548 ] ; xx [ 585 ] = - xx [ 543 ] ; xx [ 586 ] = xx [ 458 ] ;
xx [ 587 ] = xx [ 534 ] ; xx [ 588 ] = xx [ 585 ] ; xx [ 589 ] = xx [ 80 ] *
xx [ 581 ] * xx [ 452 ] ; xx [ 581 ] = xx [ 579 ] + xx [ 80 ] * xx [ 452 ] *
xx [ 573 ] + xx [ 589 ] - xx [ 547 ] ; xx [ 573 ] = xx [ 581 ] * xx [ 543 ] ;
xx [ 590 ] = xx [ 583 ] * xx [ 543 ] ; xx [ 591 ] = xx [ 581 ] * xx [ 458 ] -
xx [ 534 ] * xx [ 583 ] ; xx [ 592 ] = xx [ 573 ] ; xx [ 593 ] = - xx [ 590 ]
; xx [ 594 ] = xx [ 591 ] ; pm_math_cross3 ( xx + 586 , xx + 592 , xx + 598 )
; xx [ 602 ] = - ( xx [ 445 ] - xx [ 533 ] ) ; xx [ 603 ] = xx [ 462 ] ; xx [
604 ] = xx [ 463 ] ; xx [ 605 ] = xx [ 473 ] ; pm_math_quatCompose ( xx + 602
, xx + 575 , xx + 610 ) ; pm_math_quatXform ( xx + 610 , xx + 280 , xx + 586
) ; pm_math_quatXform ( xx + 575 , xx + 167 , xx + 592 ) ; pm_math_quatXform
( xx + 602 , xx + 592 , xx + 606 ) ; pm_math_quatXform ( xx + 610 , xx + 297
, xx + 592 ) ; pm_math_quatXform ( xx + 575 , xx + 176 , xx + 614 ) ;
pm_math_quatXform ( xx + 602 , xx + 614 , xx + 617 ) ; xx [ 445 ] = xx [ 102
] * xx [ 613 ] ; xx [ 462 ] = xx [ 102 ] * xx [ 611 ] + xx [ 123 ] * xx [ 612
] ; xx [ 614 ] = - xx [ 445 ] ; xx [ 615 ] = - ( xx [ 123 ] * xx [ 613 ] ) ;
xx [ 616 ] = xx [ 462 ] ; pm_math_cross3 ( xx + 611 , xx + 614 , xx + 620 ) ;
xx [ 614 ] = xx [ 546 ] ; xx [ 615 ] = xx [ 559 ] ; xx [ 616 ] = xx [ 574 ] ;
xx [ 463 ] = xx [ 117 ] * xx [ 560 ] ; xx [ 473 ] = xx [ 119 ] * xx [ 560 ] ;
xx [ 533 ] = xx [ 117 ] * xx [ 544 ] + xx [ 558 ] * xx [ 119 ] ; xx [ 623 ] =
xx [ 463 ] ; xx [ 624 ] = xx [ 473 ] ; xx [ 625 ] = - xx [ 533 ] ;
pm_math_cross3 ( xx + 614 , xx + 623 , xx + 626 ) ; xx [ 614 ] = xx [ 80 ] *
( xx [ 626 ] + xx [ 463 ] * xx [ 513 ] ) - xx [ 119 ] ; xx [ 615 ] = xx [ 117
] + ( xx [ 473 ] * xx [ 513 ] + xx [ 627 ] ) * xx [ 80 ] ; xx [ 616 ] = ( xx
[ 628 ] - xx [ 533 ] * xx [ 513 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
602 , xx + 614 , xx + 623 ) ; xx [ 463 ] = xx [ 2 ] * xx [ 841 ] ; xx [ 473 ]
= cos ( xx [ 463 ] ) ; xx [ 533 ] = xx [ 312 ] * xx [ 473 ] ; xx [ 546 ] =
sin ( xx [ 463 ] ) ; xx [ 463 ] = xx [ 312 ] * xx [ 546 ] ; xx [ 312 ] = xx [
533 ] + xx [ 463 ] ; xx [ 559 ] = xx [ 379 ] * xx [ 473 ] ; xx [ 473 ] = xx [
379 ] * xx [ 546 ] ; xx [ 379 ] = xx [ 559 ] - xx [ 473 ] ; xx [ 546 ] = xx [
559 ] + xx [ 473 ] ; xx [ 473 ] = xx [ 533 ] - xx [ 463 ] ; xx [ 602 ] = xx [
312 ] ; xx [ 603 ] = xx [ 379 ] ; xx [ 604 ] = xx [ 546 ] ; xx [ 605 ] = xx [
473 ] ; pm_math_quatCompose ( xx + 140 , xx + 602 , xx + 626 ) ;
pm_math_quatCompose ( xx + 68 , xx + 626 , xx + 630 ) ; pm_math_quatCompose (
xx + 42 , xx + 630 , xx + 638 ) ; pm_math_quatCompose ( xx + 31 , xx + 638 ,
xx + 644 ) ; xx [ 614 ] = xx [ 80 ] * ( xx [ 639 ] * xx [ 641 ] - xx [ 638 ]
* xx [ 640 ] ) ; xx [ 615 ] = ( xx [ 638 ] * xx [ 639 ] + xx [ 640 ] * xx [
641 ] ) * xx [ 80 ] ; xx [ 616 ] = xx [ 22 ] - ( xx [ 639 ] * xx [ 639 ] + xx
[ 640 ] * xx [ 640 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 614 , xx + 84 , xx
+ 634 ) ; pm_math_quatXform ( xx + 644 , xx + 634 , xx + 614 ) ;
pm_math_quatXform ( xx + 602 , xx + 595 , xx + 634 ) ; xx [ 463 ] = xx [ 446
] + xx [ 634 ] ; xx [ 446 ] = xx [ 601 ] - xx [ 636 ] ; xx [ 595 ] = - xx [
463 ] ; xx [ 596 ] = - xx [ 635 ] ; xx [ 597 ] = xx [ 446 ] ;
pm_math_quatXform ( xx + 140 , xx + 595 , xx + 644 ) ; xx [ 533 ] = xx [ 644
] - xx [ 104 ] ; xx [ 559 ] = xx [ 645 ] + xx [ 96 ] ; xx [ 574 ] = xx [ 646
] - xx [ 107 ] ; xx [ 595 ] = xx [ 533 ] ; xx [ 596 ] = xx [ 559 ] ; xx [ 597
] = xx [ 574 ] ; pm_math_quatXform ( xx + 68 , xx + 595 , xx + 644 ) ; xx [
601 ] = xx [ 644 ] + xx [ 105 ] ; xx [ 611 ] = xx [ 645 ] + xx [ 118 ] ; xx [
612 ] = xx [ 646 ] + xx [ 121 ] ; xx [ 644 ] = xx [ 601 ] ; xx [ 645 ] = xx [
611 ] ; xx [ 646 ] = xx [ 612 ] ; pm_math_quatXform ( xx + 42 , xx + 644 , xx
+ 647 ) ; xx [ 634 ] = xx [ 648 ] + xx [ 148 ] ; xx [ 636 ] = xx [ 647 ] + xx
[ 147 ] ; xx [ 642 ] = xx [ 634 ] * xx [ 19 ] - xx [ 636 ] * xx [ 15 ] ; xx [
647 ] = xx [ 80 ] * xx [ 19 ] * xx [ 642 ] - ( xx [ 634 ] - xx [ 145 ] ) - xx
[ 135 ] ; xx [ 648 ] = xx [ 636 ] + xx [ 80 ] * xx [ 15 ] * xx [ 642 ] + xx [
152 ] - xx [ 131 ] ; xx [ 642 ] = xx [ 648 ] * xx [ 26 ] ; xx [ 649 ] = xx [
647 ] * xx [ 26 ] ; xx [ 650 ] = xx [ 648 ] * xx [ 6 ] - xx [ 647 ] * xx [ 14
] ; xx [ 651 ] = - xx [ 642 ] ; xx [ 652 ] = xx [ 649 ] ; xx [ 653 ] = xx [
650 ] ; pm_math_cross3 ( xx + 149 , xx + 651 , xx + 654 ) ;
pm_math_quatCompose ( xx + 170 , xx + 630 , xx + 657 ) ; xx [ 651 ] = xx [ 4
] * xx [ 633 ] ; xx [ 652 ] = xx [ 4 ] * xx [ 631 ] + xx [ 632 ] ; xx [ 661 ]
= xx [ 651 ] ; xx [ 662 ] = xx [ 633 ] ; xx [ 663 ] = - xx [ 652 ] ;
pm_math_cross3 ( xx + 631 , xx + 661 , xx + 664 ) ; xx [ 653 ] = xx [ 630 ] *
xx [ 633 ] ; xx [ 661 ] = xx [ 22 ] + ( xx [ 664 ] - xx [ 630 ] * xx [ 651 ]
) * xx [ 80 ] ; xx [ 662 ] = xx [ 80 ] * ( xx [ 665 ] - xx [ 653 ] ) - xx [ 4
] ; xx [ 663 ] = xx [ 80 ] * ( xx [ 666 ] + xx [ 630 ] * xx [ 652 ] ) ;
pm_math_cross3 ( xx + 661 , xx + 84 , xx + 664 ) ; pm_math_quatXform ( xx +
657 , xx + 664 , xx + 661 ) ; xx [ 652 ] = - ( xx [ 612 ] * xx [ 4 ] ) ; xx [
664 ] = xx [ 652 ] ; xx [ 665 ] = - xx [ 612 ] ; xx [ 666 ] = xx [ 611 ] + xx
[ 601 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 42 , xx + 664 , xx + 667 ) ; xx
[ 664 ] = xx [ 667 ] + xx [ 183 ] ; xx [ 665 ] = xx [ 668 ] + xx [ 184 ] ; xx
[ 666 ] = xx [ 669 ] + xx [ 185 ] ; pm_math_quatXform ( xx + 161 , xx + 664 ,
xx + 667 ) ; xx [ 664 ] = xx [ 631 ] - xx [ 4 ] * xx [ 632 ] ; xx [ 673 ] = -
xx [ 633 ] ; xx [ 674 ] = xx [ 651 ] ; xx [ 675 ] = xx [ 664 ] ;
pm_math_cross3 ( xx + 631 , xx + 673 , xx + 676 ) ; xx [ 673 ] = xx [ 4 ] + (
xx [ 653 ] + xx [ 676 ] ) * xx [ 80 ] ; xx [ 674 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 677 ] - xx [ 4 ] * xx [ 653 ] ) ; xx [ 675 ] = xx [ 80 ] * ( xx [ 678
] - xx [ 630 ] * xx [ 664 ] ) ; pm_math_cross3 ( xx + 673 , xx + 84 , xx +
664 ) ; pm_math_quatXform ( xx + 657 , xx + 664 , xx + 673 ) ; xx [ 664 ] =
xx [ 612 ] ; xx [ 665 ] = xx [ 652 ] ; xx [ 666 ] = xx [ 611 ] * xx [ 4 ] -
xx [ 601 ] ; pm_math_quatXform ( xx + 42 , xx + 664 , xx + 651 ) ; xx [ 664 ]
= xx [ 651 ] + xx [ 197 ] ; xx [ 665 ] = xx [ 652 ] + xx [ 198 ] ; xx [ 666 ]
= xx [ 653 ] + xx [ 199 ] ; pm_math_quatXform ( xx + 161 , xx + 664 , xx +
651 ) ; xx [ 664 ] = xx [ 80 ] * ( xx [ 631 ] * xx [ 633 ] - xx [ 630 ] * xx
[ 632 ] ) ; xx [ 665 ] = ( xx [ 630 ] * xx [ 631 ] + xx [ 632 ] * xx [ 633 ]
) * xx [ 80 ] ; xx [ 666 ] = xx [ 22 ] - ( xx [ 631 ] * xx [ 631 ] + xx [ 632
] * xx [ 632 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 664 , xx + 84 , xx + 676
) ; pm_math_quatXform ( xx + 657 , xx + 676 , xx + 664 ) ; xx [ 612 ] = xx [
601 ] * xx [ 38 ] ; xx [ 657 ] = xx [ 611 ] * xx [ 38 ] ; xx [ 658 ] = xx [
601 ] * xx [ 29 ] + xx [ 611 ] * xx [ 36 ] ; xx [ 676 ] = xx [ 612 ] ; xx [
677 ] = xx [ 657 ] ; xx [ 678 ] = - xx [ 658 ] ; pm_math_cross3 ( xx + 179 ,
xx + 676 , xx + 681 ) ; xx [ 676 ] = xx [ 80 ] * ( xx [ 681 ] + xx [ 612 ] *
xx [ 28 ] ) + xx [ 37 ] - xx [ 611 ] - xx [ 119 ] ; xx [ 677 ] = xx [ 601 ] +
xx [ 80 ] * ( xx [ 682 ] + xx [ 657 ] * xx [ 28 ] ) + xx [ 23 ] + xx [ 117 ]
; xx [ 678 ] = ( xx [ 683 ] - xx [ 658 ] * xx [ 28 ] ) * xx [ 80 ] + xx [ 27
] ; pm_math_quatXform ( xx + 161 , xx + 676 , xx + 657 ) ;
pm_math_quatCompose ( xx + 212 , xx + 626 , xx + 676 ) ; xx [ 601 ] = xx [
628 ] * xx [ 628 ] ; xx [ 611 ] = xx [ 629 ] * xx [ 629 ] ; xx [ 612 ] = xx [
627 ] * xx [ 628 ] ; xx [ 660 ] = xx [ 626 ] * xx [ 629 ] ; xx [ 670 ] = xx [
626 ] * xx [ 628 ] ; xx [ 671 ] = xx [ 627 ] * xx [ 629 ] ; xx [ 681 ] = xx [
22 ] - ( xx [ 601 ] + xx [ 611 ] ) * xx [ 80 ] ; xx [ 682 ] = xx [ 80 ] * (
xx [ 612 ] - xx [ 660 ] ) ; xx [ 683 ] = ( xx [ 670 ] + xx [ 671 ] ) * xx [
80 ] ; pm_math_cross3 ( xx + 681 , xx + 84 , xx + 686 ) ; pm_math_quatXform (
xx + 676 , xx + 686 , xx + 681 ) ; xx [ 686 ] = xx [ 559 ] * xx [ 48 ] ; xx [
687 ] = xx [ 574 ] * xx [ 50 ] ; xx [ 688 ] = xx [ 686 ] + xx [ 687 ] ; xx [
689 ] = xx [ 559 ] * xx [ 47 ] ; xx [ 690 ] = xx [ 574 ] * xx [ 47 ] ; xx [
691 ] = - xx [ 688 ] ; xx [ 692 ] = - xx [ 689 ] ; xx [ 693 ] = - xx [ 690 ]
; pm_math_cross3 ( xx + 220 , xx + 691 , xx + 694 ) ; xx [ 691 ] = xx [ 80 ]
* ( xx [ 694 ] - xx [ 688 ] * xx [ 46 ] ) + xx [ 195 ] ; xx [ 692 ] = xx [ 80
] * ( xx [ 695 ] - xx [ 689 ] * xx [ 46 ] ) + xx [ 182 ] - xx [ 574 ] - xx [
74 ] ; xx [ 693 ] = xx [ 559 ] + xx [ 80 ] * ( xx [ 696 ] - xx [ 690 ] * xx [
46 ] ) + xx [ 192 ] - xx [ 73 ] ; pm_math_quatXform ( xx + 170 , xx + 691 ,
xx + 688 ) ; xx [ 691 ] = xx [ 627 ] * xx [ 627 ] ; xx [ 692 ] = xx [ 628 ] *
xx [ 629 ] ; xx [ 693 ] = xx [ 626 ] * xx [ 627 ] ; xx [ 694 ] = ( xx [ 660 ]
+ xx [ 612 ] ) * xx [ 80 ] ; xx [ 695 ] = xx [ 22 ] - ( xx [ 611 ] + xx [ 691
] ) * xx [ 80 ] ; xx [ 696 ] = xx [ 80 ] * ( xx [ 692 ] - xx [ 693 ] ) ;
pm_math_cross3 ( xx + 694 , xx + 84 , xx + 697 ) ; pm_math_quatXform ( xx +
676 , xx + 697 , xx + 694 ) ; xx [ 611 ] = xx [ 533 ] * xx [ 48 ] ; xx [ 612
] = xx [ 533 ] * xx [ 47 ] ; xx [ 660 ] = xx [ 612 ] - xx [ 687 ] ; xx [ 687
] = xx [ 574 ] * xx [ 48 ] ; xx [ 697 ] = xx [ 611 ] ; xx [ 698 ] = xx [ 660
] ; xx [ 699 ] = xx [ 687 ] ; pm_math_cross3 ( xx + 220 , xx + 697 , xx + 700
) ; xx [ 697 ] = xx [ 574 ] + ( xx [ 611 ] * xx [ 46 ] + xx [ 700 ] ) * xx [
80 ] + xx [ 175 ] + xx [ 74 ] ; xx [ 698 ] = ( xx [ 660 ] * xx [ 46 ] + xx [
701 ] ) * xx [ 80 ] + xx [ 53 ] ; xx [ 699 ] = ( xx [ 687 ] * xx [ 46 ] + xx
[ 702 ] ) * xx [ 80 ] + xx [ 64 ] - xx [ 533 ] - xx [ 72 ] ;
pm_math_quatXform ( xx + 170 , xx + 697 , xx + 700 ) ; xx [ 697 ] = xx [ 80 ]
* ( xx [ 671 ] - xx [ 670 ] ) ; xx [ 698 ] = ( xx [ 693 ] + xx [ 692 ] ) * xx
[ 80 ] ; xx [ 699 ] = xx [ 22 ] - ( xx [ 691 ] + xx [ 601 ] ) * xx [ 80 ] ;
pm_math_cross3 ( xx + 697 , xx + 84 , xx + 691 ) ; pm_math_quatXform ( xx +
676 , xx + 691 , xx + 697 ) ; xx [ 574 ] = xx [ 533 ] * xx [ 50 ] ; xx [ 601
] = xx [ 559 ] * xx [ 50 ] ; xx [ 611 ] = xx [ 612 ] - xx [ 686 ] ; xx [ 676
] = xx [ 574 ] ; xx [ 677 ] = xx [ 601 ] ; xx [ 678 ] = xx [ 611 ] ;
pm_math_cross3 ( xx + 220 , xx + 676 , xx + 691 ) ; xx [ 676 ] = ( xx [ 574 ]
* xx [ 46 ] + xx [ 691 ] ) * xx [ 80 ] + xx [ 41 ] - xx [ 559 ] + xx [ 73 ] ;
xx [ 677 ] = xx [ 533 ] + ( xx [ 601 ] * xx [ 46 ] + xx [ 692 ] ) * xx [ 80 ]
+ xx [ 17 ] + xx [ 72 ] ; xx [ 678 ] = ( xx [ 611 ] * xx [ 46 ] + xx [ 693 ]
) * xx [ 80 ] + xx [ 35 ] ; pm_math_quatXform ( xx + 170 , xx + 676 , xx +
691 ) ; pm_math_quatCompose ( xx + 216 , xx + 602 , xx + 676 ) ; xx [ 601 ] =
xx [ 379 ] ; xx [ 602 ] = xx [ 546 ] ; xx [ 603 ] = xx [ 473 ] ; xx [ 533 ] =
xx [ 546 ] * xx [ 63 ] ; xx [ 559 ] = xx [ 63 ] * xx [ 379 ] - xx [ 57 ] * xx
[ 473 ] ; xx [ 574 ] = xx [ 546 ] * xx [ 57 ] ; xx [ 703 ] = - xx [ 533 ] ;
xx [ 704 ] = xx [ 559 ] ; xx [ 705 ] = xx [ 574 ] ; pm_math_cross3 ( xx + 601
, xx + 703 , xx + 706 ) ; xx [ 703 ] = xx [ 80 ] * ( xx [ 706 ] + xx [ 312 ]
* xx [ 533 ] ) - xx [ 57 ] ; xx [ 704 ] = xx [ 80 ] * ( xx [ 707 ] - xx [ 312
] * xx [ 559 ] ) ; xx [ 705 ] = ( xx [ 708 ] - xx [ 312 ] * xx [ 574 ] ) * xx
[ 80 ] - xx [ 63 ] ; pm_math_cross3 ( xx + 703 , xx + 84 , xx + 706 ) ;
pm_math_quatXform ( xx + 676 , xx + 706 , xx + 703 ) ; xx [ 706 ] = - ( xx [
63 ] * xx [ 635 ] ) ; xx [ 707 ] = xx [ 63 ] * xx [ 463 ] + xx [ 57 ] * xx [
446 ] ; xx [ 708 ] = xx [ 57 ] * xx [ 635 ] ; pm_math_quatXform ( xx + 140 ,
xx + 706 , xx + 709 ) ; xx [ 706 ] = xx [ 709 ] + xx [ 60 ] ; xx [ 707 ] = xx
[ 710 ] + xx [ 61 ] - xx [ 67 ] ; xx [ 708 ] = xx [ 711 ] - xx [ 40 ] ;
pm_math_quatXform ( xx + 212 , xx + 706 , xx + 709 ) ; xx [ 533 ] = xx [ 72 ]
* xx [ 679 ] ; xx [ 559 ] = xx [ 72 ] * xx [ 677 ] - xx [ 73 ] * xx [ 678 ] ;
xx [ 706 ] = - xx [ 533 ] ; xx [ 707 ] = xx [ 73 ] * xx [ 679 ] ; xx [ 708 ]
= xx [ 559 ] ; pm_math_cross3 ( xx + 677 , xx + 706 , xx + 712 ) ; xx [ 574 ]
= xx [ 506 ] * xx [ 473 ] ; xx [ 604 ] = xx [ 535 ] * xx [ 473 ] ; xx [ 605 ]
= xx [ 506 ] * xx [ 379 ] + xx [ 546 ] * xx [ 535 ] ; xx [ 706 ] = xx [ 574 ]
; xx [ 707 ] = xx [ 604 ] ; xx [ 708 ] = - xx [ 605 ] ; pm_math_cross3 ( xx +
601 , xx + 706 , xx + 715 ) ; xx [ 611 ] = xx [ 535 ] + xx [ 80 ] * ( xx [
715 ] + xx [ 312 ] * xx [ 574 ] ) ; xx [ 535 ] = ( xx [ 312 ] * xx [ 604 ] +
xx [ 716 ] ) * xx [ 80 ] - xx [ 506 ] ; xx [ 506 ] = xx [ 717 ] - xx [ 312 ]
* xx [ 605 ] ; xx [ 574 ] = xx [ 506 ] * xx [ 80 ] ; xx [ 706 ] = xx [ 611 ]
; xx [ 707 ] = xx [ 535 ] ; xx [ 708 ] = xx [ 574 ] ; pm_math_quatXform ( xx
+ 216 , xx + 706 , xx + 715 ) ; xx [ 604 ] = xx [ 2 ] * xx [ 880 ] ; xx [ 605
] = cos ( xx [ 604 ] ) ; xx [ 612 ] = xx [ 2 ] * xx [ 878 ] ; xx [ 660 ] =
cos ( xx [ 612 ] ) ; xx [ 670 ] = sin ( xx [ 612 ] ) ; xx [ 612 ] = xx [ 532
] * xx [ 660 ] + xx [ 584 ] * xx [ 670 ] ; xx [ 671 ] = xx [ 605 ] * xx [ 612
] ; xx [ 677 ] = xx [ 584 ] * xx [ 660 ] - xx [ 532 ] * xx [ 670 ] ; xx [ 532
] = sin ( xx [ 604 ] ) ; xx [ 584 ] = xx [ 677 ] * xx [ 532 ] ; xx [ 604 ] =
xx [ 609 ] * xx [ 670 ] - xx [ 637 ] * xx [ 660 ] ; xx [ 678 ] = xx [ 609 ] *
xx [ 660 ] + xx [ 637 ] * xx [ 670 ] ; xx [ 609 ] = - ( xx [ 604 ] * xx [ 605
] + xx [ 532 ] * xx [ 678 ] ) ; xx [ 637 ] = xx [ 604 ] * xx [ 532 ] - xx [
605 ] * xx [ 678 ] ; xx [ 660 ] = xx [ 677 ] * xx [ 605 ] - xx [ 532 ] * xx [
612 ] ; xx [ 721 ] = - ( xx [ 671 ] + xx [ 584 ] ) ; xx [ 722 ] = xx [ 609 ]
; xx [ 723 ] = xx [ 637 ] ; xx [ 724 ] = xx [ 660 ] ; xx [ 670 ] = xx [ 21 ]
* xx [ 885 ] - xx [ 25 ] * xx [ 882 ] ; xx [ 686 ] = xx [ 21 ] * xx [ 884 ] +
xx [ 25 ] * xx [ 883 ] ; xx [ 687 ] = - xx [ 686 ] ; xx [ 706 ] = xx [ 25 ] *
xx [ 884 ] - xx [ 21 ] * xx [ 883 ] ; xx [ 707 ] = - xx [ 706 ] ; xx [ 708 ]
= xx [ 21 ] * xx [ 882 ] + xx [ 25 ] * xx [ 885 ] ; xx [ 718 ] = - xx [ 708 ]
; xx [ 725 ] = xx [ 670 ] ; xx [ 726 ] = xx [ 687 ] ; xx [ 727 ] = xx [ 707 ]
; xx [ 728 ] = xx [ 718 ] ; pm_math_quatCompose ( xx + 721 , xx + 725 , xx +
729 ) ; xx [ 721 ] = ( xx [ 706 ] * xx [ 670 ] + xx [ 686 ] * xx [ 708 ] ) *
xx [ 80 ] ; xx [ 722 ] = xx [ 80 ] * ( xx [ 706 ] * xx [ 708 ] - xx [ 670 ] *
xx [ 686 ] ) ; xx [ 723 ] = xx [ 22 ] - ( xx [ 686 ] * xx [ 686 ] + xx [ 706
] * xx [ 706 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 721 , xx + 267 , xx +
733 ) ; pm_math_quatXform ( xx + 729 , xx + 733 , xx + 721 ) ;
pm_math_quatXform ( xx + 725 , xx + 126 , xx + 729 ) ; xx [ 719 ] = xx [ 730
] * xx [ 532 ] - xx [ 605 ] * xx [ 729 ] ; xx [ 724 ] = xx [ 684 ] * xx [ 605
] + xx [ 685 ] * xx [ 532 ] ; xx [ 731 ] = xx [ 80 ] * xx [ 724 ] * xx [ 532
] ; xx [ 732 ] = xx [ 80 ] * xx [ 532 ] * xx [ 719 ] - ( xx [ 730 ] - xx [
731 ] ) - xx [ 685 ] ; xx [ 733 ] = - xx [ 612 ] ; xx [ 734 ] = xx [ 733 ] ;
xx [ 735 ] = xx [ 677 ] ; xx [ 736 ] = xx [ 678 ] ; xx [ 737 ] = xx [ 80 ] *
xx [ 724 ] * xx [ 605 ] ; xx [ 724 ] = xx [ 729 ] + xx [ 80 ] * xx [ 605 ] *
xx [ 719 ] + xx [ 737 ] - xx [ 684 ] ; xx [ 719 ] = xx [ 724 ] * xx [ 678 ] ;
xx [ 739 ] = xx [ 732 ] * xx [ 678 ] ; xx [ 740 ] = xx [ 724 ] * xx [ 612 ] +
xx [ 677 ] * xx [ 732 ] ; xx [ 741 ] = - xx [ 719 ] ; xx [ 742 ] = xx [ 739 ]
; xx [ 743 ] = - xx [ 740 ] ; pm_math_cross3 ( xx + 734 , xx + 741 , xx + 748
) ; xx [ 741 ] = - ( xx [ 584 ] + xx [ 671 ] ) ; xx [ 742 ] = xx [ 609 ] ; xx
[ 743 ] = xx [ 637 ] ; xx [ 744 ] = xx [ 660 ] ; pm_math_quatCompose ( xx +
741 , xx + 725 , xx + 751 ) ; pm_math_quatXform ( xx + 751 , xx + 280 , xx +
734 ) ; pm_math_quatXform ( xx + 725 , xx + 167 , xx + 755 ) ;
pm_math_quatXform ( xx + 741 , xx + 755 , xx + 758 ) ; pm_math_quatXform ( xx
+ 751 , xx + 297 , xx + 755 ) ; pm_math_quatXform ( xx + 725 , xx + 176 , xx
+ 761 ) ; pm_math_quatXform ( xx + 741 , xx + 761 , xx + 764 ) ; xx [ 584 ] =
xx [ 102 ] * xx [ 754 ] ; xx [ 609 ] = xx [ 102 ] * xx [ 752 ] + xx [ 123 ] *
xx [ 753 ] ; xx [ 761 ] = - xx [ 584 ] ; xx [ 762 ] = - ( xx [ 123 ] * xx [
754 ] ) ; xx [ 763 ] = xx [ 609 ] ; pm_math_cross3 ( xx + 752 , xx + 761 , xx
+ 767 ) ; xx [ 761 ] = xx [ 687 ] ; xx [ 762 ] = xx [ 707 ] ; xx [ 763 ] = xx
[ 718 ] ; xx [ 637 ] = xx [ 117 ] * xx [ 708 ] ; xx [ 660 ] = xx [ 119 ] * xx
[ 708 ] ; xx [ 671 ] = xx [ 117 ] * xx [ 686 ] + xx [ 706 ] * xx [ 119 ] ; xx
[ 770 ] = xx [ 637 ] ; xx [ 771 ] = xx [ 660 ] ; xx [ 772 ] = - xx [ 671 ] ;
pm_math_cross3 ( xx + 761 , xx + 770 , xx + 773 ) ; xx [ 761 ] = xx [ 80 ] *
( xx [ 773 ] + xx [ 637 ] * xx [ 670 ] ) - xx [ 119 ] ; xx [ 762 ] = xx [ 117
] + ( xx [ 660 ] * xx [ 670 ] + xx [ 774 ] ) * xx [ 80 ] ; xx [ 763 ] = ( xx
[ 775 ] - xx [ 671 ] * xx [ 670 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
741 , xx + 761 , xx + 770 ) ; xx [ 637 ] = xx [ 2 ] * xx [ 806 ] ; xx [ 660 ]
= cos ( xx [ 637 ] ) ; xx [ 671 ] = xx [ 2 ] * xx [ 804 ] ; xx [ 687 ] = cos
( xx [ 671 ] ) ; xx [ 707 ] = sin ( xx [ 671 ] ) ; xx [ 671 ] = xx [ 643 ] *
xx [ 687 ] + xx [ 672 ] * xx [ 707 ] ; xx [ 718 ] = xx [ 660 ] * xx [ 671 ] ;
xx [ 741 ] = xx [ 672 ] * xx [ 687 ] - xx [ 643 ] * xx [ 707 ] ; xx [ 643 ] =
sin ( xx [ 637 ] ) ; xx [ 637 ] = xx [ 741 ] * xx [ 643 ] ; xx [ 672 ] = xx [
680 ] * xx [ 687 ] - xx [ 720 ] * xx [ 707 ] ; xx [ 742 ] = xx [ 720 ] * xx [
687 ] + xx [ 680 ] * xx [ 707 ] ; xx [ 680 ] = - ( xx [ 672 ] * xx [ 660 ] -
xx [ 643 ] * xx [ 742 ] ) ; xx [ 687 ] = xx [ 672 ] * xx [ 643 ] + xx [ 660 ]
* xx [ 742 ] ; xx [ 707 ] = xx [ 741 ] * xx [ 660 ] - xx [ 643 ] * xx [ 671 ]
; xx [ 773 ] = - ( xx [ 718 ] + xx [ 637 ] ) ; xx [ 774 ] = xx [ 680 ] ; xx [
775 ] = xx [ 687 ] ; xx [ 776 ] = xx [ 707 ] ; xx [ 720 ] = xx [ 21 ] * xx [
811 ] - xx [ 25 ] * xx [ 808 ] ; xx [ 743 ] = xx [ 21 ] * xx [ 810 ] + xx [
25 ] * xx [ 809 ] ; xx [ 744 ] = - xx [ 743 ] ; xx [ 745 ] = xx [ 25 ] * xx [
810 ] - xx [ 21 ] * xx [ 809 ] ; xx [ 752 ] = - xx [ 745 ] ; xx [ 753 ] = xx
[ 21 ] * xx [ 808 ] + xx [ 25 ] * xx [ 811 ] ; xx [ 761 ] = - xx [ 753 ] ; xx
[ 777 ] = xx [ 720 ] ; xx [ 778 ] = xx [ 744 ] ; xx [ 779 ] = xx [ 752 ] ; xx
[ 780 ] = xx [ 761 ] ; pm_math_quatCompose ( xx + 773 , xx + 777 , xx + 781 )
; xx [ 773 ] = ( xx [ 745 ] * xx [ 720 ] + xx [ 743 ] * xx [ 753 ] ) * xx [
80 ] ; xx [ 774 ] = xx [ 80 ] * ( xx [ 745 ] * xx [ 753 ] - xx [ 720 ] * xx [
743 ] ) ; xx [ 775 ] = xx [ 22 ] - ( xx [ 743 ] * xx [ 743 ] + xx [ 745 ] *
xx [ 745 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 773 , xx + 267 , xx + 785 )
; pm_math_quatXform ( xx + 781 , xx + 785 , xx + 773 ) ; pm_math_quatXform (
xx + 777 , xx + 126 , xx + 781 ) ; xx [ 762 ] = xx [ 782 ] * xx [ 643 ] - xx
[ 660 ] * xx [ 781 ] ; xx [ 763 ] = xx [ 746 ] * xx [ 660 ] - xx [ 747 ] * xx
[ 643 ] ; xx [ 776 ] = xx [ 80 ] * xx [ 763 ] * xx [ 643 ] ; xx [ 783 ] = xx
[ 80 ] * xx [ 643 ] * xx [ 762 ] - ( xx [ 782 ] + xx [ 776 ] ) - xx [ 747 ] ;
xx [ 784 ] = - xx [ 671 ] ; xx [ 785 ] = - xx [ 742 ] ; xx [ 786 ] = xx [ 784
] ; xx [ 787 ] = xx [ 741 ] ; xx [ 788 ] = xx [ 785 ] ; xx [ 789 ] = xx [ 80
] * xx [ 763 ] * xx [ 660 ] ; xx [ 763 ] = xx [ 781 ] + xx [ 80 ] * xx [ 660
] * xx [ 762 ] - xx [ 789 ] + xx [ 746 ] ; xx [ 762 ] = xx [ 763 ] * xx [ 742
] ; xx [ 889 ] = xx [ 783 ] * xx [ 742 ] ; xx [ 890 ] = xx [ 763 ] * xx [ 671
] + xx [ 741 ] * xx [ 783 ] ; xx [ 891 ] = xx [ 762 ] ; xx [ 892 ] = - xx [
889 ] ; xx [ 893 ] = - xx [ 890 ] ; pm_math_cross3 ( xx + 786 , xx + 891 , xx
+ 894 ) ; xx [ 897 ] = - ( xx [ 637 ] + xx [ 718 ] ) ; xx [ 898 ] = xx [ 680
] ; xx [ 899 ] = xx [ 687 ] ; xx [ 900 ] = xx [ 707 ] ; pm_math_quatCompose (
xx + 897 , xx + 777 , xx + 901 ) ; pm_math_quatXform ( xx + 901 , xx + 280 ,
xx + 786 ) ; pm_math_quatXform ( xx + 777 , xx + 167 , xx + 280 ) ;
pm_math_quatXform ( xx + 897 , xx + 280 , xx + 167 ) ; pm_math_quatXform ( xx
+ 901 , xx + 297 , xx + 280 ) ; pm_math_quatXform ( xx + 777 , xx + 176 , xx
+ 297 ) ; pm_math_quatXform ( xx + 897 , xx + 297 , xx + 176 ) ; xx [ 297 ] =
xx [ 102 ] * xx [ 904 ] ; xx [ 298 ] = xx [ 102 ] * xx [ 902 ] + xx [ 123 ] *
xx [ 903 ] ; xx [ 891 ] = - xx [ 297 ] ; xx [ 892 ] = - ( xx [ 123 ] * xx [
904 ] ) ; xx [ 893 ] = xx [ 298 ] ; pm_math_cross3 ( xx + 902 , xx + 891 , xx
+ 905 ) ; xx [ 891 ] = xx [ 744 ] ; xx [ 892 ] = xx [ 752 ] ; xx [ 893 ] = xx
[ 761 ] ; xx [ 299 ] = xx [ 117 ] * xx [ 753 ] ; xx [ 637 ] = xx [ 119 ] * xx
[ 753 ] ; xx [ 680 ] = xx [ 117 ] * xx [ 743 ] + xx [ 745 ] * xx [ 119 ] ; xx
[ 908 ] = xx [ 299 ] ; xx [ 909 ] = xx [ 637 ] ; xx [ 910 ] = - xx [ 680 ] ;
pm_math_cross3 ( xx + 891 , xx + 908 , xx + 911 ) ; xx [ 891 ] = xx [ 80 ] *
( xx [ 911 ] + xx [ 299 ] * xx [ 720 ] ) - xx [ 119 ] ; xx [ 892 ] = xx [ 117
] + ( xx [ 637 ] * xx [ 720 ] + xx [ 912 ] ) * xx [ 80 ] ; xx [ 893 ] = ( xx
[ 913 ] - xx [ 680 ] * xx [ 720 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
897 , xx + 891 , xx + 908 ) ; xx [ 299 ] = xx [ 2 ] * xx [ 843 ] ; xx [ 2 ] =
cos ( xx [ 299 ] ) ; xx [ 637 ] = sin ( xx [ 299 ] ) ; xx [ 299 ] = xx [ 2 ]
* xx [ 75 ] + xx [ 637 ] * xx [ 51 ] ; xx [ 680 ] = xx [ 65 ] * xx [ 2 ] - xx
[ 637 ] * xx [ 66 ] ; xx [ 687 ] = xx [ 2 ] * xx [ 66 ] + xx [ 65 ] * xx [
637 ] ; xx [ 65 ] = xx [ 2 ] * xx [ 51 ] - xx [ 637 ] * xx [ 75 ] ; xx [ 897
] = xx [ 299 ] ; xx [ 898 ] = xx [ 680 ] ; xx [ 899 ] = xx [ 687 ] ; xx [ 900
] = xx [ 65 ] ; pm_math_quatCompose ( xx + 68 , xx + 897 , xx + 911 ) ;
pm_math_quatCompose ( xx + 42 , xx + 911 , xx + 915 ) ; pm_math_quatCompose (
xx + 31 , xx + 915 , xx + 919 ) ; xx [ 31 ] = xx [ 80 ] * ( xx [ 916 ] * xx [
918 ] - xx [ 915 ] * xx [ 917 ] ) ; xx [ 32 ] = ( xx [ 915 ] * xx [ 916 ] +
xx [ 917 ] * xx [ 918 ] ) * xx [ 80 ] ; xx [ 33 ] = xx [ 22 ] - ( xx [ 916 ]
* xx [ 916 ] + xx [ 917 ] * xx [ 917 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx +
31 , xx + 84 , xx + 891 ) ; pm_math_quatXform ( xx + 919 , xx + 891 , xx + 31
) ; xx [ 34 ] = xx [ 54 ] * xx [ 637 ] ; xx [ 51 ] = xx [ 34 ] * xx [ 637 ] ;
xx [ 66 ] = xx [ 738 ] * xx [ 637 ] ; xx [ 75 ] = xx [ 2 ] * xx [ 66 ] ; xx [
707 ] = xx [ 20 ] - ( xx [ 80 ] * ( xx [ 51 ] - xx [ 75 ] ) - xx [ 54 ] ) ;
xx [ 20 ] = xx [ 2 ] * xx [ 34 ] ; xx [ 34 ] = xx [ 66 ] * xx [ 637 ] ; xx [
66 ] = ( xx [ 20 ] + xx [ 34 ] ) * xx [ 80 ] - xx [ 738 ] ; xx [ 891 ] = xx [
707 ] ; xx [ 892 ] = - xx [ 66 ] ; xx [ 893 ] = xx [ 791 ] ;
pm_math_quatXform ( xx + 140 , xx + 891 , xx + 919 ) ; xx [ 718 ] = xx [ 919
] - xx [ 104 ] ; xx [ 104 ] = xx [ 920 ] + xx [ 96 ] ; xx [ 96 ] = xx [ 921 ]
- xx [ 107 ] ; xx [ 891 ] = xx [ 718 ] ; xx [ 892 ] = xx [ 104 ] ; xx [ 893 ]
= xx [ 96 ] ; pm_math_quatXform ( xx + 68 , xx + 891 , xx + 919 ) ; xx [ 107
] = xx [ 919 ] + xx [ 105 ] ; xx [ 105 ] = xx [ 920 ] + xx [ 118 ] ; xx [ 118
] = xx [ 921 ] + xx [ 121 ] ; xx [ 919 ] = xx [ 107 ] ; xx [ 920 ] = xx [ 105
] ; xx [ 921 ] = xx [ 118 ] ; pm_math_quatXform ( xx + 42 , xx + 919 , xx +
922 ) ; xx [ 121 ] = xx [ 923 ] + xx [ 148 ] ; xx [ 148 ] = xx [ 922 ] + xx [
147 ] ; xx [ 147 ] = xx [ 121 ] * xx [ 19 ] - xx [ 148 ] * xx [ 15 ] ; xx [
744 ] = xx [ 80 ] * xx [ 19 ] * xx [ 147 ] - ( xx [ 121 ] - xx [ 145 ] ) - xx
[ 135 ] ; xx [ 752 ] = xx [ 148 ] + xx [ 80 ] * xx [ 15 ] * xx [ 147 ] + xx [
152 ] - xx [ 131 ] ; xx [ 147 ] = xx [ 752 ] * xx [ 26 ] ; xx [ 761 ] = xx [
744 ] * xx [ 26 ] ; xx [ 791 ] = xx [ 752 ] * xx [ 6 ] - xx [ 744 ] * xx [ 14
] ; xx [ 922 ] = - xx [ 147 ] ; xx [ 923 ] = xx [ 761 ] ; xx [ 924 ] = xx [
791 ] ; pm_math_cross3 ( xx + 149 , xx + 922 , xx + 925 ) ;
pm_math_quatCompose ( xx + 170 , xx + 911 , xx + 928 ) ; xx [ 149 ] = xx [ 4
] * xx [ 914 ] ; xx [ 150 ] = xx [ 4 ] * xx [ 912 ] + xx [ 913 ] ; xx [ 922 ]
= xx [ 149 ] ; xx [ 923 ] = xx [ 914 ] ; xx [ 924 ] = - xx [ 150 ] ;
pm_math_cross3 ( xx + 912 , xx + 922 , xx + 932 ) ; xx [ 151 ] = xx [ 911 ] *
xx [ 914 ] ; xx [ 922 ] = xx [ 22 ] + ( xx [ 932 ] - xx [ 911 ] * xx [ 149 ]
) * xx [ 80 ] ; xx [ 923 ] = xx [ 80 ] * ( xx [ 933 ] - xx [ 151 ] ) - xx [ 4
] ; xx [ 924 ] = xx [ 80 ] * ( xx [ 934 ] + xx [ 911 ] * xx [ 150 ] ) ;
pm_math_cross3 ( xx + 922 , xx + 84 , xx + 932 ) ; pm_math_quatXform ( xx +
928 , xx + 932 , xx + 922 ) ; xx [ 150 ] = - ( xx [ 118 ] * xx [ 4 ] ) ; xx [
932 ] = xx [ 150 ] ; xx [ 933 ] = - xx [ 118 ] ; xx [ 934 ] = xx [ 105 ] + xx
[ 107 ] * xx [ 4 ] ; pm_math_quatXform ( xx + 42 , xx + 932 , xx + 935 ) ; xx
[ 932 ] = xx [ 935 ] + xx [ 183 ] ; xx [ 933 ] = xx [ 936 ] + xx [ 184 ] ; xx
[ 934 ] = xx [ 937 ] + xx [ 185 ] ; pm_math_quatXform ( xx + 161 , xx + 932 ,
xx + 183 ) ; xx [ 902 ] = xx [ 912 ] - xx [ 4 ] * xx [ 913 ] ; xx [ 932 ] = -
xx [ 914 ] ; xx [ 933 ] = xx [ 149 ] ; xx [ 934 ] = xx [ 902 ] ;
pm_math_cross3 ( xx + 912 , xx + 932 , xx + 935 ) ; xx [ 932 ] = xx [ 4 ] + (
xx [ 151 ] + xx [ 935 ] ) * xx [ 80 ] ; xx [ 933 ] = xx [ 22 ] + xx [ 80 ] *
( xx [ 936 ] - xx [ 4 ] * xx [ 151 ] ) ; xx [ 934 ] = xx [ 80 ] * ( xx [ 937
] - xx [ 911 ] * xx [ 902 ] ) ; pm_math_cross3 ( xx + 932 , xx + 84 , xx +
935 ) ; pm_math_quatXform ( xx + 928 , xx + 935 , xx + 932 ) ; xx [ 935 ] =
xx [ 118 ] ; xx [ 936 ] = xx [ 150 ] ; xx [ 937 ] = xx [ 105 ] * xx [ 4 ] -
xx [ 107 ] ; pm_math_quatXform ( xx + 42 , xx + 935 , xx + 149 ) ; xx [ 935 ]
= xx [ 149 ] + xx [ 197 ] ; xx [ 936 ] = xx [ 150 ] + xx [ 198 ] ; xx [ 937 ]
= xx [ 151 ] + xx [ 199 ] ; pm_math_quatXform ( xx + 161 , xx + 935 , xx +
149 ) ; xx [ 197 ] = xx [ 80 ] * ( xx [ 912 ] * xx [ 914 ] - xx [ 911 ] * xx
[ 913 ] ) ; xx [ 198 ] = ( xx [ 911 ] * xx [ 912 ] + xx [ 913 ] * xx [ 914 ]
) * xx [ 80 ] ; xx [ 199 ] = xx [ 22 ] - ( xx [ 912 ] * xx [ 912 ] + xx [ 913
] * xx [ 913 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 197 , xx + 84 , xx + 935
) ; pm_math_quatXform ( xx + 928 , xx + 935 , xx + 197 ) ; xx [ 4 ] = xx [
107 ] * xx [ 38 ] ; xx [ 118 ] = xx [ 105 ] * xx [ 38 ] ; xx [ 38 ] = xx [
107 ] * xx [ 29 ] + xx [ 105 ] * xx [ 36 ] ; xx [ 928 ] = xx [ 4 ] ; xx [ 929
] = xx [ 118 ] ; xx [ 930 ] = - xx [ 38 ] ; pm_math_cross3 ( xx + 179 , xx +
928 , xx + 935 ) ; xx [ 179 ] = xx [ 80 ] * ( xx [ 935 ] + xx [ 4 ] * xx [ 28
] ) + xx [ 37 ] - xx [ 105 ] - xx [ 119 ] ; xx [ 180 ] = xx [ 107 ] + xx [ 80
] * ( xx [ 936 ] + xx [ 118 ] * xx [ 28 ] ) + xx [ 23 ] + xx [ 117 ] ; xx [
181 ] = ( xx [ 937 ] - xx [ 38 ] * xx [ 28 ] ) * xx [ 80 ] + xx [ 27 ] ;
pm_math_quatXform ( xx + 161 , xx + 179 , xx + 27 ) ; pm_math_quatCompose (
xx + 212 , xx + 897 , xx + 161 ) ; xx [ 4 ] = xx [ 687 ] * xx [ 687 ] ; xx [
23 ] = xx [ 65 ] * xx [ 65 ] ; xx [ 36 ] = xx [ 687 ] * xx [ 680 ] ; xx [ 37
] = xx [ 299 ] * xx [ 65 ] ; xx [ 38 ] = xx [ 687 ] * xx [ 299 ] ; xx [ 105 ]
= xx [ 680 ] * xx [ 65 ] ; xx [ 117 ] = xx [ 22 ] - ( xx [ 4 ] + xx [ 23 ] )
* xx [ 80 ] ; xx [ 118 ] = xx [ 80 ] * ( xx [ 36 ] - xx [ 37 ] ) ; xx [ 119 ]
= ( xx [ 38 ] + xx [ 105 ] ) * xx [ 80 ] ; pm_math_cross3 ( xx + 117 , xx +
84 , xx + 179 ) ; pm_math_quatXform ( xx + 161 , xx + 179 , xx + 117 ) ; xx [
107 ] = xx [ 104 ] * xx [ 48 ] ; xx [ 179 ] = xx [ 96 ] * xx [ 50 ] ; xx [
180 ] = xx [ 107 ] + xx [ 179 ] ; xx [ 181 ] = xx [ 104 ] * xx [ 47 ] ; xx [
902 ] = xx [ 96 ] * xx [ 47 ] ; xx [ 928 ] = - xx [ 180 ] ; xx [ 929 ] = - xx
[ 181 ] ; xx [ 930 ] = - xx [ 902 ] ; pm_math_cross3 ( xx + 220 , xx + 928 ,
xx + 935 ) ; xx [ 928 ] = xx [ 80 ] * ( xx [ 935 ] - xx [ 180 ] * xx [ 46 ] )
+ xx [ 195 ] ; xx [ 929 ] = xx [ 80 ] * ( xx [ 936 ] - xx [ 181 ] * xx [ 46 ]
) + xx [ 182 ] - xx [ 96 ] - xx [ 74 ] ; xx [ 930 ] = xx [ 104 ] + xx [ 80 ]
* ( xx [ 937 ] - xx [ 902 ] * xx [ 46 ] ) + xx [ 192 ] - xx [ 73 ] ;
pm_math_quatXform ( xx + 170 , xx + 928 , xx + 180 ) ; xx [ 192 ] = xx [ 680
] * xx [ 680 ] ; xx [ 195 ] = xx [ 687 ] * xx [ 65 ] ; xx [ 65 ] = xx [ 299 ]
* xx [ 680 ] ; xx [ 928 ] = ( xx [ 37 ] + xx [ 36 ] ) * xx [ 80 ] ; xx [ 929
] = xx [ 22 ] - ( xx [ 23 ] + xx [ 192 ] ) * xx [ 80 ] ; xx [ 930 ] = xx [ 80
] * ( xx [ 195 ] - xx [ 65 ] ) ; pm_math_cross3 ( xx + 928 , xx + 84 , xx +
935 ) ; pm_math_quatXform ( xx + 161 , xx + 935 , xx + 928 ) ; xx [ 23 ] = xx
[ 718 ] * xx [ 48 ] ; xx [ 36 ] = xx [ 718 ] * xx [ 47 ] ; xx [ 37 ] = xx [
36 ] - xx [ 179 ] ; xx [ 47 ] = xx [ 96 ] * xx [ 48 ] ; xx [ 935 ] = xx [ 23
] ; xx [ 936 ] = xx [ 37 ] ; xx [ 937 ] = xx [ 47 ] ; pm_math_cross3 ( xx +
220 , xx + 935 , xx + 938 ) ; xx [ 935 ] = xx [ 96 ] + ( xx [ 23 ] * xx [ 46
] + xx [ 938 ] ) * xx [ 80 ] + xx [ 175 ] + xx [ 74 ] ; xx [ 936 ] = ( xx [
37 ] * xx [ 46 ] + xx [ 939 ] ) * xx [ 80 ] + xx [ 53 ] ; xx [ 937 ] = ( xx [
47 ] * xx [ 46 ] + xx [ 940 ] ) * xx [ 80 ] + xx [ 64 ] - xx [ 718 ] - xx [
72 ] ; pm_math_quatXform ( xx + 170 , xx + 935 , xx + 938 ) ; xx [ 935 ] = xx
[ 80 ] * ( xx [ 105 ] - xx [ 38 ] ) ; xx [ 936 ] = ( xx [ 65 ] + xx [ 195 ] )
* xx [ 80 ] ; xx [ 937 ] = xx [ 22 ] - ( xx [ 192 ] + xx [ 4 ] ) * xx [ 80 ]
; pm_math_cross3 ( xx + 935 , xx + 84 , xx + 941 ) ; pm_math_quatXform ( xx +
161 , xx + 941 , xx + 935 ) ; xx [ 4 ] = xx [ 718 ] * xx [ 50 ] ; xx [ 22 ] =
xx [ 104 ] * xx [ 50 ] ; xx [ 23 ] = xx [ 36 ] - xx [ 107 ] ; xx [ 36 ] = xx
[ 4 ] ; xx [ 37 ] = xx [ 22 ] ; xx [ 38 ] = xx [ 23 ] ; pm_math_cross3 ( xx +
220 , xx + 36 , xx + 161 ) ; xx [ 36 ] = ( xx [ 4 ] * xx [ 46 ] + xx [ 161 ]
) * xx [ 80 ] + xx [ 41 ] - xx [ 104 ] + xx [ 73 ] ; xx [ 37 ] = xx [ 718 ] +
( xx [ 22 ] * xx [ 46 ] + xx [ 162 ] ) * xx [ 80 ] + xx [ 17 ] + xx [ 72 ] ;
xx [ 38 ] = ( xx [ 23 ] * xx [ 46 ] + xx [ 163 ] ) * xx [ 80 ] + xx [ 35 ] ;
pm_math_quatXform ( xx + 170 , xx + 36 , xx + 46 ) ; xx [ 4 ] = xx [ 2 ] * xx
[ 216 ] + xx [ 219 ] * xx [ 637 ] ; xx [ 17 ] = xx [ 2 ] * xx [ 217 ] - xx [
218 ] * xx [ 637 ] ; xx [ 22 ] = xx [ 2 ] * xx [ 218 ] + xx [ 217 ] * xx [
637 ] ; xx [ 23 ] = xx [ 2 ] * xx [ 219 ] - xx [ 216 ] * xx [ 637 ] ; xx [ 35
] = xx [ 4 ] ; xx [ 36 ] = xx [ 17 ] ; xx [ 37 ] = xx [ 22 ] ; xx [ 38 ] = xx
[ 23 ] ; xx [ 41 ] = xx [ 57 ] * xx [ 637 ] ; xx [ 50 ] = xx [ 80 ] * xx [ 2
] * xx [ 41 ] ; xx [ 53 ] = xx [ 80 ] * xx [ 41 ] * xx [ 637 ] - xx [ 57 ] ;
xx [ 161 ] = xx [ 74 ] * xx [ 50 ] + xx [ 55 ] ; xx [ 162 ] = xx [ 106 ] + xx
[ 74 ] * xx [ 53 ] ; xx [ 163 ] = xx [ 73 ] * xx [ 53 ] - xx [ 72 ] * xx [ 50
] ; pm_math_quatXform ( xx + 35 , xx + 161 , xx + 104 ) ; xx [ 35 ] = - ( xx
[ 63 ] * xx [ 66 ] ) ; xx [ 36 ] = - ( xx [ 63 ] * xx [ 707 ] + xx [ 30 ] ) ;
xx [ 37 ] = xx [ 57 ] * xx [ 66 ] ; pm_math_quatXform ( xx + 140 , xx + 35 ,
xx + 161 ) ; xx [ 35 ] = xx [ 161 ] + xx [ 60 ] ; xx [ 36 ] = xx [ 162 ] + xx
[ 61 ] - xx [ 67 ] ; xx [ 37 ] = xx [ 163 ] - xx [ 40 ] ; pm_math_quatXform (
xx + 212 , xx + 35 , xx + 161 ) ; xx [ 35 ] = xx [ 17 ] ; xx [ 36 ] = xx [ 22
] ; xx [ 37 ] = xx [ 23 ] ; xx [ 30 ] = xx [ 72 ] * xx [ 23 ] ; xx [ 38 ] =
xx [ 73 ] * xx [ 23 ] ; xx [ 23 ] = xx [ 72 ] * xx [ 17 ] - xx [ 22 ] * xx [
73 ] ; xx [ 170 ] = - xx [ 30 ] ; xx [ 171 ] = xx [ 38 ] ; xx [ 172 ] = xx [
23 ] ; pm_math_cross3 ( xx + 35 , xx + 170 , xx + 212 ) ; xx [ 17 ] = xx [
738 ] - xx [ 80 ] * ( xx [ 20 ] + xx [ 34 ] ) ; xx [ 20 ] = xx [ 54 ] + ( xx
[ 75 ] - xx [ 51 ] ) * xx [ 80 ] ; xx [ 22 ] = xx [ 219 ] * xx [ 20 ] ; xx [
34 ] = xx [ 17 ] * xx [ 219 ] ; xx [ 35 ] = xx [ 217 ] * xx [ 20 ] + xx [ 17
] * xx [ 218 ] ; xx [ 53 ] = xx [ 22 ] ; xx [ 54 ] = xx [ 34 ] ; xx [ 55 ] =
- xx [ 35 ] ; pm_math_cross3 ( xx + 217 , xx + 53 , xx + 170 ) ; xx [ 941 ] =
xx [ 0 ] ; xx [ 942 ] = xx [ 0 ] ; xx [ 943 ] = xx [ 0 ] ; xx [ 944 ] = xx [
0 ] ; xx [ 945 ] = xx [ 81 ] + xx [ 146 ] + xx [ 80 ] * ( xx [ 158 ] - xx [
129 ] * xx [ 24 ] ) ; xx [ 946 ] = xx [ 155 ] + xx [ 186 ] ; xx [ 947 ] = xx
[ 189 ] + xx [ 200 ] ; xx [ 948 ] = xx [ 203 ] + xx [ 209 ] ; xx [ 949 ] = xx
[ 206 ] + xx [ 226 ] ; xx [ 950 ] = xx [ 223 ] + xx [ 232 ] ; xx [ 951 ] = xx
[ 229 ] + xx [ 235 ] ; xx [ 952 ] = xx [ 251 ] + xx [ 247 ] ; xx [ 953 ] = xx
[ 80 ] * ( xx [ 263 ] - xx [ 3 ] * xx [ 49 ] ) + xx [ 8 ] + xx [ 80 ] * ( xx
[ 258 ] - xx [ 216 ] * xx [ 77 ] ) + xx [ 73 ] ; xx [ 954 ] = xx [ 0 ] ; xx [
955 ] = xx [ 0 ] ; xx [ 956 ] = xx [ 0 ] ; xx [ 957 ] = xx [ 0 ] ; xx [ 958 ]
= xx [ 0 ] ; xx [ 959 ] = xx [ 0 ] ; xx [ 960 ] = xx [ 0 ] ; xx [ 961 ] = xx
[ 0 ] ; xx [ 962 ] = - ( xx [ 239 ] + xx [ 279 ] + xx [ 80 ] * ( xx [ 294 ] +
xx [ 165 ] * xx [ 242 ] ) ) ; xx [ 963 ] = - ( xx [ 285 ] + xx [ 308 ] ) ; xx
[ 964 ] = - ( xx [ 291 ] + xx [ 318 ] ) ; xx [ 965 ] = - ( xx [ 80 ] * ( xx [
321 ] - xx [ 304 ] * xx [ 87 ] ) + xx [ 328 ] - xx [ 123 ] ) ; xx [ 966 ] =
xx [ 0 ] ; xx [ 967 ] = xx [ 0 ] ; xx [ 968 ] = xx [ 0 ] ; xx [ 969 ] = xx [
0 ] ; xx [ 970 ] = xx [ 0 ] ; xx [ 971 ] = xx [ 0 ] ; xx [ 972 ] = xx [ 0 ] ;
xx [ 973 ] = xx [ 0 ] ; xx [ 974 ] = xx [ 0 ] ; xx [ 975 ] = xx [ 0 ] ; xx [
976 ] = xx [ 0 ] ; xx [ 977 ] = xx [ 0 ] ; xx [ 978 ] = xx [ 82 ] + xx [ 144
] + ( xx [ 153 ] * xx [ 24 ] + xx [ 159 ] ) * xx [ 80 ] ; xx [ 979 ] = xx [
156 ] + xx [ 187 ] ; xx [ 980 ] = xx [ 190 ] + xx [ 201 ] ; xx [ 981 ] = xx [
204 ] + xx [ 210 ] ; xx [ 982 ] = xx [ 207 ] + xx [ 227 ] ; xx [ 983 ] = xx [
224 ] + xx [ 233 ] ; xx [ 984 ] = xx [ 230 ] + xx [ 236 ] ; xx [ 985 ] = xx [
252 ] + xx [ 248 ] ; xx [ 986 ] = ( xx [ 3 ] * xx [ 111 ] + xx [ 264 ] ) * xx
[ 80 ] + xx [ 11 ] + ( xx [ 216 ] * xx [ 78 ] + xx [ 259 ] ) * xx [ 80 ] + xx
[ 72 ] ; xx [ 987 ] = xx [ 0 ] ; xx [ 988 ] = xx [ 0 ] ; xx [ 989 ] = xx [ 0
] ; xx [ 990 ] = xx [ 0 ] ; xx [ 991 ] = xx [ 0 ] ; xx [ 992 ] = xx [ 0 ] ;
xx [ 993 ] = xx [ 0 ] ; xx [ 994 ] = xx [ 0 ] ; xx [ 995 ] = - ( xx [ 240 ] +
xx [ 277 ] + ( xx [ 295 ] - xx [ 165 ] * xx [ 289 ] ) * xx [ 80 ] ) ; xx [
996 ] = - ( xx [ 286 ] + xx [ 309 ] ) ; xx [ 997 ] = - ( xx [ 292 ] + xx [
319 ] ) ; xx [ 998 ] = - ( ( xx [ 322 ] - xx [ 123 ] * xx [ 304 ] * xx [ 307
] ) * xx [ 80 ] + xx [ 329 ] + xx [ 102 ] ) ; xx [ 999 ] = xx [ 0 ] ; xx [
1000 ] = xx [ 0 ] ; xx [ 1001 ] = xx [ 0 ] ; xx [ 1002 ] = xx [ 0 ] ; xx [
1003 ] = xx [ 0 ] ; xx [ 1004 ] = xx [ 0 ] ; xx [ 1005 ] = xx [ 0 ] ; xx [
1006 ] = xx [ 0 ] ; xx [ 1007 ] = xx [ 0 ] ; xx [ 1008 ] = xx [ 0 ] ; xx [
1009 ] = xx [ 0 ] ; xx [ 1010 ] = xx [ 0 ] ; xx [ 1011 ] = xx [ 83 ] + ( xx [
154 ] * xx [ 24 ] + xx [ 160 ] ) * xx [ 80 ] ; xx [ 1012 ] = xx [ 157 ] + xx
[ 188 ] ; xx [ 1013 ] = xx [ 191 ] + xx [ 202 ] ; xx [ 1014 ] = xx [ 205 ] +
xx [ 211 ] ; xx [ 1015 ] = xx [ 208 ] + xx [ 228 ] ; xx [ 1016 ] = xx [ 225 ]
+ xx [ 234 ] ; xx [ 1017 ] = xx [ 231 ] + xx [ 237 ] ; xx [ 1018 ] = xx [ 253
] + xx [ 249 ] ; xx [ 1019 ] = ( xx [ 3 ] * xx [ 18 ] + xx [ 265 ] ) * xx [
80 ] + ( xx [ 216 ] * xx [ 79 ] + xx [ 260 ] ) * xx [ 80 ] ; xx [ 1020 ] = xx
[ 0 ] ; xx [ 1021 ] = xx [ 0 ] ; xx [ 1022 ] = xx [ 0 ] ; xx [ 1023 ] = xx [
0 ] ; xx [ 1024 ] = xx [ 0 ] ; xx [ 1025 ] = xx [ 0 ] ; xx [ 1026 ] = xx [ 0
] ; xx [ 1027 ] = xx [ 0 ] ; xx [ 1028 ] = - ( xx [ 241 ] + ( xx [ 296 ] - xx
[ 165 ] * xx [ 290 ] ) * xx [ 80 ] ) ; xx [ 1029 ] = - ( xx [ 287 ] + xx [
310 ] ) ; xx [ 1030 ] = - ( xx [ 293 ] + xx [ 320 ] ) ; xx [ 1031 ] = - ( (
xx [ 304 ] * xx [ 115 ] + xx [ 323 ] ) * xx [ 80 ] + xx [ 330 ] ) ; xx [ 1032
] = xx [ 0 ] ; xx [ 1033 ] = xx [ 0 ] ; xx [ 1034 ] = xx [ 0 ] ; xx [ 1035 ]
= xx [ 0 ] ; xx [ 1036 ] = xx [ 0 ] ; xx [ 1037 ] = xx [ 0 ] ; xx [ 1038 ] =
xx [ 0 ] ; xx [ 1039 ] = xx [ 0 ] ; xx [ 1040 ] = xx [ 0 ] ; xx [ 1041 ] = xx
[ 0 ] ; xx [ 1042 ] = xx [ 0 ] ; xx [ 1043 ] = xx [ 0 ] ; xx [ 1044 ] = xx [
315 ] + xx [ 350 ] + xx [ 80 ] * ( xx [ 357 ] - xx [ 348 ] * xx [ 24 ] ) ; xx
[ 1045 ] = xx [ 364 ] + xx [ 370 ] ; xx [ 1046 ] = xx [ 373 ] + xx [ 354 ] ;
xx [ 1047 ] = xx [ 367 ] + xx [ 360 ] ; xx [ 1048 ] = xx [ 384 ] + xx [ 388 ]
; xx [ 1049 ] = xx [ 394 ] + xx [ 405 ] ; xx [ 1050 ] = xx [ 402 ] + xx [ 380
] ; xx [ 1051 ] = xx [ 376 ] + xx [ 415 ] ; xx [ 1052 ] = xx [ 0 ] ; xx [
1053 ] = xx [ 80 ] * ( xx [ 418 ] + xx [ 411 ] * xx [ 120 ] ) + xx [ 421 ] -
xx [ 73 ] ; xx [ 1054 ] = xx [ 0 ] ; xx [ 1055 ] = xx [ 0 ] ; xx [ 1056 ] =
xx [ 0 ] ; xx [ 1057 ] = - ( xx [ 424 ] + xx [ 427 ] + xx [ 80 ] * ( xx [ 447
] - xx [ 408 ] * xx [ 5 ] ) ) ; xx [ 1058 ] = - ( xx [ 434 ] + xx [ 464 ] ) ;
xx [ 1059 ] = - ( xx [ 459 ] + xx [ 470 ] ) ; xx [ 1060 ] = - ( xx [ 80 ] * (
xx [ 474 ] - xx [ 450 ] * xx [ 1 ] ) + xx [ 477 ] - xx [ 123 ] ) ; xx [ 1061
] = xx [ 0 ] ; xx [ 1062 ] = xx [ 0 ] ; xx [ 1063 ] = xx [ 0 ] ; xx [ 1064 ]
= xx [ 0 ] ; xx [ 1065 ] = xx [ 0 ] ; xx [ 1066 ] = xx [ 0 ] ; xx [ 1067 ] =
xx [ 0 ] ; xx [ 1068 ] = xx [ 0 ] ; xx [ 1069 ] = xx [ 0 ] ; xx [ 1070 ] = xx
[ 0 ] ; xx [ 1071 ] = xx [ 0 ] ; xx [ 1072 ] = xx [ 0 ] ; xx [ 1073 ] = xx [
0 ] ; xx [ 1074 ] = xx [ 0 ] ; xx [ 1075 ] = xx [ 0 ] ; xx [ 1076 ] = xx [ 0
] ; xx [ 1077 ] = xx [ 316 ] + xx [ 351 ] + ( xx [ 352 ] * xx [ 24 ] + xx [
358 ] ) * xx [ 80 ] ; xx [ 1078 ] = xx [ 365 ] + xx [ 371 ] ; xx [ 1079 ] =
xx [ 374 ] + xx [ 355 ] ; xx [ 1080 ] = xx [ 368 ] + xx [ 361 ] ; xx [ 1081 ]
= xx [ 385 ] + xx [ 389 ] ; xx [ 1082 ] = xx [ 395 ] + xx [ 406 ] ; xx [ 1083
] = xx [ 403 ] + xx [ 381 ] ; xx [ 1084 ] = xx [ 377 ] + xx [ 416 ] ; xx [
1085 ] = xx [ 0 ] ; xx [ 1086 ] = ( xx [ 419 ] - xx [ 73 ] * xx [ 411 ] * xx
[ 414 ] ) * xx [ 80 ] + xx [ 422 ] - xx [ 72 ] ; xx [ 1087 ] = xx [ 0 ] ; xx
[ 1088 ] = xx [ 0 ] ; xx [ 1089 ] = xx [ 0 ] ; xx [ 1090 ] = - ( xx [ 425 ] +
xx [ 412 ] + ( xx [ 438 ] * xx [ 5 ] + xx [ 448 ] ) * xx [ 80 ] ) ; xx [ 1091
] = - ( xx [ 435 ] + xx [ 465 ] ) ; xx [ 1092 ] = - ( xx [ 460 ] + xx [ 471 ]
) ; xx [ 1093 ] = - ( ( xx [ 475 ] - xx [ 123 ] * xx [ 450 ] * xx [ 453 ] ) *
xx [ 80 ] + xx [ 478 ] + xx [ 102 ] ) ; xx [ 1094 ] = xx [ 0 ] ; xx [ 1095 ]
= xx [ 0 ] ; xx [ 1096 ] = xx [ 0 ] ; xx [ 1097 ] = xx [ 0 ] ; xx [ 1098 ] =
xx [ 0 ] ; xx [ 1099 ] = xx [ 0 ] ; xx [ 1100 ] = xx [ 0 ] ; xx [ 1101 ] = xx
[ 0 ] ; xx [ 1102 ] = xx [ 0 ] ; xx [ 1103 ] = xx [ 0 ] ; xx [ 1104 ] = xx [
0 ] ; xx [ 1105 ] = xx [ 0 ] ; xx [ 1106 ] = xx [ 0 ] ; xx [ 1107 ] = xx [ 0
] ; xx [ 1108 ] = xx [ 0 ] ; xx [ 1109 ] = xx [ 0 ] ; xx [ 1110 ] = xx [ 317
] + ( xx [ 353 ] * xx [ 24 ] + xx [ 359 ] ) * xx [ 80 ] ; xx [ 1111 ] = xx [
366 ] + xx [ 372 ] ; xx [ 1112 ] = xx [ 375 ] + xx [ 356 ] ; xx [ 1113 ] = xx
[ 369 ] + xx [ 362 ] ; xx [ 1114 ] = xx [ 386 ] + xx [ 390 ] ; xx [ 1115 ] =
xx [ 396 ] + xx [ 407 ] ; xx [ 1116 ] = xx [ 404 ] + xx [ 382 ] ; xx [ 1117 ]
= xx [ 378 ] + xx [ 417 ] ; xx [ 1118 ] = xx [ 0 ] ; xx [ 1119 ] = ( xx [ 411
] * xx [ 166 ] + xx [ 420 ] ) * xx [ 80 ] + xx [ 423 ] ; xx [ 1120 ] = xx [ 0
] ; xx [ 1121 ] = xx [ 0 ] ; xx [ 1122 ] = xx [ 0 ] ; xx [ 1123 ] = - ( xx [
426 ] + ( xx [ 5 ] * xx [ 439 ] + xx [ 449 ] ) * xx [ 80 ] ) ; xx [ 1124 ] =
- ( xx [ 436 ] + xx [ 466 ] ) ; xx [ 1125 ] = - ( xx [ 461 ] + xx [ 472 ] ) ;
xx [ 1126 ] = - ( ( xx [ 450 ] * xx [ 12 ] + xx [ 476 ] ) * xx [ 80 ] + xx [
479 ] ) ; xx [ 1127 ] = xx [ 0 ] ; xx [ 1128 ] = xx [ 0 ] ; xx [ 1129 ] = xx
[ 0 ] ; xx [ 1130 ] = xx [ 0 ] ; xx [ 1131 ] = xx [ 0 ] ; xx [ 1132 ] = xx [
0 ] ; xx [ 1133 ] = xx [ 0 ] ; xx [ 1134 ] = xx [ 0 ] ; xx [ 1135 ] = xx [ 0
] ; xx [ 1136 ] = xx [ 0 ] ; xx [ 1137 ] = xx [ 0 ] ; xx [ 1138 ] = xx [ 0 ]
; xx [ 1139 ] = xx [ 0 ] ; xx [ 1140 ] = xx [ 0 ] ; xx [ 1141 ] = xx [ 0 ] ;
xx [ 1142 ] = xx [ 0 ] ; xx [ 1143 ] = xx [ 467 ] + xx [ 499 ] + xx [ 80 ] *
( xx [ 507 ] - xx [ 497 ] * xx [ 24 ] ) ; xx [ 1144 ] = xx [ 514 ] + xx [ 520
] ; xx [ 1145 ] = xx [ 523 ] + xx [ 503 ] ; xx [ 1146 ] = xx [ 517 ] + xx [
510 ] ; xx [ 1147 ] = xx [ 536 ] + xx [ 539 ] ; xx [ 1148 ] = xx [ 549 ] + xx
[ 555 ] ; xx [ 1149 ] = xx [ 552 ] + xx [ 529 ] ; xx [ 1150 ] = xx [ 526 ] +
xx [ 561 ] ; xx [ 1151 ] = xx [ 0 ] ; xx [ 1152 ] = xx [ 0 ] ; xx [ 1153 ] =
xx [ 80 ] * ( xx [ 564 ] - xx [ 542 ] * xx [ 363 ] ) + xx [ 567 ] + xx [ 73 ]
; xx [ 1154 ] = xx [ 0 ] ; xx [ 1155 ] = xx [ 0 ] ; xx [ 1156 ] = xx [ 0 ] ;
xx [ 1157 ] = xx [ 0 ] ; xx [ 1158 ] = xx [ 0 ] ; xx [ 1159 ] = xx [ 0 ] ; xx
[ 1160 ] = xx [ 0 ] ; xx [ 1161 ] = xx [ 0 ] ; xx [ 1162 ] = xx [ 0 ] ; xx [
1163 ] = xx [ 0 ] ; xx [ 1164 ] = - ( xx [ 570 ] + xx [ 583 ] + xx [ 80 ] * (
xx [ 598 ] + xx [ 451 ] * xx [ 573 ] ) ) ; xx [ 1165 ] = - ( xx [ 586 ] + xx
[ 606 ] ) ; xx [ 1166 ] = - ( xx [ 592 ] + xx [ 617 ] ) ; xx [ 1167 ] = - (
xx [ 80 ] * ( xx [ 620 ] - xx [ 610 ] * xx [ 445 ] ) + xx [ 623 ] - xx [ 123
] ) ; xx [ 1168 ] = xx [ 0 ] ; xx [ 1169 ] = xx [ 0 ] ; xx [ 1170 ] = xx [ 0
] ; xx [ 1171 ] = xx [ 0 ] ; xx [ 1172 ] = xx [ 0 ] ; xx [ 1173 ] = xx [ 0 ]
; xx [ 1174 ] = xx [ 0 ] ; xx [ 1175 ] = xx [ 0 ] ; xx [ 1176 ] = xx [ 468 ]
+ xx [ 500 ] + ( xx [ 501 ] * xx [ 24 ] + xx [ 508 ] ) * xx [ 80 ] ; xx [
1177 ] = xx [ 515 ] + xx [ 521 ] ; xx [ 1178 ] = xx [ 524 ] + xx [ 504 ] ; xx
[ 1179 ] = xx [ 518 ] + xx [ 511 ] ; xx [ 1180 ] = xx [ 537 ] + xx [ 540 ] ;
xx [ 1181 ] = xx [ 550 ] + xx [ 556 ] ; xx [ 1182 ] = xx [ 553 ] + xx [ 530 ]
; xx [ 1183 ] = xx [ 527 ] + xx [ 562 ] ; xx [ 1184 ] = xx [ 0 ] ; xx [ 1185
] = xx [ 0 ] ; xx [ 1186 ] = ( xx [ 73 ] * xx [ 542 ] * xx [ 545 ] + xx [ 565
] ) * xx [ 80 ] + xx [ 568 ] + xx [ 72 ] ; xx [ 1187 ] = xx [ 0 ] ; xx [ 1188
] = xx [ 0 ] ; xx [ 1189 ] = xx [ 0 ] ; xx [ 1190 ] = xx [ 0 ] ; xx [ 1191 ]
= xx [ 0 ] ; xx [ 1192 ] = xx [ 0 ] ; xx [ 1193 ] = xx [ 0 ] ; xx [ 1194 ] =
xx [ 0 ] ; xx [ 1195 ] = xx [ 0 ] ; xx [ 1196 ] = xx [ 0 ] ; xx [ 1197 ] = -
( xx [ 571 ] + xx [ 581 ] + ( xx [ 599 ] - xx [ 451 ] * xx [ 590 ] ) * xx [
80 ] ) ; xx [ 1198 ] = - ( xx [ 587 ] + xx [ 607 ] ) ; xx [ 1199 ] = - ( xx [
593 ] + xx [ 618 ] ) ; xx [ 1200 ] = - ( ( xx [ 621 ] - xx [ 123 ] * xx [ 610
] * xx [ 613 ] ) * xx [ 80 ] + xx [ 624 ] + xx [ 102 ] ) ; xx [ 1201 ] = xx [
0 ] ; xx [ 1202 ] = xx [ 0 ] ; xx [ 1203 ] = xx [ 0 ] ; xx [ 1204 ] = xx [ 0
] ; xx [ 1205 ] = xx [ 0 ] ; xx [ 1206 ] = xx [ 0 ] ; xx [ 1207 ] = xx [ 0 ]
; xx [ 1208 ] = xx [ 0 ] ; xx [ 1209 ] = xx [ 469 ] + ( xx [ 502 ] * xx [ 24
] + xx [ 509 ] ) * xx [ 80 ] ; xx [ 1210 ] = xx [ 516 ] + xx [ 522 ] ; xx [
1211 ] = xx [ 525 ] + xx [ 505 ] ; xx [ 1212 ] = xx [ 519 ] + xx [ 512 ] ; xx
[ 1213 ] = xx [ 538 ] + xx [ 541 ] ; xx [ 1214 ] = xx [ 551 ] + xx [ 557 ] ;
xx [ 1215 ] = xx [ 554 ] + xx [ 531 ] ; xx [ 1216 ] = xx [ 528 ] + xx [ 563 ]
; xx [ 1217 ] = xx [ 0 ] ; xx [ 1218 ] = xx [ 0 ] ; xx [ 1219 ] = ( xx [ 542
] * xx [ 392 ] + xx [ 566 ] ) * xx [ 80 ] + xx [ 569 ] ; xx [ 1220 ] = xx [ 0
] ; xx [ 1221 ] = xx [ 0 ] ; xx [ 1222 ] = xx [ 0 ] ; xx [ 1223 ] = xx [ 0 ]
; xx [ 1224 ] = xx [ 0 ] ; xx [ 1225 ] = xx [ 0 ] ; xx [ 1226 ] = xx [ 0 ] ;
xx [ 1227 ] = xx [ 0 ] ; xx [ 1228 ] = xx [ 0 ] ; xx [ 1229 ] = xx [ 0 ] ; xx
[ 1230 ] = - ( xx [ 572 ] + ( xx [ 451 ] * xx [ 591 ] + xx [ 600 ] ) * xx [
80 ] ) ; xx [ 1231 ] = - ( xx [ 588 ] + xx [ 608 ] ) ; xx [ 1232 ] = - ( xx [
594 ] + xx [ 619 ] ) ; xx [ 1233 ] = - ( ( xx [ 610 ] * xx [ 462 ] + xx [ 622
] ) * xx [ 80 ] + xx [ 625 ] ) ; xx [ 1234 ] = xx [ 0 ] ; xx [ 1235 ] = xx [
0 ] ; xx [ 1236 ] = xx [ 0 ] ; xx [ 1237 ] = xx [ 0 ] ; xx [ 1238 ] = xx [ 0
] ; xx [ 1239 ] = xx [ 0 ] ; xx [ 1240 ] = xx [ 0 ] ; xx [ 1241 ] = xx [ 0 ]
; xx [ 1242 ] = xx [ 614 ] + xx [ 647 ] + xx [ 80 ] * ( xx [ 654 ] - xx [ 642
] * xx [ 24 ] ) ; xx [ 1243 ] = xx [ 661 ] + xx [ 667 ] ; xx [ 1244 ] = xx [
673 ] + xx [ 651 ] ; xx [ 1245 ] = xx [ 664 ] + xx [ 657 ] ; xx [ 1246 ] = xx
[ 681 ] + xx [ 688 ] ; xx [ 1247 ] = xx [ 694 ] + xx [ 700 ] ; xx [ 1248 ] =
xx [ 697 ] + xx [ 691 ] ; xx [ 1249 ] = xx [ 703 ] + xx [ 709 ] ; xx [ 1250 ]
= xx [ 0 ] ; xx [ 1251 ] = xx [ 0 ] ; xx [ 1252 ] = xx [ 0 ] ; xx [ 1253 ] =
xx [ 80 ] * ( xx [ 712 ] - xx [ 676 ] * xx [ 533 ] ) + xx [ 715 ] + xx [ 73 ]
; xx [ 1254 ] = xx [ 0 ] ; xx [ 1255 ] = xx [ 0 ] ; xx [ 1256 ] = xx [ 0 ] ;
xx [ 1257 ] = xx [ 0 ] ; xx [ 1258 ] = xx [ 0 ] ; xx [ 1259 ] = xx [ 0 ] ; xx
[ 1260 ] = xx [ 0 ] ; xx [ 1261 ] = xx [ 0 ] ; xx [ 1262 ] = xx [ 0 ] ; xx [
1263 ] = xx [ 0 ] ; xx [ 1264 ] = xx [ 0 ] ; xx [ 1265 ] = xx [ 0 ] ; xx [
1266 ] = xx [ 0 ] ; xx [ 1267 ] = - ( xx [ 721 ] + xx [ 732 ] + xx [ 80 ] * (
xx [ 748 ] - xx [ 604 ] * xx [ 719 ] ) ) ; xx [ 1268 ] = - ( xx [ 734 ] + xx
[ 758 ] ) ; xx [ 1269 ] = - ( xx [ 755 ] + xx [ 764 ] ) ; xx [ 1270 ] = - (
xx [ 80 ] * ( xx [ 767 ] - xx [ 751 ] * xx [ 584 ] ) + xx [ 770 ] - xx [ 123
] ) ; xx [ 1271 ] = xx [ 0 ] ; xx [ 1272 ] = xx [ 0 ] ; xx [ 1273 ] = xx [ 0
] ; xx [ 1274 ] = xx [ 0 ] ; xx [ 1275 ] = xx [ 615 ] + xx [ 648 ] + ( xx [
649 ] * xx [ 24 ] + xx [ 655 ] ) * xx [ 80 ] ; xx [ 1276 ] = xx [ 662 ] + xx
[ 668 ] ; xx [ 1277 ] = xx [ 674 ] + xx [ 652 ] ; xx [ 1278 ] = xx [ 665 ] +
xx [ 658 ] ; xx [ 1279 ] = xx [ 682 ] + xx [ 689 ] ; xx [ 1280 ] = xx [ 695 ]
+ xx [ 701 ] ; xx [ 1281 ] = xx [ 698 ] + xx [ 692 ] ; xx [ 1282 ] = xx [ 704
] + xx [ 710 ] ; xx [ 1283 ] = xx [ 0 ] ; xx [ 1284 ] = xx [ 0 ] ; xx [ 1285
] = xx [ 0 ] ; xx [ 1286 ] = ( xx [ 73 ] * xx [ 676 ] * xx [ 679 ] + xx [ 713
] ) * xx [ 80 ] + xx [ 716 ] + xx [ 72 ] ; xx [ 1287 ] = xx [ 0 ] ; xx [ 1288
] = xx [ 0 ] ; xx [ 1289 ] = xx [ 0 ] ; xx [ 1290 ] = xx [ 0 ] ; xx [ 1291 ]
= xx [ 0 ] ; xx [ 1292 ] = xx [ 0 ] ; xx [ 1293 ] = xx [ 0 ] ; xx [ 1294 ] =
xx [ 0 ] ; xx [ 1295 ] = xx [ 0 ] ; xx [ 1296 ] = xx [ 0 ] ; xx [ 1297 ] = xx
[ 0 ] ; xx [ 1298 ] = xx [ 0 ] ; xx [ 1299 ] = xx [ 0 ] ; xx [ 1300 ] = - (
xx [ 722 ] + xx [ 724 ] + ( xx [ 604 ] * xx [ 739 ] + xx [ 749 ] ) * xx [ 80
] ) ; xx [ 1301 ] = - ( xx [ 735 ] + xx [ 759 ] ) ; xx [ 1302 ] = - ( xx [
756 ] + xx [ 765 ] ) ; xx [ 1303 ] = - ( ( xx [ 768 ] - xx [ 123 ] * xx [ 751
] * xx [ 754 ] ) * xx [ 80 ] + xx [ 771 ] + xx [ 102 ] ) ; xx [ 1304 ] = xx [
0 ] ; xx [ 1305 ] = xx [ 0 ] ; xx [ 1306 ] = xx [ 0 ] ; xx [ 1307 ] = xx [ 0
] ; xx [ 1308 ] = xx [ 616 ] + ( xx [ 650 ] * xx [ 24 ] + xx [ 656 ] ) * xx [
80 ] ; xx [ 1309 ] = xx [ 663 ] + xx [ 669 ] ; xx [ 1310 ] = xx [ 675 ] + xx
[ 653 ] ; xx [ 1311 ] = xx [ 666 ] + xx [ 659 ] ; xx [ 1312 ] = xx [ 683 ] +
xx [ 690 ] ; xx [ 1313 ] = xx [ 696 ] + xx [ 702 ] ; xx [ 1314 ] = xx [ 699 ]
+ xx [ 693 ] ; xx [ 1315 ] = xx [ 705 ] + xx [ 711 ] ; xx [ 1316 ] = xx [ 0 ]
; xx [ 1317 ] = xx [ 0 ] ; xx [ 1318 ] = xx [ 0 ] ; xx [ 1319 ] = ( xx [ 676
] * xx [ 559 ] + xx [ 714 ] ) * xx [ 80 ] + xx [ 717 ] ; xx [ 1320 ] = xx [ 0
] ; xx [ 1321 ] = xx [ 0 ] ; xx [ 1322 ] = xx [ 0 ] ; xx [ 1323 ] = xx [ 0 ]
; xx [ 1324 ] = xx [ 0 ] ; xx [ 1325 ] = xx [ 0 ] ; xx [ 1326 ] = xx [ 0 ] ;
xx [ 1327 ] = xx [ 0 ] ; xx [ 1328 ] = xx [ 0 ] ; xx [ 1329 ] = xx [ 0 ] ; xx
[ 1330 ] = xx [ 0 ] ; xx [ 1331 ] = xx [ 0 ] ; xx [ 1332 ] = xx [ 0 ] ; xx [
1333 ] = - ( xx [ 723 ] + ( xx [ 750 ] - xx [ 604 ] * xx [ 740 ] ) * xx [ 80
] ) ; xx [ 1334 ] = - ( xx [ 736 ] + xx [ 760 ] ) ; xx [ 1335 ] = - ( xx [
757 ] + xx [ 766 ] ) ; xx [ 1336 ] = - ( ( xx [ 751 ] * xx [ 609 ] + xx [ 769
] ) * xx [ 80 ] + xx [ 772 ] ) ; xx [ 1337 ] = - ( xx [ 773 ] + xx [ 783 ] +
xx [ 80 ] * ( xx [ 894 ] + xx [ 672 ] * xx [ 762 ] ) ) ; xx [ 1338 ] = - ( xx
[ 786 ] + xx [ 167 ] ) ; xx [ 1339 ] = - ( xx [ 280 ] + xx [ 176 ] ) ; xx [
1340 ] = - ( xx [ 80 ] * ( xx [ 905 ] - xx [ 901 ] * xx [ 297 ] ) + xx [ 908
] - xx [ 123 ] ) ; xx [ 1341 ] = xx [ 31 ] + xx [ 744 ] + xx [ 80 ] * ( xx [
925 ] - xx [ 147 ] * xx [ 24 ] ) ; xx [ 1342 ] = xx [ 922 ] + xx [ 183 ] ; xx
[ 1343 ] = xx [ 932 ] + xx [ 149 ] ; xx [ 1344 ] = xx [ 197 ] + xx [ 27 ] ;
xx [ 1345 ] = xx [ 117 ] + xx [ 180 ] ; xx [ 1346 ] = xx [ 928 ] + xx [ 938 ]
; xx [ 1347 ] = xx [ 935 ] + xx [ 46 ] ; xx [ 1348 ] = xx [ 104 ] + xx [ 161
] ; xx [ 1349 ] = xx [ 0 ] ; xx [ 1350 ] = xx [ 0 ] ; xx [ 1351 ] = xx [ 0 ]
; xx [ 1352 ] = xx [ 0 ] ; xx [ 1353 ] = xx [ 80 ] * ( xx [ 212 ] - xx [ 4 ]
* xx [ 30 ] ) + xx [ 17 ] + xx [ 80 ] * ( xx [ 170 ] + xx [ 216 ] * xx [ 22 ]
) + xx [ 73 ] ; xx [ 1354 ] = xx [ 0 ] ; xx [ 1355 ] = xx [ 0 ] ; xx [ 1356 ]
= xx [ 0 ] ; xx [ 1357 ] = xx [ 0 ] ; xx [ 1358 ] = xx [ 0 ] ; xx [ 1359 ] =
xx [ 0 ] ; xx [ 1360 ] = xx [ 0 ] ; xx [ 1361 ] = xx [ 0 ] ; xx [ 1362 ] = xx
[ 0 ] ; xx [ 1363 ] = xx [ 0 ] ; xx [ 1364 ] = xx [ 0 ] ; xx [ 1365 ] = xx [
0 ] ; xx [ 1366 ] = xx [ 0 ] ; xx [ 1367 ] = xx [ 0 ] ; xx [ 1368 ] = xx [ 0
] ; xx [ 1369 ] = xx [ 0 ] ; xx [ 1370 ] = - ( xx [ 774 ] + xx [ 763 ] + ( xx
[ 895 ] - xx [ 672 ] * xx [ 889 ] ) * xx [ 80 ] ) ; xx [ 1371 ] = - ( xx [
787 ] + xx [ 168 ] ) ; xx [ 1372 ] = - ( xx [ 281 ] + xx [ 177 ] ) ; xx [
1373 ] = - ( ( xx [ 906 ] - xx [ 123 ] * xx [ 901 ] * xx [ 904 ] ) * xx [ 80
] + xx [ 909 ] + xx [ 102 ] ) ; xx [ 1374 ] = xx [ 32 ] + xx [ 752 ] + ( xx [
761 ] * xx [ 24 ] + xx [ 926 ] ) * xx [ 80 ] ; xx [ 1375 ] = xx [ 923 ] + xx
[ 184 ] ; xx [ 1376 ] = xx [ 933 ] + xx [ 150 ] ; xx [ 1377 ] = xx [ 198 ] +
xx [ 28 ] ; xx [ 1378 ] = xx [ 118 ] + xx [ 181 ] ; xx [ 1379 ] = xx [ 929 ]
+ xx [ 939 ] ; xx [ 1380 ] = xx [ 936 ] + xx [ 47 ] ; xx [ 1381 ] = xx [ 105
] + xx [ 162 ] ; xx [ 1382 ] = xx [ 0 ] ; xx [ 1383 ] = xx [ 0 ] ; xx [ 1384
] = xx [ 0 ] ; xx [ 1385 ] = xx [ 0 ] ; xx [ 1386 ] = ( xx [ 4 ] * xx [ 38 ]
+ xx [ 213 ] ) * xx [ 80 ] - xx [ 20 ] + ( xx [ 216 ] * xx [ 34 ] + xx [ 171
] ) * xx [ 80 ] + xx [ 72 ] ; xx [ 1387 ] = xx [ 0 ] ; xx [ 1388 ] = xx [ 0 ]
; xx [ 1389 ] = xx [ 0 ] ; xx [ 1390 ] = xx [ 0 ] ; xx [ 1391 ] = xx [ 0 ] ;
xx [ 1392 ] = xx [ 0 ] ; xx [ 1393 ] = xx [ 0 ] ; xx [ 1394 ] = xx [ 0 ] ; xx
[ 1395 ] = xx [ 0 ] ; xx [ 1396 ] = xx [ 0 ] ; xx [ 1397 ] = xx [ 0 ] ; xx [
1398 ] = xx [ 0 ] ; xx [ 1399 ] = xx [ 0 ] ; xx [ 1400 ] = xx [ 0 ] ; xx [
1401 ] = xx [ 0 ] ; xx [ 1402 ] = xx [ 0 ] ; xx [ 1403 ] = - ( xx [ 775 ] + (
xx [ 896 ] - xx [ 672 ] * xx [ 890 ] ) * xx [ 80 ] ) ; xx [ 1404 ] = - ( xx [
788 ] + xx [ 169 ] ) ; xx [ 1405 ] = - ( xx [ 282 ] + xx [ 178 ] ) ; xx [
1406 ] = - ( ( xx [ 901 ] * xx [ 298 ] + xx [ 907 ] ) * xx [ 80 ] + xx [ 910
] ) ; xx [ 1407 ] = xx [ 33 ] + ( xx [ 791 ] * xx [ 24 ] + xx [ 927 ] ) * xx
[ 80 ] ; xx [ 1408 ] = xx [ 924 ] + xx [ 185 ] ; xx [ 1409 ] = xx [ 934 ] +
xx [ 151 ] ; xx [ 1410 ] = xx [ 199 ] + xx [ 29 ] ; xx [ 1411 ] = xx [ 119 ]
+ xx [ 182 ] ; xx [ 1412 ] = xx [ 930 ] + xx [ 940 ] ; xx [ 1413 ] = xx [ 937
] + xx [ 48 ] ; xx [ 1414 ] = xx [ 106 ] + xx [ 163 ] ; xx [ 1415 ] = xx [ 0
] ; xx [ 1416 ] = xx [ 0 ] ; xx [ 1417 ] = xx [ 0 ] ; xx [ 1418 ] = xx [ 0 ]
; xx [ 1419 ] = ( xx [ 4 ] * xx [ 23 ] + xx [ 214 ] ) * xx [ 80 ] + ( xx [
172 ] - xx [ 216 ] * xx [ 35 ] ) * xx [ 80 ] ; xx [ 1420 ] = xx [ 0 ] ; xx [
1421 ] = xx [ 0 ] ; xx [ 1422 ] = xx [ 0 ] ; xx [ 1423 ] = xx [ 0 ] ; xx [
1424 ] = xx [ 0 ] ; xx [ 1425 ] = xx [ 0 ] ; xx [ 1426 ] = xx [ 0 ] ; xx [
1427 ] = xx [ 0 ] ; xx [ 1428 ] = xx [ 0 ] ; xx [ 1429 ] = xx [ 0 ] ; xx [
1430 ] = xx [ 0 ] ; xx [ 1431 ] = xx [ 0 ] ; xx [ 1432 ] = xx [ 0 ] ; xx [
1433 ] = xx [ 0 ] ; xx [ 1434 ] = xx [ 0 ] ; xx [ 1435 ] = xx [ 0 ] ; xx [ 27
] = xx [ 165 ] ; xx [ 28 ] = xx [ 283 ] ; xx [ 29 ] = xx [ 174 ] ; xx [ 30 ]
= xx [ 284 ] ; xx [ 0 ] = xx [ 250 ] * xx [ 122 ] - xx [ 89 ] * xx [ 245 ] ;
xx [ 1 ] = xx [ 122 ] * xx [ 256 ] + xx [ 89 ] * xx [ 244 ] ; xx [ 3 ] = xx [
122 ] * xx [ 244 ] - xx [ 89 ] * xx [ 256 ] ; xx [ 4 ] = xx [ 250 ] * xx [ 89
] + xx [ 122 ] * xx [ 245 ] ; xx [ 31 ] = xx [ 0 ] ; xx [ 32 ] = - xx [ 1 ] ;
xx [ 33 ] = xx [ 3 ] ; xx [ 34 ] = xx [ 4 ] ; pm_math_quatCompose ( xx + 27 ,
xx + 31 , xx + 35 ) ; xx [ 12 ] = xx [ 3 ] * xx [ 857 ] ; xx [ 18 ] = xx [
857 ] * xx [ 1 ] ; xx [ 22 ] = xx [ 80 ] * ( xx [ 0 ] * xx [ 12 ] + xx [ 18 ]
* xx [ 4 ] ) ; xx [ 23 ] = xx [ 250 ] * xx [ 859 ] ; xx [ 31 ] = xx [ 859 ] *
xx [ 245 ] ; xx [ 32 ] = xx [ 21 ] * xx [ 864 ] ; xx [ 33 ] = xx [ 21 ] * xx
[ 865 ] ; xx [ 34 ] = xx [ 864 ] - ( xx [ 21 ] * xx [ 32 ] - xx [ 25 ] * xx [
33 ] ) * xx [ 80 ] ; xx [ 41 ] = xx [ 865 ] - xx [ 80 ] * ( xx [ 25 ] * xx [
32 ] + xx [ 21 ] * xx [ 33 ] ) ; xx [ 32 ] = ( xx [ 12 ] * xx [ 4 ] - xx [ 0
] * xx [ 18 ] ) * xx [ 80 ] ; xx [ 0 ] = ( xx [ 18 ] * xx [ 1 ] + xx [ 3 ] *
xx [ 12 ] ) * xx [ 80 ] - xx [ 857 ] ; xx [ 46 ] = xx [ 22 ] + ( xx [ 23 ] *
xx [ 244 ] + xx [ 31 ] * xx [ 256 ] ) * xx [ 80 ] + xx [ 34 ] ; xx [ 47 ] =
xx [ 80 ] * ( xx [ 23 ] * xx [ 256 ] - xx [ 31 ] * xx [ 244 ] ) + xx [ 41 ] -
xx [ 32 ] ; xx [ 48 ] = xx [ 0 ] + xx [ 859 ] - ( xx [ 31 ] * xx [ 245 ] + xx
[ 250 ] * xx [ 23 ] ) * xx [ 80 ] + xx [ 866 ] ; pm_math_cross3 ( xx + 46 ,
xx + 267 , xx + 49 ) ; pm_math_quatXform ( xx + 35 , xx + 49 , xx + 46 ) ; xx
[ 1 ] = xx [ 10 ] * xx [ 90 ] ; xx [ 3 ] = xx [ 10 ] * xx [ 193 ] ; xx [ 4 ]
= xx [ 80 ] * xx [ 857 ] * ( xx [ 174 ] * xx [ 1 ] - xx [ 165 ] * xx [ 3 ] )
; xx [ 12 ] = xx [ 266 ] - xx [ 278 ] ; xx [ 49 ] = xx [ 34 ] ; xx [ 50 ] =
xx [ 41 ] ; xx [ 51 ] = xx [ 866 ] ; pm_math_cross3 ( xx + 49 , xx + 126 , xx
+ 53 ) ; pm_math_quatXform ( xx + 271 , xx + 53 , xx + 49 ) ; xx [ 18 ] = xx
[ 49 ] - xx [ 276 ] * xx [ 859 ] ; xx [ 23 ] = xx [ 50 ] + xx [ 275 ] * xx [
859 ] ; xx [ 31 ] = xx [ 23 ] * xx [ 89 ] + xx [ 122 ] * xx [ 18 ] ; xx [ 33
] = xx [ 266 ] * xx [ 89 ] + xx [ 270 ] * xx [ 122 ] ; xx [ 34 ] = xx [ 89 ]
* xx [ 276 ] + xx [ 275 ] * xx [ 122 ] ; xx [ 41 ] = ( xx [ 276 ] + xx [ 80 ]
* xx [ 33 ] * xx [ 89 ] - xx [ 80 ] * xx [ 34 ] * xx [ 89 ] - xx [ 266 ] ) *
xx [ 857 ] ; xx [ 53 ] = xx [ 270 ] + xx [ 288 ] ; xx [ 54 ] = ( xx [ 275 ] +
xx [ 80 ] * xx [ 33 ] * xx [ 122 ] - xx [ 80 ] * xx [ 34 ] * xx [ 122 ] + xx
[ 59 ] ) * xx [ 857 ] ; xx [ 72 ] = xx [ 859 ] * xx [ 12 ] + xx [ 18 ] - xx [
80 ] * xx [ 31 ] * xx [ 122 ] + xx [ 41 ] ; xx [ 73 ] = xx [ 23 ] - xx [ 80 ]
* xx [ 31 ] * xx [ 89 ] - xx [ 859 ] * xx [ 53 ] - xx [ 54 ] ; xx [ 74 ] = xx
[ 51 ] - ( xx [ 89 ] * xx [ 89 ] * xx [ 51 ] + xx [ 51 ] * xx [ 122 ] * xx [
122 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 27 , xx + 72 , xx + 49 ) ; xx
[ 72 ] = xx [ 24 ] ; xx [ 73 ] = xx [ 6 ] ; xx [ 74 ] = xx [ 14 ] ; xx [ 75 ]
= xx [ 26 ] ; xx [ 18 ] = xx [ 138 ] * xx [ 19 ] - xx [ 15 ] * xx [ 137 ] ;
xx [ 23 ] = xx [ 139 ] * xx [ 19 ] - xx [ 15 ] * xx [ 136 ] ; xx [ 31 ] = xx
[ 136 ] * xx [ 19 ] + xx [ 15 ] * xx [ 139 ] ; xx [ 33 ] = xx [ 15 ] * xx [
138 ] + xx [ 137 ] * xx [ 19 ] ; xx [ 104 ] = - xx [ 18 ] ; xx [ 105 ] = xx [
23 ] ; xx [ 106 ] = xx [ 31 ] ; xx [ 107 ] = - xx [ 33 ] ;
pm_math_quatCompose ( xx + 72 , xx + 104 , xx + 117 ) ; xx [ 34 ] = xx [ 31 ]
* xx [ 816 ] ; xx [ 55 ] = xx [ 816 ] * xx [ 23 ] ; xx [ 59 ] = xx [ 80 ] * (
xx [ 34 ] * xx [ 18 ] - xx [ 33 ] * xx [ 55 ] ) ; xx [ 64 ] = xx [ 818 ] * xx
[ 137 ] ; xx [ 65 ] = xx [ 818 ] * xx [ 138 ] ; xx [ 77 ] = xx [ 21 ] * xx [
823 ] ; xx [ 78 ] = xx [ 21 ] * xx [ 824 ] ; xx [ 81 ] = xx [ 823 ] - ( xx [
21 ] * xx [ 77 ] - xx [ 25 ] * xx [ 78 ] ) * xx [ 80 ] ; xx [ 82 ] = xx [ 824
] - xx [ 80 ] * ( xx [ 25 ] * xx [ 77 ] + xx [ 21 ] * xx [ 78 ] ) ; xx [ 83 ]
= xx [ 825 ] ; pm_math_quatInverseXform ( xx + 97 , xx + 81 , xx + 77 ) ;
pm_math_quatInverseXform ( xx + 91 , xx + 830 , xx + 104 ) ; xx [ 87 ] = xx [
57 ] * xx [ 834 ] ; xx [ 96 ] = xx [ 87 ] * xx [ 76 ] ; xx [ 102 ] = ( xx [
55 ] * xx [ 18 ] + xx [ 33 ] * xx [ 34 ] ) * xx [ 80 ] ; xx [ 18 ] = xx [ 816
] - ( xx [ 55 ] * xx [ 23 ] + xx [ 31 ] * xx [ 34 ] ) * xx [ 80 ] ; xx [ 23 ]
= xx [ 63 ] * xx [ 834 ] ; xx [ 149 ] = xx [ 59 ] + xx [ 80 ] * ( xx [ 139 ]
* xx [ 64 ] - xx [ 136 ] * xx [ 65 ] ) + xx [ 77 ] + xx [ 104 ] + xx [ 80 ] *
xx [ 96 ] * xx [ 76 ] - xx [ 87 ] ; xx [ 150 ] = ( xx [ 136 ] * xx [ 64 ] +
xx [ 139 ] * xx [ 65 ] ) * xx [ 80 ] + xx [ 78 ] + xx [ 105 ] - xx [ 80 ] *
xx [ 52 ] * xx [ 96 ] - xx [ 102 ] ; xx [ 151 ] = xx [ 18 ] + xx [ 818 ] - (
xx [ 137 ] * xx [ 64 ] + xx [ 138 ] * xx [ 65 ] ) * xx [ 80 ] + xx [ 79 ] +
xx [ 106 ] - ( xx [ 23 ] + xx [ 836 ] ) ; pm_math_cross3 ( xx + 149 , xx + 84
, xx + 77 ) ; pm_math_quatXform ( xx + 117 , xx + 77 , xx + 104 ) ; xx [ 31 ]
= xx [ 6 ] * xx [ 10 ] ; xx [ 33 ] = xx [ 26 ] * xx [ 10 ] ; xx [ 34 ] = xx [
80 ] * xx [ 816 ] * ( xx [ 31 ] * xx [ 14 ] - xx [ 33 ] * xx [ 24 ] ) ; xx [
55 ] = xx [ 145 ] - xx [ 135 ] ; xx [ 64 ] = xx [ 818 ] * xx [ 55 ] ;
pm_math_cross3 ( xx + 81 , xx + 126 , xx + 77 ) ; pm_math_quatXform ( xx + 42
, xx + 77 , xx + 144 ) ; pm_math_cross3 ( xx + 830 , xx + 112 , xx + 77 ) ;
pm_math_quatXform ( xx + 68 , xx + 77 , xx + 149 ) ; xx [ 65 ] = xx [ 80 ] *
xx [ 834 ] * xx [ 58 ] ; xx [ 77 ] = xx [ 8 ] * xx [ 836 ] - xx [ 23 ] * xx [
88 ] ; xx [ 78 ] = xx [ 836 ] * xx [ 11 ] + xx [ 23 ] * xx [ 101 ] - xx [ 95
] * xx [ 87 ] ; xx [ 79 ] = xx [ 87 ] * xx [ 88 ] ; pm_math_quatXform ( xx +
140 , xx + 77 , xx + 153 ) ; pm_math_cross3 ( xx + 830 , xx + 108 , xx + 77 )
; xx [ 58 ] = xx [ 61 ] - xx [ 67 ] ; xx [ 61 ] = xx [ 834 ] * xx [ 58 ] ; xx
[ 67 ] = xx [ 80 ] * xx [ 103 ] * xx [ 834 ] ; xx [ 156 ] = xx [ 65 ] + xx [
153 ] + xx [ 77 ] ; xx [ 157 ] = xx [ 61 ] + xx [ 154 ] + xx [ 78 ] ; xx [
158 ] = xx [ 155 ] - xx [ 67 ] + xx [ 79 ] ; pm_math_quatXform ( xx + 68 , xx
+ 156 , xx + 77 ) ; pm_math_cross3 ( xx + 81 , xx + 132 , xx + 153 ) ; xx [
156 ] = xx [ 149 ] + xx [ 77 ] + xx [ 153 ] ; xx [ 157 ] = xx [ 150 ] + xx [
78 ] + xx [ 154 ] ; xx [ 158 ] = xx [ 151 ] + xx [ 79 ] + xx [ 155 ] ;
pm_math_quatXform ( xx + 42 , xx + 156 , xx + 77 ) ; xx [ 96 ] = xx [ 144 ] +
xx [ 77 ] - xx [ 124 ] * xx [ 818 ] ; xx [ 103 ] = xx [ 145 ] + xx [ 78 ] +
xx [ 125 ] * xx [ 818 ] ; xx [ 107 ] = xx [ 103 ] * xx [ 15 ] + xx [ 19 ] *
xx [ 96 ] ; xx [ 111 ] = xx [ 124 ] * xx [ 15 ] + xx [ 125 ] * xx [ 19 ] ; xx
[ 115 ] = xx [ 131 ] * xx [ 19 ] - xx [ 135 ] * xx [ 15 ] ; xx [ 123 ] = xx [
135 ] + xx [ 80 ] * xx [ 115 ] * xx [ 15 ] ; xx [ 129 ] = xx [ 816 ] * ( xx [
124 ] - xx [ 80 ] * xx [ 111 ] * xx [ 15 ] + xx [ 123 ] ) ; xx [ 135 ] = xx [
152 ] - xx [ 131 ] ; xx [ 131 ] = xx [ 818 ] * xx [ 135 ] ; xx [ 147 ] = xx [
80 ] * xx [ 115 ] * xx [ 19 ] + xx [ 9 ] ; xx [ 9 ] = ( xx [ 125 ] - xx [ 80
] * xx [ 111 ] * xx [ 19 ] + xx [ 147 ] ) * xx [ 816 ] ; xx [ 77 ] = xx [ 146
] + xx [ 79 ] ; xx [ 152 ] = xx [ 64 ] + xx [ 96 ] - xx [ 80 ] * xx [ 107 ] *
xx [ 19 ] - xx [ 129 ] ; xx [ 153 ] = xx [ 131 ] + xx [ 103 ] - xx [ 80 ] *
xx [ 107 ] * xx [ 15 ] + xx [ 9 ] ; xx [ 154 ] = xx [ 77 ] - ( xx [ 15 ] * xx
[ 77 ] * xx [ 15 ] + xx [ 77 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 72 , xx + 152 , xx + 77 ) ; xx [ 96 ] = xx [ 857 ] *
( ( xx [ 3 ] * xx [ 193 ] + xx [ 1 ] * xx [ 90 ] ) * xx [ 80 ] - xx [ 10 ] )
; xx [ 90 ] = xx [ 816 ] * ( xx [ 10 ] - ( xx [ 26 ] * xx [ 33 ] + xx [ 6 ] *
xx [ 31 ] ) * xx [ 80 ] ) ; xx [ 6 ] = xx [ 80 ] * ( xx [ 165 ] * xx [ 1 ] +
xx [ 174 ] * xx [ 3 ] ) * xx [ 857 ] ; xx [ 1 ] = xx [ 80 ] * ( xx [ 31 ] *
xx [ 24 ] + xx [ 33 ] * xx [ 14 ] ) * xx [ 816 ] ; xx [ 152 ] = xx [ 5 ] ; xx
[ 153 ] = xx [ 262 ] ; xx [ 154 ] = xx [ 311 ] ; xx [ 155 ] = xx [ 387 ] ; xx
[ 3 ] = xx [ 393 ] * xx [ 383 ] - xx [ 313 ] * xx [ 391 ] ; xx [ 14 ] = xx [
383 ] * xx [ 398 ] + xx [ 313 ] * xx [ 306 ] ; xx [ 24 ] = xx [ 383 ] * xx [
306 ] - xx [ 313 ] * xx [ 398 ] ; xx [ 26 ] = xx [ 393 ] * xx [ 313 ] + xx [
383 ] * xx [ 391 ] ; xx [ 156 ] = xx [ 3 ] ; xx [ 157 ] = - xx [ 14 ] ; xx [
158 ] = xx [ 24 ] ; xx [ 159 ] = xx [ 26 ] ; pm_math_quatCompose ( xx + 152 ,
xx + 156 , xx + 160 ) ; xx [ 31 ] = xx [ 393 ] * xx [ 848 ] ; xx [ 33 ] = xx
[ 848 ] * xx [ 391 ] ; xx [ 103 ] = xx [ 21 ] * xx [ 853 ] ; xx [ 107 ] = xx
[ 21 ] * xx [ 854 ] ; xx [ 111 ] = xx [ 853 ] - ( xx [ 21 ] * xx [ 103 ] - xx
[ 25 ] * xx [ 107 ] ) * xx [ 80 ] ; xx [ 115 ] = xx [ 846 ] * xx [ 14 ] ; xx
[ 156 ] = xx [ 24 ] * xx [ 846 ] ; xx [ 157 ] = xx [ 80 ] * ( xx [ 115 ] * xx
[ 26 ] + xx [ 3 ] * xx [ 156 ] ) ; xx [ 158 ] = ( xx [ 156 ] * xx [ 26 ] - xx
[ 3 ] * xx [ 115 ] ) * xx [ 80 ] ; xx [ 3 ] = xx [ 854 ] - xx [ 80 ] * ( xx [
25 ] * xx [ 103 ] + xx [ 21 ] * xx [ 107 ] ) ; xx [ 26 ] = xx [ 846 ] - ( xx
[ 115 ] * xx [ 14 ] + xx [ 24 ] * xx [ 156 ] ) * xx [ 80 ] ; xx [ 164 ] = (
xx [ 31 ] * xx [ 306 ] + xx [ 33 ] * xx [ 398 ] ) * xx [ 80 ] + xx [ 111 ] -
xx [ 157 ] ; xx [ 165 ] = xx [ 158 ] + xx [ 80 ] * ( xx [ 31 ] * xx [ 398 ] -
xx [ 33 ] * xx [ 306 ] ) + xx [ 3 ] ; xx [ 166 ] = xx [ 26 ] + xx [ 848 ] - (
xx [ 33 ] * xx [ 391 ] + xx [ 393 ] * xx [ 31 ] ) * xx [ 80 ] + xx [ 855 ] ;
pm_math_cross3 ( xx + 164 , xx + 267 , xx + 167 ) ; pm_math_quatXform ( xx +
160 , xx + 167 , xx + 164 ) ; xx [ 14 ] = xx [ 262 ] * xx [ 116 ] ; xx [ 24 ]
= xx [ 387 ] * xx [ 116 ] ; xx [ 31 ] = xx [ 80 ] * xx [ 846 ] * ( xx [ 14 ]
* xx [ 311 ] - xx [ 24 ] * xx [ 5 ] ) ; xx [ 33 ] = xx [ 410 ] - xx [ 413 ] ;
xx [ 167 ] = xx [ 111 ] ; xx [ 168 ] = xx [ 3 ] ; xx [ 169 ] = xx [ 855 ] ;
pm_math_cross3 ( xx + 167 , xx + 126 , xx + 170 ) ; pm_math_quatXform ( xx +
428 , xx + 170 , xx + 167 ) ; xx [ 3 ] = xx [ 167 ] - xx [ 433 ] * xx [ 848 ]
; xx [ 103 ] = xx [ 168 ] + xx [ 432 ] * xx [ 848 ] ; xx [ 107 ] = xx [ 103 ]
* xx [ 313 ] + xx [ 383 ] * xx [ 3 ] ; xx [ 111 ] = xx [ 410 ] * xx [ 313 ] -
xx [ 409 ] * xx [ 383 ] ; xx [ 115 ] = xx [ 313 ] * xx [ 433 ] + xx [ 432 ] *
xx [ 383 ] ; xx [ 156 ] = ( xx [ 433 ] + xx [ 80 ] * xx [ 111 ] * xx [ 313 ]
- xx [ 80 ] * xx [ 115 ] * xx [ 313 ] - xx [ 410 ] ) * xx [ 846 ] ; xx [ 159
] = xx [ 409 ] - xx [ 437 ] ; xx [ 170 ] = ( xx [ 432 ] + xx [ 80 ] * xx [
111 ] * xx [ 383 ] - xx [ 80 ] * xx [ 115 ] * xx [ 383 ] + xx [ 39 ] ) * xx [
846 ] ; xx [ 171 ] = xx [ 848 ] * xx [ 33 ] + xx [ 3 ] - xx [ 80 ] * xx [ 107
] * xx [ 383 ] - xx [ 156 ] ; xx [ 172 ] = xx [ 848 ] * xx [ 159 ] + xx [ 103
] - xx [ 80 ] * xx [ 107 ] * xx [ 313 ] + xx [ 170 ] ; xx [ 173 ] = xx [ 169
] - ( xx [ 313 ] * xx [ 313 ] * xx [ 169 ] + xx [ 169 ] * xx [ 383 ] * xx [
383 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 152 , xx + 171 , xx + 167 ) ;
xx [ 3 ] = xx [ 341 ] * xx [ 19 ] - xx [ 15 ] * xx [ 340 ] ; xx [ 39 ] = xx [
342 ] * xx [ 19 ] - xx [ 15 ] * xx [ 339 ] ; xx [ 103 ] = xx [ 339 ] * xx [
19 ] + xx [ 15 ] * xx [ 342 ] ; xx [ 107 ] = xx [ 15 ] * xx [ 341 ] + xx [
340 ] * xx [ 19 ] ; xx [ 171 ] = - xx [ 3 ] ; xx [ 172 ] = xx [ 39 ] ; xx [
173 ] = xx [ 103 ] ; xx [ 174 ] = - xx [ 107 ] ; pm_math_quatCompose ( xx +
72 , xx + 171 , xx + 175 ) ; xx [ 111 ] = xx [ 103 ] * xx [ 816 ] ; xx [ 115
] = xx [ 816 ] * xx [ 39 ] ; xx [ 171 ] = xx [ 80 ] * ( xx [ 111 ] * xx [ 3 ]
- xx [ 107 ] * xx [ 115 ] ) ; xx [ 172 ] = xx [ 340 ] * xx [ 818 ] ; xx [ 173
] = xx [ 341 ] * xx [ 818 ] ; pm_math_quatInverseXform ( xx + 335 , xx + 81 ,
xx + 179 ) ; pm_math_quatInverseXform ( xx + 331 , xx + 830 , xx + 182 ) ; xx
[ 174 ] = xx [ 23 ] * xx [ 261 ] ; xx [ 185 ] = xx [ 246 ] * xx [ 87 ] - xx [
56 ] * xx [ 23 ] ; xx [ 186 ] = xx [ 87 ] * xx [ 261 ] ; xx [ 187 ] = - xx [
174 ] ; xx [ 188 ] = xx [ 185 ] ; xx [ 189 ] = xx [ 186 ] ; pm_math_cross3 (
xx + 300 , xx + 187 , xx + 190 ) ; xx [ 187 ] = ( xx [ 115 ] * xx [ 3 ] + xx
[ 107 ] * xx [ 111 ] ) * xx [ 80 ] ; xx [ 3 ] = xx [ 816 ] - ( xx [ 115 ] *
xx [ 39 ] + xx [ 103 ] * xx [ 111 ] ) * xx [ 80 ] ; xx [ 197 ] = xx [ 171 ] +
xx [ 80 ] * ( xx [ 342 ] * xx [ 172 ] - xx [ 339 ] * xx [ 173 ] ) + xx [ 179
] + xx [ 182 ] + xx [ 80 ] * ( xx [ 190 ] + xx [ 174 ] * xx [ 62 ] ) - xx [
87 ] ; xx [ 198 ] = ( xx [ 339 ] * xx [ 172 ] + xx [ 342 ] * xx [ 173 ] ) *
xx [ 80 ] + xx [ 180 ] + xx [ 183 ] + xx [ 80 ] * ( xx [ 191 ] - xx [ 62 ] *
xx [ 185 ] ) - xx [ 187 ] ; xx [ 199 ] = xx [ 3 ] + xx [ 818 ] - ( xx [ 340 ]
* xx [ 172 ] + xx [ 341 ] * xx [ 173 ] ) * xx [ 80 ] + xx [ 181 ] + xx [ 184
] + ( xx [ 192 ] - xx [ 186 ] * xx [ 62 ] ) * xx [ 80 ] - xx [ 23 ] + xx [
838 ] ; pm_math_cross3 ( xx + 197 , xx + 84 , xx + 172 ) ; pm_math_quatXform
( xx + 175 , xx + 172 , xx + 179 ) ; xx [ 172 ] = xx [ 305 ] * xx [ 838 ] -
xx [ 344 ] * xx [ 23 ] ; xx [ 173 ] = xx [ 255 ] * xx [ 838 ] + xx [ 87 ] *
xx [ 243 ] - xx [ 23 ] * xx [ 238 ] ; xx [ 174 ] = xx [ 80 ] * xx [ 254 ] *
xx [ 838 ] + xx [ 344 ] * xx [ 87 ] ; pm_math_quatXform ( xx + 140 , xx + 172
, xx + 182 ) ; pm_math_cross3 ( xx + 830 , xx + 324 , xx + 172 ) ; xx [ 188 ]
= xx [ 65 ] + xx [ 182 ] + xx [ 172 ] ; xx [ 189 ] = xx [ 61 ] + xx [ 183 ] +
xx [ 173 ] ; xx [ 190 ] = xx [ 184 ] - xx [ 67 ] + xx [ 174 ] ;
pm_math_quatXform ( xx + 68 , xx + 188 , xx + 172 ) ; pm_math_cross3 ( xx +
81 , xx + 345 , xx + 182 ) ; xx [ 188 ] = xx [ 149 ] + xx [ 172 ] + xx [ 182
] ; xx [ 189 ] = xx [ 150 ] + xx [ 173 ] + xx [ 183 ] ; xx [ 190 ] = xx [ 151
] + xx [ 174 ] + xx [ 184 ] ; pm_math_quatXform ( xx + 42 , xx + 188 , xx +
172 ) ; xx [ 39 ] = xx [ 144 ] + xx [ 172 ] - xx [ 343 ] * xx [ 818 ] ; xx [
103 ] = xx [ 145 ] + xx [ 173 ] + xx [ 349 ] * xx [ 818 ] ; xx [ 107 ] = xx [
103 ] * xx [ 15 ] + xx [ 19 ] * xx [ 39 ] ; xx [ 111 ] = xx [ 343 ] * xx [ 15
] + xx [ 349 ] * xx [ 19 ] ; xx [ 115 ] = xx [ 816 ] * ( xx [ 343 ] - xx [ 80
] * xx [ 111 ] * xx [ 15 ] + xx [ 123 ] ) ; xx [ 182 ] = ( xx [ 349 ] - xx [
80 ] * xx [ 111 ] * xx [ 19 ] + xx [ 147 ] ) * xx [ 816 ] ; xx [ 111 ] = xx [
146 ] + xx [ 174 ] ; xx [ 172 ] = xx [ 64 ] + xx [ 39 ] - xx [ 80 ] * xx [
107 ] * xx [ 19 ] - xx [ 115 ] ; xx [ 173 ] = xx [ 131 ] + xx [ 103 ] - xx [
80 ] * xx [ 107 ] * xx [ 15 ] + xx [ 182 ] ; xx [ 174 ] = xx [ 111 ] - ( xx [
15 ] * xx [ 111 ] * xx [ 15 ] + xx [ 111 ] * xx [ 19 ] * xx [ 19 ] ) * xx [
80 ] ; pm_math_quatXform ( xx + 72 , xx + 172 , xx + 183 ) ; xx [ 39 ] = xx [
846 ] * ( xx [ 116 ] - ( xx [ 387 ] * xx [ 24 ] + xx [ 262 ] * xx [ 14 ] ) *
xx [ 80 ] ) ; xx [ 103 ] = xx [ 80 ] * ( xx [ 14 ] * xx [ 5 ] + xx [ 24 ] *
xx [ 311 ] ) * xx [ 846 ] ; xx [ 188 ] = xx [ 451 ] ; xx [ 189 ] = xx [ 458 ]
; xx [ 190 ] = xx [ 534 ] ; xx [ 191 ] = xx [ 585 ] ; xx [ 5 ] = xx [ 558 ] *
xx [ 399 ] - xx [ 452 ] * xx [ 544 ] ; xx [ 14 ] = xx [ 399 ] * xx [ 560 ] +
xx [ 452 ] * xx [ 513 ] ; xx [ 24 ] = xx [ 399 ] * xx [ 513 ] - xx [ 452 ] *
xx [ 560 ] ; xx [ 107 ] = xx [ 558 ] * xx [ 452 ] + xx [ 399 ] * xx [ 544 ] ;
xx [ 197 ] = xx [ 5 ] ; xx [ 198 ] = - xx [ 14 ] ; xx [ 199 ] = xx [ 24 ] ;
xx [ 200 ] = xx [ 107 ] ; pm_math_quatCompose ( xx + 188 , xx + 197 , xx +
201 ) ; xx [ 111 ] = xx [ 24 ] * xx [ 868 ] ; xx [ 116 ] = xx [ 868 ] * xx [
14 ] ; xx [ 172 ] = xx [ 80 ] * ( xx [ 5 ] * xx [ 111 ] + xx [ 116 ] * xx [
107 ] ) ; xx [ 173 ] = xx [ 558 ] * xx [ 870 ] ; xx [ 174 ] = xx [ 870 ] * xx
[ 544 ] ; xx [ 186 ] = xx [ 21 ] * xx [ 875 ] ; xx [ 192 ] = xx [ 21 ] * xx [
876 ] ; xx [ 193 ] = xx [ 875 ] - ( xx [ 21 ] * xx [ 186 ] - xx [ 25 ] * xx [
192 ] ) * xx [ 80 ] ; xx [ 195 ] = xx [ 876 ] - xx [ 80 ] * ( xx [ 25 ] * xx
[ 186 ] + xx [ 21 ] * xx [ 192 ] ) ; xx [ 186 ] = ( xx [ 111 ] * xx [ 107 ] -
xx [ 5 ] * xx [ 116 ] ) * xx [ 80 ] ; xx [ 5 ] = ( xx [ 116 ] * xx [ 14 ] +
xx [ 24 ] * xx [ 111 ] ) * xx [ 80 ] - xx [ 868 ] ; xx [ 197 ] = xx [ 172 ] +
( xx [ 173 ] * xx [ 513 ] + xx [ 174 ] * xx [ 560 ] ) * xx [ 80 ] + xx [ 193
] ; xx [ 198 ] = xx [ 80 ] * ( xx [ 173 ] * xx [ 560 ] - xx [ 174 ] * xx [
513 ] ) + xx [ 195 ] - xx [ 186 ] ; xx [ 199 ] = xx [ 5 ] + xx [ 870 ] - ( xx
[ 174 ] * xx [ 544 ] + xx [ 558 ] * xx [ 173 ] ) * xx [ 80 ] + xx [ 877 ] ;
pm_math_cross3 ( xx + 197 , xx + 267 , xx + 205 ) ; pm_math_quatXform ( xx +
201 , xx + 205 , xx + 197 ) ; xx [ 14 ] = xx [ 582 ] - xx [ 548 ] ; xx [ 205
] = xx [ 193 ] ; xx [ 206 ] = xx [ 195 ] ; xx [ 207 ] = xx [ 877 ] ;
pm_math_cross3 ( xx + 205 , xx + 126 , xx + 208 ) ; pm_math_quatXform ( xx +
575 , xx + 208 , xx + 205 ) ; xx [ 24 ] = xx [ 205 ] - xx [ 580 ] * xx [ 870
] ; xx [ 107 ] = xx [ 206 ] + xx [ 579 ] * xx [ 870 ] ; xx [ 111 ] = xx [ 107
] * xx [ 452 ] + xx [ 399 ] * xx [ 24 ] ; xx [ 116 ] = xx [ 547 ] * xx [ 399
] - xx [ 548 ] * xx [ 452 ] ; xx [ 173 ] = xx [ 452 ] * xx [ 580 ] + xx [ 579
] * xx [ 399 ] ; xx [ 174 ] = ( xx [ 580 ] + xx [ 80 ] * xx [ 116 ] * xx [
452 ] - xx [ 80 ] * xx [ 173 ] * xx [ 452 ] + xx [ 548 ] ) * xx [ 868 ] ; xx
[ 192 ] = xx [ 589 ] - xx [ 547 ] ; xx [ 193 ] = ( xx [ 579 ] + xx [ 80 ] *
xx [ 116 ] * xx [ 399 ] - xx [ 80 ] * xx [ 173 ] * xx [ 399 ] + xx [ 130 ] )
* xx [ 868 ] ; xx [ 208 ] = xx [ 870 ] * xx [ 14 ] + xx [ 24 ] - xx [ 80 ] *
xx [ 111 ] * xx [ 399 ] + xx [ 174 ] ; xx [ 209 ] = xx [ 870 ] * xx [ 192 ] +
xx [ 107 ] - xx [ 80 ] * xx [ 111 ] * xx [ 452 ] - xx [ 193 ] ; xx [ 210 ] =
xx [ 207 ] - ( xx [ 452 ] * xx [ 452 ] * xx [ 207 ] + xx [ 207 ] * xx [ 399 ]
* xx [ 399 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 188 , xx + 208 , xx +
205 ) ; xx [ 24 ] = xx [ 10 ] * xx [ 458 ] ; xx [ 107 ] = xx [ 10 ] * xx [
543 ] ; xx [ 111 ] = xx [ 80 ] * xx [ 868 ] * ( xx [ 534 ] * xx [ 24 ] + xx [
451 ] * xx [ 107 ] ) ; xx [ 116 ] = xx [ 490 ] * xx [ 19 ] - xx [ 15 ] * xx [
489 ] ; xx [ 130 ] = xx [ 491 ] * xx [ 19 ] - xx [ 15 ] * xx [ 488 ] ; xx [
173 ] = xx [ 488 ] * xx [ 19 ] + xx [ 15 ] * xx [ 491 ] ; xx [ 195 ] = xx [
15 ] * xx [ 490 ] + xx [ 489 ] * xx [ 19 ] ; xx [ 208 ] = - xx [ 116 ] ; xx [
209 ] = xx [ 130 ] ; xx [ 210 ] = xx [ 173 ] ; xx [ 211 ] = - xx [ 195 ] ;
pm_math_quatCompose ( xx + 72 , xx + 208 , xx + 212 ) ; xx [ 200 ] = xx [ 173
] * xx [ 816 ] ; xx [ 208 ] = xx [ 816 ] * xx [ 130 ] ; xx [ 209 ] = xx [ 80
] * ( xx [ 200 ] * xx [ 116 ] - xx [ 195 ] * xx [ 208 ] ) ; xx [ 210 ] = xx [
489 ] * xx [ 818 ] ; xx [ 211 ] = xx [ 490 ] * xx [ 818 ] ;
pm_math_quatInverseXform ( xx + 484 , xx + 81 , xx + 216 ) ;
pm_math_quatInverseXform ( xx + 480 , xx + 830 , xx + 219 ) ; xx [ 222 ] = xx
[ 440 ] * xx [ 23 ] ; xx [ 223 ] = xx [ 23 ] * xx [ 303 ] - xx [ 87 ] * xx [
400 ] ; xx [ 224 ] = xx [ 440 ] * xx [ 87 ] ; xx [ 225 ] = xx [ 222 ] ; xx [
226 ] = xx [ 223 ] ; xx [ 227 ] = - xx [ 224 ] ; pm_math_cross3 ( xx + 441 ,
xx + 225 , xx + 228 ) ; xx [ 225 ] = ( xx [ 208 ] * xx [ 116 ] + xx [ 195 ] *
xx [ 200 ] ) * xx [ 80 ] ; xx [ 116 ] = xx [ 816 ] - ( xx [ 208 ] * xx [ 130
] + xx [ 173 ] * xx [ 200 ] ) * xx [ 80 ] ; xx [ 231 ] = xx [ 209 ] + xx [ 80
] * ( xx [ 491 ] * xx [ 210 ] - xx [ 488 ] * xx [ 211 ] ) + xx [ 216 ] + xx [
219 ] + xx [ 80 ] * ( xx [ 228 ] + xx [ 397 ] * xx [ 222 ] ) - xx [ 87 ] ; xx
[ 232 ] = ( xx [ 488 ] * xx [ 210 ] + xx [ 491 ] * xx [ 211 ] ) * xx [ 80 ] +
xx [ 217 ] + xx [ 220 ] + xx [ 80 ] * ( xx [ 229 ] + xx [ 397 ] * xx [ 223 ]
) - xx [ 225 ] ; xx [ 233 ] = xx [ 116 ] + xx [ 818 ] - ( xx [ 489 ] * xx [
210 ] + xx [ 490 ] * xx [ 211 ] ) * xx [ 80 ] + xx [ 218 ] + xx [ 221 ] + (
xx [ 230 ] - xx [ 397 ] * xx [ 224 ] ) * xx [ 80 ] - xx [ 23 ] - xx [ 840 ] ;
pm_math_cross3 ( xx + 231 , xx + 84 , xx + 216 ) ; pm_math_quatXform ( xx +
212 , xx + 216 , xx + 219 ) ; xx [ 216 ] = xx [ 457 ] * xx [ 840 ] - xx [ 493
] * xx [ 23 ] ; xx [ 217 ] = xx [ 401 ] * xx [ 840 ] + xx [ 23 ] * xx [ 13 ]
+ xx [ 87 ] * xx [ 314 ] ; xx [ 218 ] = xx [ 80 ] * xx [ 327 ] * xx [ 840 ] +
xx [ 493 ] * xx [ 87 ] ; pm_math_quatXform ( xx + 140 , xx + 216 , xx + 222 )
; pm_math_cross3 ( xx + 830 , xx + 454 , xx + 216 ) ; xx [ 226 ] = xx [ 65 ]
+ xx [ 222 ] + xx [ 216 ] ; xx [ 227 ] = xx [ 61 ] + xx [ 223 ] + xx [ 217 ]
; xx [ 228 ] = xx [ 224 ] - xx [ 67 ] + xx [ 218 ] ; pm_math_quatXform ( xx +
68 , xx + 226 , xx + 216 ) ; pm_math_cross3 ( xx + 81 , xx + 494 , xx + 222 )
; xx [ 226 ] = xx [ 149 ] + xx [ 216 ] + xx [ 222 ] ; xx [ 227 ] = xx [ 150 ]
+ xx [ 217 ] + xx [ 223 ] ; xx [ 228 ] = xx [ 151 ] + xx [ 218 ] + xx [ 224 ]
; pm_math_quatXform ( xx + 42 , xx + 226 , xx + 216 ) ; xx [ 130 ] = xx [ 144
] + xx [ 216 ] - xx [ 492 ] * xx [ 818 ] ; xx [ 173 ] = xx [ 145 ] + xx [ 217
] + xx [ 498 ] * xx [ 818 ] ; xx [ 195 ] = xx [ 173 ] * xx [ 15 ] + xx [ 19 ]
* xx [ 130 ] ; xx [ 200 ] = xx [ 492 ] * xx [ 15 ] + xx [ 498 ] * xx [ 19 ] ;
xx [ 208 ] = xx [ 816 ] * ( xx [ 492 ] - xx [ 80 ] * xx [ 200 ] * xx [ 15 ] +
xx [ 123 ] ) ; xx [ 210 ] = ( xx [ 498 ] - xx [ 80 ] * xx [ 200 ] * xx [ 19 ]
+ xx [ 147 ] ) * xx [ 816 ] ; xx [ 200 ] = xx [ 146 ] + xx [ 218 ] ; xx [ 216
] = xx [ 64 ] + xx [ 130 ] - xx [ 80 ] * xx [ 195 ] * xx [ 19 ] - xx [ 208 ]
; xx [ 217 ] = xx [ 131 ] + xx [ 173 ] - xx [ 80 ] * xx [ 195 ] * xx [ 15 ] +
xx [ 210 ] ; xx [ 218 ] = xx [ 200 ] - ( xx [ 15 ] * xx [ 200 ] * xx [ 15 ] +
xx [ 200 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
72 , xx + 216 , xx + 222 ) ; xx [ 130 ] = xx [ 868 ] * ( ( xx [ 107 ] * xx [
543 ] + xx [ 24 ] * xx [ 458 ] ) * xx [ 80 ] - xx [ 10 ] ) ; xx [ 173 ] = xx
[ 80 ] * ( xx [ 534 ] * xx [ 107 ] - xx [ 451 ] * xx [ 24 ] ) * xx [ 868 ] ;
xx [ 226 ] = xx [ 604 ] ; xx [ 227 ] = xx [ 733 ] ; xx [ 228 ] = xx [ 677 ] ;
xx [ 229 ] = xx [ 678 ] ; xx [ 24 ] = xx [ 706 ] * xx [ 532 ] - xx [ 605 ] *
xx [ 686 ] ; xx [ 107 ] = xx [ 532 ] * xx [ 708 ] + xx [ 605 ] * xx [ 670 ] ;
xx [ 195 ] = xx [ 532 ] * xx [ 670 ] - xx [ 605 ] * xx [ 708 ] ; xx [ 200 ] =
xx [ 706 ] * xx [ 605 ] + xx [ 532 ] * xx [ 686 ] ; xx [ 230 ] = xx [ 24 ] ;
xx [ 231 ] = - xx [ 107 ] ; xx [ 232 ] = xx [ 195 ] ; xx [ 233 ] = xx [ 200 ]
; pm_math_quatCompose ( xx + 226 , xx + 230 , xx + 234 ) ; xx [ 211 ] = xx [
195 ] * xx [ 879 ] ; xx [ 216 ] = xx [ 879 ] * xx [ 107 ] ; xx [ 217 ] = xx [
80 ] * ( xx [ 24 ] * xx [ 211 ] + xx [ 216 ] * xx [ 200 ] ) ; xx [ 218 ] = xx
[ 706 ] * xx [ 881 ] ; xx [ 230 ] = xx [ 881 ] * xx [ 686 ] ; xx [ 231 ] = xx
[ 21 ] * xx [ 886 ] ; xx [ 232 ] = xx [ 21 ] * xx [ 887 ] ; xx [ 233 ] = xx [
886 ] - ( xx [ 21 ] * xx [ 231 ] - xx [ 25 ] * xx [ 232 ] ) * xx [ 80 ] ; xx
[ 239 ] = xx [ 887 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 231 ] + xx [ 21 ] * xx
[ 232 ] ) ; xx [ 231 ] = ( xx [ 211 ] * xx [ 200 ] - xx [ 24 ] * xx [ 216 ] )
* xx [ 80 ] ; xx [ 24 ] = ( xx [ 216 ] * xx [ 107 ] + xx [ 195 ] * xx [ 211 ]
) * xx [ 80 ] - xx [ 879 ] ; xx [ 240 ] = xx [ 217 ] + ( xx [ 218 ] * xx [
670 ] + xx [ 230 ] * xx [ 708 ] ) * xx [ 80 ] + xx [ 233 ] ; xx [ 241 ] = xx
[ 80 ] * ( xx [ 218 ] * xx [ 708 ] - xx [ 230 ] * xx [ 670 ] ) + xx [ 239 ] -
xx [ 231 ] ; xx [ 242 ] = xx [ 24 ] + xx [ 881 ] - ( xx [ 230 ] * xx [ 686 ]
+ xx [ 706 ] * xx [ 218 ] ) * xx [ 80 ] + xx [ 888 ] ; pm_math_cross3 ( xx +
240 , xx + 267 , xx + 247 ) ; pm_math_quatXform ( xx + 234 , xx + 247 , xx +
240 ) ; xx [ 107 ] = xx [ 10 ] * xx [ 612 ] ; xx [ 195 ] = xx [ 10 ] * xx [
678 ] ; xx [ 200 ] = xx [ 80 ] * xx [ 879 ] * ( xx [ 677 ] * xx [ 107 ] + xx
[ 604 ] * xx [ 195 ] ) ; xx [ 211 ] = xx [ 731 ] - xx [ 685 ] ; xx [ 247 ] =
xx [ 233 ] ; xx [ 248 ] = xx [ 239 ] ; xx [ 249 ] = xx [ 888 ] ;
pm_math_cross3 ( xx + 247 , xx + 126 , xx + 251 ) ; pm_math_quatXform ( xx +
725 , xx + 251 , xx + 247 ) ; xx [ 216 ] = xx [ 247 ] - xx [ 730 ] * xx [ 881
] ; xx [ 218 ] = xx [ 248 ] + xx [ 729 ] * xx [ 881 ] ; xx [ 230 ] = xx [ 218
] * xx [ 605 ] + xx [ 532 ] * xx [ 216 ] ; xx [ 232 ] = xx [ 684 ] * xx [ 532
] - xx [ 685 ] * xx [ 605 ] ; xx [ 233 ] = xx [ 605 ] * xx [ 730 ] + xx [ 729
] * xx [ 532 ] ; xx [ 239 ] = ( xx [ 730 ] + xx [ 80 ] * xx [ 232 ] * xx [
605 ] - xx [ 80 ] * xx [ 233 ] * xx [ 605 ] + xx [ 685 ] ) * xx [ 879 ] ; xx
[ 251 ] = xx [ 737 ] - xx [ 684 ] ; xx [ 252 ] = ( xx [ 729 ] + xx [ 80 ] *
xx [ 232 ] * xx [ 532 ] - xx [ 80 ] * xx [ 233 ] * xx [ 532 ] + xx [ 196 ] )
* xx [ 879 ] ; xx [ 258 ] = xx [ 881 ] * xx [ 211 ] + xx [ 216 ] - xx [ 80 ]
* xx [ 230 ] * xx [ 532 ] + xx [ 239 ] ; xx [ 259 ] = xx [ 881 ] * xx [ 251 ]
+ xx [ 218 ] - xx [ 80 ] * xx [ 230 ] * xx [ 605 ] - xx [ 252 ] ; xx [ 260 ]
= xx [ 249 ] - ( xx [ 605 ] * xx [ 605 ] * xx [ 249 ] + xx [ 249 ] * xx [ 532
] * xx [ 532 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 226 , xx + 258 , xx +
247 ) ; xx [ 196 ] = xx [ 640 ] * xx [ 19 ] - xx [ 15 ] * xx [ 639 ] ; xx [
216 ] = xx [ 641 ] * xx [ 19 ] - xx [ 15 ] * xx [ 638 ] ; xx [ 218 ] = xx [
638 ] * xx [ 19 ] + xx [ 15 ] * xx [ 641 ] ; xx [ 230 ] = xx [ 15 ] * xx [
640 ] + xx [ 639 ] * xx [ 19 ] ; xx [ 262 ] = - xx [ 196 ] ; xx [ 263 ] = xx
[ 216 ] ; xx [ 264 ] = xx [ 218 ] ; xx [ 265 ] = - xx [ 230 ] ;
pm_math_quatCompose ( xx + 72 , xx + 262 , xx + 277 ) ; xx [ 232 ] = xx [ 218
] * xx [ 816 ] ; xx [ 233 ] = xx [ 816 ] * xx [ 216 ] ; xx [ 253 ] = xx [ 80
] * ( xx [ 232 ] * xx [ 196 ] - xx [ 230 ] * xx [ 233 ] ) ; xx [ 254 ] = xx [
639 ] * xx [ 818 ] ; xx [ 258 ] = xx [ 640 ] * xx [ 818 ] ;
pm_math_quatInverseXform ( xx + 630 , xx + 81 , xx + 262 ) ;
pm_math_quatInverseXform ( xx + 626 , xx + 830 , xx + 281 ) ; xx [ 259 ] = xx
[ 546 ] * xx [ 23 ] ; xx [ 260 ] = xx [ 23 ] * xx [ 379 ] - xx [ 87 ] * xx [
473 ] ; xx [ 265 ] = xx [ 546 ] * xx [ 87 ] ; xx [ 284 ] = - xx [ 259 ] ; xx
[ 285 ] = xx [ 260 ] ; xx [ 286 ] = xx [ 265 ] ; pm_math_cross3 ( xx + 601 ,
xx + 284 , xx + 287 ) ; xx [ 266 ] = ( xx [ 233 ] * xx [ 196 ] + xx [ 230 ] *
xx [ 232 ] ) * xx [ 80 ] ; xx [ 196 ] = xx [ 816 ] - ( xx [ 233 ] * xx [ 216
] + xx [ 218 ] * xx [ 232 ] ) * xx [ 80 ] ; xx [ 284 ] = xx [ 253 ] + xx [ 80
] * ( xx [ 641 ] * xx [ 254 ] - xx [ 638 ] * xx [ 258 ] ) + xx [ 262 ] + xx [
281 ] + xx [ 80 ] * ( xx [ 287 ] + xx [ 312 ] * xx [ 259 ] ) - xx [ 87 ] ; xx
[ 285 ] = ( xx [ 638 ] * xx [ 254 ] + xx [ 641 ] * xx [ 258 ] ) * xx [ 80 ] +
xx [ 263 ] + xx [ 282 ] + xx [ 80 ] * ( xx [ 288 ] - xx [ 312 ] * xx [ 260 ]
) - xx [ 266 ] ; xx [ 286 ] = xx [ 196 ] + xx [ 818 ] - ( xx [ 639 ] * xx [
254 ] + xx [ 640 ] * xx [ 258 ] ) * xx [ 80 ] + xx [ 264 ] + xx [ 283 ] + (
xx [ 289 ] - xx [ 312 ] * xx [ 265 ] ) * xx [ 80 ] - xx [ 23 ] - xx [ 842 ] ;
pm_math_cross3 ( xx + 284 , xx + 84 , xx + 258 ) ; pm_math_quatXform ( xx +
277 , xx + 258 , xx + 262 ) ; xx [ 258 ] = xx [ 611 ] * xx [ 842 ] - xx [ 635
] * xx [ 23 ] ; xx [ 259 ] = xx [ 535 ] * xx [ 842 ] + xx [ 23 ] * xx [ 463 ]
+ xx [ 87 ] * xx [ 446 ] ; xx [ 260 ] = xx [ 80 ] * xx [ 506 ] * xx [ 842 ] +
xx [ 635 ] * xx [ 87 ] ; pm_math_quatXform ( xx + 140 , xx + 258 , xx + 281 )
; pm_math_cross3 ( xx + 830 , xx + 595 , xx + 258 ) ; xx [ 284 ] = xx [ 65 ]
+ xx [ 281 ] + xx [ 258 ] ; xx [ 285 ] = xx [ 61 ] + xx [ 282 ] + xx [ 259 ]
; xx [ 286 ] = xx [ 283 ] - xx [ 67 ] + xx [ 260 ] ; pm_math_quatXform ( xx +
68 , xx + 284 , xx + 258 ) ; pm_math_cross3 ( xx + 81 , xx + 644 , xx + 281 )
; xx [ 284 ] = xx [ 149 ] + xx [ 258 ] + xx [ 281 ] ; xx [ 285 ] = xx [ 150 ]
+ xx [ 259 ] + xx [ 282 ] ; xx [ 286 ] = xx [ 151 ] + xx [ 260 ] + xx [ 283 ]
; pm_math_quatXform ( xx + 42 , xx + 284 , xx + 258 ) ; xx [ 216 ] = xx [ 144
] + xx [ 258 ] - xx [ 634 ] * xx [ 818 ] ; xx [ 218 ] = xx [ 145 ] + xx [ 259
] + xx [ 636 ] * xx [ 818 ] ; xx [ 230 ] = xx [ 218 ] * xx [ 15 ] + xx [ 19 ]
* xx [ 216 ] ; xx [ 232 ] = xx [ 634 ] * xx [ 15 ] + xx [ 636 ] * xx [ 19 ] ;
xx [ 233 ] = xx [ 816 ] * ( xx [ 634 ] - xx [ 80 ] * xx [ 232 ] * xx [ 15 ] +
xx [ 123 ] ) ; xx [ 254 ] = ( xx [ 636 ] - xx [ 80 ] * xx [ 232 ] * xx [ 19 ]
+ xx [ 147 ] ) * xx [ 816 ] ; xx [ 232 ] = xx [ 146 ] + xx [ 260 ] ; xx [ 258
] = xx [ 64 ] + xx [ 216 ] - xx [ 80 ] * xx [ 230 ] * xx [ 19 ] - xx [ 233 ]
; xx [ 259 ] = xx [ 131 ] + xx [ 218 ] - xx [ 80 ] * xx [ 230 ] * xx [ 15 ] +
xx [ 254 ] ; xx [ 260 ] = xx [ 232 ] - ( xx [ 15 ] * xx [ 232 ] * xx [ 15 ] +
xx [ 232 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx +
72 , xx + 258 , xx + 281 ) ; xx [ 216 ] = xx [ 879 ] * ( ( xx [ 195 ] * xx [
678 ] + xx [ 107 ] * xx [ 612 ] ) * xx [ 80 ] - xx [ 10 ] ) ; xx [ 218 ] = xx
[ 80 ] * ( xx [ 604 ] * xx [ 107 ] - xx [ 677 ] * xx [ 195 ] ) * xx [ 879 ] ;
xx [ 284 ] = xx [ 672 ] ; xx [ 285 ] = xx [ 784 ] ; xx [ 286 ] = xx [ 741 ] ;
xx [ 287 ] = xx [ 785 ] ; xx [ 107 ] = xx [ 745 ] * xx [ 643 ] - xx [ 660 ] *
xx [ 743 ] ; xx [ 195 ] = xx [ 643 ] * xx [ 753 ] + xx [ 660 ] * xx [ 720 ] ;
xx [ 230 ] = xx [ 643 ] * xx [ 720 ] - xx [ 660 ] * xx [ 753 ] ; xx [ 232 ] =
xx [ 745 ] * xx [ 660 ] + xx [ 643 ] * xx [ 743 ] ; xx [ 288 ] = xx [ 107 ] ;
xx [ 289 ] = - xx [ 195 ] ; xx [ 290 ] = xx [ 230 ] ; xx [ 291 ] = xx [ 232 ]
; pm_math_quatCompose ( xx + 284 , xx + 288 , xx + 292 ) ; xx [ 258 ] = xx [
230 ] * xx [ 805 ] ; xx [ 259 ] = xx [ 805 ] * xx [ 195 ] ; xx [ 260 ] = xx [
80 ] * ( xx [ 107 ] * xx [ 258 ] + xx [ 259 ] * xx [ 232 ] ) ; xx [ 265 ] =
xx [ 745 ] * xx [ 807 ] ; xx [ 270 ] = xx [ 807 ] * xx [ 743 ] ; xx [ 288 ] =
xx [ 21 ] * xx [ 812 ] ; xx [ 289 ] = xx [ 21 ] * xx [ 813 ] ; xx [ 290 ] =
xx [ 812 ] - ( xx [ 21 ] * xx [ 288 ] - xx [ 25 ] * xx [ 289 ] ) * xx [ 80 ]
; xx [ 291 ] = xx [ 813 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 288 ] + xx [ 21 ]
* xx [ 289 ] ) ; xx [ 288 ] = ( xx [ 258 ] * xx [ 232 ] - xx [ 107 ] * xx [
259 ] ) * xx [ 80 ] ; xx [ 107 ] = ( xx [ 259 ] * xx [ 195 ] + xx [ 230 ] *
xx [ 258 ] ) * xx [ 80 ] - xx [ 805 ] ; xx [ 296 ] = xx [ 260 ] + ( xx [ 265
] * xx [ 720 ] + xx [ 270 ] * xx [ 753 ] ) * xx [ 80 ] + xx [ 290 ] ; xx [
297 ] = xx [ 80 ] * ( xx [ 265 ] * xx [ 753 ] - xx [ 270 ] * xx [ 720 ] ) +
xx [ 291 ] - xx [ 288 ] ; xx [ 298 ] = xx [ 107 ] + xx [ 807 ] - ( xx [ 270 ]
* xx [ 743 ] + xx [ 745 ] * xx [ 265 ] ) * xx [ 80 ] + xx [ 814 ] ;
pm_math_cross3 ( xx + 296 , xx + 267 , xx + 307 ) ; pm_math_quatXform ( xx +
292 , xx + 307 , xx + 296 ) ; xx [ 195 ] = xx [ 10 ] * xx [ 671 ] ; xx [ 230
] = xx [ 10 ] * xx [ 742 ] ; xx [ 232 ] = xx [ 80 ] * xx [ 805 ] * ( xx [ 741
] * xx [ 195 ] - xx [ 672 ] * xx [ 230 ] ) ; xx [ 307 ] = xx [ 290 ] ; xx [
308 ] = xx [ 291 ] ; xx [ 309 ] = xx [ 814 ] ; pm_math_cross3 ( xx + 307 , xx
+ 126 , xx + 289 ) ; pm_math_quatXform ( xx + 777 , xx + 289 , xx + 307 ) ;
xx [ 258 ] = xx [ 307 ] - xx [ 782 ] * xx [ 807 ] ; xx [ 259 ] = xx [ 308 ] +
xx [ 781 ] * xx [ 807 ] ; xx [ 265 ] = xx [ 259 ] * xx [ 660 ] + xx [ 643 ] *
xx [ 258 ] ; xx [ 270 ] = xx [ 747 ] + xx [ 776 ] ; xx [ 289 ] = xx [ 747 ] *
xx [ 660 ] + xx [ 746 ] * xx [ 643 ] ; xx [ 290 ] = xx [ 660 ] * xx [ 782 ] +
xx [ 781 ] * xx [ 643 ] ; xx [ 291 ] = ( xx [ 782 ] - xx [ 80 ] * xx [ 289 ]
* xx [ 660 ] - xx [ 80 ] * xx [ 290 ] * xx [ 660 ] + xx [ 747 ] ) * xx [ 805
] ; xx [ 299 ] = xx [ 746 ] - xx [ 789 ] ; xx [ 304 ] = ( xx [ 781 ] - xx [
80 ] * xx [ 289 ] * xx [ 643 ] - xx [ 80 ] * xx [ 290 ] * xx [ 643 ] + xx [
194 ] ) * xx [ 805 ] ; xx [ 315 ] = xx [ 258 ] - xx [ 80 ] * xx [ 265 ] * xx
[ 643 ] - xx [ 807 ] * xx [ 270 ] + xx [ 291 ] ; xx [ 316 ] = xx [ 807 ] * xx
[ 299 ] + xx [ 259 ] - xx [ 80 ] * xx [ 265 ] * xx [ 660 ] - xx [ 304 ] ; xx
[ 317 ] = xx [ 309 ] - ( xx [ 660 ] * xx [ 660 ] * xx [ 309 ] + xx [ 309 ] *
xx [ 643 ] * xx [ 643 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 284 , xx +
315 , xx + 307 ) ; xx [ 194 ] = xx [ 917 ] * xx [ 19 ] - xx [ 15 ] * xx [ 916
] ; xx [ 258 ] = xx [ 918 ] * xx [ 19 ] - xx [ 15 ] * xx [ 915 ] ; xx [ 259 ]
= xx [ 915 ] * xx [ 19 ] + xx [ 15 ] * xx [ 918 ] ; xx [ 265 ] = xx [ 15 ] *
xx [ 917 ] + xx [ 916 ] * xx [ 19 ] ; xx [ 315 ] = - xx [ 194 ] ; xx [ 316 ]
= xx [ 258 ] ; xx [ 317 ] = xx [ 259 ] ; xx [ 318 ] = - xx [ 265 ] ;
pm_math_quatCompose ( xx + 72 , xx + 315 , xx + 319 ) ; xx [ 289 ] = xx [ 259
] * xx [ 816 ] ; xx [ 290 ] = xx [ 816 ] * xx [ 258 ] ; xx [ 310 ] = xx [ 80
] * ( xx [ 289 ] * xx [ 194 ] - xx [ 265 ] * xx [ 290 ] ) ; xx [ 311 ] = xx [
916 ] * xx [ 818 ] ; xx [ 315 ] = xx [ 917 ] * xx [ 818 ] ;
pm_math_quatInverseXform ( xx + 911 , xx + 81 , xx + 316 ) ;
pm_math_quatInverseXform ( xx + 897 , xx + 830 , xx + 327 ) ; xx [ 323 ] = xx
[ 87 ] * xx [ 637 ] ; xx [ 330 ] = ( xx [ 290 ] * xx [ 194 ] + xx [ 265 ] *
xx [ 289 ] ) * xx [ 80 ] ; xx [ 194 ] = xx [ 816 ] - ( xx [ 290 ] * xx [ 258
] + xx [ 259 ] * xx [ 289 ] ) * xx [ 80 ] ; xx [ 350 ] = xx [ 310 ] + xx [ 80
] * ( xx [ 918 ] * xx [ 311 ] - xx [ 915 ] * xx [ 315 ] ) + xx [ 316 ] + xx [
327 ] + xx [ 80 ] * xx [ 323 ] * xx [ 637 ] - xx [ 87 ] ; xx [ 351 ] = ( xx [
915 ] * xx [ 311 ] + xx [ 918 ] * xx [ 315 ] ) * xx [ 80 ] + xx [ 317 ] + xx
[ 328 ] - xx [ 80 ] * xx [ 2 ] * xx [ 323 ] - xx [ 330 ] ; xx [ 352 ] = xx [
194 ] + xx [ 818 ] - ( xx [ 916 ] * xx [ 311 ] + xx [ 917 ] * xx [ 315 ] ) *
xx [ 80 ] + xx [ 318 ] + xx [ 329 ] - ( xx [ 23 ] + xx [ 844 ] ) ;
pm_math_cross3 ( xx + 350 , xx + 84 , xx + 315 ) ; pm_math_quatXform ( xx +
319 , xx + 315 , xx + 327 ) ; xx [ 315 ] = xx [ 17 ] * xx [ 844 ] - xx [ 23 ]
* xx [ 66 ] ; xx [ 316 ] = - ( xx [ 844 ] * xx [ 20 ] + xx [ 23 ] * xx [ 707
] + xx [ 790 ] * xx [ 87 ] ) ; xx [ 317 ] = xx [ 87 ] * xx [ 66 ] ;
pm_math_quatXform ( xx + 140 , xx + 315 , xx + 350 ) ; pm_math_cross3 ( xx +
830 , xx + 891 , xx + 315 ) ; xx [ 353 ] = xx [ 65 ] + xx [ 350 ] + xx [ 315
] ; xx [ 354 ] = xx [ 61 ] + xx [ 351 ] + xx [ 316 ] ; xx [ 355 ] = xx [ 352
] - xx [ 67 ] + xx [ 317 ] ; pm_math_quatXform ( xx + 68 , xx + 353 , xx +
315 ) ; pm_math_cross3 ( xx + 81 , xx + 919 , xx + 350 ) ; xx [ 81 ] = xx [
149 ] + xx [ 315 ] + xx [ 350 ] ; xx [ 82 ] = xx [ 150 ] + xx [ 316 ] + xx [
351 ] ; xx [ 83 ] = xx [ 151 ] + xx [ 317 ] + xx [ 352 ] ; pm_math_quatXform
( xx + 42 , xx + 81 , xx + 149 ) ; xx [ 23 ] = xx [ 144 ] + xx [ 149 ] - xx [
121 ] * xx [ 818 ] ; xx [ 61 ] = xx [ 145 ] + xx [ 150 ] + xx [ 148 ] * xx [
818 ] ; xx [ 65 ] = xx [ 61 ] * xx [ 15 ] + xx [ 19 ] * xx [ 23 ] ; xx [ 67 ]
= xx [ 121 ] * xx [ 15 ] + xx [ 148 ] * xx [ 19 ] ; xx [ 81 ] = xx [ 816 ] *
( xx [ 121 ] - xx [ 80 ] * xx [ 67 ] * xx [ 15 ] + xx [ 123 ] ) ; xx [ 82 ] =
( xx [ 148 ] - xx [ 80 ] * xx [ 67 ] * xx [ 19 ] + xx [ 147 ] ) * xx [ 816 ]
; xx [ 67 ] = xx [ 146 ] + xx [ 151 ] ; xx [ 144 ] = xx [ 64 ] + xx [ 23 ] -
xx [ 80 ] * xx [ 65 ] * xx [ 19 ] - xx [ 81 ] ; xx [ 145 ] = xx [ 131 ] + xx
[ 61 ] - xx [ 80 ] * xx [ 65 ] * xx [ 15 ] + xx [ 82 ] ; xx [ 146 ] = xx [ 67
] - ( xx [ 15 ] * xx [ 67 ] * xx [ 15 ] + xx [ 67 ] * xx [ 19 ] * xx [ 19 ] )
* xx [ 80 ] ; pm_math_quatXform ( xx + 72 , xx + 144 , xx + 149 ) ; xx [ 23 ]
= xx [ 805 ] * ( ( xx [ 230 ] * xx [ 742 ] + xx [ 195 ] * xx [ 671 ] ) * xx [
80 ] - xx [ 10 ] ) ; xx [ 10 ] = xx [ 80 ] * ( xx [ 672 ] * xx [ 195 ] + xx [
741 ] * xx [ 230 ] ) * xx [ 805 ] ; xx [ 350 ] = xx [ 46 ] + xx [ 4 ] + xx [
49 ] - ( xx [ 104 ] + xx [ 34 ] + xx [ 77 ] ) ; xx [ 351 ] = xx [ 47 ] + xx [
96 ] + xx [ 50 ] - ( xx [ 105 ] + xx [ 90 ] + xx [ 78 ] ) ; xx [ 352 ] = xx [
48 ] + xx [ 6 ] + xx [ 51 ] - ( xx [ 106 ] + xx [ 1 ] + xx [ 79 ] ) ; xx [
353 ] = xx [ 164 ] + xx [ 31 ] + xx [ 167 ] - ( xx [ 179 ] + xx [ 34 ] + xx [
183 ] ) ; xx [ 354 ] = xx [ 165 ] + xx [ 39 ] + xx [ 168 ] - ( xx [ 180 ] +
xx [ 90 ] + xx [ 184 ] ) ; xx [ 355 ] = xx [ 166 ] + xx [ 103 ] + xx [ 169 ]
- ( xx [ 181 ] + xx [ 1 ] + xx [ 185 ] ) ; xx [ 356 ] = xx [ 197 ] + xx [ 205
] - xx [ 111 ] - ( xx [ 219 ] + xx [ 34 ] + xx [ 222 ] ) ; xx [ 357 ] = xx [
198 ] + xx [ 130 ] + xx [ 206 ] - ( xx [ 220 ] + xx [ 90 ] + xx [ 223 ] ) ;
xx [ 358 ] = xx [ 199 ] + xx [ 173 ] + xx [ 207 ] - ( xx [ 221 ] + xx [ 1 ] +
xx [ 224 ] ) ; xx [ 359 ] = xx [ 240 ] + xx [ 200 ] + xx [ 247 ] - ( xx [ 262
] + xx [ 34 ] + xx [ 281 ] ) ; xx [ 360 ] = xx [ 241 ] + xx [ 216 ] + xx [
248 ] - ( xx [ 263 ] + xx [ 90 ] + xx [ 282 ] ) ; xx [ 361 ] = xx [ 242 ] +
xx [ 218 ] + xx [ 249 ] - ( xx [ 264 ] + xx [ 1 ] + xx [ 283 ] ) ; xx [ 362 ]
= xx [ 296 ] + xx [ 232 ] + xx [ 307 ] - ( xx [ 327 ] + xx [ 34 ] + xx [ 149
] ) ; xx [ 363 ] = xx [ 297 ] + xx [ 23 ] + xx [ 308 ] - ( xx [ 328 ] + xx [
90 ] + xx [ 150 ] ) ; xx [ 364 ] = xx [ 298 ] + xx [ 10 ] + xx [ 309 ] - ( xx
[ 329 ] + xx [ 1 ] + xx [ 151 ] ) ; memcpy ( xx + 1469 , xx + 941 , 495 *
sizeof ( double ) ) ; factorAndSolveWide ( 15 , 33 , xx + 1469 , xx + 402 ,
xx + 514 , ii + 0 , xx + 350 , xx [ 16 ] , xx + 1436 ) ; xx [ 16 ] = xx [ 807
] + xx [ 1436 ] ; xx [ 46 ] = xx [ 812 ] + xx [ 1437 ] ; xx [ 47 ] = xx [ 813
] + xx [ 1438 ] ; xx [ 48 ] = xx [ 814 ] + xx [ 1439 ] ; xx [ 49 ] = xx [ 818
] + xx [ 1440 ] ; xx [ 50 ] = xx [ 823 ] + xx [ 1441 ] ; xx [ 51 ] = xx [ 824
] + xx [ 1442 ] ; xx [ 61 ] = xx [ 825 ] + xx [ 1443 ] ; xx [ 64 ] = xx [ 830
] + xx [ 1444 ] ; xx [ 65 ] = xx [ 831 ] + xx [ 1445 ] ; xx [ 67 ] = xx [ 832
] + xx [ 1446 ] ; xx [ 77 ] = xx [ 834 ] + xx [ 1447 ] ; xx [ 78 ] = xx [ 836
] + xx [ 1448 ] ; xx [ 79 ] = xx [ 838 ] + xx [ 1449 ] ; xx [ 83 ] = xx [ 840
] + xx [ 1450 ] ; xx [ 87 ] = xx [ 842 ] + xx [ 1451 ] ; xx [ 104 ] = xx [
844 ] + xx [ 1452 ] ; xx [ 105 ] = xx [ 848 ] + xx [ 1453 ] ; xx [ 106 ] = xx
[ 853 ] + xx [ 1454 ] ; xx [ 123 ] = xx [ 854 ] + xx [ 1455 ] ; xx [ 131 ] =
xx [ 855 ] + xx [ 1456 ] ; xx [ 144 ] = xx [ 859 ] + xx [ 1457 ] ; xx [ 145 ]
= xx [ 864 ] + xx [ 1458 ] ; xx [ 146 ] = xx [ 865 ] + xx [ 1459 ] ; xx [ 147
] = xx [ 866 ] + xx [ 1460 ] ; xx [ 149 ] = xx [ 870 ] + xx [ 1461 ] ; xx [
150 ] = xx [ 875 ] + xx [ 1462 ] ; xx [ 151 ] = xx [ 876 ] + xx [ 1463 ] ; xx
[ 164 ] = xx [ 877 ] + xx [ 1464 ] ; xx [ 165 ] = xx [ 881 ] + xx [ 1465 ] ;
xx [ 166 ] = xx [ 886 ] + xx [ 1466 ] ; xx [ 167 ] = xx [ 887 ] + xx [ 1467 ]
; xx [ 168 ] = xx [ 888 ] + xx [ 1468 ] ; xx [ 922 ] = xx [ 792 ] ; xx [ 923
] = xx [ 793 ] ; xx [ 924 ] = xx [ 794 ] ; xx [ 925 ] = xx [ 795 ] ; xx [ 926
] = xx [ 796 ] ; xx [ 927 ] = xx [ 797 ] ; xx [ 928 ] = xx [ 798 ] ; xx [ 929
] = xx [ 799 ] ; xx [ 930 ] = xx [ 800 ] ; xx [ 931 ] = xx [ 801 ] ; xx [ 932
] = xx [ 802 ] ; xx [ 933 ] = xx [ 803 ] ; xx [ 934 ] = xx [ 804 ] ; xx [ 935
] = xx [ 805 ] ; xx [ 936 ] = xx [ 806 ] ; xx [ 937 ] = xx [ 16 ] ; xx [ 938
] = xx [ 808 ] ; xx [ 939 ] = xx [ 809 ] ; xx [ 940 ] = xx [ 810 ] ; xx [ 941
] = xx [ 811 ] ; xx [ 942 ] = xx [ 46 ] ; xx [ 943 ] = xx [ 47 ] ; xx [ 944 ]
= xx [ 48 ] ; xx [ 945 ] = xx [ 815 ] ; xx [ 946 ] = xx [ 816 ] ; xx [ 947 ]
= xx [ 817 ] ; xx [ 948 ] = xx [ 49 ] ; xx [ 949 ] = xx [ 819 ] ; xx [ 950 ]
= xx [ 820 ] ; xx [ 951 ] = xx [ 821 ] ; xx [ 952 ] = xx [ 822 ] ; xx [ 953 ]
= xx [ 50 ] ; xx [ 954 ] = xx [ 51 ] ; xx [ 955 ] = xx [ 61 ] ; xx [ 956 ] =
xx [ 826 ] ; xx [ 957 ] = xx [ 827 ] ; xx [ 958 ] = xx [ 828 ] ; xx [ 959 ] =
xx [ 829 ] ; xx [ 960 ] = xx [ 64 ] ; xx [ 961 ] = xx [ 65 ] ; xx [ 962 ] =
xx [ 67 ] ; xx [ 963 ] = xx [ 833 ] ; xx [ 964 ] = xx [ 77 ] ; xx [ 965 ] =
xx [ 835 ] ; xx [ 966 ] = xx [ 78 ] ; xx [ 967 ] = xx [ 837 ] ; xx [ 968 ] =
xx [ 79 ] ; xx [ 969 ] = xx [ 839 ] ; xx [ 970 ] = xx [ 83 ] ; xx [ 971 ] =
xx [ 841 ] ; xx [ 972 ] = xx [ 87 ] ; xx [ 973 ] = xx [ 843 ] ; xx [ 974 ] =
xx [ 104 ] ; xx [ 975 ] = xx [ 845 ] ; xx [ 976 ] = xx [ 846 ] ; xx [ 977 ] =
xx [ 847 ] ; xx [ 978 ] = xx [ 105 ] ; xx [ 979 ] = xx [ 849 ] ; xx [ 980 ] =
xx [ 850 ] ; xx [ 981 ] = xx [ 851 ] ; xx [ 982 ] = xx [ 852 ] ; xx [ 983 ] =
xx [ 106 ] ; xx [ 984 ] = xx [ 123 ] ; xx [ 985 ] = xx [ 131 ] ; xx [ 986 ] =
xx [ 856 ] ; xx [ 987 ] = xx [ 857 ] ; xx [ 988 ] = xx [ 858 ] ; xx [ 989 ] =
xx [ 144 ] ; xx [ 990 ] = xx [ 860 ] ; xx [ 991 ] = xx [ 861 ] ; xx [ 992 ] =
xx [ 862 ] ; xx [ 993 ] = xx [ 863 ] ; xx [ 994 ] = xx [ 145 ] ; xx [ 995 ] =
xx [ 146 ] ; xx [ 996 ] = xx [ 147 ] ; xx [ 997 ] = xx [ 867 ] ; xx [ 998 ] =
xx [ 868 ] ; xx [ 999 ] = xx [ 869 ] ; xx [ 1000 ] = xx [ 149 ] ; xx [ 1001 ]
= xx [ 871 ] ; xx [ 1002 ] = xx [ 872 ] ; xx [ 1003 ] = xx [ 873 ] ; xx [
1004 ] = xx [ 874 ] ; xx [ 1005 ] = xx [ 150 ] ; xx [ 1006 ] = xx [ 151 ] ;
xx [ 1007 ] = xx [ 164 ] ; xx [ 1008 ] = xx [ 878 ] ; xx [ 1009 ] = xx [ 879
] ; xx [ 1010 ] = xx [ 880 ] ; xx [ 1011 ] = xx [ 165 ] ; xx [ 1012 ] = xx [
882 ] ; xx [ 1013 ] = xx [ 883 ] ; xx [ 1014 ] = xx [ 884 ] ; xx [ 1015 ] =
xx [ 885 ] ; xx [ 1016 ] = xx [ 166 ] ; xx [ 1017 ] = xx [ 167 ] ; xx [ 1018
] = xx [ 168 ] ; xx [ 169 ] = xx [ 49 ] * xx [ 137 ] ; xx [ 179 ] = xx [ 49 ]
* xx [ 138 ] ; xx [ 180 ] = xx [ 50 ] * xx [ 21 ] ; xx [ 181 ] = xx [ 51 ] *
xx [ 21 ] ; xx [ 183 ] = xx [ 50 ] - ( xx [ 21 ] * xx [ 180 ] - xx [ 25 ] *
xx [ 181 ] ) * xx [ 80 ] ; xx [ 184 ] = xx [ 51 ] - xx [ 80 ] * ( xx [ 25 ] *
xx [ 180 ] + xx [ 21 ] * xx [ 181 ] ) ; xx [ 185 ] = xx [ 61 ] ;
pm_math_quatInverseXform ( xx + 97 , xx + 183 , xx + 197 ) ; xx [ 97 ] = xx [
64 ] ; xx [ 98 ] = xx [ 65 ] ; xx [ 99 ] = xx [ 67 ] ;
pm_math_quatInverseXform ( xx + 91 , xx + 97 , xx + 205 ) ; xx [ 50 ] = xx [
77 ] * xx [ 57 ] ; xx [ 51 ] = xx [ 50 ] * xx [ 76 ] ; xx [ 57 ] = xx [ 77 ]
* xx [ 63 ] ; xx [ 63 ] = xx [ 59 ] + xx [ 80 ] * ( xx [ 139 ] * xx [ 169 ] -
xx [ 136 ] * xx [ 179 ] ) + xx [ 197 ] + xx [ 205 ] + xx [ 80 ] * xx [ 51 ] *
xx [ 76 ] - xx [ 50 ] ; xx [ 64 ] = ( xx [ 136 ] * xx [ 169 ] + xx [ 139 ] *
xx [ 179 ] ) * xx [ 80 ] + xx [ 198 ] + xx [ 206 ] - xx [ 80 ] * xx [ 52 ] *
xx [ 51 ] - xx [ 102 ] ; xx [ 65 ] = xx [ 18 ] + xx [ 49 ] - ( xx [ 137 ] *
xx [ 169 ] + xx [ 138 ] * xx [ 179 ] ) * xx [ 80 ] + xx [ 199 ] + xx [ 207 ]
- ( xx [ 57 ] + xx [ 78 ] ) ; pm_math_cross3 ( xx + 63 , xx + 84 , xx + 91 )
; pm_math_quatXform ( xx + 117 , xx + 91 , xx + 63 ) ; xx [ 18 ] = xx [ 49 ]
* xx [ 55 ] ; pm_math_cross3 ( xx + 183 , xx + 126 , xx + 91 ) ;
pm_math_quatXform ( xx + 42 , xx + 91 , xx + 117 ) ; pm_math_cross3 ( xx + 97
, xx + 112 , xx + 91 ) ; pm_math_quatXform ( xx + 68 , xx + 91 , xx + 112 ) ;
xx [ 51 ] = xx [ 77 ] * xx [ 60 ] ; xx [ 59 ] = xx [ 8 ] * xx [ 78 ] - xx [
57 ] * xx [ 88 ] ; xx [ 60 ] = xx [ 78 ] * xx [ 11 ] + xx [ 57 ] * xx [ 101 ]
- xx [ 95 ] * xx [ 50 ] ; xx [ 61 ] = xx [ 50 ] * xx [ 88 ] ;
pm_math_quatXform ( xx + 140 , xx + 59 , xx + 91 ) ; pm_math_cross3 ( xx + 97
, xx + 108 , xx + 59 ) ; xx [ 8 ] = xx [ 77 ] * xx [ 58 ] ; xx [ 11 ] = xx [
77 ] * xx [ 40 ] ; xx [ 76 ] = xx [ 51 ] + xx [ 91 ] + xx [ 59 ] ; xx [ 77 ]
= xx [ 8 ] + xx [ 92 ] + xx [ 60 ] ; xx [ 78 ] = xx [ 93 ] - xx [ 11 ] + xx [
61 ] ; pm_math_quatXform ( xx + 68 , xx + 76 , xx + 58 ) ; pm_math_cross3 (
xx + 183 , xx + 132 , xx + 76 ) ; xx [ 91 ] = xx [ 112 ] + xx [ 58 ] + xx [
76 ] ; xx [ 92 ] = xx [ 113 ] + xx [ 59 ] + xx [ 77 ] ; xx [ 93 ] = xx [ 114
] + xx [ 60 ] + xx [ 78 ] ; pm_math_quatXform ( xx + 42 , xx + 91 , xx + 58 )
; xx [ 40 ] = xx [ 117 ] + xx [ 58 ] - xx [ 49 ] * xx [ 124 ] ; xx [ 52 ] =
xx [ 118 ] + xx [ 59 ] + xx [ 49 ] * xx [ 125 ] ; xx [ 55 ] = xx [ 52 ] * xx
[ 15 ] + xx [ 19 ] * xx [ 40 ] ; xx [ 61 ] = xx [ 49 ] * xx [ 135 ] ; xx [ 58
] = xx [ 119 ] + xx [ 60 ] ; xx [ 76 ] = xx [ 18 ] + xx [ 40 ] - xx [ 80 ] *
xx [ 55 ] * xx [ 19 ] - xx [ 129 ] ; xx [ 77 ] = xx [ 61 ] + xx [ 52 ] - xx [
80 ] * xx [ 55 ] * xx [ 15 ] + xx [ 9 ] ; xx [ 78 ] = xx [ 58 ] - ( xx [ 15 ]
* xx [ 58 ] * xx [ 15 ] + xx [ 58 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 72 , xx + 76 , xx + 58 ) ; xx [ 9 ] = xx [ 250 ] *
xx [ 144 ] ; xx [ 40 ] = xx [ 144 ] * xx [ 245 ] ; xx [ 52 ] = xx [ 145 ] *
xx [ 21 ] ; xx [ 55 ] = xx [ 146 ] * xx [ 21 ] ; xx [ 67 ] = xx [ 145 ] - (
xx [ 21 ] * xx [ 52 ] - xx [ 25 ] * xx [ 55 ] ) * xx [ 80 ] ; xx [ 76 ] = xx
[ 146 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 52 ] + xx [ 21 ] * xx [ 55 ] ) ; xx
[ 91 ] = xx [ 22 ] + ( xx [ 9 ] * xx [ 244 ] + xx [ 40 ] * xx [ 256 ] ) * xx
[ 80 ] + xx [ 67 ] ; xx [ 92 ] = xx [ 80 ] * ( xx [ 9 ] * xx [ 256 ] - xx [
40 ] * xx [ 244 ] ) + xx [ 76 ] - xx [ 32 ] ; xx [ 93 ] = xx [ 0 ] + xx [ 144
] - ( xx [ 40 ] * xx [ 245 ] + xx [ 250 ] * xx [ 9 ] ) * xx [ 80 ] + xx [ 147
] ; pm_math_cross3 ( xx + 91 , xx + 267 , xx + 100 ) ; pm_math_quatXform ( xx
+ 35 , xx + 100 , xx + 91 ) ; xx [ 35 ] = xx [ 67 ] ; xx [ 36 ] = xx [ 76 ] ;
xx [ 37 ] = xx [ 147 ] ; pm_math_cross3 ( xx + 35 , xx + 126 , xx + 76 ) ;
pm_math_quatXform ( xx + 271 , xx + 76 , xx + 35 ) ; xx [ 0 ] = xx [ 35 ] -
xx [ 144 ] * xx [ 276 ] ; xx [ 9 ] = xx [ 36 ] + xx [ 144 ] * xx [ 275 ] ; xx
[ 22 ] = xx [ 9 ] * xx [ 89 ] + xx [ 122 ] * xx [ 0 ] ; xx [ 76 ] = xx [ 144
] * xx [ 12 ] + xx [ 0 ] - xx [ 80 ] * xx [ 22 ] * xx [ 122 ] + xx [ 41 ] ;
xx [ 77 ] = xx [ 9 ] - xx [ 80 ] * xx [ 22 ] * xx [ 89 ] - xx [ 144 ] * xx [
53 ] - xx [ 54 ] ; xx [ 78 ] = xx [ 37 ] - ( xx [ 89 ] * xx [ 89 ] * xx [ 37
] + xx [ 37 ] * xx [ 122 ] * xx [ 122 ] ) * xx [ 80 ] ; pm_math_quatXform (
xx + 27 , xx + 76 , xx + 35 ) ; xx [ 0 ] = xx [ 49 ] * xx [ 340 ] ; xx [ 9 ]
= xx [ 49 ] * xx [ 341 ] ; pm_math_quatInverseXform ( xx + 335 , xx + 183 ,
xx + 27 ) ; pm_math_quatInverseXform ( xx + 331 , xx + 97 , xx + 52 ) ; xx [
12 ] = xx [ 57 ] * xx [ 261 ] ; xx [ 22 ] = xx [ 246 ] * xx [ 50 ] - xx [ 56
] * xx [ 57 ] ; xx [ 30 ] = xx [ 50 ] * xx [ 261 ] ; xx [ 76 ] = - xx [ 12 ]
; xx [ 77 ] = xx [ 22 ] ; xx [ 78 ] = xx [ 30 ] ; pm_math_cross3 ( xx + 300 ,
xx + 76 , xx + 100 ) ; xx [ 76 ] = xx [ 171 ] + xx [ 80 ] * ( xx [ 342 ] * xx
[ 0 ] - xx [ 339 ] * xx [ 9 ] ) + xx [ 27 ] + xx [ 52 ] + xx [ 80 ] * ( xx [
100 ] + xx [ 12 ] * xx [ 62 ] ) - xx [ 50 ] ; xx [ 77 ] = ( xx [ 339 ] * xx [
0 ] + xx [ 342 ] * xx [ 9 ] ) * xx [ 80 ] + xx [ 28 ] + xx [ 53 ] + xx [ 80 ]
* ( xx [ 101 ] - xx [ 62 ] * xx [ 22 ] ) - xx [ 187 ] ; xx [ 78 ] = xx [ 3 ]
+ xx [ 49 ] - ( xx [ 340 ] * xx [ 0 ] + xx [ 341 ] * xx [ 9 ] ) * xx [ 80 ] +
xx [ 29 ] + xx [ 54 ] + ( xx [ 102 ] - xx [ 30 ] * xx [ 62 ] ) * xx [ 80 ] -
xx [ 57 ] + xx [ 79 ] ; pm_math_cross3 ( xx + 76 , xx + 84 , xx + 27 ) ;
pm_math_quatXform ( xx + 175 , xx + 27 , xx + 52 ) ; xx [ 27 ] = xx [ 305 ] *
xx [ 79 ] - xx [ 344 ] * xx [ 57 ] ; xx [ 28 ] = xx [ 255 ] * xx [ 79 ] + xx
[ 50 ] * xx [ 243 ] - xx [ 57 ] * xx [ 238 ] ; xx [ 29 ] = xx [ 79 ] * xx [
257 ] + xx [ 344 ] * xx [ 50 ] ; pm_math_quatXform ( xx + 140 , xx + 27 , xx
+ 76 ) ; pm_math_cross3 ( xx + 97 , xx + 324 , xx + 27 ) ; xx [ 100 ] = xx [
51 ] + xx [ 76 ] + xx [ 27 ] ; xx [ 101 ] = xx [ 8 ] + xx [ 77 ] + xx [ 28 ]
; xx [ 102 ] = xx [ 78 ] - xx [ 11 ] + xx [ 29 ] ; pm_math_quatXform ( xx +
68 , xx + 100 , xx + 27 ) ; pm_math_cross3 ( xx + 183 , xx + 345 , xx + 76 )
; xx [ 100 ] = xx [ 112 ] + xx [ 27 ] + xx [ 76 ] ; xx [ 101 ] = xx [ 113 ] +
xx [ 28 ] + xx [ 77 ] ; xx [ 102 ] = xx [ 114 ] + xx [ 29 ] + xx [ 78 ] ;
pm_math_quatXform ( xx + 42 , xx + 100 , xx + 27 ) ; xx [ 0 ] = xx [ 117 ] +
xx [ 27 ] - xx [ 343 ] * xx [ 49 ] ; xx [ 3 ] = xx [ 118 ] + xx [ 28 ] + xx [
349 ] * xx [ 49 ] ; xx [ 9 ] = xx [ 3 ] * xx [ 15 ] + xx [ 19 ] * xx [ 0 ] ;
xx [ 12 ] = xx [ 119 ] + xx [ 29 ] ; xx [ 27 ] = xx [ 18 ] + xx [ 0 ] - xx [
80 ] * xx [ 9 ] * xx [ 19 ] - xx [ 115 ] ; xx [ 28 ] = xx [ 61 ] + xx [ 3 ] -
xx [ 80 ] * xx [ 9 ] * xx [ 15 ] + xx [ 182 ] ; xx [ 29 ] = xx [ 12 ] - ( xx
[ 15 ] * xx [ 12 ] * xx [ 15 ] + xx [ 12 ] * xx [ 19 ] * xx [ 19 ] ) * xx [
80 ] ; pm_math_quatXform ( xx + 72 , xx + 27 , xx + 76 ) ; xx [ 0 ] = xx [
393 ] * xx [ 105 ] ; xx [ 3 ] = xx [ 105 ] * xx [ 391 ] ; xx [ 9 ] = xx [ 106
] * xx [ 21 ] ; xx [ 12 ] = xx [ 123 ] * xx [ 21 ] ; xx [ 22 ] = xx [ 106 ] -
( xx [ 21 ] * xx [ 9 ] - xx [ 25 ] * xx [ 12 ] ) * xx [ 80 ] ; xx [ 27 ] = xx
[ 123 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 9 ] + xx [ 21 ] * xx [ 12 ] ) ; xx [
28 ] = ( xx [ 0 ] * xx [ 306 ] + xx [ 3 ] * xx [ 398 ] ) * xx [ 80 ] + xx [
22 ] - xx [ 157 ] ; xx [ 29 ] = xx [ 158 ] + xx [ 80 ] * ( xx [ 0 ] * xx [
398 ] - xx [ 3 ] * xx [ 306 ] ) + xx [ 27 ] ; xx [ 30 ] = xx [ 26 ] + xx [
105 ] - ( xx [ 3 ] * xx [ 391 ] + xx [ 393 ] * xx [ 0 ] ) * xx [ 80 ] + xx [
131 ] ; pm_math_cross3 ( xx + 28 , xx + 267 , xx + 100 ) ; pm_math_quatXform
( xx + 160 , xx + 100 , xx + 28 ) ; xx [ 100 ] = xx [ 22 ] ; xx [ 101 ] = xx
[ 27 ] ; xx [ 102 ] = xx [ 131 ] ; pm_math_cross3 ( xx + 100 , xx + 126 , xx
+ 108 ) ; pm_math_quatXform ( xx + 428 , xx + 108 , xx + 100 ) ; xx [ 0 ] =
xx [ 100 ] - xx [ 105 ] * xx [ 433 ] ; xx [ 3 ] = xx [ 101 ] + xx [ 105 ] *
xx [ 432 ] ; xx [ 9 ] = xx [ 3 ] * xx [ 313 ] + xx [ 383 ] * xx [ 0 ] ; xx [
108 ] = xx [ 105 ] * xx [ 33 ] + xx [ 0 ] - xx [ 80 ] * xx [ 9 ] * xx [ 383 ]
- xx [ 156 ] ; xx [ 109 ] = xx [ 105 ] * xx [ 159 ] + xx [ 3 ] - xx [ 80 ] *
xx [ 9 ] * xx [ 313 ] + xx [ 170 ] ; xx [ 110 ] = xx [ 102 ] - ( xx [ 313 ] *
xx [ 313 ] * xx [ 102 ] + xx [ 102 ] * xx [ 383 ] * xx [ 383 ] ) * xx [ 80 ]
; pm_math_quatXform ( xx + 152 , xx + 108 , xx + 100 ) ; xx [ 0 ] = xx [ 49 ]
* xx [ 489 ] ; xx [ 3 ] = xx [ 49 ] * xx [ 490 ] ; pm_math_quatInverseXform (
xx + 484 , xx + 183 , xx + 108 ) ; pm_math_quatInverseXform ( xx + 480 , xx +
97 , xx + 122 ) ; xx [ 9 ] = xx [ 440 ] * xx [ 57 ] ; xx [ 12 ] = xx [ 57 ] *
xx [ 303 ] - xx [ 50 ] * xx [ 400 ] ; xx [ 22 ] = xx [ 440 ] * xx [ 50 ] ; xx
[ 131 ] = xx [ 9 ] ; xx [ 132 ] = xx [ 12 ] ; xx [ 133 ] = - xx [ 22 ] ;
pm_math_cross3 ( xx + 441 , xx + 131 , xx + 134 ) ; xx [ 131 ] = xx [ 209 ] +
xx [ 80 ] * ( xx [ 491 ] * xx [ 0 ] - xx [ 488 ] * xx [ 3 ] ) + xx [ 108 ] +
xx [ 122 ] + xx [ 80 ] * ( xx [ 134 ] + xx [ 397 ] * xx [ 9 ] ) - xx [ 50 ] ;
xx [ 132 ] = ( xx [ 488 ] * xx [ 0 ] + xx [ 491 ] * xx [ 3 ] ) * xx [ 80 ] +
xx [ 109 ] + xx [ 123 ] + xx [ 80 ] * ( xx [ 135 ] + xx [ 397 ] * xx [ 12 ] )
- xx [ 225 ] ; xx [ 133 ] = xx [ 116 ] + xx [ 49 ] - ( xx [ 489 ] * xx [ 0 ]
+ xx [ 490 ] * xx [ 3 ] ) * xx [ 80 ] + xx [ 110 ] + xx [ 124 ] + ( xx [ 136
] - xx [ 397 ] * xx [ 22 ] ) * xx [ 80 ] - xx [ 57 ] - xx [ 83 ] ;
pm_math_cross3 ( xx + 131 , xx + 84 , xx + 108 ) ; pm_math_quatXform ( xx +
212 , xx + 108 , xx + 122 ) ; xx [ 108 ] = xx [ 457 ] * xx [ 83 ] - xx [ 493
] * xx [ 57 ] ; xx [ 109 ] = xx [ 401 ] * xx [ 83 ] + xx [ 57 ] * xx [ 13 ] +
xx [ 50 ] * xx [ 314 ] ; xx [ 110 ] = xx [ 83 ] * xx [ 444 ] + xx [ 493 ] *
xx [ 50 ] ; pm_math_quatXform ( xx + 140 , xx + 108 , xx + 131 ) ;
pm_math_cross3 ( xx + 97 , xx + 454 , xx + 108 ) ; xx [ 134 ] = xx [ 51 ] +
xx [ 131 ] + xx [ 108 ] ; xx [ 135 ] = xx [ 8 ] + xx [ 132 ] + xx [ 109 ] ;
xx [ 136 ] = xx [ 133 ] - xx [ 11 ] + xx [ 110 ] ; pm_math_quatXform ( xx +
68 , xx + 134 , xx + 108 ) ; pm_math_cross3 ( xx + 183 , xx + 494 , xx + 131
) ; xx [ 134 ] = xx [ 112 ] + xx [ 108 ] + xx [ 131 ] ; xx [ 135 ] = xx [ 113
] + xx [ 109 ] + xx [ 132 ] ; xx [ 136 ] = xx [ 114 ] + xx [ 110 ] + xx [ 133
] ; pm_math_quatXform ( xx + 42 , xx + 134 , xx + 108 ) ; xx [ 0 ] = xx [ 117
] + xx [ 108 ] - xx [ 492 ] * xx [ 49 ] ; xx [ 3 ] = xx [ 118 ] + xx [ 109 ]
+ xx [ 498 ] * xx [ 49 ] ; xx [ 9 ] = xx [ 3 ] * xx [ 15 ] + xx [ 19 ] * xx [
0 ] ; xx [ 12 ] = xx [ 119 ] + xx [ 110 ] ; xx [ 108 ] = xx [ 18 ] + xx [ 0 ]
- xx [ 80 ] * xx [ 9 ] * xx [ 19 ] - xx [ 208 ] ; xx [ 109 ] = xx [ 61 ] + xx
[ 3 ] - xx [ 80 ] * xx [ 9 ] * xx [ 15 ] + xx [ 210 ] ; xx [ 110 ] = xx [ 12
] - ( xx [ 15 ] * xx [ 12 ] * xx [ 15 ] + xx [ 12 ] * xx [ 19 ] * xx [ 19 ] )
* xx [ 80 ] ; pm_math_quatXform ( xx + 72 , xx + 108 , xx + 131 ) ; xx [ 0 ]
= xx [ 558 ] * xx [ 149 ] ; xx [ 3 ] = xx [ 149 ] * xx [ 544 ] ; xx [ 9 ] =
xx [ 150 ] * xx [ 21 ] ; xx [ 12 ] = xx [ 151 ] * xx [ 21 ] ; xx [ 13 ] = xx
[ 150 ] - ( xx [ 21 ] * xx [ 9 ] - xx [ 25 ] * xx [ 12 ] ) * xx [ 80 ] ; xx [
22 ] = xx [ 151 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 9 ] + xx [ 21 ] * xx [ 12
] ) ; xx [ 108 ] = xx [ 172 ] + ( xx [ 0 ] * xx [ 513 ] + xx [ 3 ] * xx [ 560
] ) * xx [ 80 ] + xx [ 13 ] ; xx [ 109 ] = xx [ 80 ] * ( xx [ 0 ] * xx [ 560
] - xx [ 3 ] * xx [ 513 ] ) + xx [ 22 ] - xx [ 186 ] ; xx [ 110 ] = xx [ 5 ]
+ xx [ 149 ] - ( xx [ 3 ] * xx [ 544 ] + xx [ 558 ] * xx [ 0 ] ) * xx [ 80 ]
+ xx [ 164 ] ; pm_math_cross3 ( xx + 108 , xx + 267 , xx + 134 ) ;
pm_math_quatXform ( xx + 201 , xx + 134 , xx + 108 ) ; xx [ 134 ] = xx [ 13 ]
; xx [ 135 ] = xx [ 22 ] ; xx [ 136 ] = xx [ 164 ] ; pm_math_cross3 ( xx +
134 , xx + 126 , xx + 137 ) ; pm_math_quatXform ( xx + 575 , xx + 137 , xx +
134 ) ; xx [ 0 ] = xx [ 134 ] - xx [ 149 ] * xx [ 580 ] ; xx [ 3 ] = xx [ 135
] + xx [ 149 ] * xx [ 579 ] ; xx [ 5 ] = xx [ 3 ] * xx [ 452 ] + xx [ 399 ] *
xx [ 0 ] ; xx [ 137 ] = xx [ 149 ] * xx [ 14 ] + xx [ 0 ] - xx [ 80 ] * xx [
5 ] * xx [ 399 ] + xx [ 174 ] ; xx [ 138 ] = xx [ 149 ] * xx [ 192 ] + xx [ 3
] - xx [ 80 ] * xx [ 5 ] * xx [ 452 ] - xx [ 193 ] ; xx [ 139 ] = xx [ 136 ]
- ( xx [ 452 ] * xx [ 452 ] * xx [ 136 ] + xx [ 136 ] * xx [ 399 ] * xx [ 399
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 188 , xx + 137 , xx + 12 ) ; xx [
0 ] = xx [ 49 ] * xx [ 639 ] ; xx [ 3 ] = xx [ 49 ] * xx [ 640 ] ;
pm_math_quatInverseXform ( xx + 630 , xx + 183 , xx + 134 ) ;
pm_math_quatInverseXform ( xx + 626 , xx + 97 , xx + 137 ) ; xx [ 5 ] = xx [
546 ] * xx [ 57 ] ; xx [ 9 ] = xx [ 57 ] * xx [ 379 ] - xx [ 50 ] * xx [ 473
] ; xx [ 22 ] = xx [ 546 ] * xx [ 50 ] ; xx [ 144 ] = - xx [ 5 ] ; xx [ 145 ]
= xx [ 9 ] ; xx [ 146 ] = xx [ 22 ] ; pm_math_cross3 ( xx + 601 , xx + 144 ,
xx + 149 ) ; xx [ 144 ] = xx [ 253 ] + xx [ 80 ] * ( xx [ 641 ] * xx [ 0 ] -
xx [ 638 ] * xx [ 3 ] ) + xx [ 134 ] + xx [ 137 ] + xx [ 80 ] * ( xx [ 149 ]
+ xx [ 312 ] * xx [ 5 ] ) - xx [ 50 ] ; xx [ 145 ] = ( xx [ 638 ] * xx [ 0 ]
+ xx [ 641 ] * xx [ 3 ] ) * xx [ 80 ] + xx [ 135 ] + xx [ 138 ] + xx [ 80 ] *
( xx [ 150 ] - xx [ 312 ] * xx [ 9 ] ) - xx [ 266 ] ; xx [ 146 ] = xx [ 196 ]
+ xx [ 49 ] - ( xx [ 639 ] * xx [ 0 ] + xx [ 640 ] * xx [ 3 ] ) * xx [ 80 ] +
xx [ 136 ] + xx [ 139 ] + ( xx [ 151 ] - xx [ 312 ] * xx [ 22 ] ) * xx [ 80 ]
- xx [ 57 ] - xx [ 87 ] ; pm_math_cross3 ( xx + 144 , xx + 84 , xx + 134 ) ;
pm_math_quatXform ( xx + 277 , xx + 134 , xx + 137 ) ; xx [ 134 ] = xx [ 611
] * xx [ 87 ] - xx [ 635 ] * xx [ 57 ] ; xx [ 135 ] = xx [ 535 ] * xx [ 87 ]
+ xx [ 57 ] * xx [ 463 ] + xx [ 50 ] * xx [ 446 ] ; xx [ 136 ] = xx [ 87 ] *
xx [ 574 ] + xx [ 635 ] * xx [ 50 ] ; pm_math_quatXform ( xx + 140 , xx + 134
, xx + 87 ) ; pm_math_cross3 ( xx + 97 , xx + 595 , xx + 134 ) ; xx [ 144 ] =
xx [ 51 ] + xx [ 87 ] + xx [ 134 ] ; xx [ 145 ] = xx [ 8 ] + xx [ 88 ] + xx [
135 ] ; xx [ 146 ] = xx [ 89 ] - xx [ 11 ] + xx [ 136 ] ; pm_math_quatXform (
xx + 68 , xx + 144 , xx + 87 ) ; pm_math_cross3 ( xx + 183 , xx + 644 , xx +
134 ) ; xx [ 144 ] = xx [ 112 ] + xx [ 87 ] + xx [ 134 ] ; xx [ 145 ] = xx [
113 ] + xx [ 88 ] + xx [ 135 ] ; xx [ 146 ] = xx [ 114 ] + xx [ 89 ] + xx [
136 ] ; pm_math_quatXform ( xx + 42 , xx + 144 , xx + 87 ) ; xx [ 0 ] = xx [
117 ] + xx [ 87 ] - xx [ 634 ] * xx [ 49 ] ; xx [ 3 ] = xx [ 118 ] + xx [ 88
] + xx [ 636 ] * xx [ 49 ] ; xx [ 5 ] = xx [ 3 ] * xx [ 15 ] + xx [ 19 ] * xx
[ 0 ] ; xx [ 9 ] = xx [ 119 ] + xx [ 89 ] ; xx [ 87 ] = xx [ 18 ] + xx [ 0 ]
- xx [ 80 ] * xx [ 5 ] * xx [ 19 ] - xx [ 233 ] ; xx [ 88 ] = xx [ 61 ] + xx
[ 3 ] - xx [ 80 ] * xx [ 5 ] * xx [ 15 ] + xx [ 254 ] ; xx [ 89 ] = xx [ 9 ]
- ( xx [ 15 ] * xx [ 9 ] * xx [ 15 ] + xx [ 9 ] * xx [ 19 ] * xx [ 19 ] ) *
xx [ 80 ] ; pm_math_quatXform ( xx + 72 , xx + 87 , xx + 134 ) ; xx [ 0 ] =
xx [ 706 ] * xx [ 165 ] ; xx [ 3 ] = xx [ 165 ] * xx [ 686 ] ; xx [ 5 ] = xx
[ 166 ] * xx [ 21 ] ; xx [ 9 ] = xx [ 167 ] * xx [ 21 ] ; xx [ 22 ] = xx [
166 ] - ( xx [ 21 ] * xx [ 5 ] - xx [ 25 ] * xx [ 9 ] ) * xx [ 80 ] ; xx [ 26
] = xx [ 167 ] - xx [ 80 ] * ( xx [ 25 ] * xx [ 5 ] + xx [ 21 ] * xx [ 9 ] )
; xx [ 87 ] = xx [ 217 ] + ( xx [ 0 ] * xx [ 670 ] + xx [ 3 ] * xx [ 708 ] )
* xx [ 80 ] + xx [ 22 ] ; xx [ 88 ] = xx [ 80 ] * ( xx [ 0 ] * xx [ 708 ] -
xx [ 3 ] * xx [ 670 ] ) + xx [ 26 ] - xx [ 231 ] ; xx [ 89 ] = xx [ 24 ] + xx
[ 165 ] - ( xx [ 3 ] * xx [ 686 ] + xx [ 706 ] * xx [ 0 ] ) * xx [ 80 ] + xx
[ 168 ] ; pm_math_cross3 ( xx + 87 , xx + 267 , xx + 144 ) ;
pm_math_quatXform ( xx + 234 , xx + 144 , xx + 87 ) ; xx [ 144 ] = xx [ 22 ]
; xx [ 145 ] = xx [ 26 ] ; xx [ 146 ] = xx [ 168 ] ; pm_math_cross3 ( xx +
144 , xx + 126 , xx + 149 ) ; pm_math_quatXform ( xx + 725 , xx + 149 , xx +
144 ) ; xx [ 0 ] = xx [ 144 ] - xx [ 165 ] * xx [ 730 ] ; xx [ 3 ] = xx [ 145
] + xx [ 165 ] * xx [ 729 ] ; xx [ 5 ] = xx [ 3 ] * xx [ 605 ] + xx [ 532 ] *
xx [ 0 ] ; xx [ 149 ] = xx [ 165 ] * xx [ 211 ] + xx [ 0 ] - xx [ 80 ] * xx [
5 ] * xx [ 532 ] + xx [ 239 ] ; xx [ 150 ] = xx [ 165 ] * xx [ 251 ] + xx [ 3
] - xx [ 80 ] * xx [ 5 ] * xx [ 605 ] - xx [ 252 ] ; xx [ 151 ] = xx [ 146 ]
- ( xx [ 605 ] * xx [ 605 ] * xx [ 146 ] + xx [ 146 ] * xx [ 532 ] * xx [ 532
] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 226 , xx + 149 , xx + 144 ) ; xx [
0 ] = xx [ 49 ] * xx [ 916 ] ; xx [ 3 ] = xx [ 49 ] * xx [ 917 ] ;
pm_math_quatInverseXform ( xx + 911 , xx + 183 , xx + 149 ) ;
pm_math_quatInverseXform ( xx + 897 , xx + 97 , xx + 152 ) ; xx [ 5 ] = xx [
50 ] * xx [ 637 ] ; xx [ 155 ] = xx [ 310 ] + xx [ 80 ] * ( xx [ 918 ] * xx [
0 ] - xx [ 915 ] * xx [ 3 ] ) + xx [ 149 ] + xx [ 152 ] + xx [ 80 ] * xx [ 5
] * xx [ 637 ] - xx [ 50 ] ; xx [ 156 ] = ( xx [ 915 ] * xx [ 0 ] + xx [ 918
] * xx [ 3 ] ) * xx [ 80 ] + xx [ 150 ] + xx [ 153 ] - xx [ 80 ] * xx [ 2 ] *
xx [ 5 ] - xx [ 330 ] ; xx [ 157 ] = xx [ 194 ] + xx [ 49 ] - ( xx [ 916 ] *
xx [ 0 ] + xx [ 917 ] * xx [ 3 ] ) * xx [ 80 ] + xx [ 151 ] + xx [ 154 ] - (
xx [ 57 ] + xx [ 104 ] ) ; pm_math_cross3 ( xx + 155 , xx + 84 , xx + 149 ) ;
pm_math_quatXform ( xx + 319 , xx + 149 , xx + 83 ) ; xx [ 149 ] = xx [ 17 ]
* xx [ 104 ] - xx [ 57 ] * xx [ 66 ] ; xx [ 150 ] = - ( xx [ 104 ] * xx [ 20
] + xx [ 57 ] * xx [ 707 ] + xx [ 790 ] * xx [ 50 ] ) ; xx [ 151 ] = xx [ 50
] * xx [ 66 ] ; pm_math_quatXform ( xx + 140 , xx + 149 , xx + 55 ) ;
pm_math_cross3 ( xx + 97 , xx + 891 , xx + 104 ) ; xx [ 97 ] = xx [ 51 ] + xx
[ 55 ] + xx [ 104 ] ; xx [ 98 ] = xx [ 8 ] + xx [ 56 ] + xx [ 105 ] ; xx [ 99
] = xx [ 57 ] - xx [ 11 ] + xx [ 106 ] ; pm_math_quatXform ( xx + 68 , xx +
97 , xx + 55 ) ; pm_math_cross3 ( xx + 183 , xx + 919 , xx + 66 ) ; xx [ 69 ]
= xx [ 112 ] + xx [ 55 ] + xx [ 66 ] ; xx [ 70 ] = xx [ 113 ] + xx [ 56 ] +
xx [ 67 ] ; xx [ 71 ] = xx [ 114 ] + xx [ 57 ] + xx [ 68 ] ;
pm_math_quatXform ( xx + 42 , xx + 69 , xx + 55 ) ; xx [ 0 ] = xx [ 117 ] +
xx [ 55 ] - xx [ 49 ] * xx [ 121 ] ; xx [ 2 ] = xx [ 118 ] + xx [ 56 ] + xx [
49 ] * xx [ 148 ] ; xx [ 3 ] = xx [ 2 ] * xx [ 15 ] + xx [ 19 ] * xx [ 0 ] ;
xx [ 5 ] = xx [ 119 ] + xx [ 57 ] ; xx [ 40 ] = xx [ 18 ] + xx [ 0 ] - xx [
80 ] * xx [ 3 ] * xx [ 19 ] - xx [ 81 ] ; xx [ 41 ] = xx [ 61 ] + xx [ 2 ] -
xx [ 80 ] * xx [ 3 ] * xx [ 15 ] + xx [ 82 ] ; xx [ 42 ] = xx [ 5 ] - ( xx [
15 ] * xx [ 5 ] * xx [ 15 ] + xx [ 5 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 80 ]
; pm_math_quatXform ( xx + 72 , xx + 40 , xx + 17 ) ; xx [ 0 ] = xx [ 745 ] *
xx [ 16 ] ; xx [ 2 ] = xx [ 16 ] * xx [ 743 ] ; xx [ 3 ] = xx [ 46 ] * xx [
21 ] ; xx [ 5 ] = xx [ 47 ] * xx [ 21 ] ; xx [ 8 ] = xx [ 46 ] - ( xx [ 21 ]
* xx [ 3 ] - xx [ 25 ] * xx [ 5 ] ) * xx [ 80 ] ; xx [ 9 ] = xx [ 47 ] - xx [
80 ] * ( xx [ 25 ] * xx [ 3 ] + xx [ 21 ] * xx [ 5 ] ) ; xx [ 20 ] = xx [ 260
] + ( xx [ 0 ] * xx [ 720 ] + xx [ 2 ] * xx [ 753 ] ) * xx [ 80 ] + xx [ 8 ]
; xx [ 21 ] = xx [ 80 ] * ( xx [ 0 ] * xx [ 753 ] - xx [ 2 ] * xx [ 720 ] ) +
xx [ 9 ] - xx [ 288 ] ; xx [ 22 ] = xx [ 107 ] + xx [ 16 ] - ( xx [ 2 ] * xx
[ 743 ] + xx [ 745 ] * xx [ 0 ] ) * xx [ 80 ] + xx [ 48 ] ; pm_math_cross3 (
xx + 20 , xx + 267 , xx + 24 ) ; pm_math_quatXform ( xx + 292 , xx + 24 , xx
+ 20 ) ; xx [ 24 ] = xx [ 8 ] ; xx [ 25 ] = xx [ 9 ] ; xx [ 26 ] = xx [ 48 ]
; pm_math_cross3 ( xx + 24 , xx + 126 , xx + 40 ) ; pm_math_quatXform ( xx +
777 , xx + 40 , xx + 24 ) ; xx [ 0 ] = xx [ 24 ] - xx [ 16 ] * xx [ 782 ] ;
xx [ 2 ] = xx [ 25 ] + xx [ 16 ] * xx [ 781 ] ; xx [ 3 ] = xx [ 2 ] * xx [
660 ] + xx [ 643 ] * xx [ 0 ] ; xx [ 40 ] = xx [ 0 ] - xx [ 80 ] * xx [ 3 ] *
xx [ 643 ] - xx [ 16 ] * xx [ 270 ] + xx [ 291 ] ; xx [ 41 ] = xx [ 16 ] * xx
[ 299 ] + xx [ 2 ] - xx [ 80 ] * xx [ 3 ] * xx [ 660 ] - xx [ 304 ] ; xx [ 42
] = xx [ 26 ] - ( xx [ 660 ] * xx [ 660 ] * xx [ 26 ] + xx [ 26 ] * xx [ 643
] * xx [ 643 ] ) * xx [ 80 ] ; pm_math_quatXform ( xx + 284 , xx + 40 , xx +
24 ) ; xx [ 147 ] = fabs ( xx [ 63 ] + xx [ 34 ] + xx [ 58 ] - ( xx [ 91 ] +
xx [ 4 ] + xx [ 35 ] ) ) ; xx [ 148 ] = fabs ( xx [ 64 ] + xx [ 90 ] + xx [
59 ] - ( xx [ 92 ] + xx [ 96 ] + xx [ 36 ] ) ) ; xx [ 149 ] = fabs ( xx [ 65
] + xx [ 1 ] + xx [ 60 ] - ( xx [ 93 ] + xx [ 6 ] + xx [ 37 ] ) ) ; xx [ 150
] = fabs ( xx [ 52 ] + xx [ 34 ] + xx [ 76 ] - ( xx [ 28 ] + xx [ 31 ] + xx [
100 ] ) ) ; xx [ 151 ] = fabs ( xx [ 53 ] + xx [ 90 ] + xx [ 77 ] - ( xx [ 29
] + xx [ 39 ] + xx [ 101 ] ) ) ; xx [ 152 ] = fabs ( xx [ 54 ] + xx [ 1 ] +
xx [ 78 ] - ( xx [ 30 ] + xx [ 103 ] + xx [ 102 ] ) ) ; xx [ 153 ] = fabs (
xx [ 122 ] + xx [ 34 ] + xx [ 131 ] - ( xx [ 108 ] + xx [ 12 ] - xx [ 111 ] )
) ; xx [ 154 ] = fabs ( xx [ 123 ] + xx [ 90 ] + xx [ 132 ] - ( xx [ 109 ] +
xx [ 130 ] + xx [ 13 ] ) ) ; xx [ 155 ] = fabs ( xx [ 124 ] + xx [ 1 ] + xx [
133 ] - ( xx [ 110 ] + xx [ 173 ] + xx [ 14 ] ) ) ; xx [ 156 ] = fabs ( xx [
137 ] + xx [ 34 ] + xx [ 134 ] - ( xx [ 87 ] + xx [ 200 ] + xx [ 144 ] ) ) ;
xx [ 157 ] = fabs ( xx [ 138 ] + xx [ 90 ] + xx [ 135 ] - ( xx [ 88 ] + xx [
216 ] + xx [ 145 ] ) ) ; xx [ 158 ] = fabs ( xx [ 139 ] + xx [ 1 ] + xx [ 136
] - ( xx [ 89 ] + xx [ 218 ] + xx [ 146 ] ) ) ; xx [ 159 ] = fabs ( xx [ 83 ]
+ xx [ 34 ] + xx [ 17 ] - ( xx [ 20 ] + xx [ 232 ] + xx [ 24 ] ) ) ; xx [ 160
] = fabs ( xx [ 84 ] + xx [ 90 ] + xx [ 18 ] - ( xx [ 21 ] + xx [ 23 ] + xx [
25 ] ) ) ; xx [ 161 ] = fabs ( xx [ 85 ] + xx [ 1 ] + xx [ 19 ] - ( xx [ 22 ]
+ xx [ 10 ] + xx [ 26 ] ) ) ; ii [ 0 ] = 147 ; { int ll ; for ( ll = 148 ; ll
< 162 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ]
-= 147 ; xx [ 0 ] = xx [ 147 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - xx [ 7
] ; if ( xx [ 1 ] < 0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 1
] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [
2 ] = 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case
2 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_11/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_12/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_13/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_14/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'PlatformAssem/Rod_assem_1/Spherical1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } state [ 0 ] = xx [ 922 ] ; state [ 1 ] = xx [ 923 ] ;
state [ 2 ] = xx [ 924 ] ; state [ 3 ] = xx [ 925 ] ; state [ 4 ] = xx [ 926
] ; state [ 5 ] = xx [ 927 ] ; state [ 6 ] = xx [ 928 ] ; state [ 7 ] = xx [
929 ] ; state [ 8 ] = xx [ 930 ] ; state [ 9 ] = xx [ 931 ] ; state [ 10 ] =
xx [ 932 ] ; state [ 11 ] = xx [ 933 ] ; state [ 12 ] = xx [ 934 ] ; state [
13 ] = xx [ 935 ] ; state [ 14 ] = xx [ 936 ] ; state [ 15 ] = xx [ 937 ] ;
state [ 16 ] = xx [ 938 ] ; state [ 17 ] = xx [ 939 ] ; state [ 18 ] = xx [
940 ] ; state [ 19 ] = xx [ 941 ] ; state [ 20 ] = xx [ 942 ] ; state [ 21 ]
= xx [ 943 ] ; state [ 22 ] = xx [ 944 ] ; state [ 23 ] = xx [ 945 ] ; state
[ 24 ] = xx [ 946 ] ; state [ 25 ] = xx [ 947 ] ; state [ 26 ] = xx [ 948 ] ;
state [ 27 ] = xx [ 949 ] ; state [ 28 ] = xx [ 950 ] ; state [ 29 ] = xx [
951 ] ; state [ 30 ] = xx [ 952 ] ; state [ 31 ] = xx [ 953 ] ; state [ 32 ]
= xx [ 954 ] ; state [ 33 ] = xx [ 955 ] ; state [ 34 ] = xx [ 956 ] ; state
[ 35 ] = xx [ 957 ] ; state [ 36 ] = xx [ 958 ] ; state [ 37 ] = xx [ 959 ] ;
state [ 38 ] = xx [ 960 ] ; state [ 39 ] = xx [ 961 ] ; state [ 40 ] = xx [
962 ] ; state [ 41 ] = xx [ 963 ] ; state [ 42 ] = xx [ 964 ] ; state [ 43 ]
= xx [ 965 ] ; state [ 44 ] = xx [ 966 ] ; state [ 45 ] = xx [ 967 ] ; state
[ 46 ] = xx [ 968 ] ; state [ 47 ] = xx [ 969 ] ; state [ 48 ] = xx [ 970 ] ;
state [ 49 ] = xx [ 971 ] ; state [ 50 ] = xx [ 972 ] ; state [ 51 ] = xx [
973 ] ; state [ 52 ] = xx [ 974 ] ; state [ 53 ] = xx [ 975 ] ; state [ 54 ]
= xx [ 976 ] ; state [ 55 ] = xx [ 977 ] ; state [ 56 ] = xx [ 978 ] ; state
[ 57 ] = xx [ 979 ] ; state [ 58 ] = xx [ 980 ] ; state [ 59 ] = xx [ 981 ] ;
state [ 60 ] = xx [ 982 ] ; state [ 61 ] = xx [ 983 ] ; state [ 62 ] = xx [
984 ] ; state [ 63 ] = xx [ 985 ] ; state [ 64 ] = xx [ 986 ] ; state [ 65 ]
= xx [ 987 ] ; state [ 66 ] = xx [ 988 ] ; state [ 67 ] = xx [ 989 ] ; state
[ 68 ] = xx [ 990 ] ; state [ 69 ] = xx [ 991 ] ; state [ 70 ] = xx [ 992 ] ;
state [ 71 ] = xx [ 993 ] ; state [ 72 ] = xx [ 994 ] ; state [ 73 ] = xx [
995 ] ; state [ 74 ] = xx [ 996 ] ; state [ 75 ] = xx [ 997 ] ; state [ 76 ]
= xx [ 998 ] ; state [ 77 ] = xx [ 999 ] ; state [ 78 ] = xx [ 1000 ] ; state
[ 79 ] = xx [ 1001 ] ; state [ 80 ] = xx [ 1002 ] ; state [ 81 ] = xx [ 1003
] ; state [ 82 ] = xx [ 1004 ] ; state [ 83 ] = xx [ 1005 ] ; state [ 84 ] =
xx [ 1006 ] ; state [ 85 ] = xx [ 1007 ] ; state [ 86 ] = xx [ 1008 ] ; state
[ 87 ] = xx [ 1009 ] ; state [ 88 ] = xx [ 1010 ] ; state [ 89 ] = xx [ 1011
] ; state [ 90 ] = xx [ 1012 ] ; state [ 91 ] = xx [ 1013 ] ; state [ 92 ] =
xx [ 1014 ] ; state [ 93 ] = xx [ 1015 ] ; state [ 94 ] = xx [ 1016 ] ; state
[ 95 ] = xx [ 1017 ] ; state [ 96 ] = xx [ 1018 ] ; return NULL ; }
