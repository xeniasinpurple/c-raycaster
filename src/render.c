#include "header/render.h"

void render(SDL_Renderer *renderer, SDL_Texture *texture, uint32_t *pixels){
	//Update the Texture with the (potentially) changed Pixel Buffer
	SDL_UpdateTexture(texture, NULL, pixels, SCREEN_WIDTH * sizeof(uint32_t));
	//SDL_RenderClear(renderer);
	//Copy the Texture into the Renderer
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	//Render the performed changes
	SDL_RenderPresent(renderer);
}