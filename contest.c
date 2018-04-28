#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,n,i,c,m,k,j,flag=0,sum=0,count=0;
    while(scanf("%ld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%ld%ld",&a,&b);
            for(j=a; j<=b; j++)
            {
                for(k=2; k<=sqrt(j); k++)
                {
                    if(j%k==0)
                    {
                        flag=1;
                        break;
                    }
                    if(flag==0)
                        continue;
                    else
                    {
                        while(j!=0)
                        {
                            c=j%10;
                            j=j/10;
                            sum+=c;
                        }
                        for(m=2; m<=sqrt(sum); m++)
                        {
                            if(sum%m==0)
                            {
                                flag=1;
                                break;
                            }

                        }
                        if(flag==0)
                            continue;
                        else
                            count++;
                    }
                }
                 printf("%ld\n",count);
            }

        }
    }
    return 0;
}

