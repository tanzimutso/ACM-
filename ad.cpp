#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    while(getline(cin,str))
    {
        if(str=="DONE")
            break;
        st=str;
        reverse(str.begin(),str.end());
        if(str==st)
        cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }
    return 0;
}

