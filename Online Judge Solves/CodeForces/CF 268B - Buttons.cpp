#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,prs;
    cin>>n;
    prs=0;
    for(int i=1;i<n;i++)
    {
        prs+=(n-i)*i;
    }
     cout<<prs+n;
}
