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

    long long T;
    cin>>T;
    for(int cs=1;cs<=T;cs++)
    {
       long long n,m=1;
       cin>>n;
       if(!(n&1))
       {
           while(!(n&1))
           {
               m *= 2;
               n /= 2;
           }
           cout<<"Case "<<cs<<": "<<n<<" "<<m<<"\n";
       }
        else cout<<"Case "<<cs<<": Impossible\n";


    }


}
