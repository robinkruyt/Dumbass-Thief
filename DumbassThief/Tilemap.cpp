#include "Tilemap.h"
#include "wallTile.h"
#include "floorTile.h"

//#include "Plane.h"

Tilemap::Tilemap()
{
	for(float x = 0; x < level_size[0]; x++) {
		for(float y = 0; y < level_size[1]; y++) {
			int index = x+y*level_size[0];
			tiles.push_back(new Tile(x, y, level_one[index]));
		}
	}
}

Tilemap::~Tilemap()
{
	while(!tiles.empty())
	{
		delete tiles.back();
		tiles.pop_back();
	}
}

void Tilemap::draw() {
	//textures[tiles[i]->type]

	for(unsigned int i = 0; i < tiles.size(); i++)
	{
		if(tiles[i]->type == 1) {
			sceGuTexImage(0, 128, 128, 128, pix_floorTile);
			tiles[i]->draw();
		}else if(tiles[i]->type == 2) {
			sceGuTexImage(0, 128, 128, 128, pix_wallTile);
			tiles[i]->draw();
		}
	}
}

