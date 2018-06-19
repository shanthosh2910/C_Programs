// linked list implentation

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node *list;

list create()
{
    list head;
    head = (list)malloc(sizeof(struct node));
    head->value = 0;
    head->next = NULL;
    return head;
}

void insertFirst(list l, int x)
{
    list temp;
    temp = (list)malloc(sizeof(struct node));
    temp->value = x;
    temp->next = l->next;
    l->next = temp;
}

void insertLast(list l, int val)
{
    list temp;
    while (l->next != NULL)
        l = l->next;
    temp = (list)malloc(sizeof(struct node));
    temp->value = val;
    temp->next = NULL;
    l->next = temp;
}

void insertBefore(list l, int val, int key)
{
    list  temp;
    while (l->next->value != key && l->next != NULL)
        l = l->next;
    if (l->next->value == key)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = val;
        temp->next = l->next;
        l->next = temp;
    }
}

void insertAfter(list l, int val, int key)
{
    list  temp;
    while (l->value != key && l->next != NULL)
        l = l->next;
    if (l->value == key)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = val;
        temp->next = l->next;
        l->next = temp;
    }
    else
        printf("\n Element not found");
}

void insertPosition(list l, int val, int position)
{
    list  temp;
    int currentPosition = 0;
    while (currentPosition != position - 1 && l->next != NULL)
    {
        l = l->next;
        currentPosition++;
    }
    if (currentPosition == position - 1)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = val;
        temp->next = l->next;
        l->next = temp;
    }
    else
        printf("\n Element not found");
}

void deleteFirst(list l)
{
    list temp;
    temp = l->next;
    if (temp == NULL)
        printf("\n List is empty");
    else
        l->next = temp->next;
    free(temp);
    printf("\nFirst element deleted");
}

void deleteMid(list l, int val)
{
    list  temp;
    while ((l->next->value != val) && (l->next != NULL))
        l = l->next;
    if (l->next->value == val)
    {
        temp = l->next;
        l->next = temp->next;
        free(temp);
    }
    printf("\nElement %d deleted",val);
}

void deleteLast(list l)
{
    list  temp;
    while (l->next->next != NULL)
        l = l->next;
    temp = l->next;
    l->next = NULL;
    free(temp);
    printf("\nLast Element Deleted...");
}

int search(list l, int k)
{
    while (l != NULL)
    {
        if (l->value == k)
            return 1;
        l = l->next;
    }
    return 0;
}

void print(list l)
{
    l=l->next;
    if (l == NULL)
        printf("\n Element not found");
    else
    {
        printf("\nElements in the list are...");
        while ( l!= NULL)
        {
            printf("%d ", l->value);
            l = l->next;
        }
    }
}

int main()
{
    list l;
    int option, q, q1, q2, q3, q4, q5, x, y, y1, k, z, w, u = 0, w1;
    char ch;
    l = create();
    printf("\n YOUR HEAD IS CREATED");
    printf("\n Do you want to create a list(y-yes n-no):");
    scanf("%c", &ch);
    if (ch == 'y')
    {
        printf("\n Enter the number of known terms:");
        scanf("%d", &w);
        printf("\n Enter the elements:");
        while (u != w)
        {
            scanf("%d", &w1);
            insertLast(l, w1);
            u++;
        }
    }
    do
    {
        printf("\n\n\t\t LIST OPERATION\n\t\t----------------------\n\t\t1.Insert first\n\t\t2.Insert before\n\t\t3.Insert after\n\t\t4.Insert position\n\t\t5.Insert last\n\t\t6.Delete first\n\t\t7.Delete middle\n\t\t8.Delete last\n\t\t9.Search\n\t\t10.Display\n\t\t0.Exit\n\t\t-----------------------\n\t\tEnter your option:");
        scanf("%d", &option);
        printf("\n\t\t-------------------------");
        switch (option)
        {
        case 1:
            printf("\nEnter the value to be  inserted:");
            scanf("%d", &x);
            insertFirst(l, x);
            print(l);
            printf("\n-----------------------------------------------");
            break;
        case 2:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q);
            printf("\nEnter the value in the list:");
            scanf("%d", &y);
            insertBefore(l, q, y);
            print(l);
            printf("\n------------------------------------------------");
            break;
        case 3:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q1);
            printf("\nEnter the value in the list:");
            scanf("%d", &y1);
            insertAfter(l, q1, y1);
            print(l);
            printf("\n-------------------------------------------------");
            break;
        case 4:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q2);
            printf("\nEnter the position:");
            scanf("%d", &k);
            insertPosition(l, q2, k);
            print(l);
            printf("\n-------------------------------------------------");
            break;
        case 5:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q3);
            insertLast(l, q3);
            print(l);
            printf("\n-------------------------------------------------");
            break;
        case 6:
            deleteFirst(l);
            print(l);
            printf("\n--------------------------------------------------");
            break;
        case 7:
            printf("\nEnter the element to be deleted:");
            scanf("%d", &q4);
            deleteMid(l, q4);
            print(l);
            printf("\n---------------------------------------------------");
            break;
        case 8:
            deleteLast(l);
            print(l);
            printf("\n---------------------------------------------------");
            break;
        case 9:
            printf("\nEnter the value searched:");
            scanf("%d", &q5);
            if (search(l,q5))
                printf("\nElement found");
            else
                printf("\nElement not found");
            printf("\n---------------------------------------------------");
            break;
        case 10:
            print(l);
            printf("\n---------------------------------------------------");
            break;
        default:
            printf("\n\nGOOD BYE\n");
        }
    } while (option != 0);
}