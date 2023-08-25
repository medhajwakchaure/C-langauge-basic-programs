#include <stdio.h>

void main()
{
	int i,n,exponent;
	long long power=1;
	printf("Enter any number :");
	scanf("%d",&n);
	
	printf("Enter the Exponent :");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++)
	{
		power=power*n;
	}
	
	printf("The power of %d with exponent %d is %lld", n,exponent,power);
}