//write a programm in c to check whether the number is positive or negative
#include<stdio.h>
int main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	if(x>0)
	{
		printf("the number is positive");
	}
	if(x<0)
	{
		printf("the number is negative");
	}
	return 0;
	
}
