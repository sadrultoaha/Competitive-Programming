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
const int MAX = 1000000;

ll tree[3*MAX],arr[MAX];

void build(ll node, ll L, ll R)
{
    tree[node]=0;
    if(L == R)
    {
        tree[node]= arr[L];
        return;
    }
    ll mid = (L+R)>>1;
    ll Left = node<<1, Right = Left|1;
    build(Left, L, mid);
    build(Right, mid + 1, R);
    tree[node]= tree[Left] + tree[Right];
}

void PU(ll node, ll L, ll R, ll pos, ll val)
{
    if(L == R)
    {
        tree[node] += val;
        return;
    }
    ll mid = (L+R)>>1;
    ll Left = node<<1, Right = Left|1;
    if(pos <= mid) PU(Left, L, mid, pos, val);
    else PU(Right, mid + 1, R, pos, val);

    tree[node] = tree[Left] + tree[Right];
}
void PU2(ll node, ll L, ll R, ll pos)
{
    if(L == R)
    {
        printf("%lld\n",tree[node]);
        tree[node] = 0;
        return;
    }
    ll mid = (L+R)>>1;
    ll Left = node<<1, Right = Left|1;
    if(pos <= mid) PU2(Left, L, mid, pos);
    else PU2(Right, mid + 1, R, pos);
    tree[node] = tree[Left] + tree[Right];
 }


ll RQ(ll node, ll S, ll E, ll l, ll r)
{
    if(S > E || S > r || E < l)return 0;
    if(S >= l && E <= r) return tree[node];

    ll mid = (S+E)>>1, Left = node<<1, Right = Left|1;
    ll x = RQ(Left, S, mid, l, r);
    ll y = RQ(Right, mid + 1, E, l, r);
    return x + y;
}

int main()
{
#ifdef SunWalker
    read;
   //write;
#endif


     ll T,n,q,op,id,val;
     scanf("%lld",&T);
     FOR1(cs,1,T)
     {
          scanf("%lld%lld",&n,&q);
          FOR(i,n)
               scanf("%lld",&arr[i]);
          build(1,0,n-1);
          printf("Case %d:\n",cs);
          while(q--)
          {
               scanf("%lld",&op);
               if(op==1)
               {
                    scanf("%lld",&id);
                    PU2(1,0,n-1,id);
               }
               else if(op==2)
               {
                    scanf("%lld%lld",&id,&val);
                    PU(1,0,n-1,id,val);
               }
               else
               {
                    scanf("%lld%lld",&id,&val);
                    printf("%lld\n",RQ(1,0,n-1,id,val));
               }
          }
     }


return 0;
}


