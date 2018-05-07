#include "Window.h"

namespace FRAMEWORK {

	Window::Window()
	{
		Window("Framework", 800, 600);
	}

	Window::Window(char* windowName, int screenWidth, int screenHeight) {
		this->windowName = windowName;
		this->screenWidth = screenWidth;
		this->screenHeight = screenHeight;
		this->intializeSDL();
	}

	Window::~Window()
	{
		printf("destroying window\n");
		SDL_DestroyWindow(window);
	}

	void Window::intializeSDL() {
		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			this->errors = true;
			printf("SDL could not be started, SDL_ERROR: %s\n", SDL_GetError());
		}
		else {
			printf("SDL Initialised\n");
			this->createWindow();
		}
	}

	void Window::createWindow() {
		window = SDL_CreateWindow(windowName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			printf("Window could not be created, SDL_ERROR: %s\n", SDL_GetError());
			this->errors = true;
		}
		else {
			printf("window created\n");
			this->surface = SDL_GetWindowSurface(window);
		}
	}
}
