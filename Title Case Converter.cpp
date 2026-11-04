#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert a sentence to title case: the first letter of every word
// becomes uppercase and every other letter lowercase, e.g.
// "hello WORLD from c" -> "Hello World From C"

int main()
{
    char str[200];
    int i, newWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            newWord = 1;
        }
        else if (newWord)
        {
            str[i] = toupper(str[i]);
            newWord = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("Title case: %s\n", str);
    return 0;
}
