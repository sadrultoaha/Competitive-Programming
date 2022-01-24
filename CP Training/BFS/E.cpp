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

vector<int>G[10007];
map<int,string>name;
map<string,int>nod;
int lst[10007];
bool vis[10007];
int c=0;
int BFS(int s1,int s2)
{
    queue<int>Q;
    Q.push(s1);
    vis[s1]=1;
    lst[s1]=s1;
    while(!Q.empty())
    {
        int u=Q.front();
        if(s2==u )return 1;
        Q.pop();
        FOR(i,G[u].size())
        {
            int v=G[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                Q.push(v);
                lst[v]=u;
            }
        }
    }
    return -1;
}

void print(int a,int b)
{
    if(a==b)return;
    print(lst[a],b);
    cout<<name[lst[a]]<<" "<<name[a]<<"\n";
}

int main()
{
#ifdef SunWalker
    read;
   //write;
#endif
    int n,fl=0;
    while(cin>>n)
    {

        if(fl)cout<<"\n";
        fl=1;
        string str1,str2;
        FOR(i,n)
        {

            cin>>str1>>str2;
            if(nod[str1]==0)
            {
                nod[str1]=c++;
                name[nod[str1]]=str1;
            }
            if(nod[str2]==0)
            {
                nod[str2]=c++;
                name[nod[str2]]=str2;
            }
            G[nod[str1]].pb(nod[str2]);
            G[nod[str2]].pb(nod[str1]);
        }
        cin>>str1>>str2;
        int vr = BFS(nod[str1],nod[str2]);
        if(vr)print(nod[str2],nod[str1]);
        else  cout<<"No route\n";

        FOR(i,c+5)
        {
            G[i].clear();
            vis[i]=lst[i]=0;
        }
        name.clear();
        nod.clear();
        c=0;

    }

return 0;
}

