#include<stdio.h>
int main()
{
    int a,b[100],c=0,d,e,i;
    while(scanf("%d",&a)!=EOF){
             c==0;
        for(i=0;i<a;i++){
            scanf("%d",&b[i]);
        }
         for(i=0;i<a-1;i++){
        if(b[i]+b[i]==b[i+1])
           c=1;
    else
        break;
         }
          if(c==0)
        printf("It is not a B2-Sequence.\n");
            else
                 printf("It is a B2-Sequence.\n");
    }
}

