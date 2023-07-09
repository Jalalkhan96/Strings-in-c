#include <stdio.h>
#include <string.h>
#define MAX_CHARS 128

int main() 
{
    char str[100];
    int freq[MAX_CHARS] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') 
	{
        str[strlen(str) - 1] = '\0';
    }

    for (int i = 0; i < strlen(str); i++) 
	{
        freq[str[i]]++;
    }

    printf("Character Frequency:\n");
    for (int i = 0; i < MAX_CHARS; i++) 
	{
        if (freq[i] > 0) 
		{
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}
