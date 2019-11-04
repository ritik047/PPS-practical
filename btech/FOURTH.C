#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter 1st number:");
	scanf("%d",&a);
	printf("\nEnter 2nd number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nThe numbers are swapped:)");
	printf("\nThe 1st number is:%d",a);
	printf("\nThe 2nd number is:%d",b);
	getch();
}