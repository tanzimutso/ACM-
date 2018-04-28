#include<stdio.h>
int main()
{
    long a,b,c,d,n,sum;
    while(scanf("%ld",&n)!=EOF)
    {
        while(n--)
        {
            sum=0;
            scanf("%ld",&a);
            while(a--)
            {
                scanf("%ld%ld%ld",&b,&c,&d);
                sum+=b*d;
            }
            printf("%ld\n",sum);
        }
    }
    return 0;
}
