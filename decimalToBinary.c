// convert decimal number into binary number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int bit[32], number, rem = 0, i = 0;
    scanf("%d", &number);
    while (number > 0)
    {
        rem = number % 2;
        bit[i] = rem;
        number = number / 2;
        i++;
    }
    for (int i2 = i - 1; i2 >= 0; i2--)
        printf("%d", bit[i2]);
    return 0;
}
