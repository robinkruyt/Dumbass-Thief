#include "MenuState.h"


MenuState::MenuState(void){
	speler.position.x = 4;
	speler.position.y = 2;
	defaultGroup.add(&speler);
}

MenuState::~MenuState(void){ }

void MenuState::update() {
	defaultGroup.update();
}
void MenuState::draw() {
	tilemap.draw();
	defaultGroup.draw();
} 

