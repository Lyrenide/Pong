#include "Game.h"



int main(int argc, char* argv[])
{
	Game* game = game->instance();

	game->loadContent();


	game->run();


	return 0;
}