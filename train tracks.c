#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],ch;
    int i,j,n,len,m,f;
    scanf("%d",&n);
    scanf("%c",&ch);
    while(n--)
    {
        m=0;
        f=0;
        gets(s);
        len=strlen(s);
        for(j=0; j<len; j++)
        {
            if(s[j]=='M')
                m++;
            else if(s[j]=='F')
                f++;
        }
        if(m==1&&f==1)
            printf("NO LOOP\n");
        else if(m==f&&m>0&&f>0)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");

    }
    return 0;
}

