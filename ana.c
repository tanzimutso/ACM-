#include<stdio.h>
 int main()
 {
 long long int n, r, sum=0;
 printf("Enter a number: ");
 scanf("%lld", &n);
 while(n!=0)
{ r=n%10;
 n=n/10;
sum=sum+r;
}
printf("Sum= %lld\n", sum);
return 0;
 }
