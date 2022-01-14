/**
    author: SadrulToaha
    status:
**/
#include<bits/stdc++.h>
#define fastread {ios_base::sync_with_stdio(false);cin.tie(0);}
using namespace std;
int main()
{
    fastread
    long long n,m,ar[200005],x;
    ar[0]=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        ar[i]+=ar[i-1];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        long long l=1,r=n,mid;
        while(1)
        {
            mid=(l+r)/2;
            if(x<=ar[mid] && x>ar[mid-1]){ cout<<mid<<" "<<abs(x-ar[mid-1])<<"\n";break;}
            if(x<ar[mid])r=mid-1;
            else l=mid+1;
        }
    }

}



