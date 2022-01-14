/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n,c=0;
        string st;
        cin>>n;
        cin>>st;
        int k=0;
        while(k<n)
        {
             if(st[k]=='.'){c++;k+=3;}
             else k++;
        }
        cout<<"Case "<<j<<": "<<c<<"\n";
    }

}
