#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        printf("%d\n",(a/3)*(b/3));
    }
    return 0;
}
