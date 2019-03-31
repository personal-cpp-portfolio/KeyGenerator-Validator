#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <string>

void skip_to_int();
void process_main_menu();
void process_key_menu();
void read_file_key(std::string& name);
int get_int(int low, int high, const std::string& greeting, const std::string& sorry);
char validate_character(const std::string& sorry);

#endif // ifndef INPUT_VALIDATION_H