#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,ans=1;
        cin>>n>>k;
        if(n-k < k-1) k=n-k+1;
        if(k==1){cout<<"1\n";}
        else
        {
            for(int i=1;i<=k-1;i++)
            {
                ans=ans*(n-i)/i;
            }
            cout<<ans<<"\n";
        }

    }

    return 0;
}
