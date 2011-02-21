/* SCE CONFIDENTIAL
PSP(TM) Programmer Tool Runtime Library Release 6.2.0
*/
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "GameEngine.h"
#include "MenuState.h"
#include "GameState.h"

SCE_MODULE_INFO( DumbassThief, 0, 1, 0 );

MenuState menuState;
GameEngine *GameEngine::s_instance = 0;

void init() {
	GameEngine::instance()->setGamestate(menuState);
}

void update(void) {
	//GameEngine::instance()->getGamestate().update();
	GameEngine::instance()->update();
}

void draw(void) {
	//GameEngine::instance()->getGamestate().draw();
}

int main(void) {
	init();
	
	while (1) {
		update();
		//draw();
		sceDisplayWaitVblankStart();
		sceGuSwapBuffers();
	}
	sceGuTerm();

	return 0;
}