#include <stdio.h>

long long factorial(int n)
	{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 2;
	}
	else
	{
		return n*factorial(n-1);
	}
	}
void main()
{
    int n,fact ;
	
	printf("Enter the number :");
	scanf("%d", &n);
	
	printf("The factorial of %d is %lld",n,factorial(n));
	
}