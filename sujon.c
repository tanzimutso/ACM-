#include<stdio.h>
int main()
{
    long a[100001],b[100001],n,i,j;
    while(scanf("%ld",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);
        }
        b[0]=a[0];
        printf("%ld ",b[0]);
        for(i=1; i<n; i++)
        {
            b[i]=a[i]-1;
            printf("%ld ",b[i]);
        }
    }
    return 0;
}
