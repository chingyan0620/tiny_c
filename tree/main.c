#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
// #include "tree_1.h"
#include "creatBTree.c"

int main(){
    int data[9] = {0,1,2,3,4,5,6,7,8};
    createBTree(9,data);
    printf("tree is empty :%d \n" ,isBTreeEmpty());
    printf("tree content :\n");
    printBTree();
    printf("\n");

    return 0;
}