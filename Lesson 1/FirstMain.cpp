//This is a basic C++ program

#include <iostream>

//entry point
int main(int argc, char *argv[]) {
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hi " << name << "!" << std::endl;

    //print argument number parameter
    std::cout << argc << std::endl;
    //print first argument
    std::cout << argv[1] << std::endl;
    
    return 0;
}
