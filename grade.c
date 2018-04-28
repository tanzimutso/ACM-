#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,n,m,t,sum,min,p=0,avg;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
        sum+=a+b+c+d;
        if(e<f&&e<g){
            m=f;
        n=g;
        avg=(m+n)/2;
        }
        else if(f<g&&f<e)
        {
            m=g;
            n=e;
            avg=(m+n)/2;
        }
        else
        {
            m=f;
            n=e;
            avg=(m+n)/2;
        }
        sum+=avg;
        if(sum>=90)
            printf("Case %d: A\n",++p);
        else if(sum>=80&&sum<90)
             printf("Case %d: B\n",++p);
        else if(sum>=70&&sum<80)
           printf("Case %d: C\n",++p);
        else if(sum>=60&&sum<70)
            printf("Case %d: D\n",++p);
        else if(sum<60)
             printf("Case %d: F\n",++p);
    }
return 0;
}
