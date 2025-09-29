//write a program in c to add two numbers if the user enters  1 for addition 2 for subtraction and  for multiplication
#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("Enter two numbers");
	scanf("%d%d",&x,&y);
	printf("Enter 1 for addition,2 for subtraction and 3 for multiplication");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			z=x+y;
			break;
			case 2:
				z=x-y;
				break;
				case 3:
					z=x*y;
					break;
					defant:
						printf("you have entered incorrect option");
						break;
	}
	printf("The answer is %d",z);
	return 0;
}

