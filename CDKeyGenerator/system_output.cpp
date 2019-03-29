#include <iostream>
#include <string>
#include <fstream>

#include "system_output.h"

void print_menu(int context)
{
	switch (context)
	{
	case 0:
		std::cout
			<< "WELCOME TO SIMPLE KEY GENERATOR/VALIDATOR\n"
			<< "	MAIN MENU\n"
			<< "1. Generate new key\n"
			<< "2. Validate a key from file\n"
			<< "3. Exit\n";
		break;
	case 1:
		std::cout
			<< "OPTIONS\n"
			<< "1. Print key to screen.\n"
			<< "2. Write key to a file.\n"
			<< "3. Print key and write it to file.\n";
	default:
		break;
	}
}

void print_key(std::string& outStr)
{
	std::cout << "Generated code is: ";
	int keylength = outStr.length();
	//Print the string spaced out every 4 characters
	for (unsigned i = 0; i < keylength; i += 4)
	{
		std::cout << outStr.substr(i, 4) << ' ';
	}
	std::cout << std::endl;
}

void write_file_key(std::string& outStr, std::string& filename)
{
	std::ofstream out_file{ filename };
	int keylength = outStr.length();
	std::cout << "Writing key to file\n";
	//Write the string spaced out every 4 characters
	for (unsigned i = 0; i < keylength; i += 4)
	{
		out_file << outStr.substr(i, 4) << ' ';
	}
	std::cout << "File has been written successfully!\n";
	out_file.close();
}