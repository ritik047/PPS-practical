#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],arrt[3][3],i,j;
	clrscr();

	printf("\nEnter 3*3 Array Elements:");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nTransposing Arraay...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arrt[i][j]=arr[j][i];
		}
	}
	printf("\nTranspose of the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arrt[i][j]);
		}
		printf("\n");
	}
	getch();
}
