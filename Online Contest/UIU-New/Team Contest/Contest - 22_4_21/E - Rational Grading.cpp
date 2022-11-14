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
    int OctToDec(int x)
    {
        int ans=0,i=0;
        while(x>0)
        {
            ans += (x%10)*pow(8,i++);
            x/=10;
        }
        return ans;
    }
    int HexToDec(string hx)
    {
        int ans=0,i=0,len = hx.size();
        int base = 1;
        for (int i=len-1; i>=2; i--) {
          if (hx[i]>='0' && hx[i]<='9') {
             ans += (hx[i] - 48)*base;
             base = base * 16;
          }
          else if (hx[i]>='A' && hx[i]<='F') {
             ans += (hx[i] - 55)*base;
             base = base*16;
          }
        }
        return ans;
    }

    int main()
    {
        fastread;
    #ifdef UIU_OLT_V2
        read;
        //write;
    #endif
        int t,x;
        string xt;
        while(cin>>xt>>t,!(xt=="0" && t==0)){
            stringstream geek(xt);
            geek >> x;
            if(xt[0] == '0' && xt[1]=='x')x = HexToDec(xt);
            else if(xt[0]=='0')x = OctToDec(x);
            string op;
            int out,exp = x,ans = t;
            //dbg(xt,x,t)
            FOR(i,t)
            {
                cin>>op>>out;

                if(op == "++i"){++exp;if(exp!=out){ans--;exp = out;}}
                else if(op == "i++"){if(exp!=out){ans--;exp = out;}exp++;}
                else if(op == "i"){exp = exp;if(exp!=out){ans--;exp = out;}}
                else if (op == "i--"){if(exp!=out){ans--;exp = out;}exp--;}
                else {--exp;if(exp!=out){ans--;exp = out;}}

            }
            cout<<ans<<"\n";
        }

    return 0;
    }

