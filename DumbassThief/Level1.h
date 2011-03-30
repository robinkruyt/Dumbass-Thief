#ifndef LEVEL1_H_
#define LEVEL1_H_


//#include <map> 
/*
Include all Textures
#include "floorTile.h"

textures array
levelObjects array
*/

//int textures[10] = {pix_THIEF, pix_kaas};

int collisionIndex = 1;
unsigned int level_size[2] = {15,8};
unsigned int level_one[15*8] = {
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,
2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,
2,2,2,2,2,2,2,2,0,0,0,0,0,0,2,
2,2,0,0,0,0,0,2,2,2,2,2,0,0,2,
2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
};

//std::map<int[], int[]> level_waypoints;

#endif