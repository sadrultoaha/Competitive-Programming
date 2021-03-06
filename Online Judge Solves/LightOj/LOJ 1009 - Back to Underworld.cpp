/**
    author: SadrulToaha
    status:
**/

#include<bits/stdc++.h>
using namespace std;

/****** Type Define *********/


    typedef int LL;
    typedef unsigned long long ULL;
    typedef long double          LD;

    typedef vector<int>        VCI;
    typedef vector<LL>         VCLL;
    typedef vector<double>     VCD;
    typedef vector<string>     VCS;
    typedef vector< VCI >       VCVCI;
    typedef vector< VCD >       VCVCD;

    typedef map<int,int>       MPII;
    typedef map<char,char>     MPCC;
    typedef map<char,int>      MPCI;

    typedef set<int>           STI;
    typedef multiset<int>      MSTI;

    typedef pair<int,int>      PRII;
    typedef pair<int,char>     PRIC;
    typedef pair<LL,LL>        PRLL;



/****** STL Commands *********/

    #define PB              push_back
    #define POB             pop_back
    #define MKPR            make_pair
    #define CLR(a)          memset(a,0,sizeof(a))
    #define SET(a)          memset(a,-1,sizeof(a))
    #define ALL(x)          x.begin(), x.end()
    #define RALL(x)         x.end(), x.begin()

/****** Constants *********/

    #define GOLD ((1+sqrt(5))/2)
    #define PI              acos(-1.0)
    #define EPS             1e-9
    #define INF             2e18
    #define MOD 1000000007
    #define MX 1000000

/****** Operations *********/
    #define IN freopen("IN.txt","r",stdin)
    #define OUT freopen("OT.txt","w",stdout)

    #define on(n,pos) (n  (1LL<<(pos)))
    #define off(n,pos)  n & ~(1LL<<pos)
    #define ison(n,pos) (bool)(n & (1LL<<(pos)))

    #define SCNI(x)         scanf("%d",&x)
    #define SCNII(x,y)      scanf("%d%d",&x,&y)
    #define SCNLL(x)        scanf("%lld",&x)
    #define SCND(x)         scanf("%lf",&x)
    #define SCN64(x)        scanf("%I64"&x)

    #define PRNI(x)         printf("%d",x);
    #define PRNLL(x)        printf("%lld",x);
    #define PRND(x)         printf("%lf",x);
    #define PRN64(x)        printf("%I64",x);



/******************************************* END ******************************************/


vector<int> adj[20010];
LL visited[20010];

LL bfs(LL s)
{
    queue<LL> Q;
    Q.push(s);
    visited[s] = 1;
    LL ca=1;
    LL cb=0;
    while(!Q.empty())
    {
            LL u = Q.front();
            Q.pop();
            for(LL i = 0; i < adj[u].size(); i++)
            {
                    LL v = adj[u][i];
                    if(visited[v]==-1)
                    {
                        visited[v]=1-visited[u];
                        Q.push(v);
                        if(visited[v]==1)ca++;
                        else cb++;
                    }
            }
    }
    int why=max(ca,cb);
    return why;
}
LL mak[20010];
int main()
{
    LL t;
    SCNI(t);
    for(LL l=1;l<=t;l++)
    {
        CLR(mak);
        for(int i=0;i<20010;i++)
            adj[i].clear();

        LL edg,st,en;
        SCNI(edg);
        for(LL i=0;i<edg;i++)
        {
            SCNII(st,en);
            adj[st].PB(en);
            adj[en].PB(st);
            mak[st]=1;
            mak[en]=1;
        }
        SET(visited);
        LL ans=0;
        for(LL f=1;f<=20000;f++)
        {
            if(mak[f]==1)
               if(visited[f]==(-1))
                    ans+=bfs(f);
        }
        printf("Case %d: %d\n",l,ans);
    }
return 0;
}