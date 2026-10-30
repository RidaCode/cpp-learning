#include <cstdlib>
#include <iostream>
#include <random>

int requestGuessNumber(int guessCount)
{
    std::cout << "Guess #" << guessCount << ": ";

    int enteredGuessNumber{};
    std::cin >> enteredGuessNumber;

    return enteredGuessNumber;
}

void printGuessResult(int enteredNumber, int randomNum)
{
    if (enteredNumber == randomNum) {
        std::cout << "Correct! You win!\n";
    }
    else if (enteredNumber > randomNum) {
        std::cout << "Your guess is too high.\n";
    }
    else {
        std::cout << "Your guess is too low.\n";
    }
}

void startGame(int maxGueses);

void requestRestartGame(int maxGuesses)
{
    std::cout << "Would you like to play again (y/n)? ";
    char answer{};
    std::cin >> answer;

    switch (answer) {
    case 'y':
        startGame(maxGuesses);
        break;
    case 'n':
        std::exit(0);
        break;
    default:
        requestRestartGame(maxGuesses);
        break;
    }
}

int getRandomNumber()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution distrb(1, 100);
    int rng{distrb(gen)};

    return rng;
}

void startGame(int maxGueses)
{
    int rng{getRandomNumber()};

    for (int i = 1; i <= maxGueses; ++i) {
        int enteredGuess{requestGuessNumber(i)};

        printGuessResult(enteredGuess, rng);

        if (enteredGuess == rng)
            break;

        if (enteredGuess != rng && i == maxGueses)
            std::cout << "Sorry, you lose. The correct number was " << rng
                      << ".\n";
    }

    requestRestartGame(maxGueses);
}

int main()
{
    static constexpr int maxGueses{7};
    std::cout << "Let's play a game. I'm thinking of a number between 1 and "
                 "100. You have "
              << maxGueses << " tries to guess what it is.\n";

    startGame(maxGueses);

    return 0;
}
