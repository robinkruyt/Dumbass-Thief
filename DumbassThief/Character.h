#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "Plane.h"
#include "Thief.h"

class Character : public Plane {
public:
	Character(void);
	~Character(void);

	void draw();
	void update();

};

#endif
