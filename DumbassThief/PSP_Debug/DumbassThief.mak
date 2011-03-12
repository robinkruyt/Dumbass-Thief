####################################################
# PSP Makefile generated for GNU Make by ProDG VSI #
####################################################

.SILENT:

unexport MAKEFLAGS
unexport MFLAGS

OUTDIR = PSP_Debug
INTDIR = PSP_Debug

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
	-O0\

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
	-O0\

LD=pspsnc
LD_FLAGS=\
	-L$(SCE_PSP_HW_ROOT)/lib\
	-Wl,-r -Wl,-dc\
	-g\

OBJS=\
	"PSP_Debug/GameEngine.obj"\
	"PSP_Debug/GameGroup.obj"\
	"PSP_Debug/GameState.obj"\
	"PSP_Debug/main.obj"\
	"PSP_Debug/MenuState.obj"\
	"PSP_Debug/Plane.obj"\
	"PSP_Debug/Character.obj"\

CST_OBJS=\

CST_OUTS=\

CUSTOM: $(CST_OUTS) $(CST_OBJS)

COMPILE: $(OBJS)

"PSP_Debug/GameEngine.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp" -o $@

"PSP_Debug/GameGroup.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp" -o $@

"PSP_Debug/GameState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp" -o $@

"PSP_Debug/main.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp" -o $@

"PSP_Debug/MenuState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/MenuState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/MenuState.cpp" -o $@

"PSP_Debug/Plane.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Plane.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Plane.cpp" -o $@

"PSP_Debug/Character.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Character.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Character.cpp" -o $@

LINK: "PSP_Debug/tempprx.obj"

"PSP_Debug/tempprx.obj" : $(CST_OBJS) $(OBJS)
	@echo ProDG Linking $@
	$(LD) $(LD_FLAGS) --start-group $(CST_OBJS) $(OBJS) $(LIBS) --end-group -o $@

