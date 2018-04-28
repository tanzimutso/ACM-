#include<stdio.h>
int main()
{
    long a,b,c,d,k=1,i=1,j,sum=0;
    printf("\n      FRIENDS HERE IS THE MATH MAGIC BELOW:::::\n");
    for(j=1;j<=9;j++)
    {
        sum=i*8+j;
        printf("\n              %ld x %ld + %ld = %ld\n",i,8,j,sum);
        k=k*10+1;
        i=i+k;
    }
    printf("\n\n       POWERED BY TANZIM ISLAM UTHSA (XERON) :) :) \n\n");
    return 0;
}
