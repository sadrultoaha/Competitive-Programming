#include<bits/stdc++.h>
using namespace std;
#define mx 100001
long long toggle[2*mx],on[2*mx];


void Propagate(long long at, long long L, long long R)
{
    long long mid = (L + R)/2;
    long long leftat = at * 2, leftL = L, leftR = mid;
    long long rightat = at * 2 + 1, rightL = mid + 1,rightR = R;
    toggle[at] = 0;
    toggle[leftat] ^= 1;
    toggle[rightat] ^= 1;
    on[leftat] = leftR - leftL + 1 - on[leftat];
    on[rightat] = rightR - rightL + 1 - on[rightat];
}
void update(long long node, long long L, long long R, long long i, long long j)
{
    if(L>j||R<i) return ;
    if(L>=i && R<=j)
    {
        toggle[node] ^=1;
        on[node]=R-L+1-on[node];
        return ;
    }
    if(toggle[node])Propagate(node,L,R);

    long long mid=(L+R)/2;
    update(node*2,L,mid,i,j);
    update(node*2+1,mid+1,R,i,j);
    on[node]=on[node*2]+on[node*2+1];
}

 long long query(long long node, long long L, long long R, long long i, long long j)
{
    if(L>j||R<i) return 0;
    if(L>=i && R<=j)
    {
        return on[node];
    }
    if(toggle[node])Propagate(node,L,R);
    long long mid=(L+R)/2;
    long long x=query(node*2,L,mid,i,j);
    long long y=query(node*2+1,mid+1,R,i,j);

    return x+y;

}
int main()
{
   long long N,Q,op,f,l,v,T;
    cin>>N>>Q;
   for(long long i=1;i<=Q;i++){
    cin>>op>>f>>l;
        if(op==0)
        {
            update(1,1,N,f,l);
        }
        else if(op==1)
        {
            cout<<query(1,1,N,f,l)<<endl;
        }
   }
}
