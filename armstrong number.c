#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,R,sum,count;
    long r,n,t,w,c;
    scanf("%ld",&t);
    while(t--)
    {
        sum=0;
        count=0;
        scanf("%ld",&n);
        c=n;
        b=c;
        while(n!=0)
        {
            r=n%10;
            count++;
            n=n/10;
        }
        while(c!=0)
        {
            w=c%10;
            R=w;
            sum+=pow(R,count);
            c=c/10;
        }
        if(sum==b)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }
    return 0;
}
