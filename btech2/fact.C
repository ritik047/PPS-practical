#include<stdio.h>
#include<conio.h>

int fact(unsigned int i)
{
	if(i <= 1)
	{
		return 1;
	}
	return i*fact(i-1);
}
void main()
{
	int num;
	clrscr();

	printf("Enter a Number : ");
	scanf("%d", &num);
	printf("Factorial of %d is %d\n", num, fact(num));

	getch();
}