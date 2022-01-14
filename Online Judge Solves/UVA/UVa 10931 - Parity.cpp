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
void bin(unsigned n)
{
    unsigned i;
    bool flg=false;
    for (i = 1 << 31; i > 0; i = i / 2)
    {

        if(n & i){flg=true;printf("1");}
        else if(flg && !(n & i)){printf("0");}
    }
}
int main()
{

    int num,chk = (0 >> 0);
    int bits;
    while(cin>>num)
    {
        if(num==0)break;
        bits = __builtin_popcount (num);
        cout<<"The parity of ";
        bin(num);
        cout<<" is "<< bits <<" (mod 2).\n";
    }

}
