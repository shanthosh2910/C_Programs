// implentation of list operations in array

#include <stdio.h>
int n;

int search(int a[], int s)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == s)
            return i;
    }
    return -1;
}

void insert(int a[], int p, int x)
{
    int i;
    for (i = n; i > p; i--)
        a[i + 1] = a[i];
    a[p] = x;
    n++;
}

int delete (int a[], int p)
{
    int i;
    for (i = p; i <= n; i++)
        a[i] = a[i + 1];
    n--;
}

void display(int a[], int n)
{
    int i;
    printf("\n The resultant array is:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void sort(int a[])
{
    int i, j, t = 0;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
}

void merge(int arr1[], int arr2[], int n1)
{
    int i = 0, res[100], j = 0, k = 0;
    while (i < n && j < n1)
    {
        if (arr1[i] <= arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        res[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n1)
    {
        res[k] = arr2[j];
        k++;
        j++;
    }
    printf("\n Merging done......\n");
    display(res, k);
}

void main()
{
    int p, i, option, s, del, ins;
    printf("\n\t Create a new array\n\t  \n");
    printf("\n Enter the no of terms:");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter the array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    do
    {
        printf("\n\n\t\tIMPLEMENTATION OF LIST OPERATION IN ARRAY\n\t\t--------------------------------------\n\n\t\t1.Searching\n\t\t2.Insertion\n\t\t3.Deletion by position\n\t\t4.Display\n\t\t5.Sorting\n\t\t6.Merging and Sorting\n\t\t7.Deletion by value\n\t\t0.Exit\n\n\t\tEnter the corresponding number:");
        scanf("%d", &option);
        switch (o)
        {
        case 1:
            printf("\n Enter the element to be searched:");
            int x;
            scanf("%d", &s);
            x = search(a, s);
            if (x > 0)
                printf("\n Searching done....\n The element is found in the position:%d", x + 1);
            else
                printf("\n Element not found");
            break;
        case 2:
            printf("\n Enter the element and its positon to get inserted:");
            scanf("%d%d", &ins, &p);
            insert(a, p, ins);
            printf("\n Insertion done....\n");
            break;
        case 3:
            printf("\n Enter the position in which the deletion want to takes place:");
            scanf("%d", &del);
            delete (a, del);
            printf("\n Deletion done....\n");
            break;
        case 4:
            display(a, n);
            break;
        case 5:
            sort(a);
            printf("\n Sorting done....\n");
            break;
        case 6:
            printf("\n Enter second array to get merged");
            int n1, b[50];
            printf("\n Enter the no of terms:");
            scanf("%d", &n1);
            printf("\n Enter the array elements:");
            for (i = 0; i < n1; i++)
                scanf("%d", &b[i]);
            merge(a, b, n1);
            break;
        case 7:
            printf("\n Enter the value to be deleted:");
            int s, z1;
            scanf("%d", &s);
            z1 = search(a, s);
            delete (a, z1);
            printf("\n Deletion done....\n");
            break;
        }
    } while (option != 0);
}
