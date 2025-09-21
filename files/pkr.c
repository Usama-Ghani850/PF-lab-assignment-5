#include<stdio.h>
int main()
{
	int num;
	printf("Enter The number: ");
	scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("The nmber is divisible by 3,5");
    }else 
    {
        printf("the number is not divisible by 3,5");
    }
    
	
	return 0;
}