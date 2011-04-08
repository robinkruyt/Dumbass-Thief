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
	"PSP_Debug/Character.obj"\
	"PSP_Debug/Enemy.obj"\
	"PSP_Debug/EnemySpawner.obj"\
	"PSP_Debug/GameEngine.obj"\
	"PSP_Debug/GameGroup.obj"\
	"PSP_Debug/GameState.obj"\
	"PSP_Debug/garbageLevel.obj"\
	"PSP_Debug/main.obj"\
	"PSP_Debug/MenuState.obj"\
	"PSP_Debug/Plane.obj"\
	"PSP_Debug/ResizablePlane.obj"\
	"PSP_Debug/StartMenu.obj"\
	"PSP_Debug/Tile.obj"\
	"PSP_Debug/Tilemap.obj"\

CST_OBJS=\

CST_OUTS=\

CUSTOM: $(CST_OUTS) $(CST_OBJS)

COMPILE: $(OBJS)

"PSP_Debug/Character.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/Character.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/Character.cpp" -o $@

"PSP_Debug/Enemy.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/Enemy.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/Enemy.cpp" -o $@

"PSP_Debug/EnemySpawner.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/EnemySpawner.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/EnemySpawner.cpp" -o $@

"PSP_Debug/GameEngine.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/GameEngine.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/GameEngine.cpp" -o $@

"PSP_Debug/GameGroup.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/GameGroup.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/GameGroup.cpp" -o $@

"PSP_Debug/GameState.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/GameState.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/GameState.cpp" -o $@

"PSP_Debug/garbageLevel.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/garbageLevel.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/garbageLevel.cpp" -o $@

"PSP_Debug/main.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/main.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/main.cpp" -o $@

"PSP_Debug/MenuState.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/MenuState.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/MenuState.cpp" -o $@

"PSP_Debug/Plane.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/Plane.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/Plane.cpp" -o $@

"PSP_Debug/ResizablePlane.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/ResizablePlane.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/ResizablePlane.cpp" -o $@

"PSP_Debug/StartMenu.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/StartMenu.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/StartMenu.cpp" -o $@

"PSP_Debug/Tile.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/Tile.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/Tile.cpp" -o $@

"PSP_Debug/Tilemap.obj":
	@echo ProDG Compiling "z:/Buildouts/DumbassThief/DumbassThief/Tilemap.cpp"
	$(CXX) $(CXX_FLAGS) "z:/Buildouts/DumbassThief/DumbassThief/Tilemap.cpp" -o $@

LINK: "PSP_Debug/tempprx.obj"

"PSP_Debug/tempprx.obj" : $(CST_OBJS) $(OBJS)
	@echo ProDG Linking $@
	$(LD) $(LD_FLAGS) --start-group $(CST_OBJS) $(OBJS) $(LIBS) --end-group -o $@

