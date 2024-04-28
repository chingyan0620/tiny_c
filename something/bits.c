#include <stdio.h>
#include <stdlib.h>
// void set_bit(int *num , int bit){
//     *num |= (1 << bit);
// }
// void clear_bit(int *num , int bit){
//     *num &= ~(1 << bit);
// }
// void inver_bit(int *num , int bit){
//     *num 
// }

typedef struct  ex* ptr;
struct ex{ptr ff;int k;
    /* data */
};


int main(){
    // int a = 0x1234; // 0001 0010 0011 0100
    
    // set_bit(&a, 3);
    // printf("%x\n", a); // 0x123c

    // clear_bit(&a , 3);
    // printf("%x\n", a); // 0x123c

    ptr x,y,t;
    x= malloc(sizeof *x);
    y= malloc(sizeof *y);
    x->ff = y; y->ff=x; x->k =1; y->k = 1;
    for( t = x ; t->k <100 ;t = t->ff){
        t->k=x->k + y->k;
        printf("%d\n" , t->k);
    }
    unsigned char c = '-';
    switch (c)
    {
    case'-':
        printf("%c\n" , c);
        break;
    case'+':
        printf("%c\n" , c);
        break;
    
    default:
        printf("non" );
        break;
    }
    printf("%c\n" , 1234);


    return 0;
}