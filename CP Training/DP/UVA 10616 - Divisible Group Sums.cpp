#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ft              first
#define sd              second
#define bn              begin
#define en              end
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()


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


int cs=0,n,q,num[250],dp[205][40][15],D,M;
int QSum(int i,int sm, int qn)
{
    dbg(num[i],sm,qn)
    if(qn==0){if(sm==0)return 1;return 0;}
    if(i>=n)return 0;

    if(dp[i][sm][qn])return dp[i][sm][qn];
    dp[i][sm][qn] = QSum(i+1,(sm+num[i])%D,qn-1) + QSum(i+1,sm,qn);
    return dp[i][sm][qn];
}
int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;

    // Read Think Solve Code
#endif
    while(cin>>n>>q,!(n==0&&q==0))
    {
        FOR(i,n) cin>>num[i];
        cout<<"SET "<<++cs<<":\n";
        FOR(i,q)
        {
            mem(dp,0);
            cin>>D>>M;
            cout<<"QUERY "<<i+1<<": "<<QSum(0,0,M)<<"\n";
        }

    }

    return 0;
}
