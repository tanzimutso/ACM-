#include <stdio.h>
int mod(long b, long p, long m)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
        else
    return (mod(b,p-1,m)*(b%m))%m;
}
int main()
{
   long b,p,m;
    while(scanf("%ld %ld %ld",&b,&p,&m)==3){
        printf("%ld\n",mod(b,p,m));
    }
    return 0;
}
