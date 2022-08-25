#include <iostream>
#include <string>
using namespace std;

extern string month_lookup(int month);

int main() {

    int month = 15;

    std::cout << month_lookup(month) << std::endl;

    return 0;
}