/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
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

#define mx 100001
ll toggle[2*mx],on[2*mx];

void Propagate(ll at, ll L, ll R)
{
    ll mid = (L + R)/2;
    ll leftat = at * 2, leftL = L, leftR = mid;
    ll rightat = at * 2 + 1, rightL = mid + 1,rightR = R;
    toggle[at] = 0;
    toggle[leftat] ^= 1;
    toggle[rightat] ^= 1;
    on[leftat] = leftR - leftL + 1 - on[leftat];
    on[rightat] = rightR - rightL + 1 - on[rightat];
}
void update(ll node, ll L, ll R, ll i, ll j)
{
    if(L>j||R<i) return ;
    if(L>=i && R<=j)
    {
        toggle[node] ^=1;
        on[node]=R-L+1-on[node];
        return ;
    }
    if(toggle[node])Propagate(node,L,R);

    ll mid=(L+R)/2;
    update(node*2,L,mid,i,j);
    update(node*2+1,mid+1,R,i,j);
    on[node]=on[node*2]+on[node*2+1];
}

 ll query(ll node, ll L, ll R, ll i, ll j)
{
    if(L>j||R<i) return 0;
    if(L>=i && R<=j)
    {
        return on[node];
    }
    if(toggle[node])Propagate(node,L,R);
    ll mid=(L+R)/2;
    ll x=query(node*2,L,mid,i,j);
    ll y=query(node*2+1,mid+1,R,i,j);

    return x+y;

}
int main()
{
    //read;
   ll N,Q,op,f,l,v,T;
    cin>>N>>Q;
   for(ll i=0;i<Q;i++){
    cin>>op>>f>>l;
        if(op==0)
        {
            update(1,1,N,f,l);
        }
        else if(op==1)
        {
            cout<<query(1,1,N,f,l)<<"\n";
        }
   }
}
