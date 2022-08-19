#include <math.h>
#include <iostream>
#include <array>
#include <string>

void copy_integers(int old_array[],int new_array[],int length) {
    
    int *val;
    
    val = &old_array[0];

    new_array = val;

    for (int i = 0; i < length; i++) {

        std::cout << new_array[i];

        if (i < (length-1)) {

            std::cout << " ";

        }

    }

    return;
}