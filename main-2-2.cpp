#include <math.h>
#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {

int binary_digits[8] = {1,0,1,0,1,0,1,0};
// base2 = 5
int number_of_digits = 8;


std::cout << bin_to_int(binary_digits, number_of_digits) << std::endl;

return 0;
}