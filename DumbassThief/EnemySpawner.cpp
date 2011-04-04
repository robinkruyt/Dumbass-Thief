#include "EnemySpawner.h"

EnemySpawner::EnemySpawner() { }

EnemySpawner::~EnemySpawner(){}

void EnemySpawner::set(ScePspFVector3 _spawnLoc, int _amount, int _type, Character _player)
{
	for(int i = 0; i < _amount; i++) {
		enemies.add(new Enemy(_spawnLoc,1, _player));
		_spawnLoc.x += 1; // Tijdelijk.
	}
}

void EnemySpawner::update()
{
	enemies.update();
}

void EnemySpawner::draw()
{
	enemies.draw();
}
