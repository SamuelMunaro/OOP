#include <iostream>
#include <string>
using namespace std;

extern int* matrix_min_max(int **vals,int num_rows, int num_cols);

int main() {

    int num_rows = 2;
    int num_cols = 4;

    int row1[] = {1,2,3,4};
    int row2[] = {1,1,1,1};

    int *vals[] = {row1,row2};
    
    int *mm = matrix_min_max(vals,num_rows,num_cols);

    return 0;
}