#ifndef MAINGAMESTATE_H
#define MAINGAMESTATE_H

#include "GameState.h"

class MainGameState : public GameState
{
public:
	MainGameState();
	~MainGameState();
	void update();
	void render();
};

#endif