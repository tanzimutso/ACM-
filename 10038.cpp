#include<stdio.h>
int main()
{
long int a,b;
int Count,c;
while(scanf("%lu %lu",&a,&b)&&a!=0&&b!=0)
             {
                     Count=c=0;
                                while(a||b)
                                   {
                                    c=(a%10+b%10+c)/10;
                                     a=a/10;
                                     b=b/10;
                                     Count=Count+c;
                                   }
                      if(!Count)
                     printf("No carry operation.\n");
                     else if(!(Count^1))
                     printf("1 carry operation.\n");
                     else
                     printf("%d carry operations.\n",Count);
            }
return 0;
}
