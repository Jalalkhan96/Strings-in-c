#include <stdio.h>
#include <string.h>

// Count the uppercase (A-Z) and lowercase (a-z) letters in a string.
// Digits, spaces and punctuation are ignored, e.g. "Hello World" has
// 2 uppercase and 8 lowercase letters, "ABC123def" has 3 and 3.

void countCase(char str[], int *upper, int *lower)
{
    int i;

    *upper = 0;
    *lower = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            (*upper)++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            (*lower)++;
        }
    }
}

int main()
{
    char str1[] = "Hello World";
    char str2[] = "ABC123def";
    char str3[] = "123!@#";
    int upper, lower;

    countCase(str1, &upper, &lower);
    printf("\"%s\" -> %d uppercase, %d lowercase\n", str1, upper, lower);
    countCase(str2, &upper, &lower);
    printf("\"%s\" -> %d uppercase, %d lowercase\n", str2, upper, lower);
    countCase(str3, &upper, &lower);
    printf("\"%s\" -> %d uppercase, %d lowercase\n", str3, upper, lower);

    return 0;
}
