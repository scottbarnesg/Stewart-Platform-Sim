/*
 * PlatformAssem.h
 *
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * Code generation for model "PlatformAssem".
 *
 * Model version              : 1.87
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Sat Mar 10 00:06:09 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PlatformAssem_h_
#define RTW_HEADER_PlatformAssem_h_
#include <stddef.h>
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef PlatformAssem_COMMON_INCLUDES_
# define PlatformAssem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "nesl_rtw.h"
#include "PlatformAssem_f0ca4364_1_gateway.h"
#endif                                 /* PlatformAssem_COMMON_INCLUDES_ */

#include "PlatformAssem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeDeltaY
# define rtmGetOdeDeltaY(rtm)          ((rtm)->OdeDeltaY)
#endif

#ifndef rtmSetOdeDeltaY
# define rtmSetOdeDeltaY(rtm, val)     ((rtm)->OdeDeltaY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVDRMdlRefTiming
# define rtmGetVDRMdlRefTiming(rtm)    ()
#endif

#ifndef rtmSetVDRMdlRefTiming
# define rtmSetVDRMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetVDRMdlRefTimingPtr
# define rtmGetVDRMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetVDRMdlRefTimingPtr
# define rtmSetVDRMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetVDRNumTicksToNextHit
# define rtmGetVDRNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetVDRNumTicksToNextHit
# define rtmSetVDRNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define PlatformAssem_rtModel          RT_MODEL_PlatformAssem_T

