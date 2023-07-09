#include <stdio.h>
#include <string.h>
#define MAX_INDEXES 100

void findAllSubstringIndexes(const char* str, const char* substring, int indexes[], int* count) {
    int strLen = strlen(str);
    int subLen = strlen(substring);
    *count = 0;
    for (int i = 0; i <= strLen - subLen; i++) 
	{
        int j;
        for (j = 0; j < subLen; j++) 
		{
            if (str[i + j] != substring[j]) 
			{
                break;
            }
        }
        if (j == subLen) 
		{
            indexes[*count] = i;
            (*count)++;
        }
    }
}
int main() 
{
    char str[100];
    char substring[100];
    int indexes[MAX_INDEXES];
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Enter a substring: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0';  

    findAllSubstringIndexes(str, substring, indexes, &count);

    if (count > 0) 
	{
        printf("Indexes of substring '%s': ", substring);
        for (int i = 0; i < count; i++)
		{
            printf("%d ", indexes[i]);
        }
        printf("\n");
    } 
	else 
	{
        printf("Substring '%s' not found\n", substring);
    }

    return 0;
}
