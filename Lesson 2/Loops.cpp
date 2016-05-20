#include <iostream>
#include <array>

int main() {
    //Print out every item in this container
    //on the same line
    std::array<std::string, 5> yummy_food = { "Pizza", "Cake", "Pie",
                                              "French Toast", "Donuts"};

    for(int i = 0; i < yummy_food.size(); i++) {
        if(i == yummy_food.size() - 1) {
            std::cout << yummy_food.at(i) << std::endl;
        } else {
            std::cout << yummy_food.at(i) << ", ";
        }
    }

    //count to 10
    int j = 1;
    while(j <= 10) {
        std::cout << j << std::endl;
        j++;
    }

    return 0;
}
