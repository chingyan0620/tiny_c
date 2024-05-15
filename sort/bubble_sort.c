#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// compile:
// gcc bubble_sort.c -o bubble_sort

void bubble_sort(int len , int *array){

    for(int i = 0 ; i < len ; i++){
        for(int j = 1 ; j < len-i+1 ; j++){
            if(array[j] < array[j-1]){
                int tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }
}
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

int main(){
    int len = 10;
    int *arr = calloc(len , sizeof(int));

    build_rand(450 , 500,len , arr);
    print_arr(len , arr);
    bubble_sort(len , arr);
    printf("\n");
    print_arr(len , arr);

    printf("\nfinish !!");
    free(arr);

    return 0;
}