/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))

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

    int n,d,r;
    while(cin>>n>>d>>r,!(n==0&&d==0&&r==0))
    {
        int mr[101],ev[101];
        for(int i=0;i<n;i++)
        {
            cin>>mr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>ev[i];
        }
        sort(mr,mr+n);
        sort(ev,ev+n,greater<int>());
        int ovamnt=0,len;
        for(int i=0;i<n;i++)
        {
            len = ((mr[i]+ev[i])-d);
            if(len<0)len=0;
            ovamnt += len*r;
        }

        cout<<ovamnt<<"\n";
    }


}
