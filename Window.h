#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <stdio.h>

namespace FRAMEWORK {
	class Window {
	public:
		Window();
		Window(char*, int, int);
		~Window();
		bool checkErrors() { return this->errors; }
	private:
		void intializeSDL();
		void createWindow();
		void setErrors() { errors = true; }

		int screenWidth;
		int screenHeight;
		bool errors;
		char* windowName;
		SDL_Window* window;
		SDL_Surface* surface;
	};
}

#endif
