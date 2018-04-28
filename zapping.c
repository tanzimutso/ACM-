#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n,ans,Ans;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1&&b==-1)
            break;
        else if(a>=0&&a<=99&&b>=0&&b<=99)
        {
            ans=b-a;
            Ans=(100-b)+a;
            if(ans<Ans)
                printf("%d\n",ans);
            else
                printf("%d\n",Ans);

        }
    }
    return 0;
}
