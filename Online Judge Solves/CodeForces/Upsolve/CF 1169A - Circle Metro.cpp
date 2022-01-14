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
    int n,a,x,b,y,cnt=0;
    cin>>n>>a>>x>>b>>y;

    for(int i=a,j=b;;i++,j--)
    {
        cnt++;
        if(cnt > abs(a-x)+1  || cnt > abs(b-y)+1)break;
        if(i==j && abs(a-i)==abs(b-j)){cout<<"YES\n";return 0;}
        if(i==n)i=0;
        if(j==1)j=n+1;
    }
    cout<<"NO\n";


}

