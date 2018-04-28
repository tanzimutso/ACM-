#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d=0,i,j;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&b);
        for(j=b-1; j>=1; j--)
        {
            for(c=2; c<=sqrt(j); c++)
            {
                if(j%c==0)
                {
                    d=1;
                    break;
                }
                else
                    continue;
            }
            if(d==1){
            continue;
            }
            else
            {
               printf("%d\n",j);
            break;
            }
        }
    }
}
