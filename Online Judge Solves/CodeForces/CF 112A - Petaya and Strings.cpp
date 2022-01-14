#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int s1=0,s2=0;
    cin>>a>>b;

    for(int i=0;i<a.size();i++)
    {
        s1=toupper(a[i]);
        s2=toupper(b[i]);

        if(s1>s2){cout<<"1"<<endl;return 0;}
        else if(s1<s2){cout<<"-1"<<endl;return 0;}
    }
     cout<<"0"<<endl;return 0;
}

