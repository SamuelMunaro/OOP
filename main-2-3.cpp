#include <iostream>

extern int palindrome_sum(int integers[], int length);

int main() {

    int integers[4] = {1,2,2,1};
    int length = 4;

    //std::cout << palindrome_sum(integers, length) << std::endl;

    int a = palindrome_sum(integers, length);

    std::cout << a;

    return 0;
}