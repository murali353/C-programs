#include<stdio.h>
void main()
{
	int m;
	printf("ENTER THE NUMBER:");
	scanf("%d",&m);
	if(m==1)
	{
		printf("IT IS JAN & IT HAS 31 DAYS");
	}
	else if(m==2)
	{
		printf("IT IS FEB & IT HAS 28 or 29 DAYS");
	}
	else if(m==3)
	{
		printf("IT IS MAR & IT HAS 31 DAYS");
	}
	else if(m==4)
	{
		printf("IT IS APR & IT HAS 30 DAYS");
	}
	else if(m==5)
	{
		printf("IT IS MAY & IT HAS 31 DAYS");
	}
	else if(m==6)
	{
		printf("IT IS JUN & IT HAS 30 DAYS");
	}
	else if(m==7)
	{
		printf("IT IS JUL & IT HAS 31 DAYS");
	}
	else if(m==8)
	{
		printf("IT IS AUG & IT HAS 31 DAYS");
	}
	else if(m==9)
	{
		printf("IT IS SEP & IT HAS 30 DAYS");
	}
	else if(m==10)
	{
		printf("IT IS OCT & IT HAS 31 DAYS");
	}
	else if(m==11)
	{
		printf("IT IS NOV & IT HAS 30 DAYS");
	}
	else if(m==12)
	{
		printf("IT IS DEC & IT HAS 31 DAYS");
	}
	else
	{
		printf("INVALID CHOICE!!!");
	}
}
