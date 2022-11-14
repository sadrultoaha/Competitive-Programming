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


int k,ans,ct;
struct node {
	int size, prior;
    int val; //value stored in the array
    int maxy; //whatever info you want to maintain in segtree for each node
    node *l, *r;
	node(){}
	node(int val) {
		size = 1;
		this->val = val;
		prior = rand();
        maxy = val;
		l = r = NULL;
	}
} *root;

typedef node* pnode;

int sz(pnode t){
    return t?t->size:0;
}
void upd_sz(pnode t){
    if(t) t->size = sz(t->l) + 1 + sz(t->r);
}

void reset(pnode t){
   if(t) t->maxy = t->val;//lazy already propagated
}
void combine(pnode& t,pnode l,pnode r){//combine segtree ranges
    if(!l || !r)return void(t = l?l:r);
    t->maxy = max(l->maxy, r->maxy) ;
    if(t->maxy <= k)t->maxy--;
}
void operation(pnode t){//operation of segtree
    if(!t)return;
    reset(t);//node represents single element of array
    combine(t,t->l,t);combine(t,t,t->r);
}

void split(pnode t, pnode &l, pnode &r, int pos, int add=0){
    if(!t) return void(l=r=NULL);
    int curr_pos = add + sz(t->l);
    if(curr_pos<=pos)//element at pos goes to "l"
            split(t->r,t->r,r,pos,curr_pos+1),l=t;
    else    split(t->l,l,t->l,pos,add),r=t;
    upd_sz(t);
    //operation(t);
}
void merge(pnode &t,pnode l,pnode r){//result //left //right array
    if(!l || !r) t = l?l:r;
    else if(l->prior>r->prior) merge(l->r,l->r,r),t=l;
    else                       merge(r->l,l,r->l),t=r;
    upd_sz(t);
    //operation(t);
}

int KPivot ( pnode t, int key )
{
        ct++;
        if ( !t ){return 0;}
        else if(t->val > key ){return(ans-sz(t->l)) + KPivot(t->l,key);}
        else return KPivot(t->r,key);

}

int main()
{
    // srand(time(NULL));
        int n;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            int v;
            scanf("%d", &v);
            pnode it = new node(v);
            if(i==0){root = it;}
            else
            {
                   pnode lf,rr, mid;
                   split(root, lf, rr, i-1);
                   merge(mid, lf, it);
                   merge(root, mid, rr);
            }
        }

        int m;
        scanf("%d", &m);
        for(int i=0;i<m;i++)
        {
           int x,y;
           scanf("%d %d %d",&x,&y,&k);
           pnode L,mid,R;
           split(root,L,mid,x-2);
           split(mid,root,R,y-x);

           ans=0,ct=0;
           ans += sz(root);
           printf("%d\n", KPivot(root,k));
           merge(mid,L,root);
           merge(root,mid,R);
        }
        return 0;
}


