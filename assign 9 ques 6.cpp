#include <stdio.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LENGTH 100

void splitString(char str[], char delimiter, char words[][MAX_LENGTH], int *wordCount) 
{
    int i, j, k;
    *wordCount = 0;
    for (i = 0, j = 0, k = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == delimiter) 
		{
            words[j][k] = '\0';
            j++;
            k = 0;
            *wordCount += 1;
        } 
		else 
		{
            words[j][k] = str[i];
            k++;
        }
    }

    words[j][k] = '\0';
    *wordCount += 1;
}

int main() 
{
    char str[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    int wordCount;
    char delimiter;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    printf("Enter the delimiter character: ");
    scanf(" %c", &delimiter);

    splitString(str, delimiter, words, &wordCount);

    printf("Split words:\n");
    for (int i = 0; i < wordCount; i++) 
	{
        printf("%s\n", words[i]);
    }

    return 0;
}
