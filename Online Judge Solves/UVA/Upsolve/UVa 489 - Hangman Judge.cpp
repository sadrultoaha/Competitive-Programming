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


int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;
#endif
    int t;
    int tab[30];
    string s,d;
    while(cin>>t,!(t==-1))
    {
        int cor=0,sto=7,to=0;
        cin>>s>>d;
        int n=s.size(),m=d.size();
        dbg(s,d,n,m)
        mem(tab,0);
        FOR(i,n){
             if(tab[s[i]-'a']==0)to++;
            tab[s[i]-'a']++;
        }
        FOR(i,m)
        {
            if(tab[d[i]-'a']){cor++;tab[d[i]-'a']=0;}
            else sto--;

            if(cor==to||sto==0)break;
        }
        cout<<"Round "<<t<<"\n";
        if(cor==to)cout<<"You win.\n";
        else if(sto>0)cout<<"You chickened out.\n";
        else cout<<"You lose.\n";
    }

}


