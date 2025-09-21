#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	if(age>10)
    {
		if(age<18)
        {
		    printf("you are A Teenager, ");
		}
        else if (age<35)
        {
			printf("You are An Adult.");
		}
        else 
            printf("you are A Senior Citizen. ");
		
	}
    else printf(" you are child ");
	
	
	
	return 0;
}