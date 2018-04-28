#include<stdio.h>
int main()
{
    int line,x,sl,s;
    scanf("%d",&line);
    x=line;
    sl=0;
    for(line=x;line<=1;line--){
        for(s=0;s<sl;s++){
            printf(" ");
        }
        sl++;
        for(s=0;s<line;s++){
            printf("* ");
        }
        printf("\n");
    }return 0;


}
