#include <stdio.h>
#include <string.h>

// Sort the characters of a string into alphabetical order, e.g.
// "hello" -> "ehllo", "dcba" -> "abcd". A simple bubble sort keeps
// the program short and easy to follow.

void sortCharacters(char str[])
{
    int n = strlen(str);
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char str1[] = "hello";
    char str2[] = "dcba";
    char str3[] = "Programming";

    sortCharacters(str1);
    sortCharacters(str2);
    sortCharacters(str3);

    printf("\"hello\" sorted -> \"%s\"\n", str1);
    printf("\"dcba\" sorted -> \"%s\"\n", str2);
    printf("\"Programming\" sorted -> \"%s\"\n", str3);

    return 0;
}
