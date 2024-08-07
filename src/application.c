#include "header/application.h"

bool running = true;

void initApp(struct application *app){
	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		return;
	}

	app->window = SDL_CreateWindow("Raycaster", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if(!app->window){
		return;
	}

	app->renderer = SDL_CreateRenderer(app->window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
	if(!app->renderer){
		return;
	}

	app->texture = SDL_CreateTexture(app->renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, SCREEN_WIDTH, SCREEN_HEIGHT);
	if(!app->texture){
		return;
	}
}

void destroyApp(struct application *app){
	SDL_DestroyTexture(app->texture);
	SDL_DestroyRenderer(app->renderer);
	SDL_DestroyWindow(app->window);
	SDL_Quit();
}