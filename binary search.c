#include<stdio.h>
int main()
{
    int array[5], start=0, end, mid=0, key, i, k, j, n, temp, b[5];

    for(i=1; i<=5; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=1; i<=5 ; i++)
    {
        for(j=0; j<(n-1)-i; j++)
        {
            if( array[j] > array[j+1] )
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
   /* for(i=0; i<n; i++)
    {
        b[i]=array[i];

    }*/
    for(i=1; i<=5; i++)
    {
        printf("%d ", array[i]);
    }

   // printf("asdasd\n");
        scanf("%d",&key);
        start=0;
      end=n;
       // end=n;
      // printf("sdfdfs\n");

        while(start<=end)
        {
            mid=(start+end)/2;
            //printf("%d\n",mid);
          printf("%d\n",b[mid]);
            if(key==b[mid])
            {
                printf("The number is found \n\nand the number is in %dth position\n",mid+1);
                break;
            }
            else if(key>b[mid])
               {

            start=mid+1;
            end=n;
                //printf("%d\n",mid);
               }
            else if(key<b[mid])
                {end=mid-1;
                start=0;
                //printf("%d",end);
        }

        return 0;
    }
}

