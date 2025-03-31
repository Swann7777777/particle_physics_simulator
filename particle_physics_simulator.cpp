#include <SDL3/SDL.h>
#include <iostream>
#include <vector>




void draw(int particles_count, std::vector<float>& particles_positions, SDL_Renderer* renderer) {

    SDL_RenderClear(renderer);



    for (int i = 0; i < particles_count; i++) {

    }
}










int main(int argc, char* argv[]) {



    const int particles_count = 10;

    std::vector<float> particles_positions(particles_count * particles_count, 0.0f);

	const int particles_color = (255, 0, 0, 255);







    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return -1;
    }
    
    
    
    






    // Create a window
    SDL_Window* window = SDL_CreateWindow("SDL3 Test", 640, 480, 0);
    if (window == nullptr) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    // Create a renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
    if (renderer == nullptr) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    SDL_SetRenderDrawColor(renderer, particles_color);




    // Main loop flag
    bool quit = false;

    // Event handler
    SDL_Event e;

    // Main loop
    while (!quit) {
        // Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            // User requests quit
            if (e.type == SDL_EVENT_QUIT) {
                quit = true;
            }
        }

        // Clear screen

        // Draw a red rectangle
        SDL_FRect rect = { 220, 140, 200, 200 };
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        // Update screen
        SDL_RenderPresent(renderer);

        // Small delay to reduce CPU usage
        SDL_Delay(16);
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}