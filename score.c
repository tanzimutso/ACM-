#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int count,t,len,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&n);
        count=0;
        sum=0;
        len=strlen(n);
        for(i=0; i<len; i++)
        {
            if(n[i]=='O')
            {
                count++;
                sum+=count;
            }
            else if(n[i]=='X')
            {
                count=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
