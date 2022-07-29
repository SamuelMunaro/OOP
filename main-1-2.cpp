#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double array_mean(int[], int);

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  std::cout << "The average is: " << array_mean(array, 5) << std::endl;
  return 0;
}