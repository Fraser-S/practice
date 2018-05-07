#define SDL_MAIN_HANDLED

#include "GameLoop.h"
#include "Window.h"
#include "SDL.h"

int main(int argc, char* args[]) {

	FRAMEWORK::GameLoop* gameLoop = new FRAMEWORK::GameLoop(120);

	FRAMEWORK::Window* window = new FRAMEWORK::Window("game", 800, 600);

	if (window->checkErrors() == false) {
		SDL_Event event;
		do {
			while (SDL_PollEvent(&event) != 0) {
				if (event.type == SDL_QUIT) {
					gameLoop->exit();
				}
			}
		} while (gameLoop->isRunning());
	}

	delete window;
	delete gameLoop;

	return 0;
}
