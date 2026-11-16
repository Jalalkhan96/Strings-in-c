#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Extract all the digits from a string, in order, e.g.
// "abc123def45" -> "12345", "a1b2c3" -> "123".
// A string with no digits produces an empty result.

void extractDigits(char str[], char result[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)str[i]))
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
}

int main()
{
    char str1[] = "abc123def45";
    char str2[] = "a1b2c3";
    char str3[] = "no digits here";
    char result[100];

    extractDigits(str1, result);
    printf("\"%s\" -> \"%s\"\n", str1, result);

    extractDigits(str2, result);
    printf("\"%s\" -> \"%s\"\n", str2, result);

    extractDigits(str3, result);
    printf("\"%s\" -> \"%s\"\n", str3, result);

    return 0;
}
