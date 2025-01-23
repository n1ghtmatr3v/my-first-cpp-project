#include <iostream>
#include "utils.h" // Include the new header file

int main() {
    std::cout << "Hello from main.cpp!" << std::endl;
    printMessage(); // Call the function from utils.cpp
    return 0;
}