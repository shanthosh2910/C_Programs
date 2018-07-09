// print the pair which are mismatched in two strings
// Input:
// shanthosh
// shanThosh
// Output:
// t,T


#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50], string2[50];
    int s1Length, s2Length, cursor = 0;
    gets(string1);
    gets(string2);
    if (strlen(string1) != strlen(string2))
        printf("Comparision Terminated");
    else
    {
        for (cursor = 0; string1[cursor]; cursor++)
        {
            if (string1[cursor] != string2[cursor])
                printf("%c,%c ", string1[cursor], string2[cursor]);
        }
    }
}