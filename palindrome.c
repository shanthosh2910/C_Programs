// Given a String with or without special characters find if it is Palindrome or Not.. 
// No splitting of array must be done or No additional spaces must be used for storing the array..

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
    char string[] = "I DID, DID I?";
    int length = strlen(string), iterate, end = length - 1;
    bool palindrome = true;
    length /= 2;
    for (iterate = 0; iterate < length; iterate++)
    {
        if (!isalnum(string[iterate]) || !isalnum(string[end]))
            continue;
        if (string[iterate] != string[end])
        {
            palindrome = false;
            break;
        }
        end--;
    }
    if (palindrome)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
    // puts(string);
}