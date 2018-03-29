#include <stdio.h>
#include <stdlib.h>

struct qnode
{
    int val;
    struct qnode *next;
};

typedef struct qnode *queue;
queue head, rear, front, q;
int x;

queue create()
{
    head = malloc(sizeof(struct qnode));
    head->val = x;
    head->next = head;
    return head;
}

queue enqueue(queue r, int x)
{
    queue temp;
    temp = malloc(sizeof(struct qnode));
    temp->val = x;
    temp->next = r->next;
    r->next = temp;
    r = temp;
    return r;
}

void display(queue q)
{
    queue k = q;
    printf("The Survivor is\n");
    while (k->next != q)
    {
        printf("%d\n", k->val);
        k = k->next;
    }
    printf("%d", k->val);
}

queue josephus(int o, queue q)
{
    queue temp;
    while (q->next != q)
    {
        int k = 1;
        while (k != o - 1)
        {
            q = q->next;
            k++;
        }
        temp = q->next;
        q->next = temp->next;
        free(temp);
        q = q->next;
    }
    return q;
}

main()
{
    int x, j, o, n, head = NULL;
    printf("Enter number of persons\n\n");
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        scanf("%d", &x);
        if (head == NULL)
        {
            q = create(x);
            rear = q;
            head = 1;
        }
        else
            rear = enqueue(rear, x);
    }
    printf("Enter the nth person to be terminated...");
    scanf("%d", &o);
    if (o == 1)
        printf("%d", rear->val);
    else
        display(josephus(o, q));
}
