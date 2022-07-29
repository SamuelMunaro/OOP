#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std; 

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int median_array(int[], int);

int main() {
  int array[5] = {1, 2, 3, 5, 4};

    cout << "the median is: " << median_array(array, 5) << endl;

  return 0;
}