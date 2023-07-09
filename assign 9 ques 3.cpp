#include <stdio.h>
#define ROWS 3
#define COLS 3

void findIndex(int matrix[][COLS], int num) 
{
    int i, j;
    int found = 0;

    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            if (matrix[i][j] == num) 
			{
                printf("Number %d found at Row: %d, Column: %d\n", num, i, j);
                found = 1;
            }
        }
    }

    if (!found) 
	{
        printf("Number %d not found in the matrix.\n", num);
    }
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    findIndex(matrix, num);
    return 0;
}
