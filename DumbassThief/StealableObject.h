#ifndef STEALABLE
#define STEALABLE


#include "Plane.h"
#include "Character.h"
#include "cat.h"

#include <cmath>
using namespace std;

class StealableObject : public Plane {
private:
	float distance(float s, float e);

	Character *player;
	bool stolen;

public:
	StealableObject();
	virtual ~StealableObject();

	void set(float x, float y, Character &_player);
	void update();
	void draw();
};

#endif