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
const int MAX=210;
const int INF=2*10e9;
bool vis[MAX][MAX][MAX];
int state[3],d,ans;
struct node
{
	int state[3];
	int val;
	node(int aa,int bb,int cc,int dd){ state[0]=aa;state[1]=bb;state[2]=cc;val=dd;}
	bool operator <(const node & x)constreturn val>x.val;
};
void dijkstra()
{
	memset(vis,0,sizeof(vis));
	priority_queue<node> q;
	q.push(node(0,0,state[2],0));
	vis[0][0][state[2]]=true;
	while(!q.empty())
	{
		node cur=q.top();
		q.pop();

		if(cur.state[0]==d || cur.state[1]==d || cur.state[2]==d)
		{
			ans=cur.val;
			return;
		}

		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i==j)	continue;
				if(!cur.state[j])	continue;
				node temp;
				int *t=temp.state;
				if(cur.state[j] + cur.state[i] > state[i])
				{
					t[i]=state[i];
					t[j]=cur.state[j] + cur.state[i] -state[i];
					t[3-i-j]=cur.state[3-i-j];
					temp.val=cur.val+state[i] - cur.state[i];
				}
				else
				{
					t[i]=cur.state[j] + cur.state[i];
					t[j]=0;
					t[3-i-j]=cur.state[3-i-j];
					temp.val=cur.val+cur.state[j];
				}
				if(!vis[ t[0] ][ t[1] ][ t[2] ])
				{
					vis[ t[0] ][ t[1] ][ t[2] ]=true;
					q.push(temp);
				}
			}
		}

	}
}
int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
	int T;
	scanf("%d",&T);
	while(T--)
	{
		ans=INF;
		scanf("%d%d%d%d",&state[0],&state[1],&state[2],&d);
		dijkstra();
		while(ans==INF)
		{
			d--;
			dijkstra();
		}
		printf("%d %d\n",ans,d);
	}
	return 0;
}
