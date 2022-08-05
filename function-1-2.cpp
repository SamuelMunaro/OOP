#include <iostream>
using namespace std;
int sum_diagonal(int a[10][10]){
    for (int row = 0; row < 10; row++){
        for (int col = 0; col < 10; col++){
            if(row == col && a[row][col] != 1){
            return 0;
            }
            else if(row != col && a[row][col] != 0){;
            return 0;
            }
        }
    }
    return 1;
}