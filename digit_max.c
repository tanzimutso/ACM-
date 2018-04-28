#include<stdio.h>
int main()
{
    int a,b=10,r,z,max=0;//min=9;
    printf("enter a number\n");
    scanf("%d",&a);
    while(a>=b){
        r=a%b;
        if(r>max){
            max=r;
        }
        z=a/b;
        a=z;
    }    if(r<a){
    max=a;}
    printf("maximum digit is %d\n", max);
}
