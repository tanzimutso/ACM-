#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,n,t,sum,m,i;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&n);
        sum=0;
        m=n;
        for(i=1; i<=n; i++)
        {
            scanf("%lf%lf",&a,&b);
            sum+=a*pow(10,m-1)+b*pow(10,m-1);
            m--;

        }
        printf("%.0lf\n\n",sum);
    }
    return 0;
}
