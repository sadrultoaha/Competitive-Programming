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
#define inf             2e16

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

struct Node
{
    int node,cost,par;
    Node()
    {
        node = 0;
        cost = 0;
        par = 0;
    }
    Node(int _a, int _b, int _c):node(_a),cost(_b),par(_c){}
    bool operator< (const Node &A) const{ return cost > A.cost;}
};

int dist[3*107], visited[3*107];
vector<Node>G[3*107];
void dijk(int s,int time, int sz)
{
    mem(visited,0);
    mem(dist,sz+7);
    dist[s]=0;
    Node nd (s,0,-1);
    priority_queue<Node>Q;
    Q.push(nd);
    while(!Q.empty())
    {
        int cn = Q.top().node;
        int dst = dist[cn];
        Node tp = Q.top();
        Q.pop();

        if(visited[cn]) continue;
        FOR(i,G[cn].size())
        {
            int n =  G[cn][i].node;
            int c =  G[cn][i].cost;
            if(dst+c <= dist[n])
            {
                dist[n] = dst+c;

            }
            Q.push(Node (n,dist[n],cn));
        }
        visited[cn]=1;
    }

    int countMice=0;

    for (int cc = 0; cc < sz; ++cc)
        if(dist[cc]<=time) countMice++;
    cout<<countMice<<"\n";
}


int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;
#endif

    int T;
    cin>>T;
    for (int t = 0; t < T; ++t)
    {
        if (t)  cout << '\n';
        int v,ex,tm,ed;
        cin>>v>>ex>>tm>>ed;
        int x,y,w;
        for(int i=0;i<ed;i++)
        {
            cin>>x>>y>>w;
            G[x-1].pb(Node(y-1,w,-1));
            G[y-1].pb(Node(x-1,w,-1));
        }
        dijk(ex-1,tm,v);
        /*
        for (auto& v : G) {
        v.clear();
        }
        for (auto& v : P) {
        v.clear();
        }
        */
    }


    return 0;
}

