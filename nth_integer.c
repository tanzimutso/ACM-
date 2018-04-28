#include<stdio.h>
int main()
{
    int a,sum=0,n,value;
    printf("enter integers you want to add\n");
    scanf("%d",&a);
    printf("Enter %d integers\n",a);

    for(n=1;n<=a;n++)
    {   scanf("%d",&value);
        sum=sum+value;
    }
    printf("the sum is: %d\n",sum);
}
