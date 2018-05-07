#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "Utils.h"
#include <stdio.h>

namespace FRAMEWORK {
	class GameLoop {

	public:
		GameLoop();
		GameLoop(int);
		~GameLoop();
		bool isRunning() { return this->running; }
		void exit() { this->running = false; }

	private:
		bool running;
		float logicUpdatesPerSecond;
	};

}
#endif