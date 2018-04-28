#include<stdio.h>
#include<string.h>
int main()
{
    char a[700];
    int n,b,c,len,aa,m,g,r,t,i,count,k,array[10],min;
    scanf("%d",&n);
    while(n--)
    {
        m=0;
        g=0;
        r=0;
        aa=0;
        t=0;
        i=0;
        count=0;
        scanf("%s",&a);
        len=strlen(a);
        for(b=0; b<len; b++)
        {
            if(a[b]=='M')
                m++;
            else if(a[b]=='A')
                aa++;
            else if(a[b]=='R')
                r++;
            else if(a[b]=='T')
                t++;
            else if(a[b]=='I')
                i++;
            else if(a[b]=='G')
                g++;
        }
        array[0]=aa/3;
         array[1]=m/1;
         array[2]=r/2;
         array[3]=t/1;
         array[4]=g/1;
         array[5]=i/1;
         min=array[0];
    for(k=1;k<6;k++)
    {
        if(array[k]<min)
            min=array[k];
        }
        printf("%d",min);
    }
    return 0;
}
