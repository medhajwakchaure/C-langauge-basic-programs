#include <stdio.h>

void main()
{
	
	int i,n,rem;
	printf("Enter the number :");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			printf("%d \n",i);
		}
		
	}


}