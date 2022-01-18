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
#define f               first
#define s               second
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

const int MAX = 100005;

ll tree[3*MAX],lazy[3*MAX],arr[MAX];

void RU(ll node, ll S, ll E, ll l, ll r , ll val)
{

    if(lazy[node] != 0) // PROPAGATION
    {
        tree[node] += (E - S + 1) * lazy[node];

        if(S != E)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }

   if(S > E || S > r || E < l)return;


    if(S>=l && E<=r)
    {
        tree[node] += (E - S + 1) * val;

         if(S != E)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return ;
    }

    ll mid= S + ((E - S)/2);
    RU(node*2,S,mid,l,r,val);
    RU(node*2+1,mid+1,E,l,r,val);
    tree[node] = tree[node*2] + tree[node*2+1];
}


ll RQ(ll node, ll S, ll E, ll l, ll r)
{
    if(S > E || S > r || E < l)return 0;

     if(lazy[node] != 0)   // PROPAGATION
    {
        tree[node] += (E - S + 1) * lazy[node];
        if(S != E)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if(S >= l && E <= r) return tree[node];
    ll mid =  S + ((E - S)/2);
    ll x = RQ(node * 2, S, mid, l, r);
    ll y = RQ(node * 2 + 1, mid + 1, E, l, r);
    return x + y;
}

int main()
{
    //read;
    //write;
    int T,cs=1;
    scanf("%d",&T);


    while(T--)
    {
        MEM(tree,0);
        MEM(lazy,0);
       // MEM(arr,0);
        ll n,q;
        scanf("%lld %lld",&n,&q);
       // build(1,0,n-1);
        printf("Case %d:\n",cs);
        FOR(i,q)
        {
            ll c;
            scanf("%lld",&c);
            if(c==1)
            {
                ll x,y;
                scanf("%lld%lld",&x,&y);
                printf("%lld\n",RQ(1,0,n-1,x,y));

            }
            else
            {
                ll x,y,v;
                scanf("%lld%lld%lld",&x,&y,&v);
                RU(1,0,n-1,x,y,v);
            }
        }
        cs++;

    }

}
