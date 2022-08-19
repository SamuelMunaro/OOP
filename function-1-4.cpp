#include <math.h>
#include <iostream>
#include <array>
#include <string>

void copy_doubles(double *old_array,double *new_array,int length) {
    
    double *val;
    
    val = old_array;

    new_array = val;

    for (int i = 0; i < length; i++) {

        std::cout << new_array[i];

        if (i < (length-1)) {

            std::cout << " ";

        }

    }

    return;
}