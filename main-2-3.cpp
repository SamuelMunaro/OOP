#include <iostream>

extern bool is_array_palindrome(int integers[], int length);

int main() {

    int integers[4] = {1,2,2,1};
    int length = 4

    std::cout << is_array_palindrome(integers, length) << std::endl;;

    return 0;
}