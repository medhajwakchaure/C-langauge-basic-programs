#include <stdio.h>

void main()
{
	int n,rem,rev=0,temp;
	
	printf("Enter the number : ");
	 scanf("%d", &n);
	 temp=n;
	 while(n!=0)
	 {
		 rem=n%10;
		 rev=rev*10+rem;
		 n=n/10;
		 
	 }
	 
	 if (temp==rev)
	 {
		 printf("The number %d is pallindrome \n", temp);
	 }
	 else 
	 {
		printf(" The number is not pallindrome");
	 }
}