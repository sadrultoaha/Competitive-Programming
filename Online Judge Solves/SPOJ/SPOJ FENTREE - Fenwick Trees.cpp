/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define in freopen("IN.txt","r",stdin)
#define OUT freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define ll long long
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
#define MAX 1001100
ll sum[2*MAX];
ll num[MAX];

void build(ll a, ll L, ll R)
{
    if(L == R)
    {
        sum[a]=num[L];
        return;
    }
    int mid = (L + R)/2;
    build(a * 2, L, mid);
    build(a * 2 + 1, mid + 1, R);
    sum[a]=sum[a*2]+sum[a * 2 + 1];
 }

 void update(ll a, ll L, ll R, ll pos, ll u)
{
    if(L == R)
    {
        sum[a] += u;
        return;
    }
    int mid = (L + R)/2;
    if(pos <= mid) update(a * 2, L, mid, pos, u);
    else update(a * 2 + 1, mid + 1, R, pos, u);

    sum[a] = sum[a * 2] + sum[a * 2 + 1];
}

 ll query(ll a, ll L, ll R, ll l, ll r)
{
    if(r < L || R < l) return 0;
    if(l <= L && R <= r) return sum[a];

    ll mid = (L + R)/2;
    ll x = query(a * 2, L, mid, l, r);
    ll y = query(a * 2 + 1, mid + 1, R, l, r);

    return x + y;
}

int main()
{
    ll N,Q;
    cin >>N;
    for(int i=1;i<=N;i++)
    {
        scanf("%lld",num+i);
    }
    build(1,1,N);
    cin>>Q;
    char IN;
    while(Q--)
    {
        int l,r,i;
        ll x;
        cin>>IN;
        if ( IN == 'u' )
        {
            cin >>i>>x;
            update(1,1,N,i,x);
        }
        else if(IN=='q')
        {
            cin>>l>>r;
            cout << query(1,1,N,l,r) << endl;
        }

    }
}
