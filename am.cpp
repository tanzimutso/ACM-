#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,a;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>x>>a;
            for(long long i=1; i<=10000; i++)
            {
                if((x+i)/2==a&&i-1==a)
                    cout<<i<<endl;
                continue;
            }
        }
    }
    return 0;
}
