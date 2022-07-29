#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_descending(int[], int);

int main() {
  int array[5] = {5, 4, 3, 2, 1};
  is_descending(array, 5);

  return 0;
}