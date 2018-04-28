#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char m[10000];
    char n[10000];
    int rem,x,ans,y,num,a,b,len1,len2;
    while(scanf("%s%s",m,n)==2)
    {
        if(strcmp(m,"0")==0)
            a=0;
        if(strcmp(n,"0")==0)
            b=0;
        if(a==0&&b==0)
            break;

        len1=strlen(m);
        len2=strlen(n);
        if(len2==1)
            num=n[len2-1]-'0';
        else
            num=((n[len2-2]-'0')*10)+(n[len2-1]-'0');
        rem=num%4;
        if(rem==0)
        {
            x=m[len1-1]-'0';
            y=pow(x,4);
            ans=y%10;
        }
        else
        {
            x=m[len1-1]-'0';
            y=pow(x,rem);
            ans=y%10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
