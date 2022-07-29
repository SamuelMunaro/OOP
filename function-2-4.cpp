#include <iostream>

bool is_ascending(int array[], int n){
int ascending = false;
  for (int i = 0; i < n-1; i++) {
    if (array[i] > array[i+1]){
        ascending = true;
    }
  }

    switch (ascending){
        case true:
        std::cout << "It is not in ascending order" << std::endl;
        break;
        case false:
        std::cout << "It is in ascending order" << std::endl;
        break;
    }

  return ascending;
}
