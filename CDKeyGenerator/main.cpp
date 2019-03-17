#include <fstream>
#include <iostream>

#include "key_generation.h"
#include "input_validation.h"
#include "system_output.h"


void process_menu()
{
	int choice = get_int(1, 3, "Enter an int in the range", "Choice is out of range");
	switch (choice)
	{
	case 1:
		std::cout << "Generating key\n";
		break;
	case 2:
		std::cout << "Validating key\n";
		break;
	case 3:
		std::cout << "Good bye;";
		break;
	default:
		break;
	}
}

int main()
{
	print_menu();
	std::string CDKey = make_alphabet();
	std::ifstream input_file("keys.dat", std::ios::binary | std::ios::in);
	std::ofstream out_file;
	if (!input_file)
	{
		std::cout << "No previous file detected, a new one will be created\n";
	}
	out_file.open("keys.dat", std::ios::binary | std::ios::out);
	print_key(CDKey, out_file);
	out_file.close();
	system("pause");
	return EXIT_SUCCESS;
}