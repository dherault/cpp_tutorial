#include <iostream>
#include <math.h>
#include "cube.h"
#include "plog/Log.h"
#define NAME "David" // Object-like macros with substitution text, avoid
#define CUBE_IT
#define ENABLE_DEBUG

// forward declaration
int square(int x);

int getValueFromUser() {
	int input{ 0 };

  std::cout << "Enter an integer: ";
	std::cin >> input;  
 
	return input;
}

int main() {
  #ifdef ENABLE_DEBUG
  std::cerr << "main() called\n";
  #endif

  int a; // Variable allocation

  std::cout << a << "\n"; // Undefined behavior

  a = 50; // Copy initialization

  int b {1}; // Uniform initialzation
  int c {}; // Zero initialization

  // << insertion operator
  std::cout << std::string(NAME) + " a + b + c = " << a + b + c << "\n";

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

  // Conditional compilation
  // also ifndef
  #ifdef CUBE_IT
  std::cout << "value^3 = " << cube(value) << "\n";
  #endif

  #if 0 // Don't compile anything starting here
    std::cout << "Chloée\n";
  #endif // until this point

  return 0;
}
