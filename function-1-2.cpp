#include <math.h>
#include <iostream>

int sum_diagonal(int array[10][10]) {

    int identity = 1;
    
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (!(i == j && array[i][j] == 1) && !(i != j && array[i][j] == 0)){
                identity = 0;
            } 

        }
    }

    std::cout << identity << std::endl;

  return identity;
}