#include <stdio.h>
#define n 30

int top = -1;
int stack[n];

void push(char item, char x)
{
    if (top == (n - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = x;
}

char pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    return (stack[top--]);
}

int priority(char x)
{
    if (x == '(')
        return (0);
    if (x == '+' || x == '-')
        return (1);
    if (x == '*' || x == '/' || x == '%')
        return (2);
    return (3);
}

char topOfStack()
{
    if (top == -1)
        return stack[top];
}

int empty()
{
    if (top == -1)
        return 1;
}

main()
{
    char s;
    char x;
    int token;
    printf("\nEnter infix expression:");
    while ((token = getchar()) != '\0')
    {
        if (isalnum(token))
            printf("%c", token);
        else if (token == '(')
            push(s, '(');
        else
        {
            if (token == ')')
                while ((x = pop(s)) != '(')
                    printf("%c", x);
            else
            {
                while (priority(token) <= priority(topOfStack(s)) && (!empty(s)))
                {
                    x = pop(&s);
                    printf("%c", x);
                }
                push(s, token);
            }
        }
    }
    while (!empty(s))
    {
        x = pop(s);
        printf("%c", x);
    }
    getch();
}
