#include <stdio.h>

#include <stdlib.h>     //exit()
#include <signal.h>     //signal()
#include "EPD_Test.h" 

/*
aarch64-none-linux-gnu-gcc 
aarch64-none-linux-gnu-gcc main.c -o main2
scp D:\program\github_local\c_project\tiny_c\rpi_epd\main2 ken@192.168.50.138:/home/ken/Desktop/remote_test
*/

int main(){
    printf("132\n");
    EPD_7in5b_V2_test();
    return 0;
}