/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pi acos(-1)
#define e 2.718281828

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        double ans;
        cin>>n;
        if(n<0){cout<<"0"<<endl;}
        else if(n<=1){cout<<"1"<<endl;}
        else{
        ans=log10(2*pi*n)/2.0 + n*log10(n/e);
        ll digits =ans+1;
        cout<<digits<<endl;}
    }
}
