#include <iostream>
#include <string>
#include <string_view>
enum class Animal { pig, chicken, goat, cat, dog, duck };

// Write a function named getAnimalName() that takes an Animal parameter
// and uses a switch statement to return the name for that animal as a
// std::string_view
std::string_view getAnimalName(Animal animal)
{
    using enum Animal;

    switch (animal) {
    case pig:
        return "A pig has";
    case chicken:
        return "A chicken has";
    case goat:
        return "A goat has";
    case cat:
        return "A cat has";
    case dog:
        return "A dog has";
    case duck:
        return "A duck has";
    default:
        return "Error animal is not valid\n";
    }
};

// Write another function named printNumberOfLegs()
// that uses a switch statement to print the number of legs each animal walks on
void printNumberOfLegs(Animal animal)
{
    std::string animalName{getAnimalName(animal)};
    using enum Animal;

    switch (animal) {
    case pig:
        std::cout << animalName << " 4 legs." << std::endl;
        break;
    case chicken:
        std::cout << animalName << " 2 legs." << std::endl;
        break;
    case goat:
        std::cout << animalName << " 4 legs." << std::endl;
        break;
    case cat:
        std::cout << animalName << " 4 legs." << std::endl;
        break;
    case dog:
        std::cout << animalName << " 4 legs." << std::endl;
        break;
    case duck:
        std::cout << animalName << " 2 legs." << std::endl;
        break;
    default:
        std::cout << "Error animal is not valid\n";
        break;
    }
}

int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    return 0;
}
