/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define ll long long
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


    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll x=0,y=0;
        int fx;
        scanf("%d",&fx);
        for(int i=1;i<=61;i++)
        {
            ll p = sqrt(y)+1;
            y+= p*p;
            x=p;
            if(x==fx){printf("%d\n",i);break;}
            if(x>fx){printf("%d\n",i-1);break;}

        }
    }
    return 0;

}

