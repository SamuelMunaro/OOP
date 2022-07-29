#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int average(int[], int);

int main() {
  int array[5] = {1, 1, 1, 1, 1};
  std::cout << "The average is: " << average(array, 5) << std::endl;
  return 0;
}