    /**
        SunWalker
    **/

    #include<bits/stdc++.h>
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

        int n;
        cin>>n;
        string str;
        cin>>str;
        int c=0;
        for(int i=0;i<n-10;i++)if(str[i]=='8')c++;
        if(c-((n-10)/2)>0)cout<<"YES\n";else cout<<"NO\n";

    }

