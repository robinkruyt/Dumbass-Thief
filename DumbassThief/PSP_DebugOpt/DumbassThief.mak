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
	"PSP_DebugOpt/Character.obj"\
	"PSP_DebugOpt/GameEngine.obj"\
	"PSP_DebugOpt/GameGroup.obj"\
	"PSP_DebugOpt/GameState.obj"\
	"PSP_DebugOpt/garbageLevel.obj"\
	"PSP_DebugOpt/main.obj"\
	"PSP_DebugOpt/MenuState.obj"\
	"PSP_DebugOpt/Plane.obj"\
	"PSP_DebugOpt/ResizablePlane.obj"\
	"PSP_DebugOpt/Tile.obj"\
	"PSP_DebugOpt/Tilemap.obj"\
	"PSP_DebugOpt/Enemy.obj"\
	"PSP_DebugOpt/EnemySpawner.obj"\
	"PSP_DebugOpt/StartMenu.obj"\
	"PSP_DebugOpt/StealableObject.obj"\

CST_OBJS=\

CST_OUTS=\

CUSTOM: $(CST_OUTS) $(CST_OBJS)

COMPILE: $(OBJS)

"PSP_DebugOpt/Character.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Character.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Character.cpp" -o $@

"PSP_DebugOpt/GameEngine.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameEngine.cpp" -o $@

"PSP_DebugOpt/GameGroup.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameGroup.cpp" -o $@

"PSP_DebugOpt/GameState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/GameState.cpp" -o $@

"PSP_DebugOpt/garbageLevel.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/garbageLevel.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/garbageLevel.cpp" -o $@

"PSP_DebugOpt/main.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/main.cpp" -o $@

"PSP_DebugOpt/MenuState.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/MenuState.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/MenuState.cpp" -o $@

"PSP_DebugOpt/Plane.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Plane.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Plane.cpp" -o $@

"PSP_DebugOpt/ResizablePlane.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/ResizablePlane.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/ResizablePlane.cpp" -o $@

"PSP_DebugOpt/Tile.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Tile.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Tile.cpp" -o $@

"PSP_DebugOpt/Tilemap.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Tilemap.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Tilemap.cpp" -o $@

"PSP_DebugOpt/Enemy.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Enemy.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/Enemy.cpp" -o $@

"PSP_DebugOpt/EnemySpawner.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/EnemySpawner.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/EnemySpawner.cpp" -o $@

"PSP_DebugOpt/StartMenu.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/StartMenu.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/StartMenu.cpp" -o $@

"PSP_DebugOpt/StealableObject.obj":
	@echo ProDG Compiling "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/StealableObject.cpp"
	$(CXX) $(CXX_FLAGS) "c:/Users/Robin/Documents/Visual Studio 2005/Projects/DumbassThief/DumbassThief/StealableObject.cpp" -o $@

LINK: "PSP_DebugOpt/tempprx.obj"

"PSP_DebugOpt/tempprx.obj" : $(CST_OBJS) $(OBJS)
	@echo ProDG Linking $@
	$(LD) $(LD_FLAGS) --start-group $(CST_OBJS) $(OBJS) $(LIBS) --end-group -o $@

