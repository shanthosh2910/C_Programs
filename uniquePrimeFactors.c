// program to count the unique prime factors of the number
// INPUT : 12
// OUTPUT : 2  - factors of 12 are 1,2,3,4,6,12 - unique prime factors are 2,3

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count = 0;
int prime(int n)
{
    int i, sq;
    int valid = 1;
    sq = sqrt(n);
    for (i = 2; i <= sq; i++)
    {
        if (n % i == 0)
        {
            valid = 0;
        }
    }
    return valid;
}
int main()
{
    int number, n;
    scanf("%d", &number);
    for (n = 2; n <= number; n++)
    {
        if (number % n == 0)
        {
            if (prime(n) == 1)
                // printf("%ld\t%d\n",n,prime(n));
                count++;
        }
    }
    printf("%d", count);
    return 0;
}