#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int right)
{
    int pivot = array[right];
    int left = low - 1;
    for (int ctr = low; ctr <= right - 1; ctr++)
    {
        if (array[ctr] <= pivot)
        {
            left++;
            swap(&array[left], &array[ctr]);
        }
    }
    swap(&array[left + 1], &array[right]);
    return left + 1;
}

void quickSort(int array[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(array, left, right);
        quickSort(array, left, pi - 1);
        quickSort(array, pi + 1, right);
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; scanf("%d", &array[i++]))
        ;
    quickSort(array, 0, size - 1);
    for (int i = 0; i < size; printf("%d ", array[i++]))
        ;
    return 0;
}
 