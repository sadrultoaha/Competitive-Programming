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
    long long n,m,x,sum=0,sum2=0,a,d;
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>x;if(i==0)a=x;sum+=x;}
    for(int i=0;i<m;i++)
    {
        cin>>d;

        if(sum==sum2){cout<<"YES\n"<<a<<" "<<d<<"\n";return 0;}
    }
    cout<<"NO\n";

}

