#include <iostream>
#include <array>
#include <string>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void print_binary_str(string);

int main() {

    string number = "135";

    print_binary_str(number);

    return 0;
} 