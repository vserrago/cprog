/*node definition*/
typedef struct subtree
{
    int value;
    struct subtree * left;
    struct subtree * right;
}node;

typedef node bst;

/*Function Prototypes*/
void bstInorder(bst *t);
int bstInsert(int v, bst *t);
int bstRemove(int v, bst *t);
int bstSearch(int v, bst *t);

node * createNode(void);
