#include <iostream>
#include "Utils.h"

namespace utils
{
	int getInt()
	{
		int inputNum = 0;
		bool valid = false;

		do {
			std::cin >> inputNum;
			//User input NOT INTEGER
			if (std::cin.fail()) {
				std::cout << "Please enter only Number!\n> ";
				std::cin.clear();
			}
			else {
				//User input first is INTEGER but the rest are not
				if (std::cin.peek() != '\n') {
					std::cout << "Please enter only Number!\n> ";
				}
				else {
					valid = true;
				}
			}
			std::cin.ignore(100000, '\n');
		} while (!valid);

		return inputNum;
	}

	int getInt(int min, int max)
	{
		int inputNum;
		bool valid = false;

		do {
			inputNum = getInt();
			if (inputNum > max || inputNum < min) {
				std::cout << "Number is out of range! (" << min << "-" << max << ")\n> ";
			}
			else {
				valid = true;
			}

		} while (!valid);


		return inputNum;
	}
	
}