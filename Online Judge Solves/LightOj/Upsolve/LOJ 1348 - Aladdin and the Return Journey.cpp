/**
    Author: SunWalker.
    Status:
    pType :
    sln   :
**/


#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)        memset(a,b,sizeof(a))
#define EPS             1e-9
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
#define all(x)          x.begin(), x.end()


#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<endl;}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " " ;
        call(++it, rest...);
    }
};
#define MAX 100010
struct BIT_PURQ {
    vector< int > bit[MAX];
    int N;

    void init(int n) {
        mem(bit, 0);
        N = n;
    }

    void add(int i, ll value) {
        for (; i < N; i |= i + 1) bit[i] += value;
    }

    ll sum(int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1) res += bit[i];
        return res;
    }

    ll sum(int a, int b) {
        return sum(b) - ((a < 1) ? 0 : sum(a-1));
    }

    void assign(int i, ll value) {
        add(i, value -sum(i, i));
    }
};

int  main()
{
    read;
    fastread;

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>> n;
        FOR(i,n)cin>>

    }
}
