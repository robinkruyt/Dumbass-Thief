#include "Plane.h"


Plane::Plane()
{
	float tmp[] = {
		0.0f,	 1.0f,	 0.0f,	 0.0f,	 1.0f,	-1.0f,	-1.0f,	 0.0f,
		0.0f,	 0.0f,	 0.0f,	 0.0f,	 1.0f,	-1.0f,	 1.0f,	 0.0f,
		1.0f,	 1.0f,	 0.0f,	 0.0f,	 1.0f,	 1.0f,	-1.0f,	 0.0f,
		1.0f,	 0.0f,	 0.0f,	 0.0f,	 1.0f,	 1.0f,	 1.0f,	 0.0f,
	};
	// Pointers zijn vaag, forloops niet.
	for(int i = 0; i < 32; i++ ) {
		model[i]= tmp[i];
	} 
	

	position.x= 0.0f;
	position.y= 0.0f;
	position.z= 0.0f;
	
}

Plane::~Plane() {}

void Plane::update() {}
void Plane::draw() {
	//Set Textures
	sceGuTexMode(SCEGU_PF8888, 0, SCEGU_SINGLE_CLUT, SCEGU_TEXBUF_NORMAL);

	sceGuEnable(SCEGU_TEXTURE);
	sceGuTexFunc(SCEGU_TEX_MODULATE, SCEGU_RGBA);
	sceGuTexMapMode(SCEGU_UV_MAP, 0, 0);
	sceGuTexWrap(SCEGU_REPEAT, SCEGU_REPEAT);
	sceGuTexFilter(SCEGU_LINEAR, SCEGU_LINEAR);

	sceGumPushMatrix();
	sceGumTranslate(&position);

	sceGuColor(0xffffffff);
	sceGumDrawArray(SCEGU_PRIM_TRIANGLE_STRIP, SCEGU_TEXTURE_FLOAT|SCEGU_NORMAL_FLOAT|SCEGU_VERTEX_FLOAT, 4, 0, model);

	sceGumPopMatrix();

}
