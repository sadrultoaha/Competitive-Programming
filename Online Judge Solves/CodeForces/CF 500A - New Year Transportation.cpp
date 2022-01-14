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

int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif

    int n,t,x;
    cin>>n>>t;
    vector<int>vc;
    FOR1(i,1,n-1){cin>>x;vc.push_back(x+i);}

    for(int i=0,c=0;c<n-1 && i<n-1;c++)
    {
        if(vc[i]==t){cout<<"YES\n";return 0;}
        if(vc[i]<=n)
            i=vc[i]-1;
    }
    cout<<"NO\n";
return 0;
}


/** BFS Version

int n,d,vis[30004],st[30004];

bool bfs()
{
    queue<int>Q;
    MEM(vis,-1);
    Q.push(1);
    int u;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        if(u==d)return true;
        u+=st[u];
        if(vis[u]==-1)
        {
            vis[u]=1;
            Q.push(u);
        }
    }
    return false;

}
int main()
{

    cin>>n>>d;
    for(int i=1;i<n;i++)cin>>st[i];
    if(bfs())cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

}

**/
