#include <stdio.h>

void set_bit(int *num , int bit){
    *num |= (1 << bit);
}
void clear_bit(int *num , int bit){
    *num &= ~(1 << bit);
}


int main(){
    int a = 0x1234; // 0001 0010 0011 0100
    
    set_bit(&a, 3);
    printf("%x\n", a); // 0x123c

    clear_bit(&a , 3);
    printf("%x\n", a); // 0x123c



    return 0;
}