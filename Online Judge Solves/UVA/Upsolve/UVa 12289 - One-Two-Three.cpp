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


    int main()
    {
        fastread;
    #ifdef SunWalker
        read;
        //write;
    #endif
        int te;
        cin>>te;
        while(te--)
        {
            int o=0,t=0,len;
            string st;
            cin>>st;
            len = st.size();
            FOR(i,len){
            if(st[i]=='o'||st[i]=='n'||st[i]=='e')o++;
            else if(st[i]=='t' || st[i]=='w' || st[i]=='o')t++;
            }
            if (len==5)cout<<"3\n";
            else if(o>t)cout<<"1\n";
            else cout<<"2\n";
        }
    }

