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
    int t,cs=0,n;
    cin>>t;
    while(t--)
    {
        int LIS[2010],LDS[2010],a[2010],b[2010];
        cin>>n;
        FOR(i,n)cin>>a[i];
        FOR(i,n)cin>>b[i];
        FOR(i,n)
        {
            int mxi=0,mxd=0;
            FOR1(j,0,i-1)
            {
                if(a[j]<a[i]&& LIS[j]> mxi)mxi = LIS[j];
                if(a[j]>a[i] && LDS[j]> mxd) mxd = LDS[j];
            }
            LIS[i]=mxi + b[i];
            LDS[i]=mxd + b[i];
        }
        int li = *max_element(LIS,LIS+n),ld = *max_element(LDS,LDS+n);
        if(li>=ld)cout<<"Case "<<++cs<<". Increasing ("<<li<<"). Decreasing ("<<ld<<").\n";
        else cout<<"Case "<<++cs<<". Decreasing ("<<ld<<"). Increasing ("<<li<<").\n";
    }


    return 0;
}
