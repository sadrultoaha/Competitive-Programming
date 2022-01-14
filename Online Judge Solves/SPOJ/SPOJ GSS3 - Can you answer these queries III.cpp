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
int const MAX = 50010;
int arr[MAX];
struct segtree
{
     int sum,prefix,suffix,mx;
}tree[MAX*3];

void setNode(int node)
{
     int L = node<<1, R = L|1;
     tree[node].mx = max(max(tree[L].mx,tree[R].mx),tree[L].suffix + tree[R].prefix);
     tree[node].sum = tree[L].sum + tree[R].sum;
     tree[node].prefix = max(tree[L].prefix,tree[L].sum + tree[R].prefix);
     tree[node].suffix = max(tree[R].suffix,tree[R].sum + tree[L].suffix);
}
segtree merge(segtree L, segtree R)
{
     segtree node;
     node.mx = max(max(L.mx,R.mx),L.suffix + R.prefix);
     node.sum = L.sum + R.sum;
     node.prefix = max(L.prefix,L.sum + R.prefix);
     node.suffix = max(R.suffix,R.sum + L.suffix);
     return node;
}
void build(int node,int S,int E)
{
     if(S==E)
     {
          tree[node].mx = tree[node].prefix = tree[node].suffix = tree[node].sum = arr[S];
          return;
     }
     int mid = (S+E)>>1, L = node<<1, R = L|1;
     build(L,S,mid);
     build(R,mid+1,E);
     setNode(node);
}

segtree query(int node,int S,int E,int L,int R)
{
     if(S>E || S>R || L>E) return {-15009,-15009,-15009,-15009};
     if(S>=L && E<=R)return tree[node];

     int mid = (S+E)>>1,left = node<<1, right = left|1;
     segtree x,y;
     x = query(left,S,mid,L,R);
     y = query(right,mid+1,E,L,R);
     return merge(x,y);
}

void update(int node,int S,int E,int pos,int val)
{
     if(S==E)
     {
          tree[node].mx = tree[node].prefix = tree[node].suffix = tree[node].sum = val;
          return;
     }
     int mid = (S+E)>>1, L = node<<1, R = L|1;
     if(pos <= mid)update(L,S,mid,pos,val);
     else update(R,mid+1,E,pos,val);
     setNode(node);
}
int main()
{
#ifdef SunWalker
         read;
        //write;
     #endif

     int n,q,x,y,op;
     scanf("%d",&n);
     FOR1(i,1,n)
          scanf("%d",&arr[i]);

     build(1,1,n);
     scanf("%d",&q);
     while(q--)
     {
          scanf("%d%d%d",&op,&x,&y);
          if(op)
               printf("%d\n",query(1,1,n,x,y).mx);
          else update(1,1,n,x,y);
     }
     return 0;


return 0;
}

