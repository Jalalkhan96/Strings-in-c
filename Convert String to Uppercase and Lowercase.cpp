#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert a string to uppercase and to lowercase, e.g. "Hello World"
// -> uppercase "HELLO WORLD" and lowercase "hello world".
// Letters are converted with toupper/tolower; digits and punctuation
// are left unchanged.

void toUpperCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = (char)toupper((unsigned char)str[i]);
}

void toLowerCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = (char)tolower((unsigned char)str[i]);
}

int main()
{
    char str1[] = "Hello World";
    char str2[] = "Hello World";
    char str3[] = "C Programming 101!";

    toUpperCase(str1);
    printf("Uppercase of \"Hello World\": %s\n", str1);

    toLowerCase(str2);
    printf("Lowercase of \"Hello World\": %s\n", str2);

    toUpperCase(str3);
    printf("Uppercase of \"C Programming 101!\": %s\n", str3);

    toLowerCase(str3);
    printf("Lowercase of \"C PROGRAMMING 101!\": %s\n", str3);

    return 0;
}
