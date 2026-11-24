#include <stdio.h>
#include <string.h>

// Find the smallest word in a sentence, e.g.
// "the quick brown fox" -> smallest word "the" (3 letters)
// On a tie, the first smallest word wins.

int main()
{
    char str[200];
    char smallest[200];
    int i, wordStart = 0, smallestLen = 200;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    smallest[0] = '\0';

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int wordLen = i - wordStart;
            if (wordLen > 0 && wordLen < smallestLen)
            {
                smallestLen = wordLen;
                strncpy(smallest, str + wordStart, wordLen);
                smallest[wordLen] = '\0';
            }
            wordStart = i + 1;
            if (str[i] == '\0')
                break;
        }
    }

    if (smallest[0] == '\0')
        printf("No word found.\n");
    else
        printf("Smallest word: %s (%d letters)\n", smallest, smallestLen);
    return 0;
}
