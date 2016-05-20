//create a program that adds numbers from user input
//Also other functions that are cool

int addNumbers(int i, int j) {
    return i + j;
}

void printFunFacts() {
    std::cout << "Ahmad is a human" << std::endl;
    std::cout << "Programming is easy and fun" << std::endl;
    std::cout << "PHP sucks" << std::endl;
}

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Give me a number" << std::endl;
    std::cin >> a;
    std::cout << "Give me another number" << std::endl;
    std::cin >> b;

    std::cout << "The answer is" << addNumbers(a, b) << std::endl;
    printFunFacts();

    return 0;
}
