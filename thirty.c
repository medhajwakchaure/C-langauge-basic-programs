#include <stdio.h>

void main()
{
   int n,i,sum=0,temp,rem;
   
   printf("Enter the number:");
   scanf("%d",&n);
   
   temp=n;
   
   while(n>0)
   {
	   rem=n%10;
	   sum=sum+rem*rem*rem;
	   n=n/10;
	   
   }
   
   if(sum==temp)
   {
	   printf("The %d is an armstrong number .", temp);
   }
   else 
   {
	   	   printf("The %d is not an armstrong number .", temp);
   }
}