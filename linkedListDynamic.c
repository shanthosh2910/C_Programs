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

void insfir(list l, int x)
{
    list temp;
    temp = (list)malloc(sizeof(struct node));
    temp->value = x;
    temp->next = l->next;
    l->next = temp;
}

void insertlast(list l, int q)
{
    list p = l, temp;
    while (p->next != NULL)
        p = p->next;
    temp = (list)malloc(sizeof(struct node));
    temp->value = q;
    temp->next = NULL;
    p->next = temp;
}

void insbef(list l, int q, int y)
{
    list p = l, temp;
    while (p->next->value != y && p->next != NULL)
        p = p->next;
    if (p->next->value == y)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = q;
        temp->next = p->next;
        p->next = temp;
    }
}

void insaft(list l, int q, int y)
{
    list p = l, temp;
    while (p->value != y && p->next != NULL)
        p = p->next;
    if (p->value == y)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = q;
        temp->next = p->next;
        p->next = temp;
    }
    else
        printf("\n Element not found");
}

void inspos(list l, int q, int k)
{
    list p = l, temp;
    int c = 0;
    while (c != k - 1 && p->next != NULL)
    {
        p = p->next;
        c++;
    }
    if (c == k - 1)
    {
        temp = (list)malloc(sizeof(struct node));
        temp->value = q;
        temp->next = p->next;
        p->next = temp;
    }
    else
        printf("\n Element not found");
}

void delfir(list l)
{
    list temp;
    temp = l->next;
    if (temp == NULL)
        printf("\n List is empty");
    else
        l->next = temp->next;
    free(temp);
}

void delmid(list l, int q)
{
    list p = l, temp;
    while ((p->next->value != q) && (p->next != NULL))
        p = p->next;
    if (p->next->value == q)
    {
        temp = p->next;
        p->next = temp->next;
        free(temp);
    }
}

void dellast(list l)
{
    list p = l, temp;
    while (p->next->next != NULL)
        p = p->next;
    temp = p->next;
    p->next = NULL;
    free(temp);
}

int search(list l, int k)
{
    list p = l;
    while (p != NULL)
    {
        if (p->value == k)
            return 1;
        p = p->next;
    }
    return 0;
}

void display(list l)
{
    list p = l->next;
    if (p == NULL)
        printf("\n Element not found");
    else
    {
        printf("\n Elements in the list are...");
        while (p != NULL)
        {
            printf("%d ", p->value);
            p = p->next;
        }
    }
}

main()
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
            insertlast(l, w1);
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
            insfir(l, x);
            printf("\n-----------------------------------------------");
            break;
        case 2:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q);
            printf("\nEnter the value in the list:");
            scanf("%d", &y);
            insbef(l, q, y);
            printf("\n------------------------------------------------");
            break;
        case 3:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q1);
            printf("\nEnter the value in the list:");
            scanf("%d", &y1);
            insaft(l, q1, y1);
            printf("\n-------------------------------------------------");
            break;
        case 4:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q2);
            printf("\nEnter the position:");
            scanf("%d", &k);
            inspos(l, q2, k);
            printf("\n-------------------------------------------------");
            break;
        case 5:
            printf("\nEnter the new element to be inserted:");
            scanf("%d", &q3);
            insertlast(l, q3);
            printf("\n-------------------------------------------------");
            break;
        case 6:
            delfir(l);
            printf("\n--------------------------------------------------");
            break;
        case 7:
            printf("\nEnter the element to be deleted:");
            scanf("%d", &q4);
            delmid(l, q4);
            printf("\n---------------------------------------------------");
            break;
        case 8:
            dellast(l);
            printf("\n---------------------------------------------------");
            break;
        case 9:
            printf("\nEnter the value searched:");
            scanf("%d", &q5);
            z = search(l, q5);
            if (z == 1)
                printf("\nElement found");
            else
                printf("\nElement not found");
            printf("\n---------------------------------------------------");
            break;
        case 10:
            display(l);
            printf("\n---------------------------------------------------");
            break;
        default:
            printf("\n\nGOOD BYE\n");
        }
    } while (option != 0);
}