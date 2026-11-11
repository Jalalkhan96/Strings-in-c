#include <stdio.h>
#include <string.h>

// Remove all vowels (a, e, i, o, u, both cases) from a string, e.g.
// "hello world" becomes "hll wrld", "AEIOUaeiou" becomes "".

int isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

void removeVowels(char str[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isVowel(str[i]))
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "AEIOUaeiou";
    char str3[] = "rhythm";

    removeVowels(str1);
    removeVowels(str2);
    removeVowels(str3);

    printf("\"hello world\" without vowels: \"%s\"\n", str1);
    printf("\"AEIOUaeiou\" without vowels: \"%s\"\n", str2);
    printf("\"rhythm\" without vowels: \"%s\"\n", str3);

    return 0;
}
