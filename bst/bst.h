#include <stdio.h>
#include <stdlib.h>
#define VALUEDEF 0

/*node definition*/
typedef struct subtree
{
    int value;
    struct subtree * left;
    struct subtree * right;
}node;

typedef node bst;

/*Function Prototypes*/

/* Prints to stdout the in-order traversal of the bst
 */
void bstInorder(bst *t);


/* Recursive function to insert v into bst t. Returns 0 if function completed
 * successfully, otherwise it will return another number.
 */
int bstInsert(int v, bst *t);


/* Recursive function to remove v from bst t. Returns 0 if function completed
 * successfully. Returns 1 if v is not found in bst.
 */
int bstRemove(int v, bst *t);


/* Recursive function to retrieve the node containing v in bst t. Returns the
 * node if v is found within t, otherwise will return 0
 */
node * bstRetrieve(int v, bst *t);


/* Recursive function search for v in bst t. Returns 0 (true) if v exists in t,
 * otherwise returns 0 (false).
 */
int bstSearch(int v, bst *t);


/* Creates a bst/node/subtree using dynamic allocation and sets all values to
 * a specified default. Value is set to 0 and all pointers are set to NULL.
 */
node * createNode(void);

/* Gets a node from tree t to replace t. Looks for in-order predecessor first,
 * and if none are found, looks for in-order successor leaf. Returns node that
 * will replace t, or NULL if no such node exists
 */
node * getReplacementNode(bst* t);
