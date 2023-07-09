#include <stdio.h>
#include <string.h>

int main() 
{
    int digit;
    char* digitNames[] = 
	{
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 9) 
	{
        printf("Digit in words: %s\n", digitNames[digit]);
    } 
	else 
	{
        printf("Invalid digit\n");
    }

    return 0;
}
