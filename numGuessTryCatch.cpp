// Copyright (c) Year Tony G All rights reserved.
// Created By: Tony G
// Date: 2025-03-27
// Asks for user input and tells user if number is correct or not

#include <iostream>
#include <random>
#include <string>

int main() {
    // Random number generator
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());                      // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    someRandomNumber = idist(rgen);
    std::cout << someRandomNumber << std::endl;

    // Greeting message
    std::cout << "Greetings! Please input a number" << std::endl;

    // User input
    std::string numberAsString;
    std::cout << "Please enter a number: ";
    std::cin >> numberAsString;

    try {
        // Convert the string to an integer
        int numberAsInt = std::stoi(numberAsString);

        // Check if the number matches the random number
        if (numberAsInt == someRandomNumber) {
            std::cout << "Congratulations! Correct!" << std::endl;
        } else {
            std::cout << "Incorrect, try again :( correct number was " <<someRandomNumber << std::endl;
        }
    } catch (const std::invalid_argument) {
        std::cout << numberAsString << " is not an integer!" << std::endl;
    }
}
