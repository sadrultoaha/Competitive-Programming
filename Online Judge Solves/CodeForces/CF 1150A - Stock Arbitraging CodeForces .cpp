/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))

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

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++){int x;cin>>x;mn=min(mn,x);}
    for(int i=0;i<m;i++){int x;cin>>x;mx=max(mx,x);}
    int buy;
    if(mx>mn)
    {
        buy=r/mn;
        r-=buy*mn;
        r+=buy*mx;
    }
    cout<<r<<"\n";


}

