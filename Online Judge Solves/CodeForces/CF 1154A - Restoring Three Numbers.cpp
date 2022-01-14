
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
   //read;
    ll x,y,z,w;
    cin>>x>>y>>w>>z;
    ll sum = max(x,max(y,max(w,z)));
    ll a=0,b=0,c=0,d=0;

    if(sum!=x){a=sum-x;}
     if(sum!=y){b=sum-y;}
      if(sum!=w){c=sum-w;}
       if(sum!=z){d=sum-z;}

    if(a>0)cout<<a<<" ";
    if(b>0)cout<<b<<" ";
    if(c>0)cout<<c<<" ";
    if(d>0)cout<<d<<" ";
    cout<<"\n";


}
