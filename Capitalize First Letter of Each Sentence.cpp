#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Capitalize the first letter of every sentence in a string.
// A sentence starts after '.', '!' or '?' (followed by spaces),
// e.g. "hello world. how are you?" becomes "Hello world. How are you?".

void capitalizeSentences(char str[])
{
    int newSentence = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (newSentence && isalpha((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
            newSentence = 0;
        }
        else if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            newSentence = 1;
        }
    }
}

int main()
{
    char str[300];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    capitalizeSentences(str);

    printf("Result: %s\n", str);

    return 0;
}
