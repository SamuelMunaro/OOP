#include <math.h>
#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits) {

  int base10 = 0;

  for (int i = 0; i < number_of_digits; i++) {
    if (binary_digits[i] == 0) {
      base10 = base10 * 2;

    } else {
      base10 = base10 * 2 + 1;

    }

  }

  return base10;
}