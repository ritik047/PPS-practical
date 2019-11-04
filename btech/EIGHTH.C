#include<stdio.h>
#include<conio.h>

void main()
{
	int n,fact=1,i;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);

	if(n==0)
	{
		fact=1;
	}
	else
	{

		for(i=1;i<=n;i++)
		{
			fact=fact*i;

		}
	}
	printf("\nThe factorial is:%d",fact);
	getch();
}