#ifndef GAME_GAMEPLAY_H
#define GAME_GAMEPLAY_H
#include <string>
#include "Utils.h"


namespace game
{
	std::string getName(int choice);

	void playRound(int& score);
}


#endif // !GAME_GAMEPLAY_H
