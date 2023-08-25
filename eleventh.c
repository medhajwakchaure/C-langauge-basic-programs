#include <stdio.h>

 void main()
 {
     int n,count=0;
	 printf("Enter the number \n");
	 scanf("%d", &n);
	 
	 while(n!=0)
	 {
		 n=n/10;
		 count++;
	 }
	 
	 printf("The count is : %d ", count);
 }