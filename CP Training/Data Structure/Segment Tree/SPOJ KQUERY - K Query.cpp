#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N;i>0;i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ff               first
#define ss               second
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

const int MAX = 30004;

ll arr[MAX],cnt=0;

void Build_query(ll node, ll L, ll R,ll k)
{
    if(L == R)
    {
        if(arr[L]>k)cnt++;
        return;
    }
    ll mid =  L + ((R - L)/2);
    Build_query(node * 2, L, mid,k);
    Build_query(node * 2 + 1, mid + 1, R,k);

}

int main()
{

        ll n;
        scanf("%lld", &n);
        for(int i=0;i<n;i++)scanf("%d", &arr[i]);
        ll m;
        scanf("%lld", &m);
        for(int i=0;i<m;i++)
        {
           ll x,y,k;
           scanf("%lld %lld %lld",&x,&y,&k);
           x--;y--;
           Build_query(1,x,y,k);
           printf("%lld\n",cnt);
           cnt=0;
        }
        return 0;
}
