#include <iostream>
#include "Scope.h"

int main() {
    std::cout << "The force of gravity of an object of random mass is: "
                 << numbers::GRAVITY * numbers::random() << std::endl;

    std::cout << "The value of pi is: " << numbers::PI << std::endl;
    std::cout << "The value of e is: "<< numbers::E << std::endl;
    std::cout << "The sum of pi and e is: " << numbers::PI + numbers::E << std::endl;
    return 0;
}
