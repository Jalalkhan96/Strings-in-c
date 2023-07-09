#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') 
	{
        str[strlen(str) - 1] = '\0';
    }

    int length = strlen(str);

    if (length >= 3) 
	{
        if (strcmp(&str[length - 3], "ing") == 0) 
		{
            strcat(str, "ly");
        } 
		else 
		{
            strcat(str, "ing");
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
