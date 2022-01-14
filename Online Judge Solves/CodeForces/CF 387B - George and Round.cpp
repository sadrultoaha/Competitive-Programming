
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ar1[3010],ar2[3010];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>ar1[i];
    for(int i=1;i<=m;i++)
        cin>>ar2[i];
    int c=0,k=n;
    for(int j=m;j>=0;j--)
    {
        if(k<=0)break;
        if(ar1[k]<=ar2[j])c++;
        else j++;
        k--;
    }

    cout<<n-c<<"\n";
}



