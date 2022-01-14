#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,tri;
    cin>>n>>k;
    tri=k/n;
    if(k%n!=0)tri++;
    cout<<tri;
}
