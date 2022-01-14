#include<bits/stdc++.h>
using namespace std;
#define mx 100001

 struct info {
    long long prop, sum;
} tree[mx * 3];
long long arr[mx];

void init(long long node, long long b, long long e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        tree[node].prop =0;
        return;
    }
    long long Left = node * 2;
    long long Right = node * 2 + 1;
    long long mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
    tree[node].prop = 0;
}

void update(long long node, long long b, long long e, long long i, long long j, long long x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    long long Left = node * 2;
    long long Right = (node * 2) + 1;
    long long mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}

 long long query(long long node, long long b, long long e, long long i, long long j, long long carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    long long Left = node << 1;
    long long Right = (node << 1) + 1;
    long long mid = (b + e) >> 1;

    long long p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    long long p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}
int main()
{
   long long N,Q,op,f,l,v,T;
   cin>>T;
   while(T--){
   cin>>N>>Q;

    init(1,1,N);
   for(long long i=1;i<=Q;i++){
    cin>>op;
        if(op==0)
        {
            cin>>f>>l>>v;
            update(1,1,N,f,l,v);
        }
        else if(op==1)
        {
            cin>>f>>l;
            cout<<query(1,1,N,f,l)<<endl;

        }
   }
   }
}
