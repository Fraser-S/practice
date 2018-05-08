#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <stdio.h>
#include "Window.h"
#include "GameState.h"
#include "MainGameState.h"

class GameLoop {
public:
	GameLoop();
	GameLoop(int maxUpdatesPerSecond);
	~GameLoop();
	void run();
private:
	Window* window;
	GameState* state;
	bool running;
	int maxUpdatesPerSecond;
};

#endif