// INPUT : 46325642
// OUTPUT:
// Frequency of 0 = 0
// Frequency of 1 = 0
// Frequency of 2 = 2
// Frequency of 3 = 1
// Frequency of 4 = 2
// Frequency of 5 = 1
// Frequency of 6 = 2
// Frequency of 7 = 0
// Frequency of 8 = 0
// Frequency of 9 = 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number, base[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, lastdigit;
    scanf("%d", &number);
    while (number != 0)
    {
        lastdigit = number % 10;
        number = number / 10;
        base[lastdigit]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Frequency of %d = %d\n", i, base[i]);
    }
    return 0;
}
