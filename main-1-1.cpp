#include <iostream>
#include <array>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern int sum_diagonal(int[4][4]);

int main() {

    int array[4][4] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1};

    cout << "the sum of array is: " << sum_diagonal(array) << endl;

    return 0;
} 