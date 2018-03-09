#include "__cf_PlatformAssem.h"
#ifndef RTW_HEADER_PlatformAssem_h_
#define RTW_HEADER_PlatformAssem_h_
#include <stddef.h>
#include <float.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef PlatformAssem_COMMON_INCLUDES_
#define PlatformAssem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "PlatformAssem_f0ca4364_1_gateway.h"
#endif
#include "PlatformAssem_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME PlatformAssem
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (19) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (97)   
#elif NCSTATES != 97
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T iweamutdyj [ 4 ] ; real_T ngjujydyri [ 4 ] ; real_T
jpor24elfh [ 4 ] ; real_T pok1002xiz [ 4 ] ; real_T jhjlkclg1v [ 4 ] ; real_T
hxle1u30ge [ 4 ] ; real_T dje4vrvcgl [ 4 ] ; real_T ddzm00x0zp [ 4 ] ; real_T
ikcqrmspqb [ 4 ] ; real_T mveuuxcphg [ 4 ] ; real_T ivdodijtwh [ 4 ] ; real_T
okjhanhfib [ 4 ] ; real_T k1wv31z5no [ 73 ] ; real_T cj0lrxmll1 [ 23 ] ;
real_T lkjgainmcq [ 6 ] ; real_T l0djbeo5im [ 3 ] ; real_T ekm3ljqd3x [ 8 ] ;
real_T hetoyp0u0k [ 3 ] ; real_T kmqjjdc1mq [ 3 ] ; } B ; typedef struct {
real_T hvhjhjk4dv [ 2 ] ; real_T lpu1bjgk0l [ 2 ] ; real_T po5o0wmv2h [ 2 ] ;
real_T ecc1zvpabw [ 2 ] ; real_T kl04szp213 [ 2 ] ; real_T hputhe0pvx [ 2 ] ;
real_T mbkbvkhhzn [ 2 ] ; real_T aqr5bleq0m [ 2 ] ; real_T jptxefa324 [ 2 ] ;
real_T lr1ylvkwid [ 2 ] ; real_T aebbapvpyg [ 2 ] ; real_T hs1gyothi1 [ 2 ] ;
struct { real_T modelTStart ; } b44arfy0bi ; struct { real_T modelTStart ; }
btmwobwet2 ; struct { real_T modelTStart ; } dgpujzr00m ; struct { real_T
modelTStart ; } b2mxn4mozi ; void * arbky52sy4 ; void * ngpiznqc3y ; void *
lrmjpxlgnq ; void * eb0jlyxdqt ; void * l4yarcqxy1 ; void * gh2mn52l21 ; void
* hjxznhxxlk ; void * ejft2xph51 ; void * l5nc0cxytl ; void * gsjtv1ntqx ;
struct { void * LoggedData ; } dqb3muistl ; struct { void * TUbufferPtrs [ 6
] ; } pkz35q2tqr ; struct { void * LoggedData ; } abjcuk1ofe ; struct { void
* TUbufferPtrs [ 16 ] ; } hphyxp0mpj ; struct { void * LoggedData ; }
n0drc2wqml ; struct { void * TUbufferPtrs [ 6 ] ; } jnawroeyau ; struct {
void * LoggedData ; } dgitcoss2o ; struct { void * TUbufferPtrs [ 6 ] ; }
am1ghvvstj ; struct { void * LoggedData ; } pebg5vbojg ; void * cfudka4z50 ;
void * au0al5facf ; void * ggpi2vwo3t ; void * iy3zcp3unw ; void * mmhu3lodod
; struct { int_T Tail [ 3 ] ; int_T Head [ 3 ] ; int_T Last [ 3 ] ; int_T
CircularBufSize [ 3 ] ; int_T MaxNewBufSize ; } hdpggz3z2b ; struct { int_T
Tail [ 8 ] ; int_T Head [ 8 ] ; int_T Last [ 8 ] ; int_T CircularBufSize [ 8
] ; int_T MaxNewBufSize ; } ghbz0y5suk ; struct { int_T Tail [ 3 ] ; int_T
Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } l2csqd4zeb ; struct { int_T Tail [ 3 ] ; int_T Head [ 3 ] ;
int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T MaxNewBufSize ; }
bwjwwwhboe ; boolean_T im2mh4d3wz ; boolean_T nfqxlsfog3 ; boolean_T
gqpqutfmsz ; } DW ; typedef struct { real_T kch5zgooyu [ 2 ] ; real_T
kjbkj1blat [ 2 ] ; real_T lhbztgbezn [ 2 ] ; real_T jzhloju4lb [ 2 ] ; real_T
b4sikpfbdd [ 2 ] ; real_T m1wtv5ftb3 [ 2 ] ; real_T msw11qds3n [ 2 ] ; real_T
ishpbvo5ra [ 2 ] ; real_T oejyz2fyei [ 2 ] ; real_T mhrtahciyg [ 2 ] ; real_T
klqxymu41a [ 2 ] ; real_T hvv3pjgv1n [ 2 ] ; real_T pbkunh1h0f [ 73 ] ; } X ;
typedef struct { real_T kch5zgooyu [ 2 ] ; real_T kjbkj1blat [ 2 ] ; real_T
lhbztgbezn [ 2 ] ; real_T jzhloju4lb [ 2 ] ; real_T b4sikpfbdd [ 2 ] ; real_T
m1wtv5ftb3 [ 2 ] ; real_T msw11qds3n [ 2 ] ; real_T ishpbvo5ra [ 2 ] ; real_T
oejyz2fyei [ 2 ] ; real_T mhrtahciyg [ 2 ] ; real_T klqxymu41a [ 2 ] ; real_T
hvv3pjgv1n [ 2 ] ; real_T pbkunh1h0f [ 73 ] ; } XDot ; typedef struct {
boolean_T kch5zgooyu [ 2 ] ; boolean_T kjbkj1blat [ 2 ] ; boolean_T
lhbztgbezn [ 2 ] ; boolean_T jzhloju4lb [ 2 ] ; boolean_T b4sikpfbdd [ 2 ] ;
boolean_T m1wtv5ftb3 [ 2 ] ; boolean_T msw11qds3n [ 2 ] ; boolean_T
ishpbvo5ra [ 2 ] ; boolean_T oejyz2fyei [ 2 ] ; boolean_T mhrtahciyg [ 2 ] ;
boolean_T klqxymu41a [ 2 ] ; boolean_T hvv3pjgv1n [ 2 ] ; boolean_T
pbkunh1h0f [ 73 ] ; } XDis ; typedef struct { real_T kch5zgooyu [ 2 ] ;
real_T kjbkj1blat [ 2 ] ; real_T lhbztgbezn [ 2 ] ; real_T jzhloju4lb [ 2 ] ;
real_T b4sikpfbdd [ 2 ] ; real_T m1wtv5ftb3 [ 2 ] ; real_T msw11qds3n [ 2 ] ;
real_T ishpbvo5ra [ 2 ] ; real_T oejyz2fyei [ 2 ] ; real_T mhrtahciyg [ 2 ] ;
real_T klqxymu41a [ 2 ] ; real_T hvv3pjgv1n [ 2 ] ; real_T pbkunh1h0f [ 73 ]
; } CStateAbsTol ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T sensor_delay ; real_T base_px_Value ; real_T
base_py_Value ; real_T base_pz_Value ; real_T base_qx_Value ; real_T
base_qy_Value ; real_T base_qz_Value ; real_T angle1_Value ; real_T
angle3_Value ; real_T angle4_Value ; real_T angle5_Value ; real_T
angle6_Value ; real_T angle2_Value ; real_T TransportDelay_InitOutput ;
real_T TransportDelay_InitOutput_bizwdr4jed ; real_T
TransportDelay_InitOutput_a2xex0xddn ; real_T
TransportDelay_InitOutput_nhc31y12nz ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
PlatformAssem_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern size_t gblCurrentSFcnIdx ;
extern DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
