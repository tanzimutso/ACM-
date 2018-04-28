#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,k,a,l,m;
    char str[25];
    while(scanf("%s",str)==1)
    {
        a=0;

        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                j=str[i]-96;
            }

            else if(str[i]>='A'&&str[i]<='Z')
            {
                j=str[i]-38;
            }

            a+=j;
        }

        l=1;
        k=sqrt(a);
        if(a==1||a==2||a==3)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            for(m=2;m<=k;m++)
        {
            if(a%m==0)
            {
                l=0;
                break;
            }
        }
        if(l==0)
        {
            printf("It is not a prime word.\n");
        }
        else
        printf("It is a prime word.\n");
        }

    }
    return 0;
}
