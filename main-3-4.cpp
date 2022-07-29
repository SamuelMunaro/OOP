#include <algorithm>
#include <cmath>
#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char);

int main() {
  char grade = 'G';

  // std::cout << "The grade is a: " << print_pass_fail(grade) << std::endl;

  print_pass_fail(grade);

  return 0;
}