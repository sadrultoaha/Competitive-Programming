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

string value[13]={"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
string suit[4]={"Clubs","Diamonds","Hearts","Spades"};
int n;
char ch[1000];
int change[110][55];
int card[55];
void track(int x)
{
    int temp[55];
    FOR1(i,1,52)
    {
        int idx = change[x][i];
        temp[i] = card[idx];
    }
    FOR1(i,1,52)card[i]=temp[i];

}

int main()
{
    //fastread;
#ifdef SunWalker
    read;
    //write;
#endif
   int t;
   cin>>t;
   while(t--)
   {
       cin>>n;
       FOR1(i,1,n)
       {
           FOR1(j,1,52)
           {
               cin>>change[i][j];
           }
       }
       FOR1(i,1,52)
       {
           card[i]=i;
       }
       getchar();
       while(gets(ch)&&ch[0]!=NULL)
       {
           int sum;
           //cin>>sum;
           sscanf(ch,"%d",&sum);
           track(sum);
       }
       FOR1(i,1,52)
       {
           int id = card[i]-1;
           cout<<value[id%13]<<" of "<<suit[id/13]<<"\n";
       }
        if(t)cout<<"\n";
   }
}


