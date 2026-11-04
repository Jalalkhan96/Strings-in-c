#include <stdio.h>
#include <string.h>

// Remove duplicate characters from a string, keeping only the first
// occurrence of each character and preserving the original order, e.g.
// "programming" -> "progamin"
// "hello world" -> "helo wrd"

int main()
{
    char str[200];
    char result[200];
    int i, j, found, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; j < len; j++)
        {
            if (result[j] == str[i])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            result[len] = str[i];
            len++;
        }
    }
    result[len] = '\0';

    printf("String without duplicates: %s\n", result);
    return 0;
}
