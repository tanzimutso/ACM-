#include<stdio.h>
#include<string.h>
#include<ctype.h>
int summing(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
        if(n==0)
        {
            n=sum;
            if(n/10==0)
                break;
            sum=0;
        }
    }
    return n;
}
int main()
{
    char name1[50],name2[50];
    int i,sum1,sum2;
    while(gets(name1))
    {
        gets(name2);
        //getchar();
        sum1 = 0;
        sum2 = 0;
        for(i=0;i<(strlen(name1));i++)
        {
            name1[i]=tolower(name1[i]);
            if(name1[i]>='a'&&name1[i]<='z')
                sum1+=(name1[i]-96);
        }
          for(i=0;i<strlen(name2);i++)
        {
            name2[i]=tolower(name2[i]);
            if(name2[i]>='a'&&name2[i]<='z')
                sum2+=(name2[i]-96);
    }
    sum1=summing(sum1);
    sum2=summing(sum2);
//printf("%d  %d\n",sum1, sum2);

    if(sum1<sum2)
        printf("%.2lf %%\n",((double)sum1/sum2)*100);
    else if(sum1>=sum2)
        printf("%.2lf %%\n",((double)sum2/sum1)*100);
}
return 0;
}
