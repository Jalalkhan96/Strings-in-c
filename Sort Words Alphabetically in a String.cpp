#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Sort the words of a string alphabetically, e.g.
// "banana apple cherry" -> "apple banana cherry"
// "dog Cat ant"         -> "ant Cat dog" (compared case-insensitively,
//                                        original words are printed)

#define MAX_WORDS 100
#define MAX_LEN 50

// Case-insensitive string comparison (like strcasecmp).
int compareIgnoreCase(const char *a, const char *b)
{
    while (*a && *b)
    {
        int diff = tolower((unsigned char)*a) - tolower((unsigned char)*b);
        if (diff != 0)
        {
            return diff;
        }
        a++;
        b++;
    }
    return tolower((unsigned char)*a) - tolower((unsigned char)*b);
}

int main()
{
    char sentence[1000];
    char words[MAX_WORDS][MAX_LEN];
    char temp[MAX_LEN];
    int count = 0, i, j;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    // Split the sentence into words (separated by spaces).
    char *token = strtok(sentence, " ");
    while (token != NULL && count < MAX_WORDS)
    {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    // Bubble sort the words alphabetically.
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (compareIgnoreCase(words[j], words[j + 1]) > 0)
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words in alphabetical order: ");
    for (i = 0; i < count; i++)
    {
        printf("%s", words[i]);
        if (i < count - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
