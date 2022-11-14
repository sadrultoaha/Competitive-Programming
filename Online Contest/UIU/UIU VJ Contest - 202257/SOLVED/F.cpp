#include<bits/stdc++.h>
#include<string.h>
using namespace std;
map<char,long long>St;
int main()
{
    string A;
    char X;
    long long len,pairC=0,counT=0;
    cin>>A;
    for(int i=0;i<A.length();++i)
    {
        X=A[i];
        St[X]++;
    }
    for(int j=0;j<A.length();++j)
    {
        X=A[j];
        pairC+=St[X];

    }
    cout<<pairC;

    return 0;

}
