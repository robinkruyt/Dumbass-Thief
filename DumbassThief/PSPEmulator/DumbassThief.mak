####################################################
# PSP Makefile generated for GNU Make by ProDG VSI #
####################################################

.SILENT:

unexport MAKEFLAGS
unexport MFLAGS

OUTDIR = PSPEmulator
INTDIR = PSPEmulator

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
	"PSPEmulator/GameEngine.obj"\
	"PSPEmulator/GameGroup.obj"\
	"PSPEmulator/GameState.obj"\
	"PSPEmulator/main.obj"\

CST_OBJS=\

CST_OUTS=\

CUSTOM: $(CST_OUTS) $(CST_OBJS)

COMPILE: $(OBJS)

"PSPEmulator/GameEngine.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp" -o $@

"PSPEmulator/GameGroup.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp" -o $@

"PSPEmulator/GameState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp" -o $@

"PSPEmulator/main.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp" -o $@

LINK: "PSPEmulator/tempprx.obj"

"PSPEmulator/tempprx.obj" : $(CST_OBJS) $(OBJS)
	@echo ProDG Linking $@
	$(LD) $(LD_FLAGS) --start-group $(CST_OBJS) $(OBJS) $(LIBS) --end-group -o $@

