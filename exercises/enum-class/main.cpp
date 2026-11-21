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
        return "pig";
    case chicken:
        return "chicken";
    case goat:
        return "goat";
    case cat:
        return "cat";
    case dog:
        return "dog";
    case duck:
        return "duck";
    default:
        return "invalid animal";
    }
};

// Write another function named printNumberOfLegs()
// that uses a switch statement to print the number of legs each animal walks on
void printNumberOfLegs(Animal animal)
{
    std::cout << "A " << getAnimalName(animal) << " has ";

    using enum Animal;
    switch (animal) {
        // 4 legs animals
    case pig:
    case dog:
    case goat:
    case cat:
        std::cout << 4;
        break;

        // 2 legs animals
    case chicken:
    case duck:
        std::cout << 2;
        break;
    default:
        std::cout << "????";
        break;
    }

    std::cout << " legs.\n";
}

int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    return 0;
}
