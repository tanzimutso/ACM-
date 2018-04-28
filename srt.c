#include<stdio.h>
int main()
{
    int i,j,n,temp,array[100];
 scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n ; i++)
    {
        for(j=0; j<(n-1)-i; j++)
        {
            if( array[j] < array[j+1] )
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        printf("%d ",array[j]);
    }
}
