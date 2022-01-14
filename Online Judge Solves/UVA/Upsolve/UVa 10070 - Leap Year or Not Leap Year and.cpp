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

#define toDigit(d) d-'0'
int check(string number, int n)
{
	int length = number.length();
	int ans = 0;
	for (int i = 0; i < length; ++i){
		ans = ((ans*10)+toDigit(number[i]))%n;
	}
	return ans;

}
int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;
#endif

	string nn;
	int cs = 0;

	while (cin >> nn)
	{
		if (cs++)
			cout << "\n";

		bool ly = false;
		bool orr = true;

		if (check(nn, 400) == 0 || (check(nn, 4) == 0 && check(nn, 100) != 0))
		{
			ly = true;
			orr = false;

			cout << "This is leap year.\n";
		}

		if (check(nn, 15) == 0)
		{
			orr = false;
			cout << "This is huluculu festival year.\n";
		}

		if (ly && check(nn, 55) == 0)
				cout << "This is bulukulu festival year.\n";

		if (orr)
			cout << "This is an ordinary year.\n";
	}
}


