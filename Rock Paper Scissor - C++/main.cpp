#include <iostream>
#include <cstdlib>
#include "Utils.h"
#include "GamePlay.h"

using namespace utils;
using namespace game;

int main() {
	int round;
	int score = 0;

	std::cout << "Welcome to Rock Paper Scissor Game!\n";
	std::cout << "How many rounds do you want to play?: ";
	round = getInt();

	while (round--) {
		playRound(score);
	}
	
	std::cout << "Your Score: " << score << "\n";
	std::cout << "Thanks for Playing!\n";

	return 0;
}