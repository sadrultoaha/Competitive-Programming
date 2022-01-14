//CF 486A - Calculating Function solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=0;
    cin>>n;
    s=ceil(n/2.0);
    if(n%2==0)cout<<s;
    else cout<<"-"<<s;
    return 0;
}
