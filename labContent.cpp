#include <iostream>

int cube();
void askUserForCube();

int main() {
    askUserForCube();
    return 0;
}

int cube(int userInput) {
    return userInput * userInput * userInput;
}

void askUserForCube() {
    std::cout << "input number you would like to cube" << std::endl;

    int input;
    std::cin >> input;

    std::cout << input << " cubed is " << cube(input);
}
