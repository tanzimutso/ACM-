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
    prime[2]=false;
    while(scanf("%d",&a)==1)
    {
    	Count=0;
    	for(k=6;k<=a;k++)
    	{
    	    count=0;
    	    m=0;
    		for(l=2;l<=k/2;l++)
    		{
    			if(prime[l]==false)
    			{
    				array[m]=l;
    				m++;
    			}
    		}
    		//cout << endl;
    		for(p=0;p<m;p++)
    		{
    			if(k%array[p]==0)
    				count++;
    		}
    			if(count==2)
    				Count++;
    	}
    		printf("%d\n",Count);
    }
    return 0;
}
