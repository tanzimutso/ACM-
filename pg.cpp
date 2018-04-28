#include<bits/stdc++.h>
#define max 9999
bool prime[max];
using namespace std;
int main()
{
    long long i,j,n=max,k,sq,l,m=0,p,r,t,a,b;
    long long array[max];
    sq=sqrt(n);
    for(i=4; i<n; i+=2)
        prime[i]=true;
    for(i=3; i<=sq; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<=n; j+=2*i)
                prime[j]=true;
        }
    }
    prime[1]=true;
    prime[0]=true;
    prime[2]=false;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        while(1)
        {
            if(prime[--a]==false)
            {
                printf("%lld\n",a);
                break;
            }
        }
    }
    return 0;
}


