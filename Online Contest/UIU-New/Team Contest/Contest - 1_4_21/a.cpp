#include<bits/stdc++.h>
using namespace std;

#define in freopen("tabs.in","r",stdin)
#define out freopen("tabs.out","w",stdout)
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define INF             2e16
#define ll              long long
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()
#define FOR(i,N) for(int i=0;i<N;i++)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)

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
    fastio;
     in;
#ifdef AadhareAlo
    //out;
#endif
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>n>>k;
        if(k==1)c=1;
        else if(k==n)c=1;
        else c=2;
        if(n==1)c=0;
        cout<<c<<"\n";
    }


return 0;
}


