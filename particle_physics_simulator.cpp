#include <iostream>
#include <SDL3/SDL.h>

int main() {

	const int width = 1920 / 2;
	const int height = 1200 / 2;




	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window* window = SDL_CreateWindow("Particles physics simulator", width, height, 0);

	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

	while (true) {

	}
}