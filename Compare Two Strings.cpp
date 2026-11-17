#include <stdio.h>
#include <string.h>

// Compare two strings character by character, like strcmp but written
// out by hand. Returns 0 if the strings are equal, a negative value if
// the first string comes first, and a positive value otherwise, e.g.
// "apple" vs "apple" is 0, "apple" vs "apples" is negative,
// "banana" vs "apple" is positive.

int compareStrings(const char str1[], const char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
        i++;
    }
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}

int main()
{
    const char *pairs[][2] = {
        {"apple", "apple"},
        {"apple", "apples"},
        {"banana", "apple"},
        {"", ""},
        {"cat", "car"}
    };
    int i, result, count = 5;

    for (i = 0; i < count; i++)
    {
        result = compareStrings(pairs[i][0], pairs[i][1]);
        printf("\"%s\" vs \"%s\" -> %d (%s)\n", pairs[i][0], pairs[i][1], result,
               result == 0 ? "equal" : (result < 0 ? "first comes first" : "second comes first"));
    }

    return 0;
}
