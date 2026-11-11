#include <stdio.h>
#include <string.h>

// Count how many times a character occurs in a string, e.g.
// "hello world" contains 'l' 3 times, "banana" contains 'a' 3 times.

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
    char str3[] = "hello";

    printf("'%c' occurs %d times in \"%s\"\n", 'l', countOccurrences(str1, 'l'), str1);
    printf("'%c' occurs %d times in \"%s\"\n", 'a', countOccurrences(str2, 'a'), str2);
    printf("'%c' occurs %d times in \"%s\"\n", 'z', countOccurrences(str3, 'z'), str3);

    return 0;
}
