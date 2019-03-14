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
  plog::init(plog::debug, "log.txt");

  LOGD << "main() called";

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

// Integer
// 1 byte signed	-128 to 127
// 1 byte unsigned	0 to 255
// 2 byte signed	-32,768 to 32,767
// 2 byte unsigned	0 to 65,535
// 4 byte signed	-2,147,483,648 to 2,147,483,647
// 4 byte unsigned	0 to 4,294,967,295
// 8 byte signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// 8 byte unsigned	0 to 18,446,744,073,709,551,615
