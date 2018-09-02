//
//  main.cpp
//  BullCowGame
//
//  Created by Ryan Hopkins on 9/2/18.
//  Copyright © 2018 Ryan Hopkins. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    constexpr int WORD_LENGTH = 5;

    // Introduction
    std::cout << "Welcome to Bulls and Cows" << std::endl;
    std::cout << "I'm thinking of a " << WORD_LENGTH << " letter isogram, can you guess it?" << std::endl;
    
    // Get a guess from the player
    std::string Guess = "";
    std::cout << "Enter your guess: ";
    std::getline(std::cin, Guess);
    std::cout << std::endl;
    
    // Repeat guess back to player
    std::cout << "You guessed: " << Guess << std::endl;
    
    std::cout << std::endl;
    return 0;
}
