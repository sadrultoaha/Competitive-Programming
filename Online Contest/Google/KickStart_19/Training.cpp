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

int main()
{

    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N,P,stu[100010];
        map<int,int>mp;
        cin>>N>>P;
        for(int j=0;j<N;j++)
        {
            cin>>stu[j];
            mp[stu[j]]++;
        }

        int cnt=0,time=0,j=0,m[100010],l=100000;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<"\n";
            if(cnt+it->second>=P)
            {m[it->first]=abs(P-cnt);cnt=P;j=max(j,it->first);l=min(l,it->first);}
            else if(cnt+it->second<P)
            {m[it->first]=it->second;cnt+=it->second;j=max(j,it->first);l=min(l,it->first);}
            if(cnt==P)break;
        }
        int res=0;
        for(int k=j;k>=l;k--)
        {
            //cout<<m[k]<<" ";
            time+=abs(j-k)* m[k];
        }

        cout<<"Case #"<<i<<": "<<time<<"\n";
    }

}
