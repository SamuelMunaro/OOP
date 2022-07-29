#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int[], int, int);

int main() {
  int array[5] = {4, 5, 6, 8, 8};
  std::cout << "The amount of desired number is: " << num_count(array, 5, 1) << std::endl;
  return 0;
}