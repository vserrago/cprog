#include "bst.h"

void bstInorder(bst *t)
{
    //Traverse left subtree if it exists
    if(t->left != NULL)
    {
        bstInorder(t->left);
    }
    //Print node
    printf("%d ", t->value);
    //Traverse right subtree if it exists
    if(t->right != NULL)
        bstInorder(t->right);
}

int bstInsert(int v, bst *t)
{
    //Check to see that v has not already been inserted
    if(t->value == v)
        return 0;
    //Assume root node is VALUEDEF if empty
    if(t->value == VALUEDEF)
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
    bst * replacement;
    bst * temp;
    //v is the root
    if(t->value == v)
    {

    }
    //v less than value
    if(v < t->value)
    {
        //If left subtree doesn't exist
        if(t->left == NULL)
            return 1;
        //Left subtree is value
        else if(t->left->value == v)
        {
            replacement = getReplacementNode(t->left);
            temp = t->left;
            t->left = replacement;
        }
        //Else recurse into left subtree
        else
        {
        }
    }
    //v is greater than value
    else 
    {
        //If right subtree doesn't exist
        if(t->right == NULL)
            return 1;
        //Right subtree is value
        else if(t->right->value == v)
        {
            replacement = getReplacementNode(t->right);
        }
        //Else recurse into right subtree
        else
        {
        }
    }
}

node * bstRetrieve(int v, bst *t)
{
    //If v is the node, return the node
    if(t->value==v)
        return t;
    //If v is less than value, recursively retrieve value from left subtree
    else if(v < t->value)
    {
        //Check left subtree if not null
        if(t->left != NULL)
            return bstRetrieve(v,t->left);
        //Else the value is not in this tree, return null
        else
            return NULL;
    }
    //If v is greater than value, recursively retrieve value from right subtree
    else if(t->value < v)
    {
        //If right subtree is not null, recurse into it
        if(t->right != NULL)
            return bstRetrieve(v,t->right);
        //Else return null, as v is not in this tree
        else
            return NULL;
    }
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

node * getReplacementNode(bst *t)
{
    //If there is a left subtree
    if(t->left != NULL)
    {
        //If there is a right subtree to the left subtree
        if(t->left->right != NULL)
            return t->left->right;
        //Else return the left subtree
        else
            return t->left;
    }
    //Else there is a right subtree
    else if(t->right != NULL)
    {
        //If there is a left sub-subtree
        if(t->right->left != NULL)
            return t->right->left;
        else
            return t->right;
    }
    else
        return NULL;
}
