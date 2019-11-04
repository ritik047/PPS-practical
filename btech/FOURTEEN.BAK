#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,ele,c=0,pos;
	clrscr();

	printf("Enter Array Elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the number to be searched:");
	scanf("%d",&ele);

	for(i=0;i<10;i++)
	{
		if(arr[i]==ele)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		printf("\nNumber not found");
	}
	else
	{
		printf("\n %d found at position %d",ele,pos);
	}
	getch();
}