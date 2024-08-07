#include "header/user_input.h"

void userInput(bool *running){
	SDL_Event event;
	while(SDL_PollEvent(&event) != 0){
		switch(event.type){
			case SDL_QUIT:
				*running = false;
				break;
			default:
				break;
		}
	}
}