#include <stdio.h>
void decimalToBinary(int decimal, char binary[])
 {
    int index = 0;
    while (decimal > 0) 
	{
        binary[index] = decimal % 2 + '0';
        decimal = decimal / 2;
        index++;
    }
    binary[index] = '\0';
    int i = 0, j = index - 1;
    while (i < j) 
	{
        char temp = binary[i];
        binary[i] = binary[j];
        binary[j] = temp;
        i++;
        j--;
    }
}
int isPalindrome(const char* str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    int i = 0, j = length - 1;
    while (i < j) 
	{
        if (str[i] != str[j]) 
		{
            return 0; 
        }
        i++;
        j--;
    }

    return 1;  
}

int main() 
{
    int decimal;
    char binary[100];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal, binary);

    if (isPalindrome(binary)) 
	{
        printf("The binary representation of %d is a palindrome.\n", decimal);
    } 
	else 
	{
        printf("The binary representation of %d is not a palindrome.\n", decimal);
    }

    return 0;
}
