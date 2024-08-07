#include <stdlib.h>
#include "header/application.h"
#include "header/update.h"
#include "header/render.h"
#include "header/user_input.h"

// gcc src/*.c -lm -IC:\MinGW\include\SDL2 -LC:\MinGW\lib -lmingw32 -lSDL2main -lSDL2 -o raycaster -Wall

int main(int argc, char **argv){
	struct application app;
	initApp(&app);

	while(running){
		//UserInput
		userInput(&running);

		//Update
		for(int x = 0; x < SCREEN_WIDTH; x++){
			drawPixelColumn(app.pixels, x, 0, SCREEN_HEIGHT, 0x800020);
		}

		//Render
		render(app.renderer, app.texture, app.pixels);
	}

	destroyApp(&app);

	return(0);
}