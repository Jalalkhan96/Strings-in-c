#include <stdio.h>
int main()
{
	int rows,coulumns,i,j,first[10][10],second[10][10],difference[10][10];
	printf("enter number of rows and coulumns of matrix\n");
	scanf("%d,%d",&rows,&coulumns);
	printf("enter the elements of first matrix\n");
	for(i=0;i<rows;i++)
	 for(j=0;j<coulumns;j++)
	 scanf("%d",&first[i][j]);
	 printf("enter the elements of second matrix\n");
	 for(i=0;i<rows;i++)
	 for(j=0;j<coulumns;j++)
	 scanf("%d",&second[i][j]);
	 printf("difference of entered matrices:-\n");
	 for(i=0;i<rows;i++)
	 {
	 	for(j=0;j<coulumns;j++)
	 	{
	 		difference[i][j]=first[i][j]-second[i][j];
	 		printf("%d\t",difference[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}