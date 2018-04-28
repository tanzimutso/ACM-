#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,array[10],i,j;
     scanf("%d",&a);
     for(i=0;i<a;i++)
     {
         scanf("%d",&array[i]);
     }

sort(array+a,array);
for(j=0;j<a;j++)
{
    printf("%d ",array[j]);
}

}
