#pragma once

#include "GameState.h"

class StateMachine
{
public:
	StateMachine();
	~StateMachine();
private:
	GameState* currentState;
};

