#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

void caesarEncrypt(char* str, int shift) 
{
    int i = 0;

    while (str[i] != '\0') 
	{
        if (isalpha(str[i])) 
		{
            if (islower(str[i])) 
			{
                str[i] = (str[i] - 'a' + shift) % 26 + 'a';
            } 
			else 
			{
                str[i] = (str[i] - 'A' + shift) % 26 + 'A';
            }
        }
        i++;
    }
}

int main() 
{
    char str[MAX_LENGTH];
    int shift;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    caesarEncrypt(str, shift);

    printf("Encrypted string: %s\n", str);

    return 0;
}
