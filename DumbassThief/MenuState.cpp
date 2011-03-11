#include <stdio.h>

#include "MenuState.h"


MenuState::MenuState(void){
}

MenuState::~MenuState(void){ }

void MenuState::update() {}
void MenuState::draw() {
	//Draw functies aanroepen
	speler.draw();
} 

