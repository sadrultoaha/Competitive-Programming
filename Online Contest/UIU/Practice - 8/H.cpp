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

    int n,ar[105];
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    int mi=LONG_MAX;

    for(int i=1;i<n-1;i++)
    {
        int ans=0;
        for(int j=0,k;j<n-1;j++)
        {
            if( j==i-1 )k=j+2;
            else k = j+1;
            ans = max(ans,abs(ar[j]-ar[k]));
        }
        mi = min(mi,ans);
    }

    cout<<mi<<"\n";
}

