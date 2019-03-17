#include <iostream>
#include <cctype>

#include "input_validation.h"

void skip_to_int()
{
	//We found something that wasn't an integer
	if (std::cin.fail())
	{
		std::cin.clear();	//We'd like to look at the characters
		//Throw away all non digits
		for (char ch; std::cin >> ch;)
		{
			if (std::isdigit(ch) || ch == '=')
			{
				std::cin.unget();
				return;
			}
		}
	}
	std::cout << "No input\n";
}

int get_int(const std::string& sorry)
{
	int n = 0;
	while (true)
	{
		if (std::cin >> n)
		{
			return n;
		}
		std::cout << sorry;
		skip_to_int();
	}
}

/*Takes ranged input and returns the a validated integer*/
int get_int(int low, int high, const std::string& greeting, const std::string& sorry)
{
	std::cout << greeting << ":[" << low << ':' << high << "]\n";

	while (true)
	{
		int n = get_int("Sorry, that was not a number, please try again\n");
		if (low <= n && n <= high)
		{
			return n;
		}
		std::cout << sorry << ":[" << low << ':' << high << "]\n";
	}
}

char validate_character(const std::string& sorry)
{
	char userChoice = ' ';
	while (true)
	{
		if (std::cin >> userChoice)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::isalpha(userChoice))
			{
				if (std::isupper(userChoice))
				{
					std::tolower(userChoice);
					return userChoice;
				}
				return userChoice;
			}
		}
		std::cout << sorry;
	}
}