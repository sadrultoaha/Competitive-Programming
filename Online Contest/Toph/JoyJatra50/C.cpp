#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define INF             2e16
#define ll              long long
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()
#define FOR(i,N) for(int i=0;i<N;i++)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)

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
    fastio;
#ifdef AadhareAlo
    //in;
    //out;
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,arr[100005];
        vector<pair<int,int>>vc;
        vector<int>pos;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]==i)pos.push_back(i);
        }


        for(int i=0;i<pos.size();i++)
        {
            if(k<=0)break;
            int j = pos[i];
            if(arr[i]==i)
            {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                vc.push_back(make_pair(i,i+1));
                k--;
                i++;
            }

        }
        cout<<vc.size()<<"\n";
        for(auto x: vc)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
return 0;
}


