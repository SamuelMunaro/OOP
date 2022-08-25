#include <iostream>

void print_ascending(int *vals, int len) {

    int out = 0;

    for (int i = 0; i < len; i++) {

        if (vals[i+1] > vals[i]) {

            out++;

            std::cout << out;

            if (i < out+1) {

                std::cout << ' ';

            }

        }

    }

    std::endl;

    return;
}