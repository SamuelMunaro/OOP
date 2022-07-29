#include <cmath>
#include <iostream>
#include <algorithm>

int median(int array[], int n){
    int number=0;
    int median=0;
    for(int i = 0; i < n; i++){
        for(int j = (i + 1); j < n; j++){
            if(array[i]>array[j]){
                number = array [i];
                array[i] = array [j];
                array[j]= number;
            }
        }
    }
    if(n % 2==1){
        median=array[(n/2)];
        return median;
    } else{
        return median;
    }
}