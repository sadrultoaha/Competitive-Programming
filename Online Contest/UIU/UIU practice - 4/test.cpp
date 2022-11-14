/* *********************************************************************
   *                                                                   *
   * Solved By : UIU_Asteroids                                         *
   * Team Member : Imu, Uchchash, Toaha                                *
   *                                                                   *
   *********************************************************************
*/
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
bool graph[50][50];

bool isSafe (int V,int v,int color[], int c)
{
	for (int i = 0; i < V; i++)
		if (graph[v][i] && c == color[i])
			return false;
	return true;
}

bool graphColoringUtil(int V,int m, int color[], int v)
{

	if (v == V)
		return true;

	for (int c = 1; c <= m; c++)
	{
		if (isSafe(V,v,color, c))
		{
		color[v] = c;

		if (graphColoringUtil (V,m, color, v+1) == true)
			return true;


		color[v] = 0;
		}
	}

	return false;
}


bool graphColoring(int V,int m)
{

	int color[V];
	for (int i = 0; i < V; i++)
	color[i] = 0;

	if (graphColoringUtil(V,m, color, 0) == false)
	{
          return false;
	}

	return true;
}


int main()
{
     fastread;
     int T,cs=1;
     int E,V,u,v;
     string str,x,y;
     map<string,int>nm;
     cin>>T;
     while(T--)
     {
          cin>>V>>E;
          FOR(i,V)
          {
               FOR(j,V)
               {
                    graph[i][j]=false;
               }
          }
          FOR(i,V)
          {
               cin>>str;
               nm[str]=i;
          }
          FOR(i,E)
          {
               u,v;
               cin>>x>>y;
               u=nm[x];
               v=nm[y];
               graph[u][v]=true;
               graph[v][u]=true;
          }
      int m = 3;
      cout<<"Case "<<cs++<<": ";
	 if(graphColoring (V,m)==false)cout<<"Valar Morghulis\n";
      else cout<<"Valar Dohaeris\n";
     }
	return 0;
}

