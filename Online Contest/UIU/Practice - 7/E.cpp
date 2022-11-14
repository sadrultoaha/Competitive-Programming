/**
    SunWalker
**/

#include<iostream>
#include<vector>
#include<algorithm>
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
    fastread();
    int T;
    cin>>T;
    for(int l=1;l<=T;l++)
    {
        vector<string>vc;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            vc.push_back(x);
        }
        sort(vc.begin(),vc.end());
        bool match=false;
        for(int k=0;k<n-1;k++)
        {
            int msz=vc[k].size();
            string tem="";
            for(int j=0;j<msz;j++)tem+=vc[k+1][j];
            if(tem==vc[k]){match=true;break;}
        }
        cout<<"Case "<<l<<": ";
        (match) ? cout<<"NO\n": cout<<"YES\n";
    }
    return 0;
}
