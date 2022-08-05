#include <iostream>
#include <array>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern int sum_diagonal(int[10][10]);

int main() {

    int array[10][10] = {};

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (i == j) {
                array[i][j] = 1;
            } else {
                array[i][j] = 0;
            }

        }
    }

    cout << "is signature array? " << sum_diagonal(array) << endl;

    return 0;
} 