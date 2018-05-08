#define SDL_MAIN_HANDLED

#include "GameLoop.h"
#include "SDL.h"

int main(int argc, char* args[]) {
	int maxUpdatesPerSecond = 120;

	GameLoop* gameLoop = new GameLoop(maxUpdatesPerSecond);

	gameLoop->run();

	delete gameLoop;

	return 0;
}
