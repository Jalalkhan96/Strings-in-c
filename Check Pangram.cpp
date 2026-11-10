#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Check whether a string is a pangram: it contains every letter of the
// English alphabet at least once, e.g. "The quick brown fox jumps over
// the lazy dog" is a pangram, "hello world" is not.
// The check is case-insensitive and ignores non-letters.

int isPangram(char str[])
{
    int seen[26] = {0};
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)str[i]))
        {
            int index = tolower((unsigned char)str[i]) - 'a';
            if (seen[index] == 0)
            {
                seen[index] = 1;
                count++;
            }
        }
    }

    return count == 26;
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPangram(str))
        printf("\"%s\" is a pangram.\n", str);
    else
        printf("\"%s\" is NOT a pangram.\n", str);

    return 0;
}
