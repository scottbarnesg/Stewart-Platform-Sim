###########################################################################
## Makefile generated for Simulink model 'PlatformAssem'. 
## 
## Makefile     : PlatformAssem.mk
## Generated on : Wed Feb 28 01:20:27 2018
## MATLAB Coder version: 3.4 (R2017b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/PlatformAssem.exe
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.
# MODELREF_LINK_RSPFILE   Include paths for the model reference build
# GEN_LINKER_RESPONSE     Command to generate a linker response file 
# CMD_FILE                Command file

PRODUCT_NAME              = PlatformAssem
MAKEFILE                  = PlatformAssem.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2017b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2017b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = E:/Stewart-Platform-Sim
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
MODELREF_LINK_RSPFILE_NAME = PlatformAssem_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_LINK_RSPFILE     = PlatformAssem_ref.rsp
GEN_LINKER_RESPONSE       = $(MATLAB_ARCH_BIN)/createResponseFile.exe 1 
CMD_FILE                  = $(PRODUCT_NAME).rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSM_SSCI_ERT_LCC_OBJS   = 
LIBSM_ERT_LCC_OBJS        = 
LIBPM_MATH_ERT_LCC_OBJS   = 
LIBSSC_SLI_ERT_LCC_OBJS   = 
LIBSSC_CORE_ERT_LCC_OBJS  = 
LIBNE_ERT_LCC_OBJS        = 
LIBMC_ERT_LCC_OBJS        = 
LIBEX_ERT_LCC_OBJS        = 
LIBPM_ERT_LCC_OBJS        = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          LCC-win64 v2.4.1 | gmake (64-bit Windows)
# Supported Version(s):    2.4.1
# ToolchainInfo Version:   R2017b
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

SHELL              = cmd
LCC_ROOT           = $(MATLAB_ROOT)/sys/lcc64/lcc64
LCC_BUILDLIB       = $(LCC_ROOT)/bin/buildlib
LCC_LIB            = $(LCC_ROOT)/lib64
MW_EXTERNLIB_DIR   = $(MATLAB_ROOT)/extern/lib/win64/microsoft
MW_LIB_DIR         = $(MATLAB_ROOT)/lib/win64
TOOLCHAIN_INCLUDES = -I$(LCC_ROOT)/include64
MEX_OPTS_FILE      = $(MATLAB_ROOT/rtw/c/tools/lcc-win64.xml

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Lcc-win64 C Compiler
CC_PATH = $(LCC_ROOT)/bin
CC = "$(CC_PATH)/lcc64"

# Linker: Lcc-win64 Linker
LD_PATH = $(LCC_ROOT)/bin
LD = "$(LD_PATH)/lcclnk64"

# Archiver: Lcc-win64 Archiver
AR_PATH = $(LCC_ROOT)/bin
AR = "$(AR_PATH)/lcclib64"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -Fo
LDDEBUG             =
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = /out:
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              =
CFLAGS               = -c -w -noregistrylookup -nodeclspec -I$(LCC_ROOT)/include64
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           = -win64 $(MEX_SRC) $(MEX_OPT_FILE)$(INCLUDES) -outdir $(RELATIVE_PATH_TO_ANCHOR)
MEX_LDFLAGS          = LINKFLAGS="$$LINKFLAGS $(LDFLAGS_ADDITIONAL)"
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dll -entry LibMain -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL) $(DEF_FILE)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .obj
C_EXT               = .c
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/PlatformAssem.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/PlatformAssem_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/pm_math/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=PlatformAssem -DNUMST=2 -DNCSTATES=97 -DHAVESTDIO

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_create.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_setParameters.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_asserts.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_deriv.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_checkDynamics.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_output.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_assembly.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_computeConstraintError.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem_f0ca4364_1_gateway.c $(START_DIR)/PlatformAssem_ert_rtw/pm_printf.c $(START_DIR)/PlatformAssem_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/PlatformAssem_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/PlatformAssem_ert_rtw/rt_lu_real.c $(START_DIR)/PlatformAssem_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/PlatformAssem_ert_rtw/PlatformAssem.c

MAIN_SRC = $(START_DIR)/PlatformAssem_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = PlatformAssem_f0ca4364_1.obj PlatformAssem_f0ca4364_1_create.obj PlatformAssem_f0ca4364_1_setParameters.obj PlatformAssem_f0ca4364_1_asserts.obj PlatformAssem_f0ca4364_1_deriv.obj PlatformAssem_f0ca4364_1_checkDynamics.obj PlatformAssem_f0ca4364_1_output.obj PlatformAssem_f0ca4364_1_assembly.obj PlatformAssem_f0ca4364_1_computeConstraintError.obj PlatformAssem_f0ca4364_1_gateway.obj pm_printf.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj PlatformAssem.obj

MAIN_OBJ = ert_main.obj

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/sm/ssci/lib/win64/SM_SSC~2.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/sm/core/lib/win64/SM_ERT~1.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/pm_math/lib/win64/PM_MAT~2.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/simscape/engine/sli/lib/win64/SSC_SL~2.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/simscape/engine/core/lib/win64/SSC_CO~2.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/NETWOR~1/lib/win64/NE_ERT~1.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/math/core/lib/win64/MC_ERT~1.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/external/library/lib/win64/EX_ERT~1.LIB C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/FOUNDA~1/core/lib/win64/PM_ERT~1.LIB

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : build


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	$(GEN_LINKER_RESPONSE) $(CMD_FILE) $(subst /,\,$(OBJS))
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) $(subst /,\,$(subst /,\,$(MAIN_OBJ))) $(subst /,\,$(subst /,\,$(LIBS))) $(subst /,\,$(subst /,\,$(SYSTEM_LIBS))) $(subst /,\,$(subst /,\,$(TOOLCHAIN_LIBS)))
	@echo "### Created: $(PRODUCT)"
	$(RM) $(CMD_FILE)


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/PlatformAssem_ert_rtw/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


#------------------------
# BUILDABLE LIBRARIES
#------------------------

C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/sm/ssci/lib/win64/sm_ssci_ert_lcc.lib : $(LIBSM_SSCI_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSM_SSCI_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/sm/core/lib/win64/sm_ert_lcc.lib : $(LIBSM_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSM_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/pm_math/lib/win64/pm_math_ert_lcc.lib : $(LIBPM_MATH_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBPM_MATH_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_ert_lcc.lib : $(LIBSSC_SLI_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSSC_SLI_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_ert_lcc.lib : $(LIBSSC_CORE_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSSC_CORE_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/NETWOR~1/lib/win64/ne_ert_lcc.lib : $(LIBNE_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBNE_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/math/core/lib/win64/mc_ert_lcc.lib : $(LIBMC_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBMC_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/external/library/lib/win64/ex_ert_lcc.lib : $(LIBEX_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBEX_ERT_LCC_OBJS)


C:/PROGRA~1/MATLAB/R2017b/toolbox/physmod/common/FOUNDA~1/core/lib/win64/pm_ert_lcc.lib : $(LIBPM_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBPM_ERT_LCC_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


