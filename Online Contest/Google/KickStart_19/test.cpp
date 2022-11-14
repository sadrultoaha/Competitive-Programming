
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
        cin>>N>>P;
        for(int j=0;j<N;j++)
        {
            cin>>stu[j];
        }
        sort(stu,stu+N);
        int dif=0,c=0;
        while(c!=P)
        {
            for(int j=0;j<N;j++)
            {
                for(int k=j+1;k<N;k++)
                {
                    if(abs(stu[j]-stu[k])==dif)c++;
                }
            }
            dif++;
        }

        cout<<"Case #"<<i<<": "<<dif<<"\n";
    }

}
