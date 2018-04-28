#include<stdio.h>
int main()
{
    int t,n,k,p,i,c=0,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        m=k+p;
        if(m>n)
            printf("Case %d: %d\n",++c,m-n);
        else if(m==n)
            printf("Case %d: %d\n",++c,n);
        else
            printf("Case %d: %d\n",++c,k+p);
    }
    return 0;
}
