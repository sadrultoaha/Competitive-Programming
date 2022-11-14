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
struct node
{
    int u,time,cost;
    node(int _u, int _time,int _cost)
    {
        u = _u;
        cost = _cost;
        time = _time;
    }
    bool operator < ( const node& p ) const {return  cost> p.cost;}

};
int dijkstra(int n, vector<int>src[], vector<int>cost[], vector<int>time[], int source,int dest)
{
    priority_queue<node>q;
    q.push(node(source,18,0));
    while(!q.empty())
    {
        node top = q.top();
        q.pop();
        int u=top.u;
        if (u == dest)
			return top.cost;

        for(int i=0;i<(int)src[u].size();i++)
        {
            int v=top.cost;

            if (top.time > time[u][i])v++;
            q.push(node(src[u][i],cost[u][i],v));
        }
    }
    return -1;
}
int main()
{
    fastread;
    #ifdef SunWalker
        read;
       //write;
    #endif
     int T,n,cs=1;
     cin>>T;
     while(T--)
     {
          cin>>n;
          map<string,int>city;
          vector<int>G[500],cost[500],time[500];
          string src,dest;
          int st,tm,ct=0,u,v;
          cout<<"Test Case "<<cs++<<".\n";
          FOR(i,n)
          {
               cin>>src>>dest>>st>>tm;
               st += (st <= 6 ? 24 : 0);
               if (st >= 18 && (st + tm) <= (24 + 6))
               {
                    if(city[src]==0)city[src]=++ct;
                    if(city[dest]==0)city[dest]=++ct;
                    u=city[src];
                    v=city[dest];
                    G[u].pb(v);
                    cost[u].pb(st+tm);
                    time[u].pb(st);
               }
          }
           cin>>src>>dest;
           if(src==dest){cout << "Vladimir needs 0 litre(s) of blood." << "\n";continue;}
           if(city[src]==0 || city[dest]==0){cout << "There is no route Vladimir can take." << "\n";continue;}

           u=city[src],v=city[dest];
           int blood = dijkstra(n,G,cost,time,u,v);

           if(blood==-1)cout<<"There is no route Vladimir can take.\n";
           else cout<<"Vladimir needs "<<blood<<" litre(s) of blood.\n";
     }
return 0;
}

