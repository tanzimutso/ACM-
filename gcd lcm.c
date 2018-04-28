#include <stdio.h>

int main()
{   int x,y,cases,i;
    scanf("%d",&cases);
    for(i=0;i<cases;i++){
        scanf("%d %d",&x,&y);
        if(y%x==0){
            printf("%d %d\n",x,y);
        }
       else{
            printf("-1");
       }

    }
       return 0;
}
