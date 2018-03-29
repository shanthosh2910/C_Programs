// remove vowel from the given string

#include <stdio.h>
char *vowel_remover(char str[])
{
    int always, as_you_wish = 0;
    for (always = 0; str[always]; always++)
    {
        if (str[always] == 'a' || str[always] == 'A' ||
            str[always] == 'e' || str[always] == 'E' ||
            str[always] == 'i' || str[always] == 'I' ||
            str[always] == 'o' || str[always] == 'O' ||
            str[always] == 'u' || str[always] == 'U')
            continue;
        str[as_you_wish++] = str[always];
    }
    str[as_you_wish] = NULL;
    return str;
}

int main()
{
    char str[] = "one two three four five six seven eight nine ten";
    for (outer = 0; str[outer]; outer++)
        vowel_remover(str);
    printf("%s", str);
}
