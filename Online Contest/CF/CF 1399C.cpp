
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
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

int main()
{
#ifdef SunWalker
    //read;
   //write;

     // First Solve Than Do code
     // Think Wisely not lazily
     // You can solve all in 2 hrs
#endif

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int>cnt(n+1);
        FOR(i,n)
        {
            cin>>x;
            cnt[x]++;
        }
        int ans = 0;
        FOR1(s,2,2*n)
        {
            int tms = 0;
            FOR1(i,1,((s+1)/2)-1)
            {
                if(s-i>n)continue;
                tms += min(cnt[i],cnt[s-i]);
            }
            if(!(s&1))tms+=cnt[s/2]/2;
            ans = max(ans,tms);
        }
        cout<<ans<<'\n';
    }



return 0;
}

