/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define IN freopen("IN.txt","r",stdin)
#define OUT freopen("OT.txt","w",stdout)
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

bool is_vowl(char x)
{
    char vowl[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++)
    {
        if(x==vowl[i])return true;
    }
    return false;

}
int main()
{
    fastread();
    int T;
    cin>>T;
    while(T--)
    {
        string src,des;
        cin>>src>>des;
        int cnt=0;
        int sa=src.size(),sb=des.size();
        if(sa==sb )
        {
            for(int i=0;i<sa;i++){
                if(src[i]==des[i])cnt++;
                else
                {
                    if(is_vowl(src[i])&& is_vowl(des[i]))cnt++;
                }
            }
        }
        if(cnt==sa)cout<<"Yes\n";
        else cout<<"No\n";


    }

    return 0;
}
