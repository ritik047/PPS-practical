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
	printf("\nEnter 3rd number:");
	scanf("%d",&c);

	if(a>b&&a>c)
	{
		printf("\n1st number is greatest:%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("\n2nd number is greatest:%d",b);
	}
	else
	{       //if all the 3 numbers are same still the 3rd one will be the greatest
		printf("\n3rd number is greatest:%d",c);
	}
	getch();
}

