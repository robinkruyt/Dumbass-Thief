#include "garbageLevel.h"

garbageLevel::garbageLevel(void) {

	ScePspFVector3 spawnLoc;
	spawnLoc.x = 5;
	spawnLoc.y = 2;
	spawnLoc.z = 0;
	
	oldLadySpawn.set(spawnLoc,3,1, speler);

	speler.position.x = 4;
	speler.position.y = 2;

	cat.set(14,5,speler);

	defaultGroup.add(&speler);
	defaultGroup.add(&cat);
}

garbageLevel::~garbageLevel(void) { }

void garbageLevel::update() {
	oldLadySpawn.update();
	defaultGroup.update();
}
void garbageLevel::draw() {
	tilemap.draw();
	oldLadySpawn.draw();
	defaultGroup.draw();
}


