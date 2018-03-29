// print the nth term of fibonacci series. n will be in the range of 0 - 25

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int f1 = 0, f2 = 1, sum = 0, n;
    scanf("%d", &n);
    printf("%d ", f2);
    for (int i = 0; i < n - 1; i++)
    {
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
        printf("%d ", sum);
    }

    return 0;
}