#include<bits/stdc++.h>
#define MAX 11111111
using namespace std;
bool prime[MAX];
int p = 0,t = 1;
long long int twin[100001];

void sieve()
{
    long long int i,j,k,l;
     prime[0] = true;
prime[1] = true;

    k=2;


    for(i = 2 ; i <= MAX ; i++)
    {
        while(i<=MAX && prime[i])
         i++;
        if(i - k == 2)
            twin[t++] = k;

        k=i;
        for(j = i*i ; j<=MAX ; j+=i)
        prime[j] = true;

    }
}



int main()
{

int a;
sieve();
    while(cin>>a)
    {
    printf("(%lld, %lld)\n",twin[a],twin[a]+2);
    }

return 0;
}
