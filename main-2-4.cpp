#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_ascending(int[], int);

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  is_ascending(array, 5);

  return 0;
}