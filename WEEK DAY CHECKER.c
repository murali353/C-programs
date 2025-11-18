#include<stdio.h>
void main()
{
	int w;
	printf("ENTER THE VALUE:");
	scanf("%d",&w);
	if(w==1)
	{
		printf("IT IS SUNDAY");
	}
	else if(w==2)
	{
		printf("IT IS MONDAY");
	}
	else if(w==3)
	{
		printf("IT IS TUESDAY");
	}
	else if(w==4)
	{
		printf("IT IS WEDNESDAY");
	}
	else if(w==5)
	{
		printf("IT IS THURSDAY");
	}
	else if(w==6)
	{
		printf("IT IS FRIDAY");
	}
	else if(w==7)
	{
		printf("IT IS SATURDAY");
	}
	else
	{
		printf("INVALID CHOICE!!!");
	}
}
