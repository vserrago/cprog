#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void bstInorder(bst *t)
{
    //Traverse left subtree if it exists
    if(t->left != NULL)
    {
        bstInorder(t->left);
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
        //If left subtree doesn't exist, create it
        if(t->left == NULL)
            t->left = createNode();

        bstInsert(v, t->left);
    }
    //v is greater than value, insert in right
    else 
    {
        //If right subtree doesn't exist, create it
        if(t->right == NULL)
            t->right = createNode();

        bstInsert(v, t->right);
    }
    return 0;
}

int bstRemove(int v, bst *t)
{
    bst * temp;
    //If v is the node
    if(t->value == v)
    {
    }
    //If v is less than the node
    else if(v < t->value)
    {

    }
    //if v is greater than the node
    else if(t->value < v)
    {

    }
    return 0;
}

int bstSearch(int v, bst *t)
{
    //If v is the node, return true
    if(t->value==v)
        return 1;
    //If v is less than value, search left subtree
    else if(v < t->value)
    {
        //Check left subtree if not null, otherwise false
        if(t->left != NULL)
            return bstSearch(v,t->left);
        else
            return 0;
    }
    //If v is greater than value, search right subtree
    else if(t->value < v)
    {
        //Check right subtree if not null, otherwise false
        if(t->right != NULL)
            return bstSearch(v,t->right);
        else
            return 0;
    }
}

node * createNode(void)
{
    //Allocate space for n
    node * n = malloc(sizeof(node));

    //Guarantee values have a default value by setting them manually
    n->value = VALUEDEF;
    n->left = NULL;
    n->right = NULL;

    return n;
}
