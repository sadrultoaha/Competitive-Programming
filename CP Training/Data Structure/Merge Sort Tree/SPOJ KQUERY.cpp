#include<iostream>
#include <iterator>
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N;i>0;i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ft              first
#define sd              second
#define bn				begin
#define en				end
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()

const int N = 100010;
vector<int>tree[5*N];
vector< pii > temp;
void build( int node , int s , int e )
{
     if( s==e  )
     {
           tree[node].pb(temp[s].sd);
            return ;
     }
     int left = node*2, right = (node*2)+1, mid = (s+e)/2;
     build(left , s , mid );
     build(right , mid+1 , e );
     merge( all(tree[left]), all(tree[right]) ,back_inserter(tree[node]));
}
int bs(vector<int>vc,int s,int e,int x)
{
    if (e >= s)
   {
        int mid =  (s+e)/2;
        if(e==s){if(vc[0]==x)return 0;}
        if(vc[mid]==x )return mid;
        else if(x<vc[mid])return bs(vc,s,mid-1,x);
        else return bs(vc,mid+1,e,x);
   }
   return -1;
}
int smallestR;
int query(int node, int s, int e, int l, int r, int k) { /// O(Nlog^2(N))

	if(s==e )return tree[node][0];

	int left = node*2, right = (node*2)+1, mid = (s+e)/2;

	int leftR = lower_bound(all(tree[right]),l)-tree[right].bn();

	int rightR = upper_bound(all(tree[right]),r)-tree[right].bn();
    //cout<<leftR<<"-"<<rightR<<"\nSm: ";
	 smallestR = rightR-leftR;
    //cout<<smallestR<<"\n";
	if(smallestR<=k)
		return query(left, s, mid, l, r, k);
	else
		return query(right, mid+1, e, l, r, (k-smallestR));

}

int main(){
	int n,q,ar[N];
	scanf("%d",&n);
	FOR(i,n)
	{
		scanf("%d",&ar[i]);
		temp.pb(mp(ar[i],i));
	}
    sort(all(temp));
	build(1,0,n-1);
	scanf("%d",&q);
	while(q--)
    {
        int i,j,k;
        scanf("%d%d%d",&i,&j,&k);
        i--;j--;
        query(1, 0, n-1, i, j, k);
        printf("%d\n",smallestR);
    }
	return 0;
}
