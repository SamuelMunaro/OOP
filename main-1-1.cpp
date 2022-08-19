#include <iostream>
#include <array>
#include <string>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n) ;

int main() {

    std::string array1[3][2] = {{"1", "1"}, {"2", "2"}, {"3", "3"}};
    std::string array2[3][2];
    int n = 3;

    string_2d_copy(array1, array2, n);

    return 0;
} 