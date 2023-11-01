#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "program name " << argv[0] << " ";
    std::cout << "called with " << argc - 1 << " arguments: ";
    for (int i = 1; i < argc; i++) {
        std::cout << "'" << argv[i] << "' ";
    }
    return 0;
}