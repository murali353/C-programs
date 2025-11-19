#include<stdio.h>
void main()
{
	int b;
	printf("ENTER THE NUMBER:(1-12) :");
	scanf("%d",&b);
	if((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
	{
		printf("IN HAS 31 DAYS");
	}
	else if((b==4)||(b==6)||(b==9)||(b==11))
	{
		printf("IT HAS 30 DAYS");
	}
	else if(b==2)
	{
		printf("IT HAS 28 or 29 DAYS");
	}
	else
	{
		printf("INVALID!!!");
	}
}
