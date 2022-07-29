#include <iostream>
#include <cmath>
#include <algorithm>


// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double weighted_average(int[], int);

int main() {
  int array[5] = {1, 2, 3, 4, 5};

    std::cout << weighted_average(array, 5) << std::endl;

  return 0;
}