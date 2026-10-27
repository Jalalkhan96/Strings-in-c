#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Count vowels and consonants in an entered string.
// Letters only are counted: spaces, digits and punctuation are ignored.

int isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char str[200];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (isVowel(str[i]))
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
