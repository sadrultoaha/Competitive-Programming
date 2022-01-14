/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    string st;
    cin>>st;
    for(int i=0,c=1,r=1;i<st.size();i++)
    {
        if(st[i]=='0')
        {
           cout<<1<<" "<<r<<"\n";
           r++;
           if(r>4)r=1;


        }
        else
        {
            cout<<3<<" "<<c<<"\n";
            c+=2;
            if(c>4)c=1;

        }
    }
}
