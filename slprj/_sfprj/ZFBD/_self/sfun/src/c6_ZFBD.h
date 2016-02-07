#ifndef __c6_ZFBD_h__
#define __c6_ZFBD_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c6_ResolvedFunctionInfo
#define typedef_c6_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c6_ResolvedFunctionInfo;

#endif                                 /*typedef_c6_ResolvedFunctionInfo*/

#ifndef typedef_SFc6_ZFBDInstanceStruct
#define typedef_SFc6_ZFBDInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c6_sfEvent;
  boolean_T c6_isStable;
  boolean_T c6_doneDoubleBufferReInit;
  uint8_T c6_is_active_c6_ZFBD;
} SFc6_ZFBDInstanceStruct;

#endif                                 /*typedef_SFc6_ZFBDInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_ZFBD_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_ZFBD_get_check_sum(mxArray *plhs[]);
extern void c6_ZFBD_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
