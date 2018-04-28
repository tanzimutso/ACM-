#include<stdio.h>
int main()
{
    long a,b,n,ans,Ans;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld%ld",&a,&b);
        if(a<b||b%2!=0)
            printf("impossible\n");
        else if(b%2==0)
        {
            ans=(a+b)/2;
            Ans=ans-b;
            printf("%ld %ld\n",ans,Ans);

        }
    }
    return 0;
}
