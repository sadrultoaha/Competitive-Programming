#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long W,n,w,l,tot=0;
    cin>>W>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w>>l;
        tot+=w*l;
    }
    cout<<tot/W<<endl;
}
