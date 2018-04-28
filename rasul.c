#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000000
bool prime[max];
int main()
{
    long  i,j,n=max,k,sq,l,a,array[100000],m=0,p,r;
    sq=sqrt(n);
    for(i=4; i<n; i+=2)
        prime[i]=true;
    for(i=3; i<=sq; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<=n; j+=2*i)
                prime[j]=true;
        }
        prime[1]=true;
    }
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
            break;
        else if(a%2==1)
        {
            printf("Goldbach's conjecture is wrong.\n");
            continue;
        }
        else
        {
            for(l=2; l<=a; l++)
            {
                if(prime[l]==false)
                {
                    array[m]=l;
                    m++;
                }
            }
            for(p=0; p<a; p++)
            {
                r=a-array[p];
                if(prime[r]==false)
                    break;
            }
        }
        printf("%ld = %ld + %ld\n",a,array[p],r);
    }
    return 0;
}

