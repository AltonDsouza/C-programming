//Write a program to read and display a 3 * 3 matrix.
#include<stdio.h>
main()
{
int mat[3][3];
printf("Enter the elements of the matrix \n");
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		scanf("%d",&mat[i][j]);
	}
}
printf("The elements of the matrix are: \n");
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		printf("%d ",mat[i][j]);
	}
	printf("\n");
}
}
