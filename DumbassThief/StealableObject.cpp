#include "StealableObject.h"

StealableObject::StealableObject() {}
StealableObject::~StealableObject() {}

void StealableObject::set(float x, float y, Character &_player) {
	position.x = x;
	position.y = y;

	player = &_player;
	stolen = false;
}

float StealableObject::distance(float s, float e) {
	return abs(s-e);
}

void StealableObject::update() {
	if(stolen) {
		position.x = player->position.x;
		position.y = player->position.y+1;
	}else{
		if(distance(position.x,player->position.x) < 2 && distance(position.y,player->position.y) < 2) {
			stolen=true;
		}
	}
}

void StealableObject::draw() {
	sceGuTexImage(0, 128, 128, 128, pix_cat);
	Plane::draw();
}
