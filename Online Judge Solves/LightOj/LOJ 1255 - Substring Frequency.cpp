#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define fastio {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
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



int prefix_function(string s,int lk) {
    int n = (int)s.length();
    vector<int> pi(n);
    bool ok = false;
    int ans = 0;
    for (int i = 1; i < n; i++) {

        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;

        if(ok && j==lk)ans++;
        if(s[i]=='#')ok=true;
    }
    //for(auto x:pi)cout<<x<<" ";
    return ans;
}


int main()
{
    fastio;
#ifdef AadhareAlo
    in;
    //out;
#endif
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        string text,key;
        cin>>text>>key;
        string tmp = key + '#' + text;
        int lk = key.size();
        cout<<"Case "<<cs++<<": ";
        cout<<prefix_function(tmp,lk)<<"\n";
    }
return 0;
}


