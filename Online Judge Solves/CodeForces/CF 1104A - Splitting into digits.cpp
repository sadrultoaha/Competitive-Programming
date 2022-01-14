/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,ar[1005],v=0;
    cin>>n;
    int i=1;
    for(int j=0;j<n/i;j++)
    {
        sum+=i;
        ar[v]=i;
        v++;
    }
    int nd;
    if(sum<n)
    {
        nd=n-sum;
        ar[v]=nd;
        v++;
    }
    cout<<v<<"\n";
    for(int j=0;j<v;j++)
    {
        cout<<ar[j]<<" ";
    }


}
