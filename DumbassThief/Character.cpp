#include "Character.h"

#include "GameEngine.h"

#include "Level1.h"


Character::Character(void) { accl = 0.005f; topspeed = 0.02f; }
Character::~Character(void) { }

GameEngine *GameEngine::s_instance = 0;
void Character::update() {
	
	if (GameEngine::instance()->controls[0]) {
		if (speed.x > -topspeed) {
		    speed.x -= accl;
		}
    }

	if (GameEngine::instance()->controls[1]) {
		if (speed.x < topspeed) {
			speed.x += accl;
		}
	}
	    
	if (GameEngine::instance()->controls[2]) {
		if(speed.y == 0)
		{
			speed.y = -accl*2;
		}
	}



	int x1,x2,y1,y2;
  	
	// Lets get vertical
	position.y += speed.y;
	x1 = (int)(position.x + 0.2f);
	x2 = (int)(position.x + 0.8f); // I'm a computer, let me just check this twice. No biggy.

	y1 = (int)(position.y + 1); // WHERE ARE MY FEET?

	bool touchfloor = false;
	if (level_one[x1+(y1*level_size[0])] == 1 || level_one[x2+(y1*level_size[0])] == 1) { // Checking it twice. We dont want to miss this.
		touchfloor = true;
	}
		
	if (touchfloor) {
			position.y = (int)(y1-1);
			speed.y = 0;

			if (speed.x > 0) { speed.x -= accl/5; }
			if (speed.x < 0) { speed.x += accl/5; }

	} else {
			speed.y += accl; // GRAVITY 
	}

	y1 = (int)(position.y); // Where's mah head at?

	bool touchroof = false;
	
	if (level_one[x1+(y1*level_size[0])] == 1 || level_one[x2+(y1*level_size[0])] == 1) {
		touchroof = true;
	}

	if (touchroof) {
		position.y = (int)(y1 + 1);
		speed.y = 1;
	}

	// Lets get horizontal.
	position.x += speed.x;
	x1 = (int)(position.x+1);
	y1 = (int)(position.y + 0.2f);
	y2 = (int)(position.y + 0.8f);

	bool touchright = false;
	if (level_one[x1+(y1*level_size[0])] == 1 || level_one[x1+(y2*level_size[0])] == 1) {
		touchright = true;
	}

	if (touchright) {
		position.x = (int)(x1 - 1);
		speed.x = 0;
	}

	x1 = (int)(position.x-0.5f);

	bool touchleft = false;
	if (level_one[x1+(y1*level_size[0])] == 1 || level_one[x1+(y2*level_size[0])] == 1) {
		touchleft = true;
	}

	if (touchleft) {
		position.x = (x1 + 1);
		speed.x = 0;
	}

	Plane::update();

	GameEngine::instance()->cameraPosition.x = -drawPosition.x;
	GameEngine::instance()->cameraPosition.y = -drawPosition.y;
	
}
void Character::draw() {
	sceGuTexImage(0, 128, 128, 128, pix_Thief);
	Plane::draw();
}
