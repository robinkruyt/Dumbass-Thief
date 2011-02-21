#include "GameGroup.h"

#ifndef GAMESTATE_H_
#define GAMESTATE_H_

class GameState {
public:

	GameState();
	virtual ~GameState();
	
	GameGroup defaultGroup;

	virtual void update();
	virtual void draw();
};

#endif /* GAMESTATE_H_ */