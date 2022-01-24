#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
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
int deno[110];
int x,n,t;
ll dp[110][10010];
ll coin(int nd,int val)
{
    if(nd<0)
    {
        if(val<x)
            return 0;
        else return 1;
    }
    //if(val<x)return val;
    if(dp[nd][val])return dp[nd][val];
    ll pick=0;
    if(val+deno[nd]<x)
        pick = coin(nd,val+deno[nd])+1;
    ll not_pick = coin(nd-1,val);

    return dp[nd][val] = min(pick,not_pick);
}
*/
int deno[110],dp[20005],t,n,x;
int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;

    // Read Think Solve Code
#endif

    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        FOR(i,n)cin>>deno[i];
        mem(dp,-1);
        int N = 20005-1;
        dp[0] = 0;
        FOR(i,n)
        {
            for(int j=N;j>=deno[i];j--)
            {
                if(dp[j-deno[i]]!=-1)
                {
                    if(dp[j]==-1)dp[j]= 1 + dp[j-deno[i]];
                    else dp[j] = min(dp[j],1+dp[j-deno[i]]);
                    if(j>=x)N = min(N,j);
                }
            }
        }
        cout<<N<<" "<<dp[N]<<"\n";
    }
    return 0;
}


