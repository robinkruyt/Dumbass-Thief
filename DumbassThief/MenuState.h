#pragma once
#include "GameState.h"

class MenuState : public GameState {
public:

	MenuState(void);
	virtual ~MenuState(void);

	
	void update();
	virtual void draw();
};
