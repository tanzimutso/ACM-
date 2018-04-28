#include<stdio.h>
int main()
{
    int a,j,b,c=0,n[40],count,con,i;
    scanf("%d",&a);
    while(a--)
    {
        con=0;
        count=0;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            scanf("%d",&n[i]);
        }
        for(j=0; j<b-1; j++)
        {
            if(n[j]>n[j+1])
                count++;
            else if(n[j]<n[j+1])
                con++;
        }
        printf("Case %d: %d %d\n",++c,con,count);

    }
    return 0;
}
