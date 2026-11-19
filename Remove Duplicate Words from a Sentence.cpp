#include <stdio.h>
#include <string.h>

// Remove duplicate words from a sentence, keeping the first
// occurrence of each word, e.g.
// "hello world hello from C world" -> "hello world from C"
// "the cat sat on the mat"        -> "the cat sat on mat"

#define MAX_WORDS 100
#define MAX_LEN 50

int main()
{
    char sentence[1000];
    char words[MAX_WORDS][MAX_LEN];
    int count = 0, i, j, duplicate;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    // Split the sentence into words (separated by spaces).
    char *token = strtok(sentence, " ");
    while (token != NULL && count < MAX_WORDS)
    {
        duplicate = 0;
        for (j = 0; j < count; j++)
        {
            if (strcmp(words[j], token) == 0)
            {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
        {
            strcpy(words[count], token);
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("Sentence without duplicate words: ");
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
