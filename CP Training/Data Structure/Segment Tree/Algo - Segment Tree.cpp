
/** Segment Tree **/

/// PU - Point Updates
/// RU - Range Updates
/// RQ - Range Query
// int mid =  L + ((R - L)/2);
// int mid = (L+R)/2;

const int MAX = 1000000;

int tree[2*MAX],lazy[2*MAX],arr[MAX];

void build(ll node, ll L, ll R)
{
    tree[node]=0;
    if(L == R)
    {
        tree[node]= arr[L];
        return;
    }
    ll mid = (L+R)>>1;
    ll Left = node<<1, Right = Left|1;
    build(Left, L, mid);
    build(Right, mid + 1, R);
    tree[node]= tree[Left] + tree[Right];
}

void PU(ll node, ll L, ll R, ll pos, ll val)
{
    if(L == R)
    {
        tree[node] += val;
        return;
    }
    ll mid = (L+R)>>1;
    ll Left = node<<1, Right = Left|1;
    if(pos <= mid) PU(Left, L, mid, pos, val);
    else PU(Right, mid + 1, R, pos, val);

    tree[node] = tree[Left] + tree[Right];
}


void RU(ll node, ll S, ll E, ll l, ll r , ll val)
{

    if(lazy[node] != 0) /// PROPAGATION
    {
        tree[node] += (E - S + 1) * lazy[node];

        if(S != E)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }

   if(S > E || S > r || E < l)return;


    if(S>=l && E<=r)
    {
        tree[node] += (E - S + 1) * val;

         if(S != E)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return ;
    }
    ll mid = (S+E)>>1;
    RU(node*2,S,mid,l,r,val);
    RU(node*2+1,mid+1,E,l,r,val);
    tree[node] = tree[node*2] + tree[node*2+1];
}


ll RQ(ll node, ll S, ll E, ll l, ll r)
{
    if(S > E || S > r || E < l)return 0;
    ll mid = (S+E)>>1;
    ll Left = node<<1, Right = Left|1;
     if(lazy[node] != 0)   /// PROPAGATION
    {
        tree[node] += (E - S + 1) * lazy[node];
        if(S != E)
        {
            lazy[Left] += lazy[node];
            lazy[Right] += lazy[node];
        }
        lazy[node] = 0;
    }

    if(S >= l && E <= r) return tree[node];

    ll x = RQ(Left, S, mid, l, r);
    ll y = RQ(Right, mid + 1, E, l, r);
    return x + y;
}


