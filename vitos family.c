#include<stdio.h>
int main()
{
    int a[1000],b,i,j,n,min[1000],need,k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&j);
        for(i=0; i<j; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<j; i++)
        {
           min[i]=a[i]-a[i+1];
        }
        for(k=0;k<j;k++)
        {
            if(j==2){
                need=min[i];
            break;
            }
            else if(min[i+1]<min[i]){
                min[i]=min[i+1];
             need=min[i];
            }
             else
                need=min[i+1];

        }
        printf("%d\n",abs(need));

    }
}
