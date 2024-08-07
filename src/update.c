#include "header/update.h"

void drawPixelColumn(uint32_t *pixels, const int x, const int y0, const int y1, uint32_t color){
	for(int y = y0; y < y1; y++){
		pixels[y*SCREEN_WIDTH + x] = color;
	}
}