/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read() freopen("IN.txt","r",stdin)

int main()
{
    read();
    int n;
    map<int,int>mp;
    cin>>n;
    for(int i=0; i < n; ++i)
    {
        int in;
        cin>>in;
        mp[in]++;
        if (mp[in] > 2)
        {
			cout << "NO" << endl;
			return 0;
		}
    }
    int ar[200005],ar1[200005];
    cout<<"YES\n";
    int j=0,k=0;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(i->second==2)
        {
            ar[j]=i->first;
            j++;
        }
        if(i->second <=2)
        {
            ar1[k]=i->first;
            k++;
        }
    }
    cout<<j<<"\n";
    for(int i=0;i<j;i++)cout<<ar[i]<<" ";
    cout<<"\n"<<k<<"\n";
    for(int i=k-1;i>=0;i--)cout<<ar1[i]<<" ";
    cout<<"\n";

}
