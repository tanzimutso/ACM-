#include<stdio.h>
int main()
{
    int a,b,c,n=0,i,j,t,sum;
    while(scanf("%d%d",&a,&b)==2)
    {
        sum=b;
        if(a==0&&b==0)
            break;
            else if((b*26+b)<a)
            printf("Case %d: impossible\n",++n);
        else
        {
            for(i=1; i<=26; i++)
            {
                for(j=1; j<=b; j++)
                {
                    sum+=j;
                    if(sum>a)
                        break;
                }
                break;
            }
            printf("Case %d: %d\n",++n,i);
        }

    }
    return 0;
}

