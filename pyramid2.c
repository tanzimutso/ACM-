#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,o;
    printf("enter the the number to build a pyramid\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    for(l=1;l<=n-1;l++){
        for(m=1;m<=l;m++)
            printf("  ");
        for(o=n-1;o>=l;o--)
            printf("* ");
            printf("\n");
    }
}
