#ifndef ENEMY
#define ENEMY

#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "Plane.h"
#include "tex_Granny.h"

#include "Level1.h" // VERHUIS DIT.

#include "GameEngine.h"
#include "Character.h"

class Enemy : public Plane {
public:
	Enemy();
	Enemy(ScePspFVector3 _spawnLoc, int type, Character _player);
	virtual ~Enemy(void);

	void update();
	void draw();

private:
	float topspeed;
	float accl;
	Character player;

};

#endif