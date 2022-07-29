#include <algorithm>
#include <cmath>
#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(double[], int);

int main() {
  double array[5] = {1, 2, 3, 4, 5};

  std::cout << "The sum of even steps: " << sum_even(array, 5) << std::endl;

  return 0;
}