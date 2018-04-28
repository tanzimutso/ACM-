#include<stdio.h>
int main()
{
    long a,b,n;
    while(scanf("%ld",&n)==1){
        if(n==0)
            break;
        else if(n<=100)
            printf("f91(%ld) = %ld\n",n,91);
        else if(n>=101)
             printf("f91(%ld) = %ld\n",n,n-10);
    }
    return 0;
}
