#include <stdio.h>

int checkArmstrong(int i1)
{
	int j,sum=0,rem,temp;
	temp=i1;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==i1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void main()
{
  int n,i;
  printf("Enter the value of n :");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
	  if(checkArmstrong(i))
	  {
		  printf("%d\n",i);
	  }
  }
}