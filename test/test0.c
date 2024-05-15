#include <stdio.h>
int main() {
    typedef union {
        unsigned int i;
        unsigned char c[4];
    } EndianTest;
    EndianTest t;
    t.i = 0x12345678;
    if(t.c[0] == 0x12 && t.c[1] == 0x34 && t.c[2] == 0x56 && t.c[3] == 0x78){
        printf("Big Endian!!");
    }else if(t.c[0] == 0x78 && t.c[1] == 0x56 && t.c[2] == 0x34 && t.c[3] == 0x12){
        printf("Little Endian!!");
    }else{
        printf("Other Endian!!");
    }
    
    return 0;
}