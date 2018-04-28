#include<bits/stdc++.h>
#define max 3004
bool prime[max];
using namespace std;
int main()
{
    int i,j,n=max,k,sq,l,a,m=0,p,r,count,Count;
	int array[max];
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
