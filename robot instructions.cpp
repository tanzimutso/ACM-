#include<stdio.h>
int main()
{
    int t_c,inst,sum,i;
    char a[100];
    scanf("%d",&t_c);
    while(t_c--)
    {
        scanf("%d",&inst);
        while(inst--)
        {
            sum=0;
           for(i=0;i<inst;i++)
            scanf("%s",a);
            if(a[i]=="RIGHT")
                sum+=1;
            else if(a[i]=="LEFT")
                sum-=1;
            else
            {
                if(a[i-1]=="RIGHT")
                    sum+=1;
                else if(a[i-1]=="LEFT")
                    sum-=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
