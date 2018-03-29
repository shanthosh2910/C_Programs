#include <stdio.h>
int n, top;

int isfull()
{
    if (top == n - 1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int s[], int x)
{
    if (!isfull())
    {
        top++;
        s[top] = x;
    }
    else
        printf("\n Stack is full");
}

void popout(int s[])
{
    int x;
    if (!isempty())
    {
        x = s[top];
        top--;
    }
    else
    {
        printf("\n Stack is empty");
    }
}

void display(int s[])
{
    int i;
    printf("\n Elements in the stack is ");
    for (i = top; i >= 0; i--)
        printf("%d ", s[i]);
}

int topOfStack(int s[])
{
    if (!isempty())
        return s[top];
    else
    {
        printf("\n Stack is empty");
        return -1;
    }
}

main()
{
    int op, a, x;
    top = -1;
    printf(" Size of stack is:");
    scanf("%d", &n);
    int s[n];
    do
    {
        printf("\n\t\tSTATIC STACK OPERATION\n\t\t------------------------\n\t\t1.Push\n\t\t2.Pop\n\t\t3.Display\n\t\t4.Top Element\n\t\t0.Exit\n\t\tEnter your option:");
        scanf("%d", &op);
        printf("\n\t\t-----------------------------");
        switch (op)
        {
        case 1:
            printf("\nEnter element to be pushed");
            scanf("%d", &a);
            push(s, a);
            break;
        case 2:
            popout(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            x = topOfStack(s);
            printf("\nThe top element is %d", x);
            break;
        }
    } while (op != 0);
}
