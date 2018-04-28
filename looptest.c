#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    printf("\nenter a number\n");
    scanf("%d",&a);
    for(i=a;i<=1;i--)
    {
        for(j=i;j<=1;j--){
           printf("*");
        }
    }

    printf("\n");

}
