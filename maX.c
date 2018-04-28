#include<stdio.h>
int main()
{
    int array[100],j,i,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0,j=i+1;i<n-1,j<n;i++,j++){
        if(array[i]>array[j])
            max=array[i];
            else
                max=array[j];
    }
    printf("%d\n",max);
    return 0;
}
