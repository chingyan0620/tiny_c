#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// compile:
// gcc insertion_sort.c -o insertion_sort

void build_rand(int start ,int end,int len , int*array){
    srand(time(NULL));
    int pool = end - start  ;
    int *tmp_arr = malloc(sizeof(int) * pool);

    for (int i = start; i < end; i++) {
        tmp_arr[i-start] = i;        
    }
    for (int i = 0; i < pool; i++) {
        int rand_to_swap = rand()%(pool-i);
        int tmp = tmp_arr[pool-1-i];
        tmp_arr[pool-1-i] = tmp_arr[rand_to_swap];
        tmp_arr[rand_to_swap] = tmp;
    }
    for(int i = 0 ; i <len ; i++){
        array[i] = tmp_arr[i];
    }
    free(tmp_arr);

}
void print_arr(int len, int * array){
    for(int i = 0 ; i < len ; i++){
        printf("%d , " , array[i]);
    }
}

void insertion_sort(int len, int * array){

    for(int i = 1 ; i < len ; i++){
        int val = array[i];
        int j = i - 1;
        while (j>=0 && array[j] > val)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = val;
    }

}
int main(){
    int len = 11;
    int *arr = calloc(len , sizeof(int));

    build_rand(0 , 11,len , arr);
    print_arr(len , arr);
    insertion_sort(len , arr);
    printf("\n------------------------\n");
    print_arr(len , arr);

    printf("\nfinish !!");
    free(arr);

}