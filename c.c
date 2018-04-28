#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f=0,count=0,mc=0;
    while(scanf("%d",&a)==1)
    {
        for(b=1; b<=a; b++)
        {
            for(c=1; c<=b; c++)
            {
                if(b%c==0)
                {
                    for(d=2; d<=sqrt(c); d++)
                    {
                          f=0;
                        if(c%d==0)
                        {
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                        count++;
                }
                if(count==2)
                    mc++;
            }

        }
        printf("%d\n",mc);
    }
    return 0;
}

