#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void create(int len , int *array){
    list newnode;
    for(int i = 0 ; i < len ;i++){
        newnode = (list) malloc(sizeof(Lnode));
        newnode->data = array[i];
        newnode->next = head;
        head = newnode;
    }
}

void printlist(){
    list cur = head;
    while(cur != NULL){
        printf("[%d]" , cur->data);
        cur = cur->next;
    }
    printf("\n");
}

