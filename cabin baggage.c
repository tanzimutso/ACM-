#include<stdio.h>
int main()
{
    int n,count=0;
    double a,b,c,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        if(a<=56&&b<=45&&c<=25&&d<=7)
        {
            count++;
            printf("1\n");
        }
        else if(a+b+c<=125&&d<=7)
        {
              count++;
            printf("1\n");
        }
            else
                printf("0\n");
        }
    printf("%d\n",count);
}
