#include <stdio.h>
#include <string.h>

// Check whether one string is a substring of another, e.g.
// "world" is a substring of "hello world", but "xyz" is not.
// An empty needle is a substring of every string.

int isSubstring(const char str[], const char sub[])
{
    return strstr(str, sub) != NULL;
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "hello";

    printf("\"world\" in \"%s\": %s\n", str1, isSubstring(str1, "world") ? "Yes" : "No");
    printf("\"xyz\" in \"%s\": %s\n", str2, isSubstring(str2, "xyz") ? "Yes" : "No");
    printf("\"\" in \"%s\": %s\n", str1, isSubstring(str1, "") ? "Yes" : "No");
    printf("\"hello world\" in \"%s\": %s\n", str1, isSubstring(str1, "hello world") ? "Yes" : "No");

    return 0;
}
