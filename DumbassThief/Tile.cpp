#include "Tile.h"

Tile::Tile(float x, float y, int Type) {
	position.x= x;
	position.y= y;
	position.z= 0.0f;

	type = Type;
}

Tile::~Tile() {}

void Tile::draw() {
	Plane::update(); // NAAR UPDATE VERHUIZEN.
	Plane::draw();
}
