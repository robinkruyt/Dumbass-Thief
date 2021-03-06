#include "Enemy.h"

GameEngine *GameEngine::s_instance = 0;
Enemy::Enemy() {};

Enemy::Enemy(ScePspFVector3 _spawnLoc, int type, Character &_player){
	player = &_player;

	position.x = _spawnLoc.x;
	position.y = _spawnLoc.y;

	accl = 0.02f;
	topspeed = 0.1f;
}

Enemy::~Enemy() {}

float Enemy::distance(ScePspFVector3 one, ScePspFVector3 two) {
	return sqrt(pow(two.x - one.x,2)+pow(two.y - one.y,2));
}

void Enemy::update() {	
	if(distance(position, player->position) < 20) {
		if(position.x < player->position.x) {
			controls[0] = 0;
			controls[2] = 1;
		}else{
			controls[0] = 1;
			controls[2] = 0;
		}
		
	}else{
		//To far
			//Welke node is de player het dichst bij?
			//Welke node is the enemy closest to?
			//Traverse playernode till you reach enemy node
	}

	// IF map[x richting][y-1] == niks || map[x richting][y||y+1] == iets.
		//Spring
	
	
	// MOVEMENT
	if (controls[0]) {
		if (speed.x > -0.2f) {
		    speed.x -= 0.05f;
		}
    }
	if (controls[2]) {
		if (speed.x < 0.2f) {
			speed.x += 0.05f;
		}
	}   
	if (controls[1]) {
		if(speed.y == 0)
		{
			speed.y = -0.05f*6;
		}
	}	


	int x1,x2,y1,y2;
  	
	// Lets get vertical
	position.y += speed.y;
	x1 = (int)(position.x + 0.2f);
	x2 = (int)(position.x + 0.8f); // I'm a computer, let me just check this twice. No biggy.

	y1 = (int)(position.y + 1); // WHERE ARE MY FEET?

	bool touchfloor = false;
	if (level_one[x1+(y1*level_size[0])] >= collisionIndex || level_one[x2+(y1*level_size[0])] >= collisionIndex) { // Checking it twice. We dont want to miss this.
		touchfloor = true;
	}
		
	if (touchfloor) {
			position.y = (int)(y1-1);
			speed.y = 0;

			if (speed.x > 0) { speed.x -= accl/5; }
			if (speed.x < 0) { speed.x += accl/5; }

	} else {
			speed.y += accl/2; // GRAVITY 
	}

	y1 = (int)(position.y); // Where's mah head at?

	bool touchroof = false;
	
	if (level_one[x1+(y1*level_size[0])] >= collisionIndex || level_one[x2+(y1*level_size[0])] >= collisionIndex) {
		touchroof = true;
	}

	if (touchroof) {
		position.y = (int)(y1 + 1);
		speed.y = 0.001;
	}

	// Lets get horizontal.
	position.x += speed.x;
	x1 = (int)(position.x+1);
	y1 = (int)(position.y + 0.2f);
	y2 = (int)(position.y + 0.8f);

	bool touchright = false;
	if (level_one[x1+(y1*level_size[0])] >= collisionIndex || level_one[x1+(y2*level_size[0])] >= collisionIndex) {
		touchright = true;
	}

	if (touchright) {
		position.x = (int)(x1 - 1);
		speed.x = 0;
	}

	x1 = (int)(position.x);

	bool touchleft = false;
	if (level_one[x1+(y1*level_size[0])] >= collisionIndex || level_one[x1+(y2*level_size[0])] >= collisionIndex) {
		touchleft = true;
	}

	if (touchleft) {
		position.x = (x1 + 1);
		speed.x = 0;
	}
	

	Plane::update();
}

void Enemy::draw() {
	sceGuTexImage(0, 128, 128, 128, pix_Granny);
	Plane::draw();
}