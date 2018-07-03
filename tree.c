#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};
typedef struct node *tree;

tree createRoot(int value)
{
    tree temp;
    temp = (tree)malloc(sizeof(struct node));
    temp->leftChild = temp->rightChild = NULL;
    temp->data = value;
    return temp;
}

tree insert(tree t, int value)
{
    if (!t)
        return createRoot(value);
    if (value < t->data)
        t->leftChild = insert(t->leftChild, value);
    else if (value > t->data)
        t->rightChild = insert(t->rightChild, value);
}

void inOrder(tree t)
{
    if (t == NULL)
        return;
    inOrder(t->leftChild);
    printf("%d ", t->data);
    inOrder(t->rightChild);
}

void preOrder(tree t)
{
    if (t == NULL)
        return;
    printf("%d ", t->data);
    preOrder(t->leftChild);
    preOrder(t->rightChild);
}

void postOrder(tree t)
{
    if (t == NULL)
        return;
    postOrder(t->leftChild);
    postOrder(t->rightChild);
    printf("%d ", t->data);
}

int search(tree t, int key)
{
    if (t == NULL)
        return 0;
    if (t->data == key)
        return 1;
    if (key < t->data)
        search(t->leftChild, key);
    if (key > t->data)
        search(t->rightChild, key);
}

int main()
{
    tree t;
    t = NULL;
    int num, option, value, found;
    printf("Number of known data....");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &value);
        t = insert(t, value);
    }
    do
    {
        printf("\n\n\t\t LIST OPERATION\n\t\t----------------------\n\t\t1.Insert\n\t\t2.InOrder traversal\n\t\t3.PreOrder traversal\n\t\t4.PostOrder traversal\n\t\t5.Search\n\t\t0.Exit\n\t\t-----------------------\n\t\tEnter your option:");
        scanf("%d", &option);
        printf("\n\t\t-------------------------");
        switch (option)
        {
        case 1:
            printf("Value to be inserted.....");
            scanf("%d", &value);
            insert(t, value);
            printf("\n-----------------------------------------------");
            break;
        case 2:
            inOrder(t);
            printf("\n-----------------------------------------------");
            break;
        case 3:
            preOrder(t);
            printf("\n-----------------------------------------------");
            break;
        case 4:
            postOrder(t);
            printf("\n-----------------------------------------------");
            break;
        case 5:
            printf("Value to be searched....");
            scanf("%d", &value);
            if (search(t, value))
                printf("\nFound");
            else
                printf("\nNot Found");
            printf("\n-----------------------------------------------");
            break;
        default:
            printf("...Thank you...");
            printf("\n-----------------------------------------------");
        }
    } while (option != 0);
}