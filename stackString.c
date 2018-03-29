#include <stdio.h>
int n, top = -1;

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

void push(char s[], char x)
{
    if (!isfull())
    {
        top++;
        s[top] = x;
    }
    else
        printf("\n Stack is full");
}

void popout(char s[])
{
    char x;
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

void display(char s[])
{
    int i;
    printf("\n Elements in the stack is..... ");
    for (i = top; i >= 0; i--)
        printf("%c ", s[i]);
}

char topOfStack(char s[])
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
    int op;
    printf(" Size of stack is:");
    scanf("%d", &n);
    char s[n], a, z;
    do
    {

        printf("\n\t\tDYNAMIC STACK OPERATION(char)\n\t\t------------------------\n\t\t1.Push\n\t\t2.Pop\n\t\t3.Display\n\t\t4.Top Element\n\t\t5.Exit\n\t\tEnter your option:");
        scanf("%d", &op);
        printf("\n\t\t-----------------------------");

        switch (op)
        {
        case 1:
            printf("\nEnter element to be pushed.....");
            scanf("%s", &a);
            push(s, a);
            break;
        case 2:
            popout(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            z = topOfStack(s);
            if (z != -1)
                printf("\nTop of the stack is :%d", z);
            break;
        }
    } while (op != 5);
}
