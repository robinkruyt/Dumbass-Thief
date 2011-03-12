#include "Character.h"

Character::Character(void) { }
Character::~Character(void) { }

void Character::update() {}
void Character::draw() {
	sceGuTexImage(0, 128, 128, 128, pix_Thief);
	Plane::draw();
}
