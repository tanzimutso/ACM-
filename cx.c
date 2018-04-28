#include<stdio.h>
int main()
{
    system("color cd");
    double a[100000],mx=0;
    int i,j,c=0;
    printf("Enter as many numbers as you wish . Press Ctrl+D or any character to stop inputting :\n");
    for(i=0; i<100000; i++)
    {
        if((scanf("%lf",&a[i]))==1)
            c++;
    }
    for(j=0; j<c; j++)
    {
        if(a[j]>mx) mx=a[j];
    }
    printf("You have inserted %d values and the maximum is:%g",c,mx);
    return 0;
}