/* Block signals (auto storage) */
typedef struct {
  real_T base_px;                      /* '<Root>/base_px' */
  real_T INPUT_12_1_1[4];              /* '<S108>/INPUT_12_1_1' */
  real_T base_py;                      /* '<Root>/base_py' */
  real_T INPUT_4_1_1[4];               /* '<S108>/INPUT_4_1_1' */
  real_T base_pz;                      /* '<Root>/base_pz' */
  real_T INPUT_3_1_1[4];               /* '<S108>/INPUT_3_1_1' */
  real_T base_qx;                      /* '<Root>/base_qx' */
  real_T INPUT_9_1_1[4];               /* '<S108>/INPUT_9_1_1' */
  real_T base_qy;                      /* '<Root>/base_qy' */
  real_T INPUT_11_1_1[4];              /* '<S108>/INPUT_11_1_1' */
  real_T base_qz;                      /* '<Root>/base_qz' */
  real_T INPUT_10_1_1[4];              /* '<S108>/INPUT_10_1_1' */
  real_T angle1;                       /* '<Root>/angle1' */
  real_T INPUT_8_1_1[4];               /* '<S108>/INPUT_8_1_1' */
  real_T angle3;                       /* '<Root>/angle3' */
  real_T INPUT_2_1_1[4];               /* '<S108>/INPUT_2_1_1' */
  real_T angle4;                       /* '<Root>/angle4' */
  real_T INPUT_5_1_1[4];               /* '<S108>/INPUT_5_1_1' */
  real_T angle5;                       /* '<Root>/angle5' */
  real_T INPUT_6_1_1[4];               /* '<S108>/INPUT_6_1_1' */
  real_T angle6;                       /* '<Root>/angle6' */
  real_T INPUT_7_1_1[4];               /* '<S108>/INPUT_7_1_1' */
  real_T angle2;                       /* '<Root>/angle2' */
  real_T INPUT_1_1_1[4];               /* '<S108>/INPUT_1_1_1' */
  real_T STATE_1[73];                  /* '<S108>/STATE_1' */
  real_T OUTPUT_1_0[23];               /* '<S108>/OUTPUT_1_0' */
  real_T TransportDelay[3];            /* '<S7>/Transport Delay' */
  real_T TransportDelay_d[8];          /* '<S8>/Transport Delay' */
  real_T TransportDelay_n[3];          /* '<S9>/Transport Delay' */
  real_T TransportDelay_b[3];          /* '<S10>/Transport Delay' */
} B_PlatformAssem_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_12_1_1_discrete[2];     /* '<S108>/INPUT_12_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S108>/INPUT_4_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S108>/INPUT_3_1_1' */
  real_T INPUT_9_1_1_discrete[2];      /* '<S108>/INPUT_9_1_1' */
  real_T INPUT_11_1_1_discrete[2];     /* '<S108>/INPUT_11_1_1' */
  real_T INPUT_10_1_1_discrete[2];     /* '<S108>/INPUT_10_1_1' */
  real_T INPUT_8_1_1_discrete[2];      /* '<S108>/INPUT_8_1_1' */
  real_T INPUT_2_1_1_discrete[2];      /* '<S108>/INPUT_2_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_discrete[2];      /* '<S108>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_discrete[2];      /* '<S108>/INPUT_7_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S108>/INPUT_1_1_1' */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK;              /* '<S7>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK_b;            /* '<S8>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK_j;            /* '<S9>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK_e;            /* '<S10>/Transport Delay' */

  void* STATE_1_Simulator;             /* '<S108>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S108>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S108>/STATE_1' */
  void* STATE_1_Logger;                /* '<S108>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S108>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimulationData;     /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagnosticManager;  /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_Logger;             /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SampleTimeIdx;      /* '<S108>/OUTPUT_1_0' */
  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK;              /* '<S7>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S7>/To Workspace2' */

  struct {
    void *TUbufferPtrs[16];
  } TransportDelay_PWORK_l;            /* '<S8>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S8>/To Workspace' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK_h;            /* '<S9>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK_a;              /* '<S9>/To Workspace2' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK_p;            /* '<S10>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_d;               /* '<S10>/To Workspace' */

  void* SINK_1_Simulator;              /* '<S108>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S108>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S108>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S108>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S108>/SINK_1' */
  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK;              /* '<S7>/Transport Delay' */

  struct {
    int_T Tail[8];
    int_T Head[8];
    int_T Last[8];
    int_T CircularBufSize[8];
  } TransportDelay_IWORK_o;            /* '<S8>/Transport Delay' */

  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK_a;            /* '<S9>/Transport Delay' */

  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK_i;            /* '<S10>/Transport Delay' */

  boolean_T STATE_1_CallSimulatorOutput;/* '<S108>/STATE_1' */
  boolean_T OUTPUT_1_0_CallSimulatorOutput;/* '<S108>/OUTPUT_1_0' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S108>/SINK_1' */
} DW_PlatformAssem_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0[2];/* '<S108>/INPUT_12_1_1' */
  real_T PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0[2];/* '<S108>/INPUT_4_1_1' */
  real_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0[2];/* '<S108>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0[2];/* '<S108>/INPUT_9_1_1' */
  real_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0[2];/* '<S108>/INPUT_11_1_1' */
  real_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0[2];/* '<S108>/INPUT_10_1_1' */
  real_T PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0[2];/* '<S108>/INPUT_8_1_1' */
  real_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0[2];/* '<S108>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0[2];/* '<S108>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0[2];/* '<S108>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0[2];/* '<S108>/INPUT_7_1_1' */
  real_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0[2];/* '<S108>/INPUT_1_1_1' */
  real_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} X_PlatformAssem_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0[2];/* '<S108>/INPUT_12_1_1' */
  real_T PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0[2];/* '<S108>/INPUT_4_1_1' */
  real_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0[2];/* '<S108>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0[2];/* '<S108>/INPUT_9_1_1' */
  real_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0[2];/* '<S108>/INPUT_11_1_1' */
  real_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0[2];/* '<S108>/INPUT_10_1_1' */
  real_T PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0[2];/* '<S108>/INPUT_8_1_1' */
  real_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0[2];/* '<S108>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0[2];/* '<S108>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0[2];/* '<S108>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0[2];/* '<S108>/INPUT_7_1_1' */
  real_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0[2];/* '<S108>/INPUT_1_1_1' */
  real_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} XDot_PlatformAssem_T;

