#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of items you wish to display");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d",i);
	}
	return 0;
}
