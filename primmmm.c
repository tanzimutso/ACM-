#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define s 2000
using namespace std;
int prime[s];
void primeGenerate()
{
    int i,j,m;
    m=sqrt(s);
    memset (prime,1,sizeof(prime));
    prime[0]=0;
    prime[1]=1;
    for(i=2;i<m;i++)
        if(prime[i])
            for(j=i+i;j<s;j+=i)
prime[j]=0;
}
int main()
{
    primeGenerate();
    char str[30];
    int i,num;
    while(gets(str))
    {
        num=0;
        for(i=0;str[i];i++)
        {
            if(str[i]>='a' && str[i]<='z')
                num=num+str[i]-'a'+1;
            else
                num=num+str[i]-'A'+27;
        }
        if(prime[num])
            cout<<"It is a prime word.\n";
        else
            cout<<"It is not a prime word.\n";
    }
    return 0;
}
