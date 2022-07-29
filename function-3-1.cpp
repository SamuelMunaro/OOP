#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n){
    bool fan = true;
    int mid = round(n/2);

    for (int i = 0; i < n-1; i++) {
        if (i <= mid-1 && array[i] >= array[i+1]){
            fan = false;
        } else if (i >= mid && array[i] <= array[i+1]) {
            fan = false;
        }
    }

    return fan;
}
