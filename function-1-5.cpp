#include <math.h>
#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {

    int var = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            var = array1[i][j] + array2[i][j];

            std::cout << var;

            if (j < 2) {

                std:: cout << ' ';

            }

        }

        std::cout << std::endl;

    }

  return;
}