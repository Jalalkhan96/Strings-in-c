#include <stdio.h>
#include <string.h>

// Replace every vowel (a, e, i, o, u, both cases) in a string with '*', e.g.
// "hello world" -> "h*ll* w*rld"
// "AEIOUaeiou" -> "**********"

int isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]))
            str[i] = '*';
    }

    printf("After replacing vowels: %s\n", str);
    return 0;
}
