#include <stdio.h>
#define SIZE 10
void multiplyMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE], int n) 
{
    int i, j, k;

    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            result[i][j] = 0;
            for (k = 0; k < n; k++) 
			{
                result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][SIZE], int n) 
{
    int i, j;

    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix1[SIZE][SIZE] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[SIZE][SIZE] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[SIZE][SIZE];
    int n = 3; 

    multiplyMatrices(matrix1, matrix2, result, n);

    printf("Matrix 1:\n");
    displayMatrix(matrix1, n);

    printf("Matrix 2:\n");
    displayMatrix(matrix2, n);

    printf("Result:\n");
    displayMatrix(result, n);

    return 0;
}
