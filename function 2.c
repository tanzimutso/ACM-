/*#include <stdio.h>
void swap(int x, int y);
int main (void)
{
    int i, j;
    scanf("%d %d\n", &i, &j);
    swap(i, j);
    printf("i and j after swapping: %d %d\n", i, j);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
     x = y;
    y = temp;

}
*/

#include<stdio.h>
int main()
{
    int t,D,H,b,i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&D,&H);
        if((D>=0&&D<=9)&&(H>=1&&H<=20)){
                 printf("Case %d :\n",i);
            for(j=1;j<=H;j++){
                for(k=1;k<=j;k++)

                    printf("%d",D);
                    printf("\n");
            }
        }
        else
            break;

    }
}
