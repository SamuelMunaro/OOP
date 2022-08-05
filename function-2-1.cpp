#include <math.h>
#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int number = stoi(decimal_number);

  // int base10 = 12345;
  int base2[9] = {};
  int current = number;
  int mag = 0;

  while (pow(2, mag) < number) {
    if (pow(2, mag) < number) {
      mag++;
    }
  }

  for (int i = 0; i < mag; i++) {
    if (current % 2 == 0) {
      current = current / 2;
      base2[i] = 0;

    } else {
      current = current - 1;
      current = current / 2;
      base2[i] = 1;
    }
  }
  
    
    for (int i = 1; i < mag+1; i++) {
        printf("%d", base2[mag - i]);
    }
    
    std::cout << std::endl;

  return;
}