#include<stdio.h>
int main()
{
    int n,max=0,i,p,r,z;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;n!=0;i++){
        r=n%10;
        if(r>max)
            z=r;
        n=n/10;
        p=n%10;
        r=p;
        if(z>p)
            z=p;

    }
    printf("%d",z);
}
