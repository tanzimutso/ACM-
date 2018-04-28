#include<stdio.h>
int main()
{
    int line,x,sl,s;
    scanf("%d",&line);
    x=line;
    sl=x-1;
    for(line=1;line<=x;line++){
        for(s=0;s<sl;s++){
            printf(" ");
        }
        sl--;
        for(s=0;s<line;s+=2){
            printf("* ");
        }
        printf("\n");
    }return 0;


}
