//This is a sample code
#include<stdio.h>
#include<stdbool.h>

#define FACT_LIMIT 46341

bool prime_index[FACT_LIMIT] = {false};
long long primes[23500];
long long c = 1;

void sieve(void)
{
    ///factors inside sieve
    // this value is sqrt(FACT_LIMIT)
    long long factors_limit = 213;
    long long i,j;
    for(i = 2; i<=213; i++)
        if(prime_index[i] == false)
            for(j = i*i; j<= FACT_LIMIT; j+= i)
                prime_index[j] = true;

    primes[0] = 2;
    for(i=3; i<= FACT_LIMIT; i +=2 )
        if(prime_index[i] == false)
            primes[c++] = i;
}

int main()
{
    sieve();
    long long num;
    long long factors[50];

    while(scanf("%lld",&num) == 1 && num !=0)
    {

        int factors_index = 0;
        long long num_temp = num;


        int primlity = 1;
        long long i = 0;
        // start of 1st while
        while(num_temp > 1)
        {
            // start of if
            if(num_temp % primes[i] == 0)
            {
                factors[factors_index++] = primes[i];
                num_temp /= primes[i];
            }
            else i++;

            if(i == c) break;
            // end of if
        }
        // end of 2nd while



        printf("\n");
    }
    //end of main while loop
    return 0;

}