/* State disabled  */
typedef struct {
  boolean_T PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0[2];/* '<S108>/INPUT_12_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0[2];/* '<S108>/INPUT_4_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0[2];/* '<S108>/INPUT_3_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0[2];/* '<S108>/INPUT_9_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0[2];/* '<S108>/INPUT_11_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0[2];/* '<S108>/INPUT_10_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0[2];/* '<S108>/INPUT_8_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0[2];/* '<S108>/INPUT_2_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0[2];/* '<S108>/INPUT_5_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0[2];/* '<S108>/INPUT_6_1_1' */
  boolean_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0[2];/* '<S108>/INPUT_7_1_1' */
  boolean_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0[2];/* '<S108>/INPUT_1_1_1' */
  boolean_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} XDis_PlatformAssem_T;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            PlatformAssem_B
#define BlockIO                        B_PlatformAssem_T
#define rtX                            PlatformAssem_X
#define ContinuousStates               X_PlatformAssem_T
#define rtXdot                         PlatformAssem_XDot
#define StateDerivatives               XDot_PlatformAssem_T
#define tXdis                          PlatformAssem_XDis
#define StateDisabled                  XDis_PlatformAssem_T
#define rtP                            PlatformAssem_P
#define Parameters                     P_PlatformAssem_T
#define rtDWork                        PlatformAssem_DW
#define D_Work                         DW_PlatformAssem_T

