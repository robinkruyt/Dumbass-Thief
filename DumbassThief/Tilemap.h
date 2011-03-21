#ifndef TILEMAP_H_
#define TILEMAP_H_

#include <vector>
#include "Tile.h"
#include "Level1.h"

class Tilemap {
public:
	// Vars
	std::vector<Tile*> tiles;

	Tilemap(/*unsigned int level[][]*/);
	virtual ~Tilemap();
	
	void draw();
	void update(); // Is dit nodig?

};

#endif
