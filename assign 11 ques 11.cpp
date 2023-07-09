#include <stdio.h>
#include <string.h>

int findLastSubstring(const char* str, const char* substring) 
{
    int strLen = strlen(str);
    int subLen = strlen(substring);

    for (int i = strLen - subLen; i >= 0; i--)
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
            return i;
        }
    }
    return -1;
}

int main() 
{
    char str[100];
    char substring[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    printf("Enter a substring: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0';  

    int index = findLastSubstring(str, substring);

    if (index != -1) 
	{
        printf("Last occurrence of substring '%s' found at index %d\n", substring, index);
    } 
	else 
	{
        printf("Substring '%s' not found\n", substring);
    }

    return 0;
}
