#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,j;
	clrscr();

	printf("Enter Array Elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nRepetative elements are:");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
			printf("%d\t",arr[i]);
			}
		}
	}


	getch();
}