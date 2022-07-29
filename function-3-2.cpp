#include <cmath>
#include <iostream>
#include <algorithm>


int median_array(int array[], int n) {
  int median = 0, middle = 0;

    std::sort(array, array + n);

    middle = round(n/2);

    median = array[middle];

  return median;
}
