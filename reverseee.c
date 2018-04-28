#include<stdio.h>
int main()
{
    int line,y=1,s;
    scanf("%d",&line);
    for(;line>=1;line++){
        for(s=0;s<line;s++){
            printf("* ");
        }
        printf("\n");
        for(s=0;s<y;s++){
            printf(" ");
        }
        y++;
    }
    return 0;
}