/* Parameters (auto storage) */
struct P_PlatformAssem_T_ {
  real_T sensor_delay;                 /* Variable: sensor_delay
                                        * Referenced by:
                                        *   '<S7>/Transport Delay'
                                        *   '<S8>/Transport Delay'
                                        *   '<S9>/Transport Delay'
                                        *   '<S10>/Transport Delay'
                                        */
  real_T base_px_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_px'
                                        */
  real_T base_py_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_py'
                                        */
  real_T base_pz_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_pz'
                                        */
  real_T base_qx_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qx'
                                        */
  real_T base_qy_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qy'
                                        */
  real_T base_qz_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qz'
                                        */
  real_T angle1_Value;                 /* Expression: 1.9199
                                        * Referenced by: '<Root>/angle1'
                                        */
  real_T angle3_Value;                 /* Expression: 1.9199
                                        * Referenced by: '<Root>/angle3'
                                        */
  real_T angle4_Value;                 /* Expression: -2.4435
                                        * Referenced by: '<Root>/angle4'
                                        */
  real_T angle5_Value;                 /* Expression: 2.618
                                        * Referenced by: '<Root>/angle5'
                                        */
  real_T angle6_Value;                 /* Expression: -2.618
                                        * Referenced by: '<Root>/angle6'
                                        */
  real_T angle2_Value;                 /* Expression: -1.9199
                                        * Referenced by: '<Root>/angle2'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S7>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_b;  /* Expression: 0
                                        * Referenced by: '<S8>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_a;  /* Expression: 0
                                        * Referenced by: '<S9>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_n;  /* Expression: 0
                                        * Referenced by: '<S10>/Transport Delay'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PlatformAssem_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[97];
  real_T odeF[13][97];
  real_T odeX0[97];
  ODE8_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_PlatformAssem_T PlatformAssem_P;

/* Block signals (auto storage) */
extern B_PlatformAssem_T PlatformAssem_B;

/* Continuous states (auto storage) */
extern X_PlatformAssem_T PlatformAssem_X;

/* Block states (auto storage) */
extern DW_PlatformAssem_T PlatformAssem_DW;

/* Model entry point functions */
extern void PlatformAssem_initialize(void);
extern void PlatformAssem_output(void);
extern void PlatformAssem_update(void);
extern void PlatformAssem_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern PlatformAssem_rtModel *PlatformAssem(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_PlatformAssem_T *const PlatformAssem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PlatformAssem'
 * '<S1>'   : 'PlatformAssem/PS-Simulink Converter1'
 * '<S2>'   : 'PlatformAssem/PS-Simulink Converter2'
 * '<S3>'   : 'PlatformAssem/PS-Simulink Converter3'
 * '<S4>'   : 'PlatformAssem/PS-Simulink Converter4'
 * '<S5>'   : 'PlatformAssem/PS-Simulink Converter5'
 * '<S6>'   : 'PlatformAssem/PS-Simulink Converter6'
 * '<S7>'   : 'PlatformAssem/Platform Acceleration (Abs)'
 * '<S8>'   : 'PlatformAssem/Platform Orientation'
 * '<S9>'   : 'PlatformAssem/Platform Translation (Abs)'
 * '<S10>'  : 'PlatformAssem/Platform Translation (Rel) '
 * '<S11>'  : 'PlatformAssem/Rod_assem_1'
 * '<S12>'  : 'PlatformAssem/Rod_assem_11'
 * '<S13>'  : 'PlatformAssem/Rod_assem_12'
 * '<S14>'  : 'PlatformAssem/Rod_assem_13'
 * '<S15>'  : 'PlatformAssem/Rod_assem_14'
 * '<S16>'  : 'PlatformAssem/Rod_assem_15'
 * '<S17>'  : 'PlatformAssem/Simulink-PS Converter'
 * '<S18>'  : 'PlatformAssem/Simulink-PS Converter1'
 * '<S19>'  : 'PlatformAssem/Simulink-PS Converter10'
 * '<S20>'  : 'PlatformAssem/Simulink-PS Converter11'
 * '<S21>'  : 'PlatformAssem/Simulink-PS Converter2'
 * '<S22>'  : 'PlatformAssem/Simulink-PS Converter3'
 * '<S23>'  : 'PlatformAssem/Simulink-PS Converter4'
 * '<S24>'  : 'PlatformAssem/Simulink-PS Converter5'
 * '<S25>'  : 'PlatformAssem/Simulink-PS Converter6'
 * '<S26>'  : 'PlatformAssem/Simulink-PS Converter7'
 * '<S27>'  : 'PlatformAssem/Simulink-PS Converter8'
 * '<S28>'  : 'PlatformAssem/Simulink-PS Converter9'
 * '<S29>'  : 'PlatformAssem/Solver Configuration'
 * '<S30>'  : 'PlatformAssem/Subsystem'
 * '<S31>'  : 'PlatformAssem/Subsystem1'
 * '<S32>'  : 'PlatformAssem/servo_arm_1_RIGID'
 * '<S33>'  : 'PlatformAssem/servo_arm_2_RIGID'
 * '<S34>'  : 'PlatformAssem/servo_arm_3_RIGID'
 * '<S35>'  : 'PlatformAssem/servo_arm_4_RIGID'
 * '<S36>'  : 'PlatformAssem/servo_arm_5_RIGID'
 * '<S37>'  : 'PlatformAssem/servo_arm_6_RIGID'
 * '<S38>'  : 'PlatformAssem/PS-Simulink Converter1/EVAL_KEY'
 * '<S39>'  : 'PlatformAssem/PS-Simulink Converter2/EVAL_KEY'
 * '<S40>'  : 'PlatformAssem/PS-Simulink Converter3/EVAL_KEY'
 * '<S41>'  : 'PlatformAssem/PS-Simulink Converter4/EVAL_KEY'
 * '<S42>'  : 'PlatformAssem/PS-Simulink Converter5/EVAL_KEY'
 * '<S43>'  : 'PlatformAssem/PS-Simulink Converter6/EVAL_KEY'
 * '<S44>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter7'
 * '<S45>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter8'
 * '<S46>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter9'
 * '<S47>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter7/EVAL_KEY'
 * '<S48>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter8/EVAL_KEY'
 * '<S49>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter9/EVAL_KEY'
 * '<S50>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter'
 * '<S51>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter7'
 * '<S52>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter/EVAL_KEY'
 * '<S53>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter7/EVAL_KEY'
 * '<S54>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter7'
 * '<S55>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter8'
 * '<S56>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter9'
 * '<S57>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter7/EVAL_KEY'
 * '<S58>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter8/EVAL_KEY'
 * '<S59>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter9/EVAL_KEY'
 * '<S60>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter10'
 * '<S61>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter8'
 * '<S62>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter9'
 * '<S63>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter10/EVAL_KEY'
 * '<S64>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter8/EVAL_KEY'
 * '<S65>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter9/EVAL_KEY'
 * '<S66>'  : 'PlatformAssem/Rod_assem_1/platform_rods_1_RIGID'
 * '<S67>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_1_RIGID'
 * '<S68>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_2_RIGID'
 * '<S69>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S70>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S71>'  : 'PlatformAssem/Rod_assem_11/platform_rods_1_RIGID'
 * '<S72>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_1_RIGID'
 * '<S73>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_2_RIGID'
 * '<S74>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S75>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S76>'  : 'PlatformAssem/Rod_assem_12/platform_rods_1_RIGID'
 * '<S77>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_1_RIGID'
 * '<S78>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_2_RIGID'
 * '<S79>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S80>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S81>'  : 'PlatformAssem/Rod_assem_13/platform_rods_1_RIGID'
 * '<S82>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_1_RIGID'
 * '<S83>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_2_RIGID'
 * '<S84>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S85>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S86>'  : 'PlatformAssem/Rod_assem_14/platform_rods_1_RIGID'
 * '<S87>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_1_RIGID'
 * '<S88>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_2_RIGID'
 * '<S89>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S90>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S91>'  : 'PlatformAssem/Rod_assem_15/platform_rods_1_RIGID'
 * '<S92>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_1_RIGID'
 * '<S93>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_2_RIGID'
 * '<S94>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S95>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S96>'  : 'PlatformAssem/Simulink-PS Converter/EVAL_KEY'
 * '<S97>'  : 'PlatformAssem/Simulink-PS Converter1/EVAL_KEY'
 * '<S98>'  : 'PlatformAssem/Simulink-PS Converter10/EVAL_KEY'
 * '<S99>'  : 'PlatformAssem/Simulink-PS Converter11/EVAL_KEY'
 * '<S100>' : 'PlatformAssem/Simulink-PS Converter2/EVAL_KEY'
 * '<S101>' : 'PlatformAssem/Simulink-PS Converter3/EVAL_KEY'
 * '<S102>' : 'PlatformAssem/Simulink-PS Converter4/EVAL_KEY'
 * '<S103>' : 'PlatformAssem/Simulink-PS Converter5/EVAL_KEY'
 * '<S104>' : 'PlatformAssem/Simulink-PS Converter6/EVAL_KEY'
 * '<S105>' : 'PlatformAssem/Simulink-PS Converter7/EVAL_KEY'
 * '<S106>' : 'PlatformAssem/Simulink-PS Converter8/EVAL_KEY'
 * '<S107>' : 'PlatformAssem/Simulink-PS Converter9/EVAL_KEY'
 * '<S108>' : 'PlatformAssem/Solver Configuration/EVAL_KEY'
 * '<S109>' : 'PlatformAssem/Subsystem/upper_platform_1_RIGID'
 * '<S110>' : 'PlatformAssem/Subsystem1/Servo_Motor_12_RIGID'
 * '<S111>' : 'PlatformAssem/Subsystem1/Servo_Motor_13_RIGID'
 * '<S112>' : 'PlatformAssem/Subsystem1/Servo_Motor_14_RIGID'
 * '<S113>' : 'PlatformAssem/Subsystem1/Servo_Motor_15_RIGID'
 * '<S114>' : 'PlatformAssem/Subsystem1/Servo_Motor_1_RIGID'
 * '<S115>' : 'PlatformAssem/Subsystem1/Servo_Motor_7_RIGID'
 * '<S116>' : 'PlatformAssem/Subsystem1/bottom_platform_1_RIGID'
 * '<S117>' : 'PlatformAssem/Subsystem1/servo_mount_12_RIGID'
 * '<S118>' : 'PlatformAssem/Subsystem1/servo_mount_13_RIGID'
 * '<S119>' : 'PlatformAssem/Subsystem1/servo_mount_14_RIGID'
 * '<S120>' : 'PlatformAssem/Subsystem1/servo_mount_15_RIGID'
 * '<S121>' : 'PlatformAssem/Subsystem1/servo_mount_1_RIGID'
 * '<S122>' : 'PlatformAssem/Subsystem1/servo_mount_7_RIGID'
 */
#endif                                 /* RTW_HEADER_PlatformAssem_h_ */
