/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("IN.txt","r",stdin);
    long long n;
    while(cin>>n)
    {
        long long num=1,c=1;
        while(num%n>0)
        {
            num*=10;
            num%=n;
            num++;
            c++;
        }
        cout<<c<<"\n";
    }


}
