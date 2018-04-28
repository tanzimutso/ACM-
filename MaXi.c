#include<stdio.h>
int main()
{
    int a[10000], mx=0,i,j;
    printf("Press ctrl+d or any character to quit inputting:\n");
    for(i=0; i<10000; i++) a[i]=0;
    for(i=0; a[i]<10000; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<10000; j++)
    {
//printf("%d\n",a[j]);
        if(a[j]>mx) mx=a[j];
    }
    printf("Max=%d\n",mx);
    return 0;
}
