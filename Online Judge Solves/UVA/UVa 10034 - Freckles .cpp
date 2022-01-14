
/**
    SunWalker.
**/

#include<bits/stdc++.h>
using namespace std;
#define IN freopen("IN.txt","r",stdin)
#define OUT freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define ll long long
#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
#define MAXN 200000
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

struct edge {
    int u,v;
    double w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};
int pr[MAXN];
int find(int r)
{
    return (pr[r] == r) ? r : find(pr[r]);
}
double mst(vector<edge> e,int n)
{
    sort(e.begin(), e.end());
    for (int i = 1; i <= n; i++)
        pr[i] = i;

    int count = 0;
    double s = 0;
    for (int i = 0; i < (int)e.size(); i++) {
        int u = find(e[i].u);
        int v = find(e[i].v);
        if (u != v) {
            pr[u] = v;
            count++;
            s += e[i].w;
            if (count == n - 1)
                break;
        }
    }
    return s;
}
double dist(pair<float, float> a, pair<float, float> b) {
    float x = a.first - b.first;
    float y = a.second - b.second;
    return sqrt(x * x + y * y);
}
int main()
{

    int T;
    cin>>T;
    for (int t = 0; t < T; ++t)
    {
   if (t)  cout << '\n';
        MEM(pr,0);
        vector<edge> e;
        vector< pair<double,double> > ve;
        int v;
        cin>>v;
        double x,y;
        for(int i=0;i<v;i++)
        {
            cin>>x>>y;
            ve.push_back(make_pair(x,y));
        }
        int ct=0;
        edge get;
        for (int i = 0; i < v; i++) {
            for (int j = i + 1; j < v; j++) {
                 get.u = i;
                 get.v = j;
                 get.w = dist(ve[i],ve[j]);
                 e.push_back(get);
                 ct++;
            }
        }
        printf("%0.2f\n",mst(e,ct));
    }
}
