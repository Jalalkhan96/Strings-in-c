#include <stdio.h>
#include <string.h>

// Remove every space from a string, e.g.
// "hello world from C" -> "helloworldfromC"
// The result is written back into the same string.

void removeSpaces(char str[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main()
{
    char str1[] = "hello world from C";
    char str2[] = "  spaces  everywhere  ";

    printf("Before: \"%s\"\n", str1);
    removeSpaces(str1);
    printf("After:  \"%s\"\n", str1);

    printf("Before: \"%s\"\n", str2);
    removeSpaces(str2);
    printf("After:  \"%s\"\n", str2);

    return 0;
}
