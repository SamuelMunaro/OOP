#include <iostream>

using namespace std;
extern int binary_to_number(int[], int);
int main(){
    int a[5] = {1, 0, 1, 1, 1};
    cout << binary_to_number(a, 5) << "" << endl;
}