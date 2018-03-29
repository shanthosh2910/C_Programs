// hashing the given strings to hobbies

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char name[100];
    char value[100];
    struct node *next;
};
typedef struct node *list;

list create(char hobby[])
{
    list head;
    head = (list) malloc(sizeof(struct node));
    strcpy(head->name, hobby);
    head->next = NULL;
    return head;
}

void insert_last(list L, char q[])
{

    list temp;
    list p = L;
    while (p->next != NULL)
        p = p->next;
    temp = (list) malloc(sizeof(struct node));
    strcpy(temp->value, q);
    temp->next = NULL;
    p->next = temp;
}

void display(list L)
{
    list p = L->next;
    printf("%s", L->name);
    if (p == NULL)
        printf("\tList empty");
    else
        while (p != NULL)
        {
            printf("\t%s", p->value);
            p = p->next;
        }
    printf("\n");
}

main()
{
    int n, i, a, p, d;
    char str[100];
    char hobby[100];
    scanf("%d", &n);
    list k[100];
    for (i = 0; i < n; i++)

    {
        printf("Enter the hobby");
        scanf("%s", hobby);
        k[i] = create(hobby);
    }

    do
    {
        int j = 0, s = 0, q;
        printf("Enter any string: ");
        scanf("%s", str);
        while (str[j])
        {
            q = str[j];
            s = s + q;
            j++;
        }
        p = s % n;
        // printf("%d", p);
        d = p;
        insert_last(k[d], str);
        printf("\nEnter 1 to continue 0 to exit..........");
        scanf("%d", &a);
    } while (a != 0);
    for (i = 0; i < n; i++)
    {
        display(k[i]);
    }
}
