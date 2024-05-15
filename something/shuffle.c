#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    // array 放 1~50
    int arr[SIZE] = {0}; 
    for(int i=0; i<SIZE; i++){
        arr[i] = i+1;
    }

    srand((unsigned)time(NULL));

    // fisherYatesShuffle
    for(int i=SIZE-1; i>=0; i--){
        int k = rand() % (i+1); // index:0~49(%50), 0~48(%49), ..., 0~0(%1)
        swap(&arr[k], &arr[i]);
    }

    for(int i=0; i<SIZE; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}