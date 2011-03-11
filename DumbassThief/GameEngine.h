#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include "GameState.h"
#include "MenuState.h"

#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>




class GameEngine {
	static GameEngine *s_instance;
	GameState *currentState;

	//GameEngine(GameState _gameState){ gameState = _gameState; } // voorbeeld init dat nog niet echt werkt...

public:
	// Vars
	
	ScePspFVector3	cameraPosition;


	// Functions
	GameState getGamestate();
	void setGamestate(GameState &gm);
	void init();
	void update();
	void draw();
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