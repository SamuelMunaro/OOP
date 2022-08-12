#include <iostream>

int palindrome_sum(int integers[], int length) {
    
    extern bool is_array_palindrome(int integers[], int length);
    extern int sum_integers(int integers[], int length);

    int sum = 1;

    for (int i = 0; i < length; i++) {

        sum = sum + integers[i];

    }

    int output = is_array_palindrome(integers, length);

    if (output != 0) {
        output = -2;
    } 
    if (length == 0) {
        output = -1;
    }

    sum_integers(integers, length);

    return sum;
}

bool is_array_palindrome(int integers[], int length) {

    bool r = 0;

    for (int i = 0; i < length; i ++) {

        if ((i < length/2) && (integers[i] >= integers[i+1])) {

            r = r;

        } else if (i >= length/2 && integers[i-1] >= integers[i]) {
            
            r = r;

        } else {

            r = r + 1;

        }

    }

    return r;
}


int sum_integers(int integers[], int length) {
    
    int sum = 0;

    for (int i = 0; i < length; i++) {

        sum = sum + integers[i];

    }

    return sum;
}