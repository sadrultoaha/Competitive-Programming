#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,C=0;
    cin>>k>>n>>w;
    for(int i=0;i<=w;i++)
    {
        C+=(k*i);
    }
    if(n>C)cout<<"0";
    else cout<<(C-n);

}
