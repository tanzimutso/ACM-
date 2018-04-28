#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a<0)
            break;
        else if(a==1||a==0)
            printf("0%%\n");
        else
            printf("%d%%\n",a*25);
    }
    return 0;
}
