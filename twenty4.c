#include <stdio.h>

void main()
{
	int i,n,m,rem1,rem2,gcd;
	
	printf("Enter first number :");
    scanf("%d", &n);

    printf("Enter second number :");
	scanf("%d",&m);
	
	for(i=1;i<=n && i<=m;i++)
	{
		rem1=n%i;
		rem2=m%i;
		if(rem1 ==0 && rem2 ==0)
		{
			gcd=i;
		}
	}
	
	printf("The GCD of %d and %d is %d",n,m,gcd);
}