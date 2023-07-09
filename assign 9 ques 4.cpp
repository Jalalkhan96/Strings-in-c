#include <stdio.h>
#define ROWS 4
#define COLS 4

int binarySearch(int matrix[][COLS], int target, int row, int start, int end) 
{
    while (start <= end) 
	{
        int mid = start + (end - start) / 2;

        if (matrix[row][mid] == target) 
		{
            return mid;
        } else if (matrix[row][mid] < target) 
		{
            start = mid + 1;
        } else 
		{
            end = mid - 1;
        }
    }
    return -1;  
}
void searchInMatrix(int matrix[][COLS], int target) 
{
    int i, j;
    for (i = 0; i < ROWS; i++) 
	{
        if (target >= matrix[i][0] && target <= matrix[i][COLS - 1]) 
		{
            int result = binarySearch(matrix, target, i, 0, COLS - 1);
            if (result != -1) 
			{
                printf("Element %d found at Row: %d, Column: %d\n", target, i, result);
                return;
            }
        }
    }

    printf("Element %d not found in the matrix.\n", target);
}

int main() 
{
    int matrix[ROWS][COLS] = {{1, 3, 5, 7},
                              {10, 11, 16, 20},
                              {23, 30, 34, 50},
                              {51, 55, 60, 70}};
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    searchInMatrix(matrix, target);

    return 0;
}
