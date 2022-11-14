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
bool isPrime(int x) {
    if(x<=1) return false;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}
int main()
{
    read;
    int T;
    cin>>T;
    for(int cs =1;cs<=T;cs++)
    {
        map<char,int>mp;
        string str;
        bool found=false;
        cin>>str;
        for(int i=0;i<str.size();i++)mp[str[i]]++;
        cout<<"Case "<<cs<<": ";
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<"\n";
            if(isPrime(it->second)){cout<<it->first;found=true;}
        }
        if(!found)cout<<"empty";
        cout<<"\n";

    }

}

