#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f;
    while( scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0)
            break;
        f=a*b*c*d*d*e*e;
        printf("%d\n",f);
    }
    return 0;
}
