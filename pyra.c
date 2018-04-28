#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    printf("enter the numbers to build two sides pyramid\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("*");
            printf("\n");

    }
    for(k=1;k<=n;k++){
        for(l=n+1;l<=1;l-=2)
        printf(" ");
        for(m=1;m<=k;m++)
            printf("*");
        printf("\n");

    }
}
