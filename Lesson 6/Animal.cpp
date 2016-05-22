#include "Animal.h"
#include <iostream>

//create a program that handles animals

Animal::Animal(std::string n, std::string s) {
    name = n;
    sound = s;
}

void Animal::Growl() {
    std::cout << sound << std::endl;
}

void Animal::set_name(std::string n) {
    name = n;
}

std::string Animal::get_name() {
    return name;
}
