#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int c=1;
    string s;
    while(1){
        cin>>s;
        if(s=="Hajj")
        printf("Case %d: Hajj-e-Akbar\n",c++);
        else if(s=="Umrah")
            printf("Case %d: Hajj-e-Asghar\n",c++);
            else if(s=="*")
                break;
    }
    return 0;
}
