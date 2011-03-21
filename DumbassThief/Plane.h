#ifndef PLANE_H_
#define PLANE_H_

#include <psptypes.h>
#include <kernel.h>
#include <displaysvc.h>
#include <ctrlsvc.h>
#include <libgu.h>
#include <libgum.h>

class Plane
{
public:
	Plane(void);
	~Plane(void);
	
	virtual void update();
	virtual void draw();

	ScePspFVector3 position; // Position of plane
	ScePspFVector3 speed; // Speed of plane

protected:
	int width; // Width of plane
	int height; // Height of plane

	float model[32]; // Shape

	ScePspFVector3 drawPosition; // Visible position of plane
};

#endif
