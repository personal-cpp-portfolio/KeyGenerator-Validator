#include <iostream>
#include <string>

#include "input_validation.h"
#include "system_output.h"


int main()
{
	print_menu();
	process_main_menu();
	system("pause");
	return EXIT_SUCCESS;
}


/*
//Practice stringstreams
int main()
{
	std::string _name = "bob";
	int age = 32;;

	std::stringstream ss;

	ss << "Name: " << _name << '\n' << "Age: " << age << '\n';
	std::cout << ss.str() << std::endl;
	system("pause");
	return 0;
}
*/