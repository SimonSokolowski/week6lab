#include <iostream>

int cube();
void askUserForCube();
void arrayPrinter(int array[], int size);
void swapArray(int array[], int pos1, int pos2);

int main() {
    //askUserForCube();
    
    int myArray[] = {1, 2, 3};

    swapArray(myArray, 0, 1);
    arrayPrinter(myArray, 3);

    return 0;
}

void swapArray(int array[], int pos1, int pos2) {
    int arrayPos1 = array[pos1];
    int arrayPos2 = array[pos2];

    array[pos1] = arrayPos2;
    array[pos2] = arrayPos1;
}

void arrayPrinter(int array[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << array[i];
        if (i != size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << ']';
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
