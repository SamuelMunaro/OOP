#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int two_five_nine(int[], int);

int main() {
  int array[5] = {5, 2, 9, 8, 5};
  //std::cout << two_five_nine(array, 5) << std::endl;
  two_five_nine(array, 5);
  return 0;
}