#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,c,d;
    while(cin>>a>>b>>n)
    {
        long long sum;
        if(a==0&&b==0&&n==0)
            break;
        if(n==0){
            cout<<a<<endl;
            continue;
        }
        else if(n==1){
            cout<<b<<endl;
        }
        else
        {
            for(long long i=2;i<=n;i++)
            {
                c=(1+b)/a;
                sum=c;
               a=b;
               b=sum;
            }
            cout<<sum<<endl;

        }
    }
}
