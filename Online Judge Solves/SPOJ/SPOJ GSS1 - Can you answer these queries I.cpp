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
#define pll             pair<ll,ll>
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
const ll MAX = 50020;
ll sum[4*MAX],pre[4*MAX],suf[4*MAX],mx[4*MAX],arr[MAX];
void build(ll node,ll S,ll E)
{
     if(S==E)
     {
          sum[node]=pre[node]=suf[node]=mx[node]=arr[S];
          return;
     }
     ll mid = (S+E)/2,left = 2*node,right = 2*node+1;
     build(left,S,mid);
     build(right,mid+1,E);

     mx[node]  = max( max(mx[left],mx[right]),suf[left]+pre[right]);
     sum[node] = sum[left] + sum[right];
     pre[node] = max(pre[left],sum[left]+pre[right]);
     suf[node] = max(suf[right],sum[right]+suf[left]);

}

pair<pll,pll> query(ll node,ll S,ll E,ll L,ll R)
{
     if(S>R || L>E)return mp(mp(-15009,-15009),mp(-15009,-15009));
     if(S>=L && E<=R){return mp(mp(mx[node],sum[node]),mp(pre[node],suf[node])); }
     ll mid = (S+E)/2,left = 2*node,right = 2*node+1;
     pair<pll,pll> x = query(left,S,mid,L,R);
     pair<pll,pll> y = query(right,mid+1,E,L,R);
     ll ms  = max(max(x.ft.ft,y.ft.ft),x.sd.sd + y.sd.ft);
     ll sm = x.ft.sd + y.ft.sd;
     ll l = max(x.sd.ft,x.ft.sd + y.sd.ft);
     ll r = max(y.sd.sd,y.ft.sd+x.sd.sd);

     return mp(mp(ms,sm),mp(l,r));

}


int main()
{

     #ifdef SunWalker
         read;
        //write;
     #endif
     ll n,q,x,y;
     scanf("%lld",&n);
     FOR1(i,1,n)
          scanf("%lld",&arr[i]);

     build(1,1,n);
     scanf("%lld",&q);
     while(q--)
     {
          scanf("%lld%lld",&x,&y);
          printf("%lld\n",query(1,1,n,x,y).ft.ft);
     }
     return 0;
}

