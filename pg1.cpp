#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
void Sieve()
{
    unsigned long long n=MAX;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
   prime[0]=false;
   prime[1]=false;
    for (unsigned long long p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (unsigned long long i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    unsigned long long a,b;
     unsigned long long n=100001;
    bool prime[n+1];
    cin>>a>>b;
    Sieve();
    for(unsigned long long i=a;i<=b;i++)
    {
        if(prime[i]==true)
            cout<<i<<endl;
    }
}
