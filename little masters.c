#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,r;
    float X,Y,length;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&r);
        length=sqrt(pow(x,2)+pow(y,2));
        X=r-length;
        Y=r+length;
        printf("%.2f %.2f\n",X,Y);
    }
    return 0;
}
