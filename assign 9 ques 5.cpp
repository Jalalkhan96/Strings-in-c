#include <stdio.h>
#define MAX_SEQUENCE_SIZE 10

void findAdditiveSequences(int num, int sequence[][MAX_SEQUENCE_SIZE], int row, int col, int prev1, int prev2) {
    if (num == 0) 
	{
        for (int i = 0; i < col; i++) 
		{
            printf("%d ", sequence[row][i]);
        }
        printf("\n");
    } 
	else if (num > 0) 
	{
        for (int i = prev1; i >= prev2; i--) 
		{
            sequence[row][col] = i;
            findAdditiveSequences(num - i, sequence, row, col + 1, i, prev1);
        }
    }
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sequence[MAX_SEQUENCE_SIZE][MAX_SEQUENCE_SIZE];
    findAdditiveSequences(num, sequence, 0, 0, num, 1);
    return 0;
}
