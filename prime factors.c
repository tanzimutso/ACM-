#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool a[10000000];
long long b[463450];
int main()
{
    long long int c,sq,m,i=0,j=0,n=0,y,t;
    sq=41350;
    for(i=2; i<=sq; i++)
    {
        if(a[i]==0)
        {
            for(j= i*i; j<= sq; j+=i)
            {
                a[j]=1;
            }
        }
    }
    c=0;
    for(i=2; i<=sq; i++)
    {
        if(a[i]==0)
        {
            b[c]=i;
            c++;
        }
    }
    while(scanf("%lld",&n)==1)
    {
        if (n==0)
            break;
        else if(n==-1)
            printf("-1 = -1 x 1");
        else
        {
            printf("%lld = ",n);
            if(n<0 && n!=-1)
            {
                m=(-1)*n;
                printf("-1 x ");
            }
            else
                m=n;
            t=0;
            for(i=0; i<c; i++)
            {
                if(m%b[i]==0)
                {
                    while(m%b[i]==0)
                    {
                        if(t!=0)
                            printf(" x ");
                        m = m/b[i];

                        printf("%lld",b[i]);
                        ++t;
                    }
                    if(m==1)
                        break;
                }
            }
            if(i >= c)
                printf("%lld ",n);
        }
        printf("\n");
    }
    return 0;
}
