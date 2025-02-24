// Add Greeting.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {
    // Declare a variable to hold the user's name
    std::string name;

    // Prompt the user to enter their name
    std::cout << "Enter your name: ";

    // Read the user's name
    std::cin >> name;

    // Output a personalized greeting
    std::cout << "It is nice to meet you, " << name << "!" << std::endl;

    return 0;
}