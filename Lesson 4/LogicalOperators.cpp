//Make a program that checks if a lottery number is correct
//Must use multiple functions

#include <iostream>
#include <array>

std::array<int, 10> numbers = { 592, 413612, 999, 1001, 89, 121213, 777277,
                                8, 91919191, 9013853 };

bool checkLottery(int x) {
    for (int i = 0; i < numbers.size(); i++) {
        if(x == numbers.at(i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int number = 0;
    std::cout << "Enter lottery ticket number" << std::endl;
    std::cin >> number;

    std::string message = checkLottery(number)? "Congratulations! You've won $0!" :
                                          "Better luck next time!";
    std::cout << message << std::endl;

    if(number > 1000) {
        std::cout << "You entered a really big number!" << std::endl;
    } else if(number < 10) {
        std::cout << "You entered a small number!" << std::endl;
    }
    
    return 0;
}
