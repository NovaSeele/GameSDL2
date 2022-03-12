#include<SDL.h>
#include"Game.h"

Game* game = nullptr;

int main(int argc, char *argv[])
{
	game = new Game();

	game->init("Aim trainer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while (game->running())
	{
		game->eventhappen();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}

/*SDL_Init(SDL_INIT_EVERYTHING);
SDL_Window* window = SDL_CreateWindow("Seele", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

SDL_RenderClear(renderer);

SDL_RenderPresent(renderer);

SDL_Delay(2000);

return 0;
*/