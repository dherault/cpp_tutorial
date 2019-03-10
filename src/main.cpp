#include <iostream>
#include <math.h>

int getValueFromUser() {
	int input{ 0 };

  std::cout << "Enter an integer: ";
	std::cin >> input;  
 
	return input;
}

int square(int x) {
  return x *x;
}

int main() {
  int a; // Variable allocation

  std::cout << a << "\n"; // Undefined behavior

  a = 50; // Copy initialization

  int b {1}; // Uniform initialzation
  int c {}; // Zero initialization

  // << insertion operator
  std::cout << "a + b + c = " << a + b + c << "\n";

  // int x;
  
  // std::cout << "Enter any number: ";
  
  // >> extraction operator
  // std::cin >> x;

  // std::cout << x * x << "\n";

  // Operator precedance: PEMDAS Parenthesis first, then Exponents, then Multiplication & Division, then Addition & Subtraction.

  double d{ pow(2, 10) };

  std::cout << "d = " << d << "\n";

  int value{ getValueFromUser() };

  std::cout << "value² = " << square(value) << "\n";

  return 0;
}
