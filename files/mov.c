#include<stdio.h>
int main()
{
	int rate;
	printf("How was the movie 'The Lion King' please rate between 1-5  : ");
	scanf("%d",&rate);
    switch (rate)
    {
    case 1:
        printf("movie was Excellent");
        break;
        
    case 2:
        printf("movie was good");
        break;
    case 3:
        printf("movie was average");
        break;
    case 4:
        printf("movie was poor");
        break;
    case 5:
        printf("movie was terrible");
        break;
    
    default:
    printf("please rate between 1-5");
        break;
    }

    
    
	
	return 0;
}