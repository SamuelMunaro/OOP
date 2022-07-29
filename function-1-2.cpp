#include <iostream>

int double array_mean(int array[], int n){
  int sum = 0;
  int average = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  average = sum / n;
  return average;
}