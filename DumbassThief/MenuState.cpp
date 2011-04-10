#include "MenuState.h"
#include "GameEngine.h"

#include "garbageLevel.h"

GameEngine *GameEngine::s_instance = 0;
garbageLevel garbageLvl;
MenuState::MenuState(void){
	
}

MenuState::~MenuState(void){ }

void MenuState::update() {
	background.update();
	//GameEngine::instance()->controls[5]
	if (GameEngine::instance()->controls[5]) {
		GameEngine::instance()->setGamestate(garbageLvl);
	}
}
void MenuState::draw() {
	sceGuTexImage(0, 960, 480, 480, pix_menu);
	background.draw();
} 

