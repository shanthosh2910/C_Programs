// length of string without inbuilt function

#include <stdio.h>

int main()
{
    char str[] = "this is a test string";
    int len;
    for (len = 0; str[len]; len++);
    printf("%d", len);
}