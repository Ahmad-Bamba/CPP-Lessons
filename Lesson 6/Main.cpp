#include "Animal.h"
#include <iostream>

int main() {
    Animal cat = Animal("Milo", "Meow!");
    Animal dog = Animal("Fido", "Woof!");

    cat.Growl();
    dog.Growl();

    std::cout << "The name of my cat is " << cat.get_name() << std::endl;
    std::cout << "The name of my dog is " << dog.get_name() << std::endl;

    dog.set_name("Rover");

    std::cout << "Now my dog's name is " << dog.get_name() << std::endl;

    return 0;
}
