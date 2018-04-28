#include<stdio.h>
int main()
{
    int i=0,x=0;
    for(i=1;i<10;i++){
        if(i%2==1)
            x+=i;
        else
            x--;
        printf(" \n%d\n ",x);
       // continue;
    }
    printf("\n x = %d\n",x);
}
