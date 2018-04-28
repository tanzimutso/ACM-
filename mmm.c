#include<stdio.h>
 main()
 { int n,max=0,rem;
 printf("\n enter a number");
  scanf("%d",&n);
   while(n!=0) {
    rem=n%10;
n=n/10;
 if(rem>max)
 { max=rem; }}
  printf("\n the largest digit is: %d",max);
 }
