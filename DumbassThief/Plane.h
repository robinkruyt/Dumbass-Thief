#ifndef PLANE_H_
#define PLANE_H_

#include "Thief.h"

#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

#include "Thief.h"

class Plane
{
public:
	Plane(void);
	~Plane(void);
	
	void update();
	void draw();

private:
	int width; // Width of plane
	int height; // Height of plane

	ScePspFVector3 position; // Position of plane
	float model[32]; // Shape
};

#endif
