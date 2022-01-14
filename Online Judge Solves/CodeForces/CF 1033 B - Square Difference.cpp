#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool pri=true;
void Sieve(ll n)
{

        for (ll p=2; p*p<=n; p++)
        {
                if(n%p==0)
                {
                    pri=false;
                    break;
                }
        }
}

int main()
{
    ll T,a,b,q,p;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        q=a+b;
        p=a-b;
        Sieve(q);
        if(pri && p==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        pri=true;
    }
}



