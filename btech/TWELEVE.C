#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,t1=0,t2=1,nextterm;
	clrscr();

	printf("\nEnter a number:");
	scanf("%d",&n);

	printf("\nFibonacci Series:");

	for(i=1;i<n;i++)
	{
		printf("%d\t",t1);
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
	}


	getch();

}