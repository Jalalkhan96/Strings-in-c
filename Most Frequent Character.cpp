#include <stdio.h>
#include <string.h>

// Find the most frequent character in a string. Every character is
// counted (letters, digits, spaces); on a tie the character that
// appears first in the string wins, e.g. "hello world" -> 'l' (3
// times), "banana" -> 'a' (3 times), "aabbcc" -> 'a' (first of the
// three-way tie, 2 times each).

char mostFrequentChar(char str[])
{
    int freq[256] = {0};
    int i;
    char best = str[0];
    int bestCount = 0;

    for (i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[(unsigned char)str[i]] > bestCount)
        {
            bestCount = freq[(unsigned char)str[i]];
            best = str[i];
        }
    }
    return best;
}

int countOccurrences(char str[], char ch)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "banana";
    char str3[] = "aabbcc";
    char c1, c2, c3;

    c1 = mostFrequentChar(str1);
    c2 = mostFrequentChar(str2);
    c3 = mostFrequentChar(str3);

    printf("\"%s\" -> most frequent: '%c' (%d times)\n",
           str1, c1, countOccurrences(str1, c1));
    printf("\"%s\" -> most frequent: '%c' (%d times)\n",
           str2, c2, countOccurrences(str2, c2));
    printf("\"%s\" -> most frequent: '%c' (%d times)\n",
           str3, c3, countOccurrences(str3, c3));

    return 0;
}
