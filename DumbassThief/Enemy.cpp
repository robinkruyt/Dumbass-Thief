#include "Enemy.h"

Enemy::Enemy() {};

Enemy::Enemy(ScePspFVector3 _spawnLoc, int type){
	position.x = _spawnLoc.x;
	position.y = _spawnLoc.y;
}

Enemy::~Enemy() {}

void Enemy::update() {
	Plane::update();
}

void Enemy::draw() {
	sceGuTexImage(0, 128, 128, 128, pix_Granny);
	Plane::draw();
}