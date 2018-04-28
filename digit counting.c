#include<stdio.h>
int main()
{
    int i,m,n,one,two,three,four,five,six,seven,eight,nine,zero,r,t;
    scanf("%d",&t);
    while(t--)
    {
        one=0;
        two=0;
        three=0;
        four=0;
        five=0;
        six=0;
        seven=0;
        eight=0;
        nine=0;
        zero=0;
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
           m=i;
           while(m!=0)
           {
               r=m%10;
               if(r==0)
                zero++;
               else if(r==1)
                one++;
               else if(r==2)
                two++;
               else if(r==3)
                three++;
               else if(r==4)
                four++;
               else if(r==5)
                five++;
               else if(r==6)
                six++;
               else if(r==7)
                seven++;
               else if(r==8)
                eight++;
               else if(r==9)
                nine++;
                m=m/10;

           }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    }
    return 0;
}
