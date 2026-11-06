#include <stdio.h>
#include <string.h>

// Count the words in a string. Words are separated by one or more
// spaces, and leading/trailing spaces do not create extra words, e.g.
// "hello world from C" has 4 words, "  hello   world  " has 2.

int countWords(char str[])
{
    int i, count = 0, inWord = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if (!inWord)
            {
                count++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }
    return count;
}

int main()
{
    char str1[] = "hello world from C";
    char str2[] = "  hello   world  ";
    char str3[] = "one";

    printf("\"%s\" -> %d words\n", str1, countWords(str1));
    printf("\"%s\" -> %d words\n", str2, countWords(str2));
    printf("\"%s\" -> %d words\n", str3, countWords(str3));

    return 0;
}
