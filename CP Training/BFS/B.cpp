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

int vis[8][8];
int dx[] = {2,2,-2,-2,1,1,-1,-1};
int dy[] = {1,-1,1,-1,2,-2,2,-2};
//char G[8][8];
int mvs[8][8];
void BFS(int sr,int sc)
{
    mem(vis,-1);
    queue<pii>Q;
    Q.push(mp(sr,sc));
    vis[sr][sc]=0;
    mvs[sr][sc]=0;
    while(!Q.empty())
    {
        pii u=Q.front();
        Q.pop();
        FOR(i,8)
        {
            int tr=u.ft+dx[i];
			int tc=u.sd+dy[i];
			if(tr>=0 && tr<8 && tc>=0 && tc<8 && vis[tr][tc]==-1)
			{
				vis[tr][tc]=1;
				mvs[tr][tc]=mvs[u.ft][u.sd]+1;
				Q.push(mp(tr,tc));
				//if(G[tr][tc]=='d')return;
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
int sr,dr;
char sc,dc;
while(cin>>sc>>sr>>dc>>dr)
{
    /*
    FOR(i,8)
    {
        FOR(j,8)
            G[i][j]='-';
    }
    */
    sc-=96,dc-=96;
    sc--,dc--,sr--,dr--;
    //G[sr][sc]='s';
    //G[dr][dc]='d';
    BFS(sr,sc);
    int ans = mvs[dr][dc];
    sc++,dc++,sr++,dr++;
    sc+=96,dc+=96;
    cout<<"To get from "<<sc<<sr<<" to "<<dc<<dr<<" takes "<<ans<<" knight moves.\n";
}


return 0;
}

