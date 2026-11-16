#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Count the words in a string that start with a vowel (a, e, i, o, u),
// e.g. "apple orange banana umbrella" -> 3, "hello world" -> 0.
// Words are separated by spaces; the check is case-insensitive.

int isVowel(char c)
{
    c = tolower((unsigned char)c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countWordsStartingWithVowel(char str[])
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0')
            break;
        if (isVowel(str[i]))
            count++;
        while (str[i] != '\0' && str[i] != ' ')
            i++;
    }
    return count;
}

int main()
{
    char str1[] = "apple orange banana umbrella";
    char str2[] = "hello world";
    char str3[] = "An apple a day";

    printf("\"%s\" -> %d words start with a vowel\n", str1, countWordsStartingWithVowel(str1));
    printf("\"%s\" -> %d words start with a vowel\n", str2, countWordsStartingWithVowel(str2));
    printf("\"%s\" -> %d words start with a vowel\n", str3, countWordsStartingWithVowel(str3));

    return 0;
}
