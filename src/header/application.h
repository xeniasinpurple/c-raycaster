#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL2/SDL.h>
#include <stdbool.h>

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 512

extern bool running;

struct application{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *texture;

	uint32_t pixels[SCREEN_WIDTH*SCREEN_HEIGHT]; //Pixel Buffer, which will be the Frame-to-Frame output on the texture
};

void initApp(struct application *app);

void destroyApp(struct application *app);

#endif