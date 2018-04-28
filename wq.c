#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000001
bool prime[max];
int main()
{
    long i,j,n=max,k,sq,l,a,m=0,p,r,count,Count,c,d,sum;
    sq=sqrt(n);
    for(i=4; i<=n; i+=2)
        prime[i]=true;
    for(i=3; i<=sq; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<=n; j+=2*i)
                prime[j]=true;
        }
    }
    prime[2]=false;
    scanf("%ld",&a);
        while(a--)
        {
count=0;
            scanf("%ld%ld",&c,&d);
            for(k=c;k<=d;k++)
            {
                 sum=0;
                p=k;
                if(prime[p]==false)
                {
                    while(p!=0)
                   {
                    r=p%10;
                    sum+=r;
                    p/=10;
                }
                if(prime[sum]==false)
                    count++;
            }

        }
        printf("%ld\n",count);
    }
return 0;
}

