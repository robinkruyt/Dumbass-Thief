#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "GameState.h"
#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "Character.h"
#include "Tilemap.h"

class MenuState : public GameState {
public:
	
	Tilemap tilemap;

	MenuState(void);
	virtual ~MenuState(void);
	
	Character speler;
	
	void update();
	void draw();
};

#endif
