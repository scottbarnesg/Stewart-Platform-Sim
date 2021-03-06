#include "__cf_PlatformAssem.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
void PlatformAssem_f0ca4364_1_computeConstraintError ( const void * mech ,
const double * rtdv , const double * state , double * error ) { double xx [
138 ] ; ( void ) mech ; ( void ) rtdv ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ]
* state [ 43 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [
25 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = 0.7058357201813958 ; xx [ 6 ]
= xx [ 0 ] * state [ 23 ] ; xx [ 7 ] = cos ( xx [ 6 ] ) ; xx [ 8 ] =
0.7058407546227096 ; xx [ 9 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ] * xx [
7 ] + xx [ 8 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 5 ] * xx [ 9 ] - xx [ 8 ] * xx [
7 ] ; xx [ 11 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = 0.04233709306330295 ; xx [ 12
] = 0.04233598682685397 ; xx [ 13 ] = xx [ 3 ] * xx [ 7 ] + xx [ 12 ] * xx [
9 ] ; xx [ 14 ] = xx [ 3 ] * xx [ 9 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 15 ] = -
( xx [ 4 ] * xx [ 6 ] - xx [ 10 ] * xx [ 11 ] ) ; xx [ 16 ] = - ( xx [ 11 ] *
xx [ 13 ] + xx [ 14 ] * xx [ 4 ] ) ; xx [ 17 ] = xx [ 4 ] * xx [ 13 ] - xx [
14 ] * xx [ 11 ] ; xx [ 18 ] = xx [ 10 ] * xx [ 4 ] + xx [ 11 ] * xx [ 6 ] ;
xx [ 7 ] = 3.980251324392935e-7 ; xx [ 9 ] = 0.999999999999921 ; xx [ 19 ] =
xx [ 7 ] * state [ 30 ] - xx [ 9 ] * state [ 27 ] ; xx [ 20 ] = - ( xx [ 7 ]
* state [ 29 ] + xx [ 9 ] * state [ 28 ] ) ; xx [ 21 ] = - ( xx [ 9 ] * state
[ 29 ] - xx [ 7 ] * state [ 28 ] ) ; xx [ 22 ] = - ( xx [ 7 ] * state [ 27 ]
+ xx [ 9 ] * state [ 30 ] ) ; pm_math_quatCompose ( xx + 15 , xx + 19 , xx +
23 ) ; xx [ 27 ] = 3.980251340548381e-7 ; xx [ 28 ] = xx [ 9 ] * state [ 37 ]
- xx [ 27 ] * state [ 34 ] ; xx [ 29 ] = xx [ 9 ] * state [ 36 ] - xx [ 27 ]
* state [ 35 ] ; xx [ 30 ] = - ( xx [ 27 ] * state [ 36 ] + xx [ 9 ] * state
[ 35 ] ) ; xx [ 31 ] = - ( xx [ 27 ] * state [ 37 ] + xx [ 9 ] * state [ 34 ]
) ; pm_math_quatCompose ( xx + 23 , xx + 28 , xx + 32 ) ; xx [ 27 ] =
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
] ) * xx [ 42 ] ) ; xx [ 61 ] = 5.088251355846174e-12 - ( xx [ 49 ] * xx [ 43
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
33 ] + xx [ 20 ] + xx [ 30 ] - ( xx [ 22 ] * xx [ 13 ] + xx [ 61 ] ) * xx [
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
130 , xx + 133 ) ; error [ 0 ] = xx [ 57 ] + xx [ 46 ] + xx [ 6 ] - ( xx [ 75
] + xx [ 67 ] + xx [ 78 ] - ( xx [ 37 ] * xx [ 28 ] + xx [ 81 ] ) * xx [ 42 ]
) - 0.1417622656843958 ; error [ 1 ] = xx [ 58 ] + xx [ 47 ] + xx [ 14 ] - (
xx [ 76 ] + xx [ 68 ] + xx [ 79 ] - ( xx [ 37 ] * xx [ 1 ] + xx [ 82 ] ) * xx
[ 42 ] ) - 0.02992349485130436 ; error [ 2 ] = xx [ 59 ] + xx [ 48 ] + xx [
19 ] - ( xx [ 77 ] + xx [ 69 ] + xx [ 80 ] - xx [ 42 ] * ( xx [ 83 ] + xx [
37 ] * xx [ 2 ] ) ) + 0.1065919054848736 ; error [ 3 ] = xx [ 20 ] + xx [ 32
] + xx [ 6 ] - ( xx [ 43 ] + xx [ 60 ] + xx [ 70 ] - ( xx [ 63 ] - xx [ 3 ] *
xx [ 8 ] ) * xx [ 42 ] ) - 0.05787438452398606 ; error [ 4 ] = xx [ 21 ] + xx
[ 33 ] + xx [ 14 ] - ( xx [ 44 ] + xx [ 61 ] + xx [ 71 ] - ( xx [ 8 ] * xx [
12 ] + xx [ 64 ] ) * xx [ 42 ] ) - 0.02992259737327991 ; error [ 5 ] = xx [
22 ] + xx [ 34 ] + xx [ 19 ] - ( xx [ 45 ] + xx [ 62 ] + xx [ 72 ] - xx [ 42
] * ( xx [ 65 ] + xx [ 4 ] * xx [ 8 ] ) ) - 0.1550274415345039 ; error [ 6 ]
= xx [ 88 ] + xx [ 84 ] + xx [ 6 ] - ( xx [ 103 ] + xx [ 95 ] + xx [ 106 ] -
( xx [ 38 ] * xx [ 26 ] + xx [ 98 ] ) * xx [ 42 ] ) + 0.06304794220310322 ;
error [ 7 ] = xx [ 89 ] + xx [ 85 ] + xx [ 14 ] - ( xx [ 104 ] + xx [ 96 ] +
xx [ 107 ] - ( xx [ 38 ] * xx [ 10 ] + xx [ 99 ] ) * xx [ 42 ] ) -
0.02992204813763048 ; error [ 8 ] = xx [ 90 ] + xx [ 86 ] + xx [ 19 ] - ( xx
[ 105 ] + xx [ 97 ] + xx [ 108 ] - xx [ 42 ] * ( xx [ 100 ] + xx [ 38 ] * xx
[ 27 ] ) ) + 0.1313039406712666 ; error [ 9 ] = xx [ 29 ] + xx [ 91 ] + xx [
6 ] - ( xx [ 121 ] + xx [ 113 ] + xx [ 124 ] - ( xx [ 66 ] * xx [ 36 ] + xx [
116 ] ) * xx [ 42 ] ) + 0.1240382406650065 ; error [ 10 ] = xx [ 30 ] + xx [
92 ] + xx [ 14 ] - ( xx [ 122 ] + xx [ 114 ] + xx [ 125 ] - ( xx [ 66 ] * xx
[ 5 ] + xx [ 117 ] ) * xx [ 42 ] ) - 0.02992151662180351 ; error [ 11 ] = xx
[ 31 ] + xx [ 93 ] + xx [ 19 ] - ( xx [ 123 ] + xx [ 115 ] + xx [ 126 ] - xx
[ 42 ] * ( xx [ 118 ] + xx [ 66 ] * xx [ 35 ] ) ) + 0.04996916497694619 ;
error [ 12 ] = xx [ 127 ] + xx [ 39 ] + xx [ 6 ] - ( xx [ 50 ] + xx [ 23 ] +
xx [ 15 ] - ( xx [ 55 ] * xx [ 0 ] + xx [ 133 ] ) * xx [ 42 ] ) -
0.1816563790182656 ; error [ 13 ] = xx [ 128 ] + xx [ 40 ] + xx [ 14 ] - ( xx
[ 51 ] + xx [ 24 ] + xx [ 16 ] - ( xx [ 55 ] * xx [ 7 ] + xx [ 134 ] ) * xx [
42 ] ) - 0.02992367610368172 ; error [ 14 ] = xx [ 129 ] + xx [ 41 ] + xx [
19 ] - ( xx [ 52 ] + xx [ 25 ] + xx [ 17 ] - xx [ 42 ] * ( xx [ 135 ] + xx [
55 ] * xx [ 9 ] ) ) + 0.01321939793971065 ; }
