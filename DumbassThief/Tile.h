#ifndef TILE_H_
#define TILE_H_

#include "Plane.h"

class Tile : public Plane {
public:
	int type;

	Tile(float x, float y, int Type);
	virtual ~Tile();

	void draw();
};

#endif
