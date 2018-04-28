#include<stdio.h>
int main()
{
    int t,i=0;
    float c,f,C;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f",&c,&f);
        C=((5.0/9.0)*f)+c;
        printf("Case %d: %.2f\n",++i,C);
    }
    return 0;
}
