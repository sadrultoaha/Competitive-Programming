/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

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

    int n,m,cn=0;
    cin>>n>>m;
    while(n<m)
    {
        if(m%(n*2)==0){n*=2;}
        else {n*=3;}
        cn++;
    }
    if(n==m)
    cout<<cn<<"\n";
    else cout<<"-1\n";

}
