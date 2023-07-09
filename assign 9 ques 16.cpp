#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0)
	 {
        return a;
    } 
	else 
	{
        return gcd(b, a % b);
    }
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int findLCM(int arr[], int n) 
{
    int result = arr[0];

    for (int i = 1; i < n; i++) 
	{
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() 
{
    int n;
    int arr[10];

    printf("Enter the number of elements (maximum 10): ");
    scanf("%d", &n);

    if (n > 10) 
	{
        printf("Maximum number of elements exceeded. Exiting program.\n");
        return 0;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    int result = findLCM(arr, n);

    printf("LCM of the given numbers: %d\n", result);

    return 0;
}
