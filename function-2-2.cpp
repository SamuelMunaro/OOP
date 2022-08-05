#include <iostream>
using namespace std;
int binary_to_number(int array[], int digits){
    int base = 0, total = 0, n = 4;
    for(int i = digits - 1; i >= 0; i--){
        total += (array[n] * 2^base);
        base++;
        n--;
    }
    return total;
}