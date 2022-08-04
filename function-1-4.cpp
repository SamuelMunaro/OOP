#include <math.h>
#include <iostream>

void print_scaled(int array[3][3],int scale) {
    
    int var = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            var = array[i][j] * scale;

            std::cout << var << ' ';

        }

        std::cout << std::endl;

    }

  return;
}