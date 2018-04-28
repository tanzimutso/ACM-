#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int tCase=0;
    while(1)
    {
        string s;
        tCase++;
        cin>>s;
        if(s=="#") break;
        if(s=="HELLO")
            printf("Case %d: ENGLISH\n",tCase);
        else if(s=="HOLA")
            printf("Case %d: SPANISH\n",tCase);
        else if(s=="HALLO")
            printf("Case %d: GERMAN\n",tCase);
        else if(s=="BONJOUR")
            printf("Case %d: FRENCH\n",tCase);
        else if(s=="CIAO")
            printf("Case %d: ITALIAN\n",tCase);
        else if(s=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",tCase);
        else
            printf("Case %d: UNKNOWN\n",tCase);
    }
    return 0;
}
