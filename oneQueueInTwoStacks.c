// Construct a Queue with two stacks

#include <stdio.h>

int stack1[100], stack2[100], top1 = -1, top2 = -1;
void push1(int);
void push2(int);
int pop1();
int pop2();
void enQ(int);
int deQ();

void enQ(int input)
{
    push1(input);
}

int deQ()
{
    int temp;
    while (top1 != -1)
        push2(pop1());
    temp = pop2();
    while (top2 != -1)
        push1(pop2());
    return temp;
}

void push1(int input)
{
    stack1[++top1] = input;
}

void push2(int input)
{
    stack2[++top2] = input;
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

int main()
{
    enQ(10);
    enQ(20);
    enQ(30);
    enQ(40);
    enQ(50);
    printf("%d ", deQ());
    printf("%d ", deQ());
    printf("%d ", deQ());
    //printf("%d ",deQ());
    //printf("%d ",deQ());
    return 0;
}
