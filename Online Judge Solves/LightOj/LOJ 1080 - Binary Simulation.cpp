#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define mem(a,b)        memset(a,b,sizeof(a))
#define EPS             1e-9
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
#define all(x)          x.begin(), x.end()


#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<endl;}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " " ;
        call(++it, rest...);
    }
};
#define MAX 100010



struct BIT_RUPQ {
    ll bit[MAX];
    int N;

    void init(int n) {
        mem(bit, 0);
        N = n;
    }
    // add 'value' to each element in range [i..N]
    void add(int i, ll value) {
        for (; i < N; i |= i + 1) bit[i] += value;
    }
    // add 'value' to each element in range [a..b]
    void add(int a, int b, ll value) {
        add(a, value);
        add(b + 1, -value);
    }
    // return value of bit[i]
    ll get(int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1) res += bit[i];
        return res;
    }
};

BIT_RUPQ bit_rupq;

int  main()
{
    read;
    int t, cs=1;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d:\n", cs++);
        int q,x,y,len;
        char ch;
        string str;

        getchar();
        getline(cin, str);
        len = str.size();

        bit_rupq.init(len);

        FOR(i,len)
        {
            if(str[i]=='1')bit_rupq.add(i,i,1);
        }
        scanf("%d",&q);
        while(q--)
        {
            getchar();
            scanf("%c", &ch);
            if(ch == 'I')
            {
                scanf("%d%d",&x,&y);
                x--;
                y--;
                bit_rupq.add(x,y,1);
            }
            else
            {
                scanf("%d",&x);
                x--;
                printf("%d\n", bit_rupq.get(x)&1 ? 1:0);
            }
        }
    }


}













