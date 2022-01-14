#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,maX=0,S=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        S+=b;
        S-=a;
        if(S>maX) maX=S;
    }
    cout<<maX<<endl;

    return 0;
}
