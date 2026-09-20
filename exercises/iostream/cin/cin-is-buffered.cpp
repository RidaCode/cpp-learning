#include <iostream>

int main() {
  std::cout << "Enter two numbers: ";

  int x{};
  std::cin >> x;

  int y{};
  std::cin >> y;

  std::cout << "You have entered " << x << " and " << y << '\n';

  return 0;
}
