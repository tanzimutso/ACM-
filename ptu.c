#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the  value of n\n");
    scanf("%d",&n);
    for(i=2;i<n/2;++i){
        if(n%i==0){
            break;
        }
    }
    if(n%i>0){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
}
