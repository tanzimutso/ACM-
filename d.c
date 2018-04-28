#include<stdio.h>
#include<math.h>
int prime(int n){
int i,int a,int flag=0;
for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
    flag=1;
        break;
    }
    if(flag==0)
        continue;
    else
        return n;
}
}
int main()
{
    int n,a,b,c,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d%d",&b&c);
        for(j=b;j<=c;j++){
            prime(j);
            printf("%d\n",j);
        }

    }
}
