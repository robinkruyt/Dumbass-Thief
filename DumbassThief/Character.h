#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "GameEngine.h"
#include "Level1.h" // Het is netter als dit ergens anders staat. En het als variabele ingeladen wordt.
#include "Plane.h"
#include "Thief.h"

class Character : public Plane {
public:
	Character(void);
	~Character(void);

	void draw();
	void update();

private:
	float topspeed;
	float accl;

};

#endif
