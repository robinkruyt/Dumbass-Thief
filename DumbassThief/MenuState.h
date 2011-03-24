#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "GameState.h"
#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "menu.h"
#include "ResizablePlane.h"


class MenuState : public GameState {
public:
	ResizablePlane background;

	MenuState(void);
	virtual ~MenuState(void);
	
	void update();
	void draw();
};

#endif
