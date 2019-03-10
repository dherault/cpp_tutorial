#include <iostream>

int main() {
  int a; // Variable allocation

  a = 50; // Copy initialization

  int b {1}; // Uniform initialzation
  int c {}; // Zero initialization

  // << insertion operator
  std::cout << "a + b + c = " << a + b + c << "\n";

  int x;
  
  std::cout << "Enter any number: ";

  std::cin >> x;

  std::cout << x * x << "\n";
}
