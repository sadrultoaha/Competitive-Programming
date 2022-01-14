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
    int T;
    int cnt=0;
    cin>>T;
    while(T--)
    {
        double l,w,d,wei,sum3;

        cin>>l>>w>>d>>wei;
        sum3= l+w+d;
        if((l<=56 && w<=45 && d<=25 && wei <= 7) || ( sum3<=125 && wei <=7 ))
        {
            cout<<'1'<<"\n";
            cnt++;
        }
        else cout<<'0'<<"\n";
    }
    cout<<cnt<<"\n";


}
