#include <stddef.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node TreeNode;
typedef TreeNode *BTree;
BTree head = NULL;
extern void createBTree(int len ,int *array);
extern void insertBTreeNode(int d);
extern int isBTreeEmpty();
extern void printBTree();

