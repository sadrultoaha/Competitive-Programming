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
    //fastread;
#ifdef SunWalker
    read;
    //write;
#endif

    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int curd,curm,cury,birthd,birthm,birthy;
        scanf("%d/%d/%d",&curd,&curm,&cury);
        scanf("%d/%d/%d",&birthd,&birthm,&birthy);

        int p=0;
        if(cury>birthy)
            p=1;
        else if(cury==birthy)
        {
            if(curm>birthm)
                p=1;
            else if(curm==birthm)
            {
                if(curd>=birthd)
                    p=1;
            }
        }
        if(p==0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(p==1)
        {
            int ans;
            if(curm>birthm)
                ans=cury-birthy;
            else if(curm==birthm)
            {
                if(curd>=birthd)
                    ans=cury-birthy;
                else
                    ans=cury-birthy-1;
            }
            else
                ans=cury-birthy-1;

            if(ans>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,ans);

        }
    }
}


