/**
Solved:
1.SPOJ MKTHNUM (Fining Kth Smallest Element)
**/

const int N = 100010;
vector<int>tree[5*N];
vector< pii > temp;

void build( int node , int s , int e ) /// O(NlogN)
{
     if( s==e  )
     {
           tree[node].pb(temp[s].sd);
            return ;
     }
     int left = node<<1, right = left|1, mid = (s+e)>>1;
     //  int left = node*2, right = (node*2)+1, mid = (s+e)/2;
     build(left , s , mid );
     build(right , mid+1 , e );
     merge( all(tree[left]), all(tree[right]) ,back_inserter(tree[node]));
}

int query(int node, int s, int e, int l, int r, int k) { /// O(Nlog^2(N))

	if(s==e )return tree[node][0];

	int left = node*2, right = (node*2)+1, mid = (s+e)/2;

	int leftR = lower_bound(all(tree[left]),l)-tree[left].bn();

	int rightR = upper_bound(all(tree[left]),r)-tree[left].bn();

	int smallestR = rightR-leftR;

	if(smallestR>=k)
		return query(left, s, mid, l, r, k);
	else
		return query(right, mid+1, e, l, r, (k-smallestR));

}

int query(int node, int s,int e,int l,int r,int k)  /// O(log^2(N))
{
    if(r<S || l>e)return 0;
    if(s>=l && e<=r)
    {
        return lower_bound(all(tree[node]),k)- tree[node].bn();// {elements are less than k}
    }
    int left = node*2, right = (node*2)+1, mid = (s+e)/2;

    return query(left, s, mid, l, r, k) + query(right, mid+1, e, l, r, k);

}

