#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void bstInorder(bst *t)
{
    //Traverse left subtree if it exists
    if(t->left != NULL)
    {
        bstInorder(t->left);
        //printf("%p\n", t->left);
    }
    //Print node
    printf("%d, ", t->value);
    //Traverse right subtree if it exists
    if(t->right != NULL)
        bstInorder(t->right);
}

int bstInsert(int v, bst *t)
{
    //Check to see that v has not already been inserted
    if(t->value == v)
        return 0;
    //Assume root node is 0 if empty
    if(t->value == 0)
    {
        t->value = v;
        return 0;
    }

    //v less than value, insert in left subtree
    if(v < t->value)
    {
        if(t->left == NULL)
            t->left = createNode();

        bstInsert(v, t->left);
    }
    //v is greater than value
    else 
    {
        if(t->right == NULL)
            t->right = createNode();

        bstInsert(v, t->right);
    }
    return 0;
}

int bstRemove(int v, bst *t)
{
    if(t->value == v)
    {
        
    }
    else if(v < t->value)
    {

    }
    else if(t->value < v)
    {

    }
    return 0;
}

//returns 1 if true, 0 if false
int bstSearch(int v, bst *t)
{
    if(t->value==v)
        return 1;
    else if(v < t->value)
    {
        if(t->left != NULL)
            return bstSearch(v,t->left);
        else
            return 0;
    }
    else if(t->value < v)
    {
        if(t->right != NULL)
            return bstSearch(v,t->right);
        else
            return 0;
    }
}

node * createNode(void)
{
    node * n = malloc(sizeof(node));
    n->value = 0;
    n->left = NULL;
    n->right = NULL;

    return n;
}
