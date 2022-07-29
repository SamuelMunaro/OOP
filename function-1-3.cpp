#include <iostream>

int num_count(int array[], int n, int a){
  int var = 0;
  for (int i = 0; i < n; i++) {
    if (array[i] == a){
        var++;
    }
  }
  return var;
}