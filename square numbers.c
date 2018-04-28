#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,c,n,count;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        count=0;
        if(a==0&&b==0)
            break;
       for(c=a;c<=b;c++)
       {
           n=sqrt(c);
           if(n*n==c)
            count++;
       }
       printf("%ld\n",count);
    }
    return 0;
}
