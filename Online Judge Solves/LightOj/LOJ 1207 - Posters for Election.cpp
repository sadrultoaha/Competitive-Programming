#include<bits/stdc++.h>
using namespace std;
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a, x) memset(a,x,sizeof(a))
#define MAX 200010
#define ll long long
struct BIT_RUPQ {
    ll bit[MAX];
    int N;

    void init(int n) {
        MEM(bit, 0);
        N = n;
    }
    // add 'value' to each element in range [i..N]
    void add(int i, ll value) {
        for (; i < N; i |= i + 1) bit[i] += value;
    }
    // add 'value' to each element in range [a..b]
    void add(int a, int b, ll value) {
        add(a, value);
        add(b + 1, -value);
    }
    // return value of bit[i]
    ll get(int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1) res += bit[i];
        return res;
    }
};

BIT_RUPQ bit_rupq;

const int N = 100005;
int tree[N],lazy[N];

void updateRange(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != 0)
    {
        tree[node] += (end - start + 1) * lazy[node];

        if(start != end)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(start > end or start > r or end < l)return;

    if(start >= l and end <= r)
    {
        tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }

    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);
    updateRange(node*2 + 1, mid + 1, end, l, r, val);
    tree[node] = tree[node*2] + tree[node*2+1];
}

int queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)return 0;

    if(lazy[node] != 0)
    {
        tree[node] += (end - start + 1) * lazy[node];
        if(start != end)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if(start >= l and end <= r) return tree[node];

    int mid = (start + end) / 2;
    int p1 = queryRange(node*2, start, mid, l, r);
    int p2 = queryRange(node*2 + 1, mid + 1, end, l, r);
    return (p1 + p2);
}
int main()
{
    fastread()
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        map<int,int>mp;
        int n,l,r,bound;
        cin>>n;

/** brutforce

        int ar[200005];
        MEM(ar,0);
        for(int i=1;i<=n;i++)
        {
            cin>>l>>r;
            bound=r;
            for(int j=l;j<=r;j++)
            {
                ar[j]=i;
            }
        }
        for(int i=1;i<=bound;i++)
        {
            mp[ar[i]]++;
        }

**/

/** BIT_RUPQ

        bit_rupq.init(200001);
        for(int j=1;j<=n;j++)
        {
            cin>>l>>r;
            bound=r;
            bit_rupq.add(l, r, 1);
            for(int i=1;i<=bound;i++)
            {
                cout<<bit_rupq.get(i)<<" ";
                mp[bit_rupq.get(i)]++;
            }
            cout<<"\n";
        }
**/

        ll ar[200005];
        MEM(ar,0);
        for(int i=1;i<=n;i++)
        {
            cin>>l>>r;
            bound=r;
            updateRange(1,1,bound,l,r,2);
        }
        cout<<queryRange(1,1,bound,1,bound);
//        for(int i=1;i<=bound;i++)
//        {
//            cout<<ar[i]<<" ";
//            mp[ar[i]]++;
//        }

        cout<<"Case "<<i<<": "<<mp.size()<<"\n";
    }

}
