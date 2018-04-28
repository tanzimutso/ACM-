#include<stdio.h>
int main()
{
    int u,v,r;
    scanf("%d%d",&u,&v);
    while(u!=0){
        r=v%u;
        v=u;
        u=r;
        if(u==0)
        break;
    }
    printf("the gcd is : %d", v);
}
