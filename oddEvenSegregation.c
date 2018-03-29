// program to arrange the even digits first and odd digits second of the given number vice versa
// If the option is 0 - odd digits first 1 - even digits first
// INPUT : 0 89745
// OUPUT : 97584

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int des, c = 0, o = 0, e = 0;
    char value[9], odd[9], even[9], process;
    scanf("%d", &des);
    scanf("%s", value);
    for (int i = 0; i < strlen(value); i++)
    {
        process = value[i];
        if ((int)process % 2 == 0)
        {
            odd[o] = value[i];
            o++;
        }
        else if ((int)process % 2 != 0)
        {
            even[e] = value[i];
            e++;
        }
    }
    if (des == 0)
    {
        printf(even);
        printf(odd);
    }
    else
    {
        printf(odd);
        printf(even);
    }
    printf("%d", o);
    printf("%d", e);
    return 0;
}
