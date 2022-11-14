
#include<bits/stdc++.h>
using namespace std;
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
#define ll long long
#define ull unsigned long long

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

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

ull base[MAX/64], segment[RNG/64], primes[LEN];

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

/* Generates all the necessary prime numbers and marks them in base[]*/
void sieve()
{
    ull i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j);
    for(i=3, j=0; i<MAX; i+=2)
        if(!chkC(base, i))
            primes[j++] = i;
}

/* Returns the prime-count within range [a,b] and marks them in segment[] */
ll segmented_sieve(ll a, ll b)
{
    ull i, j, k, cnt = (a<=2 && 2<=b)? 1 : 0;
    if(b<2) return 0;
    if(a<3) a = 3;
    if(a%2==0) a++;
    mset(segment,0);
    for(i=0; sq(primes[i])<=b; i++)
    {
        j = primes[i] * ( (a+primes[i]-1) / primes[i] );
        if(j%2==0) j += primes[i];
        for(k=primes[i]<<1; j<=b; j+=k)
            if(j!=primes[i])
                setC(segment, (j-a));
    }
    for(i=0; i<=b-a; i+=2)
        if(!chkC(segment, i))
            cnt++;
    return cnt;
}

int main()
{
  ll T,in,im;
  cin>>T;
  while(T--)
  {
    scanf("%lld %lld",&in,&im);
    cout<<segmented_sieve(in,im);
    printf("\n");
  }
  return 0;
}

