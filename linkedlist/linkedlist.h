#include <stddef.h>
struct node
{
    int data;
    struct node *next;    
};

typedef struct node Lnode;
typedef Lnode *list;
list head = NULL;

extern void create(int len ,int *array);

extern void printlist();

