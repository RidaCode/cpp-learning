#include <iostream>

int main() {
  int x{100};

  // single quoted (by itself) (conventional)
  std::cout << "First line\n";
  // double quoted (by itself) (unconventional but okay)
  std::cout << "Second line x value is " << x << '\n';
  // between double quotes in existing text (conventional)
  std::cout << "Third line" << "\n";

  return 0;
}
