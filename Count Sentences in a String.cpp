#include <stdio.h>
#include <string.h>

// Count the sentences in a string. A sentence ends with '.', '!' or
// '?'; runs of terminators (e.g. "..." or "?!") count as one end, e.g.
// "Hello world. How are you? I am fine!" has 3 sentences,
// "Wait... what?!" has 2, "No terminator here" has 0.

int countSentences(char str[])
{
    int i, count = 0, inTerminator = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            if (!inTerminator)
            {
                count++;
                inTerminator = 1;
            }
        }
        else
        {
            inTerminator = 0;
        }
    }
    return count;
}

int main()
{
    char str1[] = "Hello world. How are you? I am fine!";
    char str2[] = "Wait... what?!";
    char str3[] = "No terminator here";
    char str4[] = "One.";

    printf("\"%s\" -> %d sentences\n", str1, countSentences(str1));
    printf("\"%s\" -> %d sentences\n", str2, countSentences(str2));
    printf("\"%s\" -> %d sentences\n", str3, countSentences(str3));
    printf("\"%s\" -> %d sentences\n", str4, countSentences(str4));

    return 0;
}
