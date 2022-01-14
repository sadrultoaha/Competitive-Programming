#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,ans;
    cin>>n>>m>>a>>b;
    ans=min(n%m*b,(m-n%m)*a);
    cout<<ans;
}
