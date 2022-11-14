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
ull nCr(int n, int r) {
    if(r > n - r) r = n - r;
    ull ans = 1;
    for(int i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}


int main()
{
#ifdef SunWalker
    //read;
    //write;
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        double ans=0.0;
        cin>>n>>x;
        int st = ceil(n*(x/100.0));
        for(int i=st;i<=n;i++)
        {
            ans += nCr(n,i)*pow(0.5,i)*pow(0.5,(n-i));
        }
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }



    return 0;
}
