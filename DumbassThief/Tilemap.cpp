#include "Tilemap.h"


#include "wallTile.h"
#include "floorTile.h"

//Textures
#include "House_Door.h"
#include "House_DoorTop.h"
#include "House_Left.h"
#include "House_LeftTop.h"
#include "House_Right.h"
#include "House_RightTop.h"
#include "House_Top.h"
#include "House_Wall.h"
#include "House_Window.h"
#include "Street.h"

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
	
	/* DEBUG
	for(unsigned int i = 0; i < tiles.size(); i++)
	{
		if(tiles[i]->type == 1) {
			sceGuTexImage(0, 128, 128, 128, pix_floorTile);
			tiles[i]->draw();
		}else if(tiles[i]->type == 2) {
			sceGuTexImage(0, 128, 128, 128, pix_wallTile);
			tiles[i]->draw();
		}
	}*/

	for(unsigned int i = 0; i < tiles.size(); i++)
	{
		switch(tiles[i]->type) {
			case 1: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Door);
				tiles[i]->draw();
			}break;
			case 2: {
				sceGuTexImage(0, 128, 128, 128, pix_House_DoorTop);
				tiles[i]->draw();
			}break;
			case 3: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Left);
				tiles[i]->draw();
			}break;
			case 4: {
				sceGuTexImage(0, 128, 128, 128, pix_House_LeftTop);
				tiles[i]->draw();
			}break;
			case 5: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Right);
				tiles[i]->draw();
			}break;
			case 6: {
				sceGuTexImage(0, 128, 128, 128, pix_House_RightTop);
				tiles[i]->draw();
			}break;
			case 7: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Top);
				tiles[i]->draw();
			}break;
			case 8: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Wall);
				tiles[i]->draw();
			}break;
			case 9: {
				sceGuTexImage(0, 128, 128, 128, pix_House_Window);
				tiles[i]->draw();
			}break;
			case 10: {
				sceGuTexImage(0, 128, 128, 128, pix_Street);
				tiles[i]->draw();
			}break;
		}
	}
}

