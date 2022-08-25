#include <iostream>

void print_ascending(int *vals, int len) {

    int out = 1;

    std::cout << vals[0] << ' ';

    for (int i = 0; i < len-1; i++) {

        if (vals[i+1] >= vals[i]) {

            out++;

            std::cout << vals[i+1] << ' ';


        }

    }

    std::cout << std::endl;

    return;
}