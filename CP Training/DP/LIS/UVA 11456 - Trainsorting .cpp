#include<bits/stdc++.h>
using namespace std;
#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
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
/*
const int mx = 2010;
int dp[mx],k1[mx],k2[mx],a[mx],b[mx],n,t;

void solve(int k[],int m[])
{
    //mem(dp,INF);
    fill(dp,dp+n+1,INF);
    dp[0]=-INF;
    FOR(i,n)
    {
        k[i] = lower_bound(dp,dp+n,m[i])- dp;
        dbg(*(dp+k[i]),m[i])
        *(dp+k[i]) = m[i];
    }
}
*/
int LIS[2010],LDS[2010],t,n,a[2010];

int main()
{
    fastread;
#ifdef SunWalker
    read;

    //write;

    // Take Few Deep Breath
    // First Solve Than Do Code
    // Think Wisely Not Lazily
    // You Can Solve All In 2 Hrs
#endif
    cin>>t;
    while(t--)
    {
        cin>>n;
        RFOR(i,n)cin>>a[i];
        FOR(i,n)
        {
            int mxi=1,mxd=1;
            FOR1(j,0,i-1)
            {
                if(a[j]<a[i]&& LIS[j]+1> mxi)mxi = LIS[j]+1;
                if(a[j]>a[i] && LDS[j]+1> mxd)mxd = LDS[j]+1;
            }
            LIS[i]=mxi;
            LDS[i]=mxd;
        }
        int ans = 0;
        FOR(i,n)ans = max(ans,LIS[i]+LDS[i]-1);
        cout<<ans<<"\n";
    }


    return 0;
}
