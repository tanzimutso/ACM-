#include<bits/stdc++.h>
using namespace std;
int array[10100];
 int b[100];
int main()
{
   int n,a;
    b[0]=0;
    b[1]=1;
    for(int j=2; j<18; j++)
    {
        b[j]=b[j-1]+b[j-2];
        a=b[j];
        array[a]=1;
    }
    while(cin>>n&&n)
    {
        if(n==1||array[n]==0)
               cout<<"Alicia"<<endl;
        else
            cout<<"Roberto"<<endl;
    }
    return 0;
}
