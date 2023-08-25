#include <stdio.h>

void main()
{
	int n,rem,digit,count=0;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	printf("Enter the digit :");
	scanf("%d",&digit);
	
	while(n>0)
	{
		rem=n%10;
		if(rem==digit)
		{
			count ++;
		}
		n=n/10;
	}
	
	printf("The frequency of %d is %d", digit,count);
}