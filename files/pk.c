#include<stdio.h>
int main()
{
	int amou,lim=500;
	printf("Enter The Withdraw amount: ");
	scanf("%d",&amou);
    if(amou<lim && amou%20==0)
    {
        printf("withdarw Approve");

    }else
    {
        printf("withdraw denied");
    }

	
	
	return 0;
}