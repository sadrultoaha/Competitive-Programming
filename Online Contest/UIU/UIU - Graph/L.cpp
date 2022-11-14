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

namespace AP {
    const int NMAX = 110;
    vector<pair<int, int> > bridges;
    int low[NMAX], num[NMAX], parent[NMAX], counter, root, rootc;

    bool visited[NMAX];
    int ap[NMAX];

    void clear() {
        mem(visited, 0); mem(ap, 0); mem(low, -1); mem(num, -1); mem(parent, 0);
        counter = 0; rootc = 0;
        bridges.clear();
    }

    void find(vector<int>const (&G)[NMAX], int u) {
        visited[u] = true;
        if(u==root)rootc = 0;
        low[u] = num[u] = counter++;
        for (auto v: G[u]) {
            if (!visited[v]) {
                parent[v] = u;
                if (u == root)rootc++;
                find(G, v);

                if (low[v] >= num[u])ap[u]++;

                if (low[v] > num[u]) {
                    int k = u, l = v;
                    if (k > l)swap(k, l);
                    bridges.pb({k, l});
                }
                low[u] = min(low[u], low[v]);
            } else if (v != parent[u]) {
                low[u] = min(low[u], num[v]);
            }
        }
        if(u==root && rootc < 2) ap[root] = 0;
    }
}

int main() {

#ifdef SunWalker
    read;
   //write;
#endif
    fastread;
    int n;
    while (cin >> n)
    {

        stringstream input;
        string st;
        vector<int> G[110];
        int u,v;
        getline(cin, st);
        FOR(i,n) {
            getline(cin, st);
            input.clear();
            input.str(st);
            input >> u;
            input >> st;
            while (input >> v) {
                G[u].pb(v);
            }
        }
       AP::clear();
       FOR(i,n) {
            if (AP::visited[i])continue;
            AP::root = i;
            AP::find(G, i);
        }
        sort(AP::bridges.begin(), AP::bridges.end());
        cout << AP::bridges.size() << " critical links\n";
        FOR(i,AP::bridges.size())cout << AP::bridges[i].ft << " - " << AP::bridges[i].sd << "\n";
        cout << "\n";
    }
}
