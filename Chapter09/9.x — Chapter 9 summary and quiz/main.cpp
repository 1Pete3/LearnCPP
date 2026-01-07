#include "Random.h"
#include <iostream>
#include <cstdlib>
#include <limits>

int getGuess(int count, int min, int max) {
    while (true) {
        std::cout << "Guess # " << count << ": " << std::endl;

        int guess{};
        std::cin >> guess;

        bool success{std::cin};
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (!success || guess < min || guess > max) {
            continue;
        }
        return guess;
    }
}

bool playHiLo(int guesses, int min, int max) {
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is." << std::endl;
    int number{Random::get(0,100)};
    for (int count{ 1 }; count <= guesses; ++count) {
        int guess{getGuess(count,min,max)};
        if (guess > number) {
            std::cout << "Your guess is too high." << std::endl;
        }
        else if (guess < number) {
            std::cout << "Your guess is too low." << std::endl;
        }
        else
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
    }
    std::cout << "Sorry, you lose. The correct number was " << number << std::endl;
    return false; 
}

bool playAgain() {
    while (true) {
        char ch{};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        switch (ch) {
        case 'y':
            return true;
        case 'n':
            return false;
        }
    }
}


int main()
{
    constexpr int guesses{ 7 };
    constexpr int min{ 1 };
    constexpr int max{ 100 };

    do {
        playHiLo(guesses, min, max);
    } while (playAgain());

    std::cout << "Thank you for playing." << std::endl;
    return EXIT_SUCCESS;
}

