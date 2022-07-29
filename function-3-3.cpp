#include <algorithm>
#include <cmath>
#include <iostream>

double weighted_average(int array[], int n) {
  double average = 0;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        count = count + 1;
      }
    }
    average = average + (array[i] * count);
  }

  average = average / n;

  //std::cout << average << std::endl;

  return average;
}
