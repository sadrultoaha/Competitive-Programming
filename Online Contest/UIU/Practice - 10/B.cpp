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

    int col;
    while(cin>>col){
    string msg,nmsg="",tmp="";
    string res[20];
    cin>>msg;
    int k=0;
    int rev = 0;
    for(int i=0,j=0;i<msg.size();i++,j++)
    {
        tmp+=msg[i];
        if(j==col-1){if(rev){reverse(tmp.begin(),tmp.end());}res[k]=tmp;k++;tmp="";j=-1;rev ^=1;}
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<k;j++)
        {
            cout<<res[j][i];
        }
    }
    cout<<"\n";
    }
}

