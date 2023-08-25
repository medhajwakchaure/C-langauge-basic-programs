#include <stdio.h>

void main()

{
	
	int n,sum=0,rem;
	printf("Enter any number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	
	printf("The sum is : %d" ,sum);
}