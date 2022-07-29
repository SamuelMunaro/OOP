#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int[], int[], int);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  int secondarray[5] = {1, 2, 3, 4, 5};
  std::cout << "The sum is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
  return 0;
}