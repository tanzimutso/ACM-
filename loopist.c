#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("\nenter a number\n");
    scanf("%d",&a);
    for(i=1; i<=a; i--)
    {
        printf("\n");

        for(j=1; j<=i; j+=2)
        {
            printf(" *");



        }

    }

}
