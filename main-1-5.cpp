#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int);

int main() {
  int number = 10;
  std::cout << "The number of evens is: " << count_evens(10) << std::endl;
  return 0;
}