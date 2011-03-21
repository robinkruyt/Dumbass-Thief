#ifndef GAMEGROUP_H_
#define GAMEGROUP_H_

#include <vector>

#include "Plane.h"

class GameGroup {
public:
	// Vars
	std::vector<Plane*> members;

	GameGroup();
	virtual ~GameGroup();

	void update();
	void draw();

	void add(Plane* member);
	void remove(int index);

	// ADD, REPLACE, REMOVE(scrollfactor)
};

#endif /* GAMEGROUP_H_ */