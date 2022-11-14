/* *********************************************************************
   *                                                                   *
   * Solved By : UIU_Asteroids                                         *
   * Team Member : Imu, Uchchash, Toaha                                *
   *                                                                   *
   *********************************************************************
*/
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
#define MAX 50001
#define LMT 216
#define LEN 4830
#define RNG 500010
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
unsigned base[MAX / 64], primes[LEN];
int h[RNG],rmx[MAX];
void sieve() {
	unsigned i, j, k;
	for (i = 3; i<LMT; i += 2)
		if (!chkC(base, i))
			for (j = i*i, k = i << 1; j<MAX; j += k)
				setC(base, j);
	primes[0] = 2; j = 1;
	for (i = 3; i<MAX; i += 2)
		if (!chkC(base, i))
			primes[j++] = i;
     for(int x;x<=j;x++)h[primes[x]]=x;
}


int main()
{
#ifdef SunWalker
    //read;
   //write;

#endif
     sieve();

     int n,q,arr[500010],mlt[500010];
     cin>>n>>q;
     FOR(i,n)cin>>arr[i];
     rmx[n+1]
return 0;
}

