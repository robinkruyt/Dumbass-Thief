#ifndef GARBAGELEVEL
#define GARBAGELEVEL

#include "GameState.h"
#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "Character.h"
#include "Tilemap.h"
#include "EnemySpawner.h"


class garbageLevel : public GameState {
public:
	Tilemap tilemap;
	Character speler;

	EnemySpawner oldLadySpawn;

	garbageLevel(void);
	virtual ~garbageLevel(void);
	
	void update();
	void draw();
};

#endif
