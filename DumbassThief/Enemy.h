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

class Enemy : public Plane {
public:
	Enemy();
	Enemy(ScePspFVector3 _spawnLoc, int type);
	virtual ~Enemy(void);

	void update();
	void draw();

private:
	float topspeed;
	float accl;

};

#endif