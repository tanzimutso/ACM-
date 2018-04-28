#include<stdio.h>
int main()
{
    int a,b,d,f,sum;
    printf("enter a 4 digit num: ");
    scanf("%d",&a,&b,&d,&f);
    a=(a%1000)/10;
    b=(b%1000)/10;
    d=(d%1000)/10;
    f=(f%1000)/10;


    sum=a+b+d+f;
    printf("the sum is %d");
}
