
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

    int n,t,ar[101];
    cin>>n>>t;
    for(int i=0;i<100;i++)
        ar[i]=1000000;

    for(int i=0,j=0;i<n;i++)
    {
        int f,in,tm=0;
        cin>>f>>in;
        tm=f;

        while(1)
        {
            ar[j]=tm;
            if(tm>=t)break;
            tm+=in;
        }
        j++;
    }
    int mn=1000000,ans=0;
    for(int i=0;i<100;i++)
    {
        if(ar[i]<mn)
        {
            mn=ar[i];

            if(mn>=t){ans=i+1;}
        }
    }
    cout<<ans<<"\n";


}
