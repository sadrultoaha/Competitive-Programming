/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))

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

vector<int>tree[5*30000];
int A[30000];

void build_tree( int cur , int l , int r )
{
     if( l==r )
     {
            tree[cur].push_back( A[ l ] );
            return ;
     }
     //int left = cur<<1,right =left|1;
     int mid = l+(r-l)/2;
     build_tree(2*cur+1 , l , mid ); // Build left tree
     build_tree(2*cur+2 , mid+1 , r ); // Build right tree
    //tree[cur] = merge( tree[2*cur+1] , tree[2*cur+2] ); //Merging the two sorted arrays
     merge(tree[2*cur+1].begin(), tree[2*cur+1].end(), tree[2*cur+2].begin(), tree[2*cur+2].end(), back_inserter(tree[cur]));

}

int query(int t, int i, int j, int l, int r, int k) {

	if (i == j) {
		return tree[t][0];
	}
	int left = t<<1, right = left|1, mid = (i+j)/2, total;

	auto it = lower_bound(tree[left].begin(), tree[left].end(),r);

    total = it -  upper_bound(tree[left].begin(), tree[left].end(),l) ;


	if (total <= k) {
		return query(left, i, mid, l, r, k);
	}
	else {
		return query(right, mid+1, j, l, r, k-total);
	}

}

int main()
{
        int N;
        scanf("%d", &N);
        for(int i=0;i<N;i++)
        {
            scanf("%d", &A[i]);

        }
        build_tree(1,0,N-1);

        int m;
        scanf("%d", &m);
        for(int i=0;i<m;i++)
        {
           int x,y,k;
           scanf("%d %d %d",&x,&y,&k);
           x--;y--;
           printf("%d\n",query(1,0,N-1,x,y,k));

        }
        return 0;

}

