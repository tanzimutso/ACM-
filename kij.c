#include<stdio.h>
int main()
{
    int n,b,i,j,k;
    printf("enter any number for the pyramid\n");
    scanf("%d",n);
    for(i=1;i<=n;i++){
        for(j=1;j<n;j++)
            printf(" ");
        for(k=1;k<=n;k++){
            printf(" * ");
        }
    }printf("\n");
}
