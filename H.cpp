#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,a,b,c,d;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>a>>b>>n;
            if(n==1)
            {
                printf("%.0lf\n",a);
                continue;
            }
            else if(n==2)
            {
                printf("%.0lf\n",b);
                continue;
            }
            else
            {
                c=(b/a);
                double e=c;
                //printf("%lf %lf",c,e);
                if(c-(int)e>0.500000000)
                    c=(int)e+1;
                d=n*c;
                printf("%.0lf\n",d);
            }
        }
    }
    return 0;
}
