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
int const MAX = 100010;
int const lim = -100010;
ll arr[MAX];
struct segtree
{
     ll sum,prefix,suffix,mx;
}tree[MAX*3];

segtree merge(segtree node, segtree L, segtree R)
{
     node.mx = max(max(L.mx,R.mx),L.suffix + R.prefix);
     node.sum = L.sum + R.sum;
     node.prefix = max(L.prefix,L.sum + R.prefix);
     node.suffix = max(R.suffix,R.sum + L.suffix);
     return node;
}
void setNode(ll node)
{
     ll L = 2*node, R = 2*node+1;
     tree[node].mx = max(max(tree[L].mx,tree[R].mx),tree[L].suffix + tree[R].prefix);
     tree[node].sum = tree[L].sum + tree[R].sum;
     tree[node].prefix = max(tree[L].prefix,tree[L].sum + tree[R].prefix);
     tree[node].suffix = max(tree[R].suffix,tree[R].sum + tree[L].suffix);
}
void update(int node,int S,int E,int pos)
{
     if(S==E)
     {
          tree[node].mx = tree[node].prefix = tree[node].suffix = tree[node].sum = 0;
          return;
     }
     int mid = (S+E)/2, L = 2*node, R = 2*node+1;
     if(pos <= mid)update(L,S,mid,pos);
     else update(R,mid+1,E,pos);
     setNode(node);
}
void build(ll node,ll S,ll E)
{
     if(S==E)
     {
          tree[node].mx = tree[node].prefix = tree[node].suffix = tree[node].sum = arr[S];
          return;
     }
     ll mid = (S+E)/2, L = 2*node, R = 2*node+1;
     build(L,S,mid);
     build(R,mid+1,E);
     setNode(node);
}
bool ok=false;
segtree query(ll node,ll S,ll E,ll L,ll R)
{
     if(S>R || L>E)  return {lim,lim,lim,lim};

     if(S>=L && E<=R)return tree[node];

     ll mid = (S+E)/2,left = 2*node,right = 2*node+1;
     segtree x,y,res;
     x = query(left,S,mid,L,R);
     y = query(right,mid+1,E,L,R);
     if(x.mx==y.mx){return merge(res,x,{y.sum,y.prefix,y.suffix,0});}
     else if(x.prefix==y.prefix){return merge(res,x,{y.sum,y.prefix,0,y.mx});}
     else if(x.suffix==y.suffix){return merge(res,{x.sum,0,x.suffix,x.mx},y);}
     else if(x.sum==y.sum){return merge(res,x,{0,y.prefix,y.suffix,y.mx});}
     else {return merge(res,x,y);}


}
int main()
{
#ifdef SunWalker
         read;
        //write;
     #endif
     ll n,q,x,y;
     scanf("%lld",&n);
     FOR1(i,1LL,n)
     {
          scanf("%lld",&arr[i]);
     }
     build(1LL,1LL,n);
     scanf("%lld",&q);
     while(q--)
     {
          scanf("%lld%lld",&x,&y);
          printf("%lld\n",query(1LL,1LL,n,x,y).mx);
     }
     return 0;


return 0;
}
