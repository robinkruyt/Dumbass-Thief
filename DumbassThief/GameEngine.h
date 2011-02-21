#include "GameState.h"
#include "MenuState.h"

#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

class GameEngine {
	static GameEngine *s_instance;
	GameState *currentState;

	//GameEngine(GameState _gameState){ gameState = _gameState; } // voorbeeld init dat nog niet echt werkt...

public:
	// Vars
	

	// Functions
	GameState getGamestate();
	void setGamestate(GameState &gm);
	
	void update();
	//void setGamestate(MenuState gs);
	
	//Besta ik al? dan ben ik mezelf. Anders maken we een nieuwe.
	static GameEngine *instance()
    {
        if (!s_instance)
          s_instance = new GameEngine;
        return s_instance;
    }
};

#endif /* GAMEENGINE_H_ */