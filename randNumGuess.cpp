// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 19, 2025
// This is a number guessing game.

#include <cstdlib>
#include <iostream>

int main() {
    // declare integer to hold random number

    int randomNumber, userGuess;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 1 and 100

    randomNumber = rand_r() % 9 + 1;

    // Asks the user for number
    std::cout << "Pick a number from 1-9:\n";
    std::cin >> userGuess;
    // Checks if user guess is right
    if (userGuess == randomNumber)
        std::cout << "You got it right!\n";
    // Checks if user guess is wrong
    if (userGuess != randomNumber)
        std::cout << "Wrong try again!\n";
}
