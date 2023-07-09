#include <stdio.h>
#define ROWS 3
#define COLS 3

void subtractMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS])
 {
    int i, j;

    for (i = 0; i < ROWS; i++)
	 {
        for (j = 0; j < COLS; j++) 
		{
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void displayMatrix(int matrix[][COLS])
 {
    int i, j;

    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[ROWS][COLS];

    subtractMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("Matrix 2:\n");
    displayMatrix(matrix2);

    printf("Result:\n");
    displayMatrix(result);

    return 0;
}
