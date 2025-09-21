#include<stdio.h>
int main()
{
	int num1,num2,x;
	printf("Enter The first number : ");
	scanf("%d",&num1);
    printf("Enter The second number : ");
	scanf("%d",&num2);
    x=(num1>num2)?printf("first number is greater.") : (printf("second number is greater."));
    
    
	
	return 0;
}