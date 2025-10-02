#include<stdio.h>
int main()
{
	int i,n,mul;
	mul=1;
	printf("enter the number of items you wish to display");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		mul=mul*i;
	}
	printf("The multipication is %d",mul);
	return 0;
}
