#include "GameLoop.h"

GameLoop::GameLoop() {
	this->window = new Window("game", 800, 600);
	if (!this->window->checkErrors() == false) {
		this->running = true;
		this->maxUpdatesPerSecond = 60;
		this->state = new MainGameState();
	}
}

GameLoop::GameLoop(int maxUpdatesPerSecond) {
	this->window = new Window("game", 800, 600);
	if (this->window->checkErrors() == false) {
		this->running = true;
		this->maxUpdatesPerSecond = maxUpdatesPerSecond;
		this->state = new MainGameState();
	}
}

GameLoop::~GameLoop() {
	printf("destroying gameloop\n");
	delete this->window;
	delete this->state;
}

void GameLoop::run() {
	SDL_Event event;
	do {
		while (SDL_PollEvent(&event) != 0) {
			if (event.type == SDL_QUIT) {
				this->running = false;
			}
		}
	} while (this->running);
}
