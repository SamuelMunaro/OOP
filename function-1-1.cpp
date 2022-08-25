#include <iostream>

void print_ascending(int *vals, int len) {

    int out = 1;

    for (int i = 0; i < len-1; i++) {

        if (vals[i] < vals[i+1]) {

            out++;

            std::cout << vals[i];

            if (i < out+1) {

                std::cout << ' ';

            }

        }

    }

    std::cout << std::endl;

    return;
}