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
int t[1000][1000];
int vis[1000][1000];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void BFS(int R,int C,int sr,int sc,int dr,int dc)
{
    queue<pii>Q;
    Q.push(mp(sr,sc));
    vis[sr][sc]=0;
    t[sr][sc]=0;
    while(!Q.empty())
    {
        pii u=Q.front();
        Q.pop();
        FOR(i,4)
        {
            int tr=u.ft+dx[i];
			int tc=u.sd+dy[i];
			if(tr>=0 && tr<R && tc>=0 && tc<C && vis[tr][tc]==-1)
			{
				vis[tr][tc]=1;
				t[tr][tc]=t[u.ft][u.sd]+1;
				Q.push(mp(tr,tc));
				if(tr==dr && tc==dc)return;
			}
        }
    }
}

int main()
{
#ifdef SunWalker
    read;
   //write;
#endif
    fastread;
    int R,C;
    while(cin>>R>>C)
    {
        if(R==0 && C==0)continue;
        mem(vis,-1);
        int row,x,y,n,sr,sc,dr,dc;
        cin>>row;
        FOR(i,row)
        {
            cin>>x>>n;
            FOR(j,n)
            {
                cin>>y;
                vis[x][y]=1;
            }
        }
        cin>>sr>>sc;
        cin>>dr>>dc;
        BFS(R,C,sr,sc,dr,dc);
        cout<<t[dr][dc]<<"\n";

    }

return 0;
}

