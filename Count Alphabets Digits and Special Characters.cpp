#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Count the alphabets, digits and special characters in a string.
// A character is an alphabet if it is a letter (a-z, A-Z), a digit if
// it is 0-9, and a special character otherwise (spaces, punctuation,
// symbols, ...), e.g. "Hello123!" has 5 alphabets, 3 digits and
// 1 special character.

void countCharacters(char str[], int *alphabets, int *digits, int *special)
{
    *alphabets = 0;
    *digits = 0;
    *special = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)str[i]))
            (*alphabets)++;
        else if (isdigit((unsigned char)str[i]))
            (*digits)++;
        else
            (*special)++;
    }
}

int main()
{
    char str1[] = "Hello123!";
    char str2[] = "Hello World 123!";
    char str3[] = "C Programming 101";
    char str4[] = "abc";
    int alphabets, digits, special;

    countCharacters(str1, &alphabets, &digits, &special);
    printf("\"%s\" -> alphabets: %d, digits: %d, special: %d\n", str1, alphabets, digits, special);
    countCharacters(str2, &alphabets, &digits, &special);
    printf("\"%s\" -> alphabets: %d, digits: %d, special: %d\n", str2, alphabets, digits, special);
    countCharacters(str3, &alphabets, &digits, &special);
    printf("\"%s\" -> alphabets: %d, digits: %d, special: %d\n", str3, alphabets, digits, special);
    countCharacters(str4, &alphabets, &digits, &special);
    printf("\"%s\" -> alphabets: %d, digits: %d, special: %d\n", str4, alphabets, digits, special);

    return 0;
}
