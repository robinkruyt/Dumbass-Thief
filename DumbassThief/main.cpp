#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "GameEngine.h"
#include "GameState.h"

SCE_MODULE_INFO( DumbassThief, 0, 1, 0 );

MenuState menuState;
GameEngine *GameEngine::s_instance = 0;

void init() {
	GameEngine::instance()->init();
	GameEngine::instance()->setGamestate(menuState);
}

void update(void) {
	GameEngine::instance()->update();
}

void draw(void) {
	GameEngine::instance()->draw();
}

static u_int32	cont;
static int pad_read(void)
{	
	SceCtrlData	pad;
	sceCtrlReadBufferPositive(&pad, 1);
	

	if (pad.Buttons & SCE_CTRL_UP) {
		GameEngine::instance()->controls[2] = 1;
	}else{
		GameEngine::instance()->controls[2] = 0;
	}

	if (pad.Buttons & SCE_CTRL_DOWN) {
		GameEngine::instance()->controls[3] = 1;
	}else{
		GameEngine::instance()->controls[3] = 0;
	}

	if (pad.Buttons & SCE_CTRL_LEFT) {
		GameEngine::instance()->controls[0] = 1;
	}else{
		GameEngine::instance()->controls[0] = 0;
	}

	if (pad.Buttons & SCE_CTRL_RIGHT) {
		GameEngine::instance()->controls[1] = 1;
	}else{
		GameEngine::instance()->controls[1] = 0;
	}

	if (pad.Buttons & SCE_CTRL_CROSS) {
		GameEngine::instance()->controls[5] = 1;
	}else{
		GameEngine::instance()->controls[5] = 0;
	}

	/*if (pad.Buttons & SCE_CTRL_CIRCLE) printf("You pressed circle\n");
	if (pad.Buttons & SCE_CTRL_SQUARE) printf("You pressed square\n");
	if (pad.Buttons & SCE_CTRL_TRIANGLE) printf("You pressed triangle\n");*/
	if (pad.Buttons & SCE_CTRL_START) return 0;

	return 1;
}

int main(void) {
	init();
	
	while (pad_read()) {
		update();
		draw();
		sceDisplayWaitVblankStart();
		sceGuSwapBuffers();
	}
	
	sceGuTerm();

	return 0;
}