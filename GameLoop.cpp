#include "GameLoop.h"

namespace FRAMEWORK {
	GameLoop::GameLoop() {
		this->running = true;
		this->logicUpdatesPerSecond = utils::timePerUpdate(100);
	}

	GameLoop::GameLoop(int updatesPerSecond) {
		this->running = true;
		this->logicUpdatesPerSecond = utils::timePerUpdate(updatesPerSecond);
	}

	GameLoop::~GameLoop() {
		printf("destroying gameloop\n");
	}
}
