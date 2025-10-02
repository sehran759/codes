#include<stdio.h>
int main()
{
	int n,i;
	int flag=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2; i<=n-1; i++)
	{
		if(n%i==0)
		printf("%d is not a prime number",n);
		break;
	}
	if(n%i!=0)
	printf("%d is a prime number",n);
	return 0;
}
