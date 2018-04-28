#include<stdio.h>
int main()
{
    int b,c,d,a,e[40],f,n,sum=0,count=0,i,j,k;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d%d%d",&b,&c,&d);
            for(j=0; j<b; j++)
            {
                scanf("%d",&e[j]);
            }
                for(k=1; k<=c; k++)
                {
                     if(e[j]<=10){
                    sum+=e[j];
                    if(sum>d)
                        break;
                        count++;
                        j++;
                }
            }
            printf("%d\n",count);
            sum=0;
            count=0;
        }
    }
    return 0;
}

