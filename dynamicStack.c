#include <stdio.h>
#include <stdlib.h>

struct snode
{
    int value;
    struct snode *next;
};
typedef struct snode *stack;

stack create()
{
    stack head;
    head = malloc(sizeof(struct snode));
    head->value = 0;
    head->next = NULL;
    return head;
}

void push(stack s, int x)
{
    stack temp;
    temp = malloc(sizeof(struct snode));
    temp->value = x;
    temp->next = s->next;
    s->next = temp;
}

void pop(stack s)
{
    stack temp;
    if (s->next != NULL)
    {
        temp = s->next;
        s->next = temp->next;
        printf("\n Element pop out");
    }
    else
        printf("\n stack is empty");
    free(temp);
}

int topOfStack(stack s)
{
    if (s->next != NULL)
        return s->next->value;
}

void display(stack s)
{
    stack p = s->next;
    if (p == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Elements in the stack are...");
    while (p != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }
}

int main()
{
    stack s;
    s = create();
    int option, t, x1;
    do
    {
        printf("\n\t\tDYNAMIC STACK OPERATION\n\t\t------------------------\n\t\t1.Push\n\t\t2.Pop\n\t\t3.Top Element\n\t\t4.Display\n\t\t0.Exit\n\t\tEnter your option:");
        scanf("%d", &option);
        printf("\n-------------------------------");
        switch (option)
        {
        case 1:
            printf("\n Enter the element:");
            scanf("%d", &x1);
            push(s, x1);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            t = topOfStack(s);
            printf("\n Top element of the stack is......... %d", t);
            break;
        case 4:
            display(s);
            break;
        default:
            printf("\n GOOD BYE");
        }
    } while (option != 0);
}
