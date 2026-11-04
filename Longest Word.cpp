#include <stdio.h>
#include <string.h>

// Find the longest word in a sentence, e.g.
// "the quick brown fox" -> longest word "quick" (5 letters)
// On a tie, the first longest word wins.

int main()
{
    char str[200];
    char longest[200];
    int i, wordStart = 0, longestLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    longest[0] = '\0';

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int wordLen = i - wordStart;
            if (wordLen > longestLen)
            {
                longestLen = wordLen;
                strncpy(longest, str + wordStart, wordLen);
                longest[wordLen] = '\0';
            }
            wordStart = i + 1;
            if (str[i] == '\0')
                break;
        }
    }

    printf("Longest word: %s (%d letters)\n", longest, longestLen);
    return 0;
}
