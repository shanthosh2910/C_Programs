// Expression tree evaluation

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
} TREE;
typedef TREE *TREEPTR;
TREEPTR newnode, root;

typedef struct stack
{
    TREEPTR store;
    struct stack *snext;
} STACK;
STACK *top, *newstacknode;

push(TREEPTR storeIt)
{
    newstacknode = (STACK *)malloc(sizeof(STACK));
    newstacknode->store = storeIt;
    newstacknode->snext = NULL;
    if (top)
        newstacknode->snext = top;
    top = newstacknode;
}

TREEPTR pop()
{
    TREEPTR treeTemp = NULL;
    STACK *stackTemp = NULL;
    stackTemp = top;
    treeTemp = top->store;
    top = top->snext;
    free(stackTemp);
    return treeTemp;
}

int isOperator(char ch)
{
    if (ch == 42 || ch == 43 || ch == 45 || ch == 47)
        return TRUE;
    else
        return FALSE;
}

inOrderLPR(TREEPTR root)
{
    if (root == NULL)
        return;
    inOrderLPR(root->left);
    printf(" %c ", root->info);
    inOrderLPR(root->right);
}

int solve(TREEPTR root)
{
    int lvalue, rvalue;
    if (root->left == NULL && root->right == NULL)
        return root->info - 48;
    lvalue = solve(root->left);
    rvalue = solve(root->right);
    switch (root->info)
    {
    case '+':
        return lvalue + rvalue;
    case '-':
        return lvalue - rvalue;
    case '*':
        return lvalue * rvalue;
    case '/':
        return lvalue / rvalue;
    }
}

int main()
{
    char postFix[] = "98+34+*52*+6+";

    int index;
    for (index = 0; postFix[index]; index++)
    {
        if (isOperator(postFix[index]) == TRUE)
        {
            newnode = (TREEPTR)malloc(sizeof(TREE));
            newnode->info = postFix[index];
            newnode->right = pop();
            newnode->left = pop();
            push(newnode);
        }
        else
        {
            newnode = (TREEPTR)malloc(sizeof(TREE));
            newnode->info = postFix[index];
            newnode->right = NULL;
            newnode->left = NULL;
            push(newnode);
        }
    }
    root = pop();
    inOrderLPR(root);
    printf("\n%d ", solve(root));
    getch();
    return 0;
}
