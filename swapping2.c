//write a program in c to swap two numbers without using the third variable
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the two numbers");
	scanf("%d%d",&x,&y);
	printf("Numbers before swapping are %d and %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Numbers after swapping are %d and %d",x,y);
	return 0;
}
