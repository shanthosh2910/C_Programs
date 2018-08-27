#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int max;
int *array;
int front = 0, rear = -1, count = 0;

bool isEmpty()
{
    return count == 0;
}

bool isFull()
{
    return count == max;
}

void enqueue(int value)
{
    if (isFull())
        return;
    if (rear == max - 1)
        rear = -1;
    array[++rear] = value;
    count++;
}

int dequeue()
{
    if (isEmpty())
        return;
    if (front == max)
        front = 0;
    int data = array[front++];
    count--;
    return dequeue;
}

void print()
{
    for (int i = 0; i < max; printf("%d ", array[i++]))
        ;
}

int main()
{
    int choice, data;
    scanf("%d", &max);
    array = (int *)malloc(max * sizeof(int));
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\nChoice...");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            int deleted = dequeue();
            printf("%d deleted",deleted);
            break;
        case 3:
            print();
            break;
        }
    } while (choice != 4);
}