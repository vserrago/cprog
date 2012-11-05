#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


int main(int argc, char * argv[])
{
    int i=0;
    bst *t;
    //Set child nodes to NULL
    /*t.value = 0;
    t.left = NULL;
    t.right = NULL;*/

    t = createNode();

    bstInsert(10,t);
    bstInsert(4,t);
    bstInsert(6,t);
    bstInsert(9,t);
    bstInsert(1,t);

    bstInorder(t);
    printf("\n");

    for(i=1; i<20; i++)
    {
        if(bstSearch(i,t))
            printf("%d is in the tree\n",i);
        else
            printf("%d is NOT in the tree\n",i);
    }
    //printf("%d\n", argc);

    //for (i=0; i<argc; i++)
    //{
    //    printf("%s ", argv[i]);
    //}
    
    //Print out newline at the end
    printf("\n");

    return 0;
}
