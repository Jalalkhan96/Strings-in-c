#include <stdio.h>
#include <string.h>

// Remove extra spaces from a string: collapse every run of spaces into
// a single space and trim leading/trailing spaces, e.g.
// "hello   world  from   C" becomes "hello world from C".
// Other characters are left untouched.

void removeExtraSpaces(char str[])
{
    int read = 0, write = 0;
    int len = strlen(str);

    while (read < len && str[read] == ' ')
        read++;

    while (read < len)
    {
        if (str[read] == ' ')
        {
            while (read < len && str[read] == ' ')
                read++;
            if (read < len)
                str[write++] = ' ';
        }
        else
        {
            str[write++] = str[read++];
        }
    }

    str[write] = '\0';
}

int main()
{
    char str1[] = "hello   world  from   C";
    char str2[] = "  hello   world  ";
    char str3[] = "no extra spaces";
    char str4[] = "a    b";

    removeExtraSpaces(str1);
    printf("\"hello   world  from   C\" -> \"%s\"\n", str1);
    removeExtraSpaces(str2);
    printf("\"  hello   world  \" -> \"%s\"\n", str2);
    removeExtraSpaces(str3);
    printf("\"no extra spaces\" -> \"%s\"\n", str3);
    removeExtraSpaces(str4);
    printf("\"a    b\" -> \"%s\"\n", str4);

    return 0;
}
