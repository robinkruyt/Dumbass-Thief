#include "GameEngine.h"

	static char	disp_list[0x10000] __attribute__((aligned(64)));
	static ScePspFMatrix4	matrix_stack[8+8+32+0];

void GameEngine::init() {

	// Start the scene
	sceGuInit();
	sceGuStart(SCEGU_IMMEDIATE, disp_list, sizeof(disp_list));
	
	/* Buffers */
	sceGuDrawBuffer(SCEGU_PF8888, SCEGU_VRAM_BP32_0, SCEGU_VRAM_WIDTH);
	sceGuDispBuffer(SCEGU_SCR_WIDTH, SCEGU_SCR_HEIGHT, SCEGU_VRAM_BP32_1, SCEGU_VRAM_WIDTH);
	sceGuDepthBuffer(SCEGU_VRAM_BP32_2, SCEGU_VRAM_WIDTH);
	
	/* Coordinate Offset */
	sceGuOffset(SCEGU_SCR_OFFSETX, SCEGU_SCR_OFFSETY);

	/* Viewport */
	sceGuViewport(2048, 2048, SCEGU_SCR_WIDTH, SCEGU_SCR_HEIGHT);

	/* Depth stuff */
	sceGuDepthRange(50000, 10000);

	/* Clear The Draw Buffer */
	//??? sceGuClear(GU_COLOR_BUFFER_BIT | GU_DEPTH_BUFFER_BIT);

	/* Viewport Scissoring */
	sceGuScissor(0, 0, SCEGU_SCR_WIDTH, SCEGU_SCR_HEIGHT);
	sceGuEnable(SCEGU_SCISSOR_TEST);

	/* Alpha */
	//??? sceGuAlphaFunc(GU_GREATER,0,0xff);
	sceGuBlendFunc(SCEGU_ADD, SCEGU_SRC_ALPHA, SCEGU_ONE_MINUS_SRC_ALPHA, 0, 0);
	sceGuEnable(SCEGU_BLEND);

	/* Depth */
	sceGuDepthFunc(SCEGU_GEQUAL);
	sceGuEnable(SCEGU_DEPTH_TEST);

	/* Front face vertex order (Clockwise) */
	sceGuFrontFace(SCEGU_CW);

	/* Texture Mode */
    //??? sceGuTexMode(GU_PSM_8888,0,0,0);
    //??? sceGuTexFunc(GU_TFX_REPLACE,GU_TCC_RGBA);
    //??? sceGuTexFilter(GU_NEAREST,GU_NEAREST);

	/* Culling */
    //??? sceGuEnable(GU_CULL_FACE);


    /* Blending */
    //??? sceGuEnable(GU_BLEND);
    //??? sceGuBlendFunc(GU_ADD,GU_SRC_ALPHA,GU_ONE_MINUS_SRC_ALPHA,0,0);
	
	/* Shading */
	sceGuShadeModel(SCEGU_SMOOTH);

	/* Clipping */
	sceGuEnable(SCEGU_CLIP_PLANE);

	// Niet nodig...
	/*
	sceGuLightColor(0, SCEGU_DIFFUSE, 0xffc0c0c0);
	sceGuLightColor(0, SCEGU_SPECULAR, 0xffffffff);
	
	ScePspFVector3	vec;
	vec.x=-1.0f;
	vec.y= 1.0f;
	vec.z= 1.0f;
	sceGuLight(0, SCEGU_LIGHT_DIRECTION, SCEGU_DIFFUSE_AND_SPECULAR, &vec);
	sceGuEnable(SCEGU_LIGHT0);
	sceGuEnable(SCEGU_LIGHTING);

	*/

	sceGuAmbient(0xff808080);
	sceGuColor(0xffffffff);
	
	sceGumSetMatrixStack(&matrix_stack[0], 8, 8, 32, 0);
	
	// Camera/Projection (What are you looking at)
	sceGumMatrixMode(SCEGU_MATRIX_PROJECTION);
	sceGumLoadIdentity();
	sceGumPerspective(SCEGU_RAD(45.0f), SCEGU_SCR_ASPECT, 1.000000f, 100.000000f);
	//sceGumLookAt(&pos,&look,&tilt);

	sceGumMatrixMode(SCEGU_MATRIX_WORLD); 
	
	// Camera tot hier

	// Clear the screen
	sceGuClearColor(0xffff4040);
	sceGuClearDepth(0);
	sceGuClearStencil(0);
	
	/* Finish initialization */
	sceGuFinish();

	/* Sync */
	sceGuSync(SCEGU_SYNC_FINISH, SCEGU_SYNC_WAIT);

	/* Wait for screen */
	sceDisplayWaitVblankStart();

	/* Turn on the display */
	sceGuDisplay(SCEGU_DISPLAY_ON);



	cameraPosition.x= 0.0f;
	cameraPosition.y= 0.0f;
	cameraPosition.z= -15.0f;
}

/*
GameState GameEngine::getGamestate() {
	return currentState;
}
*/
void GameEngine::setGamestate(GameState &gm) {
	currentState = &gm;
}


void GameEngine::update() {
	currentState->update();
}

void GameEngine::draw() {
	// Re-init
	sceGuStart(SCEGU_IMMEDIATE, disp_list, sizeof(disp_list));
	sceGuClear(SCEGU_CLEAR_ALL);
	

	// Camera
	sceGumPushMatrix();
	sceGumLoadIdentity();
	sceGumTranslate(&cameraPosition);

	currentState->draw();
	
	// Reset camera
	sceGumPopMatrix();
	

	sceGuFinish();
	sceGuSync(SCEGU_SYNC_FINISH, SCEGU_SYNC_WAIT);
	sceDisplayWaitVblankStart();
	sceGuSwapBuffers();

	
}
