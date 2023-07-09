#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

int main() {
	
    char str[MAX_LENGTH];
    int shiftNumber, shiftDirection;
    int randomShift, randomDirection;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    srand(time(0));
    randomShift = rand() % 10 + 1;      
    randomDirection = rand() % 2;
    if (randomDirection == 0) 
	{
        shiftNumber = randomShift;
    } 
	else 
	{
        shiftNumber = -randomShift;
    }
    caesarEncrypt(str, shiftNumber);
    printf("Encrypted string: %s\n", str);
    printf("Shift number: %d\n", shiftNumber);
    printf("Shift direction: %s\n", (randomDirection == 0) ? "Left" : "Right");

    return 0;
}
