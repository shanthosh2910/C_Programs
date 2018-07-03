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

tree findMinimum(tree t)
{
    while (t->leftChild != NULL)
        t = t->leftChild;
    return t;
}

tree delete (tree t, int key)
{
    if (t == NULL)
        return NULL;
    if (key < t->data)
        t->leftChild = delete (t->leftChild, key);
    else if (key > t->data)
        t->rightChild = delete (t->rightChild, key);
    else
    {
        if (t->leftChild == NULL && t->rightChild == NULL)
        {
            free(t);
            t = NULL;
        }
        else if (t->leftChild == NULL)
        {
            tree temp = t;
            t = t->rightChild;
            free(temp);
        }
        else if (t->rightChild == NULL)
        {
            tree temp = t;
            t = t->leftChild;
            free(temp);
        }
        else
        {
            tree temp = findMinimum(t->rightChild);
            t->data = temp->data;
            t->rightChild = delete (t->rightChild, temp->data);
        }
    }
    return t;
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
        printf("\n\n\t\t LIST OPERATION\n\t\t----------------------\n\t\t1.Insert\n\t\t2.InOrder traversal\n\t\t3.PreOrder traversal\n\t\t4.PostOrder traversal\n\t\t5.Search\n\t\t6.Delete\n\t\t0.Exit\n\t\t-----------------------\n\t\tEnter your option:");
        scanf("%d", &option);
        printf("\n\t\t-------------------------\n");
        switch (option)
        {
        case 1:
            printf("\nValue to be inserted.....");
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
            printf("\nValue to be searched....");
            scanf("%d", &value);
            if (search(t, value))
                printf("\nFound");
            else
                printf("\nNot Found");
            printf("\n-----------------------------------------------");
            break;
        case 6:
            printf("\nValue to be deleted....");
            scanf("%d", &value);
            delete(t,value);
            break;
        default:
            printf("\n...Thank you...");
        }
    } while (option != 0);
}