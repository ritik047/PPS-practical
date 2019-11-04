#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nThe given number is even");
	}
	else
	{
		printf("\nThe given number is odd");
	}
	getch();
}