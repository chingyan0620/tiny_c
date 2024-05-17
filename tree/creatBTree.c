#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "tree_1.h"
void createBTree(int len , int *array){
    int i ;
    for(i = 0; i < len ; i++){
        insertBTreeNode(array[i]);
    }
}
void insertBTreeNode(int d){
    BTree newnode , current;
    int inserted = 0;
    newnode = (BTree)malloc(sizeof(TreeNode));
    newnode->data = d;
    newnode->left=NULL;
    newnode->right=NULL;
    if(isBTreeEmpty()){
        head = newnode;
    }else{
        current = head;
        while (!inserted)
        {
            if(current -> data > newnode->data){
                if(current->left == NULL){
                    current->left = newnode;
                    inserted = 1;
                }else{
                    current = current->left;
                }
            }else{
                if(current->right == NULL){
                    current->right = newnode;
                    inserted = 1;
                }else{
                    current = current->right;
                }
            }
        }
    }
}
int isBTreeEmpty(){
    if(head == NULL){
        return 1;
    }else{
        return 0;
    }
}
void printBTree(){
    BTree ptr;
    printf("root : [%d]\n" ,head->data);
    ptr = head ->left;
    printf("left :" );
    while (ptr != NULL)
    {
        printf("[%d]",ptr->data);
        ptr = ptr->left;
    }
    ptr = head ->right;
    while (ptr != NULL)
    {
        printf("[%d]",ptr->data);
        ptr = ptr->right;
    }
    printf("\n");
    
}