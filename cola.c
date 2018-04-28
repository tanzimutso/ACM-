#include<stdio.h>

int main()
{
    int c, i, sum;
    while(scanf("%d",&c)==1)
    {
            sum=0;
            for(i=1; i<=c; i++)
            {
                if((i%2)!=0)
                {
                    sum=1+sum;
                }
                if((i%2)==0)
                {
                    sum=2+sum;
                }
            }
        printf("%d\n",sum);
    }
    return 0;
}
