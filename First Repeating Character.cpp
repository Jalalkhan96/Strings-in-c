#include <stdio.h>
#include <string.h>

// Find the first repeating character in a string, e.g.
// "swiss"  -> 's' (the first character that appears more than once)
// "hello"  -> 'l'
// "abcdef" has no repeating character.

char firstRepeating(const char str[])
{
    int count[256] = {0};
    size_t i;
    for (i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] > 1)
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

    char result = firstRepeating(str);
    if (result != '\0')
    {
        printf("First repeating character: %c\n", result);
    }
    else
    {
        printf("No repeating character found\n");
    }
    return 0;
}
