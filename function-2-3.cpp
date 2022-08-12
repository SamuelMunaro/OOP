#include <iostream>

int palindrome_sum(int integers[], int length) {

    int sum = 1;

    for (int i = 0; i < length; i++) {

        sum = sum + integers[i];

        std::cout << sum << std::endl;

    }


    return sum;
}

bool is_array_palindrome(int integers[], int length) {

    int r = 0;

    for (int i = 0; i < length; i ++) {

        if (i < length/2 && integers[i] <= integers[i+1]) {

            r = 0;

        } elseif (i > length/2 && integers[i-1] >= integers[i]) {
            
            r = 0;

        } else {

            r = -2;

        }

    }

    return r;

}