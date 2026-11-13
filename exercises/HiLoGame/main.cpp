#include <cstdlib>
#include <iostream>
#include <limits>
#include <random>

// check if we have something invalid in the stream !std::cin.eof() &&
// std::cin.peek() != '\n' check if the stream state is in failure mode =>
// !std::cin
//      check if the user entered an EOF char => std::cin.eof()
//          if so exist program => std::exit(0)
//      else we reset the stream state from failure to normal => std:cin.clear()
//         clear the stream => clearStream()

// bool somethingLeftInTheBuffer()
// {
//     return (!std::cin.eof() && std::cin.peek() != '\n');
// }

void clearStream()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool hasInvalidInStream()
{
    if (!std::cin) {
        if (std::cin.eof()) {
            std::exit(0);
        }
        std::cin.clear();
        clearStream();

        return true;
    }

    return false;
}

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

    if (hasInvalidInStream()) {
        std::cout << "Entered invalid choice, choose y/n\n";
    }

    switch (answer) {
    case 'y':
        startGame(maxGuesses);
        break;
    case 'n':
        std::exit(EXIT_SUCCESS);
        break;
    default:
        std::cout << "Entered invalid choice, choose y/n\n";
        clearStream();
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

        if (hasInvalidInStream() || enteredGuess < 1 || enteredGuess > 100) {
            --i;
            clearStream();
            std::cout << "You have entered an invalid guess number\n";
            continue;
        }

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
