####################################################
# PSP Makefile generated for GNU Make by ProDG VSI #
####################################################

.SILENT:

unexport MAKEFLAGS
unexport MFLAGS

OUTDIR = PSP_DebugOpt
INTDIR = PSP_DebugOpt

LIBS=\
	crt0_prx.o\
	libgu.a\
	libgum.a\
	libkernel.a\
	ctrl_stub.a\
	display_stub.a\
	ge_user_stub.a\
	kernel_bridge.o\

WLIBS=\

AS=pspsnc
AS_FLAGS=\
	-DSN_TARGET_PSP_PRX\
	-D_DEBUG\
	-I$(SCE_PSP_HW_ROOT)/include\
	-I.\
	-c\
	-Xmserrors\
	-g\

CC=pspsnc
CC_FLAGS=\
	-DSN_TARGET_PSP_PRX\
	-D_DEBUG\
	-I$(SCE_PSP_HW_ROOT)/include\
	-I.\
	-c\
	-Xmserrors\
	-MMD\
	-g\
	-O3\

CXX=pspsnc
CXX_FLAGS=\
	-DSN_TARGET_PSP_PRX\
	-D_DEBUG\
	-I$(SCE_PSP_HW_ROOT)/include\
	-I.\
	-c\
	-Xmserrors\
	-MMD\
	-g\
	-O3\

LD=pspsnc
LD_FLAGS=\
	-L$(SCE_PSP_HW_ROOT)/lib\
	-Wl,-r -Wl,-dc\
	-g\

OBJS=\
	"PSP_DebugOpt/GameEngine.obj"\
	"PSP_DebugOpt/GameGroup.obj"\
	"PSP_DebugOpt/GameState.obj"\
	"PSP_DebugOpt/main.obj"\

CST_OBJS=\

CST_OUTS=\

CUSTOM: $(CST_OUTS) $(CST_OBJS)

COMPILE: $(OBJS)

"PSP_DebugOpt/GameEngine.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp" -o $@

"PSP_DebugOpt/GameGroup.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp" -o $@

"PSP_DebugOpt/GameState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp" -o $@

"PSP_DebugOpt/main.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp" -o $@

LINK: "PSP_DebugOpt/tempprx.obj"

"PSP_DebugOpt/tempprx.obj" : $(CST_OBJS) $(OBJS)
	@echo ProDG Linking $@
	$(LD) $(LD_FLAGS) --start-group $(CST_OBJS) $(OBJS) $(LIBS) --end-group -o $@

