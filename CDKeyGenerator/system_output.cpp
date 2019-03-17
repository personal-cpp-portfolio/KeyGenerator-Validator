#include <iostream>
#include <string>

#include "system_output.h"

void print_menu()
{
	std::cout
		<< "WELCOME TO SIMPLE KEY GENERATOR/VALIDATOR\n"
		<< "	MAIN MENU\n"
		<< "1. Generate new key\n"
		<< "2. Validate a key from file\n"
		<< "3. Exit\n";
}

void print_key(std::string &outStr, std::ofstream &outFile)
{
	std::cout << "Generated code is: ";
	//Print the string spaced out every 4 characters
	for (unsigned i = 0; i < outStr.length(); i += 4)
	{
		std::cout << outStr.substr(i, 4) << ' ';
		outFile << outStr.substr(i, 4) << ' ';
	}
	std::cout << std::endl;
}