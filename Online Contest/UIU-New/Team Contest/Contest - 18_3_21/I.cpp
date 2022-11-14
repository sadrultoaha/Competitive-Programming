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


struct ed
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;

    struct ed* edge;
};

struct Graph* newGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new ed[E];
    return graph;
}

void BF(struct Graph* graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];

    FOR(i,V)
        dist[i]   = INT_MAX;
    dist[src] = 0;

    FOR1(i,1,V-1)
    {
        FOR(j,E)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }
    bool tru=false;
    FOR(i,E)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
            tru=true;

    }
      if(tru){cout<<"possible\n";}
      else cout<<"not possible\n";

    return;
}


int main()
{

fastread;
#ifdef SunWalker
    //read;
    //write;
#endif

    int T;
    cin>>T;
    while(T--)
    {
        int V,E;
        cin>>V>>E;
        struct Graph* graph = newGraph(V, E);
        FOR(i,E)
        {
            int x,y,w;
            cin>>x>>y>>w;
            graph->edge[i].src = x;
            graph->edge[i].dest = y;
            graph->edge[i].weight = w;
        }

        BF(graph, 0);
    }

    return 0;
}

