#include<stdio.h>
int main()
{
    long i,n,a,b,c,d;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
        if(a>=0&&b>=0&&c>=0&&d>=0){
        if(a==b&&b==c&&a==d)
            printf("square\n");
        else if(a==c&&b==d)
            printf("rectangle\n");
        else if(a+b+c<d||b+c+d<a||c+d+a<b||a+b+d<c)
            printf("banana\n");
        else
            printf("quadrangle\n");
    }
    }
    return 0;
}
