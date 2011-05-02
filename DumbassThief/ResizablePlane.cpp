#include "ResizablePlane.h"


ResizablePlane::ResizablePlane()
{
	// Eerste 3 zijn x,y z van texture
	// Volgende 2 hebben iets met de texture te maken
	// Laatste 3 zijn locatie
	float s = 3.2f;
	float sx = 3.5f*s;
	float sy = 2.0f*s;
	float tmp[] = {
		0.0f,	 1.0f,	 0.0f,	 0.0f,	 1.0f,	-sx,	-sy,	 0.0f,
		0.0f,	 0.0f,	 0.0f,	 0.0f,	 1.0f,	-sx,	sy,	 0.0f,
		0.9f,	 1.0f,	 0.0f,	 0.0f,	 1.0f,	sx,   -sy,	 0.0f,
		0.9f,	 0.0f,	 0.0f,	 0.0f,	 1.0f,	sx,	sy,	 0.0f,
	};
	// Pointers zijn vaag, forloops niet.
	for(int i = 0; i < 32; i++ ) {
		model[i]= tmp[i];
	} 
	

	position.x = 0.0f;
	position.y = 0.0f;
	position.z = 0.0f;

	speed.x = 0.0f;
	speed.y = 0.0f;
	speed.z = 0.0f;
	
}

ResizablePlane::~ResizablePlane() {}

void ResizablePlane::update() {
	drawPosition.x = position.x*2;
	drawPosition.y = -position.y*2;
	drawPosition.z = position.z*2;
}

void ResizablePlane::draw() {
	//Set Textures
	sceGuTexMode(SCEGU_PF8888, 0, SCEGU_SINGLE_CLUT, SCEGU_TEXBUF_NORMAL);

	sceGuEnable(SCEGU_TEXTURE);
	sceGuTexFunc(SCEGU_TEX_MODULATE, SCEGU_RGBA);
	sceGuTexMapMode(SCEGU_UV_MAP, 0, 0);
	sceGuTexWrap(SCEGU_CLAMP, SCEGU_CLAMP);
	sceGuTexFilter(SCEGU_LINEAR, SCEGU_LINEAR);

	sceGumPushMatrix();
	sceGumTranslate(&drawPosition);

	sceGuColor(0xffffffff);
	sceGumDrawArray(SCEGU_PRIM_TRIANGLE_STRIP, SCEGU_TEXTURE_FLOAT|SCEGU_NORMAL_FLOAT|SCEGU_VERTEX_FLOAT, 4, 0, model);

	sceGumPopMatrix();

}
