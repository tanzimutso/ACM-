#include<stdio.h>
int main()
{
    int x,y,fact=1;
    printf("enter the value of x: ");
    scanf("%d",&x);
    for(y=1;y<=x;++y)
    {
        fact=fact*y;
    }

    printf("the factorial of the number is : %d\n",fact);
    getch();
}

