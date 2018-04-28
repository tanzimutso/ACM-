#include<stdio.h>
int main()
{
    int n,a,b,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",++c,a+b);
    }
    return 0;
}
