#include <stdio.h>
#include <math.h>
#define MAX 1900000
char prime[MAX];
int dp[MAX];
void sieve()
{
    int i,j,k,l,m,count=0,d,u,temp,sum2;
    int t=0;
    //int serial;
    for(i=2; i<=MAX; i++)
    prime[i]=1;
    k=2;
    for(m=2; m<=sqrt(MAX); m++)
    {
        for(j=k+k; j<=MAX; j=j+k)
        {
            prime[j]=0;

        }
        k++;
        for(; !prime[k]; k++);
    }
    u=0;
    for(d=0; d<=MAX; d++)
    {

        if(prime[d])
        {

            temp=d;
            sum2=0;
            while(temp>=10)
            {
                sum2+=temp%10;
                temp=temp/10;
            }
            sum2+=temp;

            if(prime[sum2])
                u++;

        }
        dp[d]=u;

    }
}

int main()
{
    sieve();
    int i,t,l,u,sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&l,&u);
        printf("%d\n",dp[u]-dp[l-1]);

    }
    return 0;
}
