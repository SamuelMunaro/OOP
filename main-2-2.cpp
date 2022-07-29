#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int[], int);

int main() {
  int array[5] = {5, 2, 3, 8, 5};
  std::cout << "The smallest vallue in the array is: " << max_element(array, 5) << std::endl;
  return 0;
}