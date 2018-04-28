#include<stdio.h>
int main()
{
    int n,i,flag=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1; i<=32000; i++)
        {
            if(i*i==n)
            {
                printf("yes\n");
                flag=1;
                break;
            }
            else
                continue;
        }
        if(flag==0)
            printf("no\n");
flag=0;
    }
    return 0;
}
