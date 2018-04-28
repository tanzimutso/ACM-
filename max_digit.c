#include<Stdio.h>
int main()
{
    int n,i,j,p,r,t,s;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;n!=0;i++){
        r=n%10;
        n=n/10;
        s=n%10;
        if(r>s){
            printf("%d",r);
        }
        else
            printf("%d",s);


}

    }




