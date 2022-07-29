#include <iostream>

int max_element(int array[], int n){
  int min = array[1];
  for (int i = 0; i < n; i++) {
    if (array[i] > min){
        min = array[i];
    }
  }
  return min;
}
