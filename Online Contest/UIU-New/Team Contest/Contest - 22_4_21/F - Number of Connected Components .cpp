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

const int N = 1e6+5;
int lp[N+1];
vector<int> pr;
void sieve()
{
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int par[N], visited[N];

int setfind(int n)
{
    if(n == par[n]) return n;
    return par[n] = setfind(par[n]);
}

void setunion(int a , int b)
{
    int u = setfind(a);
    int v = setfind(b);

    if( u == v ) return;
    else par[v] = u;
}

void prfact(int X)
{
    int n = X;
    for (int i = 0; pr[i] * pr[i] <= X; i++) {

        if(X % pr[i] == 0){
            while (X % pr[i] == 0) {
                X /= pr[i];
            }
            setunion(n,pr[i]);
        }

    }
    if (X > 1)
        setunion(n,X);
}

int main()
{
    fastread;
#ifdef UIU_OLT
    read;
    //write;
#endif

    sieve();
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        FOR(i,N)par[i]=i;
        mem(visited,0);

        int n,cnt=0;
        cin>>n;
        int ar[n+6];
        FOR(i,n)
        {
            cin>>ar[i];
            if(ar[i]==1)cnt++;
            if(lp[ar[i]])prfact(ar[i]);
        }
        FOR(i,n)
        {
            int root = setfind(ar[i]);
            if(ar[i]>1)
            {
                if(!visited[root])cnt++;
                visited[root]=1;
            }
        }
        cout<<"Case "<<cs++<<": "<<cnt<<"\n";
    }

return 0;
}


