#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,pt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        pt+=a;
        cout<<pt/m<<" ";
        pt%=m;
    }
}
