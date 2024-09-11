#include <iostream>
#include <cstdlib>
#include <string>
#include "GamePlay.h"

using namespace utils;

namespace game
{
    std::string getName(int choice) {
        std::string theChoice;
        switch (choice) {
        case 1:
            // R"()" --> Raw String Literals
            /* Raw string literals allow you to include characters that would normally need to be escaped, 
                such as backslashes (\) and quotes ("), without needing to use escape sequences.
            */
            theChoice = R"(
                ROCK
                _______
            ---'   ____)
                  (_____)
                  (_____)
                  (____)
            ---.__(___)
            )";
            break;
        case 2:
            theChoice = R"(
                Paper
                     _______
                ---'    ____)____
                           ______)
                          _______)
                         _______)
                ---.__________)
            )";
            break;
        case 3:
            theChoice = R"(
                Scissor
                _______
            ---'   ____)____
                      ______)
                   __________)
                  (____)
            ---.__(___)
            )";
            break;
        default:
            theChoice = "Invalid Number";
        }
        return theChoice;
    }



	void playRound(int& score)
	{
		int usrInput, comInput;

		std::cout << "Choose your WEAPON!: \n1. Rock\n2. Paper\n3. Scissor\n> ";

		usrInput = getInt(1, 3);
		comInput = 1 + rand() % 3;

		std::cout << "You: " << getName(usrInput) << '\n';
		std::cout << "Computer: " << getName(comInput) << '\n';

		if (usrInput == comInput) {
			std::cout << "DRAW!\n";
		} 
		else if ((usrInput == 1 && comInput == 3) ||
			    (usrInput == 2 && comInput == 1) ||
			    (usrInput == 3 && comInput == 2)) {
			std::cout << "You WON!\n";
            score++;
		}
		else {
			std::cout << "You LOSE!\n";
		}
		std::cout << "Score: " << score << "\n\n";
	}

}