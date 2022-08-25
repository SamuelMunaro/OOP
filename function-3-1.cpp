#include <iostream>

int next_match_count(int vals[], int length) {

    int count = 0;

    for (int i = 0; i < length-1; i++) {

        if(vals[i] == vals[i+1]) {

            count++;

        }

    }

    return count;
}