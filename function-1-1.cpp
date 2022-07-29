#include <iostream>

int sum(int array[], int n){
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + array[i];
  }
  return sum;
}
