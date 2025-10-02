#include<stdio.h>
int main()
{
	int n,i,term=2;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Series: ");
	for(i=1; i<=n; i++)
	{
		printf("%d",term);
		term*=2;
	}
	return 0;
}
