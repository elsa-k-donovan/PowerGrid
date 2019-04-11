
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <random>
#include "Game.h"
#include "Stats.h"

using namespace std;
using namespace HelperFunctions;


int main()
{
	
	Game *game = new Game();
	

	Stats *stats = new Stats(game);
	game->play();

	return 0;
}

