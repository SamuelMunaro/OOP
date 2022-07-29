#include <iostream>

int average(int array[], int n){
  int sum = 0;
  int average = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + array[i];
  }
  average = sum / n;
  return average;
}