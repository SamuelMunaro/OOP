#include <iostream>

int* matrix_min_max(int **vals,int num_rows, int num_cols) {

    int* start = &vals[0][0];

    int* max = start;
    int* min = start;

    for (int r = 0; r < num_rows; r++) {

        for (int c = 0; c < num_cols; c++) {

            if (max <= vals[r,c]) {
                
                max = vals[r,c];

            }

            if (min >= vals[r,c]) {

                min = vals[r,c];

            }

        }

    }

    int* mm[] = {min,max};

    return* mm;
}