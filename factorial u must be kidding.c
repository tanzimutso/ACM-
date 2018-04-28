#include<stdio.h>
int main()
{
    long long n,t,i,sum;
    while(scanf("%lld",&n)!=EOF)
    {
        sum=1;
        /*if(n>13)
        {
            printf("Overflow!\n");
            continue;
        }
        else if(n<0&&n%2!=0)
        {
            printf("Overflow!\n");
            continue;
        }
        else if(n<0&&n%2==0)
        {
            printf("Underflow!\n");
            continue;
        }*/
        for(i=n; i>=1; i--)
        {
            sum*=i;
        }
        //if(sum<10000)
            //printf("Underflow!\n");
        //else
            printf("%lld\n",sum);
    //}
    //return 0;
}
}
