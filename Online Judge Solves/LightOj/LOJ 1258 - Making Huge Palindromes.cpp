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

int kmp(string pattern) // 123ms
{
    int len = pattern.size();
    int lsp[len];
    lsp[0] = 0;
    for(int j=0,i=1;i<len;)
    {
        if(pattern[i]==pattern[j])
        {
            j++;
            lsp[i] = j;
            i++;
        }
        else if(j)j = lsp[j-1];
        else{
            lsp[i] = 0;
            i++;
        }
    }
    //FOR(i,len)cout<<lsp[i]<<" ";
    return lsp[len-1];
}

int prefix_function(string s) { // 198ms
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {

        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    //FOR(i,n)cout<<pi[i]<<" ";
    return pi[n-1];
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
        string st,rev,temp,ans;
        cin>>st;
        rev = st;
        reverse(all(rev));
        temp = rev+'#'+st;
        int n = prefix_function(temp);
        ans = st + rev.substr(n);
        cout<<"Case "<<cs++<<": "<<ans.size()<<"\n";
    }
return 0;
}


