#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ft              first
#define sd              second
#define bn              begin
#define en              end
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()


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

int maX = 0,id;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    bool ok = false;
    for (int i = 1; i < n; i++) {

        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;

        if(j>maX && ok){maX = j; id = i;}
        if(s[i]=='#')ok=true;
    }
    return pi;
}


int main()
{
    fastread;
#ifdef UIU_OLT_V2
    read;
    write;
#endif

    int t;
    cin>>t;
    while(t--)
    {
        maX = 0;
        id = 0;
        string st,rev,tmp;
        cin>>st;
        rev = st;
        reverse(all(rev));
        tmp = st+'#'+rev;
        vector<int> idx = prefix_function(tmp);
        string ans;
        ans = st.substr(0,maX);
        reverse(all(ans));
        cout<<ans<<"\n";
    }
return 0;

}


