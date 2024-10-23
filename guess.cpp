#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed for randomness
    int numberToGuess = std::rand() % 100 + 1; // Number between 1 and 100
    int playerGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to 'Guess the Number'!" << std::endl;
    std::cout << "I've selected a number between 1 and 100." << std::endl;

    // Loop until the player guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
        numberOfTries++;

        if (playerGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (playerGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in "
                      << numberOfTries << " tries!" << std::endl;
        }
    } while (playerGuess != numberToGuess);

    return 0;
}
