

#include <stdio.h>
int main()
{
    int a[10],b,c,d,n,i,j;
    printf("\nenter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++){
                scanf("%d",&a[j]);


           if(a[j]>a[j+1]){
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
           }
           else if(a[j]>a[j+2]){
            c=a[j];
            a[j]=a[j+2];
            a[j+2]=c;
           }



        }
          printf("%d ",a[j]);

            }

}



