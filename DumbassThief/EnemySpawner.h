#ifndef ENEMYSPAWNER
#define ENEMYSPAWNER

#include "Enemy.h"

#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>
#include <vector>

#include "GameGroup.h"

#include "Enemy.h"

class EnemySpawner {
public:
	GameGroup enemies;
	//std::vector<IetsPadderigs*> path;
	Enemy enemy;

	EnemySpawner();
	virtual ~EnemySpawner();
	
	void set(ScePspFVector3 _spawnLoc, int _amount, int _type);

	void update();
	void draw();

private:
	ScePspFVector3 spawnLoc;
	int amount;
	int type;

};

#endif