#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Check whether a string contains only digits (0-9), e.g. "12345" is
// digits-only, "12a45" and "" are not. An empty string returns false
// because it contains no digits at all.

int isDigitsOnly(char str[])
{
    if (str[0] == '\0')
        return 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit((unsigned char)str[i]))
            return 0;
    }
    return 1;
}

int main()
{
    char str1[] = "12345";
    char str2[] = "12a45";
    char str3[] = "";
    char str4[] = "007";

    printf("\"%s\" contains only digits: %s\n", str1,
           isDigitsOnly(str1) ? "Yes" : "No");
    printf("\"%s\" contains only digits: %s\n", str2,
           isDigitsOnly(str2) ? "Yes" : "No");
    printf("\"%s\" contains only digits: %s\n", str3,
           isDigitsOnly(str3) ? "Yes" : "No");
    printf("\"%s\" contains only digits: %s\n", str4,
           isDigitsOnly(str4) ? "Yes" : "No");

    return 0;
}
