#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,orig,rev=0;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&num);
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==orig)
	{
		printf("Pallindrome");
	}
	else
	{
		printf("Not Pallindrone");
	}
	getch();
}
