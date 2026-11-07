#include <stdio.h>
#include <string.h>

// Check if two strings are rotations of each other, e.g.
// "abcd" and "cdab" are rotations, "abcd" and "acbd" are not.
// A string s2 is a rotation of s1 only when both have the same length
// and s2 appears inside s1 + s1.

int isRotation(const char s1[], const char s2[])
{
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    if (len1 != len2)
    {
        return 0;
    }
    char doubled[400];
    strcpy(doubled, s1);
    strcat(doubled, s1);
    return strstr(doubled, s2) != NULL;
}

int main()
{
    char s1[200], s2[200];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2))
    {
        printf("\"%s\" and \"%s\" are rotations of each other\n", s1, s2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are NOT rotations of each other\n", s1, s2);
    }
    return 0;
}
