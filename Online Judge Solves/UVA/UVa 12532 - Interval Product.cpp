#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N;i>0;i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(0);cin.tie(0);}
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

#define MAX 1000000
int sum[2*MAX];
int num[MAX];

void build(int a, int L, int R)
{
    sum[a]=1;
    if(L == R)
    {
        sum[a] = num[L];
        return;
    }
    int mid = L + ((R - L)/2);
    build(a * 2, L, mid);
    build(a * 2 + 1, mid + 1, R);

    int x = sum[a*2] * sum[a * 2 + 1];
    if(x<0)sum[a]=-1;
    else if(x>0)sum[a]=1;
    else sum[a]=0;
}

void update(int a, int L, int R, int pos, int u)
{
    if(L == R)
    {

        if(u<0)sum[a]=-1;
        else if(u>0)sum[a]=1;
        else sum[a]=0;
        return;
    }
    int mid = L + ((R - L)/2);
    if(pos <= mid) update(a * 2, L, mid, pos, u);
    else update(a * 2 + 1, mid + 1, R, pos, u);

    int x = sum[a*2] * sum[a * 2 + 1];
    if(x<0)sum[a]=-1;
    else if(x>0)sum[a]=1;
    else sum[a]=0;
 }

 int query(int a, int L, int R, int l, int r)
{
    if(r < L || R < l) return 1;
    if(l <= L && R <= r) return sum[a];

    int mid = L + ((R - L)/2);
    int x = query(a * 2, L, mid, l, r);
    int y = query(a * 2 + 1, mid + 1, R, l, r);

    int va = x * y;
    if(va<0) return -1;
    else if(va>0) return 1;
    else return 0;
}

int main()
{
    #ifdef LOCAL
        read;
        //write;
    #endif

    int n,q;
    while(cin>>n>>q){
    FOR(i,n)cin>>num[i];
    build(1,0,n-1);
    FOR(i,q)
    {
        char ch;
        cin>>ch;
        int x,v;
        cin>>x>>v;
        x--;
        if(ch=='C') update(1,0,n-1,x,v);
        else
        {
            v--;
            int ans =query(1,0,n-1,x,v);

            if(ans<0)cout<<"-";
            else if(ans>0)cout<<"+";
            else cout<<"0";

        }
    }
    cout<<"\n";
    }

}
