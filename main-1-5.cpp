#include <iostream>
#include <array>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void print_summed(int[3][3], int[3][3]);

int main() {

    int array1[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int array2[3][3] = {{2,2,2},{2,2,2},{2,2,2}};

    print_summed(array1, array2);

    return 0;
} 