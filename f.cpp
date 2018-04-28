#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n,x,i,check,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2;i<=n;i++)
        {
            check=1;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    check=0;
                     break;
                }
            }
            if(check==1)
            {
               if(i<=n&&(i*2)>n)
               {
                  printf("%d\n",i);
                  break;
               }
            }
        }
    }
 return 0;
}


