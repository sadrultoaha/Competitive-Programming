#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define fastIO {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
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
    fastIO;
#ifdef AadhareAlo
    //in;
    //out;
#endif
    ll n;
    cin>>n;
    vector<ll>vc;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(!(n%i))
        {
            vc.push_back(i);
            if(i!=(n/i))
                vc.push_back(n/i);
        }
    }
    sort(all(vc));
    for(auto x:vc)
        cout<<x<<" ";

return 0;
}

