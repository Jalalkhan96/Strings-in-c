#include <stdio.h>
#include <string.h>

// Find the first non-repeating character in a string, e.g.
// "swiss" -> 'w' (s repeats, w appears once)
// "aabbcc" has no non-repeating character.

char firstNonRepeating(const char str[])
{
    int count[256] = {0};
    size_t i;
    for (i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            return str[i];
        }
    }
    return '\0';
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeating(str);
    if (result != '\0')
    {
        printf("First non-repeating character: %c\n", result);
    }
    else
    {
        printf("No non-repeating character found\n");
    }
    return 0;
}
