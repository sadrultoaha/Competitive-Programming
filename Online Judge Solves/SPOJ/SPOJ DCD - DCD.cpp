/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define ll long long
#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " ";
        call(++it, rest...);
    }
};

ll ar[18],sssum[1<<18],d;
int main()
{
    fastread();
    int n,m;
    while(cin>>n>>m){
    for(int i=0;i<n;i++){cin>>ar[i];}
    for(int i=n;i<m+n;i++){cin>>ar[i];}
    cin>>d;
    int len = m+n;
    int sz  = (1<<len);
    for(int i=0;i<sz;i++)
    {
        ll val=0;
        for(int j=0;j<len;j++)
        {
            if(i&(1<<j))
            {
                if(j<n)val+=ar[j];
                else val-=ar[j];
            }
        }
        sssum[i]=val;
    }
    sort(sssum,sssum+sz);
    ll fst,lst,key,mx=0,mid;
    for(int i=0;i<sz;i++)
    {
        key = sssum[i]+d-1;
        mid = upper_bound(sssum+i,sssum+sz,key)-sssum;
        if(mid-i>mx)
        {
            mx=mid-i;
            fst=sssum[i];
            lst=sssum[i]+d-1;
        }
    }
    cout<<fst<<" "<<lst<<" "<<mx<<"\n";
    }

}


