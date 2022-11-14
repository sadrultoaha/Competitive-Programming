#include<bits/stdc++.h>
using namespace std;
#define ll         long long
#define forn(i, n) for(int i = 0; i < n; i++)
#define fort(i, n) for(int i = 1; i <= n; i++)
#define all(x)     x.begin(), x.end()
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
#define FastRead   ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);

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


ll phi_2(int a, int b, int m) {

     ll ans =0;
     for (int j = 0; j <= m; j++)
    {
        ll n = j;
        ll result = n;
        for (int i = 2; i * i <= n; i++) {
            ll I = i+a;
            n = i + b;
            result = n;
            if (n % I == 0) {
                while (n % I == 0)
                    n /= I;
                result -= result / I;
            }
        }
        if (n > 1)
            result -= result / n;

        ans+=result;
    }
    return ans;
}
vector<ll> phi(10000);
void phi_n(ll n) {
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

ll d, x, y;
void extendedEuclid(ll A, ll B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}



ll a,b,m,gc,cnt;
int main()
{

read("in.txt");

   int t,x=1;
   scanf("%d",&t);
   while(t--)
    {
            a,b,m;
            scanf("%lld %lld %lld",&a,&b,&m);
            cnt =0;
            for(int i=0;i<=m;i++)
            {
                cnt+=n_phi(a,b,i);
                //extendedEuclid(i+a,i+b);
                //if(d==1)
                //    cnt ++;
            }
            printf("Case %d: %lld\n",x++,cnt);

    }
    return 0;

}



