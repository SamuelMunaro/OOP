#include <iostream>
#include <string>
using namespace std;

extern int next_match_count(int vals[], int length);

int main() {

    int vals[8] = {1,2,2,3,3,5,1,1};
    int length = 8;

    int res = next_match_count(vals, length);

    std::cout << res;

    return 0;
}