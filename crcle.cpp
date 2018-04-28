#include<bits/stdc++.h>
#define pi  2 * acos (0.0)
using namespace std;
int main()
{
    double b,c,n,d;
    int a=0;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>c;
            b=c*2;
            d=pi*c*c;

        printf("Case %d: %.2lf\n",++a,(b*b)-d);
        }
    }
    return 0;
}
