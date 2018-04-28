#include<stdio.h>
#define SIZE 5
int main()
{
    int i,j,min,temp;
    int arr[SIZE];
    for(i=0; i<SIZE; i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<SIZE; i++)
    {
        min=i;
        printf("%d\n",i);
        for(j=min+1; j<SIZE; j++)
            if(arr[j]<arr[min])
            {
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("After selection sort the elements:\n");
    for(i=0; i<SIZE; i++)
        printf("%d\t",arr[i]);
    return 0;
}

