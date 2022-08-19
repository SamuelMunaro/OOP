#include <iostream>
#include <array>
#include <string>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void copy_integers(int old_array[],int new_array[],int length) ;

int main() {

    //1 4 9 -714 12

    int array1[5] = {1, 4, 9, -714, 12};
    int array2[5];
    int n = 5;

    copy_integers(array1, array2, n);

    return 0;
} 