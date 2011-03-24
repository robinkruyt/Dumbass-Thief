#include "garbageLevel.h"

garbageLevel::garbageLevel(void) {
	speler.position.x = 4;
	speler.position.y = 2;
	defaultGroup.add(&speler);
}

garbageLevel::~garbageLevel(void) { }

void garbageLevel::update() {
	defaultGroup.update();
}
void garbageLevel::draw() {
	tilemap.draw();
	defaultGroup.draw();
} 


