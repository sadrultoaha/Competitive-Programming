#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define INF             2e16
#define ll              long long
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()
#define FOR(i,N) for(int i=0;i<N;i++)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)

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

ll newcost=0;
struct Edge
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;

    struct Edge* edge;
};


struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}
struct subset
{
    int parent;
    int rank;
};

int find(struct subset subsets[], int i)
{

    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}


void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);


    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;

    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

void KruskalMST(struct Graph* graph)
{
    int V = graph->V;
    struct Edge result[V];
    int e = 0;
    int i = 0;

    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);

    struct subset *subsets =
        (struct subset*) malloc( V * sizeof(struct subset) );

    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < V - 1)
    {

        struct Edge next_edge = graph->edge[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);


        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }
    for (i = 0; i < e; ++i)
        newcost+=result[i].weight;
    return;
}
int main()
{
    fastio;
#ifdef AadhareAlo
    //in;
    //out;
#endif
    int n,m;
    while(cin>>n>>m,!(n==0&&m==0))
    {
        ll regcost = 0;
        struct Graph* graph = createGraph(n, m);
        FOR(i,m)
        {
            int x,y,z;
            cin>>x>>y>>z;
            regcost+=z;
            graph->edge[i].src = x;
            graph->edge[i].dest = y;
            graph->edge[i].weight = z;
        }
        KruskalMST(graph);
        cout<<regcost-newcost<<"\n";
        newcost = 0;
    }

return 0;
}


