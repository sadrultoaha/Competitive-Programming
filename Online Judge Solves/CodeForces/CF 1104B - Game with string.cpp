/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    bool yes=false;
    int c=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]==st[i+1])
        {
            if(c%2==0) yes=true;
            else yes=false;
            st.erase(i,2);
            c++;
            i=-1;
        }
    }
    if(yes)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";



}

