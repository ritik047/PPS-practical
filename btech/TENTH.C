#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,orig,num=0;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);
	orig=n;
	while(n!=0)
	{
		rem=n%10;
		num=num+(rem*rem*rem);
		n=n/10;
	}
	if(num==orig)
	{
		printf("Armmstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
	getch();
}
