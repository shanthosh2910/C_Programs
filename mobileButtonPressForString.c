// lets consider the mobile phone keypad
// 1-     2-abc  3-def
// 4-ghi  5-jkl  6-mno
// 7-pqrs 8-tuv  9-wxyz
// get a string input and print the consecutive buttons to be pressed to achieve the string

#include <stdio.h>
int main()
{
    char sets[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int strCtr, posCtr, print, passCtr;
    char *ptr;
    char pass[] = "sudharsan";
    printf("%s\n", pass);
    for (passCtr = 0; pass[passCtr]; passCtr++)
    {
        for (strCtr = 2; strCtr < 10; strCtr++)
        {
            ptr = strchr(sets[strCtr], pass[passCtr]);
            //printf("%d\n",ptr);
            if (ptr)
            {
                posCtr = ptr - sets[strCtr];
                //printf("\n%u - %u = %d\n",ptr ,sets[strCtr],posCtr);
                break;
            }
        }

        for (print = 0; print <= posCtr; print++)
            printf("%d", strCtr);
    }
    return 0;
}
