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

class Enemy : public Plane {
public:
	Enemy();
	Enemy(ScePspFVector3 _spawnLoc, int type);
	virtual ~Enemy(void);

	void update();
	void draw();

};

#endif