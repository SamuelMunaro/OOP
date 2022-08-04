#include <iostream>
#include <array>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void print_scaled(int[3][3], int);

int main() {

    int array[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int scale = 2;

    print_scaled(array, scale);

    return 0;
} 