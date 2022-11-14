
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
    //read;

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string S,R;
        cin>>S>>R;
        int sS= S.size(),rS = R.size();

            int sc=0,rc=0;
            for(int i=0;i<sS;i++)
            {
                if(S[i]=='1')sc++;
                if(R[i]=='1')rc++;
            }
            if(sc==rc){cout<<"YES\n";}
            else {cout<<"NO\n";}

    }



}

