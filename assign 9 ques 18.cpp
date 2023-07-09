#include <stdio.h>
#include <string.h>
int main() 
{
    int monthNumber;
    char* monthNames[] = 
	{
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) 
	{
        printf("Month Name: %s\n", monthNames[monthNumber - 1]);
    } 
	else 
	{
        printf("Invalid month number\n");
    }

    return 0;
}
