#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not a prime number\n",n);
            break;
        }
    }
    if(i==n){
        printf("%d is a prime number\n",n);
    }
    if(n==1){
        printf("%d is not a prime number\n",n);
    }
}
