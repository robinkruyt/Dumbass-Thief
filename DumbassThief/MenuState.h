#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "GameState.h"
#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

//#include "tex_pf8888.h"
//#include "Thief.h"
#include "Plane.h"

class MenuState : public GameState {
public:
	MenuState(void);
	virtual ~MenuState(void);
	
	Plane speler;
	
	void update();
	void draw();
};

#endif
