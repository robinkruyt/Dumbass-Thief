#include "GameEngine.h"

/*
GameState GameEngine::getGamestate() {
	return currentState;
}
*/
void GameEngine::setGamestate(GameState &gm) {
	currentState = &gm;
}


void GameEngine::update() {
	currentState->update();
}
