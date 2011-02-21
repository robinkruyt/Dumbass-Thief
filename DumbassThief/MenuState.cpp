#include <stdio.h>

#include "MenuState.h"


MenuState::MenuState(void){ }
MenuState::~MenuState(void){ }

void MenuState::update() { printf("MenuUpdate"); }
void MenuState::draw() {} 

