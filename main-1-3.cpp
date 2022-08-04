#include <iostream>
#include <array>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void count_digits(int[4][4]);

int main() {

    int array[4][4] = {1,1,1,2,2,3,3,4,4,5,5,6,6,7,8,9};

    count_digits(array);

    return 0;
} 