#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Check whether two strings are equal ignoring case, e.g.
// "Hello" and "hello" -> equal
// "Hello" and "World" -> not equal
// "Apple" and "APPLES" -> not equal (different lengths)

int equalsIgnoreCase(const char *a, const char *b)
{
    int i;
    if (strlen(a) != strlen(b))
        return 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (tolower((unsigned char)a[i]) != tolower((unsigned char)b[i]))
            return 0;
    }
    return 1;
}

int main()
{
    char str1[200], str2[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (equalsIgnoreCase(str1, str2))
        printf("\"%s\" and \"%s\" are equal (ignoring case).\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are NOT equal.\n", str1, str2);
    return 0;
}
