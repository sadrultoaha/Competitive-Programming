#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N;i>0;i--)
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
#define bn                begin
#define en                end
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
const int MAX = 200005;
int tree[4*MAX],army[MAX],vis[MAX];

void build(int node, int L, int R)
{
    if(L == R)
    {
        tree[node] = vis[L];
        return;
    }
    int mid =  (L+R)/2;
    int left = node*2;
    int right = node*2 + 1;

    build(left, L, mid);
    build(right, mid + 1, R);
    tree[node] = tree[left] + tree[right];
 }
void PU(int node, int L, int R, int pos, int val)
{
    if (pos > R || pos < L) return;

    if(L==R)
    {
        tree[node] = val;
        return;
    }
    int mid =  (L+R)/2;
    int left = node*2;
    int right = node*2 + 1;

    if(pos <= mid) PU(left, L, mid, pos, val);
    else PU(right, mid + 1, R, pos, val);

    tree[node] = tree[left] + tree[right];
}
int RQ(int node, int S, int E, int l, int r)
{
    if( S > r || E < l)return 0;
    if(S >= l && E <= r) return tree[node];
    int mid =  (S+E)/2;
    int left = node*2;
    int right = node*2 + 1;
    int x = RQ(left, S, mid, l, r);
    int y = RQ(right, mid + 1, E, l, r);
    return x + y;
}
int main()
{

#ifdef SunWalker
    read;
   //write;
#endif
     int T,cs=1;
     scanf("%d",&T);
     while(T--)
     {
          int n,q,height,k,End,l,r,mi,idx;
          char op[1];
          mem(vis,0);
          scanf("%d%d",&n,&q);
          FOR1(i,1,n){scanf("%d",&army[i]);vis[i]=1;}
          End = 2*n;
          height = 20; // log2(End)+7
          build(1,1,End);
          printf("Case %d:\n",cs);
          FOR(j,q)
          {
               scanf("%s%d",op,&k);
               if(op[0]=='c')
               {
                    l=1,r=n,mi,idx=0;
                    FOR(i,height)
                    {
                         mi=(l+r)/2;
                         if(RQ(1,1,End,1,mi)>=k){r=mi-1;idx=mi;}
                         else l=mi+1;
                    }
                    if(idx) { printf("%d\n",army[idx]); PU(1,1,End,idx,0); }
                    else printf("none\n");
               }
               else
               {
                    army[++n]=k;
                    PU(1,1,End,n,1);
               }
          }
          cs++;
     }


return 0;
}




