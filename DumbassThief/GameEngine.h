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

public:
	// Vars
	ScePspFVector3	cameraPosition;
	int controls[4];

	// Functions
	GameState getGamestate();
	void setGamestate(GameState &gm);
	void init();
	void update();
	void draw();
	
	//Besta ik al? dan ben ik mezelf. Anders maken we een nieuwe. Singleton
	static GameEngine *instance()
    {
        if (!s_instance)
          s_instance = new GameEngine;
        return s_instance;
    }
};

#endif /* GAMEENGINE_H_ */