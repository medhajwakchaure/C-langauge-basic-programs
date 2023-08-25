#include <stdio.h>

void main()
{
	int n,rem,mul=1;
	
	printf("Enter any number :");
	scanf("%d", &n);
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		mul=mul*rem;
	}
	printf("Product is : %d", mul);
}