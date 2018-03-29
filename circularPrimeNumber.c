#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int lower, n, rotates, j, i;
int digitCount(int n);
int prime(int n);
int rotate(int n)
{
    int remainder;
    remainder = n % 10;
    remainder *= pow(10, digitCount(n));
    remainder += n / 10;
    return remainder;
}

int digitCount(int n)
{
    int digits = 0;
    while (n != 0)
    {
        n = n / 10;
        digits++;
    }
    return --digits;
}

int prime(int n)
{
    int valid = 1;
    for (int traverse = 2; traverse <= sqrt(n); traverse++)
    {
        if (n % traverse == 0)
        {
            valid = 0;
            break;
        }
    }
    return valid;
}
int main()
{
    int isCircularPrimeNumber = 0;
    scanf("%d", &lower);
    scanf("%d", &n);
    for (j = lower; j <= n; j++)
    {
        if (prime(j) == 1 && j > 0)
        {
            rotates = j;
            for (i = 0; i <= digitCount(j); i++)
            {
                isCircularPrimeNumber = prime(rotates);
                rotates = rotate(rotates);
                if (isCircularPrimeNumber == 0)
                    break;
            }
            if (isCircularPrimeNumber == 1 && rotates <= n)
                printf("%d ", j);
            // else if (isCircularPrimeNumber == 0)
            //     printf("%d 0\n",j);
        }
        isCircularPrimeNumber = 0;
    }
    // printf("%d",prime(311));
    return 0;
}
