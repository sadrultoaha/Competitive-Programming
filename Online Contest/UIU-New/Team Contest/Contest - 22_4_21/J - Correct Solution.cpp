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
int arr[100],i=0,sum=0;
void func(int n)
{
    while(n>0)
    {
        arr[i++] = n%10;
        sum += n%10;
        n/=10;
    }
}

int main()
{
    //fastread;
#ifdef UIU_OLT_V2
    //read;
    //write;
#endif

    int n;
    string m;
    cin>>n>>m;
    func(n);
    sort(arr,arr+i);
    string zer = "", ans="";
    bool flag=true,ok=true;
    FOR(j,i)
    {
        if(arr[j]==0 && flag)zer+='0';
        else if(arr[j]>0 && flag && ok) {
            flag = false;
            ok = false;
            ans+= to_string(arr[j]);
            ans+=zer;
        }
        else{
            ans+=to_string(arr[j]);
        }
    }
    if(i==0)
    {
        if(m!="0")cout<<"WRONG_ANSWER\n";
        else cout<<"OK\n";
        return 0;
    }
    if(m==ans)cout<<"OK\n";
    else cout<<"WRONG_ANSWER\n";
return 0;
}




