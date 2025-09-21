#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year. ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0))
	{
    printf("Its a leap Yaer.");

	}else 
	{
		printf("Its not a leap Yaer.");
	}

	return 0;
}