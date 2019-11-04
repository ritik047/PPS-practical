#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,count=0;
	clrscr();

	printf("\nEnter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(n!=1&&count==0)
	{
		printf("\nIts a prime number:%d ",n);
	}
	else
	{
		printf("\nIts not a prime number");
	}

	getch();

}