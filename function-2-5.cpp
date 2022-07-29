#include <iostream>

bool is_descending(int array[], int n){
int descending = false;
  for (int i = 0; i < n-1; i++) {
    if (array[i] < array[i+1]){
        descending = true;
    }
  }

    switch (descending){
        case true:
        std::cout << "It is not in descending order" << std::endl;
        break;
        case false:
        std::cout << "It is in descending order" << std::endl;
        break;
    }

  return descending;
}
