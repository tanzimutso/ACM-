#include<stdio.h>
int main()
{
    int n,t,a[100],i,j=0,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        printf("\n\n");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>0)
                sum+=a[i];
        }
printf("Case %d: %d\n",++j,sum);
    }

    return 0;
}


