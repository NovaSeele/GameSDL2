#pragma once
#include<SDL.h>
#include<stdio.h>

class Game
{
public:
	Game();
	~Game();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void eventhappen();
	void update();
	void render();
	void clean();

	bool running();

private:
	bool currentlyRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};

